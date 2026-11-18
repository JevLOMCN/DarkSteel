// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCollectionEngine
// Functions: 12

// GetHandler @ 146375280

void * __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener>::GetHandler
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener> *this)

{
  return this->Handler;
}

// GetHandler @ 146375290

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener>::GetHandler
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener> *this)

{
  return this->Handler;
}

// GetHandler @ 1463752a0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener>::GetHandler
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener> *this)

{
  return this->Handler;
}

// GetHandler @ 1463752b0

void * __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener>::GetHandler
          (TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener> *this)

{
  return this->Handler;
}

// GetInterestedProxyOwners @ 146376d00

bool __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener> *this,
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
                     (&this->Handler->field_0x0 +
                      *(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
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

// GetInterestedProxyOwners @ 146376d90

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener> *this,
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
                     (&this->Handler->field_0x0 +
                      *(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
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

// GetInterestedProxyOwners @ 146376e20

bool __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener> *this,
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
                     (&this->Handler->field_0x0 +
                      *(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
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

// GetInterestedProxyOwners @ 146376eb0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener> *this,
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
                     (&this->Handler->field_0x0 +
                      *(int *)&(this->InterestedProxyOwnersFunction).field_0x8,local_18);
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

// HandleEvent @ 14637dd60

void __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener>::HandleEvent
          (TRawEventHandler<Chaos::FBreakingEventData,UChaosDestructionListener> *this,void *param_1
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014637dd6f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            (&this->Handler->field_0x0 + *(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 14637dd80

void __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener>::HandleEvent
          (TRawEventHandler<Chaos::FCollisionEventData,UChaosDestructionListener> *this,
          void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014637dd8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            (&this->Handler->field_0x0 + *(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 14637dda0

void __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener>::HandleEvent
          (TRawEventHandler<Chaos::FRemovalEventData,UChaosDestructionListener> *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014637ddaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            (&this->Handler->field_0x0 + *(int *)&(this->HandlerFunction).field_0x8);
  return;
}

// HandleEvent @ 14637ddc0

void __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener>::HandleEvent
          (TRawEventHandler<Chaos::FTrailingEventData,UChaosDestructionListener> *this,void *param_1
          )

{
                    /* WARNING: Could not recover jumptable at 0x00014637ddcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)&this->HandlerFunction)
            (&this->Handler->field_0x0 + *(int *)&(this->HandlerFunction).field_0x8);
  return;
}

