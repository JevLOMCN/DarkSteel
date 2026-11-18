// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 9

// GetHandler @ 14daf7fb0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetHandler(TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter> *this)

{
  return this->Handler;
}

// GetHandler @ 14daf7fc0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetHandler(TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter> *this
          )

{
  return this->Handler;
}

// GetHandler @ 14daf7fd0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetHandler(TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter> *this)

{
  return this->Handler;
}

// GetInterestedProxyOwners @ 14daf7fe0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (*(code **)&this->InterestedProxyOwnersFunction == (code *)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (**(code **)&this->InterestedProxyOwnersFunction)
                     ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
                      (longlong)*(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
  if (param_1 != pTVar2) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar2->ArrayNum;
    param_1->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// GetInterestedProxyOwners @ 14daf8070

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter> *this
          ,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (*(code **)&this->InterestedProxyOwnersFunction == (code *)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (**(code **)&this->InterestedProxyOwnersFunction)
                     ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
                      (longlong)*(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
  if (param_1 != pTVar2) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar2->ArrayNum;
    param_1->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// GetInterestedProxyOwners @ 14daf8100

bool __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (*(code **)&this->InterestedProxyOwnersFunction == (code *)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (**(code **)&this->InterestedProxyOwnersFunction)
                     ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
                      (longlong)*(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
  if (param_1 != pTVar2) {
    pFVar1 = (param_1->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (param_1->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
    (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    param_1->ArrayNum = pTVar2->ArrayNum;
    param_1->ArrayMax = pTVar2->ArrayMax;
    pTVar2->ArrayNum = 0;
    pTVar2->ArrayMax = 0;
  }
  if (local_18[0] != (void *)0x0) {
    FMemory::Free(local_18[0]);
  }
  return true;
}

// HandleEvent @ 14daf91f0

void __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter>::
HandleEvent(TRawEventHandler<Chaos::FBreakingEventData,Chaos::FGeometryCollectionCacheAdapter> *this
           ,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014daf91ff. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 14daf9210

void __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter>::
HandleEvent(TRawEventHandler<Chaos::FCollisionEventData,Chaos::FGeometryCollectionCacheAdapter>
            *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014daf921f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 14daf9230

void __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter>::
HandleEvent(TRawEventHandler<Chaos::FTrailingEventData,Chaos::FGeometryCollectionCacheAdapter> *this
           ,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014daf923f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)(&(this->Handler->SolversListenedToForEvents).Hash + -5) +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

