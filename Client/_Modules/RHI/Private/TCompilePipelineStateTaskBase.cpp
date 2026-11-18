// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// CompilePSO @ 145c94080

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::
CompilePSO(TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
           *this,EPSOPrecacheCompileType *param_1)

{
  int iVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  Type TVar6;
  FBaseGraphTask *pFVar7;
  FTaskBase *this_00;
  ETaskTag EVar8;
  FRHIBreadcrumbNode *pFVar9;
  wchar_t *pwVar10;
  FLLMScope local_res8 [2];
  FRHIBreadcrumbNode *local_res18;
  <lambda_1> local_res20;
  FMemScope local_38;
  FTaskTagScope local_30 [2];
  
  FLLMScope::FLLMScope(local_res8,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_38,PSO,true);
  TVar6 = GetDesiredThread(this);
  EVar8 = EParallelRenderingThread;
  if (TVar6 == MainQueue) {
    EVar8 = EParallelRhiThread;
  }
  FTaskTagScope::FTaskTagScope(local_30,EVar8);
  pFVar9 = (this->PSOCompilationDebugData).BreadcrumbNode;
  if (pFVar9 != (FRHIBreadcrumbNode *)0x0) {
    local_res18 = (this->PSOCompilationDebugData).BreadcrumbRoot;
    if ((local_res18 == (FRHIBreadcrumbNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Leaf && Root",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x2c0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < CpuChannel->Enabled) {
      local_res20.Root = &local_res18;
      if (pFVar9 != local_res18) {
        `FRHIBreadcrumbNode::WalkInRange'::__l12::<lambda_1>::
        operator()<_FRHIBreadcrumbNode::WalkInRange_::__l12::<lambda_1>_>
                  (&local_res20,&local_res20,pFVar9->Parent);
      }
      if (pFVar9->TraceCpuSpecId != 0) {
        if (pFVar9->TraceCpuMetadataId == 0) {
          FCpuProfilerTrace::OutputBeginEvent(pFVar9->TraceCpuSpecId);
        }
        else {
          FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar9->TraceCpuMetadataId);
        }
      }
    }
  }
  pwVar10 = (wchar_t *)0x0;
  switch(this->PSOPrecacheResult) {
  case Unknown:
    pwVar10 = L"PSOPrecache: Unknown";
    break;
  case Active:
    pwVar10 = L"PSOPrecache: Precaching";
    break;
  case Complete:
    pwVar10 = L"PSOPrecache: Precached";
    break;
  case Missed:
    pwVar10 = L"PSOPrecache: Missed";
    break;
  case TooLate:
    pwVar10 = L"PSOPrecache: Too Late";
    break;
  case NotSupported:
    pwVar10 = L"PSOPrecache: Not Supported";
    break;
  case Untracked:
    pwVar10 = L"PSOPrecache: Untracked";
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar10,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0xc8e);
  }
  iVar1 = (this->PSOCompilationDebugData).PSOCompilationEventName.Data.ArrayNum;
  if (((iVar1 == 0) || (iVar1 < 2)) || (CpuChannel->Enabled < 0)) {
    FCompileComputePipelineStateTask::CompilePSOInternal
              ((FCompileComputePipelineStateTask *)this,param_1);
  }
  else {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)
               (this->PSOCompilationDebugData).PSOCompilationEventName.Data.AllocatorInstance.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0xc90);
    FCompileComputePipelineStateTask::CompilePSOInternal
              ((FCompileComputePipelineStateTask *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar9 = (this->PSOCompilationDebugData).BreadcrumbNode;
  if (pFVar9 != (FRHIBreadcrumbNode *)0x0) {
    pFVar2 = (this->PSOCompilationDebugData).BreadcrumbRoot;
    if ((pFVar2 == (FRHIBreadcrumbNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Leaf && Root",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x2e3,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < CpuChannel->Enabled) {
      while( true ) {
        if (pFVar9->TraceCpuSpecId != 0) {
          if (pFVar9->TraceCpuMetadataId == 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          else {
            FCpuProfilerTrace::OutputEndEventWithMetadata();
          }
        }
        if (pFVar9 == pFVar2) break;
        pFVar9 = pFVar9->Parent;
      }
    }
  }
  pFVar7 = FPipelineStateAsync::GetCompletionEvent(this->Pipeline);
  if (pFVar7 == (FBaseGraphTask *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859941535>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xc9f,"Pipeline->GetCompletionEvent()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = (FTaskBase *)FPipelineStateAsync::GetCompletionEvent(this->Pipeline);
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
    this->Pipeline = (FPipelineStateAsync *)0x0;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FTaskTagScope::~FTaskTagScope(local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// CompilePSO @ 145c943a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::
CompilePSO(TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
           *this,EPSOPrecacheCompileType *param_1)

{
  int iVar1;
  FRHIBreadcrumbNode *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  Type TVar6;
  FBaseGraphTask *pFVar7;
  FTaskBase *this_00;
  ETaskTag EVar8;
  FRHIBreadcrumbNode *pFVar9;
  wchar_t *pwVar10;
  FLLMScope local_res8 [2];
  FRHIBreadcrumbNode *local_res18;
  <lambda_1> local_res20;
  FMemScope local_38;
  FTaskTagScope local_30 [2];
  
  FLLMScope::FLLMScope(local_res8,PSO,false,None,Default,true);
  FMemScope::FMemScope(&local_38,PSO,true);
  TVar6 = GetDesiredThread(this);
  EVar8 = EParallelRenderingThread;
  if (TVar6 == MainQueue) {
    EVar8 = EParallelRhiThread;
  }
  FTaskTagScope::FTaskTagScope(local_30,EVar8);
  pFVar9 = (this->PSOCompilationDebugData).BreadcrumbNode;
  if (pFVar9 != (FRHIBreadcrumbNode *)0x0) {
    local_res18 = (this->PSOCompilationDebugData).BreadcrumbRoot;
    if ((local_res18 == (FRHIBreadcrumbNode *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Leaf && Root",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x2c0,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < CpuChannel->Enabled) {
      local_res20.Root = &local_res18;
      if (pFVar9 != local_res18) {
        `FRHIBreadcrumbNode::WalkInRange'::__l12::<lambda_1>::
        operator()<_FRHIBreadcrumbNode::WalkInRange_::__l12::<lambda_1>_>
                  (&local_res20,&local_res20,pFVar9->Parent);
      }
      if (pFVar9->TraceCpuSpecId != 0) {
        if (pFVar9->TraceCpuMetadataId == 0) {
          FCpuProfilerTrace::OutputBeginEvent(pFVar9->TraceCpuSpecId);
        }
        else {
          FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar9->TraceCpuMetadataId);
        }
      }
    }
  }
  pwVar10 = (wchar_t *)0x0;
  switch(this->PSOPrecacheResult) {
  case Unknown:
    pwVar10 = L"PSOPrecache: Unknown";
    break;
  case Active:
    pwVar10 = L"PSOPrecache: Precaching";
    break;
  case Complete:
    pwVar10 = L"PSOPrecache: Precached";
    break;
  case Missed:
    pwVar10 = L"PSOPrecache: Missed";
    break;
  case TooLate:
    pwVar10 = L"PSOPrecache: Too Late";
    break;
  case NotSupported:
    pwVar10 = L"PSOPrecache: Not Supported";
    break;
  case Untracked:
    pwVar10 = L"PSOPrecache: Untracked";
  }
  bVar4 = -1 < CpuChannel->Enabled;
  if (bVar4) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (pwVar10,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0xc8e);
  }
  iVar1 = (this->PSOCompilationDebugData).PSOCompilationEventName.Data.ArrayNum;
  if (((iVar1 == 0) || (iVar1 < 2)) || (CpuChannel->Enabled < 0)) {
    FCompileGraphicsPipelineStateTask::CompilePSOInternal
              ((FCompileGraphicsPipelineStateTask *)this,param_1);
  }
  else {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              ((wchar_t *)
               (this->PSOCompilationDebugData).PSOCompilationEventName.Data.AllocatorInstance.Data,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
               ,0xc90);
    FCompileGraphicsPipelineStateTask::CompilePSOInternal
              ((FCompileGraphicsPipelineStateTask *)this,param_1);
    FCpuProfilerTrace::OutputEndEvent();
  }
  pFVar9 = (this->PSOCompilationDebugData).BreadcrumbNode;
  if (pFVar9 != (FRHIBreadcrumbNode *)0x0) {
    pFVar2 = (this->PSOCompilationDebugData).BreadcrumbRoot;
    if ((pFVar2 == (FRHIBreadcrumbNode *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Leaf && Root",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                           ,0x2e3,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < CpuChannel->Enabled) {
      while( true ) {
        if (pFVar9->TraceCpuSpecId != 0) {
          if (pFVar9->TraceCpuMetadataId == 0) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          else {
            FCpuProfilerTrace::OutputEndEventWithMetadata();
          }
        }
        if (pFVar9 == pFVar2) break;
        pFVar9 = pFVar9->Parent;
      }
    }
  }
  pFVar7 = FPipelineStateAsync::GetCompletionEvent(this->Pipeline);
  if (pFVar7 == (FBaseGraphTask *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4687553501859941535>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\PipelineStateCache.cpp"
                       ,0xc9f,"Pipeline->GetCompletionEvent()");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    this_00 = (FTaskBase *)FPipelineStateAsync::GetCompletionEvent(this->Pipeline);
    if (this_00->ExtendedPriority == TaskEvent) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
    this->Pipeline = (FPipelineStateAsync *)0x0;
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FTaskTagScope::~FTaskTagScope(local_30);
  FMemScope::~FMemScope(&local_38);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// GetDesiredThread @ 145ca9010

/* WARNING: Enum "Type": Some values do not have unique names */

Type __thiscall
TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>::
GetDesiredThread(TCompilePipelineStateTaskBase<FCompileComputePipelineStateTask,FComputePipelineStateInitializer>
                 *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  char cVar5;
  Type TVar6;
  Type TVar7;
  
  TVar7 = CPrio_FCompilePipelineStateTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_FCompilePipelineStateTask.TaskPriority;
  TVar6 = CPrio_FCompilePipelineStateTask.ThreadPriority;
  if (((GRunPSOCreateTasksOnRHIT) && (GIsRunningRHIInSeparateThread_InternalUseOnly)) &&
     (this->bInImmediateCmdList != false)) {
    TVar7 = MainQueue;
  }
  else {
    iVar2 = ENamedThreads::bHasHighPriorityThreads;
    if (((CPrio_FCompilePipelineStateTask.ThreadPriority == HighThreadPriority) ||
        (iVar2 = ENamedThreads::bHasBackgroundThreads,
        CPrio_FCompilePipelineStateTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)
       ) {
      if (((CPrio_FCompilePipelineStateTask.TaskPriorityIfForcedToNormalThreadPriority &
           ~HighTaskPriority) != MainQueue) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xcd,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
    }
    else {
      if ((((CPrio_FCompilePipelineStateTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
            (CPrio_FCompilePipelineStateTask.ThreadPriority & ThreadPriorityMask) ==
            ThreadPriorityMask) ||
          ((CPrio_FCompilePipelineStateTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xb1,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
      TVar7 = TVar6 | TVar3;
    }
    TVar7 = TVar7 | AnyNormalThreadNormalTask;
  }
  if ((this->PSOPrecacheResult != Active) &&
     (((this->Pipeline == (FPipelineStateAsync *)0x0 ||
       (cVar5 = (**(code **)(this->Pipeline->_padding_ + 8))(), cVar5 == '\0')) ||
      (-1 < (char)(this->Initializer).field1_0x8.Flags)))) {
    return TVar7;
  }
  return AnyBackgroundThreadNormalTask;
}

// GetDesiredThread @ 145ca9150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

Type __thiscall
TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>::
GetDesiredThread(TCompilePipelineStateTaskBase<FCompileGraphicsPipelineStateTask,FGraphicsPipelineStateInitializer>
                 *this)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  char cVar5;
  Type TVar6;
  Type TVar7;
  
  TVar7 = CPrio_FCompilePipelineStateTask.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_FCompilePipelineStateTask.TaskPriority;
  TVar6 = CPrio_FCompilePipelineStateTask.ThreadPriority;
  if (((GRunPSOCreateTasksOnRHIT) && (GIsRunningRHIInSeparateThread_InternalUseOnly)) &&
     (this->bInImmediateCmdList != false)) {
    TVar7 = MainQueue;
  }
  else {
    iVar2 = ENamedThreads::bHasHighPriorityThreads;
    if (((CPrio_FCompilePipelineStateTask.ThreadPriority == HighThreadPriority) ||
        (iVar2 = ENamedThreads::bHasBackgroundThreads,
        CPrio_FCompilePipelineStateTask.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)
       ) {
      if (((CPrio_FCompilePipelineStateTask.TaskPriorityIfForcedToNormalThreadPriority &
           ~HighTaskPriority) != MainQueue) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xcd,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
    }
    else {
      if ((((CPrio_FCompilePipelineStateTask.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
            (CPrio_FCompilePipelineStateTask.ThreadPriority & ThreadPriorityMask) ==
            ThreadPriorityMask) ||
          ((CPrio_FCompilePipelineStateTask.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xb1,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        TVar6 = (*pcVar1)();
        return TVar6;
      }
      TVar7 = TVar6 | TVar3;
    }
    TVar7 = TVar7 | AnyNormalThreadNormalTask;
  }
  if ((this->PSOPrecacheResult != Active) &&
     (((this->Pipeline == (FPipelineStateAsync *)0x0 ||
       (cVar5 = (**(code **)(this->Pipeline->_padding_ + 8))(), cVar5 == '\0')) ||
      (((this->Initializer).field25_0xd2.Flags & 0x1000) == 0)))) {
    return TVar7;
  }
  return AnyBackgroundThreadNormalTask;
}

