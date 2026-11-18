// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Sockets
// Functions: 44

// `dynamic_initializer_for_'CVarDisableIPv6'' @ 140f4b970

void __cdecl _dynamic_initializer_for__CVarDisableIPv6__(void)

{
  int local_res8 [8];
  
  local_res8[0] = 1;
  TAutoConsoleVariable<int>::TAutoConsoleVariable<int>
            (&CVarDisableIPv6,L"net.DisableIPv6",local_res8,
             L"If true, IPv6 will not resolve and its usage will be avoided when possible",0);
  atexit(_dynamic_atexit_destructor_for__CVarDisableIPv6__);
  return;
}

// `dynamic_initializer_for_'FSocketSubsystemExecs'' @ 140f4b9c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__FSocketSubsystemExecs__(void)

{
  FStaticSelfRegisteringExec::FStaticSelfRegisteringExec
            (&FSocketSubsystemExecs,SocketSubsystemCommandHandler);
  atexit(_dynamic_atexit_destructor_for__FSocketSubsystemExecs__);
  return;
}

// `dynamic_initializer_for_'LogMultichannelTCP'' @ 140f4b9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMultichannelTCP__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogMultichannelTCP,L"LogMultichannelTCP",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMultichannelTCP__);
  return;
}

// `dynamic_initializer_for_'LogSockets'' @ 140f4ba30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSockets__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogSockets,L"LogSockets",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSockets__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSockets'' @ 140f4ba70

void __cdecl _dynamic_initializer_for__ModuleRegistrantSockets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Sockets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Sockets",7);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FSocketSubsystemModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 1431088a0

void * __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this = &TFunction_OwnedObject<`RunAsyncGAIQuery'::`26'::<lambda_1>,0,0>::_vftable_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143109010

void * __thiscall
FSocketSubsystemModule::_scalar_deleting_destructor_(FSocketSubsystemModule *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7FSocketSubsystemModule__6B_;
  *(undefined4 *)&(this->SocketSubsystems).field_0x48 = 0;
  pvVar1 = *(void **)&(this->SocketSubsystems).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,ISocketSubsystem_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SocketSubsystems);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// DestructItems<FAddressInfoResultData,int> @ 143109470

void __cdecl DestructItems<FAddressInfoResultData,int>(FAddressInfoResultData *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Address).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FInternetAddr,1>,int> @ 1431094b0

void __cdecl
DestructItems<TSharedPtr<FInternetAddr,1>,int>(TSharedPtr<FInternetAddr,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedRef<FInternetAddr,1>,int> @ 1431094f0

void __cdecl
DestructItems<TSharedRef<FInternetAddr,1>,int>(TSharedRef<FInternetAddr,1> *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &param_1->SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FThreadSafeStaticStat<`FGetAddressInfoTask::GetStatId'::__l2::FStat_FGetAddressInfoTask> @ 14310ac00

/* WARNING: Enum "Type": Some values do not have unique names */

FThreadSafeStaticStat<_public:_struct_TStatId___cdecl_FGetAddressInfoTask::GetStatId(void)const_::_2_::FStat_FGetAddressInfoTask>
* __thiscall
FThreadSafeStaticStat<`FGetAddressInfoTask::GetStatId'::__l2::FStat_FGetAddressInfoTask>::
FThreadSafeStaticStat<_FGetAddressInfoTask::GetStatId_::__l2::FStat_FGetAddressInfoTask>(void *this)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  *(undefined8 *)this = 0;
  if (*(longlong *)this == 0) {
    pFVar1 = ::FName::FName(local_res8,"FGetAddressInfoTask");
    FThreadSafeStaticStatBase::DoSetup
              (this,*pFVar1,L"FGetAddressInfoTask","STATGROUP_ThreadPoolAsyncTasks",
               "STATCAT_Advanced",L"ThreadPool Async Tasks",true,true,ST_int64,true,false,
               MCR_Invalid);
  }
  return this;
}

// ~TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0> @ 14310b4c0

void __thiscall
UE::Core::Private::Function::TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::
~TFunction_OwnedObject<_RunAsyncGAIQuery_::__l26::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this = &TFunction_OwnedObject<`RunAsyncGAIQuery'::`26'::<lambda_1>,0,0>::_vftable_
  ;
  return;
}

// operator<< @ 14310bb10

FArchive * __cdecl operator<<(FArchive *param_1,FNFSMessageHeader *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  bool bVar5;
  FArchive *pFVar6;
  uint uVar7;
  
  uVar1 = param_2->Magic;
  puVar2 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,&param_2->Magic);
    }
  }
  else {
    param_2->Magic = *puVar2;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  if ((param_1->field_0x28 & 1) != 0) {
    if ((uVar1 == 0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DesiredMagic",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\NetworkMessage.h"
                           ,0xcf,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar4)();
      return pFVar6;
    }
    if (param_2->Magic == uVar1) goto LAB_14310bbe5;
    uVar7 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if ((uVar1 == uVar7) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("DesiredMagic != DesiredMagicSwapped",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Public\\NetworkMessage.h"
                           ,0xd3,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      pFVar6 = (FArchive *)(*pcVar4)();
      return pFVar6;
    }
    if (param_2->Magic == uVar7) {
      param_1->field_0x2a = param_1->field_0x2a ^ 1;
      param_2->Magic = uVar1;
      goto LAB_14310bbe5;
    }
  }
  if (param_2->Magic != uVar1) {
    return param_1;
  }
LAB_14310bbe5:
  puVar2 = &param_2->PayloadSize;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
    }
  }
  else {
    *puVar2 = *puVar3;
    **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  }
  puVar2 = &param_2->PayloadCrc;
  puVar3 = (uint *)**(undefined8 **)&param_1->field_0x8;
  if ((uint *)(*(undefined8 **)&param_1->field_0x8)[1] < puVar3 + 1) {
    if ((param_1->field_0x2a & 1) != 0) {
      FArchive::SerializeByteOrderSwapped(param_1,puVar2);
      return param_1;
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,puVar2,4);
    return param_1;
  }
  *puVar2 = *puVar3;
  **(longlong **)&param_1->field_0x8 = **(longlong **)&param_1->field_0x8 + 4;
  return param_1;
}

// `vector_deleting_destructor' @ 14310c210

void * __thiscall FRecvMulti::FRecvData::_vector_deleting_destructor_(FRecvData *this,uint param_1)

{
  FRecvData *pFVar1;
  FRecvData *pFVar2;
  uint *puVar3;
  
  if ((param_1 & 2) != 0) {
    puVar3 = this[-1].BytesReadPtr;
    pFVar2 = this + (longlong)puVar3;
    for (; puVar3 != (uint *)0x0; puVar3 = (uint *)((longlong)puVar3 + -1)) {
      pFVar1 = pFVar2 + -1;
      pFVar2 = pFVar2 + -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar1->Source).SharedReferenceCount.ReferenceController);
    }
    if ((param_1 & 1) != 0) {
      operator_delete__(&this[-1].BytesReadPtr,(longlong)this[-1].BytesReadPtr * 0x20 + 8);
    }
    return &this[-1].BytesReadPtr;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Source).SharedReferenceCount.ReferenceController);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c2d0

void * __thiscall
FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker>::_scalar_deleting_destructor_
          (FAsyncTask<FResolveInfoAsync::FResolveInfoAsyncWorker> *this,uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c310

void * __thiscall
FAutoDeleteAsyncTask<FGetAddressInfoTask>::_scalar_deleting_destructor_
          (FAutoDeleteAsyncTask<FGetAddressInfoTask> *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  
  if (*(longlong *)&(this->Task).CallbackFunction != 0) {
    plVar3 = *(longlong **)&(this->Task).CallbackFunction.field_0x28;
    plVar6 = (longlong *)&(this->Task).CallbackFunction.field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  pFVar4 = (this->Task).QueryService.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Task).QueryHost.Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7IQueuedWork__6B_;
  puVar5 = (undefined8 *)this->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar5 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar5)(puVar5,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c3c0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FInternetAddrBSD,SharedPointerInternals::DefaultDeleter<FInternetAddrBSD>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FInternetAddrBSD,SharedPointerInternals::DefaultDeleter<FInternetAddrBSD>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c400

void * __thiscall FInternetAddr::_scalar_deleting_destructor_(FInternetAddr *this,uint param_1)

{
  *this = (FInternetAddr)&___7FInternetAddr__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c440

void * __thiscall
FInternetAddrBSD::_scalar_deleting_destructor_(FInternetAddrBSD *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FInternetAddr__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x90);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c480

void * __thiscall FRecvMulti::_scalar_deleting_destructor_(FRecvMulti *this,uint param_1)

{
  FRecvData *pFVar1;
  FRecvData *pFVar2;
  FRecvData *pFVar3;
  uint *puVar4;
  
  pFVar1 = (this->Packets).Ptr;
  if (pFVar1 != (FRecvData *)0x0) {
    puVar4 = pFVar1[-1].BytesReadPtr;
    pFVar3 = pFVar1 + (longlong)puVar4;
    for (; puVar4 != (uint *)0x0; puVar4 = (uint *)((longlong)puVar4 + -1)) {
      pFVar2 = pFVar3 + -1;
      pFVar3 = pFVar3 + -1;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((pFVar2->Source).SharedReferenceCount.ReferenceController);
    }
    operator_delete__(&pFVar1[-1].BytesReadPtr,(longlong)pFVar1[-1].BytesReadPtr * 0x20 + 8);
  }
  this->_padding_ = (longlong)&___7FVirtualDestructor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c530

void * __thiscall FResolveInfo::_scalar_deleting_destructor_(FResolveInfo *this,uint param_1)

{
  *this = (FResolveInfo)&___7FResolveInfo__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c570

void * __thiscall
FResolveInfoAsync::_scalar_deleting_destructor_(FResolveInfoAsync *this,uint param_1)

{
  FAsyncTaskBase::~FAsyncTaskBase((FAsyncTaskBase *)&this->AsyncTask);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Addr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FResolveInfo__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x198);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c5d0

void * __thiscall
FResolveInfoCached::_scalar_deleting_destructor_(FResolveInfoCached *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Addr).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FResolveInfo__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c620

void * __thiscall FSocket::_scalar_deleting_destructor_(FSocket *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FSocket__6B_;
  pFVar3 = (this->SocketDescription).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c6a0

void * __thiscall FSocketBSD::_scalar_deleting_destructor_(FSocketBSD *this,uint param_1)

{
  ~FSocketBSD(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c6e0

void * __thiscall
FSocketSubsystemBSD::_scalar_deleting_destructor_(FSocketSubsystemBSD *this,uint param_1)

{
  *(undefined4 *)&this->field_0x78 = 0;
  *(undefined ***)this = &___7ISocketSubsystem__6B_;
  if (*(void **)&this->field_0x70 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x70);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x30);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c760

void * __thiscall
FSocketSubsystemWindows::_scalar_deleting_destructor_(FSocketSubsystemWindows *this,uint param_1)

{
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TSharedPtr<FInternetAddr,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x88);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c7e0

void * __thiscall FSocketWindows::_scalar_deleting_destructor_(FSocketWindows *this,uint param_1)

{
  FSocketBSD::~FSocketBSD((FSocketBSD *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c820

void * __thiscall
FVirtualDestructor::_scalar_deleting_destructor_(FVirtualDestructor *this,uint param_1)

{
  *this = (FVirtualDestructor)&___7FVirtualDestructor__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14310c860

void * __thiscall
ISocketSubsystem::_scalar_deleting_destructor_(ISocketSubsystem *this,uint param_1)

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
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->HostNameCacheSync);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// CreateSocketSubsystem @ 14310e170

FName __cdecl CreateSocketSubsystem(FSocketSubsystemModule *param_1)

{
  code *pcVar1;
  FSocketSubsystemWindows *pFVar2;
  char cVar3;
  FSocketSubsystemWindows *pFVar4;
  longlong *in_RDX;
  FName local_res18;
  FString local_18;
  
  FName::FName(&local_res18,L"WINDOWS");
  pFVar2 = FSocketSubsystemWindows::SocketSingleton;
  if ((FSocketSubsystemWindows::SocketSingleton == (FSocketSubsystemWindows *)0x0) &&
     (pFVar4 = operator_new(0x88), pFVar2 = (FSocketSubsystemWindows *)0x0,
     pFVar4 != (FSocketSubsystemWindows *)0x0)) {
    pFVar4->_padding_ = (longlong)&___7ISocketSubsystem__6B_;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar4->_padding_,4000);
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0x80;
    *(undefined4 *)&pFVar4->_padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&pFVar4->_padding_ + 4) = 0;
    pFVar4->_padding_ = 0;
    *(undefined4 *)&pFVar4->_padding_ = 0;
    pFVar4->_padding_ = (longlong)&___7FSocketSubsystemWindows__6B_;
    pFVar4->bTriedToInit = false;
    pFVar2 = pFVar4;
  }
  FSocketSubsystemWindows::SocketSingleton = pFVar2;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  pcVar1 = *(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 8);
  if (pcVar1 == FSocketSubsystemWindows::Init) {
    cVar3 = FSocketSubsystemWindows::Init(FSocketSubsystemWindows::SocketSingleton,&local_18);
  }
  else {
    cVar3 = (*pcVar1)();
  }
  if (cVar3 == '\0') {
    if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
      pcVar1 = *(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 0x10);
      if (pcVar1 == FSocketSubsystemWindows::Shutdown) {
        WSACleanup();
      }
      else {
        (*pcVar1)();
      }
      if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
        (**(code **)FSocketSubsystemWindows::SocketSingleton->_padding_)
                  (FSocketSubsystemWindows::SocketSingleton,1);
      }
      FSocketSubsystemWindows::SocketSingleton = (FSocketSubsystemWindows *)0x0;
    }
    param_1->_padding_ = 0;
  }
  else {
    (**(code **)(*in_RDX + 0x50))();
    param_1->_padding_ = (longlong)local_res18;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// DebugPrintGaiResults @ 14310e380

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl DebugPrintGaiResults(ISocketSubsystem *param_1,FAddressInfoResult *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FName *this;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  undefined1 local_res10 [8];
  void *local_38 [2];
  FString local_28;
  
  if (4 < (byte)LogSockets._0_1_) {
    ISocketSubsystem::GetSocketError(param_1,param_2->ReturnCode);
    UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
  }
  piVar7 = &(param_2->Results).ArrayNum;
  uVar5 = 0;
  if (0 < *piVar7) {
    lVar6 = 0;
    do {
      if (4 < (byte)LogSockets._0_1_) {
        uVar4 = 0;
        if ((int)uVar5 < (param_2->Results).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((param_2->Results).AllocatorInstance.Data + lVar6 + 0x18);
        this = (FName *)(**(code **)(*plVar1 + 0xa8))(plVar1,local_res10);
        FName::ToString(this,&local_28);
        uVar4 = 0;
        if ((int)uVar5 < (param_2->Results).ArrayNum) {
          uVar4 = ~uVar5 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        plVar1 = *(longlong **)((param_2->Results).AllocatorInstance.Data + lVar6 + 0x18);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_38,0);
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        if (local_38[0] != (void *)0x0) {
          FMemory::Free(local_38[0]);
        }
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 0x28;
    } while ((int)uVar5 < *piVar7);
  }
  return;
}

// DestroySocketSubsystem @ 14310e7c0

void __cdecl DestroySocketSubsystem(FSocketSubsystemModule *param_1)

{
  code *pcVar1;
  FName *pFVar2;
  FName local_res8;
  
  pcVar1 = *(code **)(param_1->_padding_ + 0x58);
  pFVar2 = FName::FName(&local_res8,L"WINDOWS");
  (*pcVar1)(param_1,*pFVar2);
  if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
    (**(code **)(FSocketSubsystemWindows::SocketSingleton->_padding_ + 0x10))();
    if (FSocketSubsystemWindows::SocketSingleton != (FSocketSubsystemWindows *)0x0) {
      (**(code **)FSocketSubsystemWindows::SocketSingleton->_padding_)
                (FSocketSubsystemWindows::SocketSingleton,1);
    }
    FSocketSubsystemWindows::SocketSingleton = (FSocketSubsystemWindows *)0x0;
  }
  return;
}

// GetSocketModuleName @ 143113710

FName __cdecl GetSocketModuleName(FString *param_1)

{
  bool bVar1;
  FName *pFVar2;
  FString *in_RDX;
  ForAnyElementType FVar3;
  wchar_t *pwVar4;
  int iVar5;
  FName local_res8;
  FString local_28;
  FString local_18;
  
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FString::FString(&local_28,L"Sockets");
  iVar5 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar5 = 0;
  }
  pwVar4 = L"";
  FVar3.Data = (FScriptContainerElement *)L"";
  if (local_28.Data.ArrayNum != 0) {
    FVar3.Data = local_28.Data.AllocatorInstance.Data;
  }
  bVar1 = FString::StartsWith(in_RDX,(wchar_t *)FVar3.Data,iVar5,CaseSensitive);
  if (bVar1) {
    if ((in_RDX->Data).ArrayNum != 0) {
      pwVar4 = (wchar_t *)(in_RDX->Data).AllocatorInstance.Data;
    }
    pFVar2 = FName::FName(&local_res8,pwVar4);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pFVar2;
  }
  else {
    FString::ConcatFF(&local_18,&local_28,in_RDX);
    if (local_18.Data.ArrayNum != 0) {
      pwVar4 = (wchar_t *)local_18.Data.AllocatorInstance.Data;
    }
    pFVar2 = FName::FName(&local_res8,pwVar4);
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pFVar2;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// MapIPv4ToIPv6 @ 1431144f0

void __cdecl MapIPv4ToIPv6(uint *param_1,in6_addr *param_2)

{
  *(undefined8 *)&param_2->u = 0;
  *(undefined8 *)((longlong)&param_2->u + 8) = 0;
  (param_2->u).Word[5] = 0xffff;
  (param_2->u).Byte[0xc] = (uchar)*param_1;
  (param_2->u).Byte[0xd] = *(uchar *)((longlong)param_1 + 1);
  (param_2->u).Byte[0xe] = *(uchar *)((longlong)param_1 + 2);
  (param_2->u).Byte[0xf] = *(uchar *)((longlong)param_1 + 3);
  return;
}

// RunAddressSerialize @ 1431159b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl RunAddressSerialize(FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  ISocketSubsystem *pIVar3;
  FName *this;
  FName local_res8;
  undefined1 local_res10 [8];
  longlong *local_38;
  TReferenceControllerBase<1> *local_30;
  void *local_28 [2];
  FString local_18;
  
  if ((param_1->Data).ArrayNum < 2) {
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
      return;
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pIVar3 = ISocketSubsystem::Get(&local_res8);
    if (pIVar3 != (ISocketSubsystem *)0x0) {
      (**(code **)(pIVar3->_padding_ + 0x58))(pIVar3,&local_38,param_1);
      if (local_38 == (longlong *)0x0) {
        if (2 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        }
      }
      else if (4 < (byte)LogSockets._0_1_) {
        if ((local_38 == (longlong *)0x0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this = (FName *)(**(code **)(*local_38 + 0xa8))(local_38,local_res10);
        FName::ToString(this,&local_18);
        if ((local_38 == (longlong *)0x0) &&
           (bVar2 = FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        (**(code **)(*local_38 + 0x80))(local_38,local_28,0);
        UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        if (local_28[0] != (void *)0x0) {
          FMemory::Free(local_28[0]);
        }
        if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_30);
          return;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
      return;
    }
    if (2 < (byte)LogSockets._0_1_) {
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
      return;
    }
  }
  return;
}

// SocketSubsystemCommandHandler @ 143117d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __cdecl SocketSubsystemCommandHandler(UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FString *pFVar6;
  ISocketSubsystem *pIVar7;
  undefined **ppuVar8;
  undefined ***pppuVar9;
  TSharedRef<FInternetAddr,1> *pTVar10;
  TSharedPtr<FInternetAddr,1> *pTVar11;
  TSharedRef<FInternetAddr,1> *pTVar12;
  TSharedPtr<FInternetAddr,1> *pTVar13;
  wchar_t *pwVar14;
  undefined1 auStack_218 [32];
  undefined2 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  wchar_t *local_1d0;
  undefined1 local_1c8 [8];
  TSharedPtr<FInternetAddr,1> *local_1c0;
  undefined8 local_1b8;
  TSharedRef<FInternetAddr,1> *local_1b0;
  int local_1a8;
  FName local_1a0;
  undefined8 local_198;
  FName local_190;
  undefined8 local_188;
  FName local_180;
  LARGE_INTEGER local_178;
  longlong *local_170;
  TReferenceControllerBase<1> *local_168;
  longlong *local_160;
  TReferenceControllerBase<1> *local_158;
  FString local_150;
  FString local_140;
  FString local_130;
  void *local_120 [2];
  void *local_110 [2];
  void *local_100 [2];
  void *local_f0 [3];
  code *local_d8 [2];
  FFunctionStorage local_c8;
  FAddressInfoResult local_a8;
  code *local_58;
  undefined **local_48;
  ISocketSubsystem *local_40;
  double local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_218;
  local_1d0 = param_2;
  bVar3 = FParse::Command(&local_1d0,L"SOCKETSUB",true);
  if (!bVar3) {
    return false;
  }
  bVar3 = FParse::Command(&local_1d0,L"GAI",true);
  if (!bVar3) {
    bVar3 = FParse::Command(&local_1d0,L"SERIALIZE",true);
    if (bVar3) {
      pFVar6 = FParse::Token(&local_140,&local_1d0,true);
      RunAddressSerialize(pFVar6);
      if (local_140.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_140.Data.AllocatorInstance.Data);
      return true;
    }
    bVar3 = FParse::Command(&local_1d0,L"ASYNCGAI",true);
    if (!bVar3) {
      local_180.ComparisonIndex.Value = 0;
      local_180.Number = 0;
      pIVar7 = ISocketSubsystem::Get(&local_180);
      if ((pIVar7 == (ISocketSubsystem *)0x0) &&
         (bVar3 = FDebug::CheckVerifyFailedImpl2
                            ("SocketSub",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Sockets\\Private\\SocketSubsystem.cpp"
                             ,0x2e9,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
      bVar3 = FParse::Command(&local_1d0,L"GETBINDADDRESSES",true);
      if (bVar3) {
        (**(code **)(pIVar7->_padding_ + 0xd8))(pIVar7,&local_1b0);
        if (4 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        }
        iVar2 = local_1a8;
        pTVar12 = local_1b0 + local_1a8;
        pTVar10 = local_1b0;
        while( true ) {
          if (local_1a8 != iVar2) {
            `TCheckedPointerIterator<TSharedRef<FInternetAddr,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1c8);
          }
          if (pTVar10 == pTVar12) break;
          if (4 < (byte)LogSockets._0_1_) {
            (**(code **)((longlong)*pTVar10->Object + 0x80))(pTVar10->Object,local_120,0);
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
            if (local_120[0] != (void *)0x0) {
              FMemory::Free(local_120[0]);
            }
          }
          pTVar10 = pTVar10 + 1;
        }
        DestructItems<TSharedRef<FInternetAddr,1>,int>(local_1b0,local_1a8);
        if (local_1b0 == (TSharedRef<FInternetAddr,1> *)0x0) {
          return true;
        }
        FMemory::Free(local_1b0);
        return true;
      }
      bVar3 = FParse::Command(&local_1d0,L"GETADAPTERS",true);
      if (!bVar3) {
        bVar3 = FParse::Command(&local_1d0,L"GETLOCALHOST",true);
        if (bVar3) {
          local_1d8 = 0;
          (**(code **)(pIVar7->_padding_ + 0xe0))(pIVar7,&local_170,param_3,&local_1d8);
          local_158 = local_168;
          if (4 < (byte)LogSockets._0_1_) {
            (**(code **)(*local_170 + 0x80))(local_170,local_100,0);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)&PTR_u_LocalHostAddr_i_150a3e938,
                       (FLogCategoryBase *)&LogSockets);
            local_158 = local_168;
            if (local_100[0] != (void *)0x0) {
              FMemory::Free(local_100[0]);
              local_158 = local_168;
            }
          }
        }
        else {
          bVar3 = FParse::Command(&local_1d0,L"GETBINDADDR",true);
          if (!bVar3) {
            return true;
          }
          (**(code **)(pIVar7->_padding_ + 0xd0))(pIVar7,&local_160,param_3);
          if (4 < (byte)LogSockets._0_1_) {
            (**(code **)(*local_160 + 0x80))(local_160,local_f0,0);
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
            if (local_f0[0] != (void *)0x0) {
              FMemory::Free(local_f0[0]);
            }
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_158);
        return true;
      }
      local_1c0 = (TSharedPtr<FInternetAddr,1> *)0x0;
      local_1b8 = 0;
      cVar5 = (**(code **)(pIVar7->_padding_ + 200))(pIVar7,&local_1c0);
      if (cVar5 == '\0') {
        if (2 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        }
      }
      else {
        if (4 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
        }
        iVar2 = (int)local_1b8;
        pTVar13 = local_1c0 + (int)local_1b8;
        pTVar11 = local_1c0;
        while( true ) {
          if ((int)local_1b8 != iVar2) {
            local_1d7[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<FInternetAddr,1>,int,0>::operator!='::__l2::
            <lambda_1>::operator()(local_1d7);
          }
          if (pTVar11 == pTVar13) break;
          if (4 < (byte)LogSockets._0_1_) {
            if ((pTVar11->Object == (FInternetAddr *)0x0) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar3)) {
              pcVar1 = (code *)swi(3);
              uVar4 = (*pcVar1)();
              return (bool)uVar4;
            }
            (**(code **)((longlong)*pTVar11->Object + 0x80))(pTVar11->Object,local_110,0);
            UE::Logging::Private::BasicLog<5>(&LOG_Static,(FLogCategoryBase *)&LogSockets);
            if (local_110[0] != (void *)0x0) {
              FMemory::Free(local_110[0]);
            }
          }
          pTVar11 = pTVar11 + 1;
        }
      }
      DestructItems<TSharedPtr<FInternetAddr,1>,int>(local_1c0,(int)local_1b8);
      if (local_1c0 == (TSharedPtr<FInternetAddr,1> *)0x0) {
        return true;
      }
      FMemory::Free(local_1c0);
      return true;
    }
    pFVar6 = FParse::Token(&local_130,&local_1d0,true);
    if ((pFVar6->Data).ArrayNum < 2) {
      if ((byte)LogSockets._0_1_ < 3) goto LAB_14311805f;
      ppuVar8 = &PTR_u_SOCKETSUB_ASYNC_150a3e4c0;
    }
    else {
      local_190.ComparisonIndex.Value = 0;
      local_190.Number = 0;
      pIVar7 = ISocketSubsystem::Get(&local_190);
      if (pIVar7 != (ISocketSubsystem *)0x0) {
        QueryPerformanceCounter(&local_178);
        local_48 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`RunAsyncGAIQuery'::`26'::<lambda_1>,0,0>::_vftable_;
        local_30 = (undefined ***)0x0;
        local_58 = UE::Core::Private::Function::
                   TFunctionRefCaller<`RunAsyncGAIQuery'::__l26::<lambda_1>,void,FAddressInfoResult>
                   ::Call;
        pcVar1 = *(code **)(pIVar7->_padding_ + 0x50);
        local_188 = 0;
        local_d8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`RunAsyncGAIQuery'::__l26::<lambda_1>,void,FAddressInfoResult>
                      ::Call;
        local_c8.HeapAllocation = (void *)0x0;
        local_38 = (double)local_178.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                   __real_4170000000000000;
        if ((pFVar6->Data).ArrayNum == 0) {
          pwVar14 = L"";
        }
        else {
          pwVar14 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
        }
        local_40 = pIVar7;
        UE::Core::Private::Function::
        TFunction_OwnedObject<`RunAsyncGAIQuery'::__l26::<lambda_1>,0,0>::CloneToEmptyStorage
                  (&local_48,&local_c8);
        local_1e8 = 0;
        local_1f0 = local_188;
        local_1f8 = 0;
        (*pcVar1)(pIVar7,local_d8,pwVar14,0);
        if (local_58 != (code *)0x0) {
          pppuVar9 = &local_48;
          if (local_30 != (undefined ***)0x0) {
            pppuVar9 = local_30;
          }
          (*(code *)(*pppuVar9)[2])();
        }
        goto LAB_14311805f;
      }
      if ((byte)LogSockets._0_1_ < 3) goto LAB_14311805f;
      ppuVar8 = &PTR_u_Failed_to_get_s_150a3e620;
    }
    UE::Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)ppuVar8,(FLogCategoryBase *)&LogSockets);
LAB_14311805f:
    if (local_130.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return true;
    }
    FMemory::Free(local_130.Data.AllocatorInstance.Data);
    return true;
  }
  pFVar6 = FParse::Token(&local_150,&local_1d0,true);
  if ((pFVar6->Data).ArrayNum < 2) {
    if ((byte)LogSockets._0_1_ < 3) goto LAB_143117eaf;
    ppuVar8 = &PTR_u_SOCKETSUB_GAI_r_150a3e380;
  }
  else {
    local_1a0.ComparisonIndex.Value = 0;
    local_1a0.Number = 0;
    pIVar7 = ISocketSubsystem::Get(&local_1a0);
    if (pIVar7 != (ISocketSubsystem *)0x0) {
      local_198 = 0;
      if ((pFVar6->Data).ArrayNum == 0) {
        pwVar14 = L"";
      }
      else {
        pwVar14 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
      }
      local_1e8 = 0;
      local_1f0 = 0;
      local_1f8 = 0x89;
      (**(code **)(pIVar7->_padding_ + 0x40))(pIVar7,&local_a8,pwVar14,0);
      if (local_a8.Results.ArrayNum < 1) {
        if (2 < (byte)LogSockets._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Did_not_get_res_150a3e410,
                     (FLogCategoryBase *)&LogSockets);
        }
      }
      else {
        DebugPrintGaiResults(pIVar7,&local_a8);
      }
      DestructItems<FAddressInfoResultData,int>
                ((FAddressInfoResultData *)local_a8.Results.AllocatorInstance.Data,
                 local_a8.Results.ArrayNum);
      if ((FAddressInfoResultData *)local_a8.Results.AllocatorInstance.Data !=
          (FAddressInfoResultData *)0x0) {
        FMemory::Free(local_a8.Results.AllocatorInstance.Data);
      }
      if (local_a8.CanonicalNameResult.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
         ) {
        FMemory::Free(local_a8.CanonicalNameResult.Data.AllocatorInstance.Data);
      }
      if (local_a8.QueryServiceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.QueryServiceName.Data.AllocatorInstance.Data);
      }
      if (local_a8.QueryHostName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.QueryHostName.Data.AllocatorInstance.Data);
      }
      goto LAB_143117eaf;
    }
    if ((byte)LogSockets._0_1_ < 3) goto LAB_143117eaf;
    ppuVar8 = &PTR_u_Failed_to_get_s_150a3e460;
  }
  UE::Logging::Private::BasicLog<3>
            ((FStaticBasicLogRecord *)ppuVar8,(FLogCategoryBase *)&LogSockets);
LAB_143117eaf:
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return true;
}

// IMPLEMENT_MODULE_Sockets @ 143118f90

void __cdecl IMPLEMENT_MODULE_Sockets(void)

{
  return;
}

// IN6_IS_ADDR_V4MAPPED @ 143118fa0

uchar __cdecl IN6_IS_ADDR_V4MAPPED(in6_addr *param_1)

{
  if (((((param_1->u).Word[0] == 0) && ((param_1->u).Word[1] == 0)) && ((param_1->u).Word[2] == 0))
     && ((((param_1->u).Word[3] == 0 && ((param_1->u).Word[4] == 0)) &&
         ((param_1->u).Word[5] == 0xffff)))) {
    return '\x01';
  }
  return '\0';
}

// `dynamic_atexit_destructor_for_'CVarDisableIPv6'' @ 1503600c0

void __cdecl _dynamic_atexit_destructor_for__CVarDisableIPv6__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarDisableIPv6);
  return;
}

// `dynamic_atexit_destructor_for_'FSocketSubsystemExecs'' @ 1503600e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__FSocketSubsystemExecs__(void)

{
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)&FSocketSubsystemExecs);
  return;
}

// `dynamic_atexit_destructor_for_'LogMultichannelTCP'' @ 150360100

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMultichannelTCP__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMultichannelTCP);
  return;
}

// `dynamic_atexit_destructor_for_'LogSockets'' @ 150360120

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSockets__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSockets);
  return;
}

// `dynamic_atexit_destructor_for_'StaticSockets'' @ 150360140

void __cdecl `ISocketSubsystem::Get'::__l2::_dynamic_atexit_destructor_for__StaticSockets__(void)

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

