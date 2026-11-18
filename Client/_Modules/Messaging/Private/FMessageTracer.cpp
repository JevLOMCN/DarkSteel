// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 39

// FMessageTracer @ 142d3dca0

FMessageTracer * __thiscall FMessageTracer::FMessageTracer(FMessageTracer *this)

{
  atomic<int> *paVar1;
  TWeakPtr<FTSTicker::FElement,1> *pTVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  TNode *pTVar5;
  TNode *pTVar6;
  FEvent *pFVar7;
  FTSTicker *this_00;
  undefined8 *puVar8;
  ulong64 uVar9;
  TWeakPtr<FTSTicker::FElement,1> *pTVar10;
  TWeakPtr<FTSTicker::FElement,1> local_68;
  undefined1 local_58 [8];
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  pTVar6 = (TNode *)0x0;
  pTVar2 = &this->TickDelegateHandle;
  *(undefined8 *)&this->AddressesToEndpointInfos = 0;
  *(undefined8 *)&(this->AddressesToEndpointInfos).field_0x8 = 0;
  *(undefined8 *)&(this->AddressesToEndpointInfos).field_0x20 = 0;
  this->_padding_ = (longlong)&___7FMessageTracer__6B_;
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x28 = 0;
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x34 = 0;
  *(undefined8 *)&(this->AddressesToEndpointInfos).field_0x40 = 0;
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x48 = 0;
  (this->Breakpoints).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Breakpoints).ArrayNum = 0;
  (this->Breakpoints).ArrayMax = 0;
  *(undefined8 *)&this->Interceptors = 0;
  *(undefined8 *)&(this->Interceptors).field_0x8 = 0;
  *(undefined8 *)&(this->Interceptors).field_0x20 = 0;
  this->Breaking = false;
  *(undefined4 *)&(this->Interceptors).field_0x28 = 0;
  *(undefined4 *)&(this->Interceptors).field_0x2c = 0x80;
  *(undefined4 *)&(this->Interceptors).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Interceptors).field_0x34 = 0;
  *(undefined8 *)&(this->Interceptors).field_0x40 = 0;
  *(undefined4 *)&(this->Interceptors).field_0x48 = 0;
  *(undefined8 *)&this->RecipientsToEndpointInfos = 0;
  *(undefined8 *)&(this->RecipientsToEndpointInfos).field_0x8 = 0;
  *(undefined8 *)&(this->RecipientsToEndpointInfos).field_0x20 = 0;
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x28 = 0;
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x34 = 0;
  *(undefined8 *)&(this->RecipientsToEndpointInfos).field_0x40 = 0;
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x48 = 0;
  *(undefined8 *)&this->MessageInfos = 0;
  *(undefined8 *)&(this->MessageInfos).field_0x8 = 0;
  *(undefined8 *)&(this->MessageInfos).field_0x20 = 0;
  *(undefined4 *)&(this->MessageInfos).field_0x28 = 0;
  *(undefined4 *)&(this->MessageInfos).field_0x2c = 0x80;
  *(undefined4 *)&(this->MessageInfos).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MessageInfos).field_0x34 = 0;
  *(undefined8 *)&(this->MessageInfos).field_0x40 = 0;
  *(undefined4 *)&(this->MessageInfos).field_0x48 = 0;
  *(undefined8 *)&this->MessageTypes = 0;
  *(undefined8 *)&(this->MessageTypes).field_0x8 = 0;
  *(undefined8 *)&(this->MessageTypes).field_0x20 = 0;
  *(undefined4 *)&(this->MessageTypes).field_0x28 = 0;
  *(undefined4 *)&(this->MessageTypes).field_0x2c = 0x80;
  *(undefined4 *)&(this->MessageTypes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MessageTypes).field_0x34 = 0;
  *(undefined8 *)&(this->MessageTypes).field_0x40 = 0;
  *(undefined4 *)&(this->MessageTypes).field_0x48 = 0;
  this->ResetPending = false;
  this->Running = false;
  pTVar2->Object = (FElement *)0x0;
  (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  pTVar5 = ::operator_new(0x40);
  if (pTVar5 != (TNode *)0x0) {
    pTVar5->NextNode = (TNode *)0x0;
    pTVar5->_padding_ = 0;
    *(undefined8 *)&pTVar5->Item = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x8 = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x10 = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x18 = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x20 = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x28 = 0;
    pTVar5->NextNode = (TNode *)0x0;
    *(undefined8 *)&pTVar5->Item = 0;
    *(undefined8 *)&(pTVar5->Item).field_0x28 = 0;
    pTVar6 = pTVar5;
  }
  (this->Traces).Tail = pTVar6;
  (this->Traces).Head = pTVar6;
  *(undefined8 *)&this->MessagesAddedDelegate = 0;
  *(undefined8 *)&(this->MessagesAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MessagesAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MessagesAddedDelegate).field_0x18 = 2;
  *(undefined8 *)&this->MessagesResetDelegate = 0;
  *(undefined8 *)&(this->MessagesResetDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->MessagesResetDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->MessagesResetDelegate).field_0x18 = 2;
  *(undefined8 *)&this->TypeAddedDelegate = 0;
  *(undefined8 *)&(this->TypeAddedDelegate).field_0x8 = 0;
  *(undefined8 *)&(this->TypeAddedDelegate).field_0x10 = 0;
  *(undefined8 *)&(this->TypeAddedDelegate).field_0x18 = 2;
  pFVar7 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  this->ContinueEvent = pFVar7;
  this_00 = FTSTicker::GetCoreTicker();
  local_58 = (undefined1  [8])0x0;
  local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_50.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  local_28 = &local_50;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,&local_50);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &___7__TCommonDelegateInstanceState___A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseRawMethodDelegateInstance__0A_VFMessageTracer____A6A_NM_ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar8[4] = _vcall__56__flat______;
    puVar8[3] = this;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  pTVar10 = FTSTicker::AddTicker
                      (this_00,&local_68,
                       (TDelegate<bool___cdecl(float),FDefaultDelegateUserPolicy> *)local_58,0.0);
  if (pTVar2 != pTVar10) {
    pTVar2->Object = pTVar10->Object;
    pTVar10->Object = (FElement *)0x0;
    pTVar4 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
    (this->TickDelegateHandle).WeakReferenceCount.ReferenceController =
         (pTVar10->WeakReferenceCount).ReferenceController;
    (pTVar10->WeakReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar4->WeakReferenceCount;
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
      }
    }
  }
  if (local_68.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &(local_68.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)((local_68.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                (local_68.WeakReferenceCount.ReferenceController,1);
    }
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_58,
             (FWriteAccessScope *)&local_40);
  if ((local_50.DelegateSize != 0) &&
     (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_50,0,0,0x10);
    local_50.DelegateSize = 0;
  }
  if (local_40.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
  }
  if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_50.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_58);
  return this;
}

// ~FMessageTracer @ 142d3ef20

void __thiscall FMessageTracer::~FMessageTracer(FMessageTracer *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  void *pvVar3;
  TReferenceControllerBase<1> *pTVar4;
  FScriptContainerElement *pFVar5;
  TWeakPtr<FTSTicker::FElement,1> local_18;
  
  this->_padding_ = (longlong)&___7FMessageTracer__6B_;
  local_18.Object = (this->TickDelegateHandle).Object;
  local_18.WeakReferenceCount.ReferenceController =
       (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (local_18.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
         (atomic<int>)
         ((int)(local_18.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
    UNLOCK();
  }
  FTSTicker::RemoveTicker(&local_18);
  FGenericPlatformProcess::ReturnSynchEventToPool(this->ContinueEvent);
  this->ContinueEvent = (FEvent *)0x0;
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->TypeAddedDelegate).field_0x8,*(int *)&(this->TypeAddedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->TypeAddedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->TypeAddedDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MessagesResetDelegate).field_0x8,
             *(int *)&(this->MessagesResetDelegate).field_0x10);
  pvVar3 = *(void **)&(this->MessagesResetDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessagesResetDelegate);
  DestructItems<TDelegateBase<FNotThreadSafeNotCheckedDelegateMode>,int>
            (*(TDelegateBase<FNotThreadSafeNotCheckedDelegateMode> **)
              &(this->MessagesAddedDelegate).field_0x8,
             *(int *)&(this->MessagesAddedDelegate).field_0x10);
  pvVar3 = *(void **)&(this->MessagesAddedDelegate).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->MessagesAddedDelegate);
  TQueue<TFunction<void___cdecl(void)>,0>::~TQueue<TFunction<void___cdecl(void)>,0>(&this->Traces);
  pTVar4 = (this->TickDelegateHandle).WeakReferenceCount.ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar4->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar4->_padding_ + 8))(pTVar4,1);
    }
  }
  *(undefined4 *)&(this->MessageTypes).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MessageTypes).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MessageTypes);
  *(undefined4 *)&(this->MessageInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->MessageInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MessageInfos);
  *(undefined4 *)&(this->RecipientsToEndpointInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->RecipientsToEndpointInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RecipientsToEndpointInfos);
  *(undefined4 *)&(this->Interceptors).field_0x48 = 0;
  pvVar3 = *(void **)&(this->Interceptors).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Interceptors);
  DestructItems<TSharedPtr<IMessageTracerBreakpoint,1>,int>
            ((TSharedPtr<IMessageTracerBreakpoint,1> *)(this->Breakpoints).AllocatorInstance.Data,
             (this->Breakpoints).ArrayNum);
  pFVar5 = (this->Breakpoints).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  *(undefined4 *)&(this->AddressesToEndpointInfos).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AddressesToEndpointInfos).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AddressesToEndpointInfos);
  this->_padding_ = (longlong)&___7IMessageTracer__6B_;
  return;
}

// operator() @ 142d3f5e0

void __thiscall `FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>::operator()(void *this)

{
  double dVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  TSharedPtr<FMessageTracerInterceptorInfo,1> *this_00;
  FMessageTracerInterceptorInfo *pFVar8;
  FMessageTracerInterceptorInfo *pFVar9;
  FName *pFVar10;
  TRawPtrProxy<FMessageTracerInterceptorInfo> local_res8;
  undefined1 local_res10 [8];
  
  lVar2 = *(longlong *)this;
  pFVar6 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  uVar7 = CityHash64((char *)pFVar6,0x10);
  this_00 = TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>_>
                        *)(lVar2 + 0x78),(uint)uVar7,pFVar6);
  pFVar9 = (FMessageTracerInterceptorInfo *)0x0;
  if (this_00->Object == (FMessageTracerInterceptorInfo *)0x0) {
    pFVar8 = ::operator_new(0x28);
    if (pFVar8 != (FMessageTracerInterceptorInfo *)0x0) {
      pFVar8->TimeRegistered = 0.0;
      pFVar8->TimeUnregistered = 0.0;
      (pFVar8->Name).ComparisonIndex = 0;
      (pFVar8->Name).Number = 0;
      (pFVar8->InterceptedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar8->InterceptedMessages).ArrayNum = 0;
      (pFVar8->InterceptedMessages).ArrayMax = 0;
      pFVar9 = pFVar8;
    }
    local_res8.Object = pFVar9;
    TSharedPtr<FMessageTracerInterceptorInfo,1>::operator=<FMessageTracerInterceptorInfo>
              (this_00,&local_res8);
  }
  pFVar10 = (FName *)(**(code **)**(undefined8 **)((longlong)this + 8))
                               (*(undefined8 **)((longlong)this + 8),local_res10);
  FVar3 = *pFVar10;
  if ((this_00->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00->Object->Name = FVar3;
  dVar1 = *(double *)((longlong)this + 0x18);
  if ((this_00->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00->Object->TimeRegistered = dVar1;
  if ((this_00->Object == (FMessageTracerInterceptorInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00->Object->TimeUnregistered = 0.0;
  return;
}

// operator() @ 142d3f730

void __thiscall `FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>::operator()(void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  char cVar8;
  FGuid *pFVar9;
  ulong64 uVar10;
  TSharedPtr<FMessageTracerEndpointInfo,1> *this_00;
  FMessageTracerEndpointInfo *pFVar11;
  FMessageTracerEndpointInfo *pFVar12;
  FName *pFVar13;
  undefined1 local_res8 [16];
  TRawPtrProxy<FMessageTracerEndpointInfo> local_res18;
  TRawPtrProxy<FMessageTracerAddressInfo> local_res20;
  undefined1 local_78 [16];
  TSharedRef<FMessageTracerAddressInfo,1> local_68;
  undefined8 *local_58;
  FMessageTracerAddressInfo **local_50;
  FMessageTracerAddressInfo *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 *local_38;
  TSharedPtr<FMessageTracerEndpointInfo,1> *local_30;
  
  lVar2 = *(longlong *)this;
  pFVar9 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 8))();
  uVar10 = CityHash64((char *)pFVar9,0x10);
  this_00 = TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
            ::FindOrAddImpl<FGuid_const_&>
                      ((TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
                        *)(lVar2 + 200),(uint)uVar10,pFVar9);
  pFVar12 = (FMessageTracerEndpointInfo *)0x0;
  if (this_00->Object == (FMessageTracerEndpointInfo *)0x0) {
    pFVar11 = ::operator_new(0x80);
    local_res18.Object = pFVar12;
    if (pFVar11 != (FMessageTracerEndpointInfo *)0x0) {
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x10 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x18 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x38 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x48 = 0;
      pFVar11->Remote = false;
      *(undefined3 *)&pFVar11->field_0x69 = 0;
      pFVar11->_padding_ = 0;
      *(undefined8 *)&pFVar11->AddressInfos = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x8 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x20 = 0;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x28 = 0;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x2c = 0x80;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pFVar11->AddressInfos).field_0x34 = 0;
      *(undefined8 *)&(pFVar11->AddressInfos).field_0x40 = 0;
      (pFVar11->Name).ComparisonIndex = 0;
      (pFVar11->Name).Number = 0;
      (pFVar11->ReceivedMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->ReceivedMessages).ArrayNum = 0;
      (pFVar11->ReceivedMessages).ArrayMax = 0;
      (pFVar11->SentMessages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar11->SentMessages).ArrayNum = 0;
      (pFVar11->SentMessages).ArrayMax = 0;
      local_res18.Object = pFVar11;
    }
    TSharedPtr<FMessageTracerEndpointInfo,1>::operator=<FMessageTracerEndpointInfo>
              (this_00,&local_res18);
  }
  pFVar11 = ::operator_new(0x20);
  if (pFVar11 != (FMessageTracerEndpointInfo *)0x0) {
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x10 = 0;
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x18 = 0;
    *(undefined8 *)&pFVar11->AddressInfos = 0;
    *(undefined8 *)&(pFVar11->AddressInfos).field_0x8 = 0;
    pFVar12 = pFVar11;
  }
  local_res20.Object = (FMessageTracerAddressInfo *)pFVar12;
  TSharedRef<FMessageTracerAddressInfo,1>::
  TSharedRef<FMessageTracerAddressInfo,1><FMessageTracerAddressInfo>(&local_68,&local_res20);
  puVar1 = (undefined8 *)((longlong)this + 8);
  uVar5 = *puVar1;
  uVar6 = *(undefined8 *)((longlong)this + 0x10);
  ((local_68.Object)->Address).UniqueId.A = (int)uVar5;
  ((local_68.Object)->Address).UniqueId.B = (int)((ulonglong)uVar5 >> 0x20);
  ((local_68.Object)->Address).UniqueId.C = (int)uVar6;
  ((local_68.Object)->Address).UniqueId.D = (int)((ulonglong)uVar6 >> 0x20);
  (local_68.Object)->TimeRegistered = *(double *)((longlong)this + 0x28);
  (local_68.Object)->TimeUnregistered = 0.0;
  if ((this_00->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar12 = this_00->Object;
  local_48 = local_68.Object;
  pTStack_40 = local_68.SharedReferenceCount.ReferenceController;
  if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_50 = &local_48;
  local_58 = puVar1;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerAddressInfo,1>_&&>_>
            ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
              *)pFVar12,
             (TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerAddressInfo,1>_&&> *
             )local_res8,(bool *)&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  pFVar13 = (FName *)(**(code **)**(undefined8 **)((longlong)this + 0x18))
                               (*(undefined8 **)((longlong)this + 0x18),local_78);
  FVar3 = *pFVar13;
  if ((this_00->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00->Object->Name = FVar3;
  cVar8 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x18))();
  if ((this_00->Object == (FMessageTracerEndpointInfo *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00->Object->Remote = cVar8 == '\0';
  local_38 = puVar1;
  local_30 = this_00;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerEndpointInfo,1>_const_&>_>
            ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 8),
             (TPairInitializer<FMessageAddress_const_&,TSharedPtr<FMessageTracerEndpointInfo,1>_const_&>
              *)(local_res8 + 8),(bool *)&local_38);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_68.SharedReferenceCount.ReferenceController);
  return;
}

// operator() @ 142d3f990

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  longlong lVar2;
  TReferenceControllerBase<1> *pTVar3;
  FMessageTracerEndpointInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  Type TVar8;
  int iVar9;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar10;
  FGuid *pFVar11;
  ulong64 uVar12;
  TSharedPtr<FMessageTracerEndpointInfo,1> *pTVar13;
  TSharedPtr<FMessageTracerDispatchState,1> *pTVar14;
  TPairInitializer<TSharedPtr<FMessageTracerEndpointInfo,1>_const_&,TSharedPtr<FMessageTracerDispatchState,1>_&&>
  local_res8;
  longlong local_78;
  TReferenceControllerBase<1> *pTStack_70;
  TSharedRef<FMessageTracerDispatchState,1> local_68;
  TSharedPtr<IMessageContext_const_,1> local_58;
  TSharedPtr<FMessageTracerEndpointInfo,1> *local_48;
  FMessageTracerDispatchState **local_40;
  FMessageTracerDispatchState *local_38;
  TReferenceControllerBase<1> *pTStack_30;
  FMessageTracerEndpointInfo *local_28;
  TReferenceControllerBase<1> *pTStack_20;
  
  lVar2 = *(longlong *)this;
  pTVar3 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  local_58.Object = *(IMessageContext **)((longlong)this + 8);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_58.SharedReferenceCount.ReferenceController = pTVar3;
  pTVar10 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
            ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                    *)(lVar2 + 0x118),&local_58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (pTVar10 ==
      (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)0x0) {
    local_78 = 0;
    pTStack_70 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_78 = *(longlong *)&pTVar10->field_0x10;
    pTStack_70 = *(TReferenceControllerBase<1> **)&pTVar10->field_0x18;
    if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  if (local_78 != 0) {
    lVar2 = *(longlong *)this;
    pFVar11 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 8))();
    uVar12 = CityHash64((char *)pFVar11,0x10);
    pTVar13 = TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
              ::FindOrAddImpl<FGuid_const_&>
                        ((TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
                          *)(lVar2 + 200),(uint)uVar12,pFVar11);
    if (pTVar13->Object != (FMessageTracerEndpointInfo *)0x0) {
      pTVar14 = ::operator_new(0x38);
      local_res8.Value = (TSharedPtr<FMessageTracerDispatchState,1> *)0x0;
      if (pTVar14 != (TSharedPtr<FMessageTracerDispatchState,1> *)0x0) {
        pTVar14->Object = (FMessageTracerDispatchState *)0x0;
        (pTVar14->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar14[2].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[2].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        pTVar14[3].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[1].Object = (FMessageTracerDispatchState *)0x0;
        pTVar14[1].SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_res8.Value = pTVar14;
      }
      TSharedRef<FMessageTracerDispatchState,1>::
      TSharedRef<FMessageTracerDispatchState,1><FMessageTracerDispatchState>
                (&local_68,(TRawPtrProxy<FMessageTracerDispatchState> *)&local_res8.Value);
      if ((local_78 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (local_68.Object)->DispatchLatency =
           *(double *)((longlong)this + 0x30) - *(double *)(local_78 + 0x80);
      (local_68.Object)->DispatchType =
           -(uint)(*(char *)((longlong)this + 0x28) != '\0') & TaskGraph;
      pTVar3 = (pTVar13->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar13->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_28 = ((local_68.Object)->EndpointInfo).Object;
      pTStack_20 = ((local_68.Object)->EndpointInfo).SharedReferenceCount.ReferenceController;
      ((local_68.Object)->EndpointInfo).Object = pFVar4;
      ((local_68.Object)->EndpointInfo).SharedReferenceCount.ReferenceController = pTVar3;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_20);
      TVar8 = (**(code **)(**(longlong **)((longlong)this + 0x18) + 0x10))();
      (local_68.Object)->RecipientThread = TVar8;
      (local_68.Object)->TimeDispatched = *(double *)((longlong)this + 0x30);
      (local_68.Object)->TimeHandled = 0.0;
      if ((local_78 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_38 = local_68.Object;
      pTStack_30 = local_68.SharedReferenceCount.ReferenceController;
      if (local_68.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_68.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_40 = &local_38;
      local_48 = pTVar13;
      TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<TSharedPtr<FMessageTracerEndpointInfo,1>_const_&,TSharedPtr<FMessageTracerDispatchState,1>_&&>_>
                ((TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                  *)(local_78 + 0x10),&local_res8,(bool *)&local_48);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_30);
      if ((pTVar13->Object == (FMessageTracerEndpointInfo *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = pTVar13->Object;
      pFVar5 = (pFVar4->ReceivedMessages).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_78) &&
          ((FScriptContainerElement *)&local_78 <
           pFVar5 + (longlong)(pFVar4->ReceivedMessages).ArrayMax * 0x10)) &&
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
      iVar9 = (pFVar4->ReceivedMessages).ArrayNum;
      piVar1 = &(pFVar4->ReceivedMessages).ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&(pFVar4->ReceivedMessages).AllocatorInstance,piVar1);
      }
      pFVar5 = (pFVar4->ReceivedMessages).AllocatorInstance.Data;
      (pFVar4->ReceivedMessages).ArrayNum = iVar9 + 1;
      *(longlong *)(pFVar5 + (longlong)iVar9 * 0x10) = local_78;
      *(TReferenceControllerBase<1> **)(pFVar5 + (longlong)iVar9 * 0x10 + 8) = pTStack_70;
      if (pTStack_70 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTStack_70->SharedReferenceCount = (atomic<int>)((int)pTStack_70->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  return;
}

// operator() @ 142d3fce0

void __thiscall `FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  FMessageTracerEndpointInfo *pFVar3;
  int iVar4;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar5;
  FGuid *pFVar6;
  ulong64 uVar7;
  TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>
  *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  TReferenceControllerBase<1> *pTVar10;
  TReferenceControllerBase<1> *pTVar11;
  TSharedPtr<FMessageTracerEndpointInfo_const_,1> local_28;
  
  lVar1 = *(longlong *)this;
  pTVar11 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  local_28.Object = *(FMessageTracerEndpointInfo **)((longlong)this + 8);
  if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_28.SharedReferenceCount.ReferenceController = pTVar11;
  pTVar5 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),(TSharedPtr<IMessageContext_const_,1> *)&local_28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if (pTVar5 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    pTVar10 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar1 = *(longlong *)&pTVar5->field_0x10;
    pTVar10 = *(TReferenceControllerBase<1> **)&pTVar5->field_0x18;
    if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    if (lVar1 == 0) goto LAB_142d3fe62;
    lVar2 = *(longlong *)this;
    pFVar6 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 8))();
    uVar7 = CityHash64((char *)pFVar6,0x10);
    iVar4 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                        *)(lVar2 + 200),(uint)uVar7,pFVar6);
    if ((iVar4 == -1) || (lVar2 = *(longlong *)(lVar2 + 200) + (longlong)iVar4 * 0x28, lVar2 == 0))
    {
      pTVar11 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      pFVar3 = *(FMessageTracerEndpointInfo **)(lVar2 + 0x10);
      pTVar11 = *(TReferenceControllerBase<1> **)(lVar2 + 0x18);
      if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pFVar3 != (FMessageTracerEndpointInfo *)0x0) {
        if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_28.Object = pFVar3;
        local_28.SharedReferenceCount.ReferenceController = pTVar11;
        pTVar8 = TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>,0>,FDefaultSetAllocator>
                         *)(lVar1 + 0x10),&local_28);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11)
        ;
        if (pTVar8 == (TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>
                       *)0x0) {
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          pTVar9 = (TReferenceControllerBase<1> *)0x0;
        }
        else {
          lVar1 = *(longlong *)&pTVar8->field_0x10;
          pTVar9 = *(TReferenceControllerBase<1> **)&pTVar8->field_0x18;
          if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar11);
          if (lVar1 != 0) {
            *(undefined8 *)(lVar1 + 0x30) = *(undefined8 *)((longlong)this + 0x28);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar9);
            goto LAB_142d3fe5a;
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      }
    }
  }
LAB_142d3fe5a:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
LAB_142d3fe62:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  return;
}

// operator() @ 142d3fe90

void __thiscall `FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar6;
  FGuid *pFVar7;
  ulong64 uVar8;
  longlong *plVar9;
  TReferenceControllerBase<1> *pTVar10;
  longlong local_28;
  TReferenceControllerBase<1> *pTStack_20;
  TSharedPtr<IMessageContext_const_,1> local_18;
  
  lVar1 = *(longlong *)this;
  pTVar10 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  local_18.Object = *(IMessageContext **)((longlong)this + 8);
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar10;
  pTVar6 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (pTVar6 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    local_28 = 0;
    pTStack_20 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    local_28 = *(longlong *)&pTVar6->field_0x10;
    pTStack_20 = *(TReferenceControllerBase<1> **)&pTVar6->field_0x18;
    if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTStack_20->SharedReferenceCount = (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  if (local_28 != 0) {
    if ((local_28 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    *(undefined1 *)(local_28 + 0x60) = 1;
    lVar1 = *(longlong *)this;
    pFVar7 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 0x18) + 8))();
    uVar8 = CityHash64((char *)pFVar7,0x10);
    iVar5 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGuid>
                      ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
                        *)(lVar1 + 0x78),(uint)uVar8,pFVar7);
    if ((iVar5 == -1) || (lVar1 = *(longlong *)(lVar1 + 0x78) + (longlong)iVar5 * 0x28, lVar1 == 0))
    {
      pTVar10 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      lVar2 = *(longlong *)(lVar1 + 0x10);
      pTVar10 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
      if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar10->SharedReferenceCount = (atomic<int>)((int)pTVar10->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (lVar2 != 0) {
        if (((*(longlong **)(lVar2 + 8) <= &local_28) &&
            (&local_28 < *(longlong **)(lVar2 + 8) + (longlong)*(int *)(lVar2 + 0x14) * 2)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar5 = *(int *)(lVar2 + 0x10);
        if (iVar5 == *(int *)(lVar2 + 0x14)) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)(lVar2 + 8),(int *)(lVar2 + 0x14));
        }
        *(int *)(lVar2 + 0x10) = iVar5 + 1;
        plVar9 = (longlong *)((longlong)iVar5 * 0x10 + *(longlong *)(lVar2 + 8));
        *plVar9 = local_28;
        plVar9[1] = (longlong)pTStack_20;
        if (pTStack_20 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTStack_20->SharedReferenceCount =
               (atomic<int>)((int)pTStack_20->SharedReferenceCount + 1);
          UNLOCK();
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_20);
  return;
}

// operator() @ 142d400b0

void __thiscall `FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FGuid *pFVar4;
  ulong64 uVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  lVar1 = *(longlong *)this;
  pFVar4 = (FGuid *)(**(code **)(**(longlong **)((longlong)this + 8) + 8))();
  uVar5 = CityHash64((char *)pFVar4,0x10);
  iVar3 = TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGuid>
                    ((TSet<TTuple<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>_>,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerInterceptorInfo,1>,0>,FDefaultSetAllocator>
                      *)(lVar1 + 0x78),(uint)uVar5,pFVar4);
  if ((iVar3 == -1) || (lVar1 = *(longlong *)(lVar1 + 0x78) + (longlong)iVar3 * 0x28, lVar1 == 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar2 = *(longlong *)(lVar1 + 0x10);
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)((longlong)this + 0x28);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 142d40150

void __thiscall `FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
  *this_00;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  
  lVar1 = *(longlong *)this;
  uVar3 = FCrc::MemCrc_DEPRECATED((void *)((longlong)this + 8),0x10,0);
  iVar4 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FMessageAddress>
                    ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                      *)(lVar1 + 8),uVar3,(FMessageAddress *)((longlong)this + 8));
  if ((iVar4 == -1) || (lVar1 = *(longlong *)(lVar1 + 8) + (longlong)iVar4 * 0x28, lVar1 == 0)) {
    pTVar6 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    this_00 = *(TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
                **)(lVar1 + 0x10);
    pTVar6 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (this_00 !=
        (TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
         *)0x0) {
      uVar3 = FCrc::MemCrc_DEPRECATED((void *)((longlong)this + 8),0x10,0);
      iVar4 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FMessageAddress>
                        (this_00,uVar3,(FMessageAddress *)((longlong)this + 8));
      if ((iVar4 == -1) ||
         (lVar1 = *(longlong *)&this_00->Elements + (longlong)iVar4 * 0x28, lVar1 == 0)) {
        pTVar5 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        lVar2 = *(longlong *)(lVar1 + 0x10);
        pTVar5 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
        if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
          UNLOCK();
        }
        if (lVar2 != 0) {
          *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)((longlong)this + 0x18);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar5);
          goto LAB_142d40225;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
  }
LAB_142d40225:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
  return;
}

// operator() @ 142d40250

void __thiscall `FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *pTVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<IMessageContext_const_,1> local_18;
  
  lVar1 = *(longlong *)this;
  pTVar2 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  local_18.Object = *(IMessageContext **)((longlong)this + 8);
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_18.SharedReferenceCount.ReferenceController = pTVar2;
  pTVar3 = TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
                   *)(lVar1 + 0x118),&local_18);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  if (pTVar3 == (TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_> *)
                0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    pTVar4 = (TReferenceControllerBase<1> *)0x0;
  }
  else {
    lVar1 = *(longlong *)&pTVar3->field_0x10;
    pTVar4 = *(TReferenceControllerBase<1> **)&pTVar3->field_0x18;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)((longlong)this + 0x18);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// operator() @ 142d40300

void __thiscall `FMessageTracer::TraceSentMessage'::__l2::<lambda_1>::operator()(void *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  FMessageTracerEndpointInfo *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  FMessageTracerMessageInfo *pFVar8;
  FName FVar9;
  FName FVar10;
  bool bVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  FMessageAddress *pFVar17;
  longlong lVar18;
  FWeakObjectPtr *pFVar19;
  UStruct *pUVar20;
  TSharedPtr<FMessageTracerTypeInfo,1> *this_00;
  FMessageTracerTypeInfo *pFVar21;
  FMessageTracerTypeInfo *pFVar22;
  longlong lVar23;
  FSharedReferencer<1> FVar24;
  TReferenceControllerBase<1> *pTVar25;
  FSharedReferencer<1> FVar26;
  FSharedReferencer<1> FVar27;
  TPairInitializer<TSharedPtr<IMessageContext,1>_&&,TSharedPtr<FMessageTracerMessageInfo,1>_&&>
  local_res18;
  TSharedRef<FMessageTracerMessageInfo,1> local_188;
  FMessageTracerEndpointInfo *local_178;
  FTopLevelAssetPath local_170;
  FMessageTracerMessageInfo *local_158;
  FMessageTracerEndpointInfo *pFStack_150;
  FMessageTracerMessageInfo *local_148;
  FMessageTracerEndpointInfo *pFStack_140;
  undefined1 local_138 [16];
  FTopLevelAssetPath local_128;
  TRawPtrProxy<FMessageTracerTypeInfo> local_118;
  FMessageTracerTypeInfo *local_110;
  TSharedPtr<FMessageTracerTypeInfo,1> *local_108;
  TReferenceControllerBase<1> *local_100;
  undefined8 local_f8;
  TReferenceControllerBase<1> *local_f0;
  undefined8 *local_e8;
  FMessageTracerMessageInfo **local_e0;
  FMessageTracerMessageInfo *local_d8;
  FMessageTracerEndpointInfo *pFStack_d0;
  FSharedReferencer<1> local_c8;
  TReferenceControllerBase<1> *local_c0;
  FMessageTracerMessageInfo *local_b8;
  FMessageTracerEndpointInfo *local_b0;
  FDestructionSentinel local_a8;
  FDestructionSentinel local_90;
  FMessageTracerEndpointInfo *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FMessageTracerTypeInfo *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  lVar23 = *(longlong *)this;
  pFVar17 = (FMessageAddress *)(**(code **)(**(longlong **)((longlong)this + 8) + 0x48))();
  uVar14 = FCrc::MemCrc_DEPRECATED(pFVar17,0x10,0);
  iVar15 = TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FMessageAddress>
                     ((TSet<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>,TDefaultMapHashableKeyFuncs<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>,0>,FDefaultSetAllocator>
                       *)(lVar23 + 8),uVar14,pFVar17);
  if ((iVar15 == -1) || (lVar23 = *(longlong *)(lVar23 + 8) + (longlong)iVar15 * 0x28, lVar23 == 0))
  {
    pTVar25 = (TReferenceControllerBase<1> *)0x0;
    goto LAB_142d40bfc;
  }
  pTVar25 = *(TReferenceControllerBase<1> **)(lVar23 + 0x18);
  pFVar3 = *(FMessageTracerEndpointInfo **)(lVar23 + 0x10);
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_178 = pFVar3;
  local_100 = pTVar25;
  if (pFVar3 == (FMessageTracerEndpointInfo *)0x0) goto LAB_142d40bfc;
  local_res18.Value = ::operator_new(0x98);
  if (local_res18.Value == (TSharedPtr<FMessageTracerMessageInfo,1> *)0x0) {
    local_res18.Value = (TSharedPtr<FMessageTracerMessageInfo,1> *)0x0;
  }
  else {
    local_res18.Value[2].Object = (FMessageTracerMessageInfo *)0x0;
    local_res18.Value[2].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[4].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined8 *)((longlong)&local_res18.Value[5].SharedReferenceCount.ReferenceController + 4) =
         0;
    *(undefined4 *)((longlong)&local_res18.Value[6].Object + 4) = 0;
    local_res18.Value[7].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[8].Object = (FMessageTracerMessageInfo *)0x0;
    (local_res18.Value)->Object = (FMessageTracerMessageInfo *)0x0;
    ((local_res18.Value)->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[1].Object = (FMessageTracerMessageInfo *)0x0;
    local_res18.Value[1].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[3].Object = (FMessageTracerMessageInfo *)0x0;
    *(undefined4 *)&local_res18.Value[3].SharedReferenceCount.ReferenceController = 0;
    *(undefined4 *)((longlong)&local_res18.Value[3].SharedReferenceCount.ReferenceController + 4) =
         0x80;
    *(undefined4 *)&local_res18.Value[4].Object = 0xffffffff;
    *(undefined4 *)((longlong)&local_res18.Value[4].Object + 4) = 0;
    local_res18.Value[5].Object = (FMessageTracerMessageInfo *)0x0;
    *(undefined4 *)&local_res18.Value[5].SharedReferenceCount.ReferenceController = 0;
    local_res18.Value[6].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[7].Object = (FMessageTracerMessageInfo *)0x0;
    local_res18.Value[8].SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    local_res18.Value[9].Object = (FMessageTracerMessageInfo *)0x0;
  }
  pFVar22 = (FMessageTracerTypeInfo *)0x0;
  TSharedRef<FMessageTracerMessageInfo,1>::
  TSharedRef<FMessageTracerMessageInfo,1><FMessageTracerMessageInfo>
            (&local_188,(TRawPtrProxy<FMessageTracerMessageInfo> *)&local_res18.Value);
  pFVar8 = local_188.Object;
  local_138._8_8_ = *(longlong *)((longlong)this + 0x10);
  local_138._0_8_ = *(undefined8 *)((longlong)this + 8);
  if ((TReferenceControllerBase<1> *)local_138._8_8_ != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    ((TReferenceControllerBase<1> *)local_138._8_8_)->SharedReferenceCount =
         (atomic<int>)
         ((int)((TReferenceControllerBase<1> *)local_138._8_8_)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (local_188.Object != (FMessageTracerMessageInfo *)local_138) {
    ((local_188.Object)->Context).Object = (IMessageContext *)local_138._0_8_;
    local_138._0_8_ = (IMessageContext *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&((local_188.Object)->Context).SharedReferenceCount,
               (FSharedReferencer<1> *)(local_138 + 8));
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)local_138._8_8_);
  pFVar8->Intercepted = false;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_78 = (pFVar8->SenderInfo).Object;
  pTStack_70 = (pFVar8->SenderInfo).SharedReferenceCount.ReferenceController;
  (pFVar8->SenderInfo).Object = pFVar3;
  (pFVar8->SenderInfo).SharedReferenceCount.ReferenceController = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_70);
  FVar27.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
  local_d8 = local_188.Object;
  pFStack_d0 = (FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController;
  (local_188.Object)->TimeRouted = 0.0;
  (local_188.Object)->TimeSent = *(double *)((longlong)this + 0x18);
  lVar23 = *(longlong *)this;
  if ((FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController !=
      (FMessageTracerEndpointInfo *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_f8 = *(undefined8 *)((longlong)this + 8);
  local_f0 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (local_f0 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_f0->SharedReferenceCount = (atomic<int>)((int)local_f0->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_e8 = &local_f8;
  local_e0 = &local_d8;
  TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<TSharedPtr<IMessageContext,1>_&&,TSharedPtr<FMessageTracerMessageInfo,1>_&&>_>
            ((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
              *)(lVar23 + 0x118),&local_res18,(bool *)&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFStack_d0);
  plVar4 = *(longlong **)((longlong)this + 8);
  lVar23 = *(longlong *)this;
  lVar18 = (**(code **)(*plVar4 + 0x18))(plVar4);
  if (lVar18 == 0) {
LAB_142d40570:
    local_170.PackageName.ComparisonIndex.Value = 0;
    local_170.PackageName.Number = 0;
    local_170.AssetName.ComparisonIndex.Value = 0;
    local_170.AssetName.Number = 0;
  }
  else {
    pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
    bVar11 = FWeakObjectPtr::IsValid(pFVar19,false,true);
    if (!bVar11) goto LAB_142d40570;
    pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
    pUVar20 = (UStruct *)FWeakObjectPtr::Get(pFVar19);
    UStruct::GetStructPathName(pUVar20,&local_170);
  }
  FVar10 = local_170.AssetName;
  uVar14 = ::GetTypeHash(local_170.AssetName.ComparisonIndex.Value);
  FVar9 = local_170.PackageName;
  uVar16 = ::GetTypeHash(local_170.PackageName.ComparisonIndex.Value);
  uVar16 = uVar16 + FVar9.Number;
  this_00 = TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
            ::FindOrAddImpl<FTopLevelAssetPath>
                      ((TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
                        *)(lVar23 + 0x168),
                       (uVar16 >> 2) + uVar16 * 0x40 + -0x61c88647 + uVar14 + FVar10.Number ^ uVar16
                       ,&local_170);
  local_108 = this_00;
  if (this_00->Object == (FMessageTracerTypeInfo *)0x0) {
    pFVar21 = ::operator_new(0x28);
    if (pFVar21 != (FMessageTracerTypeInfo *)0x0) {
      (pFVar21->Messages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar21->Messages).ArrayNum = 0;
      (pFVar21->Messages).ArrayMax = 0;
      (pFVar21->TypeName).ComparisonIndex = 0;
      (pFVar21->TypeName).Number = 0;
      (pFVar21->TypePathName).PackageName.ComparisonIndex = 0;
      (pFVar21->TypePathName).PackageName.Number = 0;
      (pFVar21->TypePathName).AssetName.ComparisonIndex = 0;
      (pFVar21->TypePathName).AssetName.Number = 0;
      pFVar22 = pFVar21;
    }
    local_118.Object = pFVar22;
    TSharedPtr<FMessageTracerTypeInfo,1>::operator=<FMessageTracerTypeInfo>(this_00,&local_118);
    plVar4 = *(longlong **)((longlong)this + 8);
    lVar23 = (**(code **)(*plVar4 + 0x18))(plVar4);
    if (lVar23 == 0) {
LAB_142d4067d:
      local_128.PackageName.ComparisonIndex.Value = 0;
      local_128.PackageName.Number = 0;
      local_128.AssetName.ComparisonIndex.Value = 0;
      local_128.AssetName.Number = 0;
    }
    else {
      pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
      bVar11 = FWeakObjectPtr::IsValid(pFVar19,false,true);
      if (!bVar11) goto LAB_142d4067d;
      pFVar19 = (FWeakObjectPtr *)(**(code **)(*plVar4 + 0x20))(plVar4);
      pUVar20 = (UStruct *)FWeakObjectPtr::Get(pFVar19);
      UStruct::GetStructPathName(pUVar20,&local_128);
    }
    FVar10 = local_128.AssetName;
    FVar9 = local_128.PackageName;
    if ((this_00->Object == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar22 = this_00->Object;
    (pFVar22->TypePathName).PackageName = FVar9;
    (pFVar22->TypePathName).AssetName = FVar10;
    lVar23 = *(longlong *)this;
    if ((this_00->Object == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x408,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pTVar25 = (this_00->SharedReferenceCount).ReferenceController;
    local_110 = this_00->Object;
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((local_110 == (FMessageTracerTypeInfo *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x25d,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
      UNLOCK();
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar23 + 0x220),
               (FWriteAccessScope *)&local_a8);
    pFVar22 = local_110;
    *(int *)(lVar23 + 0x23c) = *(int *)(lVar23 + 0x23c) + 1;
    bVar11 = false;
    uVar14 = *(int *)(lVar23 + 0x230) - 1;
    if (-1 < (int)uVar14) {
      lVar18 = (longlong)(int)uVar14 << 4;
      bVar11 = false;
      do {
        uVar16 = 0;
        if ((int)uVar14 < *(int *)(lVar23 + 0x230)) {
          uVar16 = ~uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((*(int *)(lVar18 + 8 + *(longlong *)(lVar23 + 0x228)) == 0) ||
           (plVar4 = *(longlong **)(lVar18 + *(longlong *)(lVar23 + 0x228)),
           plVar4 == (longlong *)0x0)) {
LAB_142d4080c:
          bVar11 = true;
        }
        else {
          lVar5 = *plVar4;
          local_c8.ReferenceController = (TReferenceControllerBase<1> *)pFVar22;
          if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_c0 = pTVar25;
          cVar13 = (**(code **)(lVar5 + 0x68))();
          if (cVar13 == '\0') goto LAB_142d4080c;
        }
        lVar18 = lVar18 + -0x10;
        uVar14 = uVar14 - 1;
        this_00 = local_108;
        FVar27.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
      } while (-1 < (int)uVar14);
    }
    *(int *)(lVar23 + 0x23c) = *(int *)(lVar23 + 0x23c) + -1;
    if (bVar11) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar23 + 0x220),false);
    }
    if (local_a8.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_a8.Accessor,&local_a8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  }
  if ((this_00->Object == (FMessageTracerTypeInfo *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar22 = this_00->Object;
  local_158 = local_188.Object;
  pFStack_150 = (FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController != (FMessageTracerEndpointInfo *)0x0)
  {
    LOCK();
    paVar1 = (atomic<int> *)
             &(((FMessageTracerEndpointInfo *)FVar27.ReferenceController)->AddressInfos).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar6 = (pFVar22->Messages).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_158) &&
      ((FScriptContainerElement *)&local_158 <
       pFVar6 + (longlong)(pFVar22->Messages).ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = (pFVar22->Messages).ArrayNum;
  piVar2 = &(pFVar22->Messages).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)pFVar22,piVar2);
  }
  (pFVar22->Messages).ArrayNum = iVar15 + 1;
  pFVar6 = (pFVar22->Messages).AllocatorInstance.Data;
  *(FMessageTracerMessageInfo **)(pFVar6 + (longlong)iVar15 * 0x10) = local_158;
  *(FMessageTracerEndpointInfo **)(pFVar6 + (longlong)iVar15 * 0x10 + 8) = pFStack_150;
  pFStack_150 = (FMessageTracerEndpointInfo *)0x0;
  local_158 = (FMessageTracerMessageInfo *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pFVar3 = local_178;
  local_148 = local_188.Object;
  pFStack_140 = (FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController != (FMessageTracerEndpointInfo *)0x0)
  {
    LOCK();
    paVar1 = (atomic<int> *)
             &(((FMessageTracerEndpointInfo *)FVar27.ReferenceController)->AddressInfos).field_0x8;
    *paVar1 = (atomic<int>)((int)*paVar1 + 1);
    UNLOCK();
  }
  pFVar6 = (local_178->SentMessages).AllocatorInstance.Data;
  if (((pFVar6 <= (FScriptContainerElement *)&local_148) &&
      ((FScriptContainerElement *)&local_148 <
       pFVar6 + (longlong)(local_178->SentMessages).ArrayMax * 0x10)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar15 = (pFVar3->SentMessages).ArrayNum;
  piVar2 = &(pFVar3->SentMessages).ArrayMax;
  if (iVar15 == *piVar2) {
    iVar15 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(pFVar3->SentMessages).AllocatorInstance,piVar2);
  }
  (pFVar3->SentMessages).ArrayNum = iVar15 + 1;
  pFVar6 = (pFVar3->SentMessages).AllocatorInstance.Data;
  *(FMessageTracerMessageInfo **)(pFVar6 + (longlong)iVar15 * 0x10) = local_148;
  *(FMessageTracerEndpointInfo **)(pFVar6 + (longlong)iVar15 * 0x10 + 8) = pFStack_140;
  pFStack_140 = (FMessageTracerEndpointInfo *)0x0;
  local_148 = (FMessageTracerMessageInfo *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  pTVar25 = (this_00->SharedReferenceCount).ReferenceController;
  pFVar22 = this_00->Object;
  if (pTVar25 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar25->SharedReferenceCount = (atomic<int>)((int)pTVar25->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_68 = ((local_188.Object)->TypeInfo).Object;
  pTStack_60 = ((local_188.Object)->TypeInfo).SharedReferenceCount.ReferenceController;
  ((local_188.Object)->TypeInfo).Object = pFVar22;
  ((local_188.Object)->TypeInfo).SharedReferenceCount.ReferenceController = pTVar25;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  FVar27.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
  lVar23 = *(longlong *)this;
  local_178 = (FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController;
  if ((FMessageTracerEndpointInfo *)local_188.SharedReferenceCount.ReferenceController !=
      (FMessageTracerEndpointInfo *)0x0) {
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    (local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_188.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar23 + 0x1e0),
             (FWriteAccessScope *)&local_90);
  *(int *)(lVar23 + 0x1fc) = *(int *)(lVar23 + 0x1fc) + 1;
  bVar11 = false;
  uVar14 = *(int *)(lVar23 + 0x1f0) - 1;
  FVar24.ReferenceController = FVar27.ReferenceController;
  FVar26.ReferenceController = FVar27.ReferenceController;
  if (-1 < (int)uVar14) {
    lVar18 = (longlong)(int)uVar14 << 4;
    bVar11 = false;
    do {
      uVar16 = 0;
      if ((int)uVar14 < *(int *)(lVar23 + 0x1f0)) {
        uVar16 = ~uVar14 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(lVar18 + 8 + *(longlong *)(lVar23 + 0x1e8)) == 0) ||
         (plVar4 = *(longlong **)(lVar18 + *(longlong *)(lVar23 + 0x1e8)), plVar4 == (longlong *)0x0
         )) {
LAB_142d40b7a:
        bVar11 = true;
      }
      else {
        lVar5 = *plVar4;
        local_b8 = local_188.Object;
        local_b0 = (FMessageTracerEndpointInfo *)FVar27.ReferenceController;
        if ((FMessageTracerEndpointInfo *)FVar27.ReferenceController !=
            (FMessageTracerEndpointInfo *)0x0) {
          LOCK();
          (FVar27.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)(FVar27.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        cVar13 = (**(code **)(lVar5 + 0x68))();
        if (cVar13 == '\0') goto LAB_142d40b7a;
      }
      lVar18 = lVar18 + -0x10;
      uVar14 = uVar14 - 1;
      FVar24.ReferenceController = local_188.SharedReferenceCount.ReferenceController;
      FVar26.ReferenceController = (TReferenceControllerBase<1> *)local_178;
    } while (-1 < (int)uVar14);
  }
  *(int *)(lVar23 + 0x1fc) = *(int *)(lVar23 + 0x1fc) + -1;
  if (bVar11) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar23 + 0x1e0),false);
  }
  if (local_90.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_90.Accessor,&local_90);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar27.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar26.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar24.ReferenceController);
  pTVar25 = local_100;
LAB_142d40bfc:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar25);
  return;
}

// Break @ 142d41eb0

void __thiscall FMessageTracer::Break(FMessageTracer *this)

{
  this->Breaking = true;
  return;
}

// Continue @ 142d42520

void __thiscall FMessageTracer::Continue(FMessageTracer *this)

{
  if (this->Running == false) {
    this->Running = true;
    return;
  }
  if (this->Breaking != false) {
    this->Breaking = false;
                    /* WARNING: Could not recover jumptable at 0x000142d42542. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ContinueEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// GetEndpoints @ 142d47640

int __thiscall
FMessageTracer::GetEndpoints
          (FMessageTracer *this,
          TArray<TSharedPtr<FMessageTracerEndpointInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGuid,TSharedPtr<FMessageTracerEndpointInfo,1>,0>_>
              *)&this->RecipientsToEndpointInfos,param_1);
  return param_1->ArrayNum;
}

// GetMessageTypes @ 142d47890

int __thiscall
FMessageTracer::GetMessageTypes
          (FMessageTracer *this,
          TArray<TSharedPtr<FMessageTracerTypeInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>_>
              *)&this->MessageTypes,param_1);
  return param_1->ArrayNum;
}

// GetMessages @ 142d478c0

int __thiscall
FMessageTracer::GetMessages
          (FMessageTracer *this,
          TArray<TSharedPtr<FMessageTracerMessageInfo,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TMapBase<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>_>
              *)&this->MessageInfos,param_1);
  return param_1->ArrayNum;
}

// HasMessages @ 142d4a230

bool __thiscall FMessageTracer::HasMessages(FMessageTracer *this)

{
  return 0 < *(int *)&(this->MessageInfos).field_0x8 - *(int *)&(this->MessageInfos).field_0x34;
}

// IsBreaking @ 142d4a590

bool __thiscall FMessageTracer::IsBreaking(FMessageTracer *this)

{
  return this->Breaking;
}

// IsRunning @ 142d4a5d0

bool __thiscall FMessageTracer::IsRunning(FMessageTracer *this)

{
  return this->Running;
}

// OnMessageAdded @ 142d4ab00

FOnMessageAdded * __thiscall FMessageTracer::OnMessageAdded(FMessageTracer *this)

{
  return &this->MessagesAddedDelegate;
}

// OnMessagesReset @ 142d4ab10

FOnMessagesReset * __thiscall FMessageTracer::OnMessagesReset(FMessageTracer *this)

{
  return &this->MessagesResetDelegate;
}

// OnTypeAdded @ 142d4ab30

FOnTypeAdded * __thiscall FMessageTracer::OnTypeAdded(FMessageTracer *this)

{
  return &this->TypeAddedDelegate;
}

// Reset @ 142d4db70

void __thiscall FMessageTracer::Reset(FMessageTracer *this)

{
  this->ResetPending = true;
  return;
}

// ResetMessages @ 142d4db80

void __thiscall FMessageTracer::ResetMessages(FMessageTracer *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<IMessageContext,1>,TSharedPtr<FMessageTracerMessageInfo,1>,0>,FDefaultSetAllocator>
           *)&this->MessageInfos);
  TSet<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>_>,TDefaultMapHashableKeyFuncs<FTopLevelAssetPath,TSharedPtr<FMessageTracerTypeInfo,1>,0>,FDefaultSetAllocator>
           *)&this->MessageTypes);
  iVar3 = *(int *)&(this->AddressesToEndpointInfos).field_0x28;
  puVar1 = &(this->AddressesToEndpointInfos).field_0x10;
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  iVar8 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->AddressesToEndpointInfos).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142d4dc3d;
      uVar11 = puVar15[lVar9 + 1];
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res10 = (int)lVar9;
    iVar8 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_142d4dc3d:
  uVar11 = *(uint *)&(this->AddressesToEndpointInfos).field_0x28;
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->AddressesToEndpointInfos).field_0x8 -
                       *(int *)&(this->AddressesToEndpointInfos).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)&(this->AddressesToEndpointInfos).field_0x28;
  if (uVar11 != uVar7) {
    puVar13 = *(undefined1 **)&(this->AddressesToEndpointInfos).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_142d4dd40;
      uVar11 = *(uint *)(puVar13 + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    uVar11 = local_res18 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_142d4dd40:
  while( true ) {
    if (*(int *)&(this->AddressesToEndpointInfos).field_0x8 -
        *(int *)&(this->AddressesToEndpointInfos).field_0x34 != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerEndpointInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->MessagesResetDelegate);
      return;
    }
    lVar9 = *(longlong *)&this->AddressesToEndpointInfos +
            (longlong)TStack_60.CurrentBitIndex * 0x28;
    if ((*(longlong *)
          (*(longlong *)&this->AddressesToEndpointInfos + 0x10 +
          (longlong)TStack_60.CurrentBitIndex * 0x28) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(lVar9 + 0x10);
    if (*(int *)(lVar4 + 100) < 0) {
      DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
                (*(TSharedPtr<FMessageTracerMessageInfo,1> **)(lVar4 + 0x58),*(int *)(lVar4 + 0x60))
      ;
      *(undefined4 *)(lVar4 + 0x60) = 0;
      if (*(int *)(lVar4 + 100) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(lVar4 + 0x58),0,(int *)(lVar4 + 100));
      }
    }
    else {
      DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
                (*(TSharedPtr<FMessageTracerMessageInfo,1> **)(lVar4 + 0x58),*(int *)(lVar4 + 0x60))
      ;
      *(undefined4 *)(lVar4 + 0x60) = 0;
    }
    if ((*(longlong *)(lVar9 + 0x10) == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) break;
    lVar9 = *(longlong *)(lVar9 + 0x10);
    if (*(int *)(lVar9 + 0x7c) < 0) {
      DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
                (*(TSharedPtr<FMessageTracerMessageInfo,1> **)(lVar9 + 0x70),*(int *)(lVar9 + 0x78))
      ;
      *(undefined4 *)(lVar9 + 0x78) = 0;
      if (*(int *)(lVar9 + 0x7c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(lVar9 + 0x70),0,(int *)(lVar9 + 0x7c));
      }
    }
    else {
      DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
                (*(TSharedPtr<FMessageTracerMessageInfo,1> **)(lVar9 + 0x70),*(int *)(lVar9 + 0x78))
      ;
      *(undefined4 *)(lVar9 + 0x78) = 0;
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

// ShouldBreak @ 142d4e3c0

bool __thiscall
FMessageTracer::ShouldBreak(FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res18 [16];
  
  bVar3 = FGenericPlatformProcess::SupportsMultithreading();
  if (bVar3) {
    if (this->Breaking == false) {
      iVar1 = (this->Breakpoints).ArrayNum;
      pFVar6 = (this->Breakpoints).AllocatorInstance.Data;
      pFVar7 = pFVar6 + (longlong)iVar1 * 0x10;
      do {
        if ((this->Breakpoints).ArrayNum != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<IMessageTracerBreakpoint,1>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar6 == pFVar7) goto LAB_142d4e49f;
        if (*(longlong *)pFVar6 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L"");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        cVar5 = (**(code **)**(undefined8 **)pFVar6)();
        if (cVar5 != '\0') {
          if (*(longlong *)pFVar6 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          cVar5 = (**(code **)(**(longlong **)pFVar6 + 8))(*(longlong **)pFVar6,param_1);
          if (cVar5 != '\0') break;
        }
        pFVar6 = pFVar6 + 0x10;
      } while( true );
    }
    bVar3 = true;
  }
  else {
LAB_142d4e49f:
    bVar3 = false;
  }
  return bVar3;
}

// Step @ 142d4e720

void __thiscall FMessageTracer::Step(FMessageTracer *this)

{
  if (this->Breaking != false) {
                    /* WARNING: Could not recover jumptable at 0x000142d4e72d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ContinueEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// Stop @ 142d4e780

void __thiscall FMessageTracer::Stop(FMessageTracer *this)

{
  if ((this->Running != false) && (this->Running = false, this->Breaking != false)) {
    this->Breaking = false;
                    /* WARNING: Could not recover jumptable at 0x000142d4e7a1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(this->ContinueEvent->_padding_ + 0x10))();
    return;
  }
  return;
}

// Tick @ 142d4eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FMessageTracer::Tick(FMessageTracer *this,float param_1)

{
  int *piVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  longlong lVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FMessageTracer::Tick(float)_::_2_::FStat_STAT_FMessageTracer_Tick>
  FVar16;
  undefined8 uVar17;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar18;
  longlong *plVar19;
  longlong *plVar20;
  FNameEntryId FVar21;
  FName FVar22;
  FNameEntryId FVar23;
  undefined1 auStackY_128 [32];
  LARGE_INTEGER local_c8;
  FName local_c0;
  FStatMessage local_b0;
  code *local_98;
  undefined8 uStack_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong *plStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  longlong *plStack_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar23.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_FMessageTracer_Tick ==
          (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FMessageTracer::Tick(float)_::_2_::FStat_STAT_FMessageTracer_Tick>
           )0x0) {
        pFVar15 = ::FName::FName((FName *)&local_c8.s,"STAT_FMessageTracer_Tick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMessageTracer_Tick,*pFVar15,
                   L"STAT_FMessageTracer_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar16 = StatPtr_STAT_FMessageTracer_Tick;
  if (StatPtr_STAT_FMessageTracer_Tick ==
      (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FMessageTracer::Tick(float)_::_2_::FStat_STAT_FMessageTracer_Tick>
       )0x0) {
    pFVar15 = ::FName::FName((FName *)&local_b0,"STAT_FMessageTracer_Tick");
    FVar16 = (FThreadSafeStaticStat<_public:_virtual_bool___cdecl_FMessageTracer::Tick(float)_::_2_::FStat_STAT_FMessageTracer_Tick>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FMessageTracer_Tick,*pFVar15,
                          L"STAT_FMessageTracer_Tick","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar16;
  bVar11 = false;
  bVar13 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar18 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8.s,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar11 = false;
      bVar13 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.s.LowPart = FVar21.Value;
        local_c8.s.HighPart = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Messaging\\Private\\Bus\\MessageTracer.cpp"
                   ,0x1c0);
        bVar11 = true;
        bVar13 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_c8.s.LowPart = FVar21.Value;
      local_c8.s.HighPart = uVar18;
      local_c0 = FVar22;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar12 = true;
      FVar23.Value = local_c0.ComparisonIndex.Value;
      goto LAB_142d4ed1c;
    }
  }
  bVar12 = false;
  FVar22 = local_c0;
LAB_142d4ed1c:
  if (this->ResetPending != false) {
    ResetMessages(this);
    this->ResetPending = false;
  }
  if (((this->Traces).Tail)->NextNode != (TNode *)0x0) {
    local_98 = (code *)0x0;
    plStack_70 = (longlong *)0x0;
    while (plVar20 = plStack_70, uVar8 = local_78, uVar17 = uStack_80, lVar14 = local_88,
          pTVar2 = ((this->Traces).Tail)->NextNode, pTVar2 != (TNode *)0x0) {
      pcVar9 = *(code **)&pTVar2->Item;
      uVar10 = *(undefined8 *)&(pTVar2->Item).field_0x8;
      local_88 = *(longlong *)&(pTVar2->Item).field_0x10;
      uStack_80 = *(undefined8 *)&(pTVar2->Item).field_0x18;
      local_78 = *(undefined8 *)&(pTVar2->Item).field_0x20;
      plStack_70 = *(longlong **)&(pTVar2->Item).field_0x28;
      *(code **)&pTVar2->Item = local_98;
      *(undefined8 *)&(pTVar2->Item).field_0x8 = uStack_90;
      *(longlong *)&(pTVar2->Item).field_0x10 = lVar14;
      *(undefined8 *)&(pTVar2->Item).field_0x18 = uVar17;
      *(undefined8 *)&(pTVar2->Item).field_0x20 = uVar8;
      *(longlong **)&(pTVar2->Item).field_0x28 = plVar20;
      pTVar3 = (this->Traces).Tail;
      (this->Traces).Tail = pTVar2;
      local_68 = *(longlong *)&pTVar2->Item;
      uVar8 = *(undefined8 *)&(pTVar2->Item).field_0x8;
      uVar4 = *(undefined4 *)&(pTVar2->Item).field_0x10;
      uVar5 = *(undefined4 *)&(pTVar2->Item).field_0x14;
      uVar6 = *(undefined4 *)&(pTVar2->Item).field_0x18;
      uVar7 = *(undefined4 *)&(pTVar2->Item).field_0x1c;
      uVar17 = *(undefined8 *)&(pTVar2->Item).field_0x20;
      plStack_40 = *(longlong **)&(pTVar2->Item).field_0x28;
      *(undefined8 *)&pTVar2->Item = 0;
      *(undefined8 *)&(pTVar2->Item).field_0x8 = uStack_60;
      *(undefined4 *)&(pTVar2->Item).field_0x10 = local_58;
      *(undefined4 *)&(pTVar2->Item).field_0x14 = uStack_54;
      *(undefined4 *)&(pTVar2->Item).field_0x18 = uStack_50;
      *(undefined4 *)&(pTVar2->Item).field_0x1c = uStack_4c;
      *(undefined4 *)&(pTVar2->Item).field_0x20 = (undefined4)local_48;
      *(undefined4 *)&(pTVar2->Item).field_0x24 = local_48._4_4_;
      *(undefined4 *)&(pTVar2->Item).field_0x28 = 0;
      *(undefined4 *)&(pTVar2->Item).field_0x2c = 0;
      uStack_60 = uVar8;
      local_58 = uVar4;
      uStack_54 = uVar5;
      uStack_50 = uVar6;
      uStack_4c = uVar7;
      local_48 = uVar17;
      local_98 = pcVar9;
      uStack_90 = uVar10;
      if (local_68 != 0) {
        plVar20 = (longlong *)&local_58;
        if (plStack_40 != (longlong *)0x0) {
          plVar20 = plStack_40;
        }
        (**(code **)(*plVar20 + 0x10))();
      }
      if (pTVar3 != (TNode *)0x0) {
        if (*(longlong *)&pTVar3->Item != 0) {
          plVar20 = *(longlong **)&(pTVar3->Item).field_0x28;
          plVar19 = (longlong *)&(pTVar3->Item).field_0x10;
          if (plVar20 != (longlong *)0x0) {
            plVar19 = plVar20;
          }
          (**(code **)(*plVar19 + 0x10))();
        }
        ::operator_delete(pTVar3,0x40);
      }
      UE::Core::Private::Function::CheckCallable(local_98);
      pcVar9 = local_98;
      plVar20 = &local_88;
      if (plStack_70 != (longlong *)0x0) {
        plVar20 = plStack_70;
      }
      uVar17 = (**(code **)(*plVar20 + 8))();
      (*pcVar9)(uVar17);
    }
    if (local_98 != (code *)0x0) {
      plVar20 = &local_88;
      if (plStack_70 != (longlong *)0x0) {
        plVar20 = plStack_70;
      }
      (**(code **)(*plVar20 + 0x10))();
    }
  }
  if (bVar13) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_c8);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_b0);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return true;
}

// TraceAddedInterceptor @ 142d4f030

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceAddedInterceptor
          (FMessageTracer *this,TSharedRef<IMessageInterceptor,1> *param_1,
          FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageInterceptor *pIVar4;
  double dVar5;
  TNode *pTVar6;
  longlong *plVar7;
  atomic<int> *paVar8;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78 [2];
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  QueryPerformanceCounter(local_78);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar1 = &this->Traces;
  pIVar4 = param_1->Object;
  dVar5 = (double)local_78[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar8 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar8 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_68 = (code *)0x0;
  local_40 = FMemory::Malloc(0x28,8);
  local_40[1] = (longlong)this;
  local_40[2] = (longlong)pIVar4;
  *local_40 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMessageTracer::TraceAddedInterceptor'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_40[3] = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar8 = (atomic<int>)((int)*paVar8 + 1);
    UNLOCK();
  }
  local_40[4] = (longlong)dVar5;
  if (local_40 != (longlong *)&DAT_fffffffffffffff8) {
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceAddedInterceptor'::__l2::<lambda_1>,void>::
               Call;
  }
  pTVar6 = ::operator_new(0x40);
  if (pTVar6 != (TNode *)0x0) {
    pTVar6->NextNode = (TNode *)0x0;
    *(code **)&pTVar6->Item = local_68;
    *(longlong **)&(pTVar6->Item).field_0x28 = local_40;
    local_40 = (longlong *)0x0;
    *(longlong *)&(pTVar6->Item).field_0x10 = local_58;
    *(undefined8 *)&(pTVar6->Item).field_0x18 = uStack_50;
    *(undefined8 *)&(pTVar6->Item).field_0x20 = local_48;
    if (*(longlong *)&pTVar6->Item != 0) {
      local_68 = (code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar6;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar6;
    UNLOCK();
  }
  if (local_68 != (code *)0x0) {
    plVar7 = &local_58;
    if (local_40 != (longlong *)0x0) {
      plVar7 = local_40;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// TraceAddedRecipient @ 142d4f1f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceAddedRecipient
          (FMessageTracer *this,FMessageAddress *param_1,TSharedRef<IMessageReceiver,1> *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageReceiver *pIVar4;
  double dVar5;
  longlong lVar6;
  longlong lVar7;
  TNode *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(local_88);
  pTVar3 = (param_2->SharedReferenceCount).ReferenceController;
  pTVar1 = &this->Traces;
  pIVar4 = param_2->Object;
  lVar6 = *(longlong *)&param_1->UniqueId;
  lVar7 = *(longlong *)&(param_1->UniqueId).C;
  dVar5 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_78 = (code *)0x0;
  local_50 = FMemory::Malloc(0x38,8);
  local_50[1] = (longlong)this;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMessageTracer::TraceAddedRecipient'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_50[2] = lVar6;
  local_50[3] = lVar7;
  local_50[4] = (longlong)pIVar4;
  local_50[5] = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_50[6] = (longlong)dVar5;
  if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceAddedRecipient'::__l2::<lambda_1>,void>::
               Call;
  }
  pTVar8 = ::operator_new(0x40);
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(code **)&pTVar8->Item = local_78;
    *(longlong **)&(pTVar8->Item).field_0x28 = local_50;
    local_50 = (longlong *)0x0;
    *(longlong *)&(pTVar8->Item).field_0x10 = local_68;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = uStack_60;
    *(undefined8 *)&(pTVar8->Item).field_0x20 = local_58;
    if (*(longlong *)&pTVar8->Item != 0) {
      local_78 = (code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar8;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar8;
    UNLOCK();
  }
  if (local_78 != (code *)0x0) {
    plVar9 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// TraceAddedSubscription @ 142d4f3c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceAddedSubscription
          (FMessageTracer *this,TSharedRef<IMessageSubscription,1> *param_1)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  TNode *pTVar3;
  undefined ***pppuVar4;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58 [2];
  code *local_48;
  undefined **local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined ***local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if (this->Running != false) {
    QueryPerformanceCounter(local_58);
    local_38 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FMessageTracer::TraceAddedSubscription'::`2'::<lambda_1>,0,0>
                ::_vftable_;
    pTVar1 = &this->Traces;
    local_20 = (undefined ***)0x0;
    local_48 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceAddedSubscription'::__l2::<lambda_1>,void>::
               Call;
    pTVar3 = ::operator_new(0x40);
    if (pTVar3 != (TNode *)0x0) {
      pTVar3->NextNode = (TNode *)0x0;
      *(code **)&pTVar3->Item = local_48;
      *(undefined ****)&(pTVar3->Item).field_0x28 = local_20;
      *(undefined ***)&(pTVar3->Item).field_0x10 = local_38;
      *(undefined8 *)&(pTVar3->Item).field_0x18 = uStack_30;
      *(undefined8 *)&(pTVar3->Item).field_0x20 = local_28;
      if (*(longlong *)&pTVar3->Item != 0) {
        local_48 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar3;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar3;
      UNLOCK();
    }
    if (local_48 != (code *)0x0) {
      pppuVar4 = &local_38;
      if (local_20 != (undefined ***)0x0) {
        pppuVar4 = local_20;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// TraceDispatchedMessage @ 142d4f4f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceDispatchedMessage
          (FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1,
          TSharedRef<IMessageReceiver,1> *param_2,bool param_3)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  LARGE_INTEGER LVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageReceiver *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  TNode *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->Running != false) {
    QueryPerformanceCounter(local_88);
    LVar3.s = (_struct_19)param_1->Object;
    pTVar1 = &this->Traces;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    dVar7 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pIVar5 = param_2->Object;
    pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (code *)0x0;
    local_88[0].s = LVar3.s;
    local_50 = FMemory::Malloc(0x40,8);
    local_50[1] = (longlong)this;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceDispatchedMessage'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    ((LARGE_INTEGER *)(local_50 + 2))->s = (_struct_19)local_88[0];
    local_50[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_50[4] = (longlong)pIVar5;
    local_50[5] = (longlong)pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50[7] = (longlong)dVar7;
    *(bool *)(local_50 + 6) = param_3;
    if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceDispatchedMessage'::__l2::<lambda_1>,void>
                 ::Call;
    }
    pTVar8 = ::operator_new(0x40);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      *(code **)&pTVar8->Item = local_78;
      *(longlong **)&(pTVar8->Item).field_0x28 = local_50;
      local_50 = (longlong *)0x0;
      *(longlong *)&(pTVar8->Item).field_0x10 = local_68;
      *(undefined8 *)&(pTVar8->Item).field_0x18 = uStack_60;
      *(undefined8 *)&(pTVar8->Item).field_0x20 = local_58;
      if (*(longlong *)&pTVar8->Item != 0) {
        local_78 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar8;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar8;
      UNLOCK();
    }
    if (local_78 != (code *)0x0) {
      plVar9 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar9 = local_50;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// TraceHandledMessage @ 142d4f710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceHandledMessage
          (FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1,
          TSharedRef<IMessageReceiver,1> *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  IMessageContext *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageReceiver *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  TNode *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->Running != false) {
    QueryPerformanceCounter(local_88);
    pIVar3 = param_1->Object;
    pTVar1 = &this->Traces;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    dVar7 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pIVar5 = param_2->Object;
    pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (code *)0x0;
    local_50 = FMemory::Malloc(0x38,8);
    local_50[2] = (longlong)pIVar3;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceHandledMessage'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    local_50[1] = (longlong)this;
    local_50[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_50[4] = (longlong)pIVar5;
    local_50[5] = (longlong)pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50[6] = (longlong)dVar7;
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceHandledMessage'::__l2::<lambda_1>,void>::
                 Call;
    }
    pTVar8 = ::operator_new(0x40);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      *(code **)&pTVar8->Item = local_78;
      *(longlong **)&(pTVar8->Item).field_0x28 = local_50;
      local_50 = (longlong *)0x0;
      *(longlong *)&(pTVar8->Item).field_0x10 = local_68;
      *(undefined8 *)&(pTVar8->Item).field_0x18 = uStack_60;
      *(undefined8 *)&(pTVar8->Item).field_0x20 = local_58;
      if (*(longlong *)&pTVar8->Item != 0) {
        local_78 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar8;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar8;
      UNLOCK();
    }
    if (local_78 != (code *)0x0) {
      plVar9 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar9 = local_50;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// TraceInterceptedMessage @ 142d4f930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceInterceptedMessage
          (FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1,
          TSharedRef<IMessageInterceptor,1> *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  IMessageContext *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageInterceptor *pIVar5;
  TReferenceControllerBase<1> *pTVar6;
  double dVar7;
  TNode *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->Running != false) {
    QueryPerformanceCounter(local_88);
    pIVar3 = param_1->Object;
    pTVar1 = &this->Traces;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    dVar7 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar10 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar10 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    pIVar5 = param_2->Object;
    pTVar6 = (param_2->SharedReferenceCount).ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_78 = (code *)0x0;
    local_50 = FMemory::Malloc(0x38,8);
    local_50[2] = (longlong)pIVar3;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceInterceptedMessage'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_50[1] = (longlong)this;
    local_50[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar10 = (atomic<int>)((int)*paVar10 + 1);
      UNLOCK();
    }
    local_50[4] = (longlong)pIVar5;
    local_50[5] = (longlong)pTVar6;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar6->SharedReferenceCount = (atomic<int>)((int)pTVar6->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_50[6] = (longlong)dVar7;
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceInterceptedMessage'::__l2::<lambda_1>,void>
                 ::Call;
    }
    pTVar8 = ::operator_new(0x40);
    if (pTVar8 != (TNode *)0x0) {
      pTVar8->NextNode = (TNode *)0x0;
      *(code **)&pTVar8->Item = local_78;
      *(longlong **)&(pTVar8->Item).field_0x28 = local_50;
      local_50 = (longlong *)0x0;
      *(longlong *)&(pTVar8->Item).field_0x10 = local_68;
      *(undefined8 *)&(pTVar8->Item).field_0x18 = uStack_60;
      *(undefined8 *)&(pTVar8->Item).field_0x20 = local_58;
      if (*(longlong *)&pTVar8->Item != 0) {
        local_78 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar8;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar8;
      UNLOCK();
    }
    if (local_78 != (code *)0x0) {
      plVar9 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar9 = local_50;
      }
      (**(code **)(*plVar9 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar6);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// TraceRemovedInterceptor @ 142d4fb50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceRemovedInterceptor
          (FMessageTracer *this,TSharedRef<IMessageInterceptor,1> *param_1,
          FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  TReferenceControllerBase<1> *pTVar3;
  IMessageInterceptor *pIVar4;
  double dVar5;
  FName FVar6;
  FName FVar7;
  TNode *pTVar8;
  longlong *plVar9;
  atomic<int> *paVar10;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88 [2];
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(local_88);
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  pTVar1 = &this->Traces;
  pIVar4 = param_1->Object;
  dVar5 = (double)local_88[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (pTVar3 == (TReferenceControllerBase<1> *)0x0) {
    paVar10 = (atomic<int> *)&DAT_00000008;
  }
  else {
    paVar10 = &pTVar3->SharedReferenceCount;
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  FVar6 = param_2->PackageName;
  FVar7 = param_2->AssetName;
  local_78 = (code *)0x0;
  local_50 = FMemory::Malloc(0x38,8);
  local_50[1] = (longlong)this;
  local_50[2] = (longlong)pIVar4;
  *local_50 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMessageTracer::TraceRemovedInterceptor'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_50[3] = (longlong)pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    *paVar10 = (atomic<int>)((int)*paVar10 + 1);
    UNLOCK();
  }
  local_50[6] = (longlong)dVar5;
  *(FName *)(local_50 + 4) = FVar6;
  *(FName *)(local_50 + 5) = FVar7;
  if (local_50 != (longlong *)&DAT_fffffffffffffff8) {
    local_78 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceRemovedInterceptor'::__l2::<lambda_1>,void>
               ::Call;
  }
  pTVar8 = ::operator_new(0x40);
  if (pTVar8 != (TNode *)0x0) {
    pTVar8->NextNode = (TNode *)0x0;
    *(code **)&pTVar8->Item = local_78;
    *(longlong **)&(pTVar8->Item).field_0x28 = local_50;
    local_50 = (longlong *)0x0;
    *(longlong *)&(pTVar8->Item).field_0x10 = local_68;
    *(undefined8 *)&(pTVar8->Item).field_0x18 = uStack_60;
    *(undefined8 *)&(pTVar8->Item).field_0x20 = local_58;
    if (*(longlong *)&pTVar8->Item != 0) {
      local_78 = (code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar8;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar8;
    UNLOCK();
  }
  if (local_78 != (code *)0x0) {
    plVar9 = &local_68;
    if (local_50 != (longlong *)0x0) {
      plVar9 = local_50;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// TraceRemovedRecipient @ 142d4fd20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMessageTracer::TraceRemovedRecipient(FMessageTracer *this,FMessageAddress *param_1)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  double dVar3;
  TNode *pTVar4;
  longlong *plVar5;
  undefined1 auStack_a8 [32];
  LARGE_INTEGER local_88;
  FMessageTracer *local_80;
  longlong lStack_78;
  undefined8 uStack_70;
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  QueryPerformanceCounter(&local_88);
  lStack_78._0_4_ = (param_1->UniqueId).A;
  lStack_78._4_4_ = (param_1->UniqueId).B;
  uStack_70._0_4_ = (param_1->UniqueId).C;
  uStack_70._4_4_ = (param_1->UniqueId).D;
  local_58 = (code *)0x0;
  pTVar1 = &this->Traces;
  dVar3 = (double)local_88.QuadPart * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  local_80 = this;
  local_30 = FMemory::Malloc(0x28,8);
  *local_30 = (longlong)
              &UE::Core::Private::Function::
               TFunction_OwnedObject<`FMessageTracer::TraceRemovedRecipient'::`2'::<lambda_1>,0,1>::
               _vftable_;
  local_30[1] = (longlong)local_80;
  local_30[2] = lStack_78;
  *(undefined4 *)(local_30 + 3) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)local_30 + 0x1c) = uStack_70._4_4_;
  local_30[4] = (longlong)dVar3;
  if (local_30 + 1 != (longlong *)0x0) {
    local_58 = UE::Core::Private::Function::
               TFunctionRefCaller<`FMessageTracer::TraceRemovedRecipient'::__l2::<lambda_1>,void>::
               Call;
  }
  pTVar4 = ::operator_new(0x40);
  if (pTVar4 != (TNode *)0x0) {
    pTVar4->NextNode = (TNode *)0x0;
    *(code **)&pTVar4->Item = local_58;
    *(longlong **)&(pTVar4->Item).field_0x28 = local_30;
    local_30 = (longlong *)0x0;
    *(longlong *)&(pTVar4->Item).field_0x10 = local_48;
    *(undefined8 *)&(pTVar4->Item).field_0x18 = uStack_40;
    *(undefined8 *)&(pTVar4->Item).field_0x20 = local_38;
    if (*(longlong *)&pTVar4->Item != 0) {
      local_58 = (code *)0x0;
    }
    if (((ulonglong)pTVar1 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2 = pTVar1->Head;
    pTVar1->Head = pTVar4;
    UNLOCK();
    if (((ulonglong)pTVar2 & 7) != 0) {
      FWindowsPlatformAtomics::HandleAtomicsFailure
                (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
    }
    LOCK();
    pTVar2->NextNode = pTVar4;
    UNLOCK();
  }
  if (local_58 != (code *)0x0) {
    plVar5 = &local_48;
    if (local_30 != (longlong *)0x0) {
      plVar5 = local_30;
    }
    (**(code **)(*plVar5 + 0x10))();
  }
  return;
}

// TraceRemovedSubscription @ 142d4fec0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceRemovedSubscription
          (FMessageTracer *this,TSharedRef<IMessageSubscription,1> *param_1,
          FTopLevelAssetPath *param_2)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  IMessageSubscription *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  TNode *pTVar5;
  longlong *plVar6;
  atomic<int> *paVar7;
  undefined1 auStack_88 [32];
  LARGE_INTEGER local_68;
  FName FStack_60;
  code *local_58;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (this->Running != false) {
    QueryPerformanceCounter(&local_68);
    pIVar3 = param_1->Object;
    pTVar1 = &this->Traces;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar7 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar7 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    local_68._0_4_ = (param_2->PackageName).ComparisonIndex.Value;
    local_68._4_4_ = (param_2->PackageName).Number;
    FStack_60 = param_2->AssetName;
    local_58 = (code *)0x0;
    local_30 = FMemory::Malloc(0x30,8);
    local_30[2] = (longlong)pIVar3;
    *local_30 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceRemovedSubscription'::`2'::<lambda_1>,0,1>
                 ::_vftable_;
    local_30[1] = (longlong)this;
    local_30[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar7 = (atomic<int>)((int)*paVar7 + 1);
      UNLOCK();
    }
    ((LARGE_INTEGER *)(local_30 + 4))->s = (_struct_19)local_68;
    *(FName *)(local_30 + 5) = FStack_60;
    if (local_30 + 1 != (longlong *)0x0) {
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceRemovedSubscription'::__l2::<lambda_1>,void>
                 ::Call;
    }
    pTVar5 = ::operator_new(0x40);
    if (pTVar5 != (TNode *)0x0) {
      pTVar5->NextNode = (TNode *)0x0;
      *(code **)&pTVar5->Item = local_58;
      *(longlong **)&(pTVar5->Item).field_0x28 = local_30;
      local_30 = (longlong *)0x0;
      *(longlong *)&(pTVar5->Item).field_0x10 = local_48;
      *(undefined8 *)&(pTVar5->Item).field_0x18 = uStack_40;
      *(undefined8 *)&(pTVar5->Item).field_0x20 = local_38;
      if (*(longlong *)&pTVar5->Item != 0) {
        local_58 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar5;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar5;
      UNLOCK();
    }
    if (local_58 != (code *)0x0) {
      plVar6 = &local_48;
      if (local_30 != (longlong *)0x0) {
        plVar6 = local_30;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// TraceRoutedMessage @ 142d50080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceRoutedMessage(FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  int iVar3;
  TReferenceControllerBase<1> *pTVar4;
  IMessageContext *pIVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  char cVar9;
  TNode *pTVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  atomic<int> *paVar13;
  FScriptContainerElement *pFVar14;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  LARGE_INTEGER local_80;
  code *local_78;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_a8;
  if (this->Running != false) {
    bVar8 = FGenericPlatformProcess::SupportsMultithreading();
    if (bVar8) {
      if (this->Breaking == false) {
        iVar3 = (this->Breakpoints).ArrayNum;
        pFVar12 = (this->Breakpoints).AllocatorInstance.Data;
        pFVar14 = pFVar12 + (longlong)iVar3 * 0x10;
        do {
          if ((this->Breakpoints).ArrayNum != iVar3) {
            local_88[0] = 0;
            `TCheckedPointerIterator<TSharedPtr<IMessageTracerBreakpoint,1>_const_,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_88);
          }
          if (pFVar12 == pFVar14) goto LAB_142d501a0;
          if (*(longlong *)pFVar12 == 0) {
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L"");
            if (bVar8) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          cVar9 = (**(code **)**(undefined8 **)pFVar12)();
          if (cVar9 != '\0') {
            if (*(longlong *)pFVar12 == 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L"");
              if (bVar8) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            cVar9 = (**(code **)(**(longlong **)pFVar12 + 8))(*(longlong **)pFVar12,param_1);
            if (cVar9 != '\0') break;
          }
          pFVar12 = pFVar12 + 0x10;
        } while( true );
      }
      this->Breaking = true;
      (**(code **)(this->ContinueEvent->_padding_ + 0x20))(this->ContinueEvent,0xffffffff,0);
    }
LAB_142d501a0:
    QueryPerformanceCounter(&local_80);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    pTVar1 = &this->Traces;
    pIVar5 = param_1->Object;
    dVar7 = (double)local_80.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar13 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar13 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_78 = (code *)0x0;
    local_50 = FMemory::Malloc(0x28,8);
    local_50[2] = (longlong)pIVar5;
    *local_50 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceRoutedMessage'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    local_50[1] = (longlong)this;
    local_50[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar13 = (atomic<int>)((int)*paVar13 + 1);
      UNLOCK();
    }
    local_50[4] = (longlong)dVar7;
    if (local_50 + 1 != (longlong *)0x0) {
      local_78 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceRoutedMessage'::__l2::<lambda_1>,void>::
                 Call;
    }
    pTVar10 = ::operator_new(0x40);
    if (pTVar10 != (TNode *)0x0) {
      pTVar10->NextNode = (TNode *)0x0;
      *(code **)&pTVar10->Item = local_78;
      *(longlong **)&(pTVar10->Item).field_0x28 = local_50;
      local_50 = (longlong *)0x0;
      *(longlong *)&(pTVar10->Item).field_0x10 = local_68;
      *(undefined8 *)&(pTVar10->Item).field_0x18 = uStack_60;
      *(undefined8 *)&(pTVar10->Item).field_0x20 = local_58;
      if (*(longlong *)&pTVar10->Item != 0) {
        local_78 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar10;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar10;
      UNLOCK();
    }
    if (local_78 != (code *)0x0) {
      plVar11 = &local_68;
      if (local_50 != (longlong *)0x0) {
        plVar11 = local_50;
      }
      (**(code **)(*plVar11 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

// TraceSentMessage @ 142d50340

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FMessageTracer::TraceSentMessage(FMessageTracer *this,TSharedRef<IMessageContext,1> *param_1)

{
  TQueue<TFunction<void___cdecl(void)>,0> *pTVar1;
  TNode *pTVar2;
  IMessageContext *pIVar3;
  TReferenceControllerBase<1> *pTVar4;
  double dVar5;
  TNode *pTVar6;
  longlong *plVar7;
  atomic<int> *paVar8;
  undefined1 auStack_98 [32];
  LARGE_INTEGER local_78 [2];
  code *local_68;
  longlong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  if (this->Running != false) {
    QueryPerformanceCounter(local_78);
    pIVar3 = param_1->Object;
    pTVar1 = &this->Traces;
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    dVar5 = (double)local_78[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000;
    if (pTVar4 == (TReferenceControllerBase<1> *)0x0) {
      paVar8 = (atomic<int> *)&DAT_00000008;
    }
    else {
      paVar8 = &pTVar4->SharedReferenceCount;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    local_68 = (code *)0x0;
    local_40 = FMemory::Malloc(0x28,8);
    local_40[2] = (longlong)pIVar3;
    *local_40 = (longlong)
                &UE::Core::Private::Function::
                 TFunction_OwnedObject<`FMessageTracer::TraceSentMessage'::`2'::<lambda_1>,0,1>::
                 _vftable_;
    local_40[1] = (longlong)this;
    local_40[3] = (longlong)pTVar4;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + 1);
      UNLOCK();
    }
    local_40[4] = (longlong)dVar5;
    if (local_40 + 1 != (longlong *)0x0) {
      local_68 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FMessageTracer::TraceSentMessage'::__l2::<lambda_1>,void>::Call
      ;
    }
    pTVar6 = ::operator_new(0x40);
    if (pTVar6 != (TNode *)0x0) {
      pTVar6->NextNode = (TNode *)0x0;
      *(code **)&pTVar6->Item = local_68;
      *(longlong **)&(pTVar6->Item).field_0x28 = local_40;
      local_40 = (longlong *)0x0;
      *(longlong *)&(pTVar6->Item).field_0x10 = local_58;
      *(undefined8 *)&(pTVar6->Item).field_0x18 = uStack_50;
      *(undefined8 *)&(pTVar6->Item).field_0x20 = local_48;
      if (*(longlong *)&pTVar6->Item != 0) {
        local_68 = (code *)0x0;
      }
      if (((ulonglong)pTVar1 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2 = pTVar1->Head;
      pTVar1->Head = pTVar6;
      UNLOCK();
      if (((ulonglong)pTVar2 & 7) != 0) {
        FWindowsPlatformAtomics::HandleAtomicsFailure
                  (L"InterlockedExchangePointer requires Dest pointer to be aligned to %d bytes");
      }
      LOCK();
      pTVar2->NextNode = pTVar6;
      UNLOCK();
    }
    if (local_68 != (code *)0x0) {
      plVar7 = &local_58;
      if (local_40 != (longlong *)0x0) {
        plVar7 = local_40;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  }
  return;
}

