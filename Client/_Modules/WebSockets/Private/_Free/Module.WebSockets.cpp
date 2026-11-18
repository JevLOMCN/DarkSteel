// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 26

// `dynamic_initializer_for_'HttpVersion'' @ 1411ed120

void __cdecl HttpRequestOptions::_dynamic_initializer_for__HttpVersion__(void)

{
  ::FName::FName(&HttpVersion,"HttpVersion");
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_WebSockets'' @ 1411ed140

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_WebSockets__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_WebSockets,L"WebSockets",(FName)0x0,(FName)0x0,(FName)0x0,(FName)0x0
             ,None);
  return;
}

// `dynamic_initializer_for_'LogWebSockets'' @ 1411ed190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWebSockets__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWebSockets,L"LogWebSockets",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogWebSockets__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantWebSockets'' @ 1411ed1d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantWebSockets__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "WebSockets";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"WebSockets",10);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FWebSocketsModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'RequestMode'' @ 1411ed220

void __cdecl HttpRequestOptions::_dynamic_initializer_for__RequestMode__(void)

{
  ::FName::FName(&RequestMode,"RequestMode");
  return;
}

// `dynamic_initializer_for_'UnixSocketPath'' @ 1411ed240

void __cdecl HttpRequestOptions::_dynamic_initializer_for__UnixSocketPath__(void)

{
  ::FName::FName(&UnixSocketPath,"UnixSocketPath");
  return;
}

// `scalar_deleting_destructor' @ 14b3f7900

void * __thiscall
FWebSocketsModule::_scalar_deleting_destructor_(FWebSocketsModule *this,uint param_1)

{
  void *pvVar1;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnWebSocketCreated).field_0x8,*(int *)&(this->OnWebSocketCreated).field_0x10);
  pvVar1 = *(void **)&(this->OnWebSocketCreated).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnWebSocketCreated);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// AddLambda<`FLwsWebSocketsManager::InitWebSockets'::__l108::<lambda_1>_> @ 14b3f7970

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FLwsWebSocketsManager::InitWebSockets_::__l108::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  FLwsWebSocketsManager *pFVar6;
  ForElementType<TAlignedBytes<16,16>_> *pFVar7;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar6 = (FLwsWebSocketsManager *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar4 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLwsWebSocketsManager::InitWebSockets'::`108'::<lambda_1>_>
               ::_vftable_;
    uVar1 = *in_R8;
    puVar4[4] = 0;
    puVar4[3] = uVar1;
    puVar4[4] = in_R8[1];
    in_R8[1] = 0;
    *(undefined4 *)(puVar4 + 5) = *(undefined4 *)(in_R8 + 2);
    *(undefined4 *)((longlong)puVar4 + 0x2c) = *(undefined4 *)((longlong)in_R8 + 0x14);
    in_R8[2] = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FLwsWebSocketsManager *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar2 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar2 == '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)this,true);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              (&local_68,(FReadAccessScope *)&local_50);
    if ((local_60.DelegateSize != 0) &&
       (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      puVar4 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar6 = (FLwsWebSocketsManager *)*puVar4;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar3 = *(int *)&this->field_0x10;
    param_1->__this = pFVar6;
    if (iVar3 == *(int *)&this->field_0x14) {
      iVar3 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar3 + 1;
    pFVar7 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar3 * 0x10);
    *pFVar7 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar7 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar7 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar7);
    }
    *pFVar7 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar7 + 1) = local_60.DelegateSize;
    local_60.DelegateSize = 0;
    if (local_50.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
    }
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  if ((local_60.DelegateSize != 0) &&
     (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_60.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_60,0,0,0x10);
    local_60.DelegateSize = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  if (local_60.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_60.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_68.AccessDetector);
  return (FDelegateHandle)(ulong64)param_1;
}

// DestructItems<TSharedRef<FLwsWebSocket,1>,int> @ 14b3f7eb0

void __cdecl
DestructItems<TSharedRef<FLwsWebSocket,1>,int>(TSharedRef<FLwsWebSocket,1> *param_1,int param_2)

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

// TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLwsWebSocketsManager::InitWebSockets'::__l108::<lambda_1>_> @ 14b3f7ef0

TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_108_::<lambda_1>_>
* __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLwsWebSocketsManager::InitWebSockets'::__l108::<lambda_1>_>
::
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_FLwsWebSocketsManager::InitWebSockets_::__l108::<lambda_1>_>
          (void *this,
          TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,_public:_virtual_void___cdecl_FLwsWebSocketsManager::InitWebSockets(TArrayView<FString_const_,int>)_::_108_::<lambda_1>_>
          *param_1)

{
  ForAnyElementType *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = (ForAnyElementType *)((longlong)this + 0x20);
  *(undefined ***)this =
       &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
  *(longlong *)((longlong)this + 0x10) = param_1->_padding_;
  *(undefined ***)this =
       &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLwsWebSocketsManager::InitWebSockets'::`108'::<lambda_1>_>
        ::_vftable_;
  *(FLwsWebSocketsManager **)((longlong)this + 0x18) = (param_1->Functor).__this;
  pFVar1->Data = (FScriptContainerElement *)0x0;
  iVar2 = (param_1->Functor).ProtocolsCopy.ArrayNum;
  pFVar3 = (param_1->Functor).ProtocolsCopy.AllocatorInstance.Data;
  *(int *)((longlong)this + 0x28) = iVar2;
  if (iVar2 == 0) {
    *(int *)((longlong)this + 0x2c) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar2,0,pFVar1,iVar2,(int *)((longlong)this + 0x2c));
    ConstructItems<FString,FString,int>(pFVar1->Data,(FString *)pFVar3,iVar2);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14b3f8ed8

/* [thunk]:public: virtual void * __ptr64 __cdecl FLwsWebSocketsManager::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FLwsWebSocketsManager::_vector_deleting_destructor__adjustor_8__
          (FLwsWebSocketsManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FLwsWebSocketsManager *)&this[-1].field_0xd8,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 14b3f8ee8

/* [thunk]:public: virtual void * __ptr64 __cdecl FLwsWebSocketsManager::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FLwsWebSocketsManager::_vector_deleting_destructor__adjustor_16__
          (FLwsWebSocketsManager *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FLwsWebSocketsManager *)&this[-1].bDisableDomainAllowlist,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 14b3f8f00

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FLwsWebSocketsManager::InitWebSockets'::__l108::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  DestructItems<FString,int>(*(FString **)((longlong)this + 0x20),*(int *)((longlong)this + 0x28));
  if (*(void **)((longlong)this + 0x20) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x20));
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f8f50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FLwsWebSocketsManager,bool___cdecl(float),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FLwsWebSocketsManager,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f8f80

void * __thiscall
TBaseRawMethodDelegateInstance<0,FWebSocketsModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FWebSocketsModule,void___cdecl(FString_const_&,TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>_const_&),FDefaultTSDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f8fb0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FLwsWebSocket,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FLwsWebSocket,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x210);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f8ff0

void * __thiscall FLwsWebSocket::_scalar_deleting_destructor_(FLwsWebSocket *this,uint param_1)

{
  ~FLwsWebSocket(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f9030

void * __thiscall
FLwsWebSocketsManager::_scalar_deleting_destructor_(FLwsWebSocketsManager *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FScriptContainerElement *pFVar4;
  TNode *pTVar5;
  
  pTVar3 = (this->TickHandle).WeakReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar3->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar3->_padding_ + 8))(pTVar3,1);
    }
  }
  pFVar4 = (this->SocketsDestroyedDuringService).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pTVar5 = (this->SocketsToStop).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->SocketsToStop).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->SocketsToStop).Tail;
  }
  pTVar5 = (this->SocketsToStart).Tail;
  while (pTVar5 != (TNode *)0x0) {
    (this->SocketsToStart).Tail = pTVar5->NextNode;
    ::operator_delete(pTVar5,0x10);
    pTVar5 = (this->SocketsToStart).Tail;
  }
  pFVar4 = (this->SocketsTickingOnThread).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TSharedRef<FLwsWebSocket,1>,int>
            ((TSharedRef<FLwsWebSocket,1> *)(this->Sockets).AllocatorInstance.Data,
             (this->Sockets).ArrayNum);
  pFVar4 = (this->Sockets).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->LwsProtocols).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined ***)&this->field_0x10 = &___7FSingleThreadRunnable__6B_;
  *(undefined ***)&this->field_0x8 = &___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f9130

void * __thiscall IWebSocket::_scalar_deleting_destructor_(IWebSocket *this,uint param_1)

{
  *this = (IWebSocket)&___7IWebSocket__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14b3f9170

void * __thiscall
IWebSocketsManager::_scalar_deleting_destructor_(IWebSocketsManager *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// LwsLog @ 14b3fe860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl LwsLog(int param_1,char *param_2)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  undefined1 auStack_198 [32];
  int local_178;
  int local_170;
  FString local_168;
  FScriptContainerElement local_158 [256];
  ForAnyElementType local_58;
  FScriptContainerElement *local_50;
  int local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_198;
  if (param_1 - 1U < 2) {
    bVar4 = true;
  }
  else {
    bVar4 = false;
    if ((byte)LogWebSockets._0_1_ < 6) {
      return;
    }
  }
  local_58.Data = (FScriptContainerElement *)0x0;
  if (param_2 == (char *)0x0) {
    local_48 = 0;
    local_50 = (FScriptContainerElement *)0x0;
  }
  else {
    sVar7 = strlen(param_2);
    local_48 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_2,(int)sVar7);
    uVar1 = local_48 + 1;
    uVar9 = uVar1;
    if (uVar1 < 0x81) {
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        uVar9 = 0;
        goto LAB_14b3fe90a;
      }
    }
    else {
LAB_14b3fe90a:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,2);
    }
    local_50 = local_158;
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      local_50 = local_58.Data;
    }
    UE::Core::Private::Convert((wchar_t *)local_50,uVar1,(uchar *)param_2,(int)sVar7 + 1);
  }
  FString::FString(&local_168,(wchar_t *)local_50);
  bVar5 = FString::EndsWith(&local_168,L"\n",1,IgnoreCase);
  if (!bVar5) goto LAB_14b3fea05;
  iVar3 = local_168.Data.ArrayNum + -2;
  if (local_168.Data.ArrayNum == 0) {
    iVar3 = -1;
  }
  iVar8 = local_168.Data.ArrayNum + -1;
  if (iVar3 < 0) {
LAB_14b3fe9c3:
    if (local_168.Data.ArrayNum == 0) {
      iVar8 = 0;
    }
    local_178 = iVar3;
    local_170 = iVar8;
    bVar5 = FDebug::CheckVerifyFailedImpl2
                      ("IsValidIndex(Index)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                       ,0x107,
                       L"String index out of bounds: Index %i from a string with a length of %i");
    if (bVar5) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    iVar6 = iVar8;
    if (local_168.Data.ArrayNum == 0) {
      iVar6 = 0;
    }
    if (iVar6 <= iVar3) goto LAB_14b3fe9c3;
  }
  *(undefined2 *)(local_168.Data.AllocatorInstance.Data + (longlong)iVar3 * 2) = 0x20;
LAB_14b3fea05:
  if (bVar4) {
    if (2 < (byte)LogWebSockets._0_1_) {
      LwsLogLevelToString(param_1);
      UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogWebSockets);
    }
  }
  else if (5 < (byte)LogWebSockets._0_1_) {
    LwsLogLevelToString(param_1);
    UE::Logging::Private::BasicLog<6>(&LOG_Static,(FLogCategoryBase *)&LogWebSockets);
  }
  if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_168.Data.AllocatorInstance.Data);
  }
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return;
}

// LwsLogLevelToString @ 14b3fead0

wchar_t * __cdecl LwsLogLevelToString(int param_1)

{
  if (param_1 < 0x21) {
    if (param_1 == 0x20) {
      return L"Parser";
    }
    if (param_1 == 1) {
      return L"Error";
    }
    if (param_1 == 2) {
      return L"Warning";
    }
    if (param_1 == 4) {
      return L"Notice";
    }
    if (param_1 == 8) {
      return L"Info";
    }
    if (param_1 == 0x10) {
      return L"Debug";
    }
  }
  else {
    if (param_1 == 0x40) {
      return L"Header";
    }
    if (param_1 == 0x80) {
      return L"Ext";
    }
    if (param_1 == 0x100) {
      return L"Client";
    }
    if (param_1 == 0x200) {
      return L"Latency";
    }
  }
  return L"Invalid";
}

// IMPLEMENT_MODULE_WebSockets @ 14b400690

void __cdecl IMPLEMENT_MODULE_WebSockets(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LocalInitiatedReason'' @ 150433e10

void __cdecl
`FLwsWebSocket::LwsCallback'::__l193::_dynamic_atexit_destructor_for__LocalInitiatedReason__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = LocalInitiatedReason.Data.AllocatorInstance.Data;
  if (LocalInitiatedReason.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (LocalInitiatedReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogWebSockets'' @ 150433e30

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWebSockets__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWebSockets);
  return;
}

// `dynamic_atexit_destructor_for_'PeerInitiatedReason'' @ 150433e50

void __cdecl
`FLwsWebSocket::LwsCallback'::__l193::_dynamic_atexit_destructor_for__PeerInitiatedReason__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = PeerInitiatedReason.Data.AllocatorInstance.Data;
  if (PeerInitiatedReason.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (PeerInitiatedReason.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

