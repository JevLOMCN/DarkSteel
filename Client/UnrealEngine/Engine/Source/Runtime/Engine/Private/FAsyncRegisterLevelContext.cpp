// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 11

// FAsyncRegisterLevelContext @ 14733f570

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FAsyncRegisterLevelContext * __thiscall
FAsyncRegisterLevelContext::FAsyncRegisterLevelContext
          (FAsyncRegisterLevelContext *this,ULevel *param_1)

{
  this->Level = param_1;
  (this->AsyncAddPrimitiveQueue).NextBatch.AllocatorInstance.Data =
       (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  (this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum = 0;
  (this->AsyncAddPrimitiveQueue).NextBatch.ArrayMax = 0;
  (this->AsyncAddPrimitiveQueue).AddPrimitivesArray.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncAddPrimitiveQueue).AddPrimitivesArray.ArrayNum = 0;
  (this->AsyncAddPrimitiveQueue).AddPrimitivesArray.ArrayMax = 0;
  (this->AsyncAddPrimitiveQueue).AsyncTask.Batches.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->AsyncAddPrimitiveQueue).AsyncTask.Batches.ArrayNum = 0;
  (this->AsyncAddPrimitiveQueue).AsyncTask.Batches.ArrayMax = 0;
  (this->AsyncAddPrimitiveQueue).AsyncTask.Task = (TTask<void>)0x0;
  (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.AllocatorInstance.Data =
       (TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr> *)0x0;
  (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum = 0;
  (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayMax = 0;
  (this->SendRenderDynamicDataPrimitivesQueue).SendRenderDynamicDataPrimitivesArray.
  AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SendRenderDynamicDataPrimitivesQueue).SendRenderDynamicDataPrimitivesArray.ArrayNum = 0;
  (this->SendRenderDynamicDataPrimitivesQueue).SendRenderDynamicDataPrimitivesArray.ArrayMax = 0;
  (this->AsyncAddPrimitiveQueue).Context = this;
  (this->SendRenderDynamicDataPrimitivesQueue).Context = this;
  this->bCanLaunchNewTasks = true;
  this->bIncrementalRegisterComponentsDone = false;
  return this;
}

// AddPrimitive @ 147345530

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
FAsyncRegisterLevelContext::AddPrimitive
          (FAsyncRegisterLevelContext *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res8;
  FWeakObjectPtr local_18 [2];
  
  if (this->bIncrementalRegisterComponentsDone != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIncrementalRegisterComponentsDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x3f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
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
  pFVar2 = &((this->AsyncAddPrimitiveQueue).NextBatch.AllocatorInstance.Data)->WeakPtr;
  if ((pFVar2 <= local_18) &&
     (local_18 < pFVar2 + (this->AsyncAddPrimitiveQueue).NextBatch.ArrayMax)) {
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
  iVar5 = (this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum;
  piVar1 = &(this->AsyncAddPrimitiveQueue).NextBatch.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>_>
                      (0x408,&(this->AsyncAddPrimitiveQueue).NextBatch.AllocatorInstance,piVar1);
  }
  (this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum = iVar5 + 1;
  (this->AsyncAddPrimitiveQueue).NextBatch.AllocatorInstance.Data[iVar5].WeakPtr = local_18[0];
  if (LevelStreaming::AsyncRegisterLevelContext::PrimitiveBatchSize <=
      (this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum) {
    FAsyncAddPrimitiveQueue::Flush(&this->AsyncAddPrimitiveQueue);
  }
  Tick(this);
  return;
}

// AddSendRenderDynamicData @ 147345d40

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
FAsyncRegisterLevelContext::AddSendRenderDynamicData
          (FAsyncRegisterLevelContext *this,UPrimitiveComponent *param_1)

{
  int *piVar1;
  FWeakObjectPtr *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPrimitiveComponent *local_res8;
  FWeakObjectPtr local_18 [2];
  
  if (this->bIncrementalRegisterComponentsDone != false) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIncrementalRegisterComponentsDone",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                       ,0x46,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (param_1 != (UPrimitiveComponent *)0x0)) {
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
  pFVar2 = &((this->SendRenderDynamicDataPrimitivesQueue).NextBatch.AllocatorInstance.Data)->WeakPtr
  ;
  if ((pFVar2 <= local_18) &&
     (local_18 < pFVar2 + (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayMax)) {
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
  iVar5 = (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum;
  piVar1 = &(this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<TWeakObjectPtr<UPrimitiveComponent,FWeakObjectPtr>_>_>
                      (0x408,&(this->SendRenderDynamicDataPrimitivesQueue).NextBatch.
                              AllocatorInstance,piVar1);
  }
  (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum = iVar5 + 1;
  (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.AllocatorInstance.Data[iVar5].WeakPtr =
       local_18[0];
  if (LevelStreaming::AsyncRegisterLevelContext::PrimitiveBatchSize <=
      (this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum) {
    FSendRenderDynamicDataPrimitivesQueue::Flush(&this->SendRenderDynamicDataPrimitivesQueue);
  }
  Tick(this);
  return;
}

// CreateInstance @ 1473496c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_> __cdecl
FAsyncRegisterLevelContext::CreateInstance(ULevel *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 in_RDX;
  
  if (LevelStreaming::AsyncRegisterLevelContext::bEnabled) {
    bVar1 = FApp::ShouldUseThreadingForPerformance();
    if (bVar1) {
      puVar2 = ::operator_new(0x78);
      if (puVar2 != (undefined8 *)0x0) {
        *puVar2 = in_RDX;
        puVar2[1] = puVar2;
        puVar2[2] = 0;
        puVar2[3] = 0;
        puVar2[4] = 0;
        puVar2[5] = 0;
        puVar2[6] = 0;
        puVar2[7] = 0;
        puVar2[8] = 0;
        puVar2[9] = puVar2;
        puVar2[10] = 0;
        puVar2[0xb] = 0;
        puVar2[0xc] = 0;
        puVar2[0xd] = 0;
        *(undefined2 *)(puVar2 + 0xe) = 1;
        param_1->_padding_ = (longlong)puVar2;
        return (TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_>)
               (FAsyncRegisterLevelContext *)param_1;
      }
      param_1->_padding_ = 0;
      return (TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_>)
             (FAsyncRegisterLevelContext *)param_1;
    }
  }
  param_1->_padding_ = 0;
  return (TUniquePtr<FAsyncRegisterLevelContext,TDefaultDelete<FAsyncRegisterLevelContext>_>)
         (FAsyncRegisterLevelContext *)param_1;
}

// Flush @ 14734d720

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAsyncRegisterLevelContext::Flush(FAsyncRegisterLevelContext *this)

{
  if (CpuChannel->Enabled < 0) {
    FAsyncAddPrimitiveQueue::Flush(&this->AsyncAddPrimitiveQueue);
    FSendRenderDynamicDataPrimitivesQueue::Flush(&this->SendRenderDynamicDataPrimitivesQueue);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId107,"FAsyncRegisterLevelContext::Flush",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
             ,0x6b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  FAsyncAddPrimitiveQueue::Flush(&this->AsyncAddPrimitiveQueue);
  FSendRenderDynamicDataPrimitivesQueue::Flush(&this->SendRenderDynamicDataPrimitivesQueue);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// HasRemainingWork @ 1473515e0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAsyncRegisterLevelContext::HasRemainingWork(FAsyncRegisterLevelContext *this)

{
  TTask<void> TVar1;
  
  TVar1 = (this->AsyncAddPrimitiveQueue).AsyncTask.Task;
  if ((((TVar1 == (TTask<void>)0x0) || (*(char *)((longlong)TVar1 + 0xd0) != '\0')) &&
      ((this->AsyncAddPrimitiveQueue).AddPrimitivesArray.ArrayNum == 0)) &&
     ((((this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum == 0 &&
       ((this->SendRenderDynamicDataPrimitivesQueue).SendRenderDynamicDataPrimitivesArray.ArrayNum
        == 0)) && ((this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum == 0)))) {
    return false;
  }
  return true;
}

// IsRunningAsync @ 147351890

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAsyncRegisterLevelContext::IsRunningAsync(FAsyncRegisterLevelContext *this)

{
  TTask<void> TVar1;
  
  TVar1 = (this->AsyncAddPrimitiveQueue).AsyncTask.Task;
  if ((TVar1 != (TTask<void>)0x0) && (*(char *)((longlong)TVar1 + 0xd0) == '\0')) {
    return true;
  }
  return false;
}

// SetCanLaunchNewTasks @ 1473570e0

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
FAsyncRegisterLevelContext::SetCanLaunchNewTasks(FAsyncRegisterLevelContext *this,bool param_1)

{
  this->bCanLaunchNewTasks = param_1;
  return;
}

// SetIncrementalRegisterComponentsDone @ 147357510

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
FAsyncRegisterLevelContext::SetIncrementalRegisterComponentsDone
          (FAsyncRegisterLevelContext *this,bool param_1)

{
  this->bIncrementalRegisterComponentsDone = param_1;
  if (!param_1) {
    return;
  }
  if (CpuChannel->Enabled < 0) {
    FAsyncAddPrimitiveQueue::Flush(&this->AsyncAddPrimitiveQueue);
    FSendRenderDynamicDataPrimitivesQueue::Flush(&this->SendRenderDynamicDataPrimitivesQueue);
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId107,"FAsyncRegisterLevelContext::Flush",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
             ,0x6b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId107);
  FAsyncAddPrimitiveQueue::Flush(&this->AsyncAddPrimitiveQueue);
  FSendRenderDynamicDataPrimitivesQueue::Flush(&this->SendRenderDynamicDataPrimitivesQueue);
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// Tick @ 147359c10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall FAsyncRegisterLevelContext::Tick(FAsyncRegisterLevelContext *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  
  if (((this->bIncrementalRegisterComponentsDone != false) &&
      ((this->AsyncAddPrimitiveQueue).NextBatch.ArrayNum != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIncrementalRegisterComponentsDone || AsyncAddPrimitiveQueue.NextBatch.IsEmpty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                         ,0x72,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  if (((this->bIncrementalRegisterComponentsDone != false) &&
      ((this->SendRenderDynamicDataPrimitivesQueue).NextBatch.ArrayNum != 0)) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIncrementalRegisterComponentsDone || SendRenderDynamicDataPrimitivesQueue.NextBatch.IsEmpty()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
                         ,0x73,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  bVar2 = -1 < CpuChannel->Enabled;
  if (bVar2) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId117,"FAsyncRegisterLevelContext::Tick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Internal\\Streaming\\AsyncRegisterLevelContext.cpp"
               ,0x75);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId117);
  }
  bVar4 = FAsyncAddPrimitiveQueue::Tick(&this->AsyncAddPrimitiveQueue);
  if (bVar4) {
    bVar4 = FSendRenderDynamicDataPrimitivesQueue::Tick(&this->SendRenderDynamicDataPrimitivesQueue)
    ;
  }
  else {
    bVar4 = false;
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar4;
}

// WaitForAsyncTasks @ 14735f290

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall FAsyncRegisterLevelContext::WaitForAsyncTasks(FAsyncRegisterLevelContext *this)

{
  FAsyncAddPrimitiveQueue::WaitForAsyncTask(&this->AsyncAddPrimitiveQueue);
  return;
}

