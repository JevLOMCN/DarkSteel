// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BackChannel
// Functions: 45

// `dynamic_initializer_for_'BCCVarLogErrors'' @ 14143b520

void __cdecl _dynamic_initializer_for__BCCVarLogErrors__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&BCCVarLogErrors,L"backchannel.logerrors",&GBackChannelLogErrors,L"Logs packet errors",
             0);
  atexit(_dynamic_atexit_destructor_for__BCCVarLogErrors__);
  return;
}

// `dynamic_initializer_for_'BCCVarLogPackets'' @ 14143b570

void __cdecl _dynamic_initializer_for__BCCVarLogPackets__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&BCCVarLogPackets,L"backchannel.logpackets",&GBackChannelLogPackets,
             L"Logs incoming packets",0);
  atexit(_dynamic_atexit_destructor_for__BCCVarLogPackets__);
  return;
}

// `dynamic_initializer_for_'FBackChannelTestOSCBundleAutomationTestInstance'' @ 14143b5c0

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBackChannelTestOSCBundleAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBackChannelTestOSCBundle");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCBundleAutomationTestInstance,&local_18,false
            );
  FBackChannelTestOSCBundleAutomationTestInstance._0_8_ = &___7FBackChannelTestOSCBundle__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBackChannelTestOSCBundleAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'FBackChannelTestOSCBundleWithMessagesAutomationTestInstance'' @ 14143b620

void __cdecl
`anonymous_namespace'::
_dynamic_initializer_for__FBackChannelTestOSCBundleWithMessagesAutomationTestInstance__(void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBackChannelTestOSCBundleWithMessages");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCBundleWithMessagesAutomationTestInstance,
             &local_18,false);
  FBackChannelTestOSCBundleWithMessagesAutomationTestInstance._0_8_ =
       &___7FBackChannelTestOSCBundleWithMessages__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(
        _dynamic_atexit_destructor_for__FBackChannelTestOSCBundleWithMessagesAutomationTestInstance__
        );
  return;
}

// `dynamic_initializer_for_'FBackChannelTestOSCMessageAutomationTestInstance'' @ 14143b680

void __cdecl
`anonymous_namespace'::_dynamic_initializer_for__FBackChannelTestOSCMessageAutomationTestInstance__
          (void)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"FBackChannelTestOSCMessage");
  FAutomationTestBase::FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCMessageAutomationTestInstance,&local_18,
             false);
  FBackChannelTestOSCMessageAutomationTestInstance._0_8_ = &___7FBackChannelTestOSCMessage__6B_;
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  atexit(_dynamic_atexit_destructor_for__FBackChannelTestOSCMessageAutomationTestInstance__);
  return;
}

// `dynamic_initializer_for_'LogBackChannel'' @ 14143b6e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogBackChannel__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogBackChannel,L"LogBackChannel",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogBackChannel__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantBackChannel'' @ 14143b720

void __cdecl _dynamic_initializer_for__ModuleRegistrantBackChannel__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "BackChannel";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"BackChannel",0xb);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FBackChannelTransport>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BackChannelBytesRecv'' @ 14143b770

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BackChannelBytesRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BackChannelBytesRecv ==
      (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BackChannelBytesRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelBytesRecv,*pFVar1,
               L"BC.BytesRecv/s","STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BackChannelBytesSent'' @ 14143b800

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BackChannelBytesSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BackChannelBytesSent ==
      (FThreadSafeStaticStat<FStat_STAT_BackChannelBytesSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BackChannelBytesSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelBytesSent,*pFVar1,
               L"BC.BytesSent/s","STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BackChannelErrors'' @ 14143b890

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BackChannelErrors__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BackChannelErrors == (FThreadSafeStaticStat<FStat_STAT_BackChannelErrors>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BackChannelErrors");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelErrors,*pFVar1,L"BC.Errors/s",
               "STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",true,false,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BackChannelPacketsRecv'' @ 14143b920

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BackChannelPacketsRecv__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BackChannelPacketsRecv ==
      (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsRecv>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BackChannelPacketsRecv");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelPacketsRecv,*pFVar1,
               L"BC.PacketsRecv/s","STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_BackChannelPacketsSent'' @ 14143b9b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_BackChannelPacketsSent__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_BackChannelPacketsSent ==
      (FThreadSafeStaticStat<FStat_STAT_BackChannelPacketsSent>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_BackChannelPacketsSent");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_BackChannelPacketsSent,*pFVar1,
               L"BC.PacketsSent/s","STATGROUP_BackChannel","STATCAT_Advanced",L"BackChannel",true,
               false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14e7f04b0

void * __thiscall
IBackChannelTransport::_scalar_deleting_destructor_(IBackChannelTransport *this,uint param_1)

{
  *this = (IBackChannelTransport)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f05d0

void * __thiscall
FBackChannelTransport::_scalar_deleting_destructor_(FBackChannelTransport *this,uint param_1)

{
  *this = (FBackChannelTransport)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f0610

void * __thiscall
FBackChannelTestOSCBase::_scalar_deleting_destructor_(FBackChannelTestOSCBase *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f12f0

void * __thiscall
FBackChannelTestOSCMessage::_scalar_deleting_destructor_
          (FBackChannelTestOSCMessage *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f1ab0

void * __thiscall
FBackChannelTestOSCBundle::_scalar_deleting_destructor_
          (FBackChannelTestOSCBundle *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f2520

void * __thiscall
FBackChannelTestOSCBundleWithMessages::_scalar_deleting_destructor_
          (FBackChannelTestOSCBundleWithMessages *this,uint param_1)

{
  FAutomationTestBase::~FAutomationTestBase((FAutomationTestBase *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// DestructItems<TSharedPtr<FBackChannelOSCPacket,1>,int> @ 14e7f28b0

void __cdecl
DestructItems<TSharedPtr<FBackChannelOSCPacket,1>,int>
          (TSharedPtr<FBackChannelOSCPacket,1> *param_1,int param_2)

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

// ~TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::__l4::<lambda_1>,0,0> @ 14e7f3270

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::__l4::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FBackChannelThreadedListener::Run_::__l4::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::`4'::<lambda_1>,0,0>::_vftable_;
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e7f3bc4

/* [thunk]:public: virtual void * __ptr64 __cdecl FBackChannelOSCConnection::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FBackChannelOSCConnection::_vector_deleting_destructor__adjustor_8__
          (FBackChannelOSCConnection *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FBackChannelOSCConnection *)&this[-1].ExpectedSizeOfNextPacket,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e7f3bd4

/* [thunk]:public: virtual void * __ptr64 __cdecl FBackChannelOSCMessage::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FBackChannelOSCMessage::_vector_deleting_destructor__adjustor_8__
          (FBackChannelOSCMessage *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FBackChannelOSCMessage *)&this[-1].Buffer.ArrayNum,param_1)
  ;
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14e7f3bf0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::__l4::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FBackChannelThreadedListener::Run'::`4'::<lambda_1>,0,0>::_vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3c30

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FBackChannelOSCMessage,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FBackChannelOSCMessage,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x60);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3c70

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelConnection,SharedPointerInternals::DefaultDeleter<FBackChannelConnection>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBackChannelConnection,SharedPointerInternals::DefaultDeleter<FBackChannelConnection>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3cb0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelOSCBundle,SharedPointerInternals::DefaultDeleter<FBackChannelOSCBundle>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBackChannelOSCBundle,SharedPointerInternals::DefaultDeleter<FBackChannelOSCBundle>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3cf0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FBackChannelOSCMessage,SharedPointerInternals::DefaultDeleter<FBackChannelOSCMessage>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FBackChannelOSCMessage,SharedPointerInternals::DefaultDeleter<FBackChannelOSCMessage>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3d30

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
FBackChannelConnection::_scalar_deleting_destructor_(FBackChannelConnection *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FSocket *pFVar3;
  FScriptContainerElement *_Src;
  longlong *plVar4;
  FName *pFVar5;
  ISocketSubsystem *pIVar6;
  longlong lVar7;
  FName local_res8;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  this->_padding_ = (longlong)&___7FBackChannelConnection__6B_;
  lpCriticalSection = &this->SocketMutex;
  if (this->Socket != (FSocket *)0x0) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = this->Socket;
    if (pFVar3 != (FSocket *)0x0) {
      if (4 < (byte)LogBackChannel._0_1_) {
        local_28.Data = (FScriptContainerElement *)0x0;
        local_20 = (pFVar3->SocketDescription).Data.ArrayNum;
        lVar7 = (longlong)local_20;
        _Src = (pFVar3->SocketDescription).Data.AllocatorInstance.Data;
        if (local_20 == 0) {
          local_1c = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_20,0,&local_28,local_20,&local_1c);
          memcpy(local_28.Data,_Src,lVar7 * 2);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogBackChannel);
        if (local_28.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data);
        }
      }
      (**(code **)(this->Socket->_padding_ + 0x10))();
      pFVar5 = ::FName::FName(&local_res8,L"WINDOWS");
      pIVar6 = ISocketSubsystem::Get(pFVar5);
      (**(code **)(pIVar6->_padding_ + 0x38))(pIVar6,this->Socket);
      this->Socket = (FSocket *)0x0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
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
  this->_padding_ = (longlong)&___7IBackChannelSocketConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3ee0

void * __thiscall
FBackChannelDispatchMap::_scalar_deleting_destructor_(FBackChannelDispatchMap *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->DispatchMap).field_0x48 = 0;
  this->_padding_ = (longlong)&___7FBackChannelDispatchMap__6B_;
  pvVar1 = *(void **)&(this->DispatchMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,TMulticastDelegate<void___cdecl(IBackChannelPacket_&),FDefaultDelegateUserPolicy>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DispatchMap);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x58);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3f50

void * __thiscall
FBackChannelOSCBundle::_scalar_deleting_destructor_(FBackChannelOSCBundle *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FBackChannelOSCBundle__6B_;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
             (this->Elements).AllocatorInstance.Data,(this->Elements).ArrayNum);
  pFVar1 = (this->Elements).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FBackChannelOSCPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f3fc0

void * __thiscall
FBackChannelOSCConnection::_scalar_deleting_destructor_
          (FBackChannelOSCConnection *this,uint param_1)

{
  ~FBackChannelOSCConnection(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f4000

void * __thiscall
FBackChannelOSCMessage::_scalar_deleting_destructor_(FBackChannelOSCMessage *this,uint param_1)

{
  ~FBackChannelOSCMessage(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x50);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f4040

void * __thiscall
FBackChannelOSCPacket::_scalar_deleting_destructor_(FBackChannelOSCPacket *this,uint param_1)

{
  *this = (FBackChannelOSCPacket)&___7FBackChannelOSCPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f4080

void * __thiscall
FBackChannelThreadedListener::_scalar_deleting_destructor_
          (FBackChannelThreadedListener *this,uint param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7FBackChannelThreadedListener__6B_;
  lpCriticalSection = &this->RunningCS;
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x1;
  UNLOCK();
  if (this->bIsRunning != (FThreadSafeBool)0x0) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  LOCK();
  this->bExitRequested = (FThreadSafeBool)0x0;
  UNLOCK();
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->Delegate);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Connection).SharedReferenceCount.ReferenceController);
  plVar3 = (longlong *)this->_padding_;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
  }
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f4150

void * __thiscall
IBackChannelConnection::_scalar_deleting_destructor_(IBackChannelConnection *this,uint param_1)

{
  *this = (IBackChannelConnection)&___7IBackChannelConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f4190

void * __thiscall
IBackChannelPacket::_scalar_deleting_destructor_(IBackChannelPacket *this,uint param_1)

{
  *this = (IBackChannelPacket)&___7IBackChannelPacket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e7f41d0

void * __thiscall
IBackChannelSocketConnection::_scalar_deleting_destructor_
          (IBackChannelSocketConnection *this,uint param_1)

{
  *this = (IBackChannelSocketConnection)&___7IBackChannelSocketConnection__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_BackChannel @ 14e7fb150

void __cdecl IMPLEMENT_MODULE_BackChannel(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'BCCVarLogErrors'' @ 15046c360

void __cdecl _dynamic_atexit_destructor_for__BCCVarLogErrors__(void)

{
  BCCVarLogErrors._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&BCCVarLogErrors);
  return;
}

// `dynamic_atexit_destructor_for_'BCCVarLogPackets'' @ 15046c380

void __cdecl _dynamic_atexit_destructor_for__BCCVarLogPackets__(void)

{
  BCCVarLogPackets._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&BCCVarLogPackets);
  return;
}

// `dynamic_atexit_destructor_for_'Dummy'' @ 15046c3a0

void __cdecl
`FBackChannelOSCBundle::GetElement'::__l2::_dynamic_atexit_destructor_for__Dummy__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = ::Dummy.AllocatorInstance.Data;
  if (::Dummy.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (::Dummy.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'FBackChannelTestOSCBundleAutomationTestInstance'' @ 15046c3c0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBackChannelTestOSCBundleAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCBundleAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBackChannelTestOSCBundleWithMessagesAutomationTestInstance'' @ 15046c3e0

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBackChannelTestOSCBundleWithMessagesAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCBundleWithMessagesAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'FBackChannelTestOSCMessageAutomationTestInstance'' @ 15046c400

void __cdecl
`anonymous_namespace'::
_dynamic_atexit_destructor_for__FBackChannelTestOSCMessageAutomationTestInstance__(void)

{
  FAutomationTestBase::~FAutomationTestBase
            ((FAutomationTestBase *)&FBackChannelTestOSCMessageAutomationTestInstance);
  return;
}

// `dynamic_atexit_destructor_for_'LogBackChannel'' @ 15046c420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogBackChannel__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogBackChannel);
  return;
}

