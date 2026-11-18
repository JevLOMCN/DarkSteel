// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosNiagara
// Functions: 9

// GetHandler @ 14e99d000

void * __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction>::GetHandler
          (TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction> *this)

{
  return this->Handler;
}

// GetHandler @ 14e99d010

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction>::
GetHandler(TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction> *this)

{
  return this->Handler;
}

// GetHandler @ 14e99d020

void * __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction>::GetHandler
          (TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction> *this)

{
  return this->Handler;
}

// GetInterestedProxyOwners @ 14e99d030

bool __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_1392879c)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (*(code *)this->InterestedProxyOwnersFunction)(this->Handler,local_18);
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

// GetInterestedProxyOwners @ 14e99d0b0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_1392879c)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (*(code *)this->InterestedProxyOwnersFunction)(this->Handler,local_18);
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

// GetInterestedProxyOwners @ 14e99d130

bool __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction>::
GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_1392879c)0x0) {
    return false;
  }
  pTVar2 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)
           (*(code *)this->InterestedProxyOwnersFunction)(this->Handler,local_18);
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

// HandleEvent @ 14e9a04d0

void __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction>::
HandleEvent(TRawEventHandler<Chaos::FBreakingEventData,UNiagaraDataInterfaceChaosDestruction> *this,
           void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014e9a04d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

// HandleEvent @ 14e9a04f0

void __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction>::
HandleEvent(TRawEventHandler<Chaos::FCollisionEventData,UNiagaraDataInterfaceChaosDestruction> *this
           ,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014e9a04f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

// HandleEvent @ 14e9a0510

void __thiscall
Chaos::TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction>::
HandleEvent(TRawEventHandler<Chaos::FTrailingEventData,UNiagaraDataInterfaceChaosDestruction> *this,
           void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014e9a0518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

