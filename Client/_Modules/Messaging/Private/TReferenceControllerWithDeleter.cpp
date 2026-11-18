// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Messaging
// Functions: 8

// DestroyObject @ 142d440e0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerAddressInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerAddressInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerAddressInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerAddressInfo>,1>
                *this)

{
  ::operator_delete(this->Object,0x20);
  return;
}

// DestroyObject @ 142d44100

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerDispatchState,SharedPointerInternals::DefaultDeleter<FMessageTracerDispatchState>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerDispatchState,SharedPointerInternals::DefaultDeleter<FMessageTracerDispatchState>,1>
                *this)

{
  FMessageTracerDispatchState *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageTracerDispatchState *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->EndpointInfo).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x38);
    return;
  }
  return;
}

// DestroyObject @ 142d44140

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerEndpointInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerEndpointInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerEndpointInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerEndpointInfo>,1>
                *this)

{
  FMessageTracerEndpointInfo *this_00;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this_00 = this->Object;
  if (this_00 != (FMessageTracerEndpointInfo *)0x0) {
    DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
              ((TSharedPtr<FMessageTracerMessageInfo,1> *)
               (this_00->SentMessages).AllocatorInstance.Data,(this_00->SentMessages).ArrayNum);
    pFVar1 = (this_00->SentMessages).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
              ((TSharedPtr<FMessageTracerMessageInfo,1> *)
               (this_00->ReceivedMessages).AllocatorInstance.Data,
               (this_00->ReceivedMessages).ArrayNum);
    pFVar1 = (this_00->ReceivedMessages).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    *(undefined4 *)&(this_00->AddressInfos).field_0x48 = 0;
    pvVar2 = *(void **)&(this_00->AddressInfos).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FMessageAddress,TSharedPtr<FMessageTracerAddressInfo,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)this_00);
    ::operator_delete(this_00,0x80);
    return;
  }
  return;
}

// DestroyObject @ 142d441c0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerInterceptorInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerInterceptorInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerInterceptorInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerInterceptorInfo>,1>
                *this)

{
  FMessageTracerInterceptorInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageTracerInterceptorInfo *)0x0) {
    DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
              ((TSharedPtr<FMessageTracerMessageInfo,1> *)
               (pFVar1->InterceptedMessages).AllocatorInstance.Data,
               (pFVar1->InterceptedMessages).ArrayNum);
    pFVar2 = (pFVar1->InterceptedMessages).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 142d44210

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerMessageInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerMessageInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerMessageInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerMessageInfo>,1>
                *this)

{
  FMessageTracerMessageInfo *pFVar1;
  void *pvVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageTracerMessageInfo *)0x0) {
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->TypeInfo).SharedReferenceCount.ReferenceController);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->SenderInfo).SharedReferenceCount.ReferenceController);
    *(undefined4 *)&(pFVar1->DispatchStates).field_0x48 = 0;
    pvVar2 = *(void **)&(pFVar1->DispatchStates).field_0x40;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<TSharedPtr<FMessageTracerEndpointInfo,1>,TSharedPtr<FMessageTracerDispatchState,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->DispatchStates);
    TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar1->Context).SharedReferenceCount.ReferenceController);
    ::operator_delete(pFVar1,0x98);
  }
  return;
}

// DestroyObject @ 142d44280

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageTracerTypeInfo,SharedPointerInternals::DefaultDeleter<FMessageTracerTypeInfo>,1>
                *this)

{
  FMessageTracerTypeInfo *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageTracerTypeInfo *)0x0) {
    DestructItems<TSharedPtr<FMessageTracerMessageInfo,1>,int>
              ((TSharedPtr<FMessageTracerMessageInfo,1> *)(pFVar1->Messages).AllocatorInstance.Data,
               (pFVar1->Messages).ArrayNum);
    pFVar2 = (pFVar1->Messages).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0x28);
    return;
  }
  return;
}

// DestroyObject @ 142d442d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageContext,SharedPointerInternals::DefaultDeleter<FMessageContext>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageContext,SharedPointerInternals::DefaultDeleter<FMessageContext>,1>
                *this)

{
  FMessageContext *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageContext *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d442e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x70))(pFVar1,1);
    return;
  }
  return;
}

// DestroyObject @ 142d442f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FMessageSubscription,SharedPointerInternals::DefaultDeleter<FMessageSubscription>,1>
::DestroyObject(TReferenceControllerWithDeleter<FMessageSubscription,SharedPointerInternals::DefaultDeleter<FMessageSubscription>,1>
                *this)

{
  FMessageSubscription *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FMessageSubscription *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000142d44301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
    return;
  }
  return;
}

