// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 101

// ModularFeatureName'' @ 140f4a110

void __cdecl `dynamic_initializer_for_'INetworkMessagingExtension::ModularFeatureName__(void)

{
  ::FName::FName(&INetworkMessagingExtension::ModularFeatureName,"NetworkMessaging");
  return;
}

// PATHNAME_All'' @ 140f4a130

void __cdecl `dynamic_initializer_for_'IMessageBus::PATHNAME_All__(void)

{
  FName FVar1;
  FNameEntryId FVar2;
  undefined4 extraout_var;
  FName *pFVar3;
  FNameEntryId local_res8;
  uint uStackX_c;
  FName local_res10 [3];
  
  FVar2 = FNameEntryId::FromValidEName((EName)&local_res8);
  local_res8.Value = *(uint *)CONCAT44(extraout_var,FVar2.Value);
  uStackX_c = 0;
  pFVar3 = ::FName::FName(local_res10,L"/Unknown");
  FVar1.Number = uStackX_c;
  FVar1.ComparisonIndex.Value = local_res8.Value;
  IMessageBus::PATHNAME_All.PackageName.ComparisonIndex.Value = 0;
  IMessageBus::PATHNAME_All.PackageName.Number = 0;
  IMessageBus::PATHNAME_All.AssetName.ComparisonIndex.Value = 0;
  IMessageBus::PATHNAME_All.AssetName.Number = 0;
  FTopLevelAssetPath::TrySetPath(&IMessageBus::PATHNAME_All,*pFVar3,FVar1);
  return;
}

// `dynamic_initializer_for_'LogMessaging'' @ 140f4a190

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogMessaging__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogMessaging,L"LogMessaging",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogMessaging__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantMessaging'' @ 140f4a1d0

void __cdecl _dynamic_initializer_for__ModuleRegistrantMessaging__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "Messaging";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"Messaging",9);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,FStaticallyLinkedModuleRegistrant<FMessagingModule>::InitializeModule);
  return;
}

// `scalar_deleting_destructor' @ 142d36e10

void * __thiscall
TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`FMessagingModule::CreateBus'::__l2::<lambda_1>_>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)((longlong)this + 0x28);
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d370e0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessagingModule,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d37110

void * __thiscall
IMessagingModule::_scalar_deleting_destructor_(IMessagingModule *this,uint param_1)

{
  *this = (IMessagingModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d37160

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageBridge,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMessageBridge,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xf0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d371b0

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageBus,1>::_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FMessageBus,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d37a00

void * __thiscall
FMessagingModule::_scalar_deleting_destructor_(FMessagingModule *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMessageBusShutdownDelegate).field_0x8,
             *(int *)&(this->OnMessageBusShutdownDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnMessageBusShutdownDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMessageBusShutdownDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->OnMessageBusStartupDelegate).field_0x8,
             *(int *)&(this->OnMessageBusStartupDelegate).field_0x10);
  pvVar1 = *(void **)&(this->OnMessageBusStartupDelegate).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMessageBusStartupDelegate);
  DestructItems<TWeakPtr<IMessageBus,1>,int>
            ((TWeakPtr<IMessageBus,1> *)(this->WeakBuses).AllocatorInstance.Data,
             (this->WeakBuses).ArrayNum);
  pFVar2 = (this->WeakBuses).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->DefaultBus).SharedReferenceCount.ReferenceController);
  this->_padding_ = (longlong)IModuleInterface::vftable;
  FSelfRegisteringExec::~FSelfRegisteringExec((FSelfRegisteringExec *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x70);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142d37abc

/* [thunk]:public: virtual void * __ptr64 __cdecl FMessagingModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMessagingModule::_vector_deleting_destructor__adjustor_8__(FMessagingModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMessagingModule *)&this[-1].OnMessageBusShutdownDelegate.field_0x18,param_1)
  ;
  return pvVar1;
}

// AddLambda<`FMessagingModule::CreateBus'::__l2::<lambda_1>_> @ 142d38200

FDelegateHandle __thiscall
TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
AddLambda<_FMessagingModule::CreateBus_::__l2::<lambda_1>_>
          (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this,
          <lambda_1> *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong64 uVar4;
  FMessagingModule *pFVar5;
  ForElementType<TAlignedBytes<16,16>_> *pFVar6;
  undefined8 *in_R8;
  undefined1 local_res10 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_68;
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDestructionSentinel local_38;
  FDelegateAllocation *local_20;
  
  pFVar5 = (FMessagingModule *)0x0;
  local_68.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_60.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_68,(FWriteAccessScope *)&local_38);
  local_20 = &local_60;
  puVar3 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar4 = FDelegateHandle::GenerateNewID();
    puVar3[2] = uVar4;
    *puVar3 = &
              ___7__TBaseFunctorDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy__V<lambda_1>__1__CreateBus_FMessagingModule__UEAA_AV__TSharedPtr_VIMessageBus___00__VFString__AEBV__TSharedPtr_VIAuthorizeMessageRecipients___00___Z___V__6B_
    ;
    puVar3[3] = *in_R8;
    puVar3[4] = in_R8[1];
    puVar3[5] = in_R8[2];
    in_R8[2] = 0;
    in_R8[1] = 0;
  }
  if (local_38.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)this,
             (FWriteAccessScope *)&local_38);
  param_1->__this = (FMessagingModule *)0x0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            (&local_68,(FReadAccessScope *)&local_50);
  if (((local_60.DelegateSize == 0) ||
      (local_60.DelegateAllocator == (ForElementType<TAlignedBytes<16,16>_>)0x0)) ||
     (cVar1 = (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x38))(), cVar1 == '\0')) {
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
      puVar3 = (undefined8 *)
               (**(code **)(*(longlong *)local_60.DelegateAllocator + 0x40))
                         (local_60.DelegateAllocator,local_res10);
      pFVar5 = (FMessagingModule *)*puVar3;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_50);
    iVar2 = *(int *)&this->field_0x10;
    param_1->__this = pFVar5;
    if (iVar2 == *(int *)&this->field_0x14) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,(ForAnyElementType *)&this->field_0x8,(int *)&this->field_0x14);
    }
    *(int *)&this->field_0x10 = iVar2 + 1;
    pFVar6 = (ForElementType<TAlignedBytes<16,16>_> *)
             (*(longlong *)&this->field_0x8 + (longlong)iVar2 * 0x10);
    *pFVar6 = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(undefined4 *)(pFVar6 + 1) = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_68,(FWriteAccessScope *)&local_50);
    if (*pFVar6 != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)*pFVar6);
    }
    *pFVar6 = local_60.DelegateAllocator;
    local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    *(int *)(pFVar6 + 1) = local_60.DelegateSize;
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

// DestructItems<FMessageRouter::FDelayedMessage,int> @ 142d39870

void __cdecl
DestructItems<FMessageRouter::FDelayedMessage,int>(FDelayedMessage *param_1,int param_2)

{
  FSharedReferencer<1> *pFVar1;
  
  if (param_2 != 0) {
    pFVar1 = &(param_1->Context).SharedReferenceCount;
    do {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pFVar1->ReferenceController);
      pFVar1 = pFVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TSharedPtr<FMessageTracerEndpointInfo,1>,int> @ 142d398b0

void __cdecl
DestructItems<TSharedPtr<FMessageTracerEndpointInfo,1>,int>
          (TSharedPtr<FMessageTracerEndpointInfo,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int> @ 142d398f0

void __cdecl
DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
          (TSharedPtr<FMessageTracerMessageInfo,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<FMessageTracerTypeInfo,1>,int> @ 142d39930

void __cdecl
DestructItems<TSharedPtr<FMessageTracerTypeInfo,1>,int>
          (TSharedPtr<FMessageTracerTypeInfo,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IMessageInterceptor,1>,int> @ 142d39970

void __cdecl
DestructItems<TSharedPtr<IMessageInterceptor,1>,int>
          (TSharedPtr<IMessageInterceptor,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IMessageReceiver,1>,int> @ 142d399b0

void __cdecl
DestructItems<TSharedPtr<IMessageReceiver,1>,int>
          (TSharedPtr<IMessageReceiver,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IMessageSubscription,1>,int> @ 142d399f0

void __cdecl
DestructItems<TSharedPtr<IMessageSubscription,1>,int>
          (TSharedPtr<IMessageSubscription,1> *param_1,int param_2)

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

// DestructItems<TSharedPtr<IMessageTracerBreakpoint,1>,int> @ 142d39a30

void __cdecl
DestructItems<TSharedPtr<IMessageTracerBreakpoint,1>,int>
          (TSharedPtr<IMessageTracerBreakpoint,1> *param_1,int param_2)

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

// DestructItems<TWeakPtr<IBusListener,1>,int> @ 142d39a70

void __cdecl
DestructItems<TWeakPtr<IBusListener,1>,int>(TWeakPtr<IBusListener,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<IMessageBus,1>,int> @ 142d39ac0

void __cdecl
DestructItems<TWeakPtr<IMessageBus,1>,int>(TWeakPtr<IMessageBus,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// DestructItems<TWeakPtr<IMessageReceiver,1>,int> @ 142d39b10

void __cdecl
DestructItems<TWeakPtr<IMessageReceiver,1>,int>(TWeakPtr<IMessageReceiver,1> *param_1,int param_2)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  FWeakReferencer<1> *pFVar4;
  
  if (param_2 != 0) {
    pFVar4 = &param_1->WeakReferenceCount;
    do {
      pTVar3 = pFVar4->ReferenceController;
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
      pFVar4 = pFVar4 + 2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// GetTypeHash<FMessageTracerEndpointInfo_const_,1> @ 142d3c940

uint __cdecl
GetTypeHash<FMessageTracerEndpointInfo_const_,1>
          (TSharedPtr<FMessageTracerEndpointInfo_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// GetTypeHash<IMessageContext_const_,1> @ 142d3c970

uint __cdecl GetTypeHash<IMessageContext_const_,1>(TSharedPtr<IMessageContext_const_,1> *param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulonglong)param_1->Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)param_1->Object >> 4)) * -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  return uVar1 >> 0x10 ^ uVar1;
}

// NewIntrusiveReferenceController<1,FMessageBridge,FMessageAddress_const_&,TSharedRef<IMessageBus,1>_const_&,TSharedRef<IMessageTransport,1>_const_&> @ 142d3cb60

TIntrusiveReferenceController<FMessageBridge,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FMessageBridge,FMessageAddress_const_&,TSharedRef<IMessageBus,1>_const_&,TSharedRef<IMessageTransport,1>_const_&>
          (FMessageAddress *param_1,TSharedRef<IMessageBus,1> *param_2,
          TSharedRef<IMessageTransport,1> *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  TIntrusiveReferenceController<FMessageBridge,1> *pTVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *this;
  LPCRITICAL_SECTION p_Var7;
  
  pTVar6 = ::operator_new(0xf0);
  if (pTVar6 == (TIntrusiveReferenceController<FMessageBridge,1> *)0x0) {
    return (TIntrusiveReferenceController<FMessageBridge,1> *)0x0;
  }
  *(undefined4 *)&pTVar6->_padding_ = 1;
  *(undefined4 *)((longlong)&pTVar6->_padding_ + 4) = 1;
  pTVar6->_padding_ =
       (longlong)
       &___7__TIntrusiveReferenceController_VFMessageBridge___00_SharedPointerInternals__6B_;
  uVar3 = *(undefined8 *)&param_1->UniqueId;
  uVar4 = *(undefined8 *)&(param_1->UniqueId).C;
  *(undefined ***)(pTVar6->ObjectStorage).Pad = &FMessageBridge::_vftable__for__IMessageBridge__;
  p_Var7 = (LPCRITICAL_SECTION)0x0;
  (pTVar6->ObjectStorage).Pad[0x20] = '\0';
  (pTVar6->ObjectStorage).Pad[0x21] = '\0';
  (pTVar6->ObjectStorage).Pad[0x22] = '\0';
  (pTVar6->ObjectStorage).Pad[0x23] = '\0';
  (pTVar6->ObjectStorage).Pad[0x24] = '\0';
  (pTVar6->ObjectStorage).Pad[0x25] = '\0';
  (pTVar6->ObjectStorage).Pad[0x26] = '\0';
  (pTVar6->ObjectStorage).Pad[0x27] = '\0';
  *(undefined ***)((pTVar6->ObjectStorage).Pad + 8) =
       &FMessageBridge::_vftable__for__IMessageReceiver__;
  *(undefined ***)((pTVar6->ObjectStorage).Pad + 0x10) =
       &FMessageBridge::_vftable__for__IMessageSender__;
  *(undefined ***)((pTVar6->ObjectStorage).Pad + 0x18) =
       &FMessageBridge::_vftable__for__IMessageTransportHandler__;
  (pTVar6->ObjectStorage).Pad[0x28] = '\0';
  (pTVar6->ObjectStorage).Pad[0x29] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2a] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2b] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2c] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2d] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2e] = '\0';
  (pTVar6->ObjectStorage).Pad[0x2f] = '\0';
  *(undefined8 *)((pTVar6->ObjectStorage).Pad + 0x30) = uVar3;
  *(undefined8 *)((pTVar6->ObjectStorage).Pad + 0x38) = uVar4;
  (pTVar6->ObjectStorage).Pad[0x48] = '\0';
  (pTVar6->ObjectStorage).Pad[0x49] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4a] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4b] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4c] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4d] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4e] = '\0';
  (pTVar6->ObjectStorage).Pad[0x4f] = '\0';
  (pTVar6->ObjectStorage).Pad[0x50] = '\0';
  (pTVar6->ObjectStorage).Pad[0x51] = '\0';
  (pTVar6->ObjectStorage).Pad[0x52] = '\0';
  (pTVar6->ObjectStorage).Pad[0x53] = '\0';
  (pTVar6->ObjectStorage).Pad[0x54] = '\0';
  (pTVar6->ObjectStorage).Pad[0x55] = '\0';
  (pTVar6->ObjectStorage).Pad[0x56] = '\0';
  (pTVar6->ObjectStorage).Pad[0x57] = '\0';
  (pTVar6->ObjectStorage).Pad[0x68] = '\0';
  (pTVar6->ObjectStorage).Pad[0x69] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6a] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6b] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6c] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6d] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6e] = '\0';
  (pTVar6->ObjectStorage).Pad[0x6f] = '\0';
  (pTVar6->ObjectStorage).Pad[0x70] = '\0';
  (pTVar6->ObjectStorage).Pad[0x71] = '\0';
  (pTVar6->ObjectStorage).Pad[0x72] = '\0';
  (pTVar6->ObjectStorage).Pad[0x73] = '\0';
  (pTVar6->ObjectStorage).Pad[0x74] = 0x80;
  (pTVar6->ObjectStorage).Pad[0x75] = '\0';
  (pTVar6->ObjectStorage).Pad[0x76] = '\0';
  (pTVar6->ObjectStorage).Pad[0x77] = '\0';
  (pTVar6->ObjectStorage).Pad[0x78] = 0xff;
  (pTVar6->ObjectStorage).Pad[0x79] = 0xff;
  (pTVar6->ObjectStorage).Pad[0x7a] = 0xff;
  (pTVar6->ObjectStorage).Pad[0x7b] = 0xff;
  (pTVar6->ObjectStorage).Pad[0x7c] = '\0';
  (pTVar6->ObjectStorage).Pad[0x7d] = '\0';
  (pTVar6->ObjectStorage).Pad[0x7e] = '\0';
  (pTVar6->ObjectStorage).Pad[0x7f] = '\0';
  (pTVar6->ObjectStorage).Pad[0x88] = '\0';
  (pTVar6->ObjectStorage).Pad[0x89] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8a] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8b] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8c] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8d] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8e] = '\0';
  (pTVar6->ObjectStorage).Pad[0x8f] = '\0';
  (pTVar6->ObjectStorage).Pad[0x90] = '\0';
  (pTVar6->ObjectStorage).Pad[0x91] = '\0';
  (pTVar6->ObjectStorage).Pad[0x92] = '\0';
  (pTVar6->ObjectStorage).Pad[0x93] = '\0';
  lpCriticalSection = ::operator_new(0x28);
  if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
    InitializeCriticalSectionAndSpinCount(lpCriticalSection,4000);
    p_Var7 = lpCriticalSection;
  }
  *(LPCRITICAL_SECTION *)((pTVar6->ObjectStorage).Pad + 0x40) = p_Var7;
  *(IMessageBus **)((pTVar6->ObjectStorage).Pad + 0x98) = param_2->Object;
  pTVar1 = (param_2->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((pTVar6->ObjectStorage).Pad + 0xa0) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  (pTVar6->ObjectStorage).Pad[0xa8] = '\0';
  FGuid::NewGuid((FGuid *)((pTVar6->ObjectStorage).Pad + 0xac));
  (pTVar6->ObjectStorage).Pad[0xc0] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc1] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc2] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc3] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc4] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc5] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc6] = '\0';
  (pTVar6->ObjectStorage).Pad[199] = '\0';
  (pTVar6->ObjectStorage).Pad[200] = '\0';
  (pTVar6->ObjectStorage).Pad[0xc9] = '\0';
  (pTVar6->ObjectStorage).Pad[0xca] = '\0';
  (pTVar6->ObjectStorage).Pad[0xcb] = '\0';
  (pTVar6->ObjectStorage).Pad[0xcc] = '\0';
  (pTVar6->ObjectStorage).Pad[0xcd] = '\0';
  (pTVar6->ObjectStorage).Pad[0xce] = '\0';
  (pTVar6->ObjectStorage).Pad[0xcf] = '\0';
  *(IMessageTransport **)((pTVar6->ObjectStorage).Pad + 0xd0) = param_3->Object;
  pTVar1 = (param_3->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)((pTVar6->ObjectStorage).Pad + 0xd8) = pTVar1;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((*(longlong *)((pTVar6->ObjectStorage).Pad + 0x98) == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    pTVar6 = (TIntrusiveReferenceController<FMessageBridge,1> *)(*pcVar2)();
    return pTVar6;
  }
  this = (TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
         (**(code **)(**(longlong **)((pTVar6->ObjectStorage).Pad + 0x98) + 0x90))();
  TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::
  AddRaw<FMessageBridge>
            (this,(FMessageBridge *)&stack0x00000020,(pmf_cf478952 *)&pTVar6->ObjectStorage);
  return pTVar6;
}

// NewIntrusiveReferenceController<1,FMessageBus,FString,TSharedPtr<IAuthorizeMessageRecipients,1>_const_&> @ 142d3cd60

TIntrusiveReferenceController<FMessageBus,1> * __cdecl
SharedPointerInternals::
NewIntrusiveReferenceController<1,FMessageBus,FString,TSharedPtr<IAuthorizeMessageRecipients,1>_const_&>
          (FString *param_1,TSharedPtr<IAuthorizeMessageRecipients,1> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  FMessageRouter *pFVar7;
  FMessageRouter *this;
  FMessageRouter *pFVar8;
  FRunnableThread *pFVar9;
  TIntrusiveReferenceController<FMessageBus,1> *pTVar10;
  ForAnyElementType FVar11;
  FString local_18;
  
  pFVar7 = ::operator_new(0x78);
  pFVar8 = (FMessageRouter *)0x0;
  if (pFVar7 != (FMessageRouter *)0x0) {
    *(undefined4 *)&pFVar7->_padding_ = 1;
    *(undefined4 *)((longlong)&pFVar7->_padding_ + 4) = 1;
    pFVar7->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFMessageBus___00_SharedPointerInternals__6B_;
    pFVar3 = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar1 = (param_1->Data).ArrayMax;
    iVar2 = (param_1->Data).ArrayNum;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    *(undefined8 *)&(pFVar7->ActiveInterceptors).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->ActiveInterceptors).field_0x10 = 0;
    *(undefined ***)&pFVar7->ActiveInterceptors = &___7FMessageBus__6B_;
    *(FScriptContainerElement **)&(pFVar7->ActiveInterceptors).field_0x18 = pFVar3;
    *(int *)&(pFVar7->ActiveInterceptors).field_0x20 = iVar2;
    *(int *)&(pFVar7->ActiveInterceptors).field_0x24 = iVar1;
    *(IAuthorizeMessageRecipients **)&(pFVar7->ActiveInterceptors).field_0x38 = param_2->Object;
    pTVar4 = (param_2->SharedReferenceCount).ReferenceController;
    *(TReferenceControllerBase<1> **)&(pFVar7->ActiveInterceptors).field_0x40 = pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    *(undefined8 *)&(pFVar7->ActiveInterceptors).field_0x48 = 0;
    *(undefined8 *)&pFVar7->ActiveRecipients = 0;
    *(undefined8 *)&(pFVar7->ActiveRecipients).field_0x8 = 0;
    *(undefined8 *)&(pFVar7->ActiveRecipients).field_0x10 = 2;
    this = ::operator_new(0x168);
    if (this != (FMessageRouter *)0x0) {
      pFVar8 = FMessageRouter::FMessageRouter(this);
    }
    *(FMessageRouter **)&(pFVar7->ActiveInterceptors).field_0x28 = pFVar8;
    ::FString::PrintfImpl(&local_18,L"FMessageBus.%s.Router");
    FVar11.Data = (FScriptContainerElement *)L"";
    if (local_18.Data.ArrayNum != 0) {
      FVar11.Data = local_18.Data.AllocatorInstance.Data;
    }
    pFVar9 = FRunnableThread::Create
                       (*(FRunnable **)&(pFVar7->ActiveInterceptors).field_0x28,
                        (wchar_t *)FVar11.Data,0x20000,TPri_Normal,0xffffffffffffffff,None);
    *(FRunnableThread **)&(pFVar7->ActiveInterceptors).field_0x30 = pFVar9;
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar7;
    if ((*(longlong *)&(pFVar7->ActiveInterceptors).field_0x28 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Router != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\Bus\\MessageBus.cpp"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar10 = (TIntrusiveReferenceController<FMessageBus,1> *)(*pcVar5)();
      return pTVar10;
    }
  }
  return (TIntrusiveReferenceController<FMessageBus,1> *)pFVar8;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>_> @ 142d3d420

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>_> @ 142d3d430

long64 * __cdecl
std::
_Atomic_address_as<__int64,std::_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>_>
          (_Atomic_padded<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
           *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*> @ 142d3d440

long64 __cdecl
std::
_Atomic_reinterpret_as<__int64,TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
          (FNode **param_1)

{
  return (long64)*param_1;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1> @ 142d3e050

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceAddedInterceptor_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1> @ 142d3e070

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceAddedRecipient_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0> @ 142d3e090

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0>::
~TFunction_OwnedObject<_FMessageTracer::TraceAddedSubscription_::__l2::<lambda_1>,0,0>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::`2'::<lambda_1>,0,0>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1> @ 142d3e0b0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceDispatchedMessage_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1> @ 142d3e0e0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceHandledMessage_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1> @ 142d3e110

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceInterceptedMessage_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1> @ 142d3e140

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceRemovedInterceptor_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1> @ 142d3e160

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceRemovedRecipient_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::`2'::<lambda_1>,0,1>::
        _vftable_;
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1> @ 142d3e180

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceRemovedSubscription_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1> @ 142d3e1a0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceRoutedMessage_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// ~TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1> @ 142d3e1c0

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1>::
~TFunction_OwnedObject<_FMessageTracer::TraceSentMessage_::__l2::<lambda_1>,0,1>(void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  return;
}

// `vcall'{56,{flat}}'_}' @ 142d40c1c

/* [thunk]: __cdecl FMessageTracer::`vcall'{56,{flat}}' }' */

void __thiscall FMessageTracer::_vcall__56__flat______(FMessageTracer *this)

{
                    /* WARNING: Could not recover jumptable at 0x000142d40c1f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x38))();
  return;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142d40c28

/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageBridge::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMessageBridge::_vector_deleting_destructor__adjustor_8__(FMessageBridge *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMessageBridge *)&this[-1].Transport.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{16}' @ 142d40c38

/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageBridge::`vector deleting
   destructor'`adjustor{16}' (unsigned int) __ptr64 */

void * __thiscall
FMessageBridge::_vector_deleting_destructor__adjustor_16__(FMessageBridge *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMessageBridge *)&this[-1].Transport,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{24}' @ 142d40c48

/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageBridge::`vector deleting
   destructor'`adjustor{24}' (unsigned int) __ptr64 */

void * __thiscall
FMessageBridge::_vector_deleting_destructor__adjustor_24__(FMessageBridge *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_
                     ((FMessageBridge *)&this[-1].MessageSubscription.SharedReferenceCount,param_1);
  return pvVar1;
}

// `vector_deleting_destructor'`adjustor{8}' @ 142d40c58

/* [thunk]:public: virtual void * __ptr64 __cdecl FMessageRouter::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FMessageRouter::_vector_deleting_destructor__adjustor_8__(FMessageRouter *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FMessageRouter *)&this[-1].bAllowDelayedMessaging,param_1);
  return pvVar1;
}

// `scalar_deleting_destructor' @ 142d40c70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageBridge,void___cdecl(void),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40ca0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40cd0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40d30

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40d70

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40db0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40df0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40e50

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageRouter,void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x48);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40eb0

void * __thiscall
TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>::
_scalar_deleting_destructor_
          (TBaseRawMethodDelegateInstance<0,FMessageTracer,bool___cdecl(float),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40ee0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>::
_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40f10

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,FMessageAddress,TWeakPtr<IMessageReceiver,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x18;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40f70

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageContext,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40fb0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageInterceptor,1>,FTopLevelAssetPath>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d40ff0

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TSharedRef<IMessageSubscription,1>_>
           *this,uint param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Payload).field_0x8);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41030

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IBusListener,1>_>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41090

void * __thiscall
TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
::_scalar_deleting_destructor_
          (TCommonDelegateInstanceState<void___cdecl(void),FDefaultDelegateUserPolicy,TWeakPtr<IMessageReceiver,1>,FTopLevelAssetPath>
           *this,uint param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  plVar3 = *(longlong **)&(this->Payload).field_0x8;
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
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d410f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41140

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,0,0>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::`2'::<lambda_1>,0,0>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d411d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41230

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::`2'::<lambda_1>,0,1>::_vftable_
  ;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41290

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x28));
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d412f0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41340

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::`2'::<lambda_1>,0,1>::
        _vftable_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41380

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::`2'::<lambda_1>,0,1>::
        _vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d413d0

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41420

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,0,1>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::`2'::<lambda_1>,0,1>::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x18));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x28);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41470

void * __thiscall
TGraphTask<FBusNotificationDispatchTask>::_scalar_deleting_destructor_
          (TGraphTask<FBusNotificationDispatchTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x108);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d414d0

void * __thiscall
TGraphTask<FMessageDispatchTask>::_scalar_deleting_destructor_
          (TGraphTask<FMessageDispatchTask> *this,uint param_1)

{
  UE::Tasks::Private::FTaskBase::~FTaskBase((FTaskBase *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Free(this);
      return this;
    }
    __empty_global_delete(this,0x110);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41530

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageContext,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMessageContext,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xd8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41570

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FMessageTracer,1>::
_scalar_deleting_destructor_(TIntrusiveReferenceController<FMessageTracer,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x250);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d415b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerAddressInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerAddressInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerAddressInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerAddressInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d415f0

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerDispatchState,SharedPointerInternals::DefaultDeleter<FMessageTracerDispatchState>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerDispatchState,SharedPointerInternals::DefaultDeleter<FMessageTracerDispatchState>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41630

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerEndpointInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerEndpointInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerEndpointInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerEndpointInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41670

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerInterceptorInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerInterceptorInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerInterceptorInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerInterceptorInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d416b0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerMessageInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerMessageInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerMessageInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerMessageInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d416f0

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41730

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageContext,SharedPointerInternals::DefaultDeleter<FMessageContext>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageContext,SharedPointerInternals::DefaultDeleter<FMessageContext>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41770

void * __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageSubscription,SharedPointerInternals::DefaultDeleter<FMessageSubscription>,1>
::_scalar_deleting_destructor_
          (TReferenceControllerWithDeleter<FMessageSubscription,SharedPointerInternals::DefaultDeleter<FMessageSubscription>,1>
           *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d417b0

void * __thiscall FMessageBridge::_scalar_deleting_destructor_(FMessageBridge *this,uint param_1)

{
  ~FMessageBridge(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d417f0

void * __thiscall FMessageBus::_scalar_deleting_destructor_(FMessageBus *this,uint param_1)

{
  ~FMessageBus(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41830

/* WARNING: Enum "Type": Some values do not have unique names */

void * __thiscall FMessageContext::_scalar_deleting_destructor_(FMessageContext *this,uint param_1)

{
  ~FMessageContext(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,200);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41870

void * __thiscall FMessageRouter::_scalar_deleting_destructor_(FMessageRouter *this,uint param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  FScriptContainerElement *pFVar2;
  atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
  aVar3;
  void *pvVar4;
  
  this->_padding_ = (longlong)&_vftable__for__FRunnable__;
  this->_padding_ = (longlong)&_vftable__for__FSingleThreadRunnable__;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->WorkEvent);
  pTVar1 = (this->Tracer).SharedReferenceCount.ReferenceController;
  this->WorkEvent = (FEvent *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  DestructItems<FMessageRouter::FDelayedMessage,int>
            ((FDelayedMessage *)(this->DelayedMessages).AllocatorInstance.Data,
             (this->DelayedMessages).ArrayNum);
  pFVar2 = (this->DelayedMessages).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  aVar3 = ((this->Commands).Tail)->Next;
  FMemory::Free((this->Commands).Tail);
  while (aVar3 != (atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
                   )0x0) {
    (this->Commands).Tail = (FNode *)aVar3;
    aVar3 = *(atomic<TMpscQueue<TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,FMemory>::FNode_*>
              *)aVar3;
    TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&((this->Commands).Tail)->Value);
    FMemory::Free((this->Commands).Tail);
  }
  DestructItems<TWeakPtr<IBusListener,1>,int>
            ((TWeakPtr<IBusListener,1> *)(this->ActiveRegistrationListeners).AllocatorInstance.Data,
             (this->ActiveRegistrationListeners).ArrayNum);
  pFVar2 = (this->ActiveRegistrationListeners).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ActiveSubscriptions).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveSubscriptions).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageSubscription,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveSubscriptions);
  *(undefined4 *)&(this->ActiveRecipients).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveRecipients).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TWeakPtr<IMessageReceiver,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveRecipients);
  *(undefined4 *)&(this->ActiveInterceptors).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ActiveInterceptors).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TArray<TSharedPtr<IMessageInterceptor,1>,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ActiveInterceptors);
  this->_padding_ = (longlong)&___7FSingleThreadRunnable__6B_;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x168);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41a00

void * __thiscall
FMessageSubscription::_scalar_deleting_destructor_(FMessageSubscription *this,uint param_1)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  pTVar3 = (this->Subscriber).WeakReferenceCount.ReferenceController;
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
  this->_padding_ = (longlong)&___7IMessageSubscription__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41a70

void * __thiscall FMessageTracer::_scalar_deleting_destructor_(FMessageTracer *this,uint param_1)

{
  ~FMessageTracer(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x240);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41ab0

void * __thiscall IMessageBridge::_scalar_deleting_destructor_(IMessageBridge *this,uint param_1)

{
  *this = (IMessageBridge)&___7IMessageBridge__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41af0

void * __thiscall IMessageBus::_scalar_deleting_destructor_(IMessageBus *this,uint param_1)

{
  *this = (IMessageBus)&___7IMessageBus__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41b30

void * __thiscall IMessageContext::_scalar_deleting_destructor_(IMessageContext *this,uint param_1)

{
  *this = (IMessageContext)&___7IMessageContext__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41b70

void * __thiscall
IMessageReceiver::_scalar_deleting_destructor_(IMessageReceiver *this,uint param_1)

{
  *this = (IMessageReceiver)&___7IMessageReceiver__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41bb0

void * __thiscall IMessageSender::_scalar_deleting_destructor_(IMessageSender *this,uint param_1)

{
  *this = (IMessageSender)&___7IMessageSender__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41bf0

void * __thiscall
IMessageSubscription::_scalar_deleting_destructor_(IMessageSubscription *this,uint param_1)

{
  *this = (IMessageSubscription)&___7IMessageSubscription__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41c30

void * __thiscall IMessageTracer::_scalar_deleting_destructor_(IMessageTracer *this,uint param_1)

{
  *this = (IMessageTracer)&___7IMessageTracer__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142d41c70

void * __thiscall
IMessageTransportHandler::_scalar_deleting_destructor_(IMessageTransportHandler *this,uint param_1)

{
  *this = (IMessageTransportHandler)&___7IMessageTransportHandler__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// IMPLEMENT_MODULE_Messaging @ 142d51550

void __cdecl IMPLEMENT_MODULE_Messaging(void)

{
  return;
}

// `dynamic_atexit_destructor_for_'LogMessaging'' @ 15035f500

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogMessaging__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogMessaging);
  return;
}

