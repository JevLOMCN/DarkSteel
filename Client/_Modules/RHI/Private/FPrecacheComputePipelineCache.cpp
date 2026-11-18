// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// OnNewPipelineStateCreated @ 145cb4180

void __cdecl
FPrecacheComputePipelineCache::OnNewPipelineStateCreated
          (FComputePipelineStateInitializer *param_1,FComputePipelineState *param_2,FString *param_3
          ,bool param_4)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FPSOCompilationDebugData local_28;
  
  if ((param_1->ComputeShader == (FRHIComputeShader *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeInitializer.ComputeShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x1157,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((((param_1->field1_0x8).Flags & 0x40) == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeInitializer.bPSOPrecache",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                         ,0x1158,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_28.PSOCompilationEventName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.PSOCompilationEventName.Data.ArrayNum = 0;
  local_28.PSOCompilationEventName.Data.ArrayMax = 0;
  local_28.BreadcrumbRoot = (FRHIBreadcrumbNode *)0x0;
  local_28.BreadcrumbNode = (FRHIBreadcrumbNode *)0x0;
  if (&local_28 != (FPSOCompilationDebugData *)param_3) {
    uVar1 = (param_3->Data).ArrayNum;
    _Src = (param_3->Data).AllocatorInstance.Data;
    local_28.PSOCompilationEventName.Data.ArrayMax = 0;
    local_28.PSOCompilationEventName.Data.ArrayNum = uVar1;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar1,0,(ForAnyElementType *)&local_28,uVar1,
                 &local_28.PSOCompilationEventName.Data.ArrayMax);
      memcpy(local_28.PSOCompilationEventName.Data.AllocatorInstance.Data,_Src,
             (longlong)(int)uVar1 * 2);
    }
  }
  InternalCreateComputePipelineState(param_1,param_4,Active,false,param_2,&local_28,false);
  if (local_28.PSOCompilationEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
     ) {
    FMemory::Free(local_28.PSOCompilationEventName.Data.AllocatorInstance.Data);
  }
  return;
}

// PrecacheComputePipelineState @ 145cb4620

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPSOPrecacheRequestResult * __thiscall
FPrecacheComputePipelineCache::PrecacheComputePipelineState
          (FPrecacheComputePipelineCache *this,FPSOPrecacheRequestResult *__return_storage_ptr__,
          FRHIComputeShader *param_1,wchar_t *param_2,bool param_3)

{
  bool bVar1;
  FComputePipelineStateInitializer local_28;
  FString local_18;
  
  if ((((GPSOPrecaching == 0) || (!GRHIGlobals.SupportsPSOPrecaching)) && (!param_3)) ||
     (param_1 == (FRHIComputeShader *)0x0)) {
    __return_storage_ptr__.Type = 0;
    __return_storage_ptr__.RequestID = 0;
    (__return_storage_ptr__->AsyncCompileEvent).Reference = (FBaseGraphTask *)0x0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        bDoAsyncCompile = FApp::ShouldUseThreadingForPerformance();
        _Init_thread_footer(&::_TSS0);
      }
    }
    bVar1 = bDoAsyncCompile;
    local_28.field1_0x8.Flags = '@';
    local_28.ComputeShader = param_1;
    ::FString::FString(&local_18,param_2);
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::TryAddNewState((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                      *)this,__return_storage_ptr__,&local_28,&local_18,bVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

