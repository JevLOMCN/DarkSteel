// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 38

// StaticClass @ 14ec472d0

UClass * __cdecl UIpNetDriver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpNetDriver",
               &Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton,
               StaticRegisterNativesUIpNetDriver,0xb08,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpNetDriver>,InternalVTableHelperCtorCaller<UIpNetDriver>,
               local_res8,UNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton;
}

// UIpNetDriver @ 14ec54200

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIpNetDriver * __thiscall UIpNetDriver::UIpNetDriver(UIpNetDriver *this,FVTableHelper *param_1)

{
  UNetDriver::UNetDriver((UNetDriver *)this,param_1);
  this->SocketState = None;
  this->bSupportsRecreateSocket = true;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  this->MaxSecondsInReceive = 0.0;
  this->NbPacketsBetweenReceiveTimeTest = 0;
  (this->SocketReceiveThreadRunnable).Ptr = (FReceiveThreadRunnable *)0x0;
  (this->SocketReceiveThread).Ptr = (FRunnableThread *)0x0;
  (this->RecvMultiState).Ptr = (FRecvMulti *)0x0;
  (this->SocketPrivate).Object = (FSocket *)0x0;
  (this->SocketPrivate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->LastRecreateSocketTime = 0.0;
  (this->NewIPHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewIPHashes).ArrayNum = 0;
  (this->NewIPHashes).ArrayMax = 0;
  (this->NewIPHitCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewIPHitCount).ArrayNum = 0;
  (this->NewIPHitCount).ArrayMax = 0;
  (this->AggregatedIPsToLog).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AggregatedIPsToLog).ArrayNum = 0;
  (this->AggregatedIPsToLog).ArrayMax = 0;
  this->bExceededIPAggregationLimit = false;
  this->NextAggregateIPLogCountdown = 0.0;
  (this->Resolver).Ptr = (FNetDriverAddressResolution *)0x0;
  return this;
}

// UIpNetDriver @ 14ec542c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UIpNetDriver * __thiscall UIpNetDriver::UIpNetDriver(UIpNetDriver *this,FObjectInitializer *param_1)

{
  int *piVar1;
  TArray<UIpNetDriver::FAggregatedIP,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  UNetDriver::UNetDriver((UNetDriver *)this,param_1);
  puVar7 = (undefined8 *)0x0;
  this->ServerDesiredSocketReceiveBufferBytes = 0x20000;
  pTVar2 = &this->AggregatedIPsToLog;
  this->PauseReceiveEnd = 0.0;
  this->ServerDesiredSocketSendBufferBytes = 0x20000;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  piVar3 = &(this->NewIPHashes).ArrayMax;
  this->ClientDesiredSocketReceiveBufferBytes = 0x8000;
  piVar4 = &(this->NewIPHitCount).ArrayMax;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  piVar1 = &(this->AggregatedIPsToLog).ArrayMax;
  this->ClientDesiredSocketSendBufferBytes = 0x8000;
  this->MaxSecondsInReceive = 0.0;
  this->NbPacketsBetweenReceiveTimeTest = 0;
  (this->SocketReceiveThreadRunnable).Ptr = (FReceiveThreadRunnable *)0x0;
  (this->SocketReceiveThread).Ptr = (FRunnableThread *)0x0;
  (this->RecvMultiState).Ptr = (FRecvMulti *)0x0;
  (this->SocketPrivate).Object = (FSocket *)0x0;
  (this->SocketPrivate).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->SocketState = None;
  this->bSupportsRecreateSocket = true;
  this->LastRecreateSocketTime = 0.0;
  (this->NewIPHashes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewIPHashes).ArrayNum = 0;
  *piVar3 = 0;
  (this->NewIPHitCount).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NewIPHitCount).ArrayNum = 0;
  *piVar4 = 0;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->AggregatedIPsToLog).ArrayNum = 0;
  *piVar1 = 0;
  this->bExceededIPAggregationLimit = false;
  this->NextAggregateIPLogCountdown = 0.0;
  puVar6 = ::operator_new(0x20);
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[1] = 0;
    *puVar6 = UE::Core::Private::PimplPtr::
              DeleterFunc<UE::Net::Private::FNetDriverAddressResolution>;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar7 = puVar6;
  }
  (this->Resolver).Ptr = (FNetDriverAddressResolution *)(puVar7 + 2);
  (this->NewIPHashes).ArrayNum = 0;
  if (*piVar3 != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x100,&(this->NewIPHashes).AllocatorInstance,0,piVar3);
  }
  (this->NewIPHitCount).ArrayNum = 0;
  if (*piVar4 != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x100,&(this->NewIPHitCount).AllocatorInstance,0,piVar4);
  }
  iVar5 = IPNetDriverInternal::MaxAggregateIPLogs;
  if (IPNetDriverInternal::MaxAggregateIPLogs < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)IPNetDriverInternal::MaxAggregateIPLogs);
  }
  DestructItems<UIpNetDriver::FAggregatedIP,int>
            ((FAggregatedIP *)(pTVar2->AllocatorInstance).Data,(this->AggregatedIPsToLog).ArrayNum);
  (this->AggregatedIPsToLog).ArrayNum = 0;
  if (*piVar1 != iVar5) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar5,&pTVar2->AllocatorInstance,0,piVar1);
  }
  return this;
}

// ~UIpNetDriver @ 14ec57370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpNetDriver::~UIpNetDriver(UIpNetDriver *this)

{
  FNetDriverAddressResolution *pFVar1;
  FScriptContainerElement *pFVar2;
  FRecvMulti *pFVar3;
  FRunnableThread *pFVar4;
  FReceiveThreadRunnable *pFVar5;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__FExec__;
  pFVar1 = (this->Resolver).Ptr;
  if (pFVar1 != (FNetDriverAddressResolution *)0x0) {
    (*(code *)pFVar1[-1].BoundSockets.AllocatorInstance.Data)(pFVar1 + -1);
  }
  DestructItems<UIpNetDriver::FAggregatedIP,int>
            ((FAggregatedIP *)(this->AggregatedIPsToLog).AllocatorInstance.Data,
             (this->AggregatedIPsToLog).ArrayNum);
  pFVar2 = (this->AggregatedIPsToLog).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewIPHitCount).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->NewIPHashes).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SocketPrivate).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->RecvMultiState).Ptr;
  if (pFVar3 != (FRecvMulti *)0x0) {
    (**(code **)pFVar3->_padding_)(pFVar3,1);
  }
  pFVar4 = (this->SocketReceiveThread).Ptr;
  if (pFVar4 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x30))(pFVar4,1);
  }
  pFVar5 = (this->SocketReceiveThreadRunnable).Ptr;
  if (pFVar5 != (FReceiveThreadRunnable *)0x0) {
    (**(code **)(pFVar5->_padding_ + 0x28))(pFVar5,1);
  }
  UNetDriver::~UNetDriver((UNetDriver *)this);
  return;
}

// operator() @ 14ec58250

TUniquePtr<FSocket,FSocketDeleter> * __thiscall
`UIpNetDriver::InitBase'::__l2::<lambda_1>::operator()
          (void *this,TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,
          TSharedRef<FInternetAddr,1> *param_1,FString *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  code *pcVar6;
  FInternetAddr *local_18;
  TReferenceControllerBase<1> *local_10;
  
  plVar5 = *(longlong **)this;
  uVar2 = *(undefined4 *)((longlong)this + 0x10);
  uVar3 = *(undefined4 *)((longlong)this + 0x14);
  uVar1 = *(undefined1 *)((longlong)this + 0xc);
  uVar4 = *(undefined4 *)((longlong)this + 8);
  pcVar6 = *(code **)(*plVar5 + 0x518);
  local_18 = param_1->Object;
  local_10 = (param_1->SharedReferenceCount).ReferenceController;
  if (local_10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar6)(plVar5,__return_storage_ptr__,&local_18,uVar4,uVar1,uVar2,uVar3,param_2);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// ClearSockets @ 14ec627d0

void __thiscall UIpNetDriver::ClearSockets(UIpNetDriver *this)

{
  int *piVar1;
  int iVar2;
  FNetDriverAddressResolution *pFVar3;
  TSharedPtr<FSocket,1> *pTVar4;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SocketPrivate != (TSharedPtr<FSocket,1> *)&local_18) {
    (this->SocketPrivate).Object = (FSocket *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SocketPrivate).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  pFVar3 = (this->Resolver).Ptr;
  piVar1 = &(pFVar3->BoundSockets).ArrayMax;
  pTVar4 = (TSharedPtr<FSocket,1> *)(pFVar3->BoundSockets).AllocatorInstance.Data;
  iVar2 = (pFVar3->BoundSockets).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar2);
    (pFVar3->BoundSockets).ArrayNum = 0;
    return;
  }
  DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar2);
  (pFVar3->BoundSockets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)pFVar3,0,piVar1);
  }
  return;
}

// CreateAndBindSocket @ 14ec64590

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FSocket,FSocketDeleter> * __thiscall
UIpNetDriver::CreateAndBindSocket
          (UIpNetDriver *this,TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,
          TSharedRef<FInternetAddr,1> *param_1,int param_2,bool param_3,int param_4,int param_5,
          FString *param_6)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  FSocket *pFVar4;
  char cVar5;
  int iVar6;
  ISocketSubsystem *this_00;
  undefined8 uVar7;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 local_90 [8];
  longlong *local_88;
  FSocket *local_80;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  this_00 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))();
  if (this_00 == (ISocketSubsystem *)0x0) {
    ::FString::operator=(param_6,L"Unable to find socket subsystem");
    pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->Ptr = (FSocket *)0x0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
    return __return_storage_ptr__;
  }
  pcVar2 = *(code **)(this->_padding_ + 0x510);
  uVar7 = (**(code **)((longlong)*param_1->Object + 0xa8))(param_1->Object,local_90);
  (*pcVar2)(this,&local_88,uVar7);
  if (local_80 == (FSocket *)0x0) {
    (**(code **)(this_00->_padding_ + 0xb8))();
    (**(code **)(this_00->_padding_ + 0xb0))(this_00);
    ::FString::PrintfImpl(&local_78,L"%s: socket failed (%i)");
    if (param_6 != &local_78) {
      pFVar3 = (param_6->Data).AllocatorInstance.Data;
      if (pFVar3 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar3);
      }
      (param_6->Data).AllocatorInstance.Data = local_78.Data.AllocatorInstance.Data;
      (param_6->Data).ArrayNum = local_78.Data.ArrayNum;
      (param_6->Data).ArrayMax = local_78.Data.ArrayMax;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->Ptr = (FSocket *)0x0;
    if ((local_88 != (longlong *)0x0) && (local_80 != (FSocket *)0x0)) {
      (**(code **)(*local_88 + 0x38))();
    }
  }
  else {
    cVar5 = (**(code **)(this_00->_padding_ + 0x70))(this_00);
    if ((cVar5 == '\0') &&
       (cVar5 = (**(code **)(local_80->_padding_ + 0xa8))(local_80,1), cVar5 == '\0')) {
      (**(code **)(this_00->_padding_ + 0xb8))(this_00);
      (**(code **)(this_00->_padding_ + 0xb0))(this_00);
      ::FString::PrintfImpl(&local_68,L"%s: setsockopt SO_BROADCAST failed (%i)");
      if (param_6 != &local_68) {
        pFVar3 = (param_6->Data).AllocatorInstance.Data;
        if (pFVar3 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar3);
        }
        (param_6->Data).AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        (param_6->Data).ArrayNum = local_68.Data.ArrayNum;
        (param_6->Data).ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar4 = local_80;
      iVar6 = (param_6->Data).ArrayNum;
      __return_storage_ptr__->_padding_ = 0;
      __return_storage_ptr__->Ptr = (FSocket *)0x0;
      if ((1 < iVar6) && (local_80 != (FSocket *)0x0)) {
        local_80 = (FSocket *)0x0;
        if (local_88 == (longlong *)0x0) goto LAB_14ec64af1;
        (**(code **)(*local_88 + 0x38))(local_88,pFVar4);
      }
      if ((local_88 != (longlong *)0x0) && (local_80 != (FSocket *)0x0)) {
        (**(code **)(*local_88 + 0x38))();
      }
    }
    else {
      cVar5 = (**(code **)(local_80->_padding_ + 0xf0))(local_80,param_3);
      if ((cVar5 == '\0') && (4 < (byte)LogNet._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      cVar5 = (**(code **)(local_80->_padding_ + 0x100))(local_80,1);
      if ((cVar5 == '\0') && (4 < (byte)LogNet._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      local_94 = 0;
      local_98 = 0;
      (**(code **)(local_80->_padding_ + 0x110))(local_80,param_4,&local_94);
      (**(code **)(local_80->_padding_ + 0x108))(local_80,param_5,&local_98);
      if (4 < (byte)LogInit._0_1_) {
        (**(code **)(this_00->_padding_ + 0xb0))(this_00);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogInit);
      }
      (**(code **)((longlong)*param_1->Object + 0x28))(param_1->Object,param_2);
      (**(code **)((longlong)*param_1->Object + 0x38))();
      iVar6 = ISocketSubsystem::BindNextPort
                        (this_00,local_80,param_1->Object,this->MaxPortCountToTry + 1,1);
      if (iVar6 == 0) {
        (**(code **)(this_00->_padding_ + 0xb8))(this_00);
        (**(code **)(this_00->_padding_ + 0xb0))(this_00);
        ::FString::PrintfImpl(&local_58,L"%s: binding to port %i failed (%i)");
        if (param_6 != &local_58) {
          pFVar3 = (param_6->Data).AllocatorInstance.Data;
          if (pFVar3 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar3);
          }
          (param_6->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
          (param_6->Data).ArrayNum = local_58.Data.ArrayNum;
          (param_6->Data).ArrayMax = local_58.Data.ArrayMax;
          local_58.Data.ArrayNum = 0;
          local_58.Data.ArrayMax = 0;
          local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        if (this->bExitOnBindFailure != 0) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        pFVar4 = local_80;
        iVar6 = (param_6->Data).ArrayNum;
        __return_storage_ptr__->_padding_ = 0;
        __return_storage_ptr__->Ptr = (FSocket *)0x0;
        if ((1 < iVar6) && (local_80 != (FSocket *)0x0)) {
          local_80 = (FSocket *)0x0;
          if (local_88 == (longlong *)0x0) goto LAB_14ec64af1;
          (**(code **)(*local_88 + 0x38))(local_88,pFVar4);
        }
        if ((local_88 != (longlong *)0x0) && (local_80 != (FSocket *)0x0)) {
          (**(code **)(*local_88 + 0x38))();
        }
      }
      else {
        cVar5 = (**(code **)(local_80->_padding_ + 0xa0))(local_80,1);
        if (cVar5 == '\0') {
          (**(code **)(this_00->_padding_ + 0xb8))(this_00);
          (**(code **)(this_00->_padding_ + 0xb0))(this_00);
          ::FString::PrintfImpl(&local_48,L"%s: SetNonBlocking failed (%i)");
          if (param_6 != &local_48) {
            pFVar3 = (param_6->Data).AllocatorInstance.Data;
            if (pFVar3 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar3);
            }
            (param_6->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
            (param_6->Data).ArrayNum = local_48.Data.ArrayNum;
            (param_6->Data).ArrayMax = local_48.Data.ArrayMax;
            local_48.Data.ArrayNum = 0;
            local_48.Data.ArrayMax = 0;
            local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          }
          if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_48.Data.AllocatorInstance.Data);
          }
          pFVar4 = local_80;
          iVar6 = (param_6->Data).ArrayNum;
          __return_storage_ptr__->_padding_ = 0;
          __return_storage_ptr__->Ptr = (FSocket *)0x0;
          if ((1 < iVar6) && (local_80 != (FSocket *)0x0)) {
            local_80 = (FSocket *)0x0;
            if (local_88 == (longlong *)0x0) goto LAB_14ec64af1;
            (**(code **)(*local_88 + 0x38))(local_88,pFVar4);
          }
          if ((local_88 != (longlong *)0x0) && (local_80 != (FSocket *)0x0)) {
            (**(code **)(*local_88 + 0x38))();
          }
        }
        else {
          __return_storage_ptr__->_padding_ = (longlong)local_88;
          __return_storage_ptr__->Ptr = local_80;
          local_80 = (FSocket *)0x0;
        }
      }
    }
  }
LAB_14ec64af1:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// CreateSocketForProtocol @ 14ec6ada0

/* WARNING: Enum "Type": Some values do not have unique names */

TUniquePtr<FSocket,FSocketDeleter> * __thiscall
UIpNetDriver::CreateSocketForProtocol
          (UIpNetDriver *this,TUniquePtr<FSocket,FSocketDeleter> *__return_storage_ptr__,
          FName *param_1)

{
  FNameEntryId FVar1;
  ISocketSubsystem *this_00;
  undefined4 extraout_var;
  undefined1 local_res8 [8];
  FName local_res20;
  FString local_18;
  
  this_00 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))();
  if (this_00 == (ISocketSubsystem *)0x0) {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    __return_storage_ptr__->_padding_ = 0;
    __return_storage_ptr__->Ptr = (FSocket *)0x0;
    return __return_storage_ptr__;
  }
  ::FString::FString(&local_18,L"Unreal");
  FVar1 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res20.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar1.Value);
  local_res20.Number = 0;
  ISocketSubsystem::CreateUniqueSocket
            (this_00,__return_storage_ptr__,&local_res20,&local_18,param_1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Exec @ 14ec6e140

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
UIpNetDriver::Exec(UIpNetDriver *this,UWorld *param_1,wchar_t *param_2,FOutputDevice *param_3)

{
  bool bVar1;
  ERecreateSocketResult EVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auVar7 [8];
  LARGE_INTEGER local_res18 [2];
  LARGE_INTEGER local_58 [2];
  LARGE_INTEGER local_48 [2];
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_res18[0] = (LARGE_INTEGER)param_2;
  bVar1 = FParse::Command((wchar_t **)local_res18,L"SOCKETS",true);
  if (bVar1) {
    FOutputDevice::Log(param_3,L"");
    plVar5 = (longlong *)
             (**(code **)(this[-1].AggregatedIPsToLog.AllocatorInstance.Data + 0x500))
                       (&this[-1].AggregatedIPsToLog);
    if (plVar5 == (longlong *)0x0) {
      UNetDriver::GetDescription((UNetDriver *)&this[-1].AggregatedIPsToLog,(FString *)local_38);
      FOutputDevice::LogfImpl(param_3,L"%s Socket: null");
      if (local_38 != (undefined1  [8])0x0) {
        FMemory::Free((void *)local_38);
      }
    }
    else {
      plVar6 = (longlong *)
               (**(code **)(this[-1].AggregatedIPsToLog.AllocatorInstance.Data + 0x408))
                         (&this[-1].AggregatedIPsToLog);
      (**(code **)(*plVar6 + 0x90))(plVar6,local_38);
      (**(code **)(*plVar5 + 0x90))(plVar5,local_38);
      (**(code **)(*(longlong *)local_38 + 0x80))(local_38,local_58,1);
      UNetDriver::GetDescription
                ((UNetDriver *)&this[-1].AggregatedIPsToLog,(FString *)&local_48[0].s);
      FOutputDevice::LogfImpl(param_3,L"%s Socket: %s");
      if ((wchar_t *)local_48[0].QuadPart != (wchar_t *)0x0) {
        FMemory::Free((void *)local_48[0]);
      }
      if ((wchar_t *)local_58[0].QuadPart != (wchar_t *)0x0) {
        FMemory::Free((void *)local_58[0]);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
    }
    bVar1 = FExec::Exec((FExec *)this,param_1,L"SOCKETS",param_3);
    return bVar1;
  }
  bVar1 = FParse::Command((wchar_t **)local_res18,L"PauseReceive",true);
  if (bVar1) {
    local_58[0] = local_res18[0];
    local_38 = (undefined1  [8])0x0;
    local_30._0_4_ = 0;
    local_30._4_4_ = 0;
    bVar1 = FParse::Token((wchar_t **)local_58,(FString *)local_38,false,L'\0');
    if (bVar1) {
      auVar7 = (undefined1  [8])L"";
      if ((int)local_30 != 0) {
        auVar7 = local_38;
      }
      uVar3 = _wtoi((wchar_t *)auVar7);
      if (uVar3 != 0) {
        FOutputDevice::LogfImpl(param_3,L"Pausing Socket Receives for \'%i\' seconds.");
        QueryPerformanceCounter(local_48);
        *(float *)&this->_padding_ =
             (float)((double)local_48[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
                     (double)uVar3 + __real_4170000000000000);
        goto LAB_14ec6e428;
      }
    }
    FOutputDevice::Log(param_3,L"Must specify a pause time, in seconds.");
  }
  else {
    bVar1 = FParse::Command((wchar_t **)local_res18,L"RecreateSocket",true);
    if (!bVar1) {
      bVar1 = FExec::Exec((FExec *)this,param_1,(wchar_t *)local_res18[0],param_3);
      return bVar1;
    }
    local_48[0] = local_res18[0];
    local_38 = (undefined1  [8])0x0;
    local_30._0_4_ = 0;
    local_30._4_4_ = 0;
    iVar4 = -1;
    bVar1 = FParse::Token((wchar_t **)local_48,(FString *)local_38,false,L'\0');
    if (bVar1) {
      auVar7 = (undefined1  [8])L"";
      if ((int)local_30 != 0) {
        auVar7 = local_38;
      }
      iVar4 = _wtoi((wchar_t *)auVar7);
    }
    EVar2 = RecreateSocket((UIpNetDriver *)&this[-1].AggregatedIPsToLog,iVar4);
    if (EVar2 == BeganRecreate) {
      FOutputDevice::Log(param_3,L"Began socket recreation.");
    }
    else {
      UE::Net::LexToString(EVar2);
      FOutputDevice::LogfImpl(param_3,L"Failed to trigger socket recreation. Result: %s");
    }
  }
LAB_14ec6e428:
  if (local_38 != (undefined1  [8])0x0) {
    FMemory::Free((void *)local_38);
  }
  return true;
}

// GetClientPort @ 14ec74830

int __thiscall UIpNetDriver::GetClientPort(UIpNetDriver *this)

{
  return 0;
}

// GetPrivateStaticClass @ 14ec782a0

UClass * __cdecl UIpNetDriver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UNetDriver::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OnlineSubsystemUtils",L"IpNetDriver",
               &Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton,
               StaticRegisterNativesUIpNetDriver,0xb08,8,
               CLASS_Intrinsic|CLASS_Transient|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UIpNetDriver>,InternalVTableHelperCtorCaller<UIpNetDriver>,
               local_res8,UNetDriver::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UIpNetDriver.InnerSingleton;
}

// GetServerConnection @ 14ec78c50

UIpConnection * __thiscall UIpNetDriver::GetServerConnection(UIpNetDriver *this)

{
  longlong *this_00;
  bool bVar1;
  UClass *pUVar2;
  
  this_00 = &this->_padding_;
  if (*this_00 != 0) {
    pUVar2 = UIpConnection::StaticClass();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar2);
    if (bVar1) {
      return (UIpConnection *)*this_00;
    }
  }
  return (UIpConnection *)0x0;
}

// GetSocket @ 14ec78f80

FSocket * __thiscall UIpNetDriver::GetSocket(UIpNetDriver *this)

{
  longlong lVar1;
  bool bVar2;
  UClass *pUVar3;
  
  if (this->_padding_ != 0) {
    pUVar3 = UIpConnection::StaticClass();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar3);
    if (((bVar2) && (lVar1 = this->_padding_, lVar1 != 0)) &&
       (*(char *)(*(longlong *)(lVar1 + 0x2018) + 0x44) != '\x01')) {
      return *(FSocket **)(lVar1 + 0x1fc0);
    }
  }
  return (this->SocketPrivate).Object;
}

// GetSocketSubsystem @ 14ec79000

ISocketSubsystem * __thiscall UIpNetDriver::GetSocketSubsystem(UIpNetDriver *this)

{
  ISocketSubsystem *pIVar1;
  FName local_res10 [3];
  
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  pIVar1 = ISocketSubsystem::Get(local_res10);
  return pIVar1;
}

// HandlePauseReceiveCommand @ 14ec7cce0

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
UIpNetDriver::HandlePauseReceiveCommand
          (UIpNetDriver *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  bool bVar1;
  uint uVar2;
  ForAnyElementType _Str;
  wchar_t *local_res10;
  LARGE_INTEGER local_28;
  FString local_20;
  
  local_20.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_20.Data.ArrayNum = 0;
  local_20.Data.ArrayMax = 0;
  local_res10 = param_1;
  bVar1 = FParse::Token(&local_res10,&local_20,false,L'\0');
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_20.Data.ArrayNum != 0) {
      _Str.Data = local_20.Data.AllocatorInstance.Data;
    }
    uVar2 = _wtoi((wchar_t *)_Str.Data);
    if (uVar2 != 0) {
      FOutputDevice::LogfImpl(param_2,L"Pausing Socket Receives for \'%i\' seconds.");
      QueryPerformanceCounter(&local_28);
      this->PauseReceiveEnd =
           (float)((double)local_28.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)uVar2
                  + __real_4170000000000000);
      goto LAB_14ec7cd9c;
    }
  }
  FOutputDevice::Log(param_2,L"Must specify a pause time, in seconds.");
LAB_14ec7cd9c:
  if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_20.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleRecreateSocketCommand @ 14ec7cdd0

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
UIpNetDriver::HandleRecreateSocketCommand
          (UIpNetDriver *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  bool bVar1;
  ERecreateSocketResult EVar2;
  int iVar3;
  ForAnyElementType _Str;
  wchar_t *local_res10;
  FString local_18;
  
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  iVar3 = -1;
  local_res10 = param_1;
  bVar1 = FParse::Token(&local_res10,&local_18,false,L'\0');
  if (bVar1) {
    _Str.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      _Str.Data = local_18.Data.AllocatorInstance.Data;
    }
    iVar3 = _wtoi((wchar_t *)_Str.Data);
  }
  EVar2 = RecreateSocket(this,iVar3);
  if (EVar2 == BeganRecreate) {
    FOutputDevice::Log(param_2,L"Began socket recreation.");
  }
  else {
    UE::Net::LexToString(EVar2);
    FOutputDevice::LogfImpl(param_2,L"Failed to trigger socket recreation. Result: %s");
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return true;
}

// HandleSocketsCommand @ 14ec7d2b0

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
UIpNetDriver::HandleSocketsCommand
          (UIpNetDriver *this,wchar_t *param_1,FOutputDevice *param_2,UWorld *param_3)

{
  bool bVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *local_48;
  TReferenceControllerBase<1> *local_40;
  FString local_38;
  FString local_28;
  
  FOutputDevice::Log(param_2,L"");
  plVar2 = (longlong *)(**(code **)(this->_padding_ + 0x500))(this);
  if (plVar2 == (longlong *)0x0) {
    UNetDriver::GetDescription((UNetDriver *)this,&local_28);
    FOutputDevice::LogfImpl(param_2,L"%s Socket: null");
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  else {
    plVar3 = (longlong *)(**(code **)(this->_padding_ + 0x408))();
    (**(code **)(*plVar3 + 0x90))(plVar3,&local_48);
    (**(code **)(*plVar2 + 0x90))(plVar2,local_48);
    (**(code **)(*local_48 + 0x80))(local_48,&local_28,1);
    UNetDriver::GetDescription((UNetDriver *)this,&local_38);
    FOutputDevice::LogfImpl(param_2,L"%s Socket: %s");
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
  }
  bVar1 = FExec::Exec((FExec *)&this->_padding_,param_3,L"SOCKETS",param_2);
  return bVar1;
}

// InitBase @ 14ec7e860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UIpNetDriver::InitBase
          (UIpNetDriver *this,bool param_1,FNetworkNotify *param_2,FURL *param_3,bool param_4,
          FString *param_5)

{
  TUniquePtr<UIpNetDriver::FReceiveThreadRunnable,TDefaultDelete<UIpNetDriver::FReceiveThreadRunnable>_>
  *pTVar1;
  int iVar2;
  FRunnableThread *pFVar3;
  FNetDriverAddressResolution *pFVar4;
  FRecvMulti *pFVar5;
  code *pcVar6;
  TConsoleVariableData<int> *pTVar7;
  TConsoleVariableData<int> *pTVar8;
  bool bVar9;
  char cVar10;
  undefined1 uVar11;
  ISocketSubsystem *pIVar12;
  FReceiveThreadRunnable *pFVar13;
  FReceiveThreadRunnable *pFVar14;
  longlong lVar15;
  FRunnableThread *pFVar16;
  undefined8 *puVar17;
  FStaticBasicLogRecord *pFVar18;
  code **ppcVar19;
  ForAnyElementType FVar20;
  FScriptContainerElement *pFVar21;
  TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti>_> *pTVar22;
  uint *puVar23;
  FReceiveThreadRunnable *pFVar24;
  FScriptContainerElement *pFVar25;
  undefined1 auStackY_218 [32];
  undefined1 local_1e8 [4];
  int local_1e4;
  TSharedPtr<FSocket,1> local_1e0;
  UIpNetDriver *local_1d0;
  int iStack_1c8;
  undefined4 uStack_1c4;
  uint local_1c0;
  uint uStack_1bc;
  ISocketSubsystem *local_1b8;
  undefined8 *local_1b0;
  FString local_1a8;
  longlong local_198;
  FString local_190;
  FSocket *local_180;
  TReferenceControllerBase<1> *local_178;
  code *local_168 [2];
  code *local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  FArchiveState local_128;
  undefined8 local_98;
  undefined8 local_90;
  code *local_88;
  code *local_78 [3];
  code **local_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_218;
  bVar9 = UNetDriver::InitBase((UNetDriver *)this,param_1,param_2,param_3,param_4,param_5);
  if (!bVar9) {
    return false;
  }
  pIVar12 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))(this);
  local_1b8 = pIVar12;
  if (pIVar12 == (ISocketSubsystem *)0x0) {
    if ((byte)LogNet._0_1_ < 3) {
      return false;
    }
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    return false;
  }
  if (param_1) {
    iStack_1c8 = (**(code **)(this->_padding_ + 0x508))(this);
    puVar23 = &this->ClientDesiredSocketSendBufferBytes;
  }
  else {
    iStack_1c8 = param_3->Port;
    puVar23 = &this->ServerDesiredSocketSendBufferBytes;
  }
  local_1c0 = (&this->ServerDesiredSocketReceiveBufferBytes)[(ulonglong)param_1 * 2];
  uStack_1c4 = CONCAT31(uStack_1c4._1_3_,param_4);
  pFVar24 = (FReceiveThreadRunnable *)0x0;
  uStack_1bc = *puVar23;
  local_88 = (code *)0x0;
  local_1d0 = this;
  local_140 = FMemory::Malloc(0x20,8);
  *local_140 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UIpNetDriver::InitBase'::`2'::<lambda_1>,1,1>::_vftable_;
  local_140[1] = local_1d0;
  local_140[2] = CONCAT44(uStack_1c4,iStack_1c8);
  local_140[3] = CONCAT44(uStack_1bc,local_1c0);
  local_168[0] = local_88;
  if (local_140 != (undefined8 *)&DAT_fffffffffffffff8) {
    local_168[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UIpNetDriver::InitBase'::__l2::<lambda_1>,TUniquePtr<FSocket,FSocketDeleter>,TSharedRef<FInternetAddr,1>,FString_&>
                   ::Call;
  }
  local_60 = (code **)0x0;
  local_158 = local_78[0];
  uStack_150 = local_78[1];
  local_148 = local_78[2];
  local_88 = (code *)0x0;
  bVar9 = UE::Net::Private::FNetDriverAddressResolution::InitBindSockets
                    ((this->Resolver).Ptr,
                     (TUniqueFunction<TUniquePtr<FSocket,FSocketDeleter>___cdecl(TSharedRef<FInternetAddr,1>,FString_&)>
                      *)local_168,!param_1 + Client,pIVar12,param_5);
  pTVar7 = CVarNetIpNetDriverUseReceiveThread.Ref;
  if (!bVar9) {
    if (1 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    bVar9 = false;
    goto LAB_14ec7ee30;
  }
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_14ec7ea6b:
    pFVar14 = pFVar24;
  }
  else {
    bVar9 = IsInGameThread();
    pFVar14 = (FReceiveThreadRunnable *)&DAT_00000004;
    if (bVar9) goto LAB_14ec7ea6b;
  }
  if ((*(int *)((longlong)&pFVar14->_padding_ + (longlong)pTVar7->ShadowedValue) != 0) &&
     (cVar10 = (**(code **)(pIVar12->_padding_ + 0xf8))(pIVar12), cVar10 != '\0')) {
    pFVar13 = ::operator_new(0xa0);
    pFVar14 = pFVar24;
    if (pFVar13 != (FReceiveThreadRunnable *)0x0) {
      pFVar14 = FReceiveThreadRunnable::FReceiveThreadRunnable(pFVar13,this);
    }
    pTVar1 = &this->SocketReceiveThreadRunnable;
    if (pTVar1 == (TUniquePtr<UIpNetDriver::FReceiveThreadRunnable,TDefaultDelete<UIpNetDriver::FReceiveThreadRunnable>_>
                   *)&local_198) {
      if (pFVar14 != (FReceiveThreadRunnable *)0x0) {
        lVar15 = pFVar14->_padding_;
        goto LAB_14ec7eae0;
      }
    }
    else {
      pFVar13 = pTVar1->Ptr;
      pTVar1->Ptr = pFVar14;
      if (pFVar13 != (FReceiveThreadRunnable *)0x0) {
        lVar15 = pFVar13->_padding_;
        pFVar14 = pFVar13;
LAB_14ec7eae0:
        (**(code **)(lVar15 + 0x28))(pFVar14,1);
      }
    }
    ::FName::ToString((FName *)&this->_padding_,&local_190);
    ::FString::PrintfImpl(&local_1a8,L"IpNetDriver Receive Thread: %s");
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1a8.Data.ArrayNum != 0) {
      FVar20.Data = local_1a8.Data.AllocatorInstance.Data;
    }
    pFVar16 = FRunnableThread::Create
                        ((FRunnable *)pTVar1->Ptr,(wchar_t *)FVar20.Data,0,TPri_Normal,
                         0xffffffffffffffff,None);
    pFVar3 = (this->SocketReceiveThread).Ptr;
    if ((pFVar3 != pFVar16) &&
       ((this->SocketReceiveThread).Ptr = pFVar16, pFVar3 != (FRunnableThread *)0x0)) {
      (**(code **)(pFVar3->_padding_ + 0x30))(pFVar3,1);
    }
    if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
    }
    if (local_190.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_190.Data.AllocatorInstance.Data);
    }
  }
  pFVar4 = (this->Resolver).Ptr;
  if ((pFVar4->BoundSockets).ArrayNum < 1) {
    local_138 = 0;
    uStack_130 = 0;
    local_1e0.Object = (FSocket *)0x0;
    local_1e0.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    pFVar21 = (pFVar4->BoundSockets).AllocatorInstance.Data;
    local_1e0.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar21 + 8);
    local_1e0.Object = *(FSocket **)pFVar21;
    local_180 = local_1e0.Object;
    local_178 = local_1e0.SharedReferenceCount.ReferenceController;
    if (local_1e0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      (local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_1e0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  SetSocketAndLocalAddress(this,&local_1e0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_1e0.SharedReferenceCount.ReferenceController);
  pTVar7 = CVarNetUseRecvMulti.Ref;
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_14ec7ec11:
    pFVar14 = pFVar24;
  }
  else {
    bVar9 = IsInGameThread();
    pFVar14 = (FReceiveThreadRunnable *)&DAT_00000004;
    if (bVar9) goto LAB_14ec7ec11;
  }
  pTVar8 = CVarNetIpNetDriverUseReceiveThread.Ref;
  iVar2 = *(int *)((longlong)&pFVar14->_padding_ + (longlong)pTVar7->ShadowedValue);
  bVar9 = IsInParallelGameThread();
  if (bVar9) {
LAB_14ec7ec33:
    pFVar14 = pFVar24;
  }
  else {
    bVar9 = IsInGameThread();
    pFVar14 = (FReceiveThreadRunnable *)&DAT_00000004;
    if (bVar9) goto LAB_14ec7ec33;
  }
  if (iVar2 != 0) {
    if (*(int *)((longlong)&pFVar14->_padding_ + (longlong)pTVar8->ShadowedValue) == 0) {
      cVar10 = (**(code **)(pIVar12->_padding_ + 0xf0))(pIVar12);
      pTVar7 = CVarNetUseRecvTimestamps.Ref;
      if (cVar10 == '\0') {
        if (2 < (byte)LogNet._0_1_) {
          pFVar18 = &::LOG_Static;
          goto LAB_14ec7ee1a;
        }
      }
      else {
        bVar9 = IsInParallelGameThread();
        if (bVar9) {
LAB_14ec7ec78:
          pFVar14 = pFVar24;
        }
        else {
          bVar9 = IsInGameThread();
          pFVar14 = (FReceiveThreadRunnable *)&DAT_00000004;
          if (bVar9) goto LAB_14ec7ec78;
        }
        local_1e4 = *(int *)((longlong)&pFVar14->_padding_ + (longlong)pTVar7->ShadowedValue);
        if (local_1e4 != 0) {
          pFVar4 = (this->Resolver).Ptr;
          iVar2 = (pFVar4->BoundSockets).ArrayNum;
          pFVar21 = (pFVar4->BoundSockets).AllocatorInstance.Data;
          pFVar25 = pFVar21 + (longlong)iVar2 * 0x10;
          while( true ) {
            if ((pFVar4->BoundSockets).ArrayNum != iVar2) {
              local_1e8[0] = 0;
              `TCheckedPointerIterator<TSharedPtr<FSocket,1>,int,0>::operator!='::__l2::<lambda_1>::
              operator()(local_1e8);
            }
            pIVar12 = local_1b8;
            if (pFVar21 == pFVar25) break;
            if ((*(longlong *)pFVar21 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("IsValid()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x458,L""), bVar9)) {
              pcVar6 = (code *)swi(3);
              uVar11 = (*pcVar6)();
              return (bool)uVar11;
            }
            (**(code **)(**(longlong **)pFVar21 + 0x118))(*(longlong **)pFVar21,1);
            pFVar21 = pFVar21 + 0x10;
          }
        }
        pTVar7 = CVarRecvMultiCapacity.Ref;
        bVar9 = IsInParallelGameThread();
        if ((bVar9) || (bVar9 = IsInGameThread(), lVar15 = 4, bVar9)) {
          lVar15 = 0;
        }
        iVar2 = *(int *)((longlong)pTVar7->ShadowedValue + lVar15);
        if (iVar2 < 0x20) {
          iVar2 = 0x20;
        }
        puVar17 = (undefined8 *)
                  (**(code **)(pIVar12->_padding_ + 0xa0))(pIVar12,&local_1b0,iVar2,0x400);
        pTVar22 = &this->RecvMultiState;
        if (pTVar22 != (TUniquePtr<FRecvMulti,TDefaultDelete<FRecvMulti>_> *)puVar17) {
          pFVar5 = pTVar22->Ptr;
          pTVar22->Ptr = (FRecvMulti *)*puVar17;
          *puVar17 = 0;
          if (pFVar5 != (FRecvMulti *)0x0) {
            (**(code **)pFVar5->_padding_)(pFVar5,1);
          }
        }
        if (local_1b0 != (undefined8 *)0x0) {
          (**(code **)*local_1b0)(local_1b0,1);
        }
        FArchiveState::FArchiveState(&local_128);
        local_128._padding_ = (longlong)&___7FArchiveCountMem__6B_;
        local_98 = 0;
        local_128.ArIsFilterEditorOnly = '\0';
        local_128.ArIsCountingMemory = '\x01';
        local_90 = 0;
        (**(code **)(pTVar22->Ptr->_padding_ + 0x10))(pTVar22->Ptr,&local_128);
        if (4 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        FArchive::~FArchive((FArchive *)&local_128);
      }
    }
    else if (2 < (byte)LogNet._0_1_) {
      pFVar18 = &::LOG_Static;
LAB_14ec7ee1a:
      UE::Logging::Private::BasicLog<3>(pFVar18,(FLogCategoryBase *)&LogNet);
    }
  }
  bVar9 = true;
LAB_14ec7ee30:
  if (local_88 != (code *)0x0) {
    ppcVar19 = local_78;
    if (local_60 != (code **)0x0) {
      ppcVar19 = local_60;
    }
    (**(code **)(*ppcVar19 + 0x10))();
    return bVar9;
  }
  return bVar9;
}

// InitConnect @ 14ec7fd10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UIpNetDriver::InitConnect(UIpNetDriver *this,FNetworkNotify *param_1,FURL *param_2,FString *param_3)

{
  FNetDriverAddressResolution *this_00;
  longlong lVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName FVar5;
  FName FVar6;
  char cVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UIpNetDriver::InitConnect(FNetworkNotify_*,FURL_const_&,FString_&)_::_2_::FStat_STAT_IpNetDriver_InitConnect>
  FVar10;
  ISocketSubsystem *pIVar11;
  UPackage *pUVar12;
  UClass *pUVar13;
  UObject *pUVar14;
  FSocket *pFVar15;
  UClass *pUVar16;
  FName FVar17;
  longlong *plVar18;
  undefined1 auStackY_168 [32];
  FName local_108;
  FName local_100;
  FString local_f0;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_IpNetDriver_InitConnect ==
        (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UIpNetDriver::InitConnect(FNetworkNotify_*,FURL_const_&,FString_&)_::_2_::FStat_STAT_IpNetDriver_InitConnect>
         )0x0) {
      pFVar9 = ::FName::FName(&local_108,"STAT_IpNetDriver_InitConnect");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_InitConnect,*pFVar9,
                 L"STAT_IpNetDriver_InitConnect","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar10 = StatPtr_STAT_IpNetDriver_InitConnect;
  if (StatPtr_STAT_IpNetDriver_InitConnect ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UIpNetDriver::InitConnect(FNetworkNotify_*,FURL_const_&,FString_&)_::_2_::FStat_STAT_IpNetDriver_InitConnect>
       )0x0) {
    pFVar9 = ::FName::FName((FName *)&local_f0,"STAT_IpNetDriver_InitConnect");
    FVar10 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_UIpNetDriver::InitConnect(FNetworkNotify_*,FURL_const_&,FString_&)_::_2_::FStat_STAT_IpNetDriver_InitConnect>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_IpNetDriver_InitConnect,*pFVar9
                          ,L"STAT_IpNetDriver_InitConnect","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)FVar10;
  bVar2 = false;
  bVar4 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  if ((FVar17.ComparisonIndex.Value.Value == 0) && (FVar17.Number == 0)) {
LAB_14ec7fe8a:
    bVar3 = false;
    FVar17 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_108 = (FName)((ulonglong)local_108 & 0xffffffff00000000);
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_108,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108 = FVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                   ,0x3d1);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14ec7fe8a;
    local_108 = FVar17;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
  }
  pIVar11 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))(this);
  if (pIVar11 == (ISocketSubsystem *)0x0) {
    if (2 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      bVar8 = false;
      goto LAB_14ec800fe;
    }
  }
  else {
    cVar7 = (**(code **)(this->_padding_ + 0x2d8))(this,1,param_1,param_2);
    if (cVar7 != '\0') {
      pUVar16 = (UClass *)this->_padding_;
      local_108.ComparisonIndex.Value = 0;
      local_108.Number = 0;
      pUVar12 = GetTransientPackage();
      FVar5 = local_108;
      if (local_108 == (FName)0x0) {
        FObjectInitializer::AssertIfInConstructor
                  ((UObject *)pUVar12,
                   L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                  );
      }
      pUVar13 = Z_Construct_UClass_UNetConnection_NoRegister();
      CheckIsClassChildOf_Internal(pUVar13,pUVar16);
      FStaticConstructObjectParameters::FStaticConstructObjectParameters
                ((FStaticConstructObjectParameters *)local_d8,pUVar16);
      FVar6 = local_108;
      local_108.ComparisonIndex = FVar5.ComparisonIndex.Value;
      local_108.Number = FVar5.Number;
      local_d8._16_4_ = local_108.ComparisonIndex.Value;
      local_d8._20_4_ = local_108.Number;
      local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
      local_d8._56_8_ = (UPackage *)0x0;
      local_d8._24_4_ = RF_NoFlags;
      local_d8._40_8_ = (UObject *)0x0;
      local_d8[0x20] = false;
      local_108 = FVar6;
      local_d8._8_8_ = pUVar12;
      pUVar14 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
      if (local_d8._64_8_ != 0) {
        plVar18 = (longlong *)(local_d8 + 0x50);
        if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
          plVar18 = (longlong *)local_d8._104_8_;
        }
        (**(code **)(*plVar18 + 0x10))(plVar18);
      }
      plVar18 = &this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar14 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar14);
      }
      *plVar18 = (longlong)pUVar14;
      (**(code **)(*(longlong *)pUVar14 + 0x360))(pUVar14,this,(this->SocketPrivate).Object,param_2)
      ;
      this_00 = (this->Resolver).Ptr;
      pFVar15 = (FSocket *)(**(code **)(this->_padding_ + 0x500))(this);
      UE::Net::Private::FNetDriverAddressResolution::InitConnect
                (this_00,(UNetConnection *)*plVar18,pIVar11,pFVar15,param_2);
      if (*plVar18 != 0) {
        pUVar16 = UIpConnection::StaticClass();
        bVar8 = FObjectPtr::IsA((FObjectPtr *)plVar18,pUVar16);
        if ((((bVar8) && (*plVar18 != 0)) && (lVar1 = *(longlong *)(*plVar18 + 0x2018), lVar1 != 0))
           && ((cVar7 = *(char *)(lVar1 + 0x44), cVar7 != '\x01' && (cVar7 != '\x06')))) {
          this->SocketState = Resolving;
        }
      }
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      UNetDriver::CreateInitialClientChannels((UNetDriver *)this);
      bVar8 = true;
      goto LAB_14ec800fe;
    }
    if (2 < (byte)LogNet._0_1_) {
      FURL::ToString(param_2,&local_f0,false);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((FName)local_f0.Data.AllocatorInstance.Data != (FName)0x0) {
        FMemory::Free(local_f0.Data.AllocatorInstance.Data);
      }
    }
  }
  bVar8 = false;
LAB_14ec800fe:
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar17,CycleScopeEnd);
  }
  return bVar8;
}

// InitListen @ 14ec80440

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UIpNetDriver::InitListen
          (UIpNetDriver *this,FNetworkNotify *param_1,FURL *param_2,bool param_3,FString *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  FString local_28;
  FString local_18;
  
  cVar2 = (**(code **)(this->_padding_ + 0x2d8))(this,0,param_1,param_2,param_3,param_4);
  if (cVar2 == '\0') {
    if (2 < (byte)LogNet._0_1_) {
      FURL::ToString(param_2,&local_28,false);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = false;
  }
  else {
    (**(code **)(this->_padding_ + 0x2f8))(this);
    if ((this->_padding_ == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return (bool)uVar4;
    }
    iVar5 = (**(code **)(*(longlong *)this->_padding_ + 0x38))();
    param_2->Port = iVar5;
    if (4 < (byte)LogNet._0_1_) {
      UNetDriver::GetDescription((UNetDriver *)this,&local_18);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// IsAvailable @ 14ec80fb0

bool __thiscall UIpNetDriver::IsAvailable(UIpNetDriver *this)

{
  return true;
}

// IsNetResourceValid @ 14ec81990

bool __thiscall UIpNetDriver::IsNetResourceValid(UIpNetDriver *this)

{
  longlong lVar1;
  
  lVar1 = (**(code **)(this->_padding_ + 0x500))();
  return lVar1 != 0;
}

// LowLevelDestroy @ 14ec82540

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpNetDriver::LowLevelDestroy(UIpNetDriver *this)

{
  int *piVar1;
  int iVar2;
  FNetConnectionAddressResolution *this_00;
  FNetDriverAddressResolution *pFVar3;
  TSharedPtr<FSocket,1> *pTVar4;
  bool bVar5;
  char cVar6;
  ESocketErrors EVar7;
  longlong *plVar8;
  UClass *pUVar9;
  ISocketSubsystem *this_01;
  FName *pFVar10;
  TStatId TVar11;
  UIpConnection *this_02;
  FName local_res8;
  FName local_68;
  byte local_60;
  undefined8 local_58;
  FSharedReferencer<1> FStack_50;
  FSourceLocation local_48;
  
  UNetDriver::LowLevelDestroy((UNetDriver *)this);
  plVar8 = (longlong *)(**(code **)(this->_padding_ + 0x500))(this);
  if (plVar8 == (longlong *)0x0) {
    return;
  }
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  if (this->_padding_ != 0) {
    pUVar9 = UIpConnection::StaticClass();
    bVar5 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar9);
    if (bVar5) {
      this_02 = (UIpConnection *)this->_padding_;
      if (this_02 != (UIpConnection *)0x0) {
        UIpConnection::WaitForSendTasks(this_02);
      }
      goto LAB_14ec825d3;
    }
  }
  this_02 = (UIpConnection *)0x0;
LAB_14ec825d3:
  this_01 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))(this);
  if (((this->SocketReceiveThread).Ptr != (FRunnableThread *)0x0) &&
     ((this->SocketReceiveThreadRunnable).Ptr != (FReceiveThreadRunnable *)0x0)) {
    if (4 < (byte)LogNet._0_1_) {
      UNetDriver::GetDescription((UNetDriver *)this,(FString *)&local_48);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line));
      }
    }
    LOCK();
    ((this->SocketReceiveThreadRunnable).Ptr)->bIsRunning = (TAtomic<bool>)0x0;
    UNLOCK();
    cVar6 = (**(code **)(*plVar8 + 8))(plVar8,0);
    if ((cVar6 == '\0') &&
       (EVar7 = (**(code **)(this_01->_padding_ + 0xb8))(this_01), 4 < (byte)LogNet._0_1_)) {
      UNetDriver::GetDescription((UNetDriver *)this,(FString *)&local_48);
      ISocketSubsystem::GetSocketError(this_01,EVar7);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if ((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line) != (void *)0x0) {
        FMemory::Free((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line));
      }
    }
    TVar11.StatIdPtr = (TStatIdData *)StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread;
    if (StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread ==
        (FThreadSafeStaticStat<FStat_STAT_IpNetDriver_Destroy_WaitForReceiveThread>)0x0) {
      pFVar10 = ::FName::FName(&local_res8,"STAT_IpNetDriver_Destroy_WaitForReceiveThread");
      TVar11.StatIdPtr =
           FThreadSafeStaticStatBase::DoSetup
                     ((FThreadSafeStaticStatBase *)
                      &StatPtr_STAT_IpNetDriver_Destroy_WaitForReceiveThread,*pFVar10,
                      L"IpNetDriver Destroy WaitForReceiveThread","STATGROUP_Net","STATCAT_Advanced"
                      ,L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_48.Impl._Line = 0x635;
    local_48.Impl._File =
         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
    ;
    local_48.Impl._Column = 4;
    local_48.Impl._Function = "void __cdecl UIpNetDriver::LowLevelDestroy(void)";
    FScopeCycleCounter::FScopeCycleCounter
              ((FScopeCycleCounter *)&local_68,TVar11,CycleStat|ClearEveryFrame,false,&local_48);
    (**(code **)(((this->SocketReceiveThread).Ptr)->_padding_ + 0x20))();
    if ((local_60 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_60 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_60 & 4) != 0) {
      FThreadStats::AddMessage(local_68,CycleScopeEnd);
    }
  }
  cVar6 = (**(code **)(*plVar8 + 0x10))(plVar8);
  if ((cVar6 == '\0') && (4 < (byte)LogExit._0_1_)) {
    (**(code **)(this_01->_padding_ + 0xb8))(this_01);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
  }
  if (((this_02 != (UIpConnection *)0x0) &&
      (this_00 = (this_02->Resolver).Ptr, this_00 != (FNetConnectionAddressResolution *)0x0)) &&
     (this_00->ResolutionState != Disabled)) {
    UE::Net::Private::FNetConnectionAddressResolution::CleanupResolutionSockets(this_00,CleanAll);
  }
  local_58 = 0;
  FStack_50.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SocketPrivate != (TSharedPtr<FSocket,1> *)&local_58) {
    (this->SocketPrivate).Object = (FSocket *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SocketPrivate).SharedReferenceCount,&FStack_50);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_50.ReferenceController);
  pFVar3 = (this->Resolver).Ptr;
  piVar1 = &(pFVar3->BoundSockets).ArrayMax;
  pTVar4 = (TSharedPtr<FSocket,1> *)(pFVar3->BoundSockets).AllocatorInstance.Data;
  iVar2 = (pFVar3->BoundSockets).ArrayNum;
  if (*piVar1 < 0) {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar2);
    (pFVar3->BoundSockets).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,(ForAnyElementType *)pFVar3,0,piVar1);
    }
  }
  else {
    DestructItems<TSharedPtr<FSocket,1>,int>(pTVar4,iVar2);
    (pFVar3->BoundSockets).ArrayNum = 0;
  }
  if (4 < (byte)LogExit._0_1_) {
    UNetDriver::GetDescription((UNetDriver *)this,(FString *)&local_48);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogExit);
    if ((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line) != (void *)0x0) {
      FMemory::Free((void *)CONCAT44(local_48.Impl._Column,local_48.Impl._Line));
    }
  }
  return;
}

// LowLevelGetNetworkNumber @ 14ec82960

FString * __thiscall
UIpNetDriver::LowLevelGetNetworkNumber(UIpNetDriver *this,FString *__return_storage_ptr__)

{
  longlong *plVar1;
  FString *pFVar2;
  bool bVar3;
  FString local_28;
  void *local_18 [2];
  
  plVar1 = (longlong *)this->_padding_;
  bVar3 = plVar1 == (longlong *)0x0;
  if (bVar3) {
    pFVar2 = ::FString::FString(&local_28,L"");
  }
  else {
    pFVar2 = (FString *)(**(code **)(*plVar1 + 0x80))(plVar1,local_18,1);
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
  (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->Data).ArrayNum = (pFVar2->Data).ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = (pFVar2->Data).ArrayMax;
  (pFVar2->Data).ArrayNum = 0;
  (pFVar2->Data).ArrayMax = 0;
  if (bVar3) {
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  if ((!bVar3) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  return __return_storage_ptr__;
}

// LowLevelSend @ 14ec82b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UIpNetDriver::LowLevelSend
          (UIpNetDriver *this,TSharedPtr<FInternetAddr_const_,1> *param_1,void *param_2,int param_3,
          FOutPacketTraits *param_4)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  FInternetAddr *pFVar5;
  longlong *plVar6;
  undefined4 local_res10 [2];
  LARGE_INTEGER local_78;
  LARGE_INTEGER local_70;
  TSharedPtr<FInternetAddr_const_,1> local_68;
  FInternetAddr *local_58;
  TReferenceControllerBase<1> *local_50;
  ProcessedPacket local_48;
  void *local_38 [2];
  
  if ((param_1->Object == (FInternetAddr *)0x0) ||
     (cVar2 = (**(code **)((longlong)*param_1->Object + 0x98))(), cVar2 == '\0')) {
    if (2 < (byte)LogNet._0_1_) {
      if ((param_1->Object == (FInternetAddr *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      (**(code **)((longlong)*param_1->Object + 0x80))(param_1->Object,local_38,1);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_38[0] != (void *)0x0) {
        FMemory::Free(local_38[0]);
      }
    }
  }
  else {
    if (GCurrentDuplicateIP.Object != (FInternetAddr *)0x0) {
      pFVar5 = TSharedPtr<FInternetAddr_const_,1>::operator->(param_1);
      pcVar1 = *(code **)((longlong)*pFVar5 + 8);
      if ((GCurrentDuplicateIP.Object == (FInternetAddr *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x44d,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      cVar2 = (*pcVar1)(pFVar5,GCurrentDuplicateIP.Object);
      if (cVar2 != '\0') {
        pFVar5 = TSharedPtr<FInternetAddr_const_,1>::operator->(param_1);
        (**(code **)((longlong)*pFVar5 + 0xa0))(pFVar5,&local_58);
        iVar4 = (**(code **)((longlong)*local_58 + 0x38))();
        (**(code **)((longlong)*local_58 + 0x28))
                  (local_58,iVar4 + -0x2694 + (iVar4 + -0x2694 >> 0x1f & 0x10000U));
        local_68.Object = local_58;
        local_68.SharedReferenceCount.ReferenceController = local_50;
        if (local_50 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (param_1 != &local_68) {
          param_1->Object = local_58;
          local_68.Object = (FInternetAddr *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&param_1->SharedReferenceCount,&local_68.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_68.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
    }
    if (((PacketHandler *)this->_padding_ == (PacketHandler *)0x0) ||
       (PacketHandler::Outgoing_Internal
                  ((PacketHandler *)this->_padding_,&local_48,param_2,param_3,param_4,true,param_1),
       param_2 = local_48.Data, param_3 = local_48.CountBits, local_48.bError == false)) {
      local_res10[0] = 0;
      if (0 < param_3) {
        QueryPerformanceCounter(&local_78);
        *(int *)&this->_padding_ = (int)this->_padding_ - local_78._0_4_;
        plVar6 = (longlong *)(**(code **)(this->_padding_ + 0x500))(this);
        pcVar1 = *(code **)(*plVar6 + 0x58);
        pFVar5 = TSharedPtr<FInternetAddr_const_,1>::operator*<FInternetAddr_const_>(param_1);
        (*pcVar1)(plVar6,param_2,(int)((param_3 + 7 >> 0x1f & 7U) + param_3 + 7) >> 3,local_res10,
                  pFVar5);
        QueryPerformanceCounter(&local_70);
        *(DWORD *)&this->_padding_ = (int)this->_padding_ + local_70.s.LowPart;
      }
    }
    else {
      local_res10[0] = 0;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnRecreateSocketComplete @ 14ec8a910

void __thiscall UIpNetDriver::OnRecreateSocketComplete(UIpNetDriver *this)

{
  this->LastRecreateSocketTime = (double)this->_padding_;
  this->SocketState = Ready;
  return;
}

// ProcessConnectionlessPacket @ 14ec8dc20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UNetConnection * __thiscall
UIpNetDriver::ProcessConnectionlessPacket
          (UIpNetDriver *this,FReceivedPacketView *param_1,FPacketBufferView *param_2)

{
  TSharedPtr<FInternetAddr_const_,1> *pTVar1;
  void *_Dst;
  PacketHandler *this_00;
  uchar *_Src;
  code *pcVar2;
  bool bVar3;
  atomic<int> aVar4;
  StatelessConnectHandlerComponent *this_01;
  FInternetAddr *pFVar5;
  bool bVar6;
  EIncomingResult EVar7;
  char cVar8;
  char cVar9;
  atomic<int> aVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  UNetConnection *pUVar14;
  UClass *pUVar15;
  FInternetAddr *pFVar16;
  undefined8 *puVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_Stat_IpNetDriverAddNewConnection> FVar19;
  UPackage *pUVar20;
  UClass *pUVar21;
  FName FVar22;
  FURL *pFVar23;
  ulonglong uVar24;
  longlong *plVar25;
  StatelessConnectHandlerComponent **ppSVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  uint uVar29;
  FName *pFVar30;
  FName FVar31;
  FName FVar32;
  FName FVar33;
  undefined1 auStackY_3b8 [32];
  undefined1 local_358;
  undefined1 local_357;
  char local_356;
  FName local_350;
  FName local_348;
  byte local_340;
  FName local_338;
  FSharedReferencer<1> FStack_330;
  FName *local_328;
  FColor_u_0 local_320 [2];
  TSharedPtr<FInternetAddr_const_,1> *local_318;
  StatelessConnectHandlerComponent *local_310;
  FSharedReferencer<1> aFStack_308 [2];
  TSharedRef<FInternetAddr,1> local_2f8;
  uint local_2e8;
  FReceivedPacketView *local_2e0;
  FPacketBufferView *local_2d8;
  void *local_2d0 [2];
  FName local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  StatelessConnectHandlerComponent *local_2a8;
  TReferenceControllerBase<1> *local_2a0;
  undefined8 local_298;
  FSharedReferencer<1> local_290;
  uchar *local_288;
  int iStack_280;
  undefined4 uStack_27c;
  int local_278;
  undefined4 uStack_274;
  TPairInitializer<TSharedRef<FInternetAddr_const_,1>_&&,TObjectPtr<UNetConnection>_&&> local_270;
  void *local_260 [2];
  undefined8 local_250;
  FSharedReferencer<1> FStack_248;
  FURL local_240;
  TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> local_1d8;
  uchar *local_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  undefined4 local_1b0;
  uint uStack_1ac;
  StatelessConnectHandlerComponent *local_1a8;
  TReferenceControllerBase<1> *local_1a0;
  FInternetAddr **local_198;
  TObjectPtr<UNetConnection> **local_190;
  FInternetAddr *local_188;
  TReferenceControllerBase<1> *pTStack_180;
  FName local_178 [2];
  TSharedRef<FInternetAddr_const_,1> local_168;
  void *local_158 [2];
  void *local_148 [2];
  FURL local_138;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  FVar32.ComparisonIndex.Value = 0;
  FVar32.Number = 0;
  pTVar1 = &param_1->Address;
  local_320[0].Bits = 0;
  FVar31.ComparisonIndex.Value = 0;
  FVar31.Number = 0;
  local_350.ComparisonIndex.Value = 0;
  local_350.Number = 0;
  local_338.ComparisonIndex.Value = 0;
  local_338.Number = 0;
  FStack_330.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_318 = pTVar1;
  local_2e0 = param_1;
  local_2d8 = param_2;
  if ((pTVar1->Object == (FInternetAddr *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    pUVar14 = (UNetConnection *)(*pcVar2)();
    return pUVar14;
  }
  (**(code **)((longlong)*pTVar1->Object + 0x80))(pTVar1->Object,local_2d0,1);
  if ((((this->_padding_ == 0) || (this->_padding_ == 0)) || (this->_padding_ == 0)) ||
     ((this->_padding_ == 0 || (*(int *)(this->_padding_ + 8) < 1)))) {
    pwVar27 = FCommandLine::Get();
    bVar6 = FParse::Param(pwVar27,L"NoPacketHandler");
    if (!bVar6) {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      goto LAB_14ec8ea75;
    }
    FVar33 = local_338;
    if (((4 < (byte)LogNet._0_1_) && (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
       (((char)this->_padding_ == '\0' ||
        (*(int *)&this->_padding_ = (int)this->_padding_ + 1,
        (int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4))))) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      FVar33 = local_338;
    }
    goto LAB_14ec8e474;
  }
  local_290.ReferenceController = (TReferenceControllerBase<1> *)this->_padding_;
  FVar33.ComparisonIndex.Value = 0;
  FVar33.Number = 0;
  local_338 = FVar32;
  if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    aVar4 = (local_290.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar4 == (atomic<int>)0x0) {
        local_290.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14ec8dd40;
      }
      LOCK();
      aVar10 = (local_290.ReferenceController)->SharedReferenceCount;
      bVar6 = aVar4 == aVar10;
      if (bVar6) {
        (local_290.ReferenceController)->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar6);
    local_338 = FVar33;
    if (local_290.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      local_338 = (FName)this->_padding_;
    }
  }
LAB_14ec8dd40:
  local_298 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_330,&local_290);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_290.ReferenceController);
  this_00 = (PacketHandler *)this->_padding_;
  (param_1->Traits).bConnectionlessPacket = true;
  EVar7 = PacketHandler::Incoming_Internal(this_00,param_1);
  FVar33 = local_338;
  if (EVar7 == Success) {
    if ((local_338 == (FName)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar14 = (UNetConnection *)(*pcVar2)();
      return pUVar14;
    }
    cVar9 = *(char *)((longlong)FVar33 + 0x1cc);
    local_356 = cVar9;
    if (((*(longlong *)((longlong)FVar33 + 0x120) == 0) ||
        ((param_1->Address).Object == (FInternetAddr *)0x0)) ||
       (cVar8 = (**(code **)(**(longlong **)((longlong)FVar33 + 0x120) + 0x88))
                          (*(longlong **)((longlong)FVar33 + 0x120),(param_1->Address).Object),
       cVar8 == '\0')) goto LAB_14ec8ea75;
    if (cVar9 != '\0') {
      if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      local_2e8 = (uint)this->_padding_;
      uVar24 = (ulonglong)(int)local_2e8;
      pFVar18 = (FName *)this->_padding_;
      local_310 = (StatelessConnectHandlerComponent *)0x0;
      aFStack_308[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
      local_328 = pFVar18 + uVar24;
      do {
        pFVar30 = local_328;
        if ((int)this->_padding_ != (int)uVar24) {
          local_358 = 0;
          `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_358);
        }
        if (pFVar18 == pFVar30) goto LAB_14ec8e352;
        FVar31 = *pFVar18;
        if (FVar31 == (FName)0x0) {
          FVar32.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value | 2;
          FVar32.Number = 0;
          local_1a0 = (TReferenceControllerBase<1> *)0x0;
          local_310 = (StatelessConnectHandlerComponent *)0x0;
          ppSVar26 = &local_1a8;
        }
        else {
          local_2a0 = *(TReferenceControllerBase<1> **)((longlong)FVar31 + 0x1a8);
          local_310 = (StatelessConnectHandlerComponent *)0x0;
          FVar32.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value | 1;
          FVar32.Number = 0;
          local_2a8 = (StatelessConnectHandlerComponent *)0x0;
          if (local_2a0 == (TReferenceControllerBase<1> *)0x0) {
LAB_14ec8dea2:
            ppSVar26 = &local_2a8;
          }
          else {
            aVar4 = local_2a0->SharedReferenceCount;
            do {
              if (aVar4 == (atomic<int>)0x0) {
                local_2a0 = (TReferenceControllerBase<1> *)0x0;
                goto LAB_14ec8dea2;
              }
              LOCK();
              aVar10 = local_2a0->SharedReferenceCount;
              bVar6 = aVar4 == aVar10;
              if (bVar6) {
                local_2a0->SharedReferenceCount = (atomic<int>)((int)aVar4 + 1);
                aVar10 = aVar4;
              }
              UNLOCK();
              aVar4 = aVar10;
            } while (!bVar6);
            local_310 = *(StatelessConnectHandlerComponent **)((longlong)FVar31 + 0x1a0);
            ppSVar26 = &local_2a8;
            local_2a8 = local_310;
          }
        }
        *ppSVar26 = (StatelessConnectHandlerComponent *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (aFStack_308,(FSharedReferencer<1> *)(ppSVar26 + 1));
        if (((ulonglong)FVar32 & 2) != 0) {
          FVar32.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value & 0xfffffffd;
          FVar32.Number = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1a0);
        }
        if (((ulonglong)FVar32 & 1) != 0) {
          FVar32.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value & 0xfffffffe;
          FVar32.Number = 0;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_2a0);
        }
        this_01 = local_310;
        if (local_310 != (StatelessConnectHandlerComponent *)0x0) {
          if ((FVar33 == (FName)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            pUVar14 = (UNetConnection *)(*pcVar2)();
            return pUVar14;
          }
          if ((this_01 == (StatelessConnectHandlerComponent *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x44d,L""), bVar6)) {
            pcVar2 = (code *)swi(3);
            pUVar14 = (UNetConnection *)(*pcVar2)();
            return pUVar14;
          }
          if (((*(longlong *)((longlong)FVar33 + 0x1cd) == *(longlong *)this_01->AuthorisedCookie)
              && (*(longlong *)((longlong)FVar33 + 0x1d5) ==
                  *(longlong *)(this_01->AuthorisedCookie + 8))) &&
             (*(int *)((longlong)FVar33 + 0x1dd) == *(int *)(this_01->AuthorisedCookie + 0x10)))
          goto LAB_14ec8dfca;
        }
        uVar24 = (ulonglong)local_2e8;
        pFVar18 = pFVar18 + 1;
      } while( true );
    }
    goto LAB_14ec8e37b;
  }
LAB_14ec8ea75:
  FVar22 = FVar32;
  if (6 < (byte)LogNet._0_1_) {
    UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    FVar22 = FVar31;
  }
LAB_14ec8ea9c:
  local_1c0 = (param_1->DataView).Data.DataPtr;
  uStack_1b8 = 0;
  local_1b0 = 0;
  (param_1->DataView).Data.DataPtr = local_1c0;
  *(ulonglong *)&(param_1->DataView).Data.ArrayNum = (ulonglong)uStack_1b4 << 0x20;
  *(ulonglong *)&(param_1->DataView).CountBits = (ulonglong)uStack_1ac << 0x20;
LAB_14ec8eacb:
  if (local_2d0[0] != (void *)0x0) {
    FMemory::Free(local_2d0[0]);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_330.ReferenceController);
  return (UNetConnection *)FVar22;
LAB_14ec8dfca:
  if (FVar31 == (FName)0x0) {
LAB_14ec8e352:
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
  }
  else {
    pUVar15 = UIpConnection::StaticClass();
    iVar13 = (int)pUVar15->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar31 + 0x10) + 0x38) < iVar13) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar31 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
        &pUVar15->_padding_)) goto LAB_14ec8e352;
    local_350 = FVar31;
    TSharedPtr<FInternetAddr,1>::ToSharedRef
              ((TSharedPtr<FInternetAddr,1> *)((longlong)FVar31 + 0x168),&local_2f8);
    local_357 = 0;
    RemoveFromNewIPTracking(this,local_2f8.Object);
    local_168.Object = local_2f8.Object;
    local_168.SharedReferenceCount.ReferenceController =
         local_2f8.SharedReferenceCount.ReferenceController;
    if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    TMapBase<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>_>
    ::Remove((TMapBase<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>,FDefaultSetAllocator,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>_>
              *)&this->_padding_,&local_168);
    (**(code **)((longlong)*local_2f8.Object + 0x80))(local_2f8.Object,local_260,1);
    pFVar5 = local_2f8.Object;
    pcVar2 = *(code **)((longlong)*local_2f8.Object + 0x10);
    pFVar16 = TSharedPtr<FInternetAddr_const_,1>::operator->(local_318);
    puVar17 = (undefined8 *)(**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_158,0);
    if (*(int *)(puVar17 + 1) == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)*puVar17;
    }
    (*pcVar2)(pFVar5,pwVar27,&local_357);
    if (local_158[0] != (void *)0x0) {
      FMemory::Free(local_158[0]);
    }
    pFVar5 = local_2f8.Object;
    pcVar2 = *(code **)((longlong)*local_2f8.Object + 0x28);
    pFVar16 = TSharedPtr<FInternetAddr_const_,1>::operator->(local_318);
    uVar11 = (**(code **)((longlong)*pFVar16 + 0x38))(pFVar16);
    (*pcVar2)(pFVar5,uVar11);
    local_270.Value = (TObjectPtr<UNetConnection> *)local_350;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)local_350);
    }
    local_188 = local_2f8.Object;
    pTStack_180 = local_2f8.SharedReferenceCount.ReferenceController;
    if (local_2f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_198 = &local_188;
    local_190 = &local_270.Value;
    TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<TSharedRef<FInternetAddr_const_,1>_&&,TObjectPtr<UNetConnection>_&&>_>
              ((TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
                *)&this->_padding_,&local_270,(bool *)&local_198);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_180)
    ;
    plVar25 = &this->_padding_;
    pFVar30 = (FName *)*plVar25;
    pFVar18 = pFVar30 + (longlong)(int)this->_padding_ * 3;
    local_328 = pFVar30;
    for (; pFVar30 != pFVar18; pFVar30 = pFVar30 + 3) {
      cVar9 = (**(code **)((longlong)*local_2f8.Object + 0x88))(local_2f8.Object,*pFVar30);
      if (cVar9 != '\0') {
        lVar28 = ((longlong)pFVar30 - (longlong)local_328) / 6 +
                 ((longlong)pFVar30 - (longlong)local_328 >> 0x3f);
        uVar29 = (int)(lVar28 >> 2) - (int)(lVar28 >> 0x3f);
        if (uVar29 != 0xffffffff) {
          uVar12 = 0;
          if ((int)uVar29 < (int)this->_padding_) {
            uVar12 = ~uVar29 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar2 = (code *)swi(3);
            pUVar14 = (UNetConnection *)(*pcVar2)();
            return pUVar14;
          }
          _Dst = (void *)(*plVar25 + (longlong)(int)uVar29 * 0x18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(*plVar25 + (longlong)(int)uVar29 * 0x18 + 8))
          ;
          iVar13 = ((int)this->_padding_ - uVar29) + -1;
          if (iVar13 != 0) {
            memmove(_Dst,(void *)((longlong)_Dst + 0x18),(longlong)iVar13 * 0x18);
          }
          *(int *)&this->_padding_ = (int)this->_padding_ + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,(ForAnyElementType *)plVar25,(int)this->_padding_,
                     (int *)((longlong)&this->_padding_ + 4));
        }
        break;
      }
    }
    if ((this_01 == (StatelessConnectHandlerComponent *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar14 = (UNetConnection *)(*pcVar2)();
      return pUVar14;
    }
    StatelessConnectHandlerComponent::InitFromConnectionless
              (this_01,(StatelessConnectHandlerComponent *)FVar33);
    if (4 < (byte)LogNet._0_1_) {
      (**(code **)(*(longlong *)local_350 + 0x2e0))(local_350,local_148);
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      if (local_148[0] != (void *)0x0) {
        FMemory::Free(local_148[0]);
      }
    }
    if (local_260[0] != (void *)0x0) {
      FMemory::Free(local_260[0]);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_2f8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_308[0].ReferenceController);
  param_1 = local_2e0;
LAB_14ec8e37b:
  iVar13 = (param_1->DataView).Data.ArrayNum;
  local_288 = (local_2d8->Buffer).DataPtr;
  iStack_280 = iVar13;
  if (iVar13 < 1) {
    FVar32.ComparisonIndex.Value = 1;
    FVar32.Number = 0;
    if ((iVar13 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar14 = (UNetConnection *)(*pcVar2)();
      return pUVar14;
    }
  }
  else {
    _Src = (param_1->DataView).Data.DataPtr;
    if (_Src != local_288) {
      memcpy(local_288,_Src,(longlong)iVar13);
    }
    FVar32.ComparisonIndex.Value = 0;
    FVar32.Number = 0;
  }
  cVar9 = (char)FVar32.ComparisonIndex.Value;
  local_278 = iVar13 * 8;
  (param_1->DataView).Data.DataPtr = local_288;
  *(ulonglong *)&(param_1->DataView).Data.ArrayNum = CONCAT44(uStack_27c,iStack_280);
  *(ulonglong *)&(param_1->DataView).CountBits = CONCAT44(uStack_274,local_278);
  FVar22 = local_350;
  if (local_356 == '\0') {
LAB_14ec8e474:
    cVar9 = (char)FVar32.ComparisonIndex.Value;
    FVar19 = StatPtr_Stat_IpNetDriverAddNewConnection;
    if (StatPtr_Stat_IpNetDriverAddNewConnection ==
        (FThreadSafeStaticStat<FStat_Stat_IpNetDriverAddNewConnection>)0x0) {
      pFVar18 = ::FName::FName(local_178,"Stat_IpNetDriverAddNewConnection");
      FVar19 = (FThreadSafeStaticStat<FStat_Stat_IpNetDriverAddNewConnection>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_Stat_IpNetDriverAddNewConnection,
                          *pFVar18,L"IpNetDriver Add new connection","STATGROUP_Net",
                          "STATCAT_Advanced",L"Net",true,true,ST_int64,true,false,MCR_Invalid);
    }
    local_348.ComparisonIndex.Value = 0;
    local_348.Number = 0;
    local_340 = 0;
    FVar31 = *(FName *)FVar19;
    if ((FVar31.ComparisonIndex.Value.Value != 0) || (FVar31.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_320[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_320[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
        local_340 = local_340 | 1;
        if (-1 < CpuChannel->Enabled) {
          local_2c0.ComparisonIndex.Value = FVar31.ComparisonIndex.Value.Value;
          local_2c0.Number = FVar31.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_2c0,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                     ,0x5a4);
          local_340 = local_340 | 2;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_350 = FVar31;
        local_348 = FVar31;
        FThreadStats::AddMessage(FVar31,CycleScopeStart);
        local_340 = local_340 | 4;
      }
    }
    if (4 < (byte)LogNet._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_Server_acceptin_153064480,
                 (FLogCategoryBase *)&LogNet);
    }
    pUVar15 = (UClass *)this->_padding_;
    local_2b8 = 0;
    pUVar20 = GetTransientPackage();
    local_2b0 = 0;
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)pUVar20,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar21 = UIpConnection::StaticClass();
    CheckIsClassChildOf_Internal(pUVar21,pUVar15);
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_c8,pUVar15);
    local_c8._24_4_ = RF_NoFlags;
    local_c8._40_8_ = (UObject *)0x0;
    local_c8[0x20] = false;
    local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_c8._56_8_ = (UPackage *)0x0;
    local_c8._16_4_ = 0;
    local_c8._20_4_ = 0;
    local_c8._8_8_ = pUVar20;
    FVar22 = (FName)StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
    local_350 = FVar22;
    if (local_c8._64_8_ != 0) {
      plVar25 = (longlong *)(local_c8 + 0x50);
      if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
        plVar25 = (longlong *)local_c8._104_8_;
      }
      (**(code **)(*plVar25 + 0x10))();
    }
    if ((FVar22 == (FName)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ReturnVal != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                           ,0x5a9,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar14 = (UNetConnection *)(*pcVar2)();
      return pUVar14;
    }
    local_328 = *(FName **)(*(longlong *)FVar22 + 0x358);
    if ((local_318->Object == (FInternetAddr *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      pUVar14 = (UNetConnection *)(*pcVar2)();
      return pUVar14;
    }
    lVar28 = this->_padding_;
    if (lVar28 == 0) {
      bVar3 = false;
      bVar6 = true;
      pFVar23 = FURL::FURL(&local_138,(wchar_t *)0x0);
    }
    else {
      bVar3 = true;
      bVar6 = false;
      ::FString::FString(&local_240.Protocol,(FString *)(lVar28 + 0x7b8));
      ::FString::FString(&local_240.Host,(FString *)(lVar28 + 0x7c8));
      local_240.Port = *(int *)(lVar28 + 0x7d8);
      local_240.Valid = *(int *)(lVar28 + 0x7dc);
      ::FString::FString(&local_240.Map,(FString *)(lVar28 + 0x7e0));
      ::FString::FString(&local_240.RedirectURL,(FString *)(lVar28 + 0x7f0));
      local_240.Op.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar13 = *(int *)(lVar28 + 0x808);
      local_2d8 = *(FPacketBufferView **)(lVar28 + 0x800);
      local_240.Op.ArrayNum = iVar13;
      if (iVar13 == 0) {
        local_240.Op.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,iVar13,0,&local_240.Op.AllocatorInstance,iVar13,&local_240.Op.ArrayMax);
        ConstructItems<FString,FString,int>
                  (local_240.Op.AllocatorInstance.Data,(FString *)local_2d8,iVar13);
      }
      ::FString::FString(&local_240.Portal,(FString *)(lVar28 + 0x810));
      pFVar23 = &local_240;
      FVar22 = local_350;
    }
    (*(code *)local_328)(FVar22,this,(this->SocketPrivate).Object,pFVar23);
    if (bVar6) {
      if (local_138.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_138.Op.AllocatorInstance.Data,local_138.Op.ArrayNum);
      if (local_138.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Op.AllocatorInstance.Data);
      }
      if (local_138.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_138.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Map.Data.AllocatorInstance.Data);
      }
      if (local_138.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Host.Data.AllocatorInstance.Data);
      }
      if (local_138.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Protocol.Data.AllocatorInstance.Data);
      }
    }
    if (bVar3) {
      if (local_240.Portal.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Portal.Data.AllocatorInstance.Data);
      }
      DestructItems<FString,int>
                ((FString *)local_240.Op.AllocatorInstance.Data,local_240.Op.ArrayNum);
      if (local_240.Op.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Op.AllocatorInstance.Data);
      }
      if (local_240.RedirectURL.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.RedirectURL.Data.AllocatorInstance.Data);
      }
      if (local_240.Map.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Map.Data.AllocatorInstance.Data);
      }
      if (local_240.Host.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Host.Data.AllocatorInstance.Data);
      }
      if (local_240.Protocol.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Protocol.Data.AllocatorInstance.Data);
      }
    }
    if (FVar33 != (FName)0x0) {
      (**(code **)(*(longlong *)FVar22 + 0x378))
                (FVar22,*(undefined4 *)((longlong)FVar33 + 0x134),
                 *(undefined4 *)((longlong)FVar33 + 0x130));
    }
    if (*(PacketHandler **)((longlong)FVar22 + 0x198) != (PacketHandler *)0x0) {
      local_1d8._16_8_ = 0;
      local_1d8._0_8_ = 0;
      local_1d8._8_8_ = 0;
      PacketHandler::BeginHandshaking(*(PacketHandler **)((longlong)FVar22 + 0x198),&local_1d8);
    }
    (**(code **)(*(longlong *)this->_padding_ + 8))((longlong *)this->_padding_,FVar22);
    UNetDriver::AddClientConnection((UNetDriver *)this,(UNetConnection *)FVar22);
    RemoveFromNewIPTracking(this,local_318->Object);
    if ((local_340 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_340 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    param_1 = local_2e0;
    if ((local_340 & 4) != 0) {
      FThreadStats::AddMessage(local_348,CycleScopeEnd);
      param_1 = local_2e0;
    }
  }
  if (FVar33 != (FName)0x0) {
    local_250 = 0;
    FStack_248.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if ((undefined8 *)((longlong)FVar33 + 0x120) != &local_250) {
      *(undefined8 *)((longlong)FVar33 + 0x120) = 0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)((longlong)FVar33 + 0x128),&FStack_248);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_248.ReferenceController);
    *(undefined1 *)((longlong)FVar33 + 0x1cc) = 0;
    *(undefined8 *)((longlong)FVar33 + 0x130) = 0;
    *(undefined8 *)((longlong)FVar33 + 0x1cd) = 0;
    *(undefined8 *)((longlong)FVar33 + 0x1d5) = 0;
    *(undefined4 *)((longlong)FVar33 + 0x1dd) = 0;
  }
  if (cVar9 == '\0') goto LAB_14ec8eacb;
  goto LAB_14ec8ea9c;
}

// RecreateSocket @ 14ec8fa30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

ERecreateSocketResult __thiscall UIpNetDriver::RecreateSocket(UIpNetDriver *this,int param_1)

{
  ESocketState EVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  FSocket *pFVar5;
  ERecreateSocketResult EVar6;
  TSharedRef<FInternetAddr,1> *pTVar7;
  FInternetAddr *pFVar8;
  TSharedPtr<FSocket,1> *pTVar9;
  undefined ***pppuVar10;
  undefined1 auStack_128 [32];
  undefined1 local_108;
  uint local_100;
  uint local_f8;
  void **local_f0;
  TSharedRef<FInternetAddr,1> local_e8;
  ISocketSubsystem *local_d8;
  FSocket *local_d0;
  void *local_c8;
  undefined8 local_c0;
  TSharedPtr<FSocket,1> local_b8;
  code *local_a8 [2];
  undefined **local_98;
  FSocket *pFStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  undefined **local_68;
  FSocket *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_128;
  this->LastRecreateSocketTime = (double)this->_padding_;
  if (((this->bSupportsRecreateSocket == false) || (this->_padding_ == 0)) ||
     ((*(uint *)(this->_padding_ + 0xfc) >> 1 & 1) != 0)) {
    EVar6 = NoAction;
  }
  else {
    EVar1 = this->SocketState;
    if (EVar1 == Ready) {
      if (param_1 == -1) {
        param_1 = (**(code **)(this->_padding_ + 0x508))(this);
      }
      uVar2 = this->ClientDesiredSocketSendBufferBytes;
      uVar3 = this->ClientDesiredSocketReceiveBufferBytes;
      local_c8 = (void *)0x0;
      pcVar4 = *(code **)(this->_padding_ + 0x518);
      local_c0 = 0;
      pTVar7 = TSharedPtr<FInternetAddr,1>::ToSharedRef
                         ((TSharedPtr<FInternetAddr,1> *)&this->_padding_,&local_e8);
      local_f0 = &local_c8;
      local_108 = 0;
      local_100 = uVar3;
      local_f8 = uVar2;
      (*pcVar4)(this,&local_d8,pTVar7,param_1);
      if (local_d0 == (FSocket *)0x0) {
        if (2 < (byte)LogNet._0_1_) {
          pFVar8 = TSharedPtr<FInternetAddr,1>::operator->
                             ((TSharedPtr<FInternetAddr,1> *)&this->_padding_);
          (**(code **)((longlong)*pFVar8 + 0x80))(pFVar8,&local_e8,0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if ((ISocketSubsystem *)local_e8.Object != (ISocketSubsystem *)0x0) {
            FMemory::Free(local_e8.Object);
          }
        }
        EVar6 = Error;
      }
      else {
        if (4 < (byte)LogNet._0_1_) {
          pFVar8 = TSharedPtr<FInternetAddr,1>::operator->
                             ((TSharedPtr<FInternetAddr,1> *)&this->_padding_);
          (**(code **)((longlong)*pFVar8 + 0x80))(pFVar8,&local_e8,1);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          if ((ISocketSubsystem *)local_e8.Object != (ISocketSubsystem *)0x0) {
            FMemory::Free(local_e8.Object);
          }
        }
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_b8.Object = (FSocket *)0x0;
        local_e8.Object = (FInternetAddr *)this;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_b8,(FObjectPtr)&local_e8);
        pFVar5 = local_d0;
        local_68 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::`11'::<lambda_1>,1,0>::
                    _vftable_;
        EVar6 = BeganRecreate;
        pFStack_60 = local_b8.Object;
        local_a8[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`UIpNetDriver::RecreateSocket'::__l11::<lambda_1>,void>::
                      Call;
        local_e8.Object = (FInternetAddr *)local_d8;
        this->SocketState = Recreating;
        local_80 = 0;
        local_50 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UIpNetDriver::RecreateSocket'::`11'::<lambda_1>,1,0>::
                    _vftable_;
        pFStack_90 = local_b8.Object;
        local_88 = local_58;
        local_78 = 0;
        local_d0 = (FSocket *)0x0;
        pTVar9 = TSharedPtr<FSocket,1>::TSharedPtr<FSocket,1><FSocket,FSocketDeleter>
                           (&local_b8,pFVar5,(FSocketDeleter *)&local_e8);
        SetSocket_Internal(this,pTVar9,(TUniqueFunction<void___cdecl(void)> *)local_a8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_b8.SharedReferenceCount.ReferenceController);
        if (local_78 != 0) {
          pppuVar10 = &local_68;
          if (local_50 != (undefined ***)0x0) {
            pppuVar10 = local_50;
          }
          (*(code *)(*pppuVar10)[2])();
        }
      }
      if ((local_d8 != (ISocketSubsystem *)0x0) && (local_d0 != (FSocket *)0x0)) {
        (**(code **)(local_d8->_padding_ + 0x38))();
      }
      if (local_c8 != (void *)0x0) {
        FMemory::Free(local_c8);
      }
    }
    else if (EVar1 == Resolving) {
      EVar6 = NotReady;
    }
    else {
      EVar6 = Error;
      if (EVar1 == Recreating) {
        EVar6 = AlreadyInProgress;
      }
    }
  }
  return EVar6;
}

// RemoveFromNewIPTracking @ 14ec918a0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall UIpNetDriver::RemoveFromNewIPTracking(UIpNetDriver *this,FInternetAddr *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  
  iVar5 = (**(code **)((longlong)*param_1 + 0x90))(param_1);
  pFVar2 = (this->NewIPHashes).AllocatorInstance.Data;
  pFVar10 = pFVar2;
  if (pFVar2 != pFVar2 + (longlong)(this->NewIPHashes).ArrayNum * 4) {
    while (*(int *)pFVar10 != iVar5) {
      pFVar10 = pFVar10 + 4;
      if (pFVar10 == pFVar2 + (longlong)(this->NewIPHashes).ArrayNum * 4) {
        return;
      }
    }
    uVar8 = (uint)((longlong)pFVar10 - (longlong)pFVar2 >> 2);
    if (uVar8 != 0xffffffff) {
      uVar9 = 0;
      if ((int)uVar8 < (this->NewIPHitCount).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if ((uint)IPNetDriverInternal::MaxIPHitLogs <
          *(uint *)((this->NewIPHitCount).AllocatorInstance.Data + (longlong)(int)uVar8 * 4)) {
        pFVar2 = (this->AggregatedIPsToLog).AllocatorInstance.Data;
        iVar1 = (this->AggregatedIPsToLog).ArrayNum;
        for (pFVar10 = pFVar2; pFVar10 != pFVar2 + (longlong)iVar1 * 0x18; pFVar10 = pFVar10 + 0x18)
        {
          if (*(int *)pFVar10 == iVar5) {
            lVar7 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
                    ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
            uVar9 = (int)(lVar7 >> 2) - (int)(lVar7 >> 0x3f);
            if (uVar9 != 0xffffffff) {
              uVar6 = 0;
              if ((int)uVar9 < iVar1) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              TArray<UIpNetDriver::FAggregatedIP,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
                        (&this->AggregatedIPsToLog,uVar9);
            }
            break;
          }
        }
      }
      iVar5 = (this->NewIPHashes).ArrayNum;
      if (iVar5 == 1) {
        ResetNewIPTracking(this);
      }
      else if (uVar8 == iVar5 - 1U) {
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveAt(&this->NewIPHashes,uVar8,No);
        TArray<unsigned_int,TSizedDefaultAllocator<32>_>::RemoveAt(&this->NewIPHitCount,uVar8,No);
      }
      else {
        uVar9 = 0;
        if ((int)uVar8 < (this->NewIPHitCount).ArrayNum) {
          uVar9 = ~uVar8 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((this->NewIPHitCount).AllocatorInstance.Data + (longlong)(int)uVar8 * 4) = 0
        ;
      }
    }
  }
  return;
}

// ResetNewIPTracking @ 14ec93240

void __thiscall UIpNetDriver::ResetNewIPTracking(UIpNetDriver *this)

{
  int *piVar1;
  int iVar2;
  
  (this->NewIPHashes).ArrayNum = 0;
  if ((this->NewIPHashes).ArrayMax != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x100,&(this->NewIPHashes).AllocatorInstance,0,&(this->NewIPHashes).ArrayMax);
  }
  (this->NewIPHitCount).ArrayNum = 0;
  if ((this->NewIPHitCount).ArrayMax != 0x100) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0x100,&(this->NewIPHitCount).AllocatorInstance,0,&(this->NewIPHitCount).ArrayMax)
    ;
  }
  iVar2 = IPNetDriverInternal::MaxAggregateIPLogs;
  if (-1 < IPNetDriverInternal::MaxAggregateIPLogs) {
    DestructItems<UIpNetDriver::FAggregatedIP,int>
              ((FAggregatedIP *)(this->AggregatedIPsToLog).AllocatorInstance.Data,
               (this->AggregatedIPsToLog).ArrayNum);
    piVar1 = &(this->AggregatedIPsToLog).ArrayMax;
    (this->AggregatedIPsToLog).ArrayNum = 0;
    if (*piVar1 != iVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar2,&(this->AggregatedIPsToLog).AllocatorInstance,0,piVar1);
    }
    this->bExceededIPAggregationLimit = false;
    this->NextAggregateIPLogCountdown = 0.0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)IPNetDriverInternal::MaxAggregateIPLogs);
}

// SetSocketAndLocalAddress @ 14ec97dc0

void __thiscall
UIpNetDriver::SetSocketAndLocalAddress(UIpNetDriver *this,TSharedPtr<FSocket,1> *param_1)

{
  longlong *plVar1;
  FSocket *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong *plVar5;
  longlong local_58;
  FSharedReferencer<1> local_50;
  undefined1 local_48 [8];
  TReferenceControllerBase<1> *local_40;
  TUniqueFunction<void___cdecl(void)> local_38;
  
  local_38._0_8_ = 0;
  local_38._40_8_ = 0;
  SetSocket_Internal(this,param_1,&local_38);
  if ((this->SocketPrivate).Object != (FSocket *)0x0) {
    plVar1 = &this->_padding_;
    if (*plVar1 == 0) {
      plVar5 = (longlong *)(**(code **)(this->_padding_ + 0x408))(this);
      plVar5 = (longlong *)(**(code **)(*plVar5 + 0x90))(plVar5,local_48);
      local_50.ReferenceController = (TReferenceControllerBase<1> *)plVar5[1];
      local_58 = *plVar5;
      if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (plVar1 != &local_58) {
        *plVar1 = local_58;
        local_58 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)&this->_padding_,&local_50);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_40);
    }
    if ((this->SocketPrivate).Object == (FSocket *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->SocketPrivate).Object;
    pcVar3 = *(code **)(pFVar2->_padding_ + 0x90);
    if (*plVar1 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    (*pcVar3)(pFVar2,*plVar1);
  }
  return;
}

// SetSocket_Internal @ 14ec980b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec98378) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff98 : 0x00014ec9837c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UIpNetDriver::SetSocket_Internal
          (UIpNetDriver *this,TSharedPtr<FSocket,1> *param_1,
          TUniqueFunction<void___cdecl(void)> *param_2)

{
  TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *pTVar1;
  atomic<int> *paVar2;
  int iVar3;
  int iVar4;
  UIpConnection *this_00;
  FReceiveThreadRunnable *pFVar5;
  code *pcVar6;
  TReferenceControllerBase<1> *pTVar7;
  uchar *puVar8;
  bool bVar9;
  UClass *pUVar10;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  longlong *plVar14;
  undefined8 *puVar15;
  TReferenceControllerBase<1> *pTVar16;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  FReceiveThreadRunnable *local_f0;
  TReferenceControllerBase<1> *pTStack_e8;
  longlong local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  longlong *local_b0;
  TReferenceControllerBase<1> *local_a8;
  FReceiveThreadRunnable *local_98;
  FSocket *local_90;
  TReferenceControllerBase<1> *local_88;
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_118;
  if (this->SocketState != Recreating) {
    this->SocketState = Ready;
  }
  if (param_1->Object != (this->SocketPrivate).Object) {
    pTVar16 = (this->SocketPrivate).SharedReferenceCount.ReferenceController;
    (this->SocketPrivate).SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    (this->SocketPrivate).Object = (FSocket *)0x0;
    local_f0 = (FReceiveThreadRunnable *)param_1->Object;
    pTStack_e8 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTStack_e8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_e8->SharedReferenceCount = (atomic<int>)((int)pTStack_e8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar7 = (this->SocketPrivate).SharedReferenceCount.ReferenceController;
    (this->SocketPrivate).Object = (FSocket *)local_f0;
    (this->SocketPrivate).SharedReferenceCount.ReferenceController = pTStack_e8;
    local_a8 = pTVar16;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
    local_f0 = (this->SocketReceiveThreadRunnable).Ptr;
    if (this->_padding_ == 0) {
LAB_14ec981ad:
      puVar15 = (undefined8 *)this->_padding_;
      iVar3 = (int)this->_padding_;
      puVar12 = puVar15 + iVar3;
      while( true ) {
        if ((int)this->_padding_ != iVar3) {
          `TCheckedPointerIterator<TObjectPtr<UNetConnection>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_f8);
        }
        pTVar16 = local_a8;
        if (puVar15 == puVar12) break;
        this_00 = (UIpConnection *)*puVar15;
        if (this_00 != (UIpConnection *)0x0) {
          pUVar10 = UIpConnection::StaticClass();
          iVar4 = (int)pUVar10->_padding_;
          if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar10->_padding_)) {
            UIpConnection::SetSocket_Local(this_00,param_1);
          }
        }
        puVar15 = puVar15 + 1;
      }
    }
    else {
      pUVar10 = UIpConnection::StaticClass();
      bVar9 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar10);
      if ((!bVar9) || ((UIpConnection *)this->_padding_ == (UIpConnection *)0x0))
      goto LAB_14ec981ad;
      UIpConnection::SetSocket_Local((UIpConnection *)this->_padding_,param_1);
    }
    if (local_f0 != (FReceiveThreadRunnable *)0x0) {
      local_78 = *(longlong *)param_2;
      local_50 = *(undefined8 *)&param_2->field_0x28;
      pFVar5 = (this->SocketReceiveThreadRunnable).Ptr;
      *(undefined8 *)&param_2->field_0x28 = 0;
      local_b8 = *(undefined8 *)&param_2->field_0x20;
      local_c8 = *(undefined4 *)&param_2->field_0x10;
      uStack_c4 = *(undefined4 *)&param_2->field_0x14;
      uStack_c0 = *(undefined4 *)&param_2->field_0x18;
      uStack_bc = *(undefined4 *)&param_2->field_0x1c;
      if (local_78 != 0) {
        *(undefined8 *)param_2 = 0;
      }
      local_90 = (this->SocketPrivate).Object;
      local_88 = (this->SocketPrivate).SharedReferenceCount.ReferenceController;
      if (local_88 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_b0 = (longlong *)0x0;
      local_d8 = local_78;
      if (local_78 != 0) {
        local_d8 = 0;
      }
      local_98 = pFVar5;
      local_68 = local_c8;
      uStack_64 = uStack_c4;
      uStack_60 = uStack_c0;
      uStack_5c = uStack_bc;
      local_58 = local_b8;
      aVar11 = (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)
               TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::AllocNode
                         (&pFVar5->CommandQueue);
      pTVar1 = (TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)
               ((longlong)aVar11 + 0x10);
      pTVar1->Pad[0] = '\0';
      pTVar1->Pad[1] = '\0';
      pTVar1->Pad[2] = '\0';
      pTVar1->Pad[3] = '\0';
      pTVar1->Pad[4] = '\0';
      pTVar1->Pad[5] = '\0';
      pTVar1->Pad[6] = '\0';
      pTVar1->Pad[7] = '\0';
      puVar8 = (uchar *)((longlong)aVar11 + 0x38);
      puVar8[0] = '\0';
      puVar8[1] = '\0';
      puVar8[2] = '\0';
      puVar8[3] = '\0';
      puVar8[4] = '\0';
      puVar8[5] = '\0';
      puVar8[6] = '\0';
      puVar8[7] = '\0';
      puVar12 = FMemory::Malloc(0x60,0x10);
      *(undefined8 **)((longlong)aVar11 + 0x38) = puVar12;
      *puVar12 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::`2'::<lambda_1>,1,1>
                  ::_vftable_;
      puVar12[2] = local_98;
      puVar12[3] = local_90;
      puVar12[4] = local_88;
      local_88 = (TReferenceControllerBase<1> *)0x0;
      local_90 = (FSocket *)0x0;
      puVar12[6] = local_78;
      puVar12[0xb] = local_50;
      local_50 = 0;
      *(undefined4 *)(puVar12 + 8) = local_68;
      *(undefined4 *)((longlong)puVar12 + 0x44) = uStack_64;
      *(undefined4 *)(puVar12 + 9) = uStack_60;
      *(undefined4 *)((longlong)puVar12 + 0x4c) = uStack_5c;
      puVar12[10] = local_58;
      if (puVar12[6] != 0) {
        local_78 = 0;
      }
      if (puVar12 + 2 != (longlong *)0x0) {
        *(code **)((TTypeCompatibleBytes<TUniqueFunction<void___cdecl(void)>_> *)
                  ((longlong)aVar11 + 0x10))->Pad =
             UE::Core::Private::Function::
             TFunctionRefCaller<`UIpNetDriver::FReceiveThreadRunnable::SetSocket'::__l2::<lambda_1>,void>
             ::Call;
      }
      ((pFVar5->CommandQueue).Head)->Next = aVar11;
      (pFVar5->CommandQueue).Head = (FNode *)aVar11;
      LOCK();
      paVar2 = &(pFVar5->CommandQueue).NumElems;
      *paVar2 = (atomic<int>)((int)*paVar2 + 1);
      UNLOCK();
      if (local_78 != 0) {
        (**(code **)(CONCAT44(uStack_64,local_68) + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_88);
      if (local_d8 != 0) {
        plVar14 = (longlong *)&local_c8;
        if (local_b0 != (longlong *)0x0) {
          plVar14 = local_b0;
        }
        (**(code **)(*plVar14 + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
      goto LAB_14ec983e3;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar16);
  }
  if (*(void **)param_2 == (void *)0x0) {
    return;
  }
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar6 = *(code **)param_2;
  plVar14 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar14 = *(longlong **)&param_2->field_0x28;
  }
  uVar13 = (**(code **)(*plVar14 + 8))();
  (*pcVar6)(uVar13);
LAB_14ec983e3:
  if (*(longlong *)param_2 != 0) {
    plVar14 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar14 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar14 + 0x10))();
  }
  return;
}

// StaticRegisterNativesUIpNetDriver @ 14ec99960

void __cdecl UIpNetDriver::StaticRegisterNativesUIpNetDriver(void)

{
  return;
}

// TestSuddenPortChange @ 14ec99bd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpNetDriver::TestSuddenPortChange(UIpNetDriver *this,uint param_1)

{
  UObject *pUVar1;
  TReferenceControllerBase<1> *pTVar2;
  FInternetAddr *pFVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  uint uVar7;
  UClass *pUVar8;
  longlong lVar9;
  FObjectPtr_u_0 *this_00;
  uint uVar10;
  bool bVar11;
  TPairInitializer<TSharedRef<FInternetAddr_const_,1>_&&,TObjectPtr<UNetConnection>_&&> local_res8;
  longlong local_res18;
  TReferenceControllerBase<1> *local_res20;
  UObject *local_98;
  FInternetAddr *local_90;
  TReferenceControllerBase<1> *local_88;
  TSharedRef<FInternetAddr_const_,1> local_80;
  FInternetAddr **local_70;
  UObject **local_68;
  void *local_60 [4];
  
  if ((((this->_padding_ != 0) && (this->_padding_ != 0)) && (this->_padding_ != 0)) &&
     (0 < *(int *)(this->_padding_ + 8))) {
    local_res20 = (TReferenceControllerBase<1> *)this->_padding_;
    if (local_res20 != (TReferenceControllerBase<1> *)0x0) {
      aVar5 = local_res20->SharedReferenceCount;
      do {
        if (aVar5 == (atomic<int>)0x0) {
          local_res20 = (TReferenceControllerBase<1> *)0x0;
          break;
        }
        LOCK();
        aVar6 = local_res20->SharedReferenceCount;
        bVar11 = aVar5 == aVar6;
        if (bVar11) {
          local_res20->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
          aVar6 = aVar5;
        }
        UNLOCK();
        aVar5 = aVar6;
      } while (!bVar11);
    }
    uVar10 = 0;
    local_res8.Value._0_4_ = param_1;
    if (0 < (int)this->_padding_) {
      local_res18 = 0;
      do {
        lVar9 = local_res18;
        if (param_1 == 0) break;
        uVar7 = 0;
        if ((int)uVar10 < (int)this->_padding_) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        this_00 = (FObjectPtr_u_0 *)(this->_padding_ + lVar9);
        if (this_00->Handle != (UObject *)0x0) {
          pUVar8 = UIpConnection::StaticClass();
          bVar11 = FObjectPtr::IsA((FObjectPtr *)this_00,pUVar8);
          if ((bVar11) && (pUVar1 = this_00->Handle, pUVar1 != (UObject *)0x0)) {
            if ((*(longlong *)(pUVar1 + 9) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x408,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pTVar2 = *(TReferenceControllerBase<1> **)&pUVar1[9].field_0x8;
            pFVar3 = *(FInternetAddr **)(pUVar1 + 9);
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            if ((pFVar3 == (FInternetAddr *)0x0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x25d,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_80.Object = pFVar3;
            local_80.SharedReferenceCount.ReferenceController = pTVar2;
            if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
              uVar7 = (**(code **)((longlong)*pFVar3 + 0x90))(pFVar3);
              TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
              ::RemoveImpl<TSharedRef<FInternetAddr_const_,1>_>
                        ((TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
                          *)&this->_padding_,uVar7,&local_80);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            if ((*(longlong *)(pUVar1 + 9) == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar11)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            (**(code **)(**(longlong **)(pUVar1 + 9) + 0x28))
                      (*(longlong **)(pUVar1 + 9),uVar10 + 0x2694);
            local_98 = pUVar1;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(pUVar1);
            }
            if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_70 = &local_90;
            local_68 = &local_98;
            local_90 = pFVar3;
            local_88 = pTVar2;
            TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
            ::
            Emplace<TPairInitializer<TSharedRef<FInternetAddr_const_,1>_&&,TObjectPtr<UNetConnection>_&&>_>
                      ((TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
                        *)&this->_padding_,&local_res8,(bool *)&local_70);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_88);
            this->AllowPlayerPortUnreach = 1;
            if (4 < (byte)LogNet._0_1_) {
              (**(code **)(*(longlong *)pUVar1 + 0x2e0))(pUVar1,local_60);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_60[0] != (void *)0x0) {
                FMemory::Free(local_60[0]);
              }
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar2);
            lVar9 = local_res18;
          }
        }
        local_res18 = lVar9 + 8;
        uVar10 = uVar10 + 1;
        param_1 = param_1 - 1;
      } while ((int)uVar10 < (int)this->_padding_);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res20)
    ;
  }
  return;
}

// TickDispatch @ 14ec9a670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014ec9a7dc) */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UIpNetDriver::TickDispatch(UIpNetDriver *this,float param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  FReceiveThreadRunnable *pFVar6;
  atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> aVar7;
  FScriptContainerElement *pFVar8;
  FInternetAddr *pFVar9;
  AActor *pAVar10;
  code *pcVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  TConsoleVariableData<int> *pTVar15;
  FInternetAddr *pFVar16;
  FSharedReferencer<1> FVar17;
  UNetConnection *pUVar18;
  bool bVar19;
  bool bVar20;
  char cVar21;
  undefined1 uVar22;
  uint uVar23;
  int iVar24;
  EConnectionState EVar25;
  UClass *pUVar26;
  UIpConnection *pUVar27;
  UNetConnection *pUVar28;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  ulonglong uVar31;
  longlong lVar32;
  undefined8 *puVar33;
  UWorld *pUVar34;
  ulonglong uVar35;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 extraout_XMM0_06 [16];
  undefined1 extraout_XMM0_07 [16];
  undefined1 extraout_XMM0_08 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 extraout_XMM0_09 [16];
  undefined1 extraout_XMM0_10 [16];
  undefined1 extraout_XMM0_11 [16];
  undefined8 extraout_XMM0_Qb_01;
  undefined1 extraout_XMM0_12 [16];
  undefined1 extraout_XMM0_13 [16];
  undefined1 extraout_XMM0_14 [16];
  undefined1 auVar36 [16];
  undefined1 auStackY_858 [32];
  UNetConnection *local_828;
  int local_820;
  FLLMScope local_81c;
  FReceivedPacketView local_818;
  FTimespan local_7c8;
  FString local_7c0;
  FName local_7b0;
  LARGE_INTEGER local_7a8;
  LARGE_INTEGER local_7a0;
  ISocketSubsystem *local_798;
  UNetConnection **local_790;
  LARGE_INTEGER local_788;
  FMemScope local_780;
  code *local_778;
  longlong local_768;
  undefined8 uStack_760;
  undefined8 local_758;
  longlong *local_750;
  char local_748;
  code *local_738;
  longlong local_728;
  undefined8 uStack_720;
  undefined8 local_718;
  longlong *local_710;
  char local_708;
  TSharedRef<FInternetAddr_const_,1> local_6f8;
  FPacketBufferView local_6e8;
  void *local_6d8 [2];
  void *local_6c8 [2];
  void *local_6b8 [2];
  void *local_6a8 [2];
  void *local_698 [2];
  void *local_688 [2];
  void *local_678 [2];
  void *local_668 [2];
  void *local_658 [2];
  void *local_648 [2];
  FScopedLevelCollectionContextSwitch local_638;
  FBitReader local_628;
  FPacketIterator local_578;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_858;
  uVar35 = 0;
  local_820 = 0;
  FLLMScope::FLLMScope(&local_81c,LLMTagDeclaration_NetDriver.UniqueName,false,None,Default,true);
  local_7b0 = LLMTagDeclaration_NetDriver.UniqueName;
  FMemScope::FMemScope(&local_780,&local_7b0,true);
  UNetDriver::TickDispatch((UNetDriver *)this,param_1);
  pFVar6 = (this->SocketReceiveThreadRunnable).Ptr;
  if (pFVar6 != (FReceiveThreadRunnable *)0x0) {
LAB_14ec9a720:
    aVar7 = *(atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*> *)
             (pFVar6->OwnerEventQueue).Tail;
    if (aVar7 == (atomic<TSpscQueue<TUniqueFunction<void___cdecl(void)>,FMemory>::FNode_*>)0x0) {
      local_708 = '\0';
    }
    else {
      local_778 = *(code **)((longlong)aVar7 + 0x10);
      local_750 = *(longlong **)((longlong)aVar7 + 0x38);
      *(undefined8 *)((longlong)aVar7 + 0x38) = 0;
      local_768 = *(longlong *)((longlong)aVar7 + 0x20);
      uStack_760 = *(undefined8 *)((longlong)aVar7 + 0x28);
      local_758 = *(undefined8 *)((longlong)aVar7 + 0x30);
      if (local_778 != (code *)0x0) {
        *(undefined8 *)((longlong)aVar7 + 0x10) = 0;
      }
      local_748 = '\x01';
      if (*(longlong *)((longlong)aVar7 + 0x10) != 0) {
        plVar29 = *(longlong **)((longlong)aVar7 + 0x38);
        if (*(longlong **)((longlong)aVar7 + 0x38) == (longlong *)0x0) {
          plVar29 = (longlong *)((longlong)aVar7 + 0x20);
        }
        (**(code **)(*plVar29 + 0x10))();
      }
      (pFVar6->OwnerEventQueue).Tail = aVar7;
      if (local_748 != '\0') {
        LOCK();
        paVar1 = &(pFVar6->OwnerEventQueue).NumElems;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
      }
      local_708 = local_748;
      if (local_748 == '\0') goto LAB_14ec9a844;
      local_738 = local_778;
      local_710 = local_750;
      local_750 = (longlong *)0x0;
      local_728 = local_768;
      uStack_720 = uStack_760;
      local_718 = local_758;
      if (local_778 != (code *)0x0) {
        local_778 = (code *)0x0;
      }
    }
    if (local_708 == '\0') goto LAB_14ec9a844;
    UE::Core::Private::Function::CheckCallable(local_738);
    pcVar11 = local_738;
    plVar29 = &local_728;
    if (local_710 != (longlong *)0x0) {
      plVar29 = local_710;
    }
    (**(code **)(*plVar29 + 8))();
    (*pcVar11)();
    if ((local_708 != '\0') && (local_738 != (code *)0x0)) {
      plVar29 = &local_728;
      if (local_710 != (longlong *)0x0) {
        plVar29 = local_710;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    goto LAB_14ec9a720;
  }
LAB_14ec9a844:
  dVar4 = __real_4170000000000000;
  if (this->PauseReceiveEnd == 0.0) {
LAB_14ec9a8a2:
    this->PauseReceiveEnd = 0.0;
  }
  else {
    QueryPerformanceCounter(&local_7a8);
    fVar3 = this->PauseReceiveEnd;
    if (fVar3 - (float)((double)local_7a8.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)
        <= 0.0) goto LAB_14ec9a8a2;
    this->PauseReceiveEnd = fVar3;
    if (fVar3 != 0.0) goto LAB_14ec9b59d;
  }
  pUVar34 = (UWorld *)this->_padding_;
  if (pUVar34 != (UWorld *)0x0) {
    pFVar8 = (pUVar34->LevelCollections).AllocatorInstance.Data;
    pFVar30 = pFVar8;
    if (pFVar8 != pFVar8 + (longlong)(pUVar34->LevelCollections).ArrayNum * 0x78) {
      do {
        if (*(UIpNetDriver **)(pFVar30 + 0x10) == this) {
          pUVar34 = (UWorld *)this->_padding_;
          lVar32 = SUB168(SEXT816(-0x7777777777777777) *
                          SEXT816((longlong)pFVar30 - (longlong)pFVar8),8) +
                   ((longlong)pFVar30 - (longlong)pFVar8);
          iVar24 = (int)(lVar32 >> 6) - (int)(lVar32 >> 0x3f);
          goto LAB_14ec9a8ff;
        }
        pFVar30 = pFVar30 + 0x78;
      } while (pFVar30 != pFVar8 + (longlong)(pUVar34->LevelCollections).ArrayNum * 0x78);
      pUVar34 = (UWorld *)this->_padding_;
    }
  }
  iVar24 = -1;
LAB_14ec9a8ff:
  FScopedLevelCollectionContextSwitch::FScopedLevelCollectionContextSwitch
            (&local_638,iVar24,pUVar34);
  FDDoSDetection::PreFrameReceive((FDDoSDetection *)&this->_padding_,param_1);
  local_798 = (ISocketSubsystem *)(**(code **)(this->_padding_ + 0x408))(this);
  pTVar15 = CVarNetUseRecvTimestamps.Ref;
  bVar19 = IsInParallelGameThread();
  if (bVar19) {
LAB_14ec9a949:
    uVar31 = uVar35;
  }
  else {
    bVar19 = IsInGameThread();
    uVar31 = 4;
    if (bVar19) goto LAB_14ec9a949;
  }
  local_820 = *(int *)((longlong)pTVar15->ShadowedValue + uVar31);
  if ((this->MaxSecondsInReceive <= 0.0) || (this->NbPacketsBetweenReceiveTimeTest < 1)) {
    bVar19 = false;
  }
  else {
    bVar19 = true;
  }
  QueryPerformanceCounter(&local_7a0);
  FPacketIterator::FPacketIterator
            (&local_578,this,(this->RecvMultiState).Ptr,
             (double)local_7a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4,bVar19);
  dVar14 = __real_416312d000000000;
  dVar13 = __real_3fe0000000000000;
  dVar5 = __real_408f400000000000;
  while (local_578.bBreak == false) {
    local_818.Data = (TArrayView<unsigned_char_const_,int> *)&local_818;
    local_818.DataView.Data.DataPtr = (uchar *)0x0;
    local_818.DataView.Data.ArrayNum = 0;
    plVar29 = &this->_padding_;
    local_818.DataView.CountBits = 0;
    local_818.Address.Object = (FInternetAddr *)0x0;
    local_818.Address.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_818.Traits.bConnectionlessPacket = false;
    local_818.Traits.bFromRecentlyDisconnected = false;
    local_818.Traits.ExtendedError = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
    bVar19 = FPacketIterator::GetCurrentPacket(&local_578,&local_818);
    auVar36 = extraout_XMM0;
    if ((local_818.Address.Object == (FInternetAddr *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), auVar36 = extraout_XMM0_00, bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    FVar17.ReferenceController = local_818.Address.SharedReferenceCount.ReferenceController;
    pFVar16 = local_818.Address.Object;
    if (local_818.Address.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_818.Address.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_818.Address.SharedReferenceCount.ReferenceController)->SharedReferenceCount
           + 1);
      UNLOCK();
    }
    if ((local_818.Address.Object == (FInternetAddr *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), auVar36 = extraout_XMM0_01, bVar20)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_828 = (UNetConnection *)0x0;
    if (*plVar29 == 0) {
LAB_14ec9ab07:
      pUVar28 = (UNetConnection *)0x0;
    }
    else {
      pUVar26 = UIpConnection::StaticClass();
      bVar20 = FObjectPtr::IsA((FObjectPtr *)plVar29,pUVar26);
      auVar36 = extraout_XMM0_02;
      if (!bVar20) goto LAB_14ec9ab07;
      pUVar28 = (UNetConnection *)*plVar29;
    }
    if (!bVar19) {
      if ((SE_ECONNABORTED < local_818.Error) ||
         ((0x2400081U >> (local_818.Error & SE_ETOOMANYREFS) & 1) == 0)) {
        if ((local_818.Error == SE_ECONNRESET) || (local_818.Error == SE_UDP_ERR_PORT_UNREACH))
        goto LAB_14ec9ab6f;
        if (local_818.Error == SE_EMSGSIZE) {
          piVar2 = (int *)((longlong)&this->_padding_ + 4);
          *piVar2 = *piVar2 + 1;
          pUVar18 = local_828;
          if (pUVar28 != (UNetConnection *)0x0) {
            if (((pUVar28->RemoteAddr).Object == (FInternetAddr *)0x0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar19)) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pFVar9 = (pUVar28->RemoteAddr).Object;
            cVar21 = (**(code **)((longlong)*pFVar9 + 8))(pFVar9,pFVar16);
            pUVar18 = pUVar28;
            if (cVar21 == '\0') {
              if (4 < (byte)LogNet._0_1_) {
                pFVar9 = (pUVar28->RemoteAddr).Object;
                if (pFVar9 != (FInternetAddr *)0x0) {
                  uVar35 = (ulonglong)((uint)uVar35 | 1);
                  (**(code **)((longlong)*pFVar9 + 0x80))(pFVar9,local_6c8,1);
                }
                (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_6d8,1);
                UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
                if (local_6d8[0] != (void *)0x0) {
                  FMemory::Free(local_6d8[0]);
                }
                if (((uVar35 & 1) != 0) &&
                   (uVar35 = (ulonglong)((uint)uVar35 & 0xfffffffe), local_6c8[0] != (void *)0x0)) {
                  FMemory::Free(local_6c8[0]);
                }
              }
              goto LAB_14ec9b3ae;
            }
          }
          local_828 = pUVar18;
          if ((local_828 != (UNetConnection *)0x0) && (2 < (byte)LogSecurity._0_1_)) {
            (**(code **)(local_828->_padding_ + 0x390))(local_828,local_6b8);
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSecurity);
            if (local_6b8[0] != (void *)0x0) {
              FMemory::Free(local_6b8[0]);
            }
          }
        }
        else {
          *(int *)&this->_padding_ = (int)this->_padding_ + 1;
        }
        (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_6a8,1);
        ISocketSubsystem::GetSocketError(local_798,local_818.Error);
        ::FString::PrintfImpl
                  (&local_7c0,L"UIpNetDriver::TickDispatch: Socket->RecvFrom: %i (%s) from %s");
        if (local_6a8[0] != (void *)0x0) {
          FMemory::Free(local_6a8[0]);
        }
        if (pUVar28 == (UNetConnection *)0x0) {
          if (((2 < (byte)LogNet._0_1_) && (*(char *)((longlong)&this->_padding_ + 1) == '\0')) &&
             (((char)this->_padding_ == '\0' ||
              (*(int *)&this->_padding_ = (int)this->_padding_ + 1,
              (int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4))))) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
          }
          goto LAB_14ec9b3ae;
        }
        fVar3 = *(float *)((longlong)&pUVar28[1].PackageMap.field0_0x0 + 4);
        if (fVar3 <= 0.0) {
LAB_14ec9b49d:
          pAVar10 = pUVar28[1].OwningActor.field0_0x0.DebugPtr;
          if ((((int)(pAVar10->PrimaryActorTick)._padding_ <
                (int)(pAVar10->PrimaryActorTick)._padding_) &&
              (cVar21 = *(char *)((longlong)&(pAVar10->PrimaryActorTick)._padding_ + 4),
              cVar21 != '\x01')) && (1 < (byte)(cVar21 - 6U))) {
            *(undefined1 *)((longlong)&(pAVar10->PrimaryActorTick)._padding_ + 4) = 4;
            *(undefined4 *)((longlong)&pUVar28[1].PackageMap.field0_0x0 + 4) = 0;
          }
          else {
            *(undefined1 *)((longlong)&(pAVar10->PrimaryActorTick)._padding_ + 4) = 7;
            UEngine::BroadcastNetworkFailure
                      (GEngine,(UWorld *)this->_padding_,(UNetDriver *)this,ConnectionLost,
                       &local_7c0);
            (**(code **)(this->_padding_ + 800))(this);
          }
        }
        else {
          dVar4 = *(double *)&pUVar28[1].OpenChannels.ArrayNum;
          dVar5 = (double)this->_padding_;
          if (dVar4 == 0.0) {
            if (4 < (byte)LogNet._0_1_) {
              (**(code **)(pUVar28->_padding_ + 0x2e0))(pUVar28,local_648);
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              if (local_648[0] != (void *)0x0) {
                FMemory::Free(local_648[0]);
              }
            }
            *(double *)&pUVar28[1].OpenChannels.ArrayNum = dVar5;
          }
          else if ((double)fVar3 <= dVar5 - dVar4) goto LAB_14ec9b49d;
        }
        if (local_7c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_7c0.Data.AllocatorInstance.Data);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FVar17.ReferenceController);
      if (local_818.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_818.Traits.ExtendedError + -0x10))
                  ((longlong)local_818.Traits.ExtendedError + -0x10);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_818.Address.SharedReferenceCount.ReferenceController);
      break;
    }
    if (local_818.DataView.CountBits == 0) {
      piVar2 = (int *)((longlong)&this->_padding_ + 4);
      *piVar2 = *piVar2 + 1;
    }
    else {
      if (GPacketAuditor != (FPacketAudit *)0x0) {
        FBitReader::FBitReader
                  (&local_628,local_818.DataView.Data.DataPtr,
                   (ulonglong)(uint)(local_818.DataView.Data.ArrayNum * 8));
        if (GPacketAuditor != (FPacketAudit *)0x0) {
          FPacketAudit::NotifyLowLevelReceive_Internal(GPacketAuditor,&local_628);
        }
        FBitReader::~FBitReader(&local_628);
        auVar36 = extraout_XMM0_03;
      }
LAB_14ec9ab6f:
      pUVar18 = local_828;
      if (pUVar28 != (UNetConnection *)0x0) {
        if (((pUVar28->RemoteAddr).Object == (FInternetAddr *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pFVar9 = (pUVar28->RemoteAddr).Object;
        cVar21 = (**(code **)((longlong)*pFVar9 + 8))(pFVar9,pFVar16);
        auVar36._8_8_ = extraout_XMM0_Qb;
        auVar36._0_8_ = (double)extraout_XMM0_Qa;
        pUVar18 = pUVar28;
        if ((cVar21 == '\0') && (pUVar18 = local_828, 2 < (byte)LogNet._0_1_)) {
          pFVar9 = (pUVar28->RemoteAddr).Object;
          if (pFVar9 != (FInternetAddr *)0x0) {
            uVar35 = (ulonglong)((uint)uVar35 | 2);
            (**(code **)((longlong)*pFVar9 + 0x80))(pFVar9,local_688,1);
          }
          (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_698,1);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          auVar36 = extraout_XMM0_04;
          if (local_698[0] != (void *)0x0) {
            FMemory::Free(local_698[0]);
            auVar36 = extraout_XMM0_05;
          }
          pUVar18 = local_828;
          if (((uVar35 & 2) != 0) &&
             (uVar35 = (ulonglong)((uint)uVar35 & 0xfffffffd), local_688[0] != (void *)0x0)) {
            FMemory::Free(local_688[0]);
            auVar36 = extraout_XMM0_06;
            pUVar18 = local_828;
          }
        }
      }
      local_828 = pUVar18;
      if (local_828 == (UNetConnection *)0x0) {
        local_6f8.Object = pFVar16;
        local_6f8.SharedReferenceCount.ReferenceController = FVar17.ReferenceController;
        if (FVar17.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (FVar17.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar17.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        uVar23 = (**(code **)((longlong)*pFVar16 + 0x90))(pFVar16);
        iVar24 = TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
                 ::FindIndexByHash<TSharedRef<FInternetAddr_const_,1>_>
                           ((TSet<TTuple<TSharedRef<FInternetAddr_const_,1>,TObjectPtr<UNetConnection>_>,FInternetAddrConstKeyMapFuncs<TObjectPtr<UNetConnection>_>,FDefaultSetAllocator>
                             *)&this->_padding_,uVar23,&local_6f8);
        if (iVar24 == -1) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          auVar36 = extraout_XMM0_10;
        }
        else {
          lVar32 = (longlong)iVar24 * 0x20 + this->_padding_;
          puVar33 = (undefined8 *)(lVar32 + 0x10);
          if (lVar32 == 0) {
            puVar33 = (undefined8 *)0x0;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar17.ReferenceController);
          auVar36 = extraout_XMM0_07;
          if (puVar33 != (undefined8 *)0x0) {
            pUVar28 = (UNetConnection *)*puVar33;
            if (pUVar28 == (UNetConnection *)0x0) {
              local_818.Traits.bFromRecentlyDisconnected = true;
            }
            else {
              if ((pUVar28->Driver).field0_0x0.DebugPtr == (UNetDriver *)0x0) {
                local_790 = &local_828;
                bVar20 = `UIpNetDriver::TickDispatch'[::M]::<lambda_2>::operator()(&local_790);
                auVar36 = extraout_XMM0_08;
                if (!bVar20) goto LAB_14ec9affc;
              }
              local_828 = pUVar28;
              pUVar27 = CastChecked<UIpConnection,UNetConnection>(pUVar28);
              if ((pUVar27->_padding_ == 0) &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar20)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              cVar21 = (**(code **)(*(longlong *)pUVar27->_padding_ + 8))
                                 ((longlong *)pUVar27->_padding_,pFVar16);
              auVar36._8_8_ = extraout_XMM0_Qb_00;
              auVar36._0_8_ = (double)extraout_XMM0_Qa_00;
              if ((cVar21 == '\0') &&
                 (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                     ("CastChecked<UIpConnection>(Connection)->RemoteAddr->CompareEndpoints(*FromAddr)"
                                      ,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Online\\OnlineSubsystemUtils\\Source\\OnlineSubsystemUtils\\Private\\IpNetDriver.cpp"
                                      ,0x4a3,L""), auVar36 = extraout_XMM0_09, bVar20)) {
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
          }
        }
      }
LAB_14ec9affc:
      if (bVar19) {
        bVar19 = false;
        if (local_828 == (UNetConnection *)0x0) {
          if ((char)this->_padding_ != '\0') {
            if (*(char *)((longlong)&this->_padding_ + 2) != '\0') {
              piVar2 = (int *)((longlong)&this->_padding_ + 4);
              *piVar2 = *piVar2 + 1;
              goto LAB_14ec9b3ae;
            }
            if (local_818.Traits.bFromRecentlyDisconnected == false) {
              *(int *)&this->_padding_ = (int)this->_padding_ + 1;
            }
            else {
              *(int *)&this->_padding_ = (int)this->_padding_ + 1;
            }
            if (((int)this->_padding_ + (int)this->_padding_ & 0x7fU) == 0) {
              bVar20 = FDDoSDetection::CheckNonConnQuotasAndLimits
                                 ((FDDoSDetection *)&this->_padding_);
              *(bool *)((longlong)&this->_padding_ + 2) = bVar20;
              auVar36 = extraout_XMM0_11;
            }
          }
          if ((undefined8 *)this->_padding_ == (undefined8 *)0x0) {
LAB_14ec9b25c:
            if (6 < (byte)LogNet._0_1_) {
              (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_658,1);
              UE::Logging::Private::BasicLog<7>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
              auVar36 = extraout_XMM0_13;
              if (local_658[0] != (void *)0x0) {
                FMemory::Free(local_658[0]);
                auVar36 = extraout_XMM0_14;
              }
            }
          }
          else {
            iVar24 = (*(code *)**(undefined8 **)this->_padding_)();
            auVar36._8_8_ = extraout_XMM0_Qb_01;
            auVar36._0_8_ = (double)extraout_XMM0_Qa_01;
            if (iVar24 != 1) goto LAB_14ec9b25c;
            if ((*(char *)((longlong)&this->_padding_ + 1) == '\0') &&
               ((((char)this->_padding_ == '\0' ||
                 (*(int *)&this->_padding_ = (int)this->_padding_ + 1,
                 (int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4))) &&
                (this->bExceededIPAggregationLimit == false)))) {
              TrackAndLogNewIP(this,pFVar16);
            }
            local_6e8.Buffer.DataPtr = (uchar *)&local_578.CurrentPacket.Data;
            local_6e8.Buffer.ArrayNum = 0x400;
            local_828 = ProcessConnectionlessPacket(this,&local_818,&local_6e8);
            bVar19 = local_818.DataView.Data.ArrayNum == 0;
            auVar36 = extraout_XMM0_12;
          }
          if ((local_828 == (UNetConnection *)0x0) || (bVar19)) goto LAB_14ec9b3ae;
        }
        if (((char)this->_padding_ != '\0') &&
           (piVar2 = (int *)((longlong)&this->_padding_ + 4), *piVar2 = *piVar2 + 1,
           (this->_padding_ & 0x7f00000000) == 0)) {
          if ((int)this->_padding_ < 1) {
LAB_14ec9b31e:
            uVar22 = 0;
          }
          else {
            QueryPerformanceCounter(&local_788);
            auVar36._0_8_ =
                 (((double)local_788.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4) -
                 (double)this->_padding_) * dVar5;
            auVar36._8_8_ = 0;
            if ((int)auVar36._0_8_ <= (int)this->_padding_) goto LAB_14ec9b31e;
            uVar22 = 1;
          }
          *(undefined1 *)((longlong)&this->_padding_ + 3) = uVar22;
        }
        pUVar28 = local_828;
        if (local_820 != 0) {
          local_7c8.Ticks = 0;
          if (local_578.bUseRecvMulti == false) {
            if (local_578.CurrentPacket.PacketTimestamp == 0.0) goto LAB_14ec9b396;
            bVar19 = true;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_578.CurrentPacket.PacketTimestamp * dVar14 + dVar13;
            auVar36 = roundpd(auVar36,auVar12,1);
            local_7c8.Ticks = (long64)auVar36._0_8_;
          }
          else {
            (**(code **)((local_578.RMState)->_padding_ + 8))
                      (local_578.RMState,local_578.RecvMultiIdx,&local_7c8);
            bVar19 = false;
          }
          (pUVar28->LastOSReceiveTime).Timestamp.Ticks = local_7c8.Ticks;
          pUVar28->bIsOSReceiveTimeLocal = bVar19;
        }
LAB_14ec9b396:
        (**(code **)(local_828->_padding_ + 0x3b0))
                  (local_828,local_818.DataView.Data.DataPtr,local_818.DataView.Data.ArrayNum);
      }
      else {
        if (local_828 == (UNetConnection *)0x0) {
          if (local_818.Traits.bFromRecentlyDisconnected == false) {
            *(int *)&this->_padding_ = (int)this->_padding_ + 1;
          }
          else {
            *(int *)&this->_padding_ = (int)this->_padding_ + 1;
          }
          if ((((this->LogPortUnreach != 0) && (*(char *)((longlong)&this->_padding_ + 1) == '\0'))
              && (((char)this->_padding_ == '\0' ||
                  (*(int *)&this->_padding_ = (int)this->_padding_ + 1,
                  (int)this->_padding_ <= *(int *)((longlong)&this->_padding_ + 4))))) &&
             (4 < (byte)LogNet._0_1_)) {
            (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_668,1);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_668[0] != (void *)0x0) {
              FMemory::Free(local_668[0]);
            }
          }
          goto LAB_14ec9b3ae;
        }
        if (this->_padding_ == 0) {
LAB_14ec9b03c:
          pUVar28 = (UNetConnection *)0x0;
        }
        else {
          pUVar26 = UIpConnection::StaticClass();
          bVar19 = FObjectPtr::IsA((FObjectPtr *)&this->_padding_,pUVar26);
          if (!bVar19) goto LAB_14ec9b03c;
          pUVar28 = (UNetConnection *)this->_padding_;
        }
        if ((local_828 != pUVar28) &&
           ((EVar25 = UNetConnection::GetConnectionState(local_828), EVar25 != USOCK_Open ||
            (this->AllowPlayerPortUnreach == 0)))) {
          if ((this->LogPortUnreach != 0) && (4 < (byte)LogNet._0_1_)) {
            (**(code **)((longlong)*pFVar16 + 0x80))(pFVar16,local_678,1);
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            if (local_678[0] != (void *)0x0) {
              FMemory::Free(local_678[0]);
            }
          }
          (**(code **)(local_828->_padding_ + 0x348))();
        }
      }
    }
LAB_14ec9b3ae:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar17.ReferenceController);
    if (local_818.Traits.ExtendedError != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
      (**(code **)((longlong)local_818.Traits.ExtendedError + -0x10))
                ((longlong)local_818.Traits.ExtendedError + -0x10);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_818.Address.SharedReferenceCount.ReferenceController);
    local_578.IterationCount = local_578.IterationCount + 1;
    FPacketIterator::AdvanceCurrentPacket(&local_578);
  }
  FPacketIterator::~FPacketIterator(&local_578);
  if (0 < (this->NewIPHashes).ArrayNum) {
    TickNewIPTracking(this,param_1);
  }
  FDDoSDetection::PostFrameReceive((FDDoSDetection *)&this->_padding_);
  FScopedLevelCollectionContextSwitch::~FScopedLevelCollectionContextSwitch(&local_638);
LAB_14ec9b59d:
  FMemScope::~FMemScope(&local_780);
  FLLMScope::~FLLMScope(&local_81c);
  return;
}

// TickNewIPTracking @ 14ec9b5f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UIpNetDriver::TickNewIPTracking(UIpNetDriver *this,float param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  void *pvVar9;
  size_t sVar10;
  ulong64 uVar11;
  FScriptContainerElement *pFVar12;
  wchar_t *_Str;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  double dVar16;
  undefined1 auStack_4098 [32];
  longlong local_4078;
  longlong local_4070;
  longlong local_4068;
  TStringBuilderBase<wchar_t> local_4058;
  wchar_t local_4038 [8192];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_4098;
  if (this->NextAggregateIPLogCountdown == 0.0) {
    uVar6 = rand();
    this->NextAggregateIPLogCountdown =
         (double)((float)(uVar6 & 0x7fff) * __real_38000100) * __real_4014000000000000 +
         __real_402e000000000000;
  }
  else {
    dVar16 = this->NextAggregateIPLogCountdown - (double)param_1;
    this->NextAggregateIPLogCountdown = dVar16;
    if (dVar16 <= 0.0) {
      uVar14 = 0;
      this->NextAggregateIPLogCountdown = 0.0;
      if (this->bExceededIPAggregationLimit == false) {
        if (0 < (this->AggregatedIPsToLog).ArrayNum) {
          local_4058.Base = local_4038;
          local_4058.CurPos = local_4038;
          local_4058.bIsDynamic = false;
          local_4058.bIsExternal = false;
          local_4058.End = (wchar_t *)local_38;
          pvVar9 = FGenericPlatformString::Memcpy
                             (local_4038,L"NotifyAcceptingConnection accepted aggregation: ",0x60);
          local_4058.CurPos = (wchar_t *)((longlong)pvVar9 + 0x60);
          if (0 < (this->AggregatedIPsToLog).ArrayNum) {
            local_4068 = 0;
            uVar15 = uVar14;
            do {
              lVar4 = local_4068;
              iVar1 = (this->AggregatedIPsToLog).ArrayNum;
              uVar13 = (uint)uVar14;
              uVar7 = 0;
              uVar6 = uVar7;
              if ((int)uVar13 < iVar1) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if (uVar6 == 0) {
                local_4078 = (longlong)(int)uVar13;
                local_4070 = (longlong)iVar1;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              pFVar2 = (this->NewIPHashes).AllocatorInstance.Data;
              if (pFVar2 != pFVar2 + (longlong)(this->NewIPHashes).ArrayNum * 4) {
                pFVar12 = pFVar2;
                do {
                  if (*(int *)pFVar12 ==
                      *(int *)((this->AggregatedIPsToLog).AllocatorInstance.Data + uVar15)) {
                    uVar6 = (uint)((longlong)pFVar12 - (longlong)pFVar2 >> 2);
                    goto LAB_14ec9b7ed;
                  }
                  pFVar12 = pFVar12 + 4;
                } while (pFVar12 != pFVar2 + (longlong)(this->NewIPHashes).ArrayNum * 4);
              }
              uVar6 = 0xffffffff;
LAB_14ec9b7ed:
              if (0 < (int)uVar13) {
                if (local_4058.End < local_4058.CurPos + 2) {
                  TStringBuilderBase<wchar_t>::Extend(&local_4058,2);
                }
                pvVar9 = FGenericPlatformString::Memcpy(local_4058.CurPos,L", ",4);
                local_4058.CurPos = (wchar_t *)((longlong)pvVar9 + 4);
              }
              iVar1 = (this->AggregatedIPsToLog).ArrayNum;
              uVar8 = uVar7;
              if ((int)uVar13 < iVar1) {
                uVar8 = ~uVar13 >> 0x1f;
              }
              if ((uVar8 == 0) &&
                 (local_4078 = lVar4, local_4070 = (longlong)iVar1,
                 bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pFVar2 = (this->AggregatedIPsToLog).AllocatorInstance.Data;
              if (*(int *)(pFVar2 + uVar15 + 0x10) == 0) {
                _Str = L"";
LAB_14ec9b8a6:
                sVar10 = wcslen(_Str);
                uVar7 = (uint)sVar10;
              }
              else {
                _Str = *(wchar_t **)(pFVar2 + uVar15 + 8);
                if (_Str != (wchar_t *)0x0) goto LAB_14ec9b8a6;
              }
              uVar11 = (ulong64)(int)uVar7;
              if (local_4058.End < local_4058.CurPos + uVar11) {
                TStringBuilderBase<wchar_t>::Extend(&local_4058,uVar11);
              }
              if (uVar7 != 0) {
                pvVar9 = FGenericPlatformString::Memcpy(local_4058.CurPos,_Str,uVar11 * 2);
                local_4058.CurPos = (wchar_t *)((longlong)pvVar9 + uVar11 * 2);
              }
              iVar1 = (this->NewIPHitCount).ArrayNum;
              uVar7 = 0;
              if ((int)uVar6 < iVar1) {
                uVar7 = ~uVar6 >> 0x1f;
              }
              if (uVar7 == 0) {
                local_4078 = (longlong)(int)uVar6;
                local_4070 = (longlong)iVar1;
                bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar5) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              TStringBuilderBase<wchar_t>::AppendfImpl(&local_4058,L" (%i)");
              uVar14 = (ulonglong)(uVar13 + 1);
              local_4068 = local_4068 + 1;
              uVar15 = uVar15 + 0x18;
            } while ((int)(uVar13 + 1) < (this->AggregatedIPsToLog).ArrayNum);
          }
          if (4 < (byte)LogNet._0_1_) {
            if (local_4058.End < local_4058.CurPos + 1) {
              TStringBuilderBase<wchar_t>::Extend(&local_4058,1);
            }
            *local_4058.CurPos = L'\0';
            UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
          }
          TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_4058);
        }
      }
      else if (4 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      ResetNewIPTracking(this);
    }
  }
  return;
}

// TrackAndLogNewIP @ 14ec9bd00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UIpNetDriver::TrackAndLogNewIP(UIpNetDriver *this,FInternetAddr *param_1)

{
  int *piVar1;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<UIpNetDriver::FAggregatedIP,TSizedDefaultAllocator<32>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  int local_48;
  undefined4 local_44;
  void *local_40 [2];
  int local_30 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_48 = (**(code **)((longlong)*param_1 + 0x90))(param_1);
  pTVar2 = &this->NewIPHashes;
  pFVar5 = (pTVar2->AllocatorInstance).Data;
  uVar9 = (this->NewIPHashes).ArrayNum;
  pFVar11 = pFVar5;
  do {
    if (pFVar11 == pFVar5 + (longlong)(int)uVar9 * 4) {
      uVar10 = 0xffffffff;
LAB_14ec9bd6d:
      this->bExceededIPAggregationLimit = 0xff < (int)uVar9;
      if ((int)uVar9 < 0x100) {
        if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
            ((FScriptContainerElement *)&local_48 <
             pFVar5 + (longlong)(this->NewIPHashes).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->NewIPHashes).ArrayNum;
        if (iVar8 == (this->NewIPHashes).ArrayMax) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar2->AllocatorInstance,&(this->NewIPHashes).ArrayMax);
        }
        local_44 = 0;
        (this->NewIPHashes).ArrayNum = iVar8 + 1;
        pTVar3 = &this->NewIPHitCount;
        *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_48;
        pFVar5 = (pTVar3->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)&local_44) &&
            ((FScriptContainerElement *)&local_44 <
             pFVar5 + (longlong)(this->NewIPHitCount).ArrayMax * 4)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar8 = (this->NewIPHitCount).ArrayNum;
        piVar1 = &(this->NewIPHitCount).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar3->AllocatorInstance,piVar1);
        }
        (this->NewIPHitCount).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_44;
        uVar10 = uVar9;
      }
LAB_14ec9beb4:
      if (this->bExceededIPAggregationLimit == false) {
        uVar9 = 0;
        if ((int)uVar10 < (this->NewIPHitCount).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->NewIPHitCount).AllocatorInstance.Data;
        uVar9 = *(int *)(pFVar5 + (longlong)(int)uVar10 * 4) + 1;
        *(uint *)(pFVar5 + (longlong)(int)uVar10 * 4) = uVar9;
        if ((uint)IPNetDriverInternal::MaxIPHitLogs < uVar9) {
          if (uVar9 != IPNetDriverInternal::MaxIPHitLogs + 1U) {
            return;
          }
          bVar7 = IPNetDriverInternal::MaxAggregateIPLogs <= (this->AggregatedIPsToLog).ArrayNum;
          this->bExceededIPAggregationLimit = bVar7;
          if (bVar7) {
            return;
          }
          local_30[0] = local_48;
          pTVar4 = &this->AggregatedIPsToLog;
          (**(code **)((longlong)*param_1 + 0x80))(param_1,&local_28,1);
          pFVar5 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar5 <= (FScriptContainerElement *)local_30) &&
              ((FScriptContainerElement *)local_30 <
               pFVar5 + (longlong)(this->AggregatedIPsToLog).ArrayMax * 0x18)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar8 = (this->AggregatedIPsToLog).ArrayNum;
          piVar1 = &(this->AggregatedIPsToLog).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x818,&pTVar4->AllocatorInstance,piVar1);
          }
          (this->AggregatedIPsToLog).ArrayNum = iVar8 + 1;
          pFVar5 = (pTVar4->AllocatorInstance).Data + (longlong)iVar8 * 0x18;
          *(int *)pFVar5 = local_30[0];
          *(undefined8 *)(pFVar5 + 8) = 0;
          *(undefined8 *)(pFVar5 + 8) = local_28;
          local_28 = 0;
          *(int *)(pFVar5 + 0x10) = (int)local_20;
          *(int *)(pFVar5 + 0x14) = local_20._4_4_;
          local_40[0] = (void *)0x0;
          local_20 = 0;
        }
        else {
          if ((byte)LogNet._0_1_ < 5) {
            return;
          }
          (**(code **)((longlong)*param_1 + 0x80))(param_1,local_40,1);
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        if (local_40[0] != (void *)0x0) {
          FMemory::Free(local_40[0]);
        }
      }
      return;
    }
    if (*(int *)pFVar11 == local_48) {
      uVar10 = (uint)((longlong)pFVar11 - (longlong)pFVar5 >> 2);
      if (uVar10 == 0xffffffff) goto LAB_14ec9bd6d;
      goto LAB_14ec9beb4;
    }
    pFVar11 = pFVar11 + 4;
  } while( true );
}

// operator() @ 15059dac0

bool __thiscall `UIpNetDriver::TickDispatch'[::M]::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  void *local_18 [2];
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4246184069609552736>);
  if (bVar2) {
    (**(code **)(*(longlong *)**(undefined8 **)this + 0x2e0))
              ((longlong *)**(undefined8 **)this,local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4246184069609552736>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15059db2e;
    }
  }
  bVar2 = false;
LAB_15059db2e:
  if ((bVar4) && (local_18[0] != (void *)0x0)) {
    FMemory::Free(local_18[0]);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

