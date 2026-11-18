// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 2

// FCompileComputePipelineStateTask @ 145c85900

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

FCompileComputePipelineStateTask * __thiscall
FCompileComputePipelineStateTask::FCompileComputePipelineStateTask
          (FCompileComputePipelineStateTask *this,FPipelineStateAsync *param_1,
          FComputePipelineStateInitializer *param_2,EPSOPrecacheResult param_3,bool param_4,
          bool param_5,FPSOCompilationDebugData *param_6)

{
  code *pcVar1;
  FRHIComputeShader *pFVar2;
  FComputePipelineStateInitializer_u_8 FVar3;
  undefined7 uVar4;
  bool bVar5;
  FBaseGraphTask *pFVar6;
  FCompileComputePipelineStateTask *pFVar7;
  
  *(FPipelineStateAsync **)this = param_1;
  pFVar2 = param_2->ComputeShader;
  FVar3 = param_2->field1_0x8;
  uVar4 = *(undefined7 *)&param_2->field_0x9;
  this->field_0x1c = param_4;
  *(FRHIComputeShader **)&this->field_0x8 = pFVar2;
  this->field_0x10 = FVar3;
  *(undefined7 *)&this->field_0x11 = uVar4;
  this->field_0x1d = param_5;
  *(EPSOPrecacheResult *)&this->field_0x18 = param_3;
  ::FString::FString((FString *)&this->field_0x20,&param_6->PSOCompilationEventName);
  *(FRHIBreadcrumbNode **)&this->field_0x30 = param_6->BreadcrumbRoot;
  *(FRHIBreadcrumbNode **)&this->field_0x38 = param_6->BreadcrumbNode;
  pFVar6 = FPipelineStateAsync::GetCompletionEvent(*(FPipelineStateAsync **)this);
  if (pFVar6 == (FBaseGraphTask *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859941469>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xc5d,"Pipeline->GetCompletionEvent() != nullptr");
    if (bVar5) {
      pcVar1 = (code *)swi(3);
      pFVar7 = (FCompileComputePipelineStateTask *)(*pcVar1)();
      return pFVar7;
    }
  }
  if ((char)this->field_0x10 < '\0') {
    LOCK();
    GPipelinePrecompileTasksInFlight = (atomic<int>)((int)GPipelinePrecompileTasksInFlight + 1);
    UNLOCK();
  }
  FRHIShader::SetInUseByPSOCompilation((FRHIShader *)param_2->ComputeShader,true);
  return this;
}

// CompilePSOInternal @ 145c946d0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FCompileComputePipelineStateTask::CompilePSOInternal
          (FCompileComputePipelineStateTask *this,EPSOPrecacheCompileType *param_1)

{
  undefined1 *puVar1;
  FRHIResource **ppFVar2;
  longlong lVar3;
  FRHIResource *this_00;
  code *pcVar4;
  TUniquePtr<FPrecacheComputePipelineCache,TDefaultDelete<FPrecacheComputePipelineCache>_> TVar5;
  bool bVar6;
  int iVar7;
  EPSOPrecacheCompileType EVar8;
  undefined1 *puVar9;
  EPSOPrecacheCompileType EVar10;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  LARGE_INTEGER local_res18;
  FRHIResource *local_28;
  ulonglong local_20;
  
  lVar3 = *(longlong *)this;
  QueryPerformanceCounter(&local_res18);
  EVar8 = NormalPri;
  if (param_1 != (EPSOPrecacheCompileType *)0x0) {
    EVar10 = MaxPri;
    if (*param_1 < MaxPri) {
      EVar10 = *param_1;
    }
    EVar8 = MinPri;
    if (MinPri < EVar10) {
      EVar8 = EVar10;
    }
  }
  FPSOCSVStatTracker::SetInFlightPriority((FPSOCSVStatTracker *)(*(longlong *)this + 0x30),EVar8);
  FLLMScope::FLLMScope(local_res8,Shaders,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,Shaders,true);
  puVar1 = &this->field_0x8;
  (**(code **)(GDynamicRHI->_padding_ + 0x118))(GDynamicRHI,&local_28,puVar1);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  ppFVar2 = (FRHIResource **)(lVar3 + 0x40);
  if (ppFVar2 != &local_28) {
    this_00 = *ppFVar2;
    *ppFVar2 = local_28;
    local_28 = (FRHIResource *)0x0;
    if (this_00 == (FRHIResource *)0x0) goto LAB_145c947c7;
    FRHIResource::Release(this_00);
  }
  if (local_28 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_28);
  }
LAB_145c947c7:
  if (((char)this->field_0x10 < '\0') || ((this->field_0x10 & 0x40) != 0)) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  CheckAndUpdateHitchCountStat
            (Compute,bVar6,(FPSOCompilationDebugData *)&this->field_0x20,local_res18.QuadPart,
             *(EPSOPrecacheResult *)&this->field_0x18);
  if (*ppFVar2 == (FRHIResource *)0x0) {
    HandlePipelineCreationFailure((FComputePipelineStateInitializer *)puVar1);
  }
  TVar5.Ptr = GPrecacheComputePipelineCache.Ptr;
  if ((this->field_0x10 & 0x40) == 0) {
    if (this->field_0x1c != '\0') {
      bVar6 = ShouldKeepPrecachedPSOsInMemory();
      if ((bVar6) && (GPSOPrecacheKeepInMemoryUntilUsed == 2)) {
        local_20 = (ulonglong)*(uint *)(*(longlong *)puVar1 + 0xf0);
        AcquireSRWLockExclusive((PSRWLOCK)&(TVar5.Ptr)->field_0x8);
        puVar9 = &(TVar5.Ptr)->field_0x80;
        if ((*(ulonglong **)puVar9 <= &local_20) &&
           (&local_20 < *(ulonglong **)puVar9 + *(int *)&(TVar5.Ptr)->field_0x8c)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar7 = *(int *)&(TVar5.Ptr)->field_0x88;
        if (iVar7 == *(int *)&(TVar5.Ptr)->field_0x8c) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)puVar9,(int *)&(TVar5.Ptr)->field_0x8c);
        }
        *(int *)&(TVar5.Ptr)->field_0x88 = iVar7 + 1;
        *(ulonglong *)(*(longlong *)puVar9 + (longlong)iVar7 * 8) = local_20;
        ReleaseSRWLockExclusive((PSRWLOCK)&(TVar5.Ptr)->field_0x8);
      }
    }
  }
  else if ((*ppFVar2 == (FRHIResource *)0x0) || (*(char *)&(*ppFVar2)[1].AtomicFlags.Packed == '\0')
          ) {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::PrecacheFinished((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                        *)GPrecacheComputePipelineCache.Ptr,
                       (FComputePipelineStateInitializer *)puVar1,false);
  }
  else {
    TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
    ::PrecacheFinished((TPrecachePipelineCacheBase<FPrecacheComputePipelineCache,FComputePipelineStateInitializer,FComputePipelineState>
                        *)GPrecacheComputePipelineCache.Ptr,
                       (FComputePipelineStateInitializer *)puVar1,true);
  }
  FRHIShader::SetInUseByPSOCompilation(*(FRHIShader **)puVar1,false);
  return;
}

