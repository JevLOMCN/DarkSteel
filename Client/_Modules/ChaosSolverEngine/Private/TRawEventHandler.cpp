// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosSolverEngine
// Functions: 12

// GetHandler @ 1463123f0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher>::GetHandler
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher> *this)

{
  return this->Handler;
}

// GetHandler @ 146312400

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher>::GetHandler
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher> *this)

{
  return this->Handler;
}

// GetHandler @ 146312410

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher>::GetHandler
          (TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher> *this)

{
  return this->Handler;
}

// GetHandler @ 146312420

void * __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher>::GetHandler
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher> *this)

{
  return this->Handler;
}

// GetInterestedProxyOwners @ 146312430

bool __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher> *this,
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
                     ((longlong)&this->Handler->_padding_ +
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

// GetInterestedProxyOwners @ 1463124c0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher> *this,
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
                     ((longlong)&this->Handler->_padding_ +
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

// GetInterestedProxyOwners @ 146312550

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher> *this,
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
                     ((longlong)&this->Handler->_padding_ +
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

// GetInterestedProxyOwners @ 1463125e0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher> *this,
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
                     ((longlong)&this->Handler->_padding_ +
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

// HandleEvent @ 146315c60

void __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher>::HandleEvent
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosGameplayEventDispatcher> *this,
          void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146315c6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)&this->Handler->_padding_ +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 146315c80

void __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher>::HandleEvent
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosGameplayEventDispatcher> *this,
          void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146315c8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)&this->Handler->_padding_ +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 146315ca0

void __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher>::HandleEvent
          (TRawEventHandler<Chaos::FCrumblingEventData,UChaosGameplayEventDispatcher> *this,
          void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146315caf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)&this->Handler->_padding_ +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 146315cc0

void __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher>::HandleEvent
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosGameplayEventDispatcher> *this,
          void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000146315ccf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            ((longlong)&this->Handler->_padding_ +
             (longlong)*(int *)&(this->HandlerFunction).field_0x8);
  return;
}

