// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 69

// <lambda_1> @ 145c84470

<lambda_1> * __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::
__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->DeleteArray).ArrayNum;
  _Src = (param_1->DeleteArray).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// <lambda_1> @ 145c84500

<lambda_1> * __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->DeleteArray).ArrayNum;
  _Src = (param_1->DeleteArray).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// <lambda_1> @ 145c84590

<lambda_1> * __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(void *this,<lambda_1> *param_1)

{
  int iVar1;
  FScriptContainerElement *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = (param_1->DeleteArray).ArrayNum;
  _Src = (param_1->DeleteArray).AllocatorInstance.Data;
  *(int *)((longlong)this + 8) = iVar1;
  if (iVar1 == 0) {
    *(int *)((longlong)this + 0xc) = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,iVar1,0,this,iVar1,(int *)((longlong)this + 0xc));
  memcpy(*(void **)this,_Src,(longlong)iVar1 << 3);
  return this;
}

// TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> @ 145c85230

TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> * __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  DWORD DVar1;
  
  (this->Uncompleted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Uncompleted).ArrayNum = 0;
  (this->Uncompleted).ArrayMax = 0;
  (this->Completed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Completed).ArrayNum = 0;
  (this->Completed).ArrayMax = 0;
  DVar1 = TlsAlloc();
  *(undefined8 *)&this->NewRenderThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x20 = 0;
  this->TLSSlot = DVar1;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)&this->NewRHIThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x20 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)this->Maps = 0;
  *(undefined8 *)&this->Maps[0].field_0x8 = 0;
  *(undefined8 *)&this->Maps[0].field_0x20 = 0;
  *(undefined4 *)&this->Maps[0].field_0x28 = 0;
  *(undefined4 *)&this->Maps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[0].field_0x34 = 0;
  *(undefined8 *)&this->Maps[0].field_0x40 = 0;
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 1) = 0;
  *(undefined8 *)&this->Maps[1].field_0x8 = 0;
  *(undefined8 *)&this->Maps[1].field_0x20 = 0;
  *(undefined4 *)&this->Maps[1].field_0x28 = 0;
  *(undefined4 *)&this->Maps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[1].field_0x34 = 0;
  *(undefined8 *)&this->Maps[1].field_0x40 = 0;
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 2) = 0;
  *(undefined8 *)&this->Maps[2].field_0x8 = 0;
  *(undefined8 *)&this->Maps[2].field_0x20 = 0;
  *(undefined4 *)&this->Maps[2].field_0x28 = 0;
  *(undefined4 *)&this->Maps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[2].field_0x34 = 0;
  *(undefined8 *)&this->Maps[2].field_0x40 = 0;
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 3) = 0;
  *(undefined8 *)&this->Maps[3].field_0x8 = 0;
  *(undefined8 *)&this->Maps[3].field_0x20 = 0;
  *(undefined4 *)&this->Maps[3].field_0x28 = 0;
  *(undefined4 *)&this->Maps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[3].field_0x34 = 0;
  *(undefined8 *)&this->Maps[3].field_0x40 = 0;
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  this->BackfillMap = this->Maps + 1;
  this->CurrentMap_RenderThread = this->Maps + 2;
  this->CurrentMap = this->Maps;
  this->BackfillMap_RenderThread = this->Maps + 3;
  (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeleteArray).ArrayNum = 0;
  (this->DeleteArray).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllThreadsLock,4000);
  (this->AllThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllThreadsPipelineStateCache).ArrayNum = 0;
  (this->AllThreadsPipelineStateCache).ArrayMax = 0;
  (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThreadsPipelineStateCache).ArrayNum = 0;
  (this->RenderThreadsPipelineStateCache).ArrayMax = 0;
  (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIThreadsPipelineStateCache).ArrayNum = 0;
  (this->RHIThreadsPipelineStateCache).ArrayMax = 0;
  this->bIsInterrupt = false;
  (this->InterruptLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bPendingDiscardAndSwap = false;
  this->bDiscardAndSwap = false;
  (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
  this->ReleasedEntries = 0;
  this->DuplicateStateGenerated = 0;
  return this;
}

// TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> @ 145c85460

TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> * __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  DWORD DVar1;
  
  (this->Uncompleted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Uncompleted).ArrayNum = 0;
  (this->Uncompleted).ArrayMax = 0;
  (this->Completed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Completed).ArrayNum = 0;
  (this->Completed).ArrayMax = 0;
  DVar1 = TlsAlloc();
  *(undefined8 *)&this->NewRenderThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x20 = 0;
  this->TLSSlot = DVar1;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)&this->NewRHIThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x20 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)this->Maps = 0;
  *(undefined8 *)&this->Maps[0].field_0x8 = 0;
  *(undefined8 *)&this->Maps[0].field_0x20 = 0;
  *(undefined4 *)&this->Maps[0].field_0x28 = 0;
  *(undefined4 *)&this->Maps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[0].field_0x34 = 0;
  *(undefined8 *)&this->Maps[0].field_0x40 = 0;
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 1) = 0;
  *(undefined8 *)&this->Maps[1].field_0x8 = 0;
  *(undefined8 *)&this->Maps[1].field_0x20 = 0;
  *(undefined4 *)&this->Maps[1].field_0x28 = 0;
  *(undefined4 *)&this->Maps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[1].field_0x34 = 0;
  *(undefined8 *)&this->Maps[1].field_0x40 = 0;
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 2) = 0;
  *(undefined8 *)&this->Maps[2].field_0x8 = 0;
  *(undefined8 *)&this->Maps[2].field_0x20 = 0;
  *(undefined4 *)&this->Maps[2].field_0x28 = 0;
  *(undefined4 *)&this->Maps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[2].field_0x34 = 0;
  *(undefined8 *)&this->Maps[2].field_0x40 = 0;
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 3) = 0;
  *(undefined8 *)&this->Maps[3].field_0x8 = 0;
  *(undefined8 *)&this->Maps[3].field_0x20 = 0;
  *(undefined4 *)&this->Maps[3].field_0x28 = 0;
  *(undefined4 *)&this->Maps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[3].field_0x34 = 0;
  *(undefined8 *)&this->Maps[3].field_0x40 = 0;
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  this->BackfillMap = this->Maps + 1;
  this->CurrentMap_RenderThread = this->Maps + 2;
  this->CurrentMap = this->Maps;
  this->BackfillMap_RenderThread = this->Maps + 3;
  (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeleteArray).ArrayNum = 0;
  (this->DeleteArray).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllThreadsLock,4000);
  (this->AllThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllThreadsPipelineStateCache).ArrayNum = 0;
  (this->AllThreadsPipelineStateCache).ArrayMax = 0;
  (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThreadsPipelineStateCache).ArrayNum = 0;
  (this->RenderThreadsPipelineStateCache).ArrayMax = 0;
  (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIThreadsPipelineStateCache).ArrayNum = 0;
  (this->RHIThreadsPipelineStateCache).ArrayMax = 0;
  this->bIsInterrupt = false;
  (this->InterruptLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bPendingDiscardAndSwap = false;
  this->bDiscardAndSwap = false;
  (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
  this->ReleasedEntries = 0;
  this->DuplicateStateGenerated = 0;
  return this;
}

// TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> @ 145c85690

TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> * __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  DWORD DVar1;
  
  (this->Uncompleted).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Uncompleted).ArrayNum = 0;
  (this->Uncompleted).ArrayMax = 0;
  (this->Completed).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Completed).ArrayNum = 0;
  (this->Completed).ArrayMax = 0;
  DVar1 = TlsAlloc();
  *(undefined8 *)&this->NewRenderThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x20 = 0;
  this->TLSSlot = DVar1;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRenderThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)&this->NewRHIThreadPipelineStates = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x8 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x20 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x28 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x2c = 0x80;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x34 = 0;
  *(undefined8 *)&(this->NewRHIThreadPipelineStates).field_0x40 = 0;
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  *(undefined8 *)this->Maps = 0;
  *(undefined8 *)&this->Maps[0].field_0x8 = 0;
  *(undefined8 *)&this->Maps[0].field_0x20 = 0;
  *(undefined4 *)&this->Maps[0].field_0x28 = 0;
  *(undefined4 *)&this->Maps[0].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[0].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[0].field_0x34 = 0;
  *(undefined8 *)&this->Maps[0].field_0x40 = 0;
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 1) = 0;
  *(undefined8 *)&this->Maps[1].field_0x8 = 0;
  *(undefined8 *)&this->Maps[1].field_0x20 = 0;
  *(undefined4 *)&this->Maps[1].field_0x28 = 0;
  *(undefined4 *)&this->Maps[1].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[1].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[1].field_0x34 = 0;
  *(undefined8 *)&this->Maps[1].field_0x40 = 0;
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 2) = 0;
  *(undefined8 *)&this->Maps[2].field_0x8 = 0;
  *(undefined8 *)&this->Maps[2].field_0x20 = 0;
  *(undefined4 *)&this->Maps[2].field_0x28 = 0;
  *(undefined4 *)&this->Maps[2].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[2].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[2].field_0x34 = 0;
  *(undefined8 *)&this->Maps[2].field_0x40 = 0;
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  *(undefined8 *)(this->Maps + 3) = 0;
  *(undefined8 *)&this->Maps[3].field_0x8 = 0;
  *(undefined8 *)&this->Maps[3].field_0x20 = 0;
  *(undefined4 *)&this->Maps[3].field_0x28 = 0;
  *(undefined4 *)&this->Maps[3].field_0x2c = 0x80;
  *(undefined4 *)&this->Maps[3].field_0x30 = 0xffffffff;
  *(undefined4 *)&this->Maps[3].field_0x34 = 0;
  *(undefined8 *)&this->Maps[3].field_0x40 = 0;
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  this->BackfillMap = this->Maps + 1;
  this->CurrentMap_RenderThread = this->Maps + 2;
  this->CurrentMap = this->Maps;
  this->BackfillMap_RenderThread = this->Maps + 3;
  (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeleteArray).ArrayNum = 0;
  (this->DeleteArray).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AllThreadsLock,4000);
  (this->AllThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllThreadsPipelineStateCache).ArrayNum = 0;
  (this->AllThreadsPipelineStateCache).ArrayMax = 0;
  (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RenderThreadsPipelineStateCache).ArrayNum = 0;
  (this->RenderThreadsPipelineStateCache).ArrayMax = 0;
  (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RHIThreadsPipelineStateCache).ArrayNum = 0;
  (this->RHIThreadsPipelineStateCache).ArrayMax = 0;
  this->bIsInterrupt = false;
  (this->InterruptLock).Mutex.Mutex.Ptr = (void *)0x0;
  this->bPendingDiscardAndSwap = false;
  this->bDiscardAndSwap = false;
  (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
  this->ReleasedEntries = 0;
  this->DuplicateStateGenerated = 0;
  return this;
}

// ~TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> @ 145c89b30

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
~TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  }
  pFVar4 = (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllThreadsLock);
  pFVar4 = (this->DeleteArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[3].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 3));
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[2].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 2));
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[1].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 1));
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[0].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->Maps);
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRHIThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRHIThreadPipelineStates);
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRenderThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRenderThreadPipelineStates);
  pFVar4 = (this->Completed).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Uncompleted).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ~TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> @ 145c89d00

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
~TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  }
  pFVar4 = (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllThreadsLock);
  pFVar4 = (this->DeleteArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[3].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 3));
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[2].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 2));
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[1].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 1));
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[0].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->Maps);
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRHIThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRHIThreadPipelineStates);
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRenderThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRenderThreadPipelineStates);
  pFVar4 = (this->Completed).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->Uncompleted).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// ~TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> @ 145c89ed0

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
~TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  code *pcVar6;
  BOOLEAN BVar7;
  bool bVar8;
  
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  BVar7 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  if (BVar7 == '\0') {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->InterruptLock);
  }
  pFVar4 = (this->RHIThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->RenderThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AllThreadsLock);
  pFVar4 = (this->DeleteArray).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&this->Maps[3].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[3].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 3));
  *(undefined4 *)&this->Maps[2].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[2].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 2));
  *(undefined4 *)&this->Maps[1].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[1].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(this->Maps + 1));
  *(undefined4 *)&this->Maps[0].field_0x48 = 0;
  pvVar5 = *(void **)&this->Maps[0].field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this->Maps);
  *(undefined4 *)&(this->NewRHIThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRHIThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRHIThreadPipelineStates);
  *(undefined4 *)&(this->NewRenderThreadPipelineStates).field_0x48 = 0;
  pvVar5 = *(void **)&(this->NewRenderThreadPipelineStates).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->NewRenderThreadPipelineStates);
  DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int>
            ((TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *)
             (this->Completed).AllocatorInstance.Data,(this->Completed).ArrayNum);
  pFVar4 = (this->Completed).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int>
            ((TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *)
             (this->Uncompleted).AllocatorInstance.Data,(this->Uncompleted).ArrayNum);
  pFVar4 = (this->Uncompleted).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 145c8cc60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::
__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = *(longlong **)this;
  iVar2 = *(int *)((longlong)this + 8);
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FComputePipelineState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    if (*(int *)(*plVar6 + 0x48) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUseCount.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x489,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = FPipelineStateAsync::WaitCompletion((FPipelineStateAsync *)*plVar6);
    if ((4 < (byte)LogRHI._0_1_) && (bVar5)) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::ProcessDelayedCleanup(void)___ptr64'::`2'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar3 = (undefined8 *)*plVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    plVar6 = plVar6 + 1;
  }
  return;
}

// operator() @ 145c8cd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ProcessDelayedCleanup'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = *(longlong **)this;
  iVar2 = *(int *)((longlong)this + 8);
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FGraphicsPipelineState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    if (*(int *)(*plVar6 + 0x40) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUseCount.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x4ec,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = FPipelineStateAsync::WaitCompletion((FPipelineStateAsync *)*plVar6);
    if ((4 < (byte)LogRHI._0_1_) && (bVar5)) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::ProcessDelayedCleanup(void)___ptr64'::`2'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar3 = (undefined8 *)*plVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    plVar6 = plVar6 + 1;
  }
  return;
}

// operator() @ 145c8ce00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ProcessDelayedCleanup'::__l2::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  longlong *plVar1;
  int iVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  undefined1 local_res8 [8];
  
  plVar6 = *(longlong **)this;
  iVar2 = *(int *)((longlong)this + 8);
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)((longlong)this + 8) != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FWorkGraphPipelineState_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar6 == plVar1) break;
    if (*(int *)(*plVar6 + 0x48) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUseCount.GetValue() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x4c1,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    bVar5 = FPipelineStateAsync::WaitCompletion((FPipelineStateAsync *)*plVar6);
    if ((4 < (byte)LogRHI._0_1_) && (bVar5)) {
      UE::Logging::Private::BasicLog<5>
                (&`public:___cdecl_`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::ProcessDelayedCleanup(void)___ptr64'::`2'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar3 = (undefined8 *)*plVar6;
    if (puVar3 != (undefined8 *)0x0) {
      (**(code **)*puVar3)(puVar3,1);
    }
    plVar6 = plVar6 + 1;
  }
  return;
}

// operator() @ 145c8d250

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
StartAsyncCacheConsolidation'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this_00;
  FTaskBase *this_01;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRhiThread);
  this_00 = *(TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> **)this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,
             &this_00->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
           *)&this_00->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidatePipelineStates
            (this_00,&this_00->NewRHIThreadPipelineStates,&this_00->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,&this_00->NewRHIThreadPipelineStates,
             true);
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ManageIncompleteTasks
            (this_00);
  if (this_00->bDiscardAndSwap != false) {
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)this_00->BackfillMap);
    TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap
              (this_00,&this_00->CurrentMap,&this_00->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_01 = (FTaskBase *)(this_00->RHICompletionEvent).Reference;
  if (this_01->ExtendedPriority == TaskEvent) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// operator() @ 145c8d410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
StartAsyncCacheConsolidation'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> *this_00;
  FTaskBase *this_01;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRhiThread);
  this_00 = *(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
              **)this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,
             &this_00->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           *)&this_00->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidatePipelineStates
            (this_00,&this_00->NewRHIThreadPipelineStates,&this_00->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,&this_00->NewRHIThreadPipelineStates,
             true);
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
  ManageIncompleteTasks(this_00);
  if (this_00->bDiscardAndSwap != false) {
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this_00->BackfillMap);
    TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
    DiscardAndSwap(this_00,&this_00->CurrentMap,&this_00->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_01 = (FTaskBase *)(this_00->RHICompletionEvent).Reference;
  if (this_01->ExtendedPriority == TaskEvent) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// operator() @ 145c8d5d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
StartAsyncCacheConsolidation'::__l2::<lambda_1>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *this_00;
  FTaskBase *this_01;
  bool bVar3;
  longlong lVar4;
  bool bVar5;
  FTaskTagScope local_28;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRhiThread);
  this_00 = *(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
              **)this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Purple,"RHIAsyncCacheConsolidation");
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1959,"RHIAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7a7);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::RHIAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1959);
  }
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar4 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar4 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (-1 < iVar2 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,
             &this_00->NewRenderThreadPipelineStates,false);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
           *)&this_00->NewRenderThreadPipelineStates);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidatePipelineStates
            (this_00,&this_00->NewRHIThreadPipelineStates,&this_00->RHIThreadsPipelineStateCache);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ConsolidateThreadCache
            (this_00,this_00->CurrentMap,this_00->BackfillMap,&this_00->NewRHIThreadPipelineStates,
             true);
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
  ManageIncompleteTasks(this_00);
  if (this_00->bDiscardAndSwap != false) {
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)this_00->BackfillMap);
    TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
    DiscardAndSwap(this_00,&this_00->CurrentMap,&this_00->BackfillMap);
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this_00->Uncompleted).AllocatorInstance.Data + lVar4);
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  this_01 = (FTaskBase *)(this_00->RHICompletionEvent).Reference;
  if (this_01->ExtendedPriority == TaskEvent) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// operator() @ 145c8d820

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::
<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [16];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8d8bd;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145c8d8bd:
  uVar11 = *(uint *)((longlong)this + 0x28);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34));
  TStack_60.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x28);
  if (uVar11 != uVar7) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8d9c0;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145c8d9c0:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
    lVar9 = *(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x18;
    if ((*(int *)(*(longlong *)(*(longlong *)this + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18)
                 + 0x48) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUseCount.GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x489,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = FPipelineStateAsync::WaitCompletion(*(FPipelineStateAsync **)(lVar9 + 8));
    if ((1 < (byte)LogRHI._0_1_) && (bVar6)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:___cdecl_`private:_int___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::DiscardAndSwap(TMap<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64,0>_>*___ptr64&___ptr64,TMap<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64,0>_>*___ptr64&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar4 = *(undefined8 **)(lVar9 + 8);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 145c8daa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
DiscardAndSwap'::__l5::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [16];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8db3d;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145c8db3d:
  uVar11 = *(uint *)((longlong)this + 0x28);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34));
  TStack_60.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x28);
  if (uVar11 != uVar7) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8dc40;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145c8dc40:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
    lVar9 = *(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0xf0;
    if ((*(int *)(*(longlong *)(lVar9 + 0xe0) + 0x40) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUseCount.GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x4ec,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = FPipelineStateAsync::WaitCompletion(*(FPipelineStateAsync **)(lVar9 + 0xe0));
    if ((1 < (byte)LogRHI._0_1_) && (bVar6)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:___cdecl_`private:_int___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::DiscardAndSwap(TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64,0>_>*___ptr64&___ptr64,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64,0>_>*___ptr64&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar4 = *(undefined8 **)(lVar9 + 0xe0);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 145c8dd30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
DiscardAndSwap'::__l5::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  int iVar14;
  undefined1 local_res8 [16];
  int local_res18;
  int local_res20;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)((longlong)this + 0x28);
  pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)this + 0x10);
  iVar12 = 0;
  uVar7 = 1;
  iVar14 = 0;
  iVar8 = 0;
  if (iVar3 != 0) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = *(uint *)(pTVar13->AllocatorInstance).InlineData;
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8ddcd;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res18 = (int)lVar9;
    iVar8 = iVar14 + -1 + local_res18;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_145c8ddcd:
  uVar11 = *(uint *)((longlong)this + 0x28);
  uVar10 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar7,iVar12);
  TStack_60.CurrentBitIndex = iVar8;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar8;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34));
  TStack_60.Array = pTVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = *(uint *)((longlong)this + 0x28);
  if (uVar11 != uVar7) {
    pTVar13 = *(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)((longlong)this + 0x20) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar13 = pTVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) &
             *(uint *)((pTVar13->AllocatorInstance).InlineData + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar9 = (longlong)iVar12;
      uVar10 = uVar10 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar7;
      if ((int)((uVar7 - 1) + ((int)(uVar7 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145c8ded0;
      uVar11 = *(uint *)((pTVar13->AllocatorInstance).InlineData + lVar9 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_res20 = (int)lVar9;
    uVar11 = local_res20 + -1 + uVar10;
    if ((int)uVar7 < (int)uVar11) {
      uVar11 = uVar7;
    }
  }
LAB_145c8ded0:
  while( true ) {
    if (*(int *)((longlong)this + 8) - *(int *)((longlong)this + 0x34) != (int)uStack_40) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((TStack_60.CurrentBitIndex == uVar11) && (TStack_60.Array == pTVar1)) break;
    lVar9 = *(longlong *)this + (longlong)TStack_60.CurrentBitIndex * 0x78;
    if ((*(int *)(*(longlong *)(lVar9 + 0x68) + 0x48) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InUseCount.GetValue() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                           ,0x4c1,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    bVar6 = FPipelineStateAsync::WaitCompletion(*(FPipelineStateAsync **)(lVar9 + 0x68));
    if ((1 < (byte)LogRHI._0_1_) && (bVar6)) {
      UE::Logging::Private::BasicLog<2>
                (&`public:___cdecl_`private:_int___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::DiscardAndSwap(TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64,0>_>*___ptr64&___ptr64,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64,0>_>*___ptr64&___ptr64)___ptr64'::`5'::<lambda_1>::operator()(FRHICommandListImmediate&___ptr64)___ptr64'
                  ::__l7::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    puVar4 = *(undefined8 **)(lVar9 + 0x68);
    if (puVar4 != (undefined8 *)0x0) {
      (**(code **)*puVar4)(puVar4,1);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  return;
}

// operator() @ 145c8e660

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)this;
  pvVar7 = (void *)0x0;
  *(undefined8 *)this = 0;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  *(undefined8 *)((longlong)this + 8) = 0;
  local_18 = pvVar3;
  local_10 = uVar1;
  local_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
              (&local_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = local_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// operator() @ 145c8e790

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)this;
  pvVar7 = (void *)0x0;
  *(undefined8 *)this = 0;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  *(undefined8 *)((longlong)this + 8) = 0;
  local_18 = pvVar3;
  local_10 = uVar1;
  local_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
              (&local_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = local_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// operator() @ 145c8e8c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 *puVar6;
  void *pvVar7;
  void *local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pvVar3 = *(void **)this;
  pvVar7 = (void *)0x0;
  *(undefined8 *)this = 0;
  uVar1 = *(undefined4 *)((longlong)this + 8);
  uVar2 = *(undefined4 *)((longlong)this + 0xc);
  *(undefined8 *)((longlong)this + 8) = 0;
  local_18 = pvVar3;
  local_10 = uVar1;
  local_c = uVar2;
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar6 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar6;
    GRHICommandList.CommandListImmediate._48_8_ = puVar6 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar6 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_4_AEAAXXZ__Z_QEAA_XZ___6B_
    ;
    puVar6[2] = pvVar3;
    *(undefined4 *)(puVar6 + 3) = uVar1;
    *(undefined4 *)((longlong)puVar6 + 0x1c) = uVar2;
    puVar6[4] = L"TRHILambdaCommand";
  }
  else {
    ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
              (&local_18,&GRHICommandList.CommandListImmediate);
    pvVar7 = local_18;
  }
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  return;
}

// operator() @ 145c8e9f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  ::
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
            ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              *)local_68,this);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_PEAVFRHIComputeShader__PEAVFComputePipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_PEAVFRHIComputeShader__PEAVFComputePipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
    ::
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)(puVar3 + 2),
               (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)local_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    DiscardAndSwap'::__l5::<lambda_1>::operator()(local_68,&GRHICommandList.CommandListImmediate);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// operator() @ 145c8eb20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [72];
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  ::
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
            ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              *)local_68,this);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
    ::
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)(puVar3 + 2),
               (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)local_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    DiscardAndSwap'::__l5::<lambda_1>::operator()(local_68,&GRHICommandList.CommandListImmediate);
  }
  local_20 = 0;
  if ((void *)local_68._64_8_ != (void *)0x0) {
    FMemory::Free((void *)local_68._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_68);
  return;
}

// operator() @ 145c8ec50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap'::__l5::<lambda_1>_>'
::__l7::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined1 auStack_88 [32];
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  local_68;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
            (&local_68,this);
  if (((GRHICommandList.bLatchedBypass == false) ||
      ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
     (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
    puVar3 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x68,8);
    GRHICommandList.CommandListImmediate._96_4_ = GRHICommandList.CommandListImmediate._96_4_ + 1;
    *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar3;
    GRHICommandList.CommandListImmediate._48_8_ = puVar3 + 1;
    *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
    *puVar3 = &
              ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__1___R<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__4__DiscardAndSwap___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_4__DiscardAndSwap_4_AEAAHAEAPEAV__TMap_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState__VFDefaultSetAllocator__U__TDefaultMapHashableKeyFuncs_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState___0A_____0_Z__Z_QEAA_XZ___6B_
    ;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                *)(puVar3 + 2),&local_68);
    puVar3[0xc] = L"TRHILambdaCommand";
  }
  else {
    DiscardAndSwap'::__l5::<lambda_1>::operator()(&local_68,&GRHICommandList.CommandListImmediate);
  }
  local_68.HashSize = 0;
  if (local_68.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_68.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_68.Elements);
  return;
}

// ConsolidatePipelineStates @ 145c95680

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidatePipelineStates
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          *param_1,TArray<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
                   *param_2)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  TArray<FComputePipelineState_*,TSizedDefaultAllocator<32>_> *pTVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FComputePipelineState **ppFVar11;
  undefined8 uVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined1 *puVar18;
  FScriptContainerElement *pFVar19;
  undefined1 local_res20 [8];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&> local_88;
  longlong local_78;
  FScriptContainerElement *local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pFVar19 = (param_2->AllocatorInstance).Data;
  iVar6 = param_2->ArrayNum;
  local_88.Value = (FComputePipelineState **)(pFVar19 + (longlong)iVar6 * 8);
  do {
    ppFVar11 = local_88.Value;
    if (param_2->ArrayNum != iVar6) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar19 == (FScriptContainerElement *)ppFVar11) {
      return;
    }
    pTVar7 = *(TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar19;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_68,pTVar7);
    uVar12 = local_68._0_8_;
    local_90 = 0;
    stack0xffffffffffffff48 = local_68._16_16_;
    auStack_c0._0_8_ = local_68._8_8_;
    local_a8 = local_48;
    pTStack_a0 = pTStack_40;
    uVar16 = local_68._24_8_ >> 0x20;
    local_98 = pTVar7;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        uVar8 = *(ulonglong *)(*(longlong *)uVar12 + (longlong)(int)uVar16 * 0x18);
        lVar4 = *(longlong *)uVar12 + (longlong)(int)uVar16 * 0x18;
        pFVar1 = (FScriptContainerElement *)(lVar4 + 8);
        uVar15 = ((uint)(uVar8 >> 0x14) & 0xffff ^ (uint)(uVar8 >> 4)) * -0x7a143595;
        uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
        if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
          puVar18 = &param_1->field_0x38;
          if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
            puVar18 = *(undefined1 **)&param_1->field_0x40;
          }
          iVar14 = *(int *)(puVar18 +
                           (ulonglong)
                           (*(int *)&param_1->field_0x48 - 1U & (uVar15 >> 0x10 ^ uVar15)) * 4);
          if (iVar14 != -1) {
            do {
              lVar5 = *(longlong *)param_1 + (longlong)iVar14 * 0x18;
              if (*(ulonglong *)(*(longlong *)param_1 + (longlong)iVar14 * 0x18) == uVar8) {
                plVar17 = (longlong *)(lVar5 + 8);
                if (lVar5 == 0) {
                  plVar17 = (longlong *)0x0;
                }
                if (plVar17 != (longlong *)0x0) {
                  if (*plVar17 != *(longlong *)pFVar1) {
                    this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
                    pTVar3 = &this->DeleteArray;
                    pFVar9 = (pTVar3->AllocatorInstance).Data;
                    if ((pFVar9 <= pFVar1) &&
                       (pFVar1 < pFVar9 + (longlong)(this->DeleteArray).ArrayMax * 8)) {
                      bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         );
                      if (bVar13) {
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                    iVar14 = (this->DeleteArray).ArrayNum;
                    piVar2 = &(this->DeleteArray).ArrayMax;
                    if (iVar14 == *piVar2) {
                      iVar14 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&pTVar3->AllocatorInstance,piVar2);
                    }
                    (this->DeleteArray).ArrayNum = iVar14 + 1;
                    *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 8) =
                         *(longlong *)pFVar1;
                  }
                  goto LAB_145c957e7;
                }
                break;
              }
              iVar14 = *(int *)(lVar5 + 0x10);
            } while (iVar14 != -1);
          }
        }
        local_78 = lVar4;
        local_70 = pFVar1;
        TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
                  ((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                    *)param_1,&local_88,(bool *)&local_78);
LAB_145c957e7:
        TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uStack_ac);
        local_90 = CONCAT11(local_90._1_1_,1);
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar16 = (ulonglong)uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar15 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (uVar15 < 4) {
          iVar14 = 1;
        }
        else {
          uVar16 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          local_88.Key._4_4_ = (undefined4)lVar4;
          iVar14 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar15) && (local_98->HashSize < iVar14)) || (iVar14 < local_98->HashSize)) {
          local_98->HashSize = iVar14;
          TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
    pFVar19 = pFVar19 + 8;
  } while( true );
}

// ConsolidatePipelineStates @ 145c95980

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ConsolidatePipelineStates
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                 *param_1,
          TArray<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  FGraphicsPipelineStateInitializer *pFVar2;
  TArray<FGraphicsPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar5;
  code *pcVar6;
  FGraphicsPipelineState **ppFVar7;
  undefined8 uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong *plVar14;
  FGraphicsPipelineStateInitializer *pFVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
  local_88;
  FGraphicsPipelineStateInitializer *local_78;
  FGraphicsPipelineStateInitializer *local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  local_88.Value = (FGraphicsPipelineState **)(pFVar16 + (longlong)iVar4 * 8);
  do {
    ppFVar7 = local_88.Value;
    if (param_2->ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == (FScriptContainerElement *)ppFVar7) {
      return;
    }
    pTVar5 = *(TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar16;
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_68,pTVar5);
    uVar8 = local_68._0_8_;
    local_90 = 0;
    stack0xffffffffffffff48 = local_68._16_16_;
    auStack_c0._0_8_ = local_68._8_8_;
    local_a8 = local_48;
    pTStack_a0 = pTStack_40;
    uVar12 = local_68._24_8_ >> 0x20;
    local_98 = pTVar5;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        pFVar15 = (FGraphicsPipelineStateInitializer *)
                  ((longlong)(int)uVar12 * 0xf0 + *(longlong *)uVar8);
        pFVar2 = pFVar15 + 1;
        uVar10 = ::GetTypeHash(pFVar15);
        iVar11 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                           ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                             *)param_1,uVar10,pFVar15);
        if (iVar11 == -1) {
LAB_145c95b2a:
          local_78 = pFVar15;
          local_70 = pFVar2;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
                    ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                      *)param_1,&local_88,(bool *)&local_78);
        }
        else {
          lVar13 = (longlong)iVar11 * 0xf0 + *(longlong *)param_1;
          plVar14 = (longlong *)(lVar13 + 0xe0);
          if (lVar13 == 0) {
            plVar14 = (longlong *)0x0;
          }
          if (plVar14 == (longlong *)0x0) goto LAB_145c95b2a;
          if ((FRHIVertexDeclaration *)*plVar14 != (pFVar2->BoundShaderState).VertexDeclarationRHI)
          {
            this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
            pTVar3 = &this->DeleteArray;
            pFVar15 = (FGraphicsPipelineStateInitializer *)(pTVar3->AllocatorInstance).Data;
            if ((pFVar15 <= pFVar2) &&
               (pFVar2 < (FGraphicsPipelineStateInitializer *)
                         (&(((FGraphicsPipelineStateInitializer *)
                            (&pFVar15->ImmutableSamplerState + -5))->BoundShaderState).
                           VertexDeclarationRHI + (this->DeleteArray).ArrayMax))) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar11 = (this->DeleteArray).ArrayNum;
            piVar1 = &(this->DeleteArray).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,piVar1);
            }
            (this->DeleteArray).ArrayNum = iVar11 + 1;
            *(FRHIVertexDeclaration **)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8) =
                 (pFVar2->BoundShaderState).VertexDeclarationRHI;
          }
        }
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uStack_ac);
        local_90 = CONCAT11(local_90._1_1_,1);
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar12 = (ulonglong)uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar10 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (uVar10 < 4) {
          iVar11 = 1;
        }
        else {
          uVar12 = (ulonglong)((uVar10 >> 1) + 7) * 2 + 1;
          lVar13 = 0x3f;
          if (uVar12 != 0) {
            for (; uVar12 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_88.Key._4_4_ = (undefined4)lVar13;
          iVar11 = 1 << ((byte)lVar13 & 0x1f);
        }
        if (((0 < (int)uVar10) && (local_98->HashSize < iVar11)) || (iVar11 < local_98->HashSize)) {
          local_98->HashSize = iVar11;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// ConsolidatePipelineStates @ 145c95c10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ConsolidatePipelineStates
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                 *param_1,
          TArray<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
          *param_2)

{
  FWorkGraphPipelineStateInitializer *pFVar1;
  int *piVar2;
  TArray<FWorkGraphPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar5;
  code *pcVar6;
  FWorkGraphPipelineState **ppFVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong *plVar13;
  FWorkGraphPipelineStateInitializer *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *local_98;
  undefined2 local_90;
  TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
  local_88;
  FWorkGraphPipelineStateInitializer *local_78;
  FWorkGraphPipelineStateInitializer *local_70;
  undefined1 local_68 [32];
  longlong local_48;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_40;
  
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar4 = param_2->ArrayNum;
  local_88.Value = (FWorkGraphPipelineState **)(pFVar16 + (longlong)iVar4 * 8);
  do {
    ppFVar7 = local_88.Value;
    if (param_2->ArrayNum != iVar4) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (pFVar16 == (FScriptContainerElement *)ppFVar7) {
      return;
    }
    pTVar5 = *(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar16;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_68,pTVar5);
    uVar8 = local_68._0_8_;
    local_90 = 0;
    stack0xffffffffffffff48 = local_68._16_16_;
    auStack_c0._0_8_ = local_68._8_8_;
    local_a8 = local_48;
    pTStack_a0 = pTStack_40;
    uVar11 = local_68._24_8_ >> 0x20;
    local_98 = pTVar5;
    if (local_68._28_4_ < *(int *)(local_68._16_8_ + 0x18)) {
      do {
        pFVar14 = (FWorkGraphPipelineStateInitializer *)
                  ((longlong)(int)uVar11 * 0x78 + *(longlong *)uVar8);
        pFVar1 = pFVar14 + 1;
        iVar10 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                           ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                             *)param_1,
                            (int)pFVar14->_padding_ +
                            (int)((ulonglong)pFVar14->_padding_ >> 0x20) * 0x17 ^
                            (int)((ulonglong)pFVar14->_padding_ >> 0x20) * 0x17 +
                            (int)pFVar14->_padding_ ^
                            (int)((ulonglong)pFVar14->_padding_ >> 0x20) * 0x17 +
                            (int)pFVar14->_padding_ ^
                            (int)((ulonglong)pFVar14->_padding_ >> 0x20) * 0x17 +
                            (int)pFVar14->_padding_,pFVar14);
        if (iVar10 == -1) {
LAB_145c95dee:
          local_78 = pFVar14;
          local_70 = pFVar1;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
                    ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                      *)param_1,&local_88,(bool *)&local_78);
        }
        else {
          lVar12 = (longlong)iVar10 * 0x78 + *(longlong *)param_1;
          plVar13 = (longlong *)(lVar12 + 0x68);
          if (lVar12 == 0) {
            plVar13 = (longlong *)0x0;
          }
          if (plVar13 == (longlong *)0x0) goto LAB_145c95dee;
          if (*plVar13 != pFVar1->_padding_) {
            this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
            pTVar3 = &this->DeleteArray;
            pFVar14 = (FWorkGraphPipelineStateInitializer *)(pTVar3->AllocatorInstance).Data;
            if ((pFVar14 <= pFVar1) &&
               (pFVar1 < (FWorkGraphPipelineStateInitializer *)
                         (&pFVar14->_padding_ + (this->DeleteArray).ArrayMax))) {
              bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar9) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar10 = (this->DeleteArray).ArrayNum;
            piVar2 = &(this->DeleteArray).ArrayMax;
            if (iVar10 == *piVar2) {
              iVar10 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar3->AllocatorInstance,piVar2);
            }
            (this->DeleteArray).ArrayNum = iVar10 + 1;
            *(longlong *)((pTVar3->AllocatorInstance).Data + (longlong)iVar10 * 8) =
                 pFVar1->_padding_;
          }
        }
        TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_a0,uStack_ac);
        local_90 = CONCAT11(local_90._1_1_,1);
        uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
        uVar11 = (ulonglong)uStack_ac;
      } while ((int)uStack_ac < *(int *)(auStack_c0._8_8_ + 0x18));
      if (((char)local_90 != '\0') && (local_90._1_1_ != '\0')) {
        uVar15 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
        if (uVar15 < 4) {
          iVar10 = 1;
        }
        else {
          uVar11 = (ulonglong)((uVar15 >> 1) + 7) * 2 + 1;
          lVar12 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar12 == 0; lVar12 = lVar12 + -1) {
            }
          }
          local_88.Key._4_4_ = (undefined4)lVar12;
          iVar10 = 1 << ((byte)lVar12 & 0x1f);
        }
        if (((0 < (int)uVar15) && (local_98->HashSize < iVar10)) || (iVar10 < local_98->HashSize)) {
          local_98->HashSize = iVar10;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_98);
        }
      }
    }
    pFVar16 = pFVar16 + 8;
  } while( true );
}

// ConsolidateThreadCache @ 145c95ed0

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadCache
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          *param_1,TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                   *param_2,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          *param_3,bool param_4)

{
  int *piVar1;
  TArray<FComputePipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ulonglong uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  undefined1 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  undefined1 *puVar17;
  undefined1 auStack_c0 [16];
  uint uStack_b0;
  uint uStack_ac;
  longlong local_a8;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_a0;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *local_98;
  char local_90;
  char cStack_8f;
  ulonglong *local_88;
  ulonglong *local_80;
  FScriptContainerElement *local_78;
  undefined1 local_70 [32];
  longlong local_50;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_48;
  
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_70,
             (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)param_3);
  local_90 = '\0';
  cStack_8f = '\0';
  stack0xffffffffffffff48 = local_70._16_16_;
  auStack_c0._0_8_ = local_70._8_8_;
  local_a8 = local_50;
  pTStack_a0 = pTStack_48;
  uVar15 = local_70._24_8_ >> 0x20;
  local_98 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)param_3;
  if (*(int *)(local_70._16_8_ + 0x18) <= local_70._28_4_) {
    return;
  }
LAB_145c95f62:
  uVar4 = *(ulonglong *)(*(longlong *)local_70._0_8_ + (longlong)(int)uVar15 * 0x18);
  local_88 = (ulonglong *)(*(longlong *)local_70._0_8_ + (longlong)(int)uVar15 * 0x18);
  pFVar3 = (FScriptContainerElement *)(local_88 + 1);
  uVar13 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  if (*(int *)&param_1->field_0x8 != *(int *)&param_1->field_0x34) {
    puVar17 = &param_1->field_0x38;
    if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)&param_1->field_0x40;
    }
    iVar10 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_1->field_0x48 - 1U & uVar13) * 4);
    if (iVar10 != -1) {
      do {
        lVar12 = *(longlong *)param_1 + (longlong)iVar10 * 0x18;
        if (*(ulonglong *)(*(longlong *)param_1 + (longlong)iVar10 * 0x18) == uVar4) {
          iVar14 = *(int *)&param_2->field_0x34;
          iVar10 = *(int *)&param_2->field_0x8;
          puVar16 = (ulonglong *)(lVar12 + 8);
          if (lVar12 == 0) {
            puVar16 = (ulonglong *)0x0;
          }
          if (puVar16 == (ulonglong *)0x0) goto LAB_145c96000;
          if (iVar10 == iVar14) goto LAB_145c9609e;
          puVar17 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar17 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar10 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar13) * 4);
          if (iVar10 == -1) goto LAB_145c9609e;
          goto LAB_145c96060;
        }
        iVar10 = *(int *)(lVar12 + 0x10);
      } while (iVar10 != -1);
    }
  }
  iVar10 = *(int *)&param_2->field_0x8;
  iVar14 = *(int *)&param_2->field_0x34;
LAB_145c96000:
  if (iVar10 != iVar14) {
    puVar17 = *(undefined1 **)&param_2->field_0x40;
    puVar11 = &param_2->field_0x38;
    if (puVar17 != (undefined1 *)0x0) {
      puVar11 = puVar17;
    }
    lVar12 = (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar13) * 4;
    iVar10 = *(int *)(puVar11 + lVar12);
    if (iVar10 != -1) {
      lVar5 = *(longlong *)param_2;
      do {
        if (*(ulonglong *)(lVar5 + (longlong)iVar10 * 0x18) == uVar4) {
          if (iVar10 != -1) {
            puVar11 = &param_2->field_0x38;
            if (puVar17 != (undefined1 *)0x0) {
              puVar11 = puVar17;
            }
            iVar10 = *(int *)(puVar11 + lVar12);
            goto joined_r0x000145c961d1;
          }
          break;
        }
        iVar10 = *(int *)(lVar5 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
  }
  goto LAB_145c96257;
  while (iVar10 = *(int *)(*(longlong *)param_2 + 0x10 + (longlong)iVar10 * 0x18), iVar10 != -1) {
LAB_145c96060:
    if (*(ulonglong *)(*(longlong *)param_2 + (longlong)iVar10 * 0x18) == uVar4) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BackfillPipelineStateMap.Contains(ThreadKey)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x81f,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      break;
    }
  }
LAB_145c9609e:
  if (*puVar16 != *(ulonglong *)pFVar3) {
    this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
    pTVar2 = &this->DeleteArray;
    pFVar6 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)(this->DeleteArray).ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->DeleteArray).ArrayNum;
    piVar1 = &(this->DeleteArray).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DeleteArray).ArrayNum = iVar10 + 1;
    *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 8) = *(ulonglong *)pFVar3;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::RemoveByIndex(pTStack_a0,uStack_ac);
    local_90 = '\x01';
  }
  goto LAB_145c963b3;
joined_r0x000145c961d1:
  if (iVar10 == -1) goto LAB_145c961fd;
  lVar12 = lVar5 + (longlong)iVar10 * 0x18;
  if (*(ulonglong *)(lVar5 + (longlong)iVar10 * 0x18) == uVar4) goto LAB_145c96201;
  iVar10 = *(int *)(lVar12 + 0x10);
  goto joined_r0x000145c961d1;
LAB_145c961fd:
  lVar12 = 0;
LAB_145c96201:
  puVar16 = (ulonglong *)(lVar12 + 8);
  if (lVar12 == 0) {
    puVar16 = (ulonglong *)0x0;
  }
  if ((*puVar16 != *(ulonglong *)pFVar3) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!BackfillPipelineStateMap.Contains(ThreadKey) || *BackfillPipelineStateMap.Find(ThreadKey) == ThreadValue"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x82c,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_145c96257:
  puVar16 = local_88;
  local_80 = local_88;
  local_78 = pFVar3;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
            ((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)param_1,
             (TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&> *)
             &stack0x00000020,(bool *)&local_80);
  uVar15 = *puVar16;
  if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
    uVar13 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
    uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
    bVar9 = false;
    puVar17 = &param_2->field_0x38;
    if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
      puVar17 = *(undefined1 **)&param_2->field_0x40;
    }
    iVar10 = *(int *)(puVar17 +
                     ((longlong)*(int *)&param_2->field_0x48 - 1U &
                     (longlong)(int)(uVar13 >> 0x10 ^ uVar13)) * 4);
    if (iVar10 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)param_2 + (longlong)iVar10 * 0x18) == uVar15) {
          TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                           *)param_2,iVar10);
          bVar9 = true;
          break;
        }
        iVar10 = *(int *)(*(longlong *)param_2 + 0x10 + (longlong)iVar10 * 0x18);
      } while (iVar10 != -1);
    }
    if (bVar9) goto LAB_145c963b3;
  }
  if (param_4) {
    pFVar3 = (FScriptContainerElement *)
             (*(longlong *)local_70._0_8_ + (longlong)(int)uStack_ac * 0x18);
    pFVar6 = (this->Uncompleted).AllocatorInstance.Data;
    if (((pFVar6 <= pFVar3) && (pFVar3 < pFVar6 + (longlong)(this->Uncompleted).ArrayMax * 0x10)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar10 = (this->Uncompleted).ArrayNum;
    piVar1 = &(this->Uncompleted).ArrayMax;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)this,piVar1);
    }
    (this->Uncompleted).ArrayNum = iVar10 + 1;
    uVar8 = *(undefined8 *)(pFVar3 + 8);
    pFVar6 = (this->Uncompleted).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
    *(undefined8 *)pFVar6 = *(undefined8 *)pFVar3;
    *(undefined8 *)(pFVar6 + 8) = uVar8;
  }
LAB_145c963b3:
  iVar10 = 1;
  uStack_b0 = uStack_b0 & ~auStack_c0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_c0);
  uVar15 = (ulonglong)uStack_ac;
  if (*(int *)(auStack_c0._8_8_ + 0x18) <= (int)uStack_ac) {
    if (local_90 == '\0') {
      return;
    }
    if (cStack_8f == '\0') {
      return;
    }
    uVar13 = *(int *)&(local_98->Elements).field_0x8 - *(int *)&(local_98->Elements).field_0x34;
    if (3 < uVar13) {
      uVar15 = (ulonglong)((uVar13 >> 1) + 7) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar12 & 0x1f);
    }
    if ((((int)uVar13 < 1) || (iVar10 <= local_98->HashSize)) && (local_98->HashSize <= iVar10)) {
      return;
    }
    local_98->HashSize = iVar10;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::Rehash(local_98);
    return;
  }
  goto LAB_145c95f62;
}

// ConsolidateThreadCache @ 145c96480

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ConsolidateThreadCache
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                 *param_1,
          TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
          *param_2,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                   *param_3,bool param_4)

{
  int *piVar1;
  TArray<FGraphicsPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  FGraphicsPipelineStateInitializer *pFVar16;
  FGraphicsPipelineStateInitializer *pFVar17;
  FGraphicsPipelineStateInitializer *local_b8;
  FGraphicsPipelineStateInitializer *local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              *)param_3);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar9 = local_a8._24_8_ >> 0x20;
  local_48 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              *)param_3;
  if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      pFVar16 = (FGraphicsPipelineStateInitializer *)((longlong)(int)uVar9 * 0xf0 + *local_78);
      pFVar17 = pFVar16 + 1;
      uVar7 = ::GetTypeHash(pFVar16);
      iVar8 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                        ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                          *)param_1,uVar7,pFVar16);
      if (iVar8 == -1) {
LAB_145c96673:
        uVar7 = ::GetTypeHash(pFVar16);
        iVar8 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                          ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                            *)param_2,uVar7,pFVar16);
        if (iVar8 != -1) {
          uVar7 = ::GetTypeHash(pFVar16);
          iVar8 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                            ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                              *)param_2,uVar7,pFVar16);
          plVar14 = (longlong *)0x0;
          if (iVar8 != -1) {
            plVar14 = (longlong *)((longlong)iVar8 * 0xf0 + *(longlong *)param_2);
          }
          plVar10 = plVar14 + 0x1c;
          if (plVar14 == (longlong *)0x0) {
            plVar10 = (longlong *)0x0;
          }
          if (((FRHIVertexDeclaration *)*plVar10 != (pFVar17->BoundShaderState).VertexDeclarationRHI
              ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("!BackfillPipelineStateMap.Contains(ThreadKey) || *BackfillPipelineStateMap.Find(ThreadKey) == ThreadValue"
                                       ,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                       ,0x82c,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_b8 = pFVar16;
        local_b0 = pFVar17;
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
                  ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                    *)param_1,
                   (TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
                    *)&stack0x00000020,(bool *)&local_b8);
        if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
          uVar7 = ::GetTypeHash(pFVar16);
          bVar5 = false;
          puVar11 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar11 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar8 = *(int *)(puVar11 +
                          ((longlong)*(int *)&param_2->field_0x48 - 1U & (longlong)(int)uVar7) * 4);
          if (iVar8 != -1) {
            lVar13 = *(longlong *)param_2;
            do {
              pFVar17 = (FGraphicsPipelineStateInitializer *)((longlong)iVar8 * 0xf0 + lVar13);
              bVar6 = FGraphicsPipelineStateInitializer::operator==(pFVar17,pFVar16);
              if (bVar6) {
                TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                                 *)param_2,iVar8);
                bVar5 = true;
                break;
              }
              iVar8 = *(int *)&pFVar17[1].BoundShaderState.VertexShaderRHI;
            } while (iVar8 != -1);
          }
          if (bVar5) goto LAB_145c968d2;
        }
        if (param_4) {
          pFVar12 = (this->Uncompleted).AllocatorInstance.Data;
          pFVar15 = (FScriptContainerElement *)((longlong)(int)uStack_5c * 0xf0 + *local_78);
          if (((pFVar12 <= pFVar15) &&
              (pFVar15 < pFVar12 + (longlong)(this->Uncompleted).ArrayMax * 0xe8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (this->Uncompleted).ArrayNum;
          piVar1 = &(this->Uncompleted).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8e8,(ForAnyElementType *)this,piVar1);
          }
          (this->Uncompleted).ArrayNum = iVar8 + 1;
          uVar4 = *(undefined8 *)(pFVar15 + 8);
          pFVar12 = (this->Uncompleted).AllocatorInstance.Data + (longlong)iVar8 * 0xe8;
          *(undefined8 *)pFVar12 = *(undefined8 *)pFVar15;
          *(undefined8 *)(pFVar12 + 8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x18);
          *(undefined8 *)(pFVar12 + 0x10) = *(undefined8 *)(pFVar15 + 0x10);
          *(undefined8 *)(pFVar12 + 0x18) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x28);
          *(undefined8 *)(pFVar12 + 0x20) = *(undefined8 *)(pFVar15 + 0x20);
          *(undefined8 *)(pFVar12 + 0x28) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x38);
          *(undefined8 *)(pFVar12 + 0x30) = *(undefined8 *)(pFVar15 + 0x30);
          *(undefined8 *)(pFVar12 + 0x38) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x48);
          *(undefined8 *)(pFVar12 + 0x40) = *(undefined8 *)(pFVar15 + 0x40);
          *(undefined8 *)(pFVar12 + 0x48) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x58);
          *(undefined8 *)(pFVar12 + 0x50) = *(undefined8 *)(pFVar15 + 0x50);
          *(undefined8 *)(pFVar12 + 0x58) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x68);
          *(undefined8 *)(pFVar12 + 0x60) = *(undefined8 *)(pFVar15 + 0x60);
          *(undefined8 *)(pFVar12 + 0x68) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x78);
          *(undefined8 *)(pFVar12 + 0x70) = *(undefined8 *)(pFVar15 + 0x70);
          *(undefined8 *)(pFVar12 + 0x78) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x88);
          *(undefined8 *)(pFVar12 + 0x80) = *(undefined8 *)(pFVar15 + 0x80);
          *(undefined8 *)(pFVar12 + 0x88) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0x98);
          *(undefined8 *)(pFVar12 + 0x90) = *(undefined8 *)(pFVar15 + 0x90);
          *(undefined8 *)(pFVar12 + 0x98) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0xa8);
          *(undefined8 *)(pFVar12 + 0xa0) = *(undefined8 *)(pFVar15 + 0xa0);
          *(undefined8 *)(pFVar12 + 0xa8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0xb8);
          *(undefined8 *)(pFVar12 + 0xb0) = *(undefined8 *)(pFVar15 + 0xb0);
          *(undefined8 *)(pFVar12 + 0xb8) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 200);
          *(undefined8 *)(pFVar12 + 0xc0) = *(undefined8 *)(pFVar15 + 0xc0);
          *(undefined8 *)(pFVar12 + 200) = uVar4;
          uVar4 = *(undefined8 *)(pFVar15 + 0xd8);
          *(undefined8 *)(pFVar12 + 0xd0) = *(undefined8 *)(pFVar15 + 0xd0);
          *(undefined8 *)(pFVar12 + 0xd8) = uVar4;
          *(undefined8 *)(pFVar12 + 0xe0) = *(undefined8 *)(pFVar15 + 0xe0);
        }
      }
      else {
        lVar13 = (longlong)iVar8 * 0xf0 + *(longlong *)param_1;
        plVar14 = (longlong *)(lVar13 + 0xe0);
        if (lVar13 == 0) {
          plVar14 = (longlong *)0x0;
        }
        if (plVar14 == (longlong *)0x0) goto LAB_145c96673;
        uVar7 = ::GetTypeHash(pFVar16);
        iVar8 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                          ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                            *)param_2,uVar7,pFVar16);
        if ((iVar8 != -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!BackfillPipelineStateMap.Contains(ThreadKey)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                               ,0x81f,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((FRHIVertexDeclaration *)*plVar14 != (pFVar17->BoundShaderState).VertexDeclarationRHI) {
          this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
          pTVar2 = &this->DeleteArray;
          pFVar16 = (FGraphicsPipelineStateInitializer *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar16 <= pFVar17) &&
              (pFVar17 < (FGraphicsPipelineStateInitializer *)
                         (&(((FGraphicsPipelineStateInitializer *)
                            (&pFVar16->ImmutableSamplerState + -5))->BoundShaderState).
                           VertexDeclarationRHI + (this->DeleteArray).ArrayMax))) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (this->DeleteArray).ArrayNum;
          piVar1 = &(this->DeleteArray).ArrayMax;
          if (iVar8 == *piVar1) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->DeleteArray).ArrayNum = iVar8 + 1;
          *(FRHIVertexDeclaration **)((pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 8) =
               (pFVar17->BoundShaderState).VertexDeclarationRHI;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_50,uStack_5c);
          local_40 = '\x01';
        }
      }
LAB_145c968d2:
      iVar8 = 1;
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar9 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar7 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (3 < uVar7) {
        uVar9 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
        lVar13 = 0x3f;
        if (uVar9 != 0) {
          for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        iVar8 = 1 << ((byte)lVar13 & 0x1f);
      }
      if (((0 < (int)uVar7) && (local_48->HashSize < iVar8)) || (iVar8 < local_48->HashSize)) {
        local_48->HashSize = iVar8;
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  return;
}

// ConsolidateThreadCache @ 145c96980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ConsolidateThreadCache
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                 *param_1,
          TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
          *param_2,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                   *param_3,bool param_4)

{
  int *piVar1;
  TArray<FWorkGraphPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  code *pcVar9;
  longlong *plVar10;
  bool bVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 *puVar16;
  FWorkGraphPipelineStateInitializer *pFVar17;
  FWorkGraphPipelineStateInitializer *pFVar18;
  longlong lVar19;
  longlong *plVar20;
  uint uVar21;
  FWorkGraphPipelineStateInitializer *local_b8;
  FWorkGraphPipelineStateInitializer *local_b0;
  undefined1 local_a8 [32];
  longlong local_88;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_80;
  longlong *local_78;
  undefined1 auStack_70 [16];
  uint uStack_60;
  uint uStack_5c;
  longlong local_58;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *local_48;
  char local_40;
  char cStack_3f;
  
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_a8,
             (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              *)param_3);
  local_40 = '\0';
  cStack_3f = '\0';
  stack0xffffffffffffff98 = local_a8._16_16_;
  local_78 = (longlong *)local_a8._0_8_;
  auStack_70._0_8_ = local_a8._8_8_;
  local_58 = local_88;
  pTStack_50 = pTStack_80;
  uVar13 = local_a8._24_8_ >> 0x20;
  local_48 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              *)param_3;
  if (local_a8._28_4_ < *(int *)(local_a8._16_8_ + 0x18)) {
    do {
      plVar10 = local_78;
      lVar19 = *local_78;
      pFVar17 = (FWorkGraphPipelineStateInitializer *)((longlong)(int)uVar13 * 0x78 + lVar19);
      lVar14 = (longlong)(int)uStack_5c * 0x78;
      pFVar18 = pFVar17 + 1;
      uVar3 = *(undefined8 *)(lVar14 + 8 + lVar19);
      uVar4 = *(undefined8 *)(lVar14 + 0x10 + lVar19);
      uVar5 = *(undefined8 *)(lVar14 + 0x18 + lVar19);
      uVar21 = (int)((ulonglong)pFVar17->_padding_ >> 0x20) * 0x17 + (int)pFVar17->_padding_ ^
               (int)((ulonglong)uVar3 >> 0x20) * 0x17 + (int)uVar3 ^
               (int)((ulonglong)uVar4 >> 0x20) * 0x17 + (int)uVar4 ^
               (int)((ulonglong)uVar5 >> 0x20) * 0x17 + (int)uVar5;
      iVar12 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
               ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                         ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                           *)param_1,uVar21,pFVar17);
      if (iVar12 == -1) {
LAB_145c96bbe:
        iVar12 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                           ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                             *)param_2,uVar21,pFVar17);
        if (iVar12 != -1) {
          iVar12 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                             ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                               *)param_2,uVar21,pFVar17);
          if (iVar12 == -1) {
            lVar19 = 0;
          }
          else {
            lVar19 = (longlong)iVar12 * 0x78 + *(longlong *)param_2;
          }
          plVar20 = (longlong *)(lVar19 + 0x68);
          if (lVar19 == 0) {
            plVar20 = (longlong *)0x0;
          }
          if ((*plVar20 != pFVar18->_padding_) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!BackfillPipelineStateMap.Contains(ThreadKey) || *BackfillPipelineStateMap.Find(ThreadKey) == ThreadValue"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                  ,0x82c,L""), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        local_b8 = pFVar17;
        local_b0 = pFVar18;
        TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
                  ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                    *)param_1,
                   (TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
                    *)&stack0x00000020,(bool *)&local_b8);
        if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
          lVar19 = pFVar17->_padding_;
          lVar14 = pFVar17->_padding_;
          lVar6 = pFVar17->_padding_;
          lVar7 = pFVar17->_padding_;
          bVar11 = false;
          puVar16 = &param_2->field_0x38;
          if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
            puVar16 = *(undefined1 **)&param_2->field_0x40;
          }
          iVar12 = *(int *)(puVar16 +
                           ((longlong)*(int *)&param_2->field_0x48 - 1U &
                           (longlong)
                           ((int)((ulonglong)lVar19 >> 0x20) * 0x17 + (int)lVar19 ^
                            (int)((ulonglong)lVar14 >> 0x20) * 0x17 + (int)lVar14 ^
                            (int)((ulonglong)lVar6 >> 0x20) * 0x17 + (int)lVar6 ^
                           (int)((ulonglong)lVar7 >> 0x20) * 0x17 + (int)lVar7)) * 4);
          if (iVar12 != -1) {
            lVar8 = *(longlong *)param_2;
            do {
              lVar15 = (longlong)iVar12 * 0x78;
              if ((((*(longlong *)(lVar15 + lVar8) == lVar14) &&
                   (*(longlong *)(lVar15 + 8 + lVar8) == lVar19)) &&
                  (*(longlong *)(lVar15 + 0x10 + lVar8) == lVar7)) &&
                 (*(longlong *)(lVar15 + 0x18 + lVar8) == lVar6)) {
                TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                ::RemoveByIndex((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                                 *)param_2,iVar12);
                bVar11 = true;
                break;
              }
              iVar12 = *(int *)(lVar15 + 0x70 + lVar8);
            } while (iVar12 != -1);
          }
          if (bVar11) goto LAB_145c96dd1;
        }
        if (param_4) {
          pFVar18 = (FWorkGraphPipelineStateInitializer *)(this->Uncompleted).AllocatorInstance.Data
          ;
          pFVar17 = (FWorkGraphPipelineStateInitializer *)
                    ((longlong)(int)uStack_5c * 0x78 + *plVar10);
          if (((pFVar18 <= pFVar17) &&
              (pFVar17 < (FWorkGraphPipelineStateInitializer *)
                         ((longlong)pFVar18 + (longlong)(this->Uncompleted).ArrayMax * 0x70))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (this->Uncompleted).ArrayNum;
          piVar1 = &(this->Uncompleted).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x870,(ForAnyElementType *)this,piVar1);
          }
          (this->Uncompleted).ArrayNum = iVar12 + 1;
          pFVar18 = (FWorkGraphPipelineStateInitializer *)
                    ((this->Uncompleted).AllocatorInstance.Data + (longlong)iVar12 * 0x70);
          FWorkGraphPipelineStateInitializer::FWorkGraphPipelineStateInitializer(pFVar18,pFVar17);
          pFVar18[1]._padding_ = pFVar17[1]._padding_;
        }
      }
      else {
        lVar19 = (longlong)iVar12 * 0x78 + *(longlong *)param_1;
        plVar20 = (longlong *)(lVar19 + 0x68);
        if (lVar19 == 0) {
          plVar20 = (longlong *)0x0;
        }
        if (plVar20 == (longlong *)0x0) goto LAB_145c96bbe;
        iVar12 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FWorkGraphPipelineStateInitializer>
                           ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                             *)param_2,uVar21,pFVar17);
        if ((iVar12 != -1) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!BackfillPipelineStateMap.Contains(ThreadKey)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                ,0x81f,L""), bVar11)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*plVar20 != pFVar18->_padding_) {
          this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
          pTVar2 = &this->DeleteArray;
          pFVar17 = (FWorkGraphPipelineStateInitializer *)(pTVar2->AllocatorInstance).Data;
          if (((pFVar17 <= pFVar18) &&
              (pFVar18 < (FWorkGraphPipelineStateInitializer *)
                         (&pFVar17->_padding_ + (this->DeleteArray).ArrayMax))) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar12 = (this->DeleteArray).ArrayNum;
          piVar1 = &(this->DeleteArray).ArrayMax;
          if (iVar12 == *piVar1) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
          }
          (this->DeleteArray).ArrayNum = iVar12 + 1;
          *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar12 * 8) =
               pFVar18->_padding_;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTStack_50,uStack_5c);
          local_40 = '\x01';
        }
      }
LAB_145c96dd1:
      uStack_60 = uStack_60 & ~auStack_70._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_70);
      uVar13 = (ulonglong)uStack_5c;
    } while ((int)uStack_5c < *(int *)(auStack_70._8_8_ + 0x18));
    if ((local_40 != '\0') && (cStack_3f != '\0')) {
      uVar21 = *(int *)&(local_48->Elements).field_0x8 - *(int *)&(local_48->Elements).field_0x34;
      if (uVar21 < 4) {
        iVar12 = 1;
      }
      else {
        uVar13 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
        lVar19 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar19 == 0; lVar19 = lVar19 + -1) {
          }
        }
        iVar12 = 1 << ((byte)lVar19 & 0x1f);
      }
      if (((0 < (int)uVar21) && (local_48->HashSize < iVar12)) || (iVar12 < local_48->HashSize)) {
        local_48->HashSize = iVar12;
        TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_48);
      }
    }
  }
  return;
}

// ConsolidateThreadedCaches @ 145c96e90

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ConsolidateThreadedCaches
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  int *piVar1;
  TArray<FComputePipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong *puVar3;
  FScriptContainerElement *pFVar4;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTVar5;
  ulonglong uVar6;
  ForElementType<FSetElementId> FVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  longlong *plVar10;
  FPSOPrecacheAsyncTask *this_00;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulonglong *puVar15;
  FCompletionState *pFVar16;
  uint uVar17;
  int iVar18;
  ulonglong uVar19;
  ulonglong *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ForElementType<FSetElementId> FVar23;
  longlong lVar24;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar25;
  FScriptContainerElement *pFVar26;
  ulonglong *puVar27;
  longlong lVar28;
  undefined1 local_res8 [8];
  uint local_res10;
  TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&> local_res18;
  ulonglong local_f0;
  ulonglong uStack_e8;
  longlong *local_d8;
  undefined1 auStack_d0 [16];
  uint uStack_c0;
  uint uStack_bc;
  longlong local_b8;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_b0;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *local_a8;
  undefined2 local_a0;
  FScriptContainerElement *local_98;
  ulonglong *local_90;
  FScriptContainerElement *local_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  bVar12 = IsInRenderingThread();
  if ((!bVar12) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x74f,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_res10 = (this->AllThreadsPipelineStateCache).ArrayNum;
  uVar19 = (ulonglong)(int)local_res10;
  pFVar26 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  local_98 = pFVar26 + uVar19 * 8;
LAB_145c96efb:
  pFVar4 = local_98;
  if ((this->AllThreadsPipelineStateCache).ArrayNum != (int)uVar19) {
    local_res8[0] = 0;
    `TCheckedPointerIterator<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_*,int,0>
    ::operator!='::__l2::<lambda_1>::operator()(local_res8);
  }
  if (pFVar26 != pFVar4) {
    pTVar5 = *(TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar26;
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_80,pTVar5);
    local_a0 = 0;
    stack0xffffffffffffff38 = local_80._16_16_;
    local_d8 = (longlong *)local_80._0_8_;
    auStack_d0._0_8_ = local_80._8_8_;
    local_b8 = local_60;
    pTStack_b0 = pTStack_58;
    uVar19 = local_80._24_8_ >> 0x20;
    local_a8 = pTVar5;
    if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
      puVar27 = (ulonglong *)0x0;
LAB_145c96f80:
      pTVar25 = this->CurrentMap;
      uVar6 = *(ulonglong *)(*local_d8 + (longlong)(int)uVar19 * 0x18);
      puVar3 = (ulonglong *)(*local_d8 + (longlong)(int)uVar19 * 0x18);
      pFVar4 = (FScriptContainerElement *)(puVar3 + 1);
      uVar17 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
      uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
      uVar17 = uVar17 >> 0x10 ^ uVar17;
      if (*(int *)&pTVar25->field_0x8 != *(int *)&pTVar25->field_0x34) {
        puVar22 = &pTVar25->field_0x38;
        if (*(undefined1 **)&pTVar25->field_0x40 != (undefined1 *)0x0) {
          puVar22 = *(undefined1 **)&pTVar25->field_0x40;
        }
        iVar13 = *(int *)(puVar22 + (ulonglong)(*(int *)&pTVar25->field_0x48 - 1U & uVar17) * 4);
        if (iVar13 != -1) {
          do {
            lVar28 = *(longlong *)pTVar25 + (longlong)iVar13 * 0x18;
            if (*(ulonglong *)(*(longlong *)pTVar25 + (longlong)iVar13 * 0x18) == uVar6) {
              pTVar25 = this->BackfillMap;
              puVar15 = (ulonglong *)(lVar28 + 8);
              if (lVar28 == 0) {
                puVar15 = puVar27;
              }
              if (puVar15 == (ulonglong *)0x0) goto LAB_145c97026;
              if (*(int *)&pTVar25->field_0x8 == *(int *)&pTVar25->field_0x34) goto LAB_145c9711d;
              puVar22 = &pTVar25->field_0x38;
              if (*(undefined1 **)&pTVar25->field_0x40 != (undefined1 *)0x0) {
                puVar22 = *(undefined1 **)&pTVar25->field_0x40;
              }
              iVar13 = *(int *)(puVar22 +
                               (ulonglong)(*(int *)&pTVar25->field_0x48 - 1U & uVar17) * 4);
              if (iVar13 == -1) goto LAB_145c9711d;
              goto LAB_145c970e0;
            }
            iVar13 = *(int *)(lVar28 + 0x10);
          } while (iVar13 != -1);
        }
      }
      pTVar25 = this->BackfillMap;
LAB_145c97026:
      if (*(int *)&pTVar25->field_0x8 != *(int *)&pTVar25->field_0x34) {
        puVar22 = *(undefined1 **)&pTVar25->field_0x40;
        puVar21 = &pTVar25->field_0x38;
        if (puVar22 != (undefined1 *)0x0) {
          puVar21 = puVar22;
        }
        lVar28 = (ulonglong)(*(int *)&pTVar25->field_0x48 - 1U & uVar17) * 4;
        iVar13 = *(int *)(puVar21 + lVar28);
        if (iVar13 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)pTVar25 + (longlong)iVar13 * 0x18) == uVar6) {
              if (iVar13 != -1) {
                puVar15 = puVar27;
                if (*(int *)&pTVar25->field_0x8 == *(int *)&pTVar25->field_0x34) goto LAB_145c9720b;
                puVar21 = &pTVar25->field_0x38;
                if (puVar22 != (undefined1 *)0x0) {
                  puVar21 = puVar22;
                }
                iVar13 = *(int *)(puVar21 + lVar28);
                if (iVar13 == -1) goto LAB_145c9720b;
                goto LAB_145c971f0;
              }
              break;
            }
            iVar13 = *(int *)(*(longlong *)pTVar25 + 0x10 + (longlong)iVar13 * 0x18);
          } while (iVar13 != -1);
        }
      }
      goto LAB_145c97244;
    }
    goto LAB_145c97438;
  }
  uVar17 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar17) {
    lVar28 = (longlong)(int)uVar17 << 4;
    do {
      uVar14 = 0;
      if ((int)uVar17 < (this->Uncompleted).ArrayNum) {
        uVar14 = ~uVar17 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar9 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar28 + 8);
      bVar12 = IsInParallelRHIThread();
      if ((bVar12) || (lVar24 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar24 = 0x20;
      }
      plVar10 = *(longlong **)(lVar9 + lVar24);
      if (plVar10 == (longlong *)0x0) {
LAB_145c97543:
        uVar14 = 0;
        if ((int)uVar17 < (this->Uncompleted).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar28 + 8));
        uVar14 = 0;
        if ((int)uVar17 < (this->Uncompleted).ArrayNum) {
          uVar14 = ~uVar17 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar13 = (this->Uncompleted).ArrayNum;
        pFVar26 = (this->Uncompleted).AllocatorInstance.Data;
        iVar18 = ~uVar17 + iVar13;
        if (1 < iVar18) {
          iVar18 = 1;
        }
        if (iVar18 != 0) {
          memmove(pFVar26 + lVar28,pFVar26 + (longlong)(iVar13 - iVar18) * 0x10,
                  (longlong)iVar18 << 4);
        }
        piVar1 = &(this->Uncompleted).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else if ((*plVar10 == 0) || (*(char *)(*plVar10 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar9 + lVar24) == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar24 + lVar9) + 8) != 0) {
          pFVar16 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                              ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                               (lVar9 + lVar24));
          this_00 = (pFVar16->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145c97618;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145c97543;
      }
LAB_145c97618:
      lVar28 = lVar28 + -0x10;
      uVar17 = uVar17 - 1;
    } while (-1 < (int)uVar17);
  }
  return;
  while (iVar13 = *(int *)(*(longlong *)pTVar25 + 0x10 + (longlong)iVar13 * 0x18), iVar13 != -1) {
LAB_145c970e0:
    if (*(ulonglong *)(*(longlong *)pTVar25 + (longlong)iVar13 * 0x18) == uVar6) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!BackfillMap->Contains(ThreadKey)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x75f,L"");
      if (bVar12) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      break;
    }
  }
LAB_145c9711d:
  if (*puVar15 != *(ulonglong *)pFVar4) {
    this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
    pTVar2 = &this->DeleteArray;
    pFVar8 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar8 <= pFVar4) && (pFVar4 < pFVar8 + (longlong)(this->DeleteArray).ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    iVar13 = (this->DeleteArray).ArrayNum;
    piVar1 = &(this->DeleteArray).ArrayMax;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->DeleteArray).ArrayNum = iVar13 + 1;
    *(ulonglong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 8) = *(ulonglong *)pFVar4;
  }
  goto LAB_145c973a3;
  while (iVar13 = (int)puVar15[2], puVar15 = puVar27, iVar13 != -1) {
LAB_145c971f0:
    puVar15 = (ulonglong *)(*(longlong *)pTVar25 + (longlong)iVar13 * 0x18);
    if (*(ulonglong *)(*(longlong *)pTVar25 + (longlong)iVar13 * 0x18) == uVar6) break;
  }
LAB_145c9720b:
  puVar20 = puVar15 + 1;
  if (puVar15 == (ulonglong *)0x0) {
    puVar20 = puVar27;
  }
  if ((*puVar20 != *(ulonglong *)pFVar4) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("!BackfillMap->Contains(ThreadKey) || *BackfillMap->Find(ThreadKey) == ThreadValue"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x76b,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_145c97244:
  pTVar5 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
            *)this->BackfillMap;
  uVar19 = *puVar3;
  if (*(int *)&(pTVar5->Elements).field_0x8 != *(int *)&(pTVar5->Elements).field_0x34) {
    uVar17 = ((uint)(uVar19 >> 0x14) & 0xffff ^ (uint)(uVar19 >> 4)) * -0x7a143595;
    uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
    FVar7 = (pTVar5->Hash).SecondaryData;
    FVar23 = (ForElementType<FSetElementId>)&pTVar5->Hash;
    if (FVar7 != (ForElementType<FSetElementId>)0x0) {
      FVar23 = FVar7;
    }
    iVar13 = *(int *)((longlong)FVar23 +
                     ((longlong)pTVar5->HashSize - 1U & (longlong)(int)(uVar17 >> 0x10 ^ uVar17)) *
                     4);
    if (iVar13 != -1) {
      do {
        if (*(ulonglong *)(*(longlong *)&pTVar5->Elements + (longlong)iVar13 * 0x18) == uVar19) {
          TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
          ::RemoveByIndex(pTVar5,iVar13);
          break;
        }
        iVar13 = *(int *)(*(longlong *)&pTVar5->Elements + 0x10 + (longlong)iVar13 * 0x18);
      } while (iVar13 != -1);
    }
  }
  local_90 = puVar3;
  local_88 = pFVar4;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
            ((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)this->CurrentMap,&local_res18,(bool *)&local_90);
  local_f0 = *puVar3;
  pFVar8 = (this->Uncompleted).AllocatorInstance.Data;
  uStack_e8 = *(ulonglong *)pFVar4;
  if (((pFVar8 <= (FScriptContainerElement *)&local_f0) &&
      ((FScriptContainerElement *)&local_f0 < pFVar8 + (longlong)(this->Uncompleted).ArrayMax * 0x10
      )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar13 = (this->Uncompleted).ArrayNum;
  piVar1 = &(this->Uncompleted).ArrayMax;
  if (iVar13 == *piVar1) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,(ForAnyElementType *)this,piVar1);
  }
  (this->Uncompleted).ArrayNum = iVar13 + 1;
  pFVar4 = (this->Uncompleted).AllocatorInstance.Data + (longlong)iVar13 * 0x10;
  *(ulonglong *)pFVar4 = local_f0;
  *(ulonglong *)(pFVar4 + 8) = uStack_e8;
LAB_145c973a3:
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::RemoveByIndex(pTStack_b0,uStack_bc);
  local_a0 = CONCAT11(local_a0._1_1_,1);
  uStack_c0 = uStack_c0 & ~auStack_d0._4_4_;
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_d0);
  uVar19 = (ulonglong)uStack_bc;
  if (*(int *)(auStack_d0._8_8_ + 0x18) <= (int)uStack_bc) goto code_r0x000145c973d6;
  goto LAB_145c96f80;
code_r0x000145c973d6:
  if (((char)local_a0 != '\0') && (local_a0._1_1_ != '\0')) {
    uVar17 = *(int *)&(local_a8->Elements).field_0x8 - *(int *)&(local_a8->Elements).field_0x34;
    if (uVar17 < 4) {
      iVar13 = 1;
    }
    else {
      uVar19 = (ulonglong)((uVar17 >> 1) + 7) * 2 + 1;
      lVar28 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      local_res18.Value._0_4_ = (undefined4)lVar28;
      iVar13 = 1 << ((byte)lVar28 & 0x1f);
    }
    if (((0 < (int)uVar17) && (local_a8->HashSize < iVar13)) || (iVar13 < local_a8->HashSize)) {
      local_a8->HashSize = iVar13;
      TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
      ::Rehash(local_a8);
    }
  }
LAB_145c97438:
  uVar19 = (ulonglong)local_res10;
  pFVar26 = pFVar26 + 8;
  goto LAB_145c96efb;
}

// ConsolidateThreadedCaches @ 145c97650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ConsolidateThreadedCaches
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  int *piVar1;
  TArray<FGraphicsPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar3;
  ForElementType<FSetElementId> FVar4;
  longlong lVar5;
  FPSOPrecacheAsyncTask *this_00;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  FCompletionState *pFVar11;
  int iVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  ForElementType<FSetElementId> FVar17;
  FScriptContainerElement *pFVar18;
  FGraphicsPipelineStateInitializer *pFVar19;
  FGraphicsPipelineStateInitializer *pFVar20;
  FScriptContainerElement *pFVar21;
  FGraphicsPipelineStateInitializer *pFVar22;
  longlong lVar23;
  longlong *plVar24;
  undefined1 auStack_228 [32];
  FGraphicsPipelineStateInitializer *local_208;
  FGraphicsPipelineStateInitializer *local_200;
  longlong local_1f8;
  longlong local_1f0;
  undefined8 local_1e8;
  undefined1 local_1d8 [8];
  FScriptContainerElement *local_1d0;
  uint local_1c8;
  FScriptContainerElement *local_1c0;
  longlong *local_1b8;
  undefined1 auStack_1b0 [16];
  uint uStack_1a0;
  uint uStack_19c;
  longlong local_198;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_190;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *local_188;
  undefined2 local_180;
  TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
  local_178;
  FGraphicsPipelineStateInitializer *local_168;
  undefined1 local_160 [32];
  longlong local_140;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_138;
  FGraphicsPipelineStateInitializer local_128;
  FRHIVertexDeclaration *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_228;
  bVar7 = IsInRenderingThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x74f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1c8 = (this->AllThreadsPipelineStateCache).ArrayNum;
  uVar13 = (ulonglong)(int)local_1c8;
  pFVar18 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  local_1d0 = pFVar18 + uVar13 * 8;
  pFVar21 = local_1d0;
  while( true ) {
    local_1c0 = pFVar18;
    if ((this->AllThreadsPipelineStateCache).ArrayNum != (int)uVar13) {
      local_1d8[0] = 0;
      `TCheckedPointerIterator<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_1d8);
    }
    if (pFVar18 == pFVar21) break;
    pTVar3 = *(TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar18;
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_160,pTVar3);
    local_180 = 0;
    stack0xfffffffffffffe58 = local_160._16_16_;
    local_1b8 = (longlong *)local_160._0_8_;
    auStack_1b0._0_8_ = local_160._8_8_;
    local_198 = local_140;
    pTStack_190 = pTStack_138;
    uVar13 = local_160._24_8_ >> 0x20;
    local_188 = pTVar3;
    if (local_160._28_4_ < *(int *)(local_160._16_8_ + 0x18)) {
      do {
        plVar24 = (longlong *)0x0;
        pTVar3 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                  *)this->CurrentMap;
        pFVar22 = (FGraphicsPipelineStateInitializer *)((longlong)(int)uVar13 * 0xf0 + *local_1b8);
        pFVar20 = pFVar22 + 1;
        uVar8 = ::GetTypeHash(pFVar22);
        iVar9 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                ::FindIndexByHash<FGraphicsPipelineStateInitializer>(pTVar3,uVar8,pFVar22);
        if (iVar9 == -1) {
LAB_145c978a1:
          uVar8 = ::GetTypeHash(pFVar22);
          pTVar3 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                    *)this->BackfillMap;
          iVar9 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGraphicsPipelineStateInitializer>(pTVar3,uVar8,pFVar22);
          if (iVar9 != -1) {
            uVar8 = ::GetTypeHash(pFVar22);
            iVar9 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                    ::FindIndexByHash<FGraphicsPipelineStateInitializer>(pTVar3,uVar8,pFVar22);
            plVar16 = plVar24;
            if (iVar9 != -1) {
              plVar16 = (longlong *)((longlong)iVar9 * 0xf0 + *(longlong *)&pTVar3->Elements);
            }
            plVar15 = plVar16 + 0x1c;
            if (plVar16 == (longlong *)0x0) {
              plVar15 = plVar24;
            }
            if (((FRHIVertexDeclaration *)*plVar15 !=
                 (pFVar20->BoundShaderState).VertexDeclarationRHI) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!BackfillMap->Contains(ThreadKey) || *BackfillMap->Find(ThreadKey) == ThreadValue"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                   ,0x76b,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          pTVar3 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                    *)this->BackfillMap;
          if (*(int *)&(pTVar3->Elements).field_0x8 != *(int *)&(pTVar3->Elements).field_0x34) {
            uVar8 = ::GetTypeHash(pFVar22);
            FVar4 = (pTVar3->Hash).SecondaryData;
            FVar17 = (ForElementType<FSetElementId>)&pTVar3->Hash;
            if (FVar4 != (ForElementType<FSetElementId>)0x0) {
              FVar17 = FVar4;
            }
            iVar9 = *(int *)((longlong)FVar17 +
                            ((longlong)pTVar3->HashSize - 1U & (longlong)(int)uVar8) * 4);
            if (iVar9 != -1) {
              lVar14 = *(longlong *)&pTVar3->Elements;
              do {
                pFVar19 = (FGraphicsPipelineStateInitializer *)((longlong)iVar9 * 0xf0 + lVar14);
                bVar7 = FGraphicsPipelineStateInitializer::operator==(pFVar19,pFVar22);
                if (bVar7) {
                  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTVar3,iVar9);
                  break;
                }
                iVar9 = *(int *)&pFVar19[1].BoundShaderState.VertexShaderRHI;
              } while (iVar9 != -1);
            }
          }
          local_178.Value = (FGraphicsPipelineState **)pFVar22;
          local_168 = pFVar20;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
                    ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                      *)this->CurrentMap,&local_178,(bool *)&local_178.Value);
          local_128.BoundShaderState.VertexDeclarationRHI =
               (pFVar22->BoundShaderState).VertexDeclarationRHI;
          local_128.BoundShaderState.VertexShaderRHI = (pFVar22->BoundShaderState).VertexShaderRHI;
          pFVar19 = (FGraphicsPipelineStateInitializer *)(this->Uncompleted).AllocatorInstance.Data;
          local_128.BoundShaderState.PixelShaderRHI = (pFVar22->BoundShaderState).PixelShaderRHI;
          local_128.BoundShaderState.MeshShaderRHI = (pFVar22->BoundShaderState).MeshShaderRHI;
          local_128.BoundShaderState.AmplificationShaderRHI =
               (pFVar22->BoundShaderState).AmplificationShaderRHI;
          local_128.BoundShaderState.GeometryShaderRHI =
               (pFVar22->BoundShaderState).GeometryShaderRHI;
          local_128.BoundShaderState.WorkGraphMeshShaderRHI =
               (pFVar22->BoundShaderState).WorkGraphMeshShaderRHI;
          local_128.BlendState = pFVar22->BlendState;
          local_128.RasterizerState = pFVar22->RasterizerState;
          local_128.DepthStencilState = pFVar22->DepthStencilState;
          local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0] =
               (pFVar22->ImmutableSamplerState).ImmutableSamplers.Elements[0];
          local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1] =
               (pFVar22->ImmutableSamplerState).ImmutableSamplers.Elements[1];
          local_128.PrimitiveType = pFVar22->PrimitiveType;
          local_128.RenderTargetsEnabled = pFVar22->RenderTargetsEnabled;
          local_128.RenderTargetFormats.Elements = *&(pFVar22->RenderTargetFormats).Elements;
          local_128.RenderTargetFlags.Elements[0] = (pFVar22->RenderTargetFlags).Elements[0];
          local_128.RenderTargetFlags.Elements[1] = (pFVar22->RenderTargetFlags).Elements[1];
          local_128.RenderTargetFlags.Elements[2] = (pFVar22->RenderTargetFlags).Elements[2];
          local_128.RenderTargetFlags.Elements[3] = (pFVar22->RenderTargetFlags).Elements[3];
          local_128.RenderTargetFlags.Elements[4] = (pFVar22->RenderTargetFlags).Elements[4];
          local_128.RenderTargetFlags.Elements[5] = (pFVar22->RenderTargetFlags).Elements[5];
          local_128.RenderTargetFlags.Elements[6] = (pFVar22->RenderTargetFlags).Elements[6];
          local_128.RenderTargetFlags.Elements[7] = (pFVar22->RenderTargetFlags).Elements[7];
          local_128.DepthStencilTargetFormat = pFVar22->DepthStencilTargetFormat;
          local_128._177_7_ = *(undefined7 *)&pFVar22->field_0xb1;
          local_128.DepthStencilTargetFlag = pFVar22->DepthStencilTargetFlag;
          local_128.DepthTargetLoadAction = pFVar22->DepthTargetLoadAction;
          local_128.DepthTargetStoreAction = pFVar22->DepthTargetStoreAction;
          local_128.StencilTargetLoadAction = pFVar22->StencilTargetLoadAction;
          local_128.StencilTargetStoreAction = pFVar22->StencilTargetStoreAction;
          local_128.DepthStencilAccess.Value = (pFVar22->DepthStencilAccess).Value;
          local_128.NumSamples = pFVar22->NumSamples;
          local_128.SubpassHint = pFVar22->SubpassHint;
          local_128.SubpassIndex = pFVar22->SubpassIndex;
          local_128.ConservativeRasterization = pFVar22->ConservativeRasterization;
          local_128.bDepthBounds = pFVar22->bDepthBounds;
          local_128.MultiViewCount = pFVar22->MultiViewCount;
          local_128.bHasFragmentDensityAttachment = pFVar22->bHasFragmentDensityAttachment;
          local_128.bAllowVariableRateShading = pFVar22->bAllowVariableRateShading;
          local_128.ShadingRate = pFVar22->ShadingRate;
          local_128.field25_0xd2 = pFVar22->field25_0xd2;
          local_128._212_4_ = *(undefined4 *)&pFVar22->field_0xd4;
          local_128.StatePrecachePSOHash = pFVar22->StatePrecachePSOHash;
          local_48 = (pFVar20->BoundShaderState).VertexDeclarationRHI;
          if ((pFVar19 <= &local_128) &&
             (lVar14 = (longlong)(this->Uncompleted).ArrayMax,
             &local_128 < (FGraphicsPipelineStateInitializer *)((longlong)pFVar19 + lVar14 * 0xe8)))
          {
            local_1f0 = (longlong)(this->Uncompleted).ArrayNum;
            local_1e8 = 0xe8;
            local_208 = &local_128;
            local_200 = pFVar19;
            local_1f8 = lVar14;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar7) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar9 = (this->Uncompleted).ArrayNum;
          piVar1 = &(this->Uncompleted).ArrayMax;
          if (iVar9 == *piVar1) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x8e8,(ForAnyElementType *)this,piVar1);
          }
          (this->Uncompleted).ArrayNum = iVar9 + 1;
          pFVar18 = (this->Uncompleted).AllocatorInstance.Data + (longlong)iVar9 * 0xe8;
          *(FRHIVertexDeclaration **)pFVar18 = local_128.BoundShaderState.VertexDeclarationRHI;
          *(FRHIVertexShader **)(pFVar18 + 8) = local_128.BoundShaderState.VertexShaderRHI;
          *(FRHIPixelShader **)(pFVar18 + 0x10) = local_128.BoundShaderState.PixelShaderRHI;
          *(FRHIMeshShader **)(pFVar18 + 0x18) = local_128.BoundShaderState.MeshShaderRHI;
          *(FRHIAmplificationShader **)(pFVar18 + 0x20) =
               local_128.BoundShaderState.AmplificationShaderRHI;
          *(FRHIGeometryShader **)(pFVar18 + 0x28) = local_128.BoundShaderState.GeometryShaderRHI;
          *(FRHIWorkGraphShader **)(pFVar18 + 0x30) =
               local_128.BoundShaderState.WorkGraphMeshShaderRHI;
          *(FRHIBlendState **)(pFVar18 + 0x38) = local_128.BlendState;
          *(FRHIRasterizerState **)(pFVar18 + 0x40) = local_128.RasterizerState;
          *(FRHIDepthStencilState **)(pFVar18 + 0x48) = local_128.DepthStencilState;
          *(FRHISamplerState **)(pFVar18 + 0x50) =
               local_128.ImmutableSamplerState.ImmutableSamplers.Elements[0];
          *(FRHISamplerState **)(pFVar18 + 0x58) =
               local_128.ImmutableSamplerState.ImmutableSamplers.Elements[1];
          *(undefined8 *)(pFVar18 + 0x60) = local_128._96_8_;
          *(uchar (*) [8])(pFVar18 + 0x68) = local_128.RenderTargetFormats.Elements;
          *(ETextureCreateFlags *)(pFVar18 + 0x70) = local_128.RenderTargetFlags.Elements[0];
          *(ETextureCreateFlags *)(pFVar18 + 0x78) = local_128.RenderTargetFlags.Elements[1];
          *(ETextureCreateFlags *)(pFVar18 + 0x80) = local_128.RenderTargetFlags.Elements[2];
          *(ETextureCreateFlags *)(pFVar18 + 0x88) = local_128.RenderTargetFlags.Elements[3];
          *(ETextureCreateFlags *)(pFVar18 + 0x90) = local_128.RenderTargetFlags.Elements[4];
          *(ETextureCreateFlags *)(pFVar18 + 0x98) = local_128.RenderTargetFlags.Elements[5];
          *(ETextureCreateFlags *)(pFVar18 + 0xa0) = local_128.RenderTargetFlags.Elements[6];
          *(ETextureCreateFlags *)(pFVar18 + 0xa8) = local_128.RenderTargetFlags.Elements[7];
          *(undefined8 *)(pFVar18 + 0xb0) = local_128._176_8_;
          *(ETextureCreateFlags *)(pFVar18 + 0xb8) = local_128.DepthStencilTargetFlag;
          *(undefined8 *)(pFVar18 + 0xc0) = local_128._192_8_;
          *(undefined8 *)(pFVar18 + 200) = local_128._200_8_;
          *(undefined8 *)(pFVar18 + 0xd0) = local_128._208_8_;
          *(ulong64 *)(pFVar18 + 0xd8) = local_128.StatePrecachePSOHash;
          *(FRHIVertexDeclaration **)(pFVar18 + 0xe0) = local_48;
        }
        else {
          lVar14 = (longlong)iVar9 * 0xf0 + *(longlong *)&pTVar3->Elements;
          plVar16 = (longlong *)(lVar14 + 0xe0);
          if (lVar14 == 0) {
            plVar16 = plVar24;
          }
          if (plVar16 == (longlong *)0x0) goto LAB_145c978a1;
          uVar8 = ::GetTypeHash(pFVar22);
          iVar9 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                  ::FindIndexByHash<FGraphicsPipelineStateInitializer>
                            ((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                              *)this->BackfillMap,uVar8,pFVar22);
          if ((iVar9 != -1) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("!BackfillMap->Contains(ThreadKey)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                 ,0x75f,L""), bVar7)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          if ((FRHIVertexDeclaration *)*plVar16 != (pFVar20->BoundShaderState).VertexDeclarationRHI)
          {
            this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
            pTVar2 = &this->DeleteArray;
            pFVar22 = (FGraphicsPipelineStateInitializer *)(pTVar2->AllocatorInstance).Data;
            if ((pFVar22 <= pFVar20) &&
               (lVar14 = (longlong)(this->DeleteArray).ArrayMax,
               pFVar20 < (FGraphicsPipelineStateInitializer *)
                         (&(((FGraphicsPipelineStateInitializer *)
                            (&pFVar22->ImmutableSamplerState + -5))->BoundShaderState).
                           VertexDeclarationRHI + lVar14))) {
              local_1f0 = (longlong)(this->DeleteArray).ArrayNum;
              local_1e8 = 8;
              local_208 = pFVar20;
              local_200 = pFVar22;
              local_1f8 = lVar14;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                );
              if (bVar7) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            iVar9 = (this->DeleteArray).ArrayNum;
            piVar1 = &(this->DeleteArray).ArrayMax;
            if (iVar9 == *piVar1) {
              iVar9 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->DeleteArray).ArrayNum = iVar9 + 1;
            *(FRHIVertexDeclaration **)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 8) =
                 (pFVar20->BoundShaderState).VertexDeclarationRHI;
          }
        }
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_190,uStack_19c);
        local_180 = CONCAT11(local_180._1_1_,1);
        uStack_1a0 = uStack_1a0 & ~auStack_1b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b0);
        uVar13 = (ulonglong)uStack_19c;
      } while ((int)uStack_19c < *(int *)(auStack_1b0._8_8_ + 0x18));
      pFVar21 = local_1d0;
      if (((char)local_180 == '\0') || (local_180._1_1_ == '\0')) goto LAB_145c97c1d;
      uVar8 = *(int *)&(local_188->Elements).field_0x8 - *(int *)&(local_188->Elements).field_0x34;
      iVar9 = 1;
      if (3 < uVar8) {
        uVar13 = (ulonglong)((uVar8 >> 1) + 7) * 2 + 1;
        lVar14 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        local_178.Key._4_4_ = (undefined4)lVar14;
        iVar9 = 1 << ((byte)lVar14 & 0x1f);
      }
      if ((((int)uVar8 < 1) || (iVar9 <= local_188->HashSize)) && (local_188->HashSize <= iVar9))
      goto LAB_145c97c1d;
      local_188->HashSize = iVar9;
      TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
      ::Rehash(local_188);
      pFVar18 = local_1c0 + 8;
      uVar13 = (ulonglong)local_1c8;
      pFVar21 = local_1d0;
    }
    else {
LAB_145c97c1d:
      uVar13 = (ulonglong)local_1c8;
      pFVar18 = local_1c0 + 8;
    }
  }
  uVar8 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    pFVar20 = (FGraphicsPipelineStateInitializer *)(longlong)(int)uVar8;
    lVar14 = (longlong)pFVar20 * 0xe8;
    do {
      iVar9 = (this->Uncompleted).ArrayNum;
      uVar10 = 0;
      if ((int)uVar8 < iVar9) {
        uVar10 = ~uVar8 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (local_208 = pFVar20, local_200 = (FGraphicsPipelineStateInitializer *)(longlong)iVar9,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar14 + 0xe0);
      bVar7 = IsInParallelRHIThread();
      if ((bVar7) || (lVar23 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar23 = 0x20;
      }
      plVar24 = *(longlong **)(lVar5 + lVar23);
      if (plVar24 == (longlong *)0x0) {
LAB_145c97d37:
        iVar9 = (this->Uncompleted).ArrayNum;
        uVar10 = 0;
        if ((int)uVar8 < iVar9) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_208 = pFVar20, local_200 = (FGraphicsPipelineStateInitializer *)(longlong)iVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar14 + 0xe0));
        iVar9 = (this->Uncompleted).ArrayNum;
        uVar10 = 0;
        if ((int)uVar8 < iVar9) {
          uVar10 = ~uVar8 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (local_208 = pFVar20, local_200 = (FGraphicsPipelineStateInitializer *)(longlong)iVar9,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar9 = (this->Uncompleted).ArrayNum;
        pFVar18 = (this->Uncompleted).AllocatorInstance.Data;
        iVar12 = ~uVar8 + iVar9;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(pFVar18 + lVar14,pFVar18 + (longlong)(iVar9 - iVar12) * 0xe8,
                  (longlong)iVar12 * 0xe8);
        }
        piVar1 = &(this->Uncompleted).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else if ((*plVar24 == 0) || (*(char *)(*plVar24 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar5 + lVar23) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar5 + lVar23) + 8) != 0) {
          pFVar11 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                              ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                               (lVar5 + lVar23));
          this_00 = (pFVar11->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145c97e1b;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145c97d37;
      }
LAB_145c97e1b:
      pFVar20 = (FGraphicsPipelineStateInitializer *)
                ((longlong)&pFVar20[-1].StatePrecachePSOHash + 7);
      lVar14 = lVar14 + -0xe8;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  return;
}

// ConsolidateThreadedCaches @ 145c97e70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ConsolidateThreadedCaches
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  int *piVar1;
  TArray<FWorkGraphPipelineState_*,TSizedDefaultAllocator<32>_> *pTVar2;
  longlong lVar3;
  longlong lVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  FWorkGraphPipelineStateInitializer *pFVar7;
  FPSOPrecacheAsyncTask *this_00;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FCompletionState *pFVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  ForElementType<FSetElementId> FVar17;
  FScriptContainerElement *pFVar18;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar19;
  longlong lVar20;
  longlong *plVar21;
  longlong lVar22;
  FWorkGraphPipelineStateInitializer *pFVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  undefined1 local_res8 [8];
  uint local_res10;
  TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
  local_res18;
  undefined1 auStack_140 [16];
  uint uStack_130;
  uint uStack_12c;
  longlong local_128;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_120;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *local_118;
  undefined2 local_110;
  FScriptContainerElement *local_108;
  FWorkGraphPipelineStateInitializer local_100;
  longlong local_98;
  FWorkGraphPipelineStateInitializer *local_90;
  FWorkGraphPipelineStateInitializer *local_88;
  undefined1 local_80 [32];
  longlong local_60;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_58;
  
  bVar10 = IsInRenderingThread();
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                          ,0x74f,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_res10 = (this->AllThreadsPipelineStateCache).ArrayNum;
  uVar14 = (ulonglong)(int)local_res10;
  pFVar24 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  local_108 = pFVar24 + uVar14 * 8;
  while( true ) {
    pFVar18 = local_108;
    if ((this->AllThreadsPipelineStateCache).ArrayNum != (int)uVar14) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar24 == pFVar18) break;
    pTVar19 = *(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                **)pFVar24;
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_80,pTVar19);
    uVar9 = local_80._0_8_;
    local_110 = 0;
    stack0xfffffffffffffec8 = local_80._16_16_;
    auStack_140._0_8_ = local_80._8_8_;
    local_128 = local_60;
    pTStack_120 = pTStack_58;
    uVar14 = local_80._24_8_ >> 0x20;
    local_118 = pTVar19;
    if (local_80._28_4_ < *(int *)(local_80._16_8_ + 0x18)) {
      do {
        pTVar19 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   *)this->CurrentMap;
        pFVar23 = (FWorkGraphPipelineStateInitializer *)
                  ((longlong)(int)uVar14 * 0x78 + *(longlong *)uVar9);
        pFVar7 = pFVar23 + 1;
        uVar25 = (int)((ulonglong)pFVar23->_padding_ >> 0x20) * 0x17 + (int)pFVar23->_padding_ ^
                 (int)((ulonglong)pFVar23->_padding_ >> 0x20) * 0x17 + (int)pFVar23->_padding_ ^
                 (int)((ulonglong)pFVar23->_padding_ >> 0x20) * 0x17 + (int)pFVar23->_padding_ ^
                 (int)((ulonglong)pFVar23->_padding_ >> 0x20) * 0x17 + (int)pFVar23->_padding_;
        iVar11 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                 ::FindIndexByHash<FWorkGraphPipelineStateInitializer>(pTVar19,uVar25,pFVar23);
        if (iVar11 == -1) {
          pTVar19 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                     *)this->BackfillMap;
LAB_145c98173:
          iVar11 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FWorkGraphPipelineStateInitializer>(pTVar19,uVar25,pFVar23);
          if (iVar11 != -1) {
            iVar11 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                     ::FindIndexByHash<FWorkGraphPipelineStateInitializer>(pTVar19,uVar25,pFVar23);
            plVar21 = (longlong *)0x0;
            if (iVar11 != -1) {
              plVar21 = (longlong *)((longlong)iVar11 * 0x78 + *(longlong *)&pTVar19->Elements);
            }
            plVar15 = plVar21 + 0xd;
            if (plVar21 == (longlong *)0x0) {
              plVar15 = (longlong *)0x0;
            }
            if ((*plVar15 != pFVar7->_padding_) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("!BackfillMap->Contains(ThreadKey) || *BackfillMap->Find(ThreadKey) == ThreadValue"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                    ,0x76b,L""), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          pTVar19 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                     *)this->BackfillMap;
          if (*(int *)&(pTVar19->Elements).field_0x8 != *(int *)&(pTVar19->Elements).field_0x34) {
            lVar20 = pFVar23->_padding_;
            lVar3 = pFVar23->_padding_;
            lVar22 = pFVar23->_padding_;
            lVar4 = pFVar23->_padding_;
            FVar5 = (pTVar19->Hash).SecondaryData;
            FVar17 = (ForElementType<FSetElementId>)&pTVar19->Hash;
            if (FVar5 != (ForElementType<FSetElementId>)0x0) {
              FVar17 = FVar5;
            }
            iVar11 = *(int *)((longlong)FVar17 +
                             ((longlong)pTVar19->HashSize - 1U &
                             (longlong)
                             ((int)((ulonglong)lVar20 >> 0x20) * 0x17 + (int)lVar20 ^
                              (int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3 ^
                              (int)((ulonglong)lVar22 >> 0x20) * 0x17 + (int)lVar22 ^
                             (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4)) * 4);
            if (iVar11 != -1) {
              lVar6 = *(longlong *)&pTVar19->Elements;
              do {
                lVar16 = (longlong)iVar11 * 0x78;
                if ((((*(longlong *)(lVar16 + lVar6) == lVar22) &&
                     (*(longlong *)(lVar16 + 8 + lVar6) == lVar3)) &&
                    (*(longlong *)(lVar16 + 0x10 + lVar6) == lVar20)) &&
                   (*(longlong *)(lVar16 + 0x18 + lVar6) == lVar4)) {
                  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                  ::RemoveByIndex(pTVar19,iVar11);
                  break;
                }
                iVar11 = *(int *)(lVar16 + 0x70 + lVar6);
              } while (iVar11 != -1);
            }
          }
          local_90 = pFVar23;
          local_88 = pFVar7;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
                    ((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                      *)this->CurrentMap,&local_res18,(bool *)&local_90);
          FWorkGraphPipelineStateInitializer::FWorkGraphPipelineStateInitializer(&local_100,pFVar23)
          ;
          local_98 = pFVar7->_padding_;
          pFVar7 = (FWorkGraphPipelineStateInitializer *)(this->Uncompleted).AllocatorInstance.Data;
          if (((pFVar7 <= &local_100) &&
              (&local_100 <
               (FWorkGraphPipelineStateInitializer *)
               ((longlong)pFVar7 + (longlong)(this->Uncompleted).ArrayMax * 0x70))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar11 = (this->Uncompleted).ArrayNum;
          piVar1 = &(this->Uncompleted).ArrayMax;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x870,(ForAnyElementType *)this,piVar1);
          }
          (this->Uncompleted).ArrayNum = iVar11 + 1;
          pFVar18 = (this->Uncompleted).AllocatorInstance.Data + (longlong)iVar11 * 0x70;
          *(longlong *)pFVar18 = local_100._padding_;
          *(longlong *)(pFVar18 + 8) = local_100._padding_;
          *(longlong *)(pFVar18 + 0x10) = local_100._padding_;
          *(longlong *)(pFVar18 + 0x18) = local_100._padding_;
          *(undefined8 *)(pFVar18 + 0x20) = 0;
          *(FScriptContainerElement **)(pFVar18 + 0x20) =
               local_100.ProgramName.Data.AllocatorInstance.Data;
          local_100.ProgramName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar18 + 0x28) = local_100.ProgramName.Data.ArrayNum;
          *(int *)(pFVar18 + 0x2c) = local_100.ProgramName.Data.ArrayMax;
          local_100.ProgramName.Data.ArrayNum = 0;
          local_100.ProgramName.Data.ArrayMax = 0;
          *(undefined8 *)(pFVar18 + 0x30) = 0;
          *(FScriptContainerElement **)(pFVar18 + 0x30) = local_100.NameMaps.AllocatorInstance.Data;
          local_100.NameMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(pFVar18 + 0x38) = local_100.NameMaps.ArrayNum;
          *(int *)(pFVar18 + 0x3c) = local_100.NameMaps.ArrayMax;
          local_100.NameMaps.ArrayNum = 0;
          local_100.NameMaps.ArrayMax = 0;
          *(int *)(pFVar18 + 0x40) = local_100.RootShaderIndex;
          *(FRHIWorkGraphShader ***)(pFVar18 + 0x48) = local_100.ShaderTable.DataPtr;
          *(undefined8 *)(pFVar18 + 0x50) = local_100.ShaderTable._8_8_;
          *(FGraphicsPipelineStateInitializer ***)(pFVar18 + 0x58) =
               local_100.GraphicsPSOTable.DataPtr;
          *(undefined8 *)(pFVar18 + 0x60) = local_100.GraphicsPSOTable._8_8_;
          *(longlong *)(pFVar18 + 0x68) = local_98;
          DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>((FNameMap *)0x0,0);
          if (local_100.NameMaps.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.NameMaps.AllocatorInstance.Data);
          }
          if (local_100.ProgramName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_100.ProgramName.Data.AllocatorInstance.Data);
          }
        }
        else {
          lVar20 = (longlong)iVar11 * 0x78 + *(longlong *)&pTVar19->Elements;
          pTVar19 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                     *)this->BackfillMap;
          plVar21 = (longlong *)(lVar20 + 0x68);
          if (lVar20 == 0) {
            plVar21 = (longlong *)0x0;
          }
          if (plVar21 == (longlong *)0x0) goto LAB_145c98173;
          iVar11 = TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   ::FindIndexByHash<FWorkGraphPipelineStateInitializer>(pTVar19,uVar25,pFVar23);
          if ((iVar11 != -1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!BackfillMap->Contains(ThreadKey)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                                  ,0x75f,L""), bVar10)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*plVar21 != pFVar7->_padding_) {
            this->DuplicateStateGenerated = this->DuplicateStateGenerated + 1;
            pTVar2 = &this->DeleteArray;
            pFVar23 = (FWorkGraphPipelineStateInitializer *)(pTVar2->AllocatorInstance).Data;
            if (((pFVar23 <= pFVar7) &&
                (pFVar7 < (FWorkGraphPipelineStateInitializer *)
                          (&pFVar23->_padding_ + (this->DeleteArray).ArrayMax))) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar10)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            iVar11 = (this->DeleteArray).ArrayNum;
            piVar1 = &(this->DeleteArray).ArrayMax;
            if (iVar11 == *piVar1) {
              iVar11 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,&pTVar2->AllocatorInstance,piVar1);
            }
            (this->DeleteArray).ArrayNum = iVar11 + 1;
            *(longlong *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8) =
                 pFVar7->_padding_;
          }
        }
        TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
        ::RemoveByIndex(pTStack_120,uStack_12c);
        local_110 = CONCAT11(local_110._1_1_,1);
        uStack_130 = uStack_130 & ~auStack_140._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_140);
        uVar14 = (ulonglong)uStack_12c;
      } while ((int)uStack_12c < *(int *)(auStack_140._8_8_ + 0x18));
      if (((char)local_110 != '\0') && (local_110._1_1_ != '\0')) {
        uVar25 = *(int *)&(local_118->Elements).field_0x8 -
                 *(int *)&(local_118->Elements).field_0x34;
        if (uVar25 < 4) {
          iVar11 = 1;
        }
        else {
          uVar14 = (ulonglong)((uVar25 >> 1) + 7) * 2 + 1;
          lVar20 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar20 == 0; lVar20 = lVar20 + -1) {
            }
          }
          local_res18.Value._0_4_ = (undefined4)lVar20;
          iVar11 = 1 << ((byte)lVar20 & 0x1f);
        }
        if (((0 < (int)uVar25) && (local_118->HashSize < iVar11)) || (iVar11 < local_118->HashSize))
        {
          local_118->HashSize = iVar11;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_118);
        }
      }
    }
    uVar14 = (ulonglong)local_res10;
    pFVar24 = pFVar24 + 8;
  }
  uVar25 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar25) {
    lVar20 = (longlong)(int)uVar25 * 0x70;
    do {
      uVar12 = 0;
      if ((int)uVar25 < (this->Uncompleted).ArrayNum) {
        uVar12 = ~uVar25 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar3 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar20 + 0x68);
      bVar10 = IsInParallelRHIThread();
      if ((bVar10) || (lVar22 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar22 = 0x20;
      }
      plVar21 = *(longlong **)(lVar22 + lVar3);
      if (plVar21 == (longlong *)0x0) {
LAB_145c98536:
        uVar12 = 0;
        if ((int)uVar25 < (this->Uncompleted).ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar20 + 0x68));
        uVar12 = 0;
        if ((int)uVar25 < (this->Uncompleted).ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        TArray<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->Uncompleted,uVar25);
      }
      else if ((*plVar21 == 0) || (*(char *)(*plVar21 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar22 + lVar3) == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar3 + lVar22) + 8) != 0) {
          pFVar13 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                              ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                               (lVar3 + lVar22));
          this_00 = (pFVar13->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145c985df;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145c98536;
      }
LAB_145c985df:
      lVar20 = lVar20 + -0x70;
      uVar25 = uVar25 - 1;
    } while (-1 < (int)uVar25);
  }
  return;
}

// DiscardAndSwap @ 145c99860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          **param_1,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          **param_2)

{
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar1;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ulonglong uVar3;
  ForElementType<FSetElementId> FVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  ForElementType<FSetElementId> FVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  int local_b8;
  undefined1 local_b4 [12];
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  pTVar1 = *param_2;
  local_b8 = *(int *)&pTVar1->field_0x8 - *(int *)&pTVar1->field_0x34;
  local_b4._4_8_ = param_1;
  if (0 < local_b8) {
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
    ::
    TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              ((TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)local_98,pTVar1);
    ExecuteImmediateCommand<_TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
              (this,(<lambda_1> *)local_98);
    local_50 = 0;
    if ((void *)local_98._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  pTVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = pTVar1;
  uVar11 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar12 = (longlong)(int)uVar11;
    lVar14 = lVar12 << 4;
    do {
      iVar8 = (this->Uncompleted).ArrayNum;
      pTVar2 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                *)*param_2;
      uVar13 = ~uVar11 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar11 < iVar8) {
        uVar9 = uVar13;
      }
      if ((uVar9 == 0) &&
         (local_c8 = lVar12, local_c0 = (longlong)iVar8,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      uVar3 = *(ulonglong *)((this->Uncompleted).AllocatorInstance.Data + lVar14);
      if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
        bVar7 = false;
        uVar9 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
        FVar4 = (pTVar2->Hash).SecondaryData;
        FVar10 = (ForElementType<FSetElementId>)&pTVar2->Hash;
        if (FVar4 != (ForElementType<FSetElementId>)0x0) {
          FVar10 = FVar4;
        }
        iVar8 = *(int *)((longlong)FVar10 +
                        ((longlong)pTVar2->HashSize - 1U & (longlong)(int)(uVar9 >> 0x10 ^ uVar9)) *
                        4);
        if (iVar8 != -1) {
          do {
            if (*(ulonglong *)(*(longlong *)&pTVar2->Elements + (longlong)iVar8 * 0x18) == uVar3) {
              TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTVar2,iVar8);
              bVar7 = true;
              break;
            }
            iVar8 = *(int *)(*(longlong *)&pTVar2->Elements + 0x10 + (longlong)iVar8 * 0x18);
          } while (iVar8 != -1);
        }
        if (bVar7) {
          iVar8 = (this->Uncompleted).ArrayNum;
          pTVar2 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                    *)*param_1;
          uVar9 = 0;
          if ((int)uVar11 < iVar8) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (local_c8 = lVar12, local_c0 = (longlong)iVar8,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar8 = (*pcVar6)();
            return iVar8;
          }
          iVar8 = (this->Uncompleted).ArrayNum;
          pFVar5 = (this->Uncompleted).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar11 < iVar8) {
            uVar9 = uVar13;
          }
          if ((uVar9 == 0) &&
             (local_c8 = lVar12, local_c0 = (longlong)iVar8,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar8 = (*pcVar6)();
            return iVar8;
          }
          local_a8 = (this->Uncompleted).AllocatorInstance.Data + lVar14;
          local_a0 = pFVar5 + lVar14 + 8;
          TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
                    (pTVar2,(TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>
                             *)local_b4,(bool *)&local_a8);
          param_1 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                     **)local_b4._4_8_;
        }
      }
      lVar12 = lVar12 + -1;
      lVar14 = lVar14 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
  }
  return local_b8;
}

// DiscardAndSwap @ 145c99b40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

int __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
DiscardAndSwap(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
               *this,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                     **param_1,
              TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              **param_2)

{
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar1;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar2;
  ForElementType<FSetElementId> FVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FGraphicsPipelineStateInitializer *this_00;
  longlong lVar15;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  int local_d8;
  int local_d4;
  longlong local_d0;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  **local_c8;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  **local_c0;
  TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
  local_b8;
  FScriptContainerElement *local_a8;
  FScriptContainerElement *local_a0;
  undefined1 local_98 [72];
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  pTVar1 = *param_2;
  local_d4 = *(int *)&pTVar1->field_0x8 - *(int *)&pTVar1->field_0x34;
  local_c8 = param_1;
  local_c0 = param_2;
  if (0 < local_d4) {
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
    ::
    TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
              ((TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)local_98,pTVar1);
    ExecuteImmediateCommand<_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
              (this,(<lambda_1> *)local_98);
    local_50 = 0;
    if ((void *)local_98._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_98._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  pTVar1 = *param_2;
  *param_2 = *param_1;
  *param_1 = pTVar1;
  uVar13 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar15 = (longlong)(int)uVar13;
    lVar14 = lVar15 * 0xe8;
    do {
      iVar8 = (this->Uncompleted).ArrayNum;
      pTVar2 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                *)*param_2;
      uVar12 = ~uVar13 >> 0x1f;
      uVar9 = 0;
      if ((int)uVar13 < iVar8) {
        uVar9 = uVar12;
      }
      local_d0 = lVar14;
      if ((uVar9 == 0) &&
         (local_e8 = lVar15, local_e0 = (longlong)iVar8,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        iVar8 = (*pcVar6)();
        return iVar8;
      }
      if (*(int *)&(pTVar2->Elements).field_0x8 != *(int *)&(pTVar2->Elements).field_0x34) {
        local_b8.Value =
             (FGraphicsPipelineState **)((this->Uncompleted).AllocatorInstance.Data + lVar14);
        uVar9 = ::GetTypeHash((FGraphicsPipelineStateInitializer *)local_b8.Value);
        FVar3 = (pTVar2->Hash).SecondaryData;
        FVar11 = (ForElementType<FSetElementId>)&pTVar2->Hash;
        if (FVar3 != (ForElementType<FSetElementId>)0x0) {
          FVar11 = FVar3;
        }
        local_d8 = 0;
        iVar8 = *(int *)((longlong)FVar11 +
                        ((longlong)pTVar2->HashSize - 1U & (longlong)(int)uVar9) * 4);
        iVar10 = local_d8;
        if (iVar8 != -1) {
          lVar4 = *(longlong *)&pTVar2->Elements;
          do {
            this_00 = (FGraphicsPipelineStateInitializer *)((longlong)iVar8 * 0xf0 + lVar4);
            bVar7 = FGraphicsPipelineStateInitializer::operator==
                              (this_00,(FGraphicsPipelineStateInitializer *)local_b8.Value);
            if (bVar7) {
              TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTVar2,iVar8);
              lVar14 = local_d0;
              param_1 = local_c8;
              iVar10 = 1;
              break;
            }
            iVar8 = *(int *)&this_00[1].BoundShaderState.VertexShaderRHI;
            lVar14 = local_d0;
            param_1 = local_c8;
            iVar10 = local_d8;
          } while (iVar8 != -1);
        }
        param_2 = local_c0;
        if (iVar10 != 0) {
          iVar8 = (this->Uncompleted).ArrayNum;
          pTVar2 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                    *)*param_1;
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (local_e8 = lVar15, local_e0 = (longlong)iVar8,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar8 = (*pcVar6)();
            return iVar8;
          }
          pFVar5 = (this->Uncompleted).AllocatorInstance.Data;
          iVar8 = (this->Uncompleted).ArrayNum;
          uVar9 = 0;
          if ((int)uVar13 < iVar8) {
            uVar9 = uVar12;
          }
          if ((uVar9 == 0) &&
             (local_e8 = lVar15, local_e0 = (longlong)iVar8,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar6 = (code *)swi(3);
            iVar8 = (*pcVar6)();
            return iVar8;
          }
          local_a8 = (this->Uncompleted).AllocatorInstance.Data + lVar14;
          local_a0 = pFVar5 + lVar14 + 0xe0;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
                    (pTVar2,&local_b8,(bool *)&local_a8);
          param_2 = local_c0;
        }
      }
      lVar14 = lVar14 + -0xe8;
      lVar15 = lVar15 + -1;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return local_d4;
}

// DiscardAndSwap @ 145c99e40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

int __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
DiscardAndSwap(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
               *this,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                     **param_1,
              TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
              **param_2)

{
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar1;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ForElementType<FSetElementId> FVar7;
  longlong lVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  ForElementType<FSetElementId> FVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  longlong local_d0;
  int local_c8;
  undefined1 local_c4 [20];
  FScriptContainerElement *local_b0;
  FScriptContainerElement *local_a8;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_f8;
  pTVar1 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
            *)*param_2;
  local_c8 = *(int *)&(pTVar1->Elements).field_0x8 - *(int *)&(pTVar1->Elements).field_0x34;
  local_c4._4_8_ = param_1;
  local_c4._12_8_ = param_2;
  if (0 < local_c8) {
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              (&local_98,pTVar1);
    ExecuteImmediateCommand<_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::DiscardAndSwap_::__l5::<lambda_1>_>
              (this,(<lambda_1> *)&local_98);
    local_98.HashSize = 0;
    if (local_98.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_98.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_98.Elements);
  }
  pTVar2 = *param_2;
  *param_2 = *param_1;
  *param_1 = pTVar2;
  uVar16 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    lVar19 = (longlong)(int)uVar16;
    lVar18 = lVar19 * 0x70;
    do {
      pTVar1 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                *)*param_2;
      iVar12 = (this->Uncompleted).ArrayNum;
      uVar17 = ~uVar16 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar16 < iVar12) {
        uVar11 = uVar17;
      }
      if ((uVar11 == 0) &&
         (local_d8 = lVar19, local_d0 = (longlong)iVar12,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        iVar12 = (*pcVar9)();
        return iVar12;
      }
      pFVar13 = (this->Uncompleted).AllocatorInstance.Data + lVar18;
      if (*(int *)&(pTVar1->Elements).field_0x8 != *(int *)&(pTVar1->Elements).field_0x34) {
        lVar3 = *(longlong *)(pFVar13 + 0x10);
        lVar4 = *(longlong *)(pFVar13 + 8);
        lVar5 = *(longlong *)pFVar13;
        bVar10 = false;
        lVar6 = *(longlong *)(pFVar13 + 0x18);
        FVar7 = (pTVar1->Hash).SecondaryData;
        FVar15 = (ForElementType<FSetElementId>)&pTVar1->Hash;
        if (FVar7 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = FVar7;
        }
        iVar12 = *(int *)((longlong)FVar15 +
                         ((longlong)pTVar1->HashSize - 1U &
                         (longlong)
                         ((int)((ulonglong)lVar3 >> 0x20) * 0x17 + (int)lVar3 ^
                          (int)((ulonglong)lVar4 >> 0x20) * 0x17 + (int)lVar4 ^
                          (int)((ulonglong)lVar5 >> 0x20) * 0x17 + (int)lVar5 ^
                         (int)((ulonglong)lVar6 >> 0x20) * 0x17 + (int)lVar6)) * 4);
        if (iVar12 != -1) {
          lVar8 = *(longlong *)&pTVar1->Elements;
          do {
            lVar14 = (longlong)iVar12 * 0x78;
            if ((((*(longlong *)(lVar14 + lVar8) == lVar5) &&
                 (*(longlong *)(lVar14 + 8 + lVar8) == lVar4)) &&
                (*(longlong *)(lVar14 + 0x10 + lVar8) == lVar3)) &&
               (*(longlong *)(lVar14 + 0x18 + lVar8) == lVar6)) {
              TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              ::RemoveByIndex(pTVar1,iVar12);
              bVar10 = true;
              break;
            }
            iVar12 = *(int *)(lVar14 + 0x70 + lVar8);
          } while (iVar12 != -1);
        }
        if (bVar10) {
          iVar12 = (this->Uncompleted).ArrayNum;
          pTVar1 = *(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                     **)local_c4._4_8_;
          uVar11 = 0;
          if ((int)uVar16 < iVar12) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (local_d8 = lVar19, local_d0 = (longlong)iVar12,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            iVar12 = (*pcVar9)();
            return iVar12;
          }
          pFVar13 = (this->Uncompleted).AllocatorInstance.Data;
          iVar12 = (this->Uncompleted).ArrayNum;
          uVar11 = 0;
          if ((int)uVar16 < iVar12) {
            uVar11 = uVar17;
          }
          if ((uVar11 == 0) &&
             (local_d8 = lVar19, local_d0 = (longlong)iVar12,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            iVar12 = (*pcVar9)();
            return iVar12;
          }
          local_b0 = (this->Uncompleted).AllocatorInstance.Data + lVar18;
          local_a8 = pFVar13 + lVar18 + 0x68;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::
          Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
                    (pTVar1,(TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
                             *)local_c4,(bool *)&local_b0);
        }
      }
      lVar19 = lVar19 + -1;
      lVar18 = lVar18 + -0x70;
      uVar16 = uVar16 - 1;
      param_2 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                 **)local_c4._12_8_;
    } while (-1 < (int)uVar16);
  }
  return local_c8;
}

// Find @ 145ca3ce0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::Find
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          FRHIComputeShader **param_1,FComputePipelineState **param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  FComputePipelineState **ppFVar4;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *this_01;
  longlong lVar5;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *this_02;
  FRHIComputeShader **local_38;
  FComputePipelineState **local_30;
  
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar5 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar5 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  this_02 = this->CurrentMap;
  this_01 = this->BackfillMap;
  bVar3 = IsInParallelRHIThread();
  if (!bVar3) {
    bVar3 = IsInRHIThread();
    if ((!bVar3) && (GEnablePSOAsyncCacheConsolidation != false)) {
      this_02 = this->CurrentMap_RenderThread;
      this_01 = this->BackfillMap_RenderThread;
    }
  }
  ppFVar4 = TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
            ::Find((TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                    *)this_02,*param_1);
  if (ppFVar4 == (FComputePipelineState **)0x0) {
    this_00 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
               *)GetLocalCache(this);
    ppFVar4 = TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
              ::Find((TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                      *)this_00,*param_1);
    if (ppFVar4 == (FComputePipelineState **)0x0) {
      ppFVar4 = TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                ::Find((TMapBase<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                        *)this_01,*param_1);
      if (ppFVar4 == (FComputePipelineState **)0x0) {
        bVar3 = false;
        goto LAB_145ca3dfc;
      }
      local_38 = param_1;
      local_30 = ppFVar4;
      TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>_>
                (this_00,(TPairInitializer<FRHIComputeShader_*_const_&,FComputePipelineState_*_const_&>
                          *)&stack0x00000008,(bool *)&local_38);
    }
  }
  bVar3 = true;
  *param_2 = *ppFVar4;
LAB_145ca3dfc:
  ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return bVar3;
}

// Find @ 145ca3e60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::Find
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this,FGraphicsPipelineStateInitializer *param_1,FGraphicsPipelineState **param_2)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  FGraphicsPipelineStateInitializer *local_38;
  undefined8 *local_30;
  
  bVar2 = IsInParallelRHIThread();
  if ((bVar2) || (lVar8 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar8 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar8);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 == 0 || SCARRY4(iVar4,1) != *piVar1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  pTVar5 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            *)this->CurrentMap;
  this_00 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this->BackfillMap;
  bVar2 = IsInParallelRHIThread();
  if (!bVar2) {
    bVar2 = IsInRHIThread();
    if ((!bVar2) && (GEnablePSOAsyncCacheConsolidation != false)) {
      pTVar5 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                *)this->CurrentMap_RenderThread;
      this_00 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                 *)this->BackfillMap_RenderThread;
    }
  }
  uVar3 = ::GetTypeHash(param_1);
  iVar4 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FGraphicsPipelineStateInitializer>(pTVar5,uVar3,param_1);
  if (iVar4 == -1) {
LAB_145ca3f46:
    pTVar5 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              *)GetLocalCache(this);
    uVar3 = ::GetTypeHash(param_1);
    iVar4 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGraphicsPipelineStateInitializer>(pTVar5,uVar3,param_1);
    if (iVar4 != -1) {
      lVar6 = (longlong)iVar4 * 0xf0 + *(longlong *)&pTVar5->Elements;
      puVar7 = (undefined8 *)(lVar6 + 0xe0);
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) goto LAB_145ca3fe7;
    }
    uVar3 = ::GetTypeHash(param_1);
    iVar4 = TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FGraphicsPipelineStateInitializer>(this_00,uVar3,param_1);
    if (iVar4 != -1) {
      lVar6 = (longlong)iVar4 * 0xf0 + *(longlong *)&this_00->Elements;
      puVar7 = (undefined8 *)(lVar6 + 0xe0);
      if (lVar6 == 0) {
        puVar7 = (undefined8 *)0x0;
      }
      if (puVar7 != (undefined8 *)0x0) {
        local_38 = param_1;
        local_30 = puVar7;
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>_>
                  (pTVar5,(TPairInitializer<FGraphicsPipelineStateInitializer_const_&,FGraphicsPipelineState_*_const_&>
                           *)&stack0x00000008,(bool *)&local_38);
        goto LAB_145ca3fe7;
      }
    }
    bVar2 = false;
  }
  else {
    lVar6 = (longlong)iVar4 * 0xf0 + *(longlong *)&pTVar5->Elements;
    puVar7 = (undefined8 *)(lVar6 + 0xe0);
    if (lVar6 == 0) {
      puVar7 = (undefined8 *)0x0;
    }
    if (puVar7 == (undefined8 *)0x0) goto LAB_145ca3f46;
LAB_145ca3fe7:
    bVar2 = true;
    *param_2 = (FGraphicsPipelineState *)*puVar7;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar8);
  iVar4 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar4 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return bVar2;
}

// Find @ 145ca4060

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

bool __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::Find
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this,FWorkGraphPipelineStateInitializer *param_1,FWorkGraphPipelineState **param_2)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  FWorkGraphPipelineState **ppFVar4;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *this_01;
  longlong lVar5;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *this_02;
  FWorkGraphPipelineStateInitializer *local_38;
  FWorkGraphPipelineState **local_30;
  
  bVar3 = IsInParallelRHIThread();
  if ((bVar3) || (lVar5 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar5 = 0x2b8;
  }
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  UNLOCK();
  if (*piVar1 == 0 || SCARRY4(iVar2,1) != *piVar1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyIncrement::FScopeVerifyIncrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  this_01 = this->CurrentMap;
  this_02 = this->BackfillMap;
  bVar3 = IsInParallelRHIThread();
  if (!bVar3) {
    bVar3 = IsInRHIThread();
    if ((!bVar3) && (GEnablePSOAsyncCacheConsolidation != false)) {
      this_01 = this->CurrentMap_RenderThread;
      this_02 = this->BackfillMap_RenderThread;
    }
  }
  ppFVar4 = TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
            ::Find((TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                    *)this_01,param_1);
  if (ppFVar4 == (FWorkGraphPipelineState **)0x0) {
    this_00 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
               *)GetLocalCache(this);
    ppFVar4 = TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
              ::Find((TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                      *)this_00,param_1);
    if (ppFVar4 == (FWorkGraphPipelineState **)0x0) {
      ppFVar4 = TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                ::Find((TMapBase<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                        *)this_02,param_1);
      if (ppFVar4 == (FWorkGraphPipelineState **)0x0) {
        bVar3 = false;
        goto LAB_145ca417a;
      }
      local_38 = param_1;
      local_30 = ppFVar4;
      TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>_>
                (this_00,(TPairInitializer<FWorkGraphPipelineStateInitializer_const_&,FWorkGraphPipelineState_*_const_&>
                          *)&stack0x00000008,(bool *)&local_38);
    }
  }
  bVar3 = true;
  *param_2 = *ppFVar4;
LAB_145ca417a:
  ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  LOCK();
  piVar1 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar5);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (iVar2 + -1 < 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyIncrement::~FScopeVerifyIncrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  return bVar3;
}

// FinishAsyncCacheConsolidation @ 145ca4c30

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
FinishAsyncCacheConsolidation
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FinishAsyncCacheConsolidation");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1995,"FinishAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7cb);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1995);
  }
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRHIThreadPipelineStates,false);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRHIThreadPipelineStates);
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  uVar6 = (this->Completed).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 << 4;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Completed).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FPipelineStateAsync::WaitCompletion
                (*(FPipelineStateAsync **)((this->Completed).AllocatorInstance.Data + lVar5 + 8));
      lVar5 = lVar5 + -0x10;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  (this->Completed).ArrayNum = 0;
  if ((this->Completed).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->Completed).AllocatorInstance,0,&(this->Completed).ArrayMax);
  }
  ProcessDelayedCleanup(this);
  this->ReleasedEntries = 0;
  if (this->bDiscardAndSwap != false) {
    iVar4 = DiscardAndSwap(this,&this->CurrentMap_RenderThread,&this->BackfillMap_RenderThread);
    this->ReleasedEntries = iVar4;
    this->bDiscardAndSwap = false;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FinishAsyncCacheConsolidation @ 145ca4e50

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
FinishAsyncCacheConsolidation
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FinishAsyncCacheConsolidation");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1995,"FinishAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7cb);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1995);
  }
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRHIThreadPipelineStates,false);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRHIThreadPipelineStates);
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  uVar6 = (this->Completed).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar5 = (longlong)(int)uVar6 * 0xe8;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (this->Completed).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FPipelineStateAsync::WaitCompletion
                (*(FPipelineStateAsync **)((this->Completed).AllocatorInstance.Data + lVar5 + 0xe0))
      ;
      lVar5 = lVar5 + -0xe8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  (this->Completed).ArrayNum = 0;
  if ((this->Completed).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xe8,8,0,&(this->Completed).AllocatorInstance,0,&(this->Completed).ArrayMax);
  }
  ProcessDelayedCleanup(this);
  this->ReleasedEntries = 0;
  if (this->bDiscardAndSwap != false) {
    iVar4 = DiscardAndSwap(this,&this->CurrentMap_RenderThread,&this->BackfillMap_RenderThread);
    this->ReleasedEntries = iVar4;
    this->bDiscardAndSwap = false;
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FinishAsyncCacheConsolidation @ 145ca5070

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
FinishAsyncCacheConsolidation
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  TArray<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Orange,"FinishAsyncCacheConsolidation");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1995,"FinishAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x7cb);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FinishAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1995);
  }
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRHIThreadPipelineStates,false);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRHIThreadPipelineStates);
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  pTVar1 = &this->Completed;
  uVar8 = (this->Completed).ArrayNum - 1;
  if (-1 < (int)uVar8) {
    lVar9 = (longlong)(int)uVar8 * 0x70;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->Completed).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FPipelineStateAsync::WaitCompletion
                (*(FPipelineStateAsync **)((pTVar1->AllocatorInstance).Data + lVar9 + 0x68));
      lVar9 = lVar9 + -0x70;
      uVar8 = uVar8 - 1;
    } while (-1 < (int)uVar8);
  }
  piVar2 = &(this->Completed).ArrayMax;
  pTVar3 = (TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *)
           (pTVar1->AllocatorInstance).Data;
  iVar7 = (this->Completed).ArrayNum;
  if ((this->Completed).ArrayMax < 0) {
    DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int>
              (pTVar3,iVar7);
    (this->Completed).ArrayNum = 0;
    if (*piVar2 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x70,8,0,&pTVar1->AllocatorInstance,0,piVar2);
    }
  }
  else {
    DestructItems<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,int>
              (pTVar3,iVar7);
    (this->Completed).ArrayNum = 0;
  }
  ProcessDelayedCleanup(this);
  this->ReleasedEntries = 0;
  if (this->bDiscardAndSwap != false) {
    iVar7 = DiscardAndSwap(this,&this->CurrentMap_RenderThread,&this->BackfillMap_RenderThread);
    this->ReleasedEntries = iVar7;
    this->bDiscardAndSwap = false;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FlushResources @ 145ca56c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::FlushResources
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,bool param_1
          )

{
  undefined1 *puVar1;
  int *piVar2;
  FBaseGraphTask *pFVar3;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"ConsolidateThreadedCaches");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FlushResources(bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1696,"ConsolidateThreadedCaches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x6a0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FlushResources(bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1696);
  }
  if (this->bIsInterrupt == false) {
    AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  this->bPendingDiscardAndSwap = (bool)(this->bPendingDiscardAndSwap | param_1);
  bVar4 = IsInParallelRHIThread();
  if ((bVar4) || (lVar6 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar6 = 0x2b8;
  }
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (-1 < iVar5 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    if (pFVar3->field_0xd0 == '\0') goto LAB_145ca58ab;
    pFVar3 = (this->RHICompletionEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar5 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    FinishAsyncCacheConsolidation(this);
  }
  this_00 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap_RenderThread;
  this->bDiscardAndSwap = this->bPendingDiscardAndSwap;
  this->bPendingDiscardAndSwap = false;
  iVar5 = *(int *)&(this_00->Elements).field_0x34;
  if (GEnablePSOAsyncCacheConsolidation == false) {
    if ((*(int *)&(this_00->Elements).field_0x8 != iVar5) ||
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 !=
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      OnAsyncConsolidationDisabled(this);
    }
    ConsolidateThreadedCaches(this);
    ProcessDelayedCleanup(this);
    this->ReleasedEntries = 0;
    if (this->bDiscardAndSwap != false) {
      iVar5 = DiscardAndSwap(this,&this->CurrentMap,&this->BackfillMap);
      this->ReleasedEntries = iVar5;
      this->bDiscardAndSwap = false;
    }
  }
  else {
    if ((*(int *)&(this_00->Elements).field_0x8 == iVar5) &&
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 ==
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
      ::operator=(this_00,(TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                           *)this->CurrentMap);
      TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap_RenderThread,
                  (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap);
    }
    StartAsyncCacheConsolidation(this);
  }
LAB_145ca58ab:
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (*piVar2 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsInterrupt == false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FlushResources @ 145ca5910

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
FlushResources(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
               *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FBaseGraphTask *pFVar3;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"ConsolidateThreadedCaches");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FlushResources(bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1696,"ConsolidateThreadedCaches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x6a0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FlushResources(bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1696);
  }
  if (this->bIsInterrupt == false) {
    AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  this->bPendingDiscardAndSwap = (bool)(this->bPendingDiscardAndSwap | param_1);
  bVar4 = IsInParallelRHIThread();
  if ((bVar4) || (lVar6 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar6 = 0x2b8;
  }
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (-1 < iVar5 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    if (pFVar3->field_0xd0 == '\0') goto LAB_145ca5afb;
    pFVar3 = (this->RHICompletionEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar5 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    FinishAsyncCacheConsolidation(this);
  }
  this_00 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap_RenderThread;
  this->bDiscardAndSwap = this->bPendingDiscardAndSwap;
  this->bPendingDiscardAndSwap = false;
  iVar5 = *(int *)&(this_00->Elements).field_0x34;
  if (GEnablePSOAsyncCacheConsolidation == false) {
    if ((*(int *)&(this_00->Elements).field_0x8 != iVar5) ||
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 !=
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      OnAsyncConsolidationDisabled(this);
    }
    ConsolidateThreadedCaches(this);
    ProcessDelayedCleanup(this);
    this->ReleasedEntries = 0;
    if (this->bDiscardAndSwap != false) {
      iVar5 = DiscardAndSwap(this,&this->CurrentMap,&this->BackfillMap);
      this->ReleasedEntries = iVar5;
      this->bDiscardAndSwap = false;
    }
  }
  else {
    if ((*(int *)&(this_00->Elements).field_0x8 == iVar5) &&
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 ==
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
      ::operator=(this_00,(TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                           *)this->CurrentMap);
      TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap_RenderThread,
                  (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap);
    }
    StartAsyncCacheConsolidation(this);
  }
LAB_145ca5afb:
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (*piVar2 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsInterrupt == false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// FlushResources @ 145ca5b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
FlushResources(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
               *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  FBaseGraphTask *pFVar3;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Turquoise,"ConsolidateThreadedCaches");
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FlushResources(bool)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1696,"ConsolidateThreadedCaches",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x6a0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FlushResources(bool)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1696);
  }
  if (this->bIsInterrupt == false) {
    AcquireSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  this->bPendingDiscardAndSwap = (bool)(this->bPendingDiscardAndSwap | param_1);
  bVar4 = IsInParallelRHIThread();
  if ((bVar4) || (lVar6 = 0x2b4, GEnablePSOAsyncCacheConsolidation == false)) {
    lVar6 = 0x2b8;
  }
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  iVar5 = *piVar2;
  *piVar2 = *piVar2 + -1;
  UNLOCK();
  if (-1 < iVar5 + -1) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::FScopeVerifyDecrement(int_volatile_(&___ptr64)[2])___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar3 = (this->RHICompletionEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    if (pFVar3->field_0xd0 == '\0') goto LAB_145ca5d4b;
    pFVar3 = (this->RHICompletionEvent).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar3->field_0x30;
      iVar5 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      }
    }
    FinishAsyncCacheConsolidation(this);
  }
  this_00 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap_RenderThread;
  this->bDiscardAndSwap = this->bPendingDiscardAndSwap;
  this->bPendingDiscardAndSwap = false;
  iVar5 = *(int *)&(this_00->Elements).field_0x34;
  if (GEnablePSOAsyncCacheConsolidation == false) {
    if ((*(int *)&(this_00->Elements).field_0x8 != iVar5) ||
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 !=
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      OnAsyncConsolidationDisabled(this);
    }
    ConsolidateThreadedCaches(this);
    ProcessDelayedCleanup(this);
    this->ReleasedEntries = 0;
    if (this->bDiscardAndSwap != false) {
      iVar5 = DiscardAndSwap(this,&this->CurrentMap,&this->BackfillMap);
      this->ReleasedEntries = iVar5;
      this->bDiscardAndSwap = false;
    }
  }
  else {
    if ((*(int *)&(this_00->Elements).field_0x8 == iVar5) &&
       (*(int *)&this->BackfillMap_RenderThread->field_0x8 ==
        *(int *)&this->BackfillMap_RenderThread->field_0x34)) {
      TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
      ::operator=(this_00,(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                           *)this->CurrentMap);
      TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
      ::operator=((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap_RenderThread,
                  (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
                   *)this->BackfillMap);
    }
    StartAsyncCacheConsolidation(this);
  }
LAB_145ca5d4b:
  LOCK();
  piVar2 = (int *)((longlong)&(this->Uncompleted).AllocatorInstance.Data + lVar6);
  *piVar2 = *piVar2 + 1;
  UNLOCK();
  if (*piVar2 != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::FScopeVerifyDecrement::~FScopeVerifyDecrement(void)___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  if (this->bIsInterrupt == false) {
    ReleaseSRWLockShared((PSRWLOCK)&this->InterruptLock);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetLocalCache @ 145ca96d0

TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
* __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::GetLocalCache
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar8;
  undefined8 *lpTlsValue;
  TArray<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
  *pTVar9;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *local_28;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *local_20;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *local_18 [2];
  
  puVar7 = TlsGetValue(this->TLSSlot);
  lpTlsValue = (undefined8 *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = operator_new__(0xa8);
    if (puVar7 != (undefined8 *)0x0) {
      lpTlsValue = puVar7 + 1;
      *puVar7 = 2;
      *lpTlsValue = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80;
      *(undefined4 *)(puVar7 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 10) = 0;
      puVar7[0xb] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar7 + 100) = 0xffffffff;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x84) = 0x80;
      *(undefined4 *)(puVar7 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x8c) = 0;
      puVar7[0x13] = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
    }
    TlsSetValue(this->TLSSlot,lpTlsValue);
    puVar7 = lpTlsValue;
  }
  iVar5 = PipelineStateCache::GetCacheIndexForCurrentThread();
  pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
            *)(puVar7 + (longlong)iVar5 * 10);
  if (*(int *)&pTVar8->field_0xc == -1) {
    *(undefined4 *)&pTVar8->field_0x48 = 0;
    if (*(void **)&pTVar8->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pTVar8);
    *(undefined8 *)&pTVar8->field_0x10 = 0;
    lpCriticalSection = &this->AllThreadsLock;
    *(undefined8 *)&pTVar8->field_0x18 = 0;
    *(undefined8 *)&pTVar8->field_0x38 = 0;
    *(undefined8 *)&pTVar8->field_0x48 = 0;
    *(undefined8 *)pTVar8 = 0;
    *(undefined8 *)&pTVar8->field_0x8 = 0;
    *(undefined8 *)&pTVar8->field_0x20 = 0;
    *(undefined4 *)&pTVar8->field_0x28 = 0;
    *(undefined4 *)&pTVar8->field_0x2c = 0x80;
    *(undefined4 *)&pTVar8->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar8->field_0x34 = 0;
    *(undefined8 *)&pTVar8->field_0x40 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar9 = &this->AllThreadsPipelineStateCache;
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    local_28 = pTVar8;
    if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar2 + (longlong)(this->AllThreadsPipelineStateCache).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    iVar6 = (this->AllThreadsPipelineStateCache).ArrayNum;
    piVar1 = &(this->AllThreadsPipelineStateCache).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,piVar1);
    }
    (this->AllThreadsPipelineStateCache).ArrayNum = iVar6 + 1;
    *(TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
      **)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
    if (iVar5 == 1) {
      pTVar9 = &this->RHIThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_20 = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 <
           pFVar2 + (longlong)(this->RHIThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RHIThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RHIThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      (this->RHIThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
        **)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_20;
    }
    else {
      pTVar9 = &this->RenderThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_18[0] = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->RenderThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RenderThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RenderThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      (this->RenderThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
        **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  return pTVar8;
}

// GetLocalCache @ 145ca9b00

TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
* __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::GetLocalCache
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar8;
  undefined8 *lpTlsValue;
  TArray<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
  *pTVar9;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *local_28;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *local_20;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *local_18 [2];
  
  puVar7 = TlsGetValue(this->TLSSlot);
  lpTlsValue = (undefined8 *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = operator_new__(0xa8);
    if (puVar7 != (undefined8 *)0x0) {
      lpTlsValue = puVar7 + 1;
      *puVar7 = 2;
      *lpTlsValue = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80;
      *(undefined4 *)(puVar7 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 10) = 0;
      puVar7[0xb] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar7 + 100) = 0xffffffff;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x84) = 0x80;
      *(undefined4 *)(puVar7 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x8c) = 0;
      puVar7[0x13] = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
    }
    TlsSetValue(this->TLSSlot,lpTlsValue);
    puVar7 = lpTlsValue;
  }
  iVar5 = PipelineStateCache::GetCacheIndexForCurrentThread();
  pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
            *)(puVar7 + (longlong)iVar5 * 10);
  if (*(int *)&pTVar8->field_0xc == -1) {
    *(undefined4 *)&pTVar8->field_0x48 = 0;
    if (*(void **)&pTVar8->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pTVar8);
    *(undefined8 *)&pTVar8->field_0x10 = 0;
    lpCriticalSection = &this->AllThreadsLock;
    *(undefined8 *)&pTVar8->field_0x18 = 0;
    *(undefined8 *)&pTVar8->field_0x38 = 0;
    *(undefined8 *)&pTVar8->field_0x48 = 0;
    *(undefined8 *)pTVar8 = 0;
    *(undefined8 *)&pTVar8->field_0x8 = 0;
    *(undefined8 *)&pTVar8->field_0x20 = 0;
    *(undefined4 *)&pTVar8->field_0x28 = 0;
    *(undefined4 *)&pTVar8->field_0x2c = 0x80;
    *(undefined4 *)&pTVar8->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar8->field_0x34 = 0;
    *(undefined8 *)&pTVar8->field_0x40 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar9 = &this->AllThreadsPipelineStateCache;
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    local_28 = pTVar8;
    if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar2 + (longlong)(this->AllThreadsPipelineStateCache).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    iVar6 = (this->AllThreadsPipelineStateCache).ArrayNum;
    piVar1 = &(this->AllThreadsPipelineStateCache).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,piVar1);
    }
    (this->AllThreadsPipelineStateCache).ArrayNum = iVar6 + 1;
    *(TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
      **)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
    if (iVar5 == 1) {
      pTVar9 = &this->RHIThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_20 = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 <
           pFVar2 + (longlong)(this->RHIThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RHIThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RHIThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      (this->RHIThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
        **)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_20;
    }
    else {
      pTVar9 = &this->RenderThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_18[0] = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->RenderThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RenderThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RenderThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      (this->RenderThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
        **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  return pTVar8;
}

// GetLocalCache @ 145ca9f30

TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
* __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
GetLocalCache(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
              *this)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar8;
  undefined8 *lpTlsValue;
  TArray<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_*,TSizedDefaultAllocator<32>_>
  *pTVar9;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *local_28;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *local_20;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *local_18 [2];
  
  puVar7 = TlsGetValue(this->TLSSlot);
  lpTlsValue = (undefined8 *)0x0;
  if (puVar7 == (undefined8 *)0x0) {
    puVar7 = operator_new__(0xa8);
    if (puVar7 != (undefined8 *)0x0) {
      lpTlsValue = puVar7 + 1;
      *puVar7 = 2;
      *lpTlsValue = 0;
      *(undefined4 *)(puVar7 + 2) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x14) = 0xffffffff;
      puVar7[5] = 0;
      *(undefined4 *)(puVar7 + 6) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x34) = 0x80;
      *(undefined4 *)(puVar7 + 7) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x3c) = 0;
      puVar7[9] = 0;
      *(undefined4 *)(puVar7 + 10) = 0;
      puVar7[0xb] = 0;
      *(undefined4 *)(puVar7 + 0xc) = 0;
      *(undefined4 *)((longlong)puVar7 + 100) = 0xffffffff;
      puVar7[0xf] = 0;
      *(undefined4 *)(puVar7 + 0x10) = 0;
      *(undefined4 *)((longlong)puVar7 + 0x84) = 0x80;
      *(undefined4 *)(puVar7 + 0x11) = 0xffffffff;
      *(undefined4 *)((longlong)puVar7 + 0x8c) = 0;
      puVar7[0x13] = 0;
      *(undefined4 *)(puVar7 + 0x14) = 0;
    }
    TlsSetValue(this->TLSSlot,lpTlsValue);
    puVar7 = lpTlsValue;
  }
  iVar5 = PipelineStateCache::GetCacheIndexForCurrentThread();
  pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
            *)(puVar7 + (longlong)iVar5 * 10);
  if (*(int *)&pTVar8->field_0xc == -1) {
    *(undefined4 *)&pTVar8->field_0x48 = 0;
    if (*(void **)&pTVar8->field_0x40 != (void *)0x0) {
      FMemory::Free(*(void **)&pTVar8->field_0x40);
    }
    TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)pTVar8);
    *(undefined8 *)&pTVar8->field_0x10 = 0;
    lpCriticalSection = &this->AllThreadsLock;
    *(undefined8 *)&pTVar8->field_0x18 = 0;
    *(undefined8 *)&pTVar8->field_0x38 = 0;
    *(undefined8 *)&pTVar8->field_0x48 = 0;
    *(undefined8 *)pTVar8 = 0;
    *(undefined8 *)&pTVar8->field_0x8 = 0;
    *(undefined8 *)&pTVar8->field_0x20 = 0;
    *(undefined4 *)&pTVar8->field_0x28 = 0;
    *(undefined4 *)&pTVar8->field_0x2c = 0x80;
    *(undefined4 *)&pTVar8->field_0x30 = 0xffffffff;
    *(undefined4 *)&pTVar8->field_0x34 = 0;
    *(undefined8 *)&pTVar8->field_0x40 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar9 = &this->AllThreadsPipelineStateCache;
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    pFVar2 = (pTVar9->AllocatorInstance).Data;
    local_28 = pTVar8;
    if (((pFVar2 <= (FScriptContainerElement *)&local_28) &&
        ((FScriptContainerElement *)&local_28 <
         pFVar2 + (longlong)(this->AllThreadsPipelineStateCache).ArrayMax * 8)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
    iVar6 = (this->AllThreadsPipelineStateCache).ArrayNum;
    piVar1 = &(this->AllThreadsPipelineStateCache).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar9->AllocatorInstance,piVar1);
    }
    (this->AllThreadsPipelineStateCache).ArrayNum = iVar6 + 1;
    *(TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
      **)((pTVar9->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_28;
    if (iVar5 == 1) {
      pTVar9 = &this->RHIThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_20 = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)&local_20) &&
          ((FScriptContainerElement *)&local_20 <
           pFVar2 + (longlong)(this->RHIThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RHIThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RHIThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      (this->RHIThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
        **)((pTVar9->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_20;
    }
    else {
      pTVar9 = &this->RenderThreadsPipelineStateCache;
      if ((*(int *)&pTVar8->field_0xc == -1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      local_18[0] = pTVar8;
      if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
          ((FScriptContainerElement *)local_18 <
           pFVar2 + (longlong)(this->RenderThreadsPipelineStateCache).ArrayMax * 8)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                  *)(*pcVar3)();
        return pTVar8;
      }
      iVar5 = (this->RenderThreadsPipelineStateCache).ArrayNum;
      piVar1 = &(this->RenderThreadsPipelineStateCache).ArrayMax;
      if (iVar5 == *piVar1) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar9->AllocatorInstance,piVar1);
      }
      pFVar2 = (pTVar9->AllocatorInstance).Data;
      (this->RenderThreadsPipelineStateCache).ArrayNum = iVar5 + 1;
      *(TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
        **)(pFVar2 + (longlong)iVar5 * 8) = local_18[0];
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((*(int *)&pTVar8->field_0xc == -1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsSet()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                           ,0x1bd,
                           L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar8 = (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                *)(*pcVar3)();
      return pTVar8;
    }
  }
  return pTVar8;
}

// GetResources @ 145cab9a0

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::GetResources
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *param_1,bool param_2,
          FTimeout *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FTaskBase *pFVar3;
  FBaseGraphTask *pFVar4;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [16];
  FRHIResource *local_d8;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FPlatformRWLock *local_98;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FTimeout local_58;
  FTimeout local_48;
  
  local_98 = &this->InterruptLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_98);
  uVar10 = 1;
  if (param_2) {
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_58.StartCycles = param_3->StartCycles;
      local_58.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_58);
      if (!bVar9) goto LAB_145cabaaf;
      pFVar4 = (this->RHICompletionEvent).Reference;
      if (pFVar4 != (FBaseGraphTask *)0x0) {
        (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar4->field_0x30;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (*(code *)**(undefined8 **)pFVar4)();
        }
      }
      FinishAsyncCacheConsolidation(this);
    }
    this->bIsInterrupt = true;
    FlushResources(this,false);
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_48.StartCycles = param_3->StartCycles;
      local_48.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_48);
      if (bVar9) {
        pFVar4 = (this->RHICompletionEvent).Reference;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
          LOCK();
          puVar1 = &pFVar4->field_0x30;
          iVar11 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
        }
        FinishAsyncCacheConsolidation(this);
      }
    }
    this->bIsInterrupt = false;
  }
LAB_145cabaaf:
  pTVar5 = this->CurrentMap;
  iStack_c8 = 0;
  iVar11 = *(int *)&pTVar5->field_0x28;
  puVar1 = &pTVar5->field_0x10;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&pTVar5->field_0x20;
    if (*(uint **)&pTVar5->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    iStack_c8 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_145cabb2e;
      uVar14 = puVar16[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar12;
    if (iVar11 < iStack_b4) {
      iStack_b4 = iVar11;
    }
  }
LAB_145cabb2e:
  iStack_a8 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
  uVar14 = *(uint *)&pTVar5->field_0x28;
  uStack_b8 = 0xffffffff;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar5;
  uStack_c4 = uVar10;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_90 = pTVar5;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&pTVar5->field_0x28;
  if (uVar14 != uVar10) {
    puVar15 = *(undefined1 **)&pTVar5->field_0x20;
    if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_145cabc31;
      uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    uVar14 = local_a0 + -1 + uVar17;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_145cabc31:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIComputeShader_*,FComputePipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar5))
    {
                    /* WARNING: Could not recover jumptable at 0x000145cabd57. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)local_98);
      return;
    }
    local_d8 = *(FRHIResource **)
                (*(longlong *)(*(longlong *)pTVar8 + 8 + (longlong)TStack_88.CurrentBitIndex * 0x18)
                + 0x40);
    if (local_d8 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_d8);
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 8) = 0;
    *(FRHIResource **)(pFVar6 + (longlong)iVar11 * 8) = local_d8;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// GetResources @ 145cabd70

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::GetResources
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this,TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,FTimeout *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FTaskBase *pFVar3;
  FBaseGraphTask *pFVar4;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [16];
  FRHIResource *local_d8;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FPlatformRWLock *local_98;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FTimeout local_58;
  FTimeout local_48;
  
  local_98 = &this->InterruptLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_98);
  uVar10 = 1;
  if (param_2) {
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_58.StartCycles = param_3->StartCycles;
      local_58.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_58);
      if (!bVar9) goto LAB_145cabe7f;
      pFVar4 = (this->RHICompletionEvent).Reference;
      if (pFVar4 != (FBaseGraphTask *)0x0) {
        (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar4->field_0x30;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (*(code *)**(undefined8 **)pFVar4)();
        }
      }
      FinishAsyncCacheConsolidation(this);
    }
    this->bIsInterrupt = true;
    FlushResources(this,false);
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_48.StartCycles = param_3->StartCycles;
      local_48.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_48);
      if (bVar9) {
        pFVar4 = (this->RHICompletionEvent).Reference;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
          LOCK();
          puVar1 = &pFVar4->field_0x30;
          iVar11 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
        }
        FinishAsyncCacheConsolidation(this);
      }
    }
    this->bIsInterrupt = false;
  }
LAB_145cabe7f:
  pTVar5 = this->CurrentMap;
  iStack_c8 = 0;
  iVar11 = *(int *)&pTVar5->field_0x28;
  puVar1 = &pTVar5->field_0x10;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&pTVar5->field_0x20;
    if (*(uint **)&pTVar5->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    iStack_c8 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_145cabefe;
      uVar14 = puVar16[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar12;
    if (iVar11 < iStack_b4) {
      iStack_b4 = iVar11;
    }
  }
LAB_145cabefe:
  iStack_a8 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
  uVar14 = *(uint *)&pTVar5->field_0x28;
  uStack_b8 = 0xffffffff;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar5;
  uStack_c4 = uVar10;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_90 = pTVar5;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&pTVar5->field_0x28;
  if (uVar14 != uVar10) {
    puVar15 = *(undefined1 **)&pTVar5->field_0x20;
    if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_145cac001;
      uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    uVar14 = local_a0 + -1 + uVar17;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_145cac001:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar5))
    {
                    /* WARNING: Could not recover jumptable at 0x000145cac12d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)local_98);
      return;
    }
    local_d8 = *(FRHIResource **)
                (*(longlong *)
                  ((longlong)TStack_88.CurrentBitIndex * 0xf0 + 0xe0 + *(longlong *)pTVar8) + 0x38);
    if (local_d8 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_d8);
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 8) = 0;
    *(FRHIResource **)(pFVar6 + (longlong)iVar11 * 8) = local_d8;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// GetResources @ 145cac140

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
GetResources(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
             *this,TArray<TRefCountPtr<FRHIResource>,TSizedDefaultAllocator<32>_> *param_1,
            bool param_2,FTimeout *param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  FTaskBase *pFVar3;
  FBaseGraphTask *pFVar4;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  uint uVar14;
  undefined1 *puVar15;
  uint *puVar16;
  uint uVar17;
  undefined1 local_res18 [16];
  FRHIResource *local_d8;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *local_d0;
  int iStack_c8;
  uint uStack_c4;
  undefined1 *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  int local_a0;
  FPlatformRWLock *local_98;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FTimeout local_58;
  FTimeout local_48;
  
  local_98 = &this->InterruptLock;
  AcquireSRWLockExclusive((PSRWLOCK)local_98);
  uVar10 = 1;
  if (param_2) {
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_58.StartCycles = param_3->StartCycles;
      local_58.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_58);
      if (!bVar9) goto LAB_145cac24f;
      pFVar4 = (this->RHICompletionEvent).Reference;
      if (pFVar4 != (FBaseGraphTask *)0x0) {
        (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
        LOCK();
        puVar1 = &pFVar4->field_0x30;
        iVar11 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (*(code *)**(undefined8 **)pFVar4)();
        }
      }
      FinishAsyncCacheConsolidation(this);
    }
    this->bIsInterrupt = true;
    FlushResources(this,false);
    pFVar3 = (FTaskBase *)(this->RHICompletionEvent).Reference;
    if (pFVar3 != (FTaskBase *)0x0) {
      local_48.StartCycles = param_3->StartCycles;
      local_48.TimeoutCycles = param_3->TimeoutCycles;
      bVar9 = UE::Tasks::Private::FTaskBase::Wait(pFVar3,&local_48);
      if (bVar9) {
        pFVar4 = (this->RHICompletionEvent).Reference;
        if (pFVar4 != (FBaseGraphTask *)0x0) {
          (this->RHICompletionEvent).Reference = (FBaseGraphTask *)0x0;
          LOCK();
          puVar1 = &pFVar4->field_0x30;
          iVar11 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (*(code *)**(undefined8 **)pFVar4)(pFVar4,1);
          }
        }
        FinishAsyncCacheConsolidation(this);
      }
    }
    this->bIsInterrupt = false;
  }
LAB_145cac24f:
  pTVar5 = this->CurrentMap;
  iStack_c8 = 0;
  iVar11 = *(int *)&pTVar5->field_0x28;
  puVar1 = &pTVar5->field_0x10;
  local_b0 = 0;
  iStack_b4 = 0;
  if (iVar11 != 0) {
    puVar16 = *(uint **)&pTVar5->field_0x20;
    if (*(uint **)&pTVar5->field_0x20 == (uint *)0x0) {
      puVar16 = (uint *)puVar1;
    }
    uVar14 = *puVar16;
    iStack_c8 = 0;
    while (uVar14 == 0) {
      lVar12 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_145cac2ce;
      uVar14 = puVar16[lVar12 + 1];
    }
    uVar10 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar12;
    if (iVar11 < iStack_b4) {
      iStack_b4 = iVar11;
    }
  }
LAB_145cac2ce:
  iStack_a8 = *(int *)&pTVar5->field_0x8 - *(int *)&pTVar5->field_0x34;
  uVar14 = *(uint *)&pTVar5->field_0x28;
  uStack_b8 = 0xffffffff;
  uVar17 = uVar14 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar10,iStack_c8);
  TStack_88.CurrentBitIndex = iStack_b4;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar14 >> 5;
  TStack_88._28_4_ = iStack_b4;
  TStack_88.BaseBitIndex = local_b0;
  uStack_68 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = pTVar5;
  uStack_c4 = uVar10;
  local_c0 = puVar1;
  iStack_ac = iStack_b4;
  local_90 = pTVar5;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar14 < 0) || (iVar11 < (int)uVar14)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar10 = *(uint *)&pTVar5->field_0x28;
  if (uVar14 != uVar10) {
    puVar15 = *(undefined1 **)&pTVar5->field_0x20;
    if (*(undefined1 **)&pTVar5->field_0x20 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar13 * 4);
    while (uVar14 == 0) {
      lVar12 = (longlong)iVar13;
      uVar17 = uVar17 + 0x20;
      iVar13 = iVar13 + 1;
      uVar14 = uVar10;
      if ((int)((uVar10 - 1) + ((int)(uVar10 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
      goto LAB_145cac3d1;
      uVar14 = *(uint *)(puVar15 + lVar12 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    local_a0 = (int)lVar12;
    uVar14 = local_a0 + -1 + uVar17;
    if ((int)uVar10 < (int)uVar14) {
      uVar14 = uVar10;
    }
  }
LAB_145cac3d1:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar14) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar5))
    {
                    /* WARNING: Could not recover jumptable at 0x000145cac4f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)local_98);
      return;
    }
    local_d8 = *(FRHIResource **)
                (*(longlong *)
                  ((longlong)TStack_88.CurrentBitIndex * 0x78 + 0x68 + *(longlong *)pTVar8) + 0x40);
    if (local_d8 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(local_d8);
    }
    pFVar6 = (param_1->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_d8) &&
        ((FScriptContainerElement *)&local_d8 < pFVar6 + (longlong)param_1->ArrayMax * 8)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar11 = param_1->ArrayNum;
    if (iVar11 == param_1->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar11 + 1;
    pFVar6 = (param_1->AllocatorInstance).Data;
    *(undefined8 *)(pFVar6 + (longlong)iVar11 * 8) = 0;
    *(FRHIResource **)(pFVar6 + (longlong)iVar11 * 8) = local_d8;
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// ManageIncompleteTasks @ 145cb3470

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ManageIncompleteTasks
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  FPSOPrecacheAsyncTask *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FCompletionState *pFVar10;
  int iVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  longlong lVar15;
  
  uVar12 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar12) {
    lVar15 = (longlong)(int)uVar12 << 4;
    do {
      uVar8 = 0;
      if ((int)uVar12 < (this->Uncompleted).ArrayNum) {
        uVar8 = ~uVar12 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar15 + 8);
      bVar7 = IsInParallelRHIThread();
      if ((bVar7) || (lVar14 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar14 = 0x20;
      }
      plVar3 = *(longlong **)(lVar2 + lVar14);
      if (plVar3 == (longlong *)0x0) {
LAB_145cb3593:
        uVar8 = 0;
        if ((int)uVar12 < (this->Uncompleted).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar15 + 8));
        uVar8 = 0;
        if ((int)uVar12 < (this->Uncompleted).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (this->Completed).AllocatorInstance.Data;
        pFVar13 = (this->Uncompleted).AllocatorInstance.Data + lVar15;
        if (((pFVar4 <= pFVar13) && (pFVar13 < pFVar4 + (longlong)(this->Completed).ArrayMax * 0x10)
            ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Completed).ArrayNum;
        piVar1 = &(this->Completed).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&(this->Completed).AllocatorInstance,piVar1);
        }
        (this->Completed).ArrayNum = iVar9 + 1;
        uVar6 = *(undefined8 *)(pFVar13 + 8);
        pFVar4 = (this->Completed).AllocatorInstance.Data + (longlong)iVar9 * 0x10;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar13;
        *(undefined8 *)(pFVar4 + 8) = uVar6;
        uVar8 = 0;
        if ((int)uVar12 < (this->Uncompleted).ArrayNum) {
          uVar8 = ~uVar12 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar9 = (this->Uncompleted).ArrayNum;
        pFVar4 = (this->Uncompleted).AllocatorInstance.Data;
        iVar11 = ~uVar12 + iVar9;
        if (1 < iVar11) {
          iVar11 = 1;
        }
        if (iVar11 != 0) {
          memmove(pFVar4 + lVar15,pFVar4 + (longlong)(iVar9 - iVar11) * 0x10,(longlong)iVar11 << 4);
        }
        piVar1 = &(this->Uncompleted).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else if ((*plVar3 == 0) || (*(char *)(*plVar3 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar2 + lVar14) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar2 + lVar14) + 8) != 0) {
          pFVar10 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                              ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                               (lVar2 + lVar14));
          this_00 = (pFVar10->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145cb3743;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145cb3593;
      }
LAB_145cb3743:
      lVar15 = lVar15 + -0x10;
      uVar12 = uVar12 - 1;
    } while (-1 < (int)uVar12);
  }
  return;
}

// ManageIncompleteTasks @ 145cb3790

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ManageIncompleteTasks
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  FPSOPrecacheAsyncTask *this_00;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FCompletionState *pFVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  
  uVar14 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar15 = (longlong)(int)uVar14 * 0xe8;
    do {
      uVar7 = 0;
      if ((int)uVar14 < (this->Uncompleted).ArrayNum) {
        uVar7 = ~uVar14 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar2 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar15 + 0xe0);
      bVar6 = IsInParallelRHIThread();
      if ((bVar6) || (lVar13 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar13 = 0x20;
      }
      plVar3 = *(longlong **)(lVar2 + lVar13);
      if (plVar3 == (longlong *)0x0) {
LAB_145cb38b6:
        uVar7 = 0;
        if ((int)uVar14 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar15 + 0xe0));
        uVar7 = 0;
        if ((int)uVar14 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar11 = (this->Completed).AllocatorInstance.Data;
        pFVar12 = (this->Uncompleted).AllocatorInstance.Data + lVar15;
        if (((pFVar11 <= pFVar12) &&
            (pFVar12 < pFVar11 + (longlong)(this->Completed).ArrayMax * 0xe8)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->Completed).ArrayNum;
        piVar1 = &(this->Completed).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x8e8,&(this->Completed).AllocatorInstance,piVar1);
        }
        (this->Completed).ArrayNum = iVar8 + 1;
        uVar5 = *(undefined8 *)(pFVar12 + 8);
        pFVar11 = (this->Completed).AllocatorInstance.Data + (longlong)iVar8 * 0xe8;
        *(undefined8 *)pFVar11 = *(undefined8 *)pFVar12;
        *(undefined8 *)(pFVar11 + 8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x18);
        *(undefined8 *)(pFVar11 + 0x10) = *(undefined8 *)(pFVar12 + 0x10);
        *(undefined8 *)(pFVar11 + 0x18) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x28);
        *(undefined8 *)(pFVar11 + 0x20) = *(undefined8 *)(pFVar12 + 0x20);
        *(undefined8 *)(pFVar11 + 0x28) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x38);
        *(undefined8 *)(pFVar11 + 0x30) = *(undefined8 *)(pFVar12 + 0x30);
        *(undefined8 *)(pFVar11 + 0x38) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x48);
        *(undefined8 *)(pFVar11 + 0x40) = *(undefined8 *)(pFVar12 + 0x40);
        *(undefined8 *)(pFVar11 + 0x48) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x58);
        *(undefined8 *)(pFVar11 + 0x50) = *(undefined8 *)(pFVar12 + 0x50);
        *(undefined8 *)(pFVar11 + 0x58) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x68);
        *(undefined8 *)(pFVar11 + 0x60) = *(undefined8 *)(pFVar12 + 0x60);
        *(undefined8 *)(pFVar11 + 0x68) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x78);
        *(undefined8 *)(pFVar11 + 0x70) = *(undefined8 *)(pFVar12 + 0x70);
        *(undefined8 *)(pFVar11 + 0x78) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x88);
        *(undefined8 *)(pFVar11 + 0x80) = *(undefined8 *)(pFVar12 + 0x80);
        *(undefined8 *)(pFVar11 + 0x88) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0x98);
        *(undefined8 *)(pFVar11 + 0x90) = *(undefined8 *)(pFVar12 + 0x90);
        *(undefined8 *)(pFVar11 + 0x98) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0xa8);
        *(undefined8 *)(pFVar11 + 0xa0) = *(undefined8 *)(pFVar12 + 0xa0);
        *(undefined8 *)(pFVar11 + 0xa8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0xb8);
        *(undefined8 *)(pFVar11 + 0xb0) = *(undefined8 *)(pFVar12 + 0xb0);
        *(undefined8 *)(pFVar11 + 0xb8) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 200);
        *(undefined8 *)(pFVar11 + 0xc0) = *(undefined8 *)(pFVar12 + 0xc0);
        *(undefined8 *)(pFVar11 + 200) = uVar5;
        uVar5 = *(undefined8 *)(pFVar12 + 0xd8);
        *(undefined8 *)(pFVar11 + 0xd0) = *(undefined8 *)(pFVar12 + 0xd0);
        *(undefined8 *)(pFVar11 + 0xd8) = uVar5;
        *(undefined8 *)(pFVar11 + 0xe0) = *(undefined8 *)(pFVar12 + 0xe0);
        uVar7 = 0;
        if ((int)uVar14 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar14 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (this->Uncompleted).ArrayNum;
        pFVar11 = (this->Uncompleted).AllocatorInstance.Data;
        iVar10 = ~uVar14 + iVar8;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar11 + lVar15,pFVar11 + (longlong)(iVar8 - iVar10) * 0xe8,
                  (longlong)iVar10 * 0xe8);
        }
        piVar1 = &(this->Uncompleted).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      else if ((*plVar3 == 0) || (*(char *)(*plVar3 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar2 + lVar13) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar2 + lVar13) + 8) != 0) {
          pFVar9 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                             ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                              (lVar2 + lVar13));
          this_00 = (pFVar9->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145cb3ae8;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145cb38b6;
      }
LAB_145cb3ae8:
      lVar15 = lVar15 + -0xe8;
      uVar14 = uVar14 - 1;
    } while (-1 < (int)uVar14);
  }
  return;
}

// ManageIncompleteTasks @ 145cb3b30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ManageIncompleteTasks
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  FPSOPrecacheAsyncTask *this_00;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FCompletionState *pFVar9;
  longlong lVar10;
  FWorkGraphPipelineStateInitializer *pFVar11;
  FWorkGraphPipelineStateInitializer *pFVar12;
  uint uVar13;
  longlong lVar14;
  
  uVar13 = (this->Uncompleted).ArrayNum - 1;
  if (-1 < (int)uVar13) {
    lVar14 = (longlong)(int)uVar13 * 0x70;
    do {
      uVar7 = 0;
      if ((int)uVar13 < (this->Uncompleted).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar2 = *(longlong *)((this->Uncompleted).AllocatorInstance.Data + lVar14 + 0x68);
      bVar6 = IsInParallelRHIThread();
      if ((bVar6) || (lVar10 = 0x10, GEnablePSOAsyncCacheConsolidation == false)) {
        lVar10 = 0x20;
      }
      plVar3 = *(longlong **)(lVar2 + lVar10);
      if (plVar3 == (longlong *)0x0) {
LAB_145cb3c46:
        uVar7 = 0;
        if ((int)uVar13 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FPipelineStateAsync::WaitCompletion
                  (*(FPipelineStateAsync **)
                    ((this->Uncompleted).AllocatorInstance.Data + lVar14 + 0x68));
        uVar7 = 0;
        if ((int)uVar13 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (FWorkGraphPipelineStateInitializer *)(this->Completed).AllocatorInstance.Data;
        pFVar12 = (FWorkGraphPipelineStateInitializer *)
                  ((this->Uncompleted).AllocatorInstance.Data + lVar14);
        if (((pFVar11 <= pFVar12) &&
            (pFVar12 < (FWorkGraphPipelineStateInitializer *)
                       ((longlong)pFVar11 + (longlong)(this->Completed).ArrayMax * 0x70))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->Completed).ArrayNum;
        piVar1 = &(this->Completed).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x870,&(this->Completed).AllocatorInstance,piVar1);
        }
        pFVar4 = (this->Completed).AllocatorInstance.Data;
        (this->Completed).ArrayNum = iVar8 + 1;
        pFVar11 = (FWorkGraphPipelineStateInitializer *)(pFVar4 + (longlong)iVar8 * 0x70);
        FWorkGraphPipelineStateInitializer::FWorkGraphPipelineStateInitializer(pFVar11,pFVar12);
        pFVar11[1]._padding_ = pFVar12[1]._padding_;
        uVar7 = 0;
        if ((int)uVar13 < (this->Uncompleted).ArrayNum) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TArray<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TSizedDefaultAllocator<32>_>
        ::RemoveAtSwapImpl(&this->Uncompleted,uVar13);
      }
      else if ((*plVar3 == 0) || (*(char *)(*plVar3 + 0xd0) != '\0')) {
        if ((*(longlong *)(lVar2 + lVar10) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (*(longlong *)(*(longlong *)(lVar2 + lVar10) + 8) != 0) {
          pFVar9 = TSharedPtr<FPipelineStateAsync::FCompletionState,1>::operator->
                             ((TSharedPtr<FPipelineStateAsync::FCompletionState,1> *)
                              (lVar2 + lVar10));
          this_00 = (pFVar9->PrecompileTask).Ptr;
          if (((FThreadSafeCounter *)&this_00->_padding_)->Counter != 0) goto LAB_145cb3dd5;
          FAsyncTaskBase::SyncCompletion((FAsyncTaskBase *)this_00,false);
        }
        goto LAB_145cb3c46;
      }
LAB_145cb3dd5:
      lVar14 = lVar14 + -0x70;
      uVar13 = uVar13 - 1;
    } while (-1 < (int)uVar13);
  }
  return;
}

// OnAsyncConsolidationDisabled @ 145cb4030

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::OnAsyncConsolidationDisabled
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
  *pTVar1;
  
  this_00 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap;
  pTVar1 = this->BackfillMap;
  this->CurrentMap = this->CurrentMap_RenderThread;
  this->BackfillMap = this->BackfillMap_RenderThread;
  this->CurrentMap_RenderThread =
       (TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
        *)this_00;
  this->BackfillMap_RenderThread = pTVar1;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
           *)this->BackfillMap_RenderThread);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  return;
}

// OnAsyncConsolidationDisabled @ 145cb40a0

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
OnAsyncConsolidationDisabled
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
  *pTVar1;
  
  this_00 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap;
  pTVar1 = this->BackfillMap;
  this->CurrentMap = this->CurrentMap_RenderThread;
  this->BackfillMap = this->BackfillMap_RenderThread;
  this->CurrentMap_RenderThread =
       (TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
        *)this_00;
  this->BackfillMap_RenderThread = pTVar1;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           *)this->BackfillMap_RenderThread);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  return;
}

// OnAsyncConsolidationDisabled @ 145cb4110

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
OnAsyncConsolidationDisabled
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *this_00;
  TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
  *pTVar1;
  
  this_00 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
             *)this->CurrentMap;
  pTVar1 = this->BackfillMap;
  this->CurrentMap = this->CurrentMap_RenderThread;
  this->BackfillMap = this->BackfillMap_RenderThread;
  this->CurrentMap_RenderThread =
       (TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
        *)this_00;
  this->BackfillMap_RenderThread = pTVar1;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset(this_00);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
           *)this->BackfillMap_RenderThread);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
           *)&this->NewRenderThreadPipelineStates);
  return;
}

// ProcessDelayedCleanup @ 145cb6800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *local_res8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  <lambda_1> local_48;
  code *local_38 [2];
  undefined **local_28;
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((this->DeleteArray).ArrayNum != 0) {
    local_48.DeleteArray.AllocatorInstance.Data = (this->DeleteArray).AllocatorInstance.Data;
    (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DeleteArray.ArrayNum = (this->DeleteArray).ArrayNum;
    local_48.DeleteArray.ArrayMax = (this->DeleteArray).ArrayMax;
    (this->DeleteArray).ArrayNum = 0;
    (this->DeleteArray).ArrayMax = 0;
    bVar4 = IsInRenderingThread();
    if (bVar4) {
      bVar4 = IsInRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_68,&local_48);
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
         (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
        puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8)
        ;
        GRHICommandList.CommandListImmediate._96_4_ =
             GRHICommandList.CommandListImmediate._96_4_ + 1;
        *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
        GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = &
                  ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_3_AEAAXXZ__Z___6B_
        ;
        puVar5[2] = local_68;
        local_68 = (void *)0x0;
        *(undefined4 *)(puVar5 + 3) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = local_60._4_4_;
        local_60 = 0;
        puVar5[4] = L"TRHILambdaCommand";
        pvVar6 = (void *)0x0;
      }
      else {
        `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
        ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
                  (&local_68,&GRHICommandList.CommandListImmediate);
        pvVar6 = local_68;
      }
    }
    else {
      `TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_58,&local_48);
      local_10 = 0;
      local_28 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ____TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_20 = local_58;
      local_18 = (undefined4)local_50;
      local_14 = local_50._4_4_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
      local_58 = (void *)0x0;
      local_50 = 0;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      pvVar6 = local_58;
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_res8)(local_res8,1);
          pvVar6 = local_58;
        }
      }
    }
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    if (local_48.DeleteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeleteArray.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessDelayedCleanup @ 145cb6a00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
ProcessDelayedCleanup
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *local_res8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  <lambda_1> local_48;
  code *local_38 [2];
  undefined **local_28;
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((this->DeleteArray).ArrayNum != 0) {
    local_48.DeleteArray.AllocatorInstance.Data = (this->DeleteArray).AllocatorInstance.Data;
    (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DeleteArray.ArrayNum = (this->DeleteArray).ArrayNum;
    local_48.DeleteArray.ArrayMax = (this->DeleteArray).ArrayMax;
    (this->DeleteArray).ArrayNum = 0;
    (this->DeleteArray).ArrayMax = 0;
    bVar4 = IsInRenderingThread();
    if (bVar4) {
      bVar4 = IsInRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_68,&local_48);
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
         (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
        puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8)
        ;
        GRHICommandList.CommandListImmediate._96_4_ =
             GRHICommandList.CommandListImmediate._96_4_ + 1;
        *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
        GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = &
                  ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_3_AEAAXXZ__Z___6B_
        ;
        puVar5[2] = local_68;
        local_68 = (void *)0x0;
        *(undefined4 *)(puVar5 + 3) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = local_60._4_4_;
        local_60 = 0;
        puVar5[4] = L"TRHILambdaCommand";
        pvVar6 = (void *)0x0;
      }
      else {
        `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
        ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
                  (&local_68,&GRHICommandList.CommandListImmediate);
        pvVar6 = local_68;
      }
    }
    else {
      `TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_58,&local_48);
      local_10 = 0;
      local_28 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_20 = local_58;
      local_18 = (undefined4)local_50;
      local_14 = local_50._4_4_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
      local_58 = (void *)0x0;
      local_50 = 0;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      pvVar6 = local_58;
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_res8)(local_res8,1);
          pvVar6 = local_58;
        }
      }
    }
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    if (local_48.DeleteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeleteArray.AllocatorInstance.Data);
    }
  }
  return;
}

// ProcessDelayedCleanup @ 145cb6c00

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
ProcessDelayedCleanup
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *local_res8;
  void *local_68;
  undefined8 local_60;
  void *local_58;
  undefined8 local_50;
  <lambda_1> local_48;
  code *local_38 [2];
  undefined **local_28;
  void *local_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined8 local_10;
  
  if ((this->DeleteArray).ArrayNum != 0) {
    local_48.DeleteArray.AllocatorInstance.Data = (this->DeleteArray).AllocatorInstance.Data;
    (this->DeleteArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_48.DeleteArray.ArrayNum = (this->DeleteArray).ArrayNum;
    local_48.DeleteArray.ArrayMax = (this->DeleteArray).ArrayMax;
    (this->DeleteArray).ArrayNum = 0;
    (this->DeleteArray).ArrayMax = 0;
    bVar4 = IsInRenderingThread();
    if (bVar4) {
      bVar4 = IsInRenderingThread();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInRenderingThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                             ,0x1594,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_68,&local_48);
      if (((GRHICommandList.bLatchedBypass == false) ||
          ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
         (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
        puVar5 = FMemStackBase::Alloc((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x28,8)
        ;
        GRHICommandList.CommandListImmediate._96_4_ =
             GRHICommandList.CommandListImmediate._96_4_ + 1;
        *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar5;
        GRHICommandList.CommandListImmediate._48_8_ = puVar5 + 1;
        puVar5[2] = 0;
        puVar5[1] = 0;
        *puVar5 = &
                  ___7__TRHILambdaCommand_VFRHICommandListImmediate__V<lambda_1>__4____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV2_1__ProcessDelayedCleanup_3_AEAAXXZ__Z___6B_
        ;
        puVar5[2] = local_68;
        local_68 = (void *)0x0;
        *(undefined4 *)(puVar5 + 3) = (undefined4)local_60;
        *(undefined4 *)((longlong)puVar5 + 0x1c) = local_60._4_4_;
        local_60 = 0;
        puVar5[4] = L"TRHILambdaCommand";
        pvVar6 = (void *)0x0;
      }
      else {
        `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
        ProcessDelayedCleanup'::__l2::<lambda_1>::operator()
                  (&local_68,&GRHICommandList.CommandListImmediate);
        pvVar6 = local_68;
      }
    }
    else {
      `TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
      ProcessDelayedCleanup'::__l2::<lambda_1>::<lambda_1>(&local_58,&local_48);
      local_10 = 0;
      local_28 = &
                 ___7__TFunction_OwnedObject_V<lambda_2>__6____ExecuteImmediateCommand_V<lambda_1>__1__ProcessDelayedCleanup___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ____TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAX__QEAV<lambda_1>__1__ProcessDelayedCleanup_2_AEAAXXZ__Z__00_0A__Function_Private_Core_UE__6B_
      ;
      local_20 = local_58;
      local_18 = (undefined4)local_50;
      local_14 = local_50._4_4_;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ExecuteImmediateCommand<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::ProcessDelayedCleanup'::__l2::<lambda_1>_>'::__l7::<lambda_2>,void>
                    ::Call;
      local_58 = (void *)0x0;
      local_50 = 0;
      FFunctionGraphTask::CreateAndDispatchWhenReady
                ((TUniqueFunction<void___cdecl(void)> *)&local_res8,(TStatIdData *)local_38,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)&TStatId::TStatId_NAME_None,MainQueue);
      pvVar6 = local_58;
      if (local_res8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_res8 + 6);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)*local_res8)(local_res8,1);
          pvVar6 = local_58;
        }
      }
    }
    if (pvVar6 != (void *)0x0) {
      FMemory::Free(pvVar6);
    }
    if (local_48.DeleteArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.DeleteArray.AllocatorInstance.Data);
    }
  }
  return;
}

// StartAsyncCacheConsolidation @ 145cc1970

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FBaseGraphTask> TVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_a8;
  FBaseGraphTask *local_a0;
  undefined8 *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *local_70;
  undefined8 local_60;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"StartAsyncCacheConsolidation");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1924,"StartAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x784);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FRHIComputeShader*___ptr64,FComputePipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1924);
  }
  TVar8 = FBaseGraphTask::CreateGraphEvent();
  pTVar3 = &this->RHICompletionEvent;
  if ((FBaseGraphTask *)pTVar3 != TVar8.Reference) {
    pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar5->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a8 + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_a8 != (undefined8 *)0x0)) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  local_58.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_30 = 0;
  local_2c = 4;
  if (this->bIsInterrupt == false) {
    local_a0 = pTVar3->Reference;
    if (local_a0 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_a0->field_0x30 = *(int *)&local_a0->field_0x30 + 1;
      UNLOCK();
    }
    FRHICommandListExecutor::AddNextDispatchPrerequisite
              (&GRHICommandList,(FBaseGraphTask *)&local_a0);
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    if ((ulonglong)FVar9 < 0x154be7ac9) {
      FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar9 = local_58.SecondaryData;
      }
      if ((&GRHICommandList.CompletionEvent <
           (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + (longlong)local_2c * 8)) &&
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
    }
    if (local_30 == local_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_58,&local_2c);
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         GRHICommandList.CompletionEvent.Reference;
    if (GRHICommandList.CompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 =
           *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 + 1;
      UNLOCK();
    }
  }
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  local_60 = 0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_PEAVFRHIComputeShader__PEAVFComputePipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
                ::Call;
  local_70 = this;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatIdData *)local_88,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,(Type)&local_58);
  if (local_98[0] != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_98[0] + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_98[0])(local_98[0],1);
    }
  }
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = local_58.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar9,local_30);
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StartAsyncCacheConsolidation @ 145cc1c70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
StartAsyncCacheConsolidation
          (TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
           *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FBaseGraphTask> TVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_a8;
  FBaseGraphTask *local_a0;
  undefined8 *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*> *local_70;
  undefined8 local_60;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"StartAsyncCacheConsolidation");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1924,"StartAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x784);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1924);
  }
  TVar8 = FBaseGraphTask::CreateGraphEvent();
  pTVar3 = &this->RHICompletionEvent;
  if ((FBaseGraphTask *)pTVar3 != TVar8.Reference) {
    pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar5->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a8 + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_a8 != (undefined8 *)0x0)) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  local_58.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_30 = 0;
  local_2c = 4;
  if (this->bIsInterrupt == false) {
    local_a0 = pTVar3->Reference;
    if (local_a0 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_a0->field_0x30 = *(int *)&local_a0->field_0x30 + 1;
      UNLOCK();
    }
    FRHICommandListExecutor::AddNextDispatchPrerequisite
              (&GRHICommandList,(FBaseGraphTask *)&local_a0);
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    if ((ulonglong)FVar9 < 0x154be7ac9) {
      FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar9 = local_58.SecondaryData;
      }
      if ((&GRHICommandList.CompletionEvent <
           (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + (longlong)local_2c * 8)) &&
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
    }
    if (local_30 == local_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_58,&local_2c);
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         GRHICommandList.CompletionEvent.Reference;
    if (GRHICommandList.CompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 =
           *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 + 1;
      UNLOCK();
    }
  }
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  local_60 = 0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFGraphicsPipelineStateInitializer__PEAVFGraphicsPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
                ::Call;
  local_70 = this;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatIdData *)local_88,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,(Type)&local_58);
  if (local_98[0] != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_98[0] + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_98[0])(local_98[0],1);
    }
  }
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = local_58.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar9,local_30);
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StartAsyncCacheConsolidation @ 145cc1f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
StartAsyncCacheConsolidation
          (TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
           *this)

{
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  TRefCountPtr<FBaseGraphTask> TVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStack_f8 [32];
  undefined8 *local_a8;
  FBaseGraphTask *local_a0;
  undefined8 *local_98 [2];
  code *local_88 [2];
  undefined **local_78;
  TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*> *local_70;
  undefined8 local_60;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_30;
  int local_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"StartAsyncCacheConsolidation");
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId1924,"StartAsyncCacheConsolidation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0x784);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState*___ptr64>::StartAsyncCacheConsolidation(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId1924);
  }
  TVar8 = FBaseGraphTask::CreateGraphEvent();
  pTVar3 = &this->RHICompletionEvent;
  if ((FBaseGraphTask *)pTVar3 != TVar8.Reference) {
    pFVar5 = pTVar3->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar3->Reference = *TVar8.Reference;
    *(undefined8 *)TVar8.Reference = 0;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar5->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
      }
    }
  }
  if (local_a8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_a8 + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if ((iVar4 == 1) && (local_a8 != (undefined8 *)0x0)) {
      (**(code **)*local_a8)(local_a8,1);
    }
  }
  local_58.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_30 = 0;
  local_2c = 4;
  if (this->bIsInterrupt == false) {
    local_a0 = pTVar3->Reference;
    if (local_a0 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_a0->field_0x30 = *(int *)&local_a0->field_0x30 + 1;
      UNLOCK();
    }
    FRHICommandListExecutor::AddNextDispatchPrerequisite
              (&GRHICommandList,(FBaseGraphTask *)&local_a0);
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    if ((ulonglong)FVar9 < 0x154be7ac9) {
      FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
      if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar9 = local_58.SecondaryData;
      }
      if ((&GRHICommandList.CompletionEvent <
           (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + (longlong)local_2c * 8)) &&
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
    }
    if (local_30 == local_2c) {
      local_30 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_58,&local_2c);
    }
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
    if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = local_58.SecondaryData;
    }
    lVar10 = (longlong)local_30;
    local_30 = local_30 + 1;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         (FBaseGraphTask *)0x0;
    ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar9 + lVar10 * 8))->Reference =
         GRHICommandList.CompletionEvent.Reference;
    if (GRHICommandList.CompletionEvent.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 =
           *(int *)&(GRHICommandList.CompletionEvent.Reference)->field_0x30 + 1;
      UNLOCK();
    }
  }
  ConsolidatePipelineStates
            (this,&this->NewRenderThreadPipelineStates,&this->RenderThreadsPipelineStateCache);
  ConsolidateThreadCache
            (this,this->CurrentMap_RenderThread,this->BackfillMap_RenderThread,
             &this->NewRenderThreadPipelineStates,true);
  local_60 = 0;
  local_78 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__StartAsyncCacheConsolidation___TSharedPipelineStateCache_VFWorkGraphPipelineStateInitializer__PEAVFWorkGraphPipelineState____AEAAXXZ__00_0A__Function_Private_Core_UE__6B_
  ;
  local_88[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::StartAsyncCacheConsolidation'::__l2::<lambda_1>,void>
                ::Call;
  local_70 = this;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)local_98,(TStatIdData *)local_88,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,(Type)&local_58);
  if (local_98[0] != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_98[0] + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_98[0])(local_98[0],1);
    }
  }
  FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_58;
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = local_58.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar9,local_30);
  if (local_58.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// WaitTasksComplete @ 145cccac0

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::WaitTasksComplete
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this,
          TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>
          *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPipelineStateAsync *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)param_1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
              *)param_1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(FPipelineStateAsync **)(*local_48 + 8 + (longlong)(int)uVar3 * 0x18);
      if (this_00 != (FPipelineStateAsync *)0x0) {
        FPipelineStateAsync::WaitCompletion(this_00);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cccc09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitTasksComplete @ 145cccc20

void __thiscall
TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*>::WaitTasksComplete
          (TSharedPipelineStateCache<FRHIComputeShader_*,FComputePipelineState_*> *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTVar3;
  FPipelineStateAsync *this_00;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  iVar2 = (this->AllThreadsPipelineStateCache).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllThreadsPipelineStateCache).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMap<FRHIComputeShader_*,FComputePipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = *(TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar8;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_88,pTVar3);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar6 = local_88._24_8_ >> 0x20;
    local_28 = pTVar3;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        this_00 = *(FPipelineStateAsync **)(*local_58 + 8 + (longlong)(int)uVar6 * 0x18);
        if (this_00 != (FPipelineStateAsync *)0x0) {
          FPipelineStateAsync::WaitCompletion(this_00);
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar6 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar5 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
          local_28->HashSize = iVar5;
          TSet<TTuple<FRHIComputeShader_*,FComputePipelineState_*>,TDefaultMapHashableKeyFuncs<FRHIComputeShader_*,FComputePipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = pFVar8 + 8;
  }
  WaitTasksComplete(this,this->BackfillMap);
  WaitTasksComplete(this,this->CurrentMap);
  WaitTasksComplete(this,this->BackfillMap_RenderThread);
  WaitTasksComplete(this,this->CurrentMap_RenderThread);
                    /* WARNING: Could not recover jumptable at 0x000145ccce20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitTasksComplete @ 145ccce40

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
WaitTasksComplete(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
                  *this,TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>
                        *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPipelineStateAsync *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              *)param_1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
              *)param_1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(FPipelineStateAsync **)((longlong)(int)uVar3 * 0xf0 + 0xe0 + *local_48);
      if (this_00 != (FPipelineStateAsync *)0x0) {
        FPipelineStateAsync::WaitCompletion(this_00);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145cccf8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitTasksComplete @ 145cccfb0

void __thiscall
TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>::
WaitTasksComplete(TSharedPipelineStateCache<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>
                  *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar3;
  FPipelineStateAsync *this_00;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  iVar2 = (this->AllThreadsPipelineStateCache).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllThreadsPipelineStateCache).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMap<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = *(TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar8;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_88,pTVar3);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar6 = local_88._24_8_ >> 0x20;
    local_28 = pTVar3;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        this_00 = *(FPipelineStateAsync **)((longlong)(int)uVar6 * 0xf0 + 0xe0 + *local_58);
        if (this_00 != (FPipelineStateAsync *)0x0) {
          FPipelineStateAsync::WaitCompletion(this_00);
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar6 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar5 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
          local_28->HashSize = iVar5;
          TSet<TTuple<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FGraphicsPipelineStateInitializer,FGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = pFVar8 + 8;
  }
  WaitTasksComplete(this,this->BackfillMap);
  WaitTasksComplete(this,this->CurrentMap);
  WaitTasksComplete(this,this->BackfillMap_RenderThread);
  WaitTasksComplete(this,this->CurrentMap_RenderThread);
                    /* WARNING: Could not recover jumptable at 0x000145ccd1b6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitTasksComplete @ 145ccd1d0

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
WaitTasksComplete(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
                  *this,TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>
                        *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FPipelineStateAsync *this_00;
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined1 local_78 [32];
  longlong local_58;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_50;
  longlong *local_48;
  undefined1 auStack_40 [16];
  uint uStack_30;
  uint uStack_2c;
  longlong local_28;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_20;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *local_18;
  undefined2 local_10;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  ::TIterator::TIterator
            ((TIterator *)local_78,
             (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              *)param_1);
  local_10 = 0;
  stack0xffffffffffffffc8 = local_78._16_16_;
  local_48 = (longlong *)local_78._0_8_;
  auStack_40._0_8_ = local_78._8_8_;
  local_28 = local_58;
  pTStack_20 = pTStack_50;
  uVar3 = local_78._24_8_ >> 0x20;
  local_18 = (TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
              *)param_1;
  if (local_78._28_4_ < *(int *)(local_78._16_8_ + 0x18)) {
    do {
      this_00 = *(FPipelineStateAsync **)((longlong)(int)uVar3 * 0x78 + 0x68 + *local_48);
      if (this_00 != (FPipelineStateAsync *)0x0) {
        FPipelineStateAsync::WaitCompletion(this_00);
      }
      uStack_30 = uStack_30 & ~auStack_40._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_40);
      uVar3 = (ulonglong)uStack_2c;
    } while ((int)uStack_2c < *(int *)(auStack_40._8_8_ + 0x18));
    if (((char)local_10 != '\0') && (local_10._1_1_ != '\0')) {
      uVar4 = *(int *)&(local_18->Elements).field_0x8 - *(int *)&(local_18->Elements).field_0x34;
      if (uVar4 < 4) {
        iVar2 = 1;
      }
      else {
        uVar3 = (ulonglong)((uVar4 >> 1) + 7) * 2 + 1;
        lVar1 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
          }
        }
        iVar2 = 1 << ((byte)lVar1 & 0x1f);
      }
      if (((0 < (int)uVar4) && (local_18->HashSize < iVar2)) || (iVar2 < local_18->HashSize)) {
        local_18->HashSize = iVar2;
        TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
        ::Rehash(local_18);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145ccd319. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitTasksComplete @ 145ccd330

void __thiscall
TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>::
WaitTasksComplete(TSharedPipelineStateCache<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>
                  *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTVar3;
  FPipelineStateAsync *this_00;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  undefined1 local_88 [32];
  longlong local_68;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_60;
  longlong *local_58;
  undefined1 auStack_50 [16];
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *pTStack_30;
  TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
  *local_28;
  undefined2 local_20;
  
  lpCriticalSection = &this->AllThreadsLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar8 = (this->AllThreadsPipelineStateCache).AllocatorInstance.Data;
  iVar2 = (this->AllThreadsPipelineStateCache).ArrayNum;
  pFVar1 = pFVar8 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->AllThreadsPipelineStateCache).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TMap<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>_>_*,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar1) break;
    pTVar3 = *(TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
               **)pFVar8;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
    ::TIterator::TIterator((TIterator *)local_88,pTVar3);
    local_20 = 0;
    stack0xffffffffffffffb8 = local_88._16_16_;
    local_58 = (longlong *)local_88._0_8_;
    auStack_50._0_8_ = local_88._8_8_;
    local_38 = local_68;
    pTStack_30 = pTStack_60;
    uVar6 = local_88._24_8_ >> 0x20;
    local_28 = pTVar3;
    if (local_88._28_4_ < *(int *)(local_88._16_8_ + 0x18)) {
      do {
        this_00 = *(FPipelineStateAsync **)((longlong)(int)uVar6 * 0x78 + 0x68 + *local_58);
        if (this_00 != (FPipelineStateAsync *)0x0) {
          FPipelineStateAsync::WaitCompletion(this_00);
        }
        uStack_40 = uStack_40 & ~auStack_50._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_50);
        uVar6 = (ulonglong)uStack_3c;
      } while ((int)uStack_3c < *(int *)(auStack_50._8_8_ + 0x18));
      if (((char)local_20 != '\0') && (local_20._1_1_ != '\0')) {
        uVar7 = *(int *)&(local_28->Elements).field_0x8 - *(int *)&(local_28->Elements).field_0x34;
        if (uVar7 < 4) {
          iVar5 = 1;
        }
        else {
          uVar6 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar4 = 0x3f;
          if (uVar6 != 0) {
            for (; uVar6 >> lVar4 == 0; lVar4 = lVar4 + -1) {
            }
          }
          iVar5 = 1 << ((byte)lVar4 & 0x1f);
        }
        if (((0 < (int)uVar7) && (local_28->HashSize < iVar5)) || (iVar5 < local_28->HashSize)) {
          local_28->HashSize = iVar5;
          TSet<TTuple<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*>,TDefaultMapHashableKeyFuncs<FWorkGraphPipelineStateInitializer,FWorkGraphPipelineState_*,0>,FDefaultSetAllocator>
          ::Rehash(local_28);
        }
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar8 = pFVar8 + 8;
  }
  WaitTasksComplete(this,this->BackfillMap);
  WaitTasksComplete(this,this->CurrentMap);
  WaitTasksComplete(this,this->BackfillMap_RenderThread);
  WaitTasksComplete(this,this->CurrentMap_RenderThread);
                    /* WARNING: Could not recover jumptable at 0x000145ccd530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

