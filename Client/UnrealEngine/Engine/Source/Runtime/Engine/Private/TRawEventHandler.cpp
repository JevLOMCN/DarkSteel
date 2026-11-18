// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// GetHandler @ 148288e30

void * __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos>::GetHandler
          (TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos> *this)

{
  return this->Handler;
}

// GetHandler @ 148288e40

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos>::GetHandler
          (TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos> *this)

{
  return this->Handler;
}

// GetHandler @ 148288e50

void * __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos>::GetHandler
          (TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos> *this)

{
  return this->Handler;
}

// GetHandler @ 148288e60

void * __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos>::GetHandler
          (TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos> *this)

{
  return this->Handler;
}

// GetInterestedProxyOwners @ 148288fa0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos>::GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_ff98d2a6)0x0) {
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

// GetInterestedProxyOwners @ 148289020

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos>::GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_ff98d2a6)0x0) {
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

// GetInterestedProxyOwners @ 1482890a0

bool __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos>::GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_ff98d2a6)0x0) {
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

// GetInterestedProxyOwners @ 148289120

bool __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos>::GetInterestedProxyOwners
          (TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos> *this,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  void *local_18 [2];
  
  if (this->InterestedProxyOwnersFunction == (pmf_ff98d2a6)0x0) {
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

// HandleEvent @ 148291e00

void __thiscall
Chaos::TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos>::HandleEvent
          (TRawEventHandler<Chaos::FBreakingEventData,FPhysScene_Chaos> *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148291e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

// HandleEvent @ 148291e20

void __thiscall
Chaos::TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos>::HandleEvent
          (TRawEventHandler<Chaos::FCollisionEventData,FPhysScene_Chaos> *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148291e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

// HandleEvent @ 148291e40

void __thiscall
Chaos::TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos>::HandleEvent
          (TRawEventHandler<Chaos::FCrumblingEventData,FPhysScene_Chaos> *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148291e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

// HandleEvent @ 148291e60

void __thiscall
Chaos::TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos>::HandleEvent
          (TRawEventHandler<Chaos::FRemovalEventData,FPhysScene_Chaos> *this,void *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000148291e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)this->HandlerFunction)(this->Handler);
  return;
}

