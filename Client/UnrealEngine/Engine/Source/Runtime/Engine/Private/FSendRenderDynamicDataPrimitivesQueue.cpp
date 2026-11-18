// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FSendRenderDynamicDataPrimitivesQueue @ 14733fc90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FSendRenderDynamicDataPrimitivesQueue * __thiscall
FSendRenderDynamicDataPrimitivesQueue::FSendRenderDynamicDataPrimitivesQueue
          (FSendRenderDynamicDataPrimitivesQueue *this,FAsyncRegisterLevelContext *param_1)

{
  this->Context = param_1;
  (this->NextBatch).AllocatorInstance.Data =
       (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  (this->NextBatch).ArrayNum = 0;
  (this->NextBatch).ArrayMax = 0;
  (this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SendRenderDynamicDataPrimitivesArray).ArrayNum = 0;
  (this->SendRenderDynamicDataPrimitivesArray).ArrayMax = 0;
  return this;
}

// ~FSendRenderDynamicDataPrimitivesQueue @ 147341da0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSendRenderDynamicDataPrimitivesQueue::~FSendRenderDynamicDataPrimitivesQueue
          (FSendRenderDynamicDataPrimitivesQueue *this)

{
  FScriptContainerElement *pFVar1;
  TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *pTVar2;
  code *pcVar3;
  bool bVar4;
  
  if (((this->SendRenderDynamicDataPrimitivesArray).ArrayNum != 0) ||
     ((this->NextBatch).ArrayNum != 0)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasRemainingWork()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x177,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  DestructItems<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,int>
            ((TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
              *)(this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data,
             (this->SendRenderDynamicDataPrimitivesArray).ArrayNum);
  pFVar1 = (this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar2 = (this->NextBatch).AllocatorInstance.Data;
  if (pTVar2 != (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(pTVar2);
    return;
  }
  return;
}

// AddSendRenderDynamicData @ 147345eb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSendRenderDynamicDataPrimitivesQueue::AddSendRenderDynamicData
          (FSendRenderDynamicDataPrimitivesQueue *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res8;
  FWeakObjectPtr local_18 [2];
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_18[0].ObjectIndex = 0;
  local_18[0].ObjectSerialNumber = 0;
  local_res8 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
  pFVar2 = &((this->NextBatch).AllocatorInstance.Data)->WeakPtr;
  if ((pFVar2 <= local_18) && (local_18 < pFVar2 + (this->NextBatch).ArrayMax)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->NextBatch).ArrayNum;
  piVar1 = &(this->NextBatch).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>_>
                      (0x408,&(this->NextBatch).AllocatorInstance,piVar1);
  }
  (this->NextBatch).ArrayNum = iVar5 + 1;
  (this->NextBatch).AllocatorInstance.Data[iVar5].WeakPtr = local_18[0];
  if (LevelStreaming::AsyncRegisterLevelContext::PrimitiveBatchSize <= (this->NextBatch).ArrayNum) {
    Flush(this);
  }
  return;
}

// Flush @ 14734d7a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSendRenderDynamicDataPrimitivesQueue::Flush(FSendRenderDynamicDataPrimitivesQueue *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  if ((this->NextBatch).ArrayNum != 0) {
    iVar2 = (this->SendRenderDynamicDataPrimitivesArray).ArrayNum;
    piVar1 = &(this->SendRenderDynamicDataPrimitivesArray).ArrayMax;
    if (iVar2 == *piVar1) {
      iVar2 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance,
                         piVar1);
    }
    (this->SendRenderDynamicDataPrimitivesArray).ArrayNum = iVar2 + 1;
    pFVar3 = (this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data +
             (longlong)iVar2 * 0x10;
    *(undefined8 *)pFVar3 = 0;
    *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)pFVar3 =
         (this->NextBatch).AllocatorInstance.Data;
    (this->NextBatch).AllocatorInstance.Data =
         (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
    *(int *)(pFVar3 + 8) = (this->NextBatch).ArrayNum;
    *(int *)(pFVar3 + 0xc) = (this->NextBatch).ArrayMax;
    (this->NextBatch).ArrayNum = 0;
    (this->NextBatch).ArrayMax = 0;
  }
  return;
}

// HasRemainingWork @ 147351620

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
FSendRenderDynamicDataPrimitivesQueue::HasRemainingWork(FSendRenderDynamicDataPrimitivesQueue *this)

{
  if (((this->SendRenderDynamicDataPrimitivesArray).ArrayNum == 0) &&
     ((this->NextBatch).ArrayNum == 0)) {
    return false;
  }
  return true;
}

// Push @ 1473531f0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSendRenderDynamicDataPrimitivesQueue::Push
          (FSendRenderDynamicDataPrimitivesQueue *this,
          TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>
          *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  if (param_1->ArrayNum == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InSendRenderDynamicDataPrimitives.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,399,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = (this->SendRenderDynamicDataPrimitivesArray).ArrayNum;
  piVar1 = &(this->SendRenderDynamicDataPrimitivesArray).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance,piVar1)
    ;
  }
  (this->SendRenderDynamicDataPrimitivesArray).ArrayNum = iVar4 + 1;
  pFVar5 = (this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data +
           (longlong)iVar4 * 0x10;
  *(undefined8 *)pFVar5 = 0;
  *(TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> **)pFVar5 = (param_1->AllocatorInstance).Data
  ;
  (param_1->AllocatorInstance).Data = (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  *(int *)(pFVar5 + 8) = param_1->ArrayNum;
  *(int *)(pFVar5 + 0xc) = param_1->ArrayMax;
  param_1->ArrayNum = 0;
  param_1->ArrayMax = 0;
  return;
}

// Tick @ 147359d00

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
FSendRenderDynamicDataPrimitivesQueue::Tick(FSendRenderDynamicDataPrimitivesQueue *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FWeakObjectPtr *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  UObject *pUVar8;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  FWeakObjectPtr *this_02;
  int *piVar9;
  
  iVar1 = (this->SendRenderDynamicDataPrimitivesArray).ArrayNum;
  if (iVar1 == 0) {
    return (this->NextBatch).ArrayNum == 0;
  }
  if (iVar1 < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      uVar7 = (*pcVar5)();
      return (bool)uVar7;
    }
  }
  pFVar2 = (this->SendRenderDynamicDataPrimitivesArray).AllocatorInstance.Data;
  pFVar3 = *(FWeakObjectPtr **)pFVar2;
  *(longlong *)pFVar2 = 0;
  iVar1 = *(int *)(pFVar2 + 8);
  *(longlong *)(pFVar2 + 8) = 0;
  TArray<TArray<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->SendRenderDynamicDataPrimitivesArray,0,No);
  for (this_02 = pFVar3; this_02 != pFVar3 + iVar1; this_02 = this_02 + 1) {
    bVar6 = FWeakObjectPtr::IsValid(this_02);
    if (bVar6) {
      pUVar8 = FWeakObjectPtr::Get(this_02);
      (**(code **)(*(longlong *)pUVar8 + 0x398))(pUVar8);
    }
  }
  if (pFVar3 != (FWeakObjectPtr *)0x0) {
    pFVar3 = pFVar3 + -1;
    MemoryTrace_Free((ulong64)pFVar3,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar3,FMalloc,true);
    }
    piVar9 = (int *)((longlong)pFVar3 - (ulonglong)(uint)pFVar3->ObjectIndex);
    LOCK();
    iVar1 = *piVar9;
    *piVar9 = *piVar9 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar4 = *(longlong *)(piVar9 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar9,0,0);
      if (lVar4 - (longlong)piVar9 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar9);
        return false;
      }
      (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar9);
    }
  }
  return false;
}

