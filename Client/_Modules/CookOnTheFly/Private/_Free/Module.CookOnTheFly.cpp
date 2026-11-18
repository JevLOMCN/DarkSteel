// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CookOnTheFly
// Functions: 30

// `dynamic_initializer_for_'LogCookOnTheFly'' @ 140f4bb70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCookOnTheFly__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCookOnTheFly,L"LogCookOnTheFly",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCookOnTheFly__);
  return;
}

// `dynamic_initializer_for_'LogCotfServerConnection'' @ 140f4bbb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogCotfServerConnection__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogCotfServerConnection,L"LogCotfServerConnection",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogCotfServerConnection__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantCookOnTheFly'' @ 140f4bbf0

void __cdecl _dynamic_initializer_for__ModuleRegistrantCookOnTheFly__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "CookOnTheFly";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"CookOnTheFly",0xc);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FCookOnTheFlyModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 14311a4a0

void * __thiscall
FCookOnTheFlyModule::_scalar_deleting_destructor_(FCookOnTheFlyModule *this,uint param_1)

{
  *this = (FCookOnTheFlyModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311a4e0

void * __thiscall
UE::Cook::ICookOnTheFlyModule::_scalar_deleting_destructor_(ICookOnTheFlyModule *this,uint param_1)

{
  *this = (ICookOnTheFlyModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311a540

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<UE::Cook::ICookOnTheFlyServerConnection,SharedPointerInternals::DefaultDeleter<UE::Cook::ICookOnTheFlyServerConnection>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<UE::Cook::ICookOnTheFlyServerConnection,SharedPointerInternals::DefaultDeleter<UE::Cook::ICookOnTheFlyServerConnection>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// operator<<<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> @ 14311a580

FArchive * __cdecl
operator<<<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_> *param_2
          )

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  uint uVar8;
  uint uVar9;
  FPackageStoreEntryResource *pFVar10;
  int iVar11;
  uint auStackX_8 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum * 0x58);
  iVar11 = 0;
  auStackX_8[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_8[0] = param_2->ArrayNum;
  }
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar2[1] < (uint *)*plVar2 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_8);
    }
  }
  else {
    auStackX_8[0] = *(uint *)*plVar2;
    *plVar2 = *plVar2 + 4;
  }
  if (auStackX_8[0] == 0) {
    if ((param_1->field_0x28 & 1) != 0) {
      DestructItems<FPackageStoreEntryResource,int>
                ((FPackageStoreEntryResource *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
      param_2->ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x58,8,0,&param_2->AllocatorInstance,0,piVar1);
        return param_1;
      }
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_8[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_8[0] < 0x2e8bb)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_8[0];
          uVar9 = 0;
          uVar8 = auStackX_8[0];
          if (0 < (int)auStackX_8[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar9 < (int)uVar8) {
                uVar6 = ~uVar9 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar4 = FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar4)) {
                pcVar3 = (code *)swi(3);
                pFVar7 = (FArchive *)(*pcVar3)();
                return pFVar7;
              }
              operator<<(param_1,(FPackageStoreEntryResource *)
                                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar9 * 0x58));
              uVar9 = uVar9 + 1;
              uVar8 = param_2->ArrayNum;
            } while ((int)uVar9 < param_2->ArrayNum);
          }
        }
        else {
          TArray<FPackageStoreEntryResource,TSizedDefaultAllocator<32>_>::Empty
                    (param_2,auStackX_8[0]);
          if (0 < (int)auStackX_8[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x858,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar10 = (FPackageStoreEntryResource *)
                        ((param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x58);
              DefaultConstructItems<FPackageStoreEntryResource,int>(pFVar10,1);
              operator<<(param_1,pFVar10);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_8[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// DefaultConstructItems<FPackageStoreEntryResource,int> @ 14311a810

void __cdecl DefaultConstructItems<FPackageStoreEntryResource,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 2) = 0;
      *(undefined8 *)(puVar1 + 4) = 0;
      *(undefined8 *)(puVar1 + 6) = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      *(undefined8 *)(puVar1 + 10) = 0;
      *(undefined8 *)(puVar1 + 0xc) = 0;
      *(undefined8 *)(puVar1 + 0xe) = 0;
      *(undefined8 *)(puVar1 + 0x10) = 0;
      *(undefined8 *)(puVar1 + 0x12) = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<FPackageStoreEntryResource,int> @ 14311a880

void __cdecl
DestructItems<FPackageStoreEntryResource,int>(FPackageStoreEntryResource *param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<FPackageId,TSizedDefaultAllocator<32>_> *pTVar2;
  
  if (param_2 != 0) {
    pTVar2 = &param_1->OptionalSegmentImportedPackageIds;
    do {
      pFVar1 = pTVar2[1].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (pTVar2->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = (((TArray<FSHAHash,TSizedDefaultAllocator<32>_> *)(pTVar2 + -1))->AllocatorInstance).
               Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pFVar1 = pTVar2[-2].AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      pTVar2 = (TArray<FPackageId,TSizedDefaultAllocator<32>_> *)((longlong)(pTVar2 + 5) + 8);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// ~TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0> @ 14311bc40

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0>
::
~TFunction_OwnedObject<_FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection_::__l2::<lambda_1>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// ~TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0> @ 14311bc60

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0>
::
~TFunction_OwnedObject<_FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection_::__l2::<lambda_2>,1,0>
          (void *this)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  return;
}

// `scalar_deleting_destructor' @ 14311c5c0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FCookOnTheFlyServerConnection,void___cdecl(void),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FCookOnTheFlyServerConnection,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c5f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_1>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_1>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c630

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection'::__l2::<lambda_2>,1,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &
       ___7__TFunction_OwnedObject_V<lambda_2>__1___0FCookOnTheFlyServerConnection__QEAA_V__TUniquePtr_VICookOnTheFlyServerTransport__U__TDefaultDelete_VICookOnTheFlyServerTransport______AEBVFString___Z__00_0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c670

void * __thiscall
SharedPointerInternals::
TIntrusiveReferenceController<TFutureState<UE::Cook::FCookOnTheFlyResponse>,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<TFutureState<UE::Cook::FCookOnTheFlyResponse>,1> *this,
          uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c6b0

void * __thiscall
FCookOnTheFlyServerConnection::_scalar_deleting_destructor_
          (FCookOnTheFlyServerConnection *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  FThread *this_00;
  ICookOnTheFlyServerTransport *pIVar3;
  
  this->_padding_ = (longlong)&___7FCookOnTheFlyServerConnection__6B_;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&FCoreDelegates::OnEnginePreExit,
             this);
  Disconnect(this);
  *(undefined4 *)&(this->PendingRequests).field_0x48 = 0;
  pvVar1 = *(void **)&(this->PendingRequests).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TUniquePtr<FCookOnTheFlyServerConnection::FPendingRequest,TDefaultDelete<FCookOnTheFlyServerConnection::FPendingRequest>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingRequests);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->RequestsCriticalSection);
  DestructItems<FString,int>
            ((FString *)(this->ZenHostNames).AllocatorInstance.Data,(this->ZenHostNames).ArrayNum);
  pFVar2 = (this->ZenHostNames).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ZenProjectName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->PlatformName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  this_00 = (this->Thread).Ptr;
  if (this_00 != (FThread *)0x0) {
    ::FThread::~FThread(this_00);
    ::operator_delete(this_00,0x10);
  }
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MessageEvent).field_0x8,*(int *)&(this->MessageEvent).field_0x10);
  pvVar1 = *(void **)&(this->MessageEvent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessageEvent);
  pFVar2 = (this->Host).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pIVar3 = (this->Transport).Ptr;
  if (pIVar3 != (ICookOnTheFlyServerTransport *)0x0) {
    (**(code **)*pIVar3)(pIVar3,1);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->TransportCritical);
  this->_padding_ = (longlong)&___7ICookOnTheFlyServerConnection_Cook_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x130);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c800

void * __thiscall
FMultichannelTcpReceiver::_scalar_deleting_destructor_(FMultichannelTcpReceiver *this,uint param_1)

{
  FRunnableThread *pFVar1;
  undefined4 in_register_00000014;
  
  this->_padding_ = (longlong)&___7FMultichannelTcpReceiver__6B_;
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x18))
              (pFVar1,CONCAT71((int7)(CONCAT44(in_register_00000014,param_1) >> 8),1));
    pFVar1 = this->Thread;
    if (pFVar1 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    }
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->ReceiveDelegate);
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c880

void * __thiscall
FMultichannelTcpSender::_scalar_deleting_destructor_(FMultichannelTcpSender *this,uint param_1)

{
  ~FMultichannelTcpSender(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c8c0

void * __thiscall
FPlatformTransport::_scalar_deleting_destructor_(FPlatformTransport *this,uint param_1)

{
  TSharedPtr<IPlatformHostSocket,1> *pTVar1;
  code *pcVar2;
  FScriptContainerElement *pFVar3;
  char cVar4;
  IPlatformHostCommunication *pIVar5;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  IPlatformHostSocket *local_18;
  TReferenceControllerBase<1> *local_10;
  
  pTVar1 = &this->HostSocket;
  this->_padding_ = (longlong)&___7FPlatformTransport__6B_;
  if ((this->HostSocket).Object != (IPlatformHostSocket *)0x0) {
    pIVar5 = FGenericPlatformMisc::GetPlatformHostCommunication();
    cVar4 = (**(code **)((longlong)*pIVar5 + 0x10))(pIVar5);
    if (cVar4 != '\0') {
      local_10 = (this->HostSocket).SharedReferenceCount.ReferenceController;
      pcVar2 = *(code **)((longlong)*pIVar5 + 0x20);
      local_18 = pTVar1->Object;
      if (local_10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_10->SharedReferenceCount = (atomic<int>)((int)local_10->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar2)(pIVar5,&local_18);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar1 != (TSharedPtr<IPlatformHostSocket,1> *)&local_28) {
        pTVar1->Object = (IPlatformHostSocket *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->HostSocket).SharedReferenceCount,&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostSocket).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->ProtocolName).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7ICookOnTheFlyServerTransport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311c9d0

void * __thiscall
FSimpleAbstractSocket::_scalar_deleting_destructor_(FSimpleAbstractSocket *this,uint param_1)

{
  *this = (FSimpleAbstractSocket)&___7FSimpleAbstractSocket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311ca10

void * __thiscall
FSimpleAbstractSocket_FSocket::_scalar_deleting_destructor_
          (FSimpleAbstractSocket_FSocket *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FSimpleAbstractSocket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311ca50

void * __thiscall
_anon_3CB2A585::FSimpleAbstractSocket_PlatformProtocol::_scalar_deleting_destructor_
          (FSimpleAbstractSocket_PlatformProtocol *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->HostSocket).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)&___7FSimpleAbstractSocket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311caa0

void * __thiscall FTCPTransport::_scalar_deleting_destructor_(FTCPTransport *this,uint param_1)

{
  FMultichannelTcpSocket *pFVar1;
  FRunnableThread *pFVar2;
  void *pvVar3;
  FScriptContainerElement *pFVar4;
  ISocketSubsystem *pIVar5;
  FName local_res8;
  
  pFVar1 = this->MCSocket;
  this->_padding_ = (longlong)&___7FTCPTransport__6B_;
  if (pFVar1 != (FMultichannelTcpSocket *)0x0) {
    FMultichannelTcpSender::~FMultichannelTcpSender(&pFVar1->Sender);
    pFVar2 = (pFVar1->Receiver).Thread;
    (pFVar1->Receiver)._padding_ = (longlong)&___7FMultichannelTcpReceiver__6B_;
    if (pFVar2 != (FRunnableThread *)0x0) {
      (**(code **)(pFVar2->_padding_ + 0x18))(pFVar2,1);
      pFVar2 = (pFVar1->Receiver).Thread;
      if (pFVar2 != (FRunnableThread *)0x0) {
        (**(code **)(pFVar2->_padding_ + 0x30))(pFVar2,1);
      }
    }
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar1->Receiver).ReceiveDelegate);
    (pFVar1->Receiver)._padding_ = (longlong)&___7FRunnable__6B_;
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar1->ReceiveBuffersCriticalSection);
    *(undefined4 *)&(pFVar1->ReceiveBuffers).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar1->ReceiveBuffers).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FMultichannelTcpSocket::FReceiveBuffer_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->ReceiveBuffers);
    ::operator_delete(pFVar1,0x180);
  }
  this->MCSocket = (FMultichannelTcpSocket *)0x0;
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  pIVar5 = ISocketSubsystem::Get(&local_res8);
  (**(code **)(pIVar5->_padding_ + 0x38))(pIVar5,this->FileSocket);
  this->FileSocket = (FSocket *)0x0;
  pFVar4 = (this->HostName).Data.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  this->_padding_ = (longlong)&___7ICookOnTheFlyServerTransport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311cbe0

void * __thiscall
UE::Cook::ICookOnTheFlyServerConnection::_scalar_deleting_destructor_
          (ICookOnTheFlyServerConnection *this,uint param_1)

{
  *this = (ICookOnTheFlyServerConnection)&___7ICookOnTheFlyServerConnection_Cook_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14311cc20

void * __thiscall
ICookOnTheFlyServerTransport::_scalar_deleting_destructor_
          (ICookOnTheFlyServerTransport *this,uint param_1)

{
  *this = (ICookOnTheFlyServerTransport)&___7ICookOnTheFlyServerTransport__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// MakeCookOnTheFlyServerConnection @ 14311e5f0

ICookOnTheFlyServerConnection * __cdecl
MakeCookOnTheFlyServerConnection
          (TUniquePtr<ICookOnTheFlyServerTransport,TDefaultDelete<ICookOnTheFlyServerTransport>_>
           param_1,FString *param_2)

{
  ICookOnTheFlyServerTransport IVar1;
  FCookOnTheFlyServerConnection *this;
  FCookOnTheFlyServerConnection *pFVar2;
  ICookOnTheFlyServerTransport local_res8;
  
  this = operator_new(0x130);
  pFVar2 = (FCookOnTheFlyServerConnection *)0x0;
  if (this != (FCookOnTheFlyServerConnection *)0x0) {
    local_res8 = *param_1.Ptr;
    *param_1.Ptr = (ICookOnTheFlyServerTransport)0x0;
    pFVar2 = FCookOnTheFlyServerConnection::FCookOnTheFlyServerConnection(this,&local_res8,param_2);
  }
  IVar1 = *param_1.Ptr;
  if (IVar1 != (ICookOnTheFlyServerTransport)0x0) {
    (*(code *)**(undefined8 **)IVar1)(IVar1,1);
  }
  return (ICookOnTheFlyServerConnection *)pFVar2;
}

// IMPLEMENT_MODULE_CookOnTheFly @ 1431206f0

void __cdecl IMPLEMENT_MODULE_CookOnTheFly(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'DefaultServerConnection'' @ 1503601e0

void __cdecl
`FCookOnTheFlyModule::GetDefaultServerConnection'::__l2::
_dynamic_atexit_destructor_for__DefaultServerConnection__(void)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(DAT_1550640b8)
  ;
  return;
}

// `dynamic_atexit_destructor_for_'LogCookOnTheFly'' @ 150360200

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCookOnTheFly__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCookOnTheFly);
  return;
}

// `dynamic_atexit_destructor_for_'LogCotfServerConnection'' @ 150360220

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogCotfServerConnection__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogCotfServerConnection);
  return;
}

