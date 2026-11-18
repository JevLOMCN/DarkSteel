// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// operator() @ 145c8c500

void __thiscall
`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>::operator()(void *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ForAnyElementType FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  bool bVar14;
  undefined8 local_38;
  undefined8 uStack_30;
  ForAnyElementType local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Finalize");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1140,"RHI_Finalize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x474);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1140);
  }
  pFVar2 = *(FScriptContainerElement **)this;
  FVar10.Data = (FScriptContainerElement *)0x0;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_38 = 0;
  uStack_30 = 0;
  local_20 = 0;
  if (pFVar2 != pFVar2 + 0x40) {
    pFVar11 = pFVar2 + 0x10;
    pFVar12 = FVar10.Data;
    do {
      iVar7 = (int)pFVar12;
      if (*(longlong *)pFVar11 != 0) {
        if ((FVar10.Data <= pFVar11) && (pFVar11 < FVar10.Data + (longlong)local_20._4_4_ * 8)) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar7 = (int)local_20;
          FVar10.Data = local_28.Data;
        }
        if (iVar7 == local_20._4_4_) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_28,(int *)((longlong)&local_20 + 4));
          FVar10.Data = local_28.Data;
        }
        local_20 = CONCAT44(local_20._4_4_,iVar7 + 1U);
        *(longlong *)(FVar10.Data + (longlong)iVar7 * 8) = *(longlong *)pFVar11;
        pFVar12 = (FScriptContainerElement *)(ulonglong)(iVar7 + 1U);
        FVar10.Data = local_28.Data;
      }
      pFVar1 = pFVar11 + 0x10;
      pFVar11 = pFVar11 + 0x20;
    } while (pFVar1 != pFVar2 + 0x40);
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    lVar9 = *(longlong *)this;
    local_18 = *(undefined8 *)(lVar9 + 0x40);
    if (*(char *)(lVar9 + 0x95) == '\0') {
      (**(code **)(GDynamicRHI->_padding_ + 0x3d8))
                (GDynamicRHI,&local_28,&local_38,*(undefined1 *)(lVar9 + 0x96));
      bVar6 = 3;
      do {
        bVar4 = ~bVar6 + 1 & bVar6;
        if ((bVar4 == 1) || (bVar4 != 2)) {
          lVar9 = 0x10;
          lVar13 = 0x18;
        }
        else {
          lVar9 = 0x30;
          lVar13 = 0x38;
        }
        if (*(longlong *)(*(longlong *)this + lVar9) != 0) {
          if ((bVar4 == 1) || (uVar8 = uStack_30, bVar4 != 2)) {
            uVar8 = local_38;
          }
          *(undefined8 *)(*(longlong *)this + lVar13) = uVar8;
        }
        bVar6 = bVar6 & ~(~bVar6 + 1);
        FVar10.Data = local_28.Data;
      } while (bVar6 != 0);
    }
    else {
      uVar8 = (**(code **)(GDynamicRHI->_padding_ + 1000))
                        (GDynamicRHI,*(undefined8 *)(lVar9 + 0x10));
      *(undefined8 *)(lVar9 + 0x18) = uVar8;
      FVar10.Data = local_28.Data;
    }
  }
  if (FVar10.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar10.Data);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// EnqueueTranslateTask @ 145c9e970

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskPipe * __thiscall
FRHICommandListExecutor::FTranslateState::EnqueueTranslateTask
          (FTranslateState *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,TFunction<void___cdecl(void)> *param_2)

{
  TAtomic<ENamedThreads::Type> TVar1;
  FTaskPipe *this_00;
  
  this_00 = &this->TranslatePipe;
  TVar1 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if ((!GRHICommandList.bLatchedBypass) && (GIsRunningRHIInSeparateThread_InternalUseOnly)) {
    TVar1 = (TAtomic<ENamedThreads::Type>)0x6ff;
    if (this->bParallel != false) goto LAB_145c9e9ae;
    TVar1 = (TAtomic<ENamedThreads::Type>)0x0;
  }
  this_00 = &GRHICommandList.RHIThreadPipe;
LAB_145c9e9ae:
  FTaskPipe::Enqueue(this_00,(Type)TVar1,param_1,param_2);
  return this_00;
}

// Finalize @ 145ca3630

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FRHICommandListExecutor::FTranslateState::Finalize(FTranslateState *this)

{
  FBaseGraphTask *pFVar1;
  code *pcVar2;
  TAtomic<ENamedThreads::Type> TVar3;
  bool bVar4;
  TRefCountPtr<FBaseGraphTask> TVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  undefined ***pppuVar7;
  TAtomic<ENamedThreads::Type> TVar8;
  FBaseGraphTask *in_RDX;
  FTaskPipe *this_00;
  undefined1 auStack_a8 [32];
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  code *local_58 [2];
  undefined **local_48;
  FTranslateState *local_40;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_88.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  local_30 = (undefined ***)0x0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,void>
                ::Call;
  local_88.ArrayNum = 0;
  TVar8 = (TAtomic<ENamedThreads::Type>)0x6ff;
  local_88.ArrayMax = 4;
  TVar3 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if (((GRHICommandList.bLatchedBypass) || (!GIsRunningRHIInSeparateThread_InternalUseOnly)) ||
     (this_00 = &this->TranslatePipe, TVar3 = (TAtomic<ENamedThreads::Type>)0x0,
     this->bParallel == false)) {
    TVar8 = TVar3;
    this_00 = &GRHICommandList.RHIThreadPipe;
  }
  local_40 = this;
  FTaskPipe::Enqueue(this_00,(Type)TVar8,&local_88,(TFunction<void___cdecl(void)> *)local_58);
  FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_88;
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar6 = local_88.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_88.ArrayNum);
  if (local_88.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
  }
  if (local_58[0] != (code *)0x0) {
    pppuVar7 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar7 = local_30;
    }
    (*(code *)(*pppuVar7)[2])();
  }
  if (this_00 == &this->TranslatePipe) {
    if (this_00->Current != (FTask *)0x0) {
      FTaskPipe::FTask::Release(this_00->Current);
      this_00->Current = (FTask *)0x0;
    }
    *(longlong *)in_RDX = 0;
    pFVar1 = (this_00->LastEvent).Reference;
    *(FBaseGraphTask **)in_RDX = pFVar1;
    if (pFVar1 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar1->field_0x30 = *(int *)&pFVar1->field_0x30 + 1;
      UNLOCK();
    }
  }
  else {
    if ((this_00 != &GRHICommandList.RHIThreadPipe) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pipe == &GRHICommandList.RHIThreadPipe",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x4a0,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      TVar5.Reference = (FBaseGraphTask *)(*pcVar2)();
      return (TRefCountPtr<FBaseGraphTask>)TVar5.Reference;
    }
    *(longlong *)in_RDX = 0;
  }
  return (TRefCountPtr<FBaseGraphTask>)in_RDX;
}

// GetTranslateTaskPipe @ 145cad490

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskPipe * __thiscall
FRHICommandListExecutor::FTranslateState::GetTranslateTaskPipe(FTranslateState *this,Type *param_1)

{
  FTaskPipe *pFVar1;
  
  *param_1 = AnyHiPriThreadHiPriTask;
  pFVar1 = &this->TranslatePipe;
  if ((GRHICommandList.bLatchedBypass == false) &&
     (GIsRunningRHIInSeparateThread_InternalUseOnly != false)) {
    if (this->bParallel == false) {
      *param_1 = MainQueue;
      return &GRHICommandList.RHIThreadPipe;
    }
  }
  else {
    *param_1 = (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local;
    pFVar1 = &GRHICommandList.RHIThreadPipe;
  }
  return pFVar1;
}

// Translate @ 145cc52d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FTranslateState::Translate
          (FTranslateState *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  FRHIParallelRenderPassInfo *pFVar3;
  FRHIBreadcrumbNode *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  code *pcVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  FRHIBreadcrumbAllocatorArray *pFVar17;
  FRHIBreadcrumbAllocatorArray *_Src;
  byte bVar18;
  FRHIContextArray *pFVar19;
  longlong lVar20;
  undefined8 uVar21;
  longlong lVar22;
  longlong *plVar23;
  <lambda_1> local_res10 [8];
  undefined4 local_res18;
  
  if ((param_1->ParallelRenderPassEnd).Object == (FRHIParallelRenderPassInfo *)0x0) {
    bVar18 = 3;
    do {
      bVar8 = ~bVar18 + 1 & bVar18;
      if ((bVar8 == 1) || (lVar15 = 0x58, bVar8 != 2)) {
        lVar15 = 0x50;
      }
      if (*(longlong *)((longlong)&(param_1->MemManager).Top + lVar15) == 0) {
        if ((bVar8 == 1) || (bVar8 != 2)) {
          uVar21 = *(undefined8 *)&(this->PipelineStates).field_0x10;
          if ((bVar8 == 1) || (bVar8 != 2)) {
            lVar15 = 0x50;
          }
          else {
            lVar15 = 0x58;
          }
        }
        else {
          uVar21 = *(undefined8 *)&(this->PipelineStates).field_0x30;
          lVar15 = 0x58;
        }
        *(undefined8 *)((longlong)&(param_1->MemManager).Top + lVar15) = uVar21;
      }
      bVar18 = bVar18 & ~(~bVar18 + 1);
    } while (bVar18 != 0);
    if (param_1->UploadContext == (IRHIUploadContext *)0x0) {
      param_1->UploadContext = this->UploadContextState;
    }
  }
  else {
    if ((param_1->UploadContext != (IRHIUploadContext *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!CmdList->UploadContext",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x420,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    for (pFVar19 = &param_1->Contexts; pFVar19 != (FRHIContextArray *)&param_1->NumCommands;
        pFVar19 = (FRHIContextArray *)&pFVar19->field_0x8) {
      if ((*(longlong *)pFVar19 != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Context",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                              ,0x423,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (((param_1->ParallelRenderPassEnd).Object == (FRHIParallelRenderPassInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar3 = (param_1->ParallelRenderPassEnd).Object;
    uVar21 = *(undefined8 *)&(pFVar3->Contexts).field_0x8;
    *(undefined8 *)&param_1->Contexts = *(undefined8 *)&pFVar3->Contexts;
    *(undefined8 *)&(param_1->Contexts).field_0x8 = uVar21;
    if ((pFVar3 == (FRHIParallelRenderPassInfo *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    param_1->UploadContext = ((param_1->ParallelRenderPassEnd).Object)->UploadContext;
  }
  pFVar4 = (param_1->CPUBreadcrumbState).Current;
  param_1->ActivePipelines = None;
  if (((-1 < CpuChannel->Enabled) && (pFVar4 != (FRHIBreadcrumbNode *)0x0)) &&
     (pFVar4 != FRHIBreadcrumbNode::Sentinel)) {
    `FRHIBreadcrumbNode::WalkIn'::__l5::<lambda_1>::
    operator()<_FRHIBreadcrumbNode::WalkIn_::__l5::<lambda_1>_>
              (local_res10,local_res10,pFVar4->Parent);
    if (pFVar4->TraceCpuSpecId != 0) {
      if (pFVar4->TraceCpuMetadataId == 0) {
        FCpuProfilerTrace::OutputBeginEvent(pFVar4->TraceCpuSpecId);
      }
      else {
        FCpuProfilerTrace::OutputBeginEventWithMetadata(pFVar4->TraceCpuMetadataId);
      }
    }
  }
  FRHICommandListBase::Execute(param_1);
  pFVar4 = (param_1->CPUBreadcrumbState).Current;
  if (-1 < CpuChannel->Enabled) {
    for (; (pFVar4 != (FRHIBreadcrumbNode *)0x0 && (pFVar4 != FRHIBreadcrumbNode::Sentinel));
        pFVar4 = pFVar4->Parent) {
      if (pFVar4->TraceCpuSpecId != 0) {
        if (pFVar4->TraceCpuMetadataId == 0) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        else {
          FCpuProfilerTrace::OutputEndEventWithMetadata();
        }
      }
    }
  }
  bVar18 = 3;
  do {
    local_res18 = CONCAT31(local_res18._1_3_,~bVar18 + 1);
    bVar8 = ~bVar18 + 1 & bVar18;
    if ((bVar8 == 1) || (lVar15 = 0x30, bVar8 != 2)) {
      lVar15 = 0x10;
    }
    lVar20 = *(longlong *)(&(this->PipelineStates).field_0x0 + lVar15);
    plVar1 = (longlong *)(&(this->PipelineStates).field_0x0 + lVar15);
    if (lVar20 != 0) {
      if ((bVar8 == 1) || (lVar15 = 0x58, bVar8 != 2)) {
        lVar15 = 0x50;
      }
      if ((lVar20 != *(longlong *)((longlong)&(param_1->MemManager).Top + lVar15)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!TranslateContext || TranslateContext == CmdList->Contexts[Pipeline]"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                              ,0x44f,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (*plVar1 == 0) {
      if ((bVar8 == 1) || (lVar15 = 0x58, bVar8 != 2)) {
        lVar15 = 0x50;
      }
      *plVar1 = *(longlong *)((longlong)&(param_1->MemManager).Top + lVar15);
    }
    if ((bVar8 == 1) || (bVar8 != 2)) {
      lVar15 = 0x20;
      lVar20 = 0x28;
      if ((bVar8 != 1) && (bVar8 == 2)) goto LAB_145cc560f;
      lVar22 = 0;
      lVar16 = 8;
    }
    else {
      lVar15 = 0x50;
      lVar20 = 0x58;
LAB_145cc560f:
      lVar16 = 0x28;
      lVar22 = 0x20;
    }
    lVar5 = *(longlong *)(&(this->PipelineStates).field_0x0 + lVar16);
    plVar1 = (longlong *)(&(this->PipelineStates).field_0x0 + lVar16);
    plVar23 = (longlong *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar20);
    if (((*(longlong *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar15) == 0) != (*plVar23 == 0))
       && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Other.First == !Other.Last",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                               ,500,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((*(longlong *)(&(this->PipelineStates).field_0x0 + lVar22) == 0) != (*plVar1 == 0)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("!First == !Last",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                            ,0x1f5,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (*(longlong *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar15) != 0) {
      if ((bVar8 == 1) || (lVar20 = 0x20, bVar8 != 2)) {
        lVar20 = 0x18;
      }
      if ((*(longlong *)(*plVar23 + lVar20) != 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!Other.Last->GetNextPtr(Pipeline)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                              ,0x1fe,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (lVar5 == 0) {
        if ((bVar8 == 1) || (lVar20 = 0x20, bVar8 != 2)) {
          lVar20 = 0x18;
        }
        *(undefined8 *)(*plVar23 + lVar20) =
             *(undefined8 *)(&(this->PipelineStates).field_0x0 + lVar22);
        lVar20 = *plVar1;
        *(undefined8 *)(&(this->PipelineStates).field_0x0 + lVar22) =
             *(undefined8 *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar15);
        if (lVar20 == 0) {
          *plVar1 = *plVar23;
        }
      }
      else {
        if ((*(longlong *)(&(this->PipelineStates).field_0x0 + lVar22) == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("First",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                                ,0x210,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((bVar8 == 1) || (bVar8 != 2)) {
          uVar21 = *(undefined8 *)(lVar5 + 0x18);
          uVar6 = *(undefined8 *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar15);
          if ((bVar8 == 1) || (bVar8 != 2)) {
            *(undefined8 *)(lVar5 + 0x18) = uVar6;
            lVar15 = *plVar23;
            if ((bVar8 == 1) || (bVar8 != 2)) {
              lVar20 = 0x18;
            }
            else {
              lVar20 = 0x20;
            }
          }
          else {
            *(undefined8 *)(lVar5 + 0x20) = uVar6;
            lVar20 = 0x20;
            lVar15 = *plVar23;
          }
        }
        else {
          lVar20 = 0x20;
          uVar21 = *(undefined8 *)(lVar5 + 0x20);
          *(undefined8 *)(lVar5 + 0x20) =
               *(undefined8 *)(&(param_1->GPUBreadcrumbState).field_0x0 + lVar15);
          lVar15 = *plVar23;
        }
        *(undefined8 *)(lVar15 + lVar20) = uVar21;
        if (*plVar1 == lVar5) {
          *plVar1 = *plVar23;
        }
      }
    }
    bVar18 = bVar18 & ~(byte)local_res18;
    if (bVar18 == 0) {
      this->UploadContextState = param_1->UploadContext;
      if ((this == (FTranslateState *)&(param_1->GPUBreadcrumbState).field_0x18) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar2 = *(int *)&(param_1->BreadcrumbAllocatorRefs).field_0x28;
      if (iVar2 != 0) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                           (0x10,8,iVar2,
                            (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                            &this->BreadcrumbAllocatorRefs,
                            (int *)&(this->BreadcrumbAllocatorRefs).field_0x28,
                            (int *)&(this->BreadcrumbAllocatorRefs).field_0x2c);
        _Src = *(FRHIBreadcrumbAllocatorArray **)&(param_1->BreadcrumbAllocatorRefs).field_0x20;
        pFVar17 = *(FRHIBreadcrumbAllocatorArray **)&(this->BreadcrumbAllocatorRefs).field_0x20;
        if (_Src == (FRHIBreadcrumbAllocatorArray *)0x0) {
          _Src = &param_1->BreadcrumbAllocatorRefs;
        }
        if (pFVar17 == (FRHIBreadcrumbAllocatorArray *)0x0) {
          pFVar17 = &this->BreadcrumbAllocatorRefs;
        }
        memmove(&pFVar17->field_0x0 + (longlong)iVar14 * 0x10,_Src,(longlong)iVar2 << 4);
        *(undefined4 *)&(param_1->BreadcrumbAllocatorRefs).field_0x28 = 0;
      }
      FRHIDrawStats::Accumulate(&this->DrawStats,&param_1->DrawStats);
      pFVar3 = (param_1->ParallelRenderPassBegin).Object;
      if ((pFVar3 != (FRHIParallelRenderPassInfo *)0x0) && (this->bShouldFinalize == false)) {
        pFVar3->UploadContext = param_1->UploadContext;
        uVar9 = *(undefined4 *)&param_1->Contexts;
        uVar10 = *(undefined4 *)&(param_1->Contexts).field_0x4;
        uVar11 = *(undefined4 *)&(param_1->Contexts).field_0x8;
        uVar12 = *(undefined4 *)&(param_1->Contexts).field_0xc;
        if (((param_1->ParallelRenderPassBegin).Object == (FRHIParallelRenderPassInfo *)0x0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar13)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar3 = (param_1->ParallelRenderPassBegin).Object;
        *(undefined4 *)&pFVar3->Contexts = uVar9;
        *(undefined4 *)&(pFVar3->Contexts).field_0x4 = uVar10;
        *(undefined4 *)&(pFVar3->Contexts).field_0x8 = uVar11;
        *(undefined4 *)&(pFVar3->Contexts).field_0xc = uVar12;
      }
      FRHICommandListBase::~FRHICommandListBase(param_1);
      ::operator_delete(param_1,0x1bb0);
      return;
    }
  } while( true );
}

