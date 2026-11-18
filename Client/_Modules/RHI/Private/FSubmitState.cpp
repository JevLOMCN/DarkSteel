// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 6

// operator() @ 145c8dfb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>::operator()(void *this)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Translate");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FTranslateState::Translate
              (*(FTranslateState **)this,*(FRHICommandListBase **)((longlong)this + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1042,"RHI_Translate",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x412);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1042);
  FRHICommandListExecutor::FTranslateState::Translate
            (*(FTranslateState **)this,*(FRHICommandListBase **)((longlong)this + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// ConditionalSplitTranslateJob @ 145c951f0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FSubmitState::ConditionalSplitTranslateJob
          (FSubmitState *this,FRHICommandListBase *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  uint *puVar4;
  undefined8 *puVar5;
  bool bVar6;
  uint uVar7;
  FRHIParallelRenderPassInfo *pFVar8;
  FBaseGraphTask *pFVar9;
  bool bVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  FTranslateState *pFVar17;
  FTranslateState *pFVar18;
  TRefCountPtr<FBaseGraphTask> local_28 [2];
  
  pFVar17 = this->CurrentTranslateJob;
  pFVar18 = (FTranslateState *)0x0;
  if (pFVar17 == (FTranslateState *)0x0) goto LAB_145c954c9;
  if (this->bAllowSingleParallelCombine == false) {
    bVar13 = false;
    if ((((param_1->bAllowParallelTranslate != false) &&
         (bVar13 = false, (param_1->PersistentState).bImmediate == '\0')) &&
        (param_1->bUsesLockFence == false)) &&
       ((param_1->bUsesShaderBundles == false ||
        (bVar13 = false, GRHIGlobals.ShaderBundles.SupportsParallel)))) {
      bVar13 = true;
    }
    bVar13 = pFVar17->bParallel != bVar13;
  }
  else if ((pFVar17->bParallel == false) ||
          (((param_1->bAllowParallelTranslate != false &&
            ((param_1->PersistentState).bImmediate == '\0')) &&
           ((param_1->bUsesLockFence == false &&
            ((param_1->bUsesShaderBundles == false || (GRHIGlobals.ShaderBundles.SupportsParallel)))
            ))))) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  uVar7 = this->MaxCommandsPerTranslate;
  if ((int)uVar7 < 0) {
    bVar10 = true;
  }
  else if (uVar7 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = uVar7 < pFVar17->NumCommands + param_1->NumCommands;
  }
  pFVar8 = (param_1->SubRenderPassInfo).Object;
  bVar6 = pFVar17->bUsingSubCmdLists;
  if (pFVar8 == (FRHIParallelRenderPassInfo *)0x0) {
    if (bVar6 != false) goto LAB_145c95426;
LAB_145c952e1:
    bVar12 = false;
  }
  else {
    if (bVar6 != false) goto LAB_145c952e1;
LAB_145c95426:
    bVar12 = true;
  }
  if (((!bVar13) && (!bVar10)) && (!bVar12)) goto LAB_145c954c9;
  if ((bVar6 == false) || (!GRHIGlobals.ParallelRHIExecuteChildWait)) {
    bVar10 = false;
    bVar13 = false;
    if ((bVar6 != false) ||
       ((pFVar8 == (FRHIParallelRenderPassInfo *)0x0 || (!GRHIGlobals.ParallelRHIExecuteParentWait))
       )) goto LAB_145c95319;
    bVar10 = true;
  }
  else {
    bVar10 = true;
LAB_145c95319:
    bVar13 = bVar10;
    bVar10 = false;
  }
  FinalizeCurrent(this);
  if (bVar13) {
    FVar16 = (this->ChildGraphEvents).AllocatorInstance.SecondaryData;
    pTVar3 = &this->ChildGraphEvents;
    FVar15 = FVar16;
    if (FVar16 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar3;
    }
    if ((ulonglong)FVar15 <= local_28) {
      if (FVar16 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar3;
      }
      if ((local_28 <
           (TRefCountPtr<FBaseGraphTask> *)
           ((longlong)FVar16 + (longlong)(this->ChildGraphEvents).ArrayMax * 8)) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    iVar14 = (this->ChildGraphEvents).ArrayNum;
    piVar1 = &(this->ChildGraphEvents).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                         (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->ChildGraphEvents).ArrayNum = iVar14 + 1;
    FVar16 = (this->ChildGraphEvents).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar3;
    }
    puVar5 = (undefined8 *)((longlong)FVar16 + (longlong)iVar14 * 8);
    *puVar5 = 0;
    *puVar5 = local_28[0].Reference;
    if (local_28[0].Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_28[0].Reference)->field_0x30 =
           *(int *)&(local_28[0].Reference)->field_0x30 + 1;
      UNLOCK();
    }
  }
  else if ((bVar10) && (pFVar9 = (this->BeginGraphEvent).Reference, pFVar9 != local_28[0].Reference)
          ) {
    (this->BeginGraphEvent).Reference = local_28[0].Reference;
    if (local_28[0].Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_28[0].Reference)->field_0x30 =
           *(int *)&(local_28[0].Reference)->field_0x30 + 1;
      UNLOCK();
    }
    if (pFVar9 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &pFVar9->field_0x30;
      iVar14 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar14 == 1) {
        (*(code *)**(undefined8 **)pFVar9)(pFVar9);
      }
    }
  }
  if (local_28[0].Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &(local_28[0].Reference)->field_0x30;
    iVar14 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if ((iVar14 == 1) && (local_28[0].Reference != (FBaseGraphTask *)0x0)) {
      (*(code *)**(undefined8 **)local_28[0].Reference)();
    }
  }
LAB_145c954c9:
  if (this->CurrentTranslateJob == (FTranslateState *)0x0) {
    pFVar17 = ::operator_new(0x1898);
    if (pFVar17 != (FTranslateState *)0x0) {
      *(undefined8 *)&pFVar17->BreadcrumbAllocatorRefs = 0;
      *(undefined8 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x8 = 0;
      *(undefined8 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x10 = 0;
      *(undefined8 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x18 = 0;
      memset(&(pFVar17->TranslatePipe).LastThread,0,0x1810);
      *(undefined8 *)&pFVar17->PipelineStates = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x8 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x10 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x18 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x20 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x28 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x30 = 0;
      *(undefined8 *)&(pFVar17->PipelineStates).field_0x38 = 0;
      *(undefined8 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x20 = 0;
      pFVar17->UploadContextState = (IRHIUploadContext *)0x0;
      *(undefined4 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x28 = 0;
      *(undefined4 *)&(pFVar17->BreadcrumbAllocatorRefs).field_0x2c = 2;
      (pFVar17->TranslatePipe).Current = (FTask *)0x0;
      (pFVar17->TranslatePipe).LastEvent.Reference = (FBaseGraphTask *)0x0;
      (pFVar17->TranslatePipe).LastThread.bIsSet = false;
      pFVar17->NumCommands = 0;
      pFVar17->bParallel = false;
      pFVar17->bUsingSubCmdLists = false;
      pFVar17->bShouldFinalize = true;
      memset(&pFVar17->DrawStats,0,0x1800);
      pFVar18 = pFVar17;
    }
    iVar14 = (this->TranslateJobs).ArrayNum;
    piVar1 = &(this->TranslateJobs).ArrayMax;
    if (iVar14 == *piVar1) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(this->TranslateJobs).AllocatorInstance,piVar1);
    }
    (this->TranslateJobs).ArrayNum = iVar14 + 1;
    *(FTranslateState **)((this->TranslateJobs).AllocatorInstance.Data + (longlong)iVar14 * 8) =
         pFVar18;
    this->CurrentTranslateJob = pFVar18;
    if (param_1->bAllowParallelTranslate == false) {
      bVar13 = false;
    }
    else if ((param_1->PersistentState).bImmediate == '\0') {
      if (param_1->bUsesLockFence == false) {
        if ((param_1->bUsesShaderBundles == false) ||
           (GRHIGlobals.ShaderBundles.SupportsParallel != false)) {
          bVar13 = true;
        }
        else {
          bVar13 = false;
        }
      }
      else {
        bVar13 = false;
      }
    }
    else {
      bVar13 = false;
    }
    pFVar18->bParallel = bVar13;
    this->CurrentTranslateJob->bUsingSubCmdLists =
         (param_1->SubRenderPassInfo).Object != (FRHIParallelRenderPassInfo *)0x0;
  }
  if ((this->CurrentTranslateJob->bShouldFinalize == false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentTranslateJob->bShouldFinalize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x36f,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((GRHIGlobals.ParallelRHIExecuteChildWait == false) ||
     ((param_1->ParallelRenderPassBegin).Object == (FRHIParallelRenderPassInfo *)0x0)) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  this->CurrentTranslateJob->bShouldFinalize = bVar13;
  puVar4 = &this->CurrentTranslateJob->NumCommands;
  *puVar4 = *puVar4 + param_1->NumCommands;
  return;
}

// Dispatch @ 145c9a150

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FSubmitState::Dispatch(FSubmitState *this,FRHICommandListBase *param_1)

{
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  TOptional<FRHIDrawStatsCategory_const_*> *pTVar2;
  TOptional<FRHIDrawStatsCategory_const_*> *pTVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  FRHIBreadcrumbAllocator *pFVar5;
  FRHIBreadcrumbAllocatorArray *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  FActivatePipelineCommand *pFVar8;
  FBaseGraphTask *pFVar9;
  code *pcVar10;
  byte bVar11;
  ERHIPipeline EVar12;
  <unnamed_type_Breadcrumbs> *p<Var13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  FSubmitState *pFVar15;
  TAtomic<ENamedThreads::Type> TVar16;
  bool bVar17;
  int iVar18;
  int iVar19;
  FRHIBreadcrumbNode **ppFVar20;
  undefined1 *puVar21;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar22;
  longlong lVar23;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar24;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar25;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar26;
  undefined8 *puVar27;
  FSharedReferencer<1> FVar28;
  FRHIBreadcrumbNode *pFVar29;
  FTaskPipe *this_00;
  undefined ***pppuVar30;
  TAtomic<ENamedThreads::Type> TVar31;
  byte bVar32;
  ERHIPipeline EVar33;
  FRHIBreadcrumbNode *pFVar34;
  FRHIBreadcrumbNode *pFVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar36;
  FRHIBreadcrumbNode *pFVar37;
  undefined1 *puVar38;
  FRHIBreadcrumbAllocatorArray *pFVar39;
  FRHICommandListBase *pFVar40;
  FRHIBreadcrumbAllocatorArray *pFVar41;
  undefined1 auStackY_278 [32];
  undefined1 local_228 [8];
  FRHICommandListBase *local_220;
  undefined4 local_218;
  FSubmitState *local_210;
  FRHIBreadcrumbNode *local_208;
  FRHIBreadcrumbNode *local_200;
  FRHIBreadcrumbNode *local_1f8;
  FRHIBreadcrumbNode *local_1f0;
  FRHIBreadcrumbAllocator *local_1e8;
  FSharedReferencer<1> FStack_1e0;
  FRHIBreadcrumbNode *local_1d8;
  FRHIBreadcrumbAllocator *local_1d0;
  FSharedReferencer<1> FStack_1c8;
  FRHIBreadcrumbNode *local_1c0;
  FRHIBreadcrumbAllocator *local_1b8;
  FSharedReferencer<1> FStack_1b0;
  FRHIBreadcrumbNode *local_1a8;
  FRHIBreadcrumbAllocator *local_1a0;
  FSharedReferencer<1> FStack_198;
  FRHIBreadcrumbNode *local_190;
  FRHIBreadcrumbAllocator *local_188;
  FSharedReferencer<1> FStack_180;
  undefined1 *local_178;
  undefined8 local_170;
  FSharedReferencer<1> local_168;
  undefined8 local_160;
  FSharedReferencer<1> local_158;
  undefined8 local_150;
  FSharedReferencer<1> local_148;
  undefined8 local_140;
  FSharedReferencer<1> local_138;
  undefined8 local_130;
  FSharedReferencer<1> local_128;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_120;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_110;
  undefined8 local_100;
  TReferenceControllerBase<1> *pTStack_f8;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_f0;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_e0;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_d0;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_c0;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_b0;
  code *local_78 [2];
  undefined **local_68;
  FTranslateState *local_60;
  FRHICommandListBase *local_58;
  undefined ***local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_220 = param_1;
  local_210 = this;
  if ((((param_1->DispatchEvent).Reference)->field_0xd0 == '\0') &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CmdList->DispatchEvent->IsComplete()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x377,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  param_1->bAllowParallelTranslate = this->bAllowParallelTranslate;
  (param_1->CPUBreadcrumbState).bEmitBreadcrumbs = this->bEmitBreadcrumbs;
  ConditionalSplitTranslateJob(this,param_1);
  pFVar34 = (param_1->CPUBreadcrumbState).UnknownParentList.First;
  (param_1->CPUBreadcrumbState).UnknownParentList.First = (FRHIBreadcrumbNode *)0x0;
  (param_1->CPUBreadcrumbState).UnknownParentList.Last = (FRHIBreadcrumbNode *)0x0;
  if (pFVar34 != (FRHIBreadcrumbNode *)0x0) {
    pFVar37 = pFVar34->ListLink;
    pFVar34->ListLink = (FRHIBreadcrumbNode *)0x0;
    while( true ) {
      if ((pFVar34->Parent != FRHIBreadcrumbNode::Sentinel) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Node->GetParent() == FRHIBreadcrumbNode::Sentinel",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                              ,0x385,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar35 = GRHICommandList.Breadcrumbs.CPU.Current.Node;
      if (((pFVar34->Parent != (FRHIBreadcrumbNode *)0x0) &&
          (pFVar34->Parent != FRHIBreadcrumbNode::Sentinel)) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Parent == nullptr || Parent == FRHIBreadcrumbNode::Sentinel",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIBreadcrumbs.h"
                              ,0x282,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar34->Parent = pFVar35;
      if ((pFVar35 != (FRHIBreadcrumbNode *)0x0) && (pFVar35 != FRHIBreadcrumbNode::Sentinel)) {
        if (pFVar35->Allocator != pFVar34->Allocator) {
          FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar34->Allocator->Parents,pFVar35->Allocator);
        }
      }
      if (pFVar37 == (FRHIBreadcrumbNode *)0x0) break;
      pFVar35 = pFVar37->ListLink;
      pFVar37->ListLink = (FRHIBreadcrumbNode *)0x0;
      pFVar34 = pFVar37;
      pFVar37 = pFVar35;
    }
  }
  pFVar34 = GRHICommandList.Breadcrumbs.CPU.Current.Node;
  local_208 = GRHICommandList.Breadcrumbs.CPU.Current.Node;
  if ((GRHICommandList.Breadcrumbs.CPU.Current.Node == FRHIBreadcrumbNode::Sentinel) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("CPUFirst != FRHIBreadcrumbNode::Sentinel",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x38c,L""), bVar17)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if (pFVar34 != (FRHIBreadcrumbNode *)0x0) {
    FRHIBreadcrumbAllocatorArray::AddUnique(&param_1->BreadcrumbAllocatorRefs,pFVar34->Allocator);
  }
  bVar32 = 3;
  do {
    local_218 = CONCAT31(local_218._1_3_,~bVar32 + 1);
    bVar11 = ~bVar32 + 1 & bVar32;
    if ((bVar11 == 1) ||
       (pFVar34 = (FRHIBreadcrumbNode *)GRHICommandList.Breadcrumbs.GPU._48_8_, bVar11 != 2)) {
      pFVar34 = (FRHIBreadcrumbNode *)GRHICommandList.Breadcrumbs.GPU._0_8_;
    }
    if ((pFVar34 == FRHIBreadcrumbNode::Sentinel) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("Node != FRHIBreadcrumbNode::Sentinel",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x396,L""), bVar17)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((bVar11 == 1) || (ppFVar20 = &local_1f8, bVar11 != 2)) {
      ppFVar20 = &local_200;
    }
    *ppFVar20 = pFVar34;
    pFVar40 = param_1;
    if (pFVar34 != (FRHIBreadcrumbNode *)0x0) {
      pFVar41 = &param_1->BreadcrumbAllocatorRefs;
      pFVar5 = pFVar34->Allocator;
      pFVar6 = *(FRHIBreadcrumbAllocatorArray **)&(param_1->BreadcrumbAllocatorRefs).field_0x20;
      puVar38 = &(local_220->BreadcrumbAllocatorRefs).field_0x28;
      iVar18 = *(int *)puVar38;
      pFVar39 = pFVar41;
      if (pFVar6 != (FRHIBreadcrumbAllocatorArray *)0x0) {
        pFVar39 = pFVar6;
      }
      puVar21 = &pFVar39->field_0x0 + (longlong)iVar18 * 0x10;
      local_178 = puVar21;
      while( true ) {
        if (*(int *)puVar38 != iVar18) {
          local_228[0] = 0;
          `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_228);
          puVar21 = local_178;
        }
        if (pFVar39 == (FRHIBreadcrumbAllocatorArray *)puVar21) break;
        pFVar40 = local_220;
        if (pFVar5 == *(FRHIBreadcrumbAllocator **)&pFVar39->field_0x0) goto LAB_145c9a4f2;
        pFVar39 = (FRHIBreadcrumbAllocatorArray *)(&pFVar39->field_0x0 + 0x10);
      }
      pTVar22 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                          ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)pFVar5,&local_120);
      pTVar24 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)
                 &(param_1->BreadcrumbAllocatorRefs).field_0x20;
      pTVar26 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)pFVar41;
      if (pTVar24 != (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
        pTVar26 = pTVar24;
      }
      if (pTVar26 <= pTVar22) {
        pTVar26 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)pFVar41;
        if (pTVar24 != (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
          pTVar26 = pTVar24;
        }
        if ((pTVar22 < pTVar26 + *(int *)&(param_1->BreadcrumbAllocatorRefs).field_0x2c) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      iVar18 = *(int *)puVar38;
      puVar21 = &(param_1->BreadcrumbAllocatorRefs).field_0x2c;
      if (iVar18 == *(int *)puVar21) {
        iVar18 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                           (0x810,(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)pFVar41,
                            (int *)puVar21);
        *(int *)puVar38 = iVar18;
      }
      *(int *)puVar38 = iVar18 + 1;
      pFVar6 = *(FRHIBreadcrumbAllocatorArray **)&(param_1->BreadcrumbAllocatorRefs).field_0x20;
      if (pFVar6 != (FRHIBreadcrumbAllocatorArray *)0x0) {
        pFVar41 = pFVar6;
      }
      *(FRHIBreadcrumbAllocator **)(&pFVar41->field_0x0 + (longlong)iVar18 * 0x10) = pTVar22->Object
      ;
      pTVar7 = (pTVar22->SharedReferenceCount).ReferenceController;
      *(TReferenceControllerBase<1> **)(&pFVar41->field_0x0 + (longlong)iVar18 * 0x10 + 8) = pTVar7;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_120.SharedReferenceCount.ReferenceController);
      pFVar40 = local_220;
    }
LAB_145c9a4f2:
    bVar32 = bVar32 & ~(byte)local_218;
    param_1 = pFVar40;
    if (bVar32 == 0) {
      pFVar34 = local_200;
      pFVar37 = local_1f8;
      pFVar35 = local_1f0;
      for (pFVar8 = (pFVar40->ActivatePipelineCommands).First;
          pFVar8 != (FActivatePipelineCommand *)0x0; pFVar8 = pFVar8->Next) {
        local_1f0 = pFVar8->Target;
        local_200 = pFVar34;
        local_1f8 = pFVar37;
        if (local_1f0 == FRHIBreadcrumbNode::Sentinel) {
          pFVar8->Target = GRHICommandList.Breadcrumbs.CPU.Current.Node;
          local_1f0 = pFVar35;
        }
        else {
          local_1e8 = (FRHIBreadcrumbAllocator *)0x0;
          FStack_1e0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          if (local_1f0 != (FRHIBreadcrumbNode *)0x0) {
            pTVar24 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                                ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)local_1f0->Allocator,
                                 &local_110);
            local_168.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
            local_1e8 = pTVar24->Object;
            if (local_168.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_168.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_168.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_170 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1e0,&local_168);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_168.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_110.SharedReferenceCount.ReferenceController);
          }
          GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.Object = local_1e8;
          local_1e8 = (FRHIBreadcrumbAllocator *)0x0;
          GRHICommandList.Breadcrumbs.CPU.Current.Node = local_1f0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount,
                     &FStack_1e0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_1e0.ReferenceController);
        }
        for (EVar33 = pFVar8->Pipelines; EVar33 != None; EVar33 = EVar33 & ~(~EVar33 + Graphics)) {
          EVar12 = ~EVar33 + Graphics & EVar33;
          if ((EVar12 == Graphics) || (EVar12 != AsyncCompute)) {
            p<Var13 = &GRHICommandList.Breadcrumbs;
            puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x8;
          }
          else {
            p<Var13 = (<unnamed_type_Breadcrumbs> *)&GRHICommandList.Breadcrumbs.GPU;
            puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x38;
          }
          *(FRHIBreadcrumbNode **)&p<Var13->GPU = GRHICommandList.Breadcrumbs.CPU.Current.Node;
          FVar28.ReferenceController =
               GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount.
               ReferenceController;
          pFVar5 = GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.Object;
          if (GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount.
              ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount.
            ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount.
                       ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_100 = *puVar27;
          pTStack_f8 = (TReferenceControllerBase<1> *)puVar27[1];
          *puVar27 = pFVar5;
          puVar27[1] = FVar28.ReferenceController;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_f8);
        }
        pFVar34 = local_200;
        pFVar37 = local_1f8;
        pFVar35 = local_1f0;
      }
      bVar32 = 3;
      local_1f0 = pFVar35;
      do {
        bVar11 = ~bVar32 + 1 & bVar32;
        if ((bVar11 == 1) || (lVar23 = 0x140, bVar11 != 2)) {
          lVar23 = 0x110;
        }
        if (*(char *)((longlong)&(pFVar40->MemManager).Top + lVar23) != '\0') {
          if ((bVar11 == 1) || (lVar23 = 0x138, bVar11 != 2)) {
            lVar23 = 0x108;
          }
          if ((*(char *)((longlong)&(pFVar40->MemManager).End + lVar23) == '\0') &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsSet()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                                  ,0x1bd,
                                  L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar35 = *(FRHIBreadcrumbNode **)((longlong)&(pFVar40->MemManager).Top + lVar23);
          if (pFVar35 == FRHIBreadcrumbNode::Sentinel) {
            if ((bVar11 == 1) || (local_1c0 = pFVar37, bVar11 != 2)) {
              local_1c0 = pFVar34;
            }
            local_1b8 = (FRHIBreadcrumbAllocator *)0x0;
            FStack_1b0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            if ((local_1c0 != (FRHIBreadcrumbNode *)0x0) &&
               (local_1c0 != FRHIBreadcrumbNode::Sentinel)) {
              pTVar24 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                                  ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)
                                   local_1c0->Allocator,&local_e0);
              local_148.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
              local_1b8 = pTVar24->Object;
              if (local_148.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_148.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_148.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_150 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1b0,&local_148);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_148.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_e0.SharedReferenceCount.ReferenceController);
            }
            if ((bVar11 == 1) || (bVar11 != 2)) {
              puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x8;
              GRHICommandList.Breadcrumbs.GPU._0_8_ = local_1c0;
            }
            else {
              puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x38;
              GRHICommandList.Breadcrumbs.GPU._48_8_ = local_1c0;
            }
            *puVar27 = local_1b8;
            local_1b8 = (FRHIBreadcrumbAllocator *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar27 + 1),&FStack_1b0);
            FVar28.ReferenceController = FStack_1b0.ReferenceController;
          }
          else {
            local_1d0 = (FRHIBreadcrumbAllocator *)0x0;
            FStack_1c8.ReferenceController = (TReferenceControllerBase<1> *)0x0;
            local_1d8 = pFVar35;
            if (pFVar35 != (FRHIBreadcrumbNode *)0x0) {
              pTVar24 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                                  ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)pFVar35->Allocator,
                                   &local_f0);
              local_158.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
              local_1d0 = pTVar24->Object;
              if (local_158.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_158.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)((int)(local_158.ReferenceController)->SharedReferenceCount + 1);
                UNLOCK();
              }
              local_160 = 0;
              SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_1c8,&local_158);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_158.ReferenceController);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_f0.SharedReferenceCount.ReferenceController);
            }
            if ((bVar11 == 1) || (bVar11 != 2)) {
              puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x8;
              GRHICommandList.Breadcrumbs.GPU._0_8_ = local_1d8;
            }
            else {
              puVar27 = (undefined8 *)&GRHICommandList.Breadcrumbs.GPU.field_0x38;
              GRHICommandList.Breadcrumbs.GPU._48_8_ = local_1d8;
            }
            *puVar27 = local_1d0;
            local_1d0 = (FRHIBreadcrumbAllocator *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(puVar27 + 1),&FStack_1c8);
            FVar28.ReferenceController = FStack_1c8.ReferenceController;
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar28.ReferenceController);
        }
        pFVar35 = local_208;
        if ((bVar11 == 1) || (bVar11 != 2)) {
          pFVar29 = pFVar34;
          if ((bVar11 == 1) || (bVar11 != 2)) {
            lVar23 = 0x100;
          }
          else {
            lVar23 = 0x130;
          }
        }
        else {
          lVar23 = 0x130;
          pFVar29 = pFVar37;
        }
        *(FRHIBreadcrumbNode **)((longlong)&(pFVar40->MemManager).Top + lVar23) = pFVar29;
        bVar32 = bVar32 & ~(~bVar32 + 1);
      } while (bVar32 != 0);
      pFVar34 = (pFVar40->CPUBreadcrumbState).Current;
      if (pFVar34 == FRHIBreadcrumbNode::Sentinel) {
        local_190 = local_208;
        local_188 = (FRHIBreadcrumbAllocator *)0x0;
        FStack_180.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((local_208 != (FRHIBreadcrumbNode *)0x0) && (local_208 != FRHIBreadcrumbNode::Sentinel))
        {
          pTVar24 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                              ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)local_208->Allocator,
                               &local_c0);
          local_128.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
          local_188 = pTVar24->Object;
          if (local_128.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_128.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_128.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_130 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_180,&local_128);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_128.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_c0.SharedReferenceCount.ReferenceController);
        }
        GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.Object = local_188;
        local_188 = (FRHIBreadcrumbAllocator *)0x0;
        GRHICommandList.Breadcrumbs.CPU.Current.Node = local_190;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount,
                   &FStack_180);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_180.ReferenceController);
      }
      else {
        local_1a0 = (FRHIBreadcrumbAllocator *)0x0;
        FStack_198.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        local_1a8 = pFVar34;
        if (pFVar34 != (FRHIBreadcrumbNode *)0x0) {
          pTVar24 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                              ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)pFVar34->Allocator,
                               &local_d0);
          local_138.ReferenceController = (pTVar24->SharedReferenceCount).ReferenceController;
          local_1a0 = pTVar24->Object;
          if (local_138.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_138.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)((int)(local_138.ReferenceController)->SharedReferenceCount + 1);
            UNLOCK();
          }
          local_140 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_198,&local_138);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_d0.SharedReferenceCount.ReferenceController);
        }
        GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.Object = local_1a0;
        local_1a0 = (FRHIBreadcrumbAllocator *)0x0;
        GRHICommandList.Breadcrumbs.CPU.Current.Node = local_1a8;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&GRHICommandList.Breadcrumbs.CPU.Current.AllocatorRef.SharedReferenceCount,
                   &FStack_198);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_198.ReferenceController);
        pFVar35 = local_208;
      }
      pFVar15 = local_210;
      pTVar2 = &pFVar40->InitialDrawStatsCategory;
      (pFVar40->CPUBreadcrumbState).Current = pFVar35;
      (pFVar40->PersistentState).LocalBreadcrumb = pFVar35;
      if (pTVar2 != (TOptional<FRHIDrawStatsCategory_const_*> *)
                    &GRHICommandList.CurrentDrawStatsCategory) {
        pTVar2->TypedValue = GRHICommandList.CurrentDrawStatsCategory;
        (pFVar40->InitialDrawStatsCategory).bIsSet = true;
      }
      if ((pFVar40->PersistentState).CurrentDrawStatsCategory.bIsSet != false) {
        GRHICommandList.CurrentDrawStatsCategory =
             (pFVar40->PersistentState).CurrentDrawStatsCategory.TypedValue;
      }
      pTVar3 = &(pFVar40->PersistentState).CurrentDrawStatsCategory;
      if (pTVar2 != pTVar3) {
        if ((pFVar40->InitialDrawStatsCategory).bIsSet == false) {
          if ((pFVar40->PersistentState).CurrentDrawStatsCategory.bIsSet != false) {
            (pFVar40->PersistentState).CurrentDrawStatsCategory.bIsSet = false;
          }
        }
        else {
          pTVar3->TypedValue = pTVar2->TypedValue;
          (pFVar40->PersistentState).CurrentDrawStatsCategory.bIsSet = true;
        }
      }
      local_b0.ArrayMax = 4;
      local_b0.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      local_b0.ArrayNum = 0;
      if (((((pFVar40->bAllowParallelTranslate == false) ||
            ((pFVar40->PersistentState).bImmediate != '\0')) || (pFVar40->bUsesLockFence != false))
          || ((pFVar40->bUsesShaderBundles != false &&
              (GRHIGlobals.ShaderBundles.SupportsParallel == false)))) &&
         (pTVar1 = &local_210->TranslateEvents, &local_b0 != pTVar1)) {
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)&local_b0,0)
        ;
        if ((pFVar15->TranslateEvents).AllocatorInstance.SecondaryData ==
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          local_b0.AllocatorInstance.InlineData._0_8_ =
               *(undefined8 *)(pTVar1->AllocatorInstance).InlineData;
          local_b0.AllocatorInstance.InlineData._8_8_ =
               *(undefined8 *)((pFVar15->TranslateEvents).AllocatorInstance.InlineData + 8);
          local_b0.AllocatorInstance.InlineData._16_8_ =
               *(undefined8 *)((pFVar15->TranslateEvents).AllocatorInstance.InlineData + 0x10);
          local_b0.AllocatorInstance.InlineData._24_8_ =
               *(undefined8 *)((pFVar15->TranslateEvents).AllocatorInstance.InlineData + 0x18);
        }
        if (local_b0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
        }
        local_b0.AllocatorInstance.SecondaryData =
             (pFVar15->TranslateEvents).AllocatorInstance.SecondaryData;
        (pFVar15->TranslateEvents).AllocatorInstance.SecondaryData =
             (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_b0.ArrayNum = (pFVar15->TranslateEvents).ArrayNum;
        local_b0.ArrayMax = (pFVar15->TranslateEvents).ArrayMax;
        (pFVar15->TranslateEvents).ArrayNum = 0;
        (pFVar15->TranslateEvents).ArrayMax = 4;
      }
      if ((pFVar40->ParallelRenderPassEnd).Object == (FRHIParallelRenderPassInfo *)0x0) {
        if (((pFVar40->SubRenderPassInfo).Object != (FRHIParallelRenderPassInfo *)0x0) &&
           (GRHIGlobals.ParallelRHIExecuteParentWait != false)) {
          if (&local_b0 != &pFVar15->TranslateEvents) {
            FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar25 = local_b0.AllocatorInstance.SecondaryData;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)FVar25,local_b0.ArrayNum);
            iVar18 = (pFVar15->TranslateEvents).ArrayNum;
            FVar25 = (pFVar15->TranslateEvents).AllocatorInstance.SecondaryData;
            FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&pFVar15->TranslateEvents;
            if (FVar25 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar36 = FVar25;
            }
            local_b0.ArrayNum = iVar18;
            if ((iVar18 == 0) && (local_b0.ArrayMax == 0)) {
              local_b0.ArrayMax = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,iVar18,local_b0.ArrayMax,&local_b0.AllocatorInstance,iVar18,
                         &local_b0.ArrayMax);
              FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
              if (local_b0.AllocatorInstance.SecondaryData !=
                  (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar25 = local_b0.AllocatorInstance.SecondaryData;
              }
              ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                        ((void *)FVar25,(TRefCountPtr<FBaseGraphTask> *)FVar36,iVar18);
            }
          }
          pTVar4 = &pFVar15->BeginGraphEvent;
          FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
          if (local_b0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = local_b0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar25 <= pTVar4) {
            FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar25 = local_b0.AllocatorInstance.SecondaryData;
            }
            if ((pTVar4 < (undefined1 *)((longlong)FVar25 + (longlong)local_b0.ArrayMax * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (local_b0.ArrayNum == local_b0.ArrayMax) {
            local_b0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          }
          FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
          if (local_b0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = local_b0.AllocatorInstance.SecondaryData;
          }
          lVar23 = (longlong)local_b0.ArrayNum;
          local_b0.ArrayNum = local_b0.ArrayNum + 1;
          *(undefined8 *)((longlong)FVar25 + lVar23 * 8) = 0;
          pFVar9 = pTVar4->Reference;
          *(FBaseGraphTask **)((longlong)FVar25 + lVar23 * 8) = pFVar9;
          if (pFVar9 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar9->field_0x30 = *(int *)&pFVar9->field_0x30 + 1;
            UNLOCK();
          }
        }
      }
      else {
        if (GRHIGlobals.ParallelRHIExecuteChildWait != false) {
          if (&local_b0 != &pFVar15->TranslateEvents) {
            FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar25 = local_b0.AllocatorInstance.SecondaryData;
            }
            DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                      ((TRefCountPtr<FBaseGraphTask> *)FVar25,local_b0.ArrayNum);
            iVar18 = (pFVar15->TranslateEvents).ArrayNum;
            FVar25 = (pFVar15->TranslateEvents).AllocatorInstance.SecondaryData;
            FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&pFVar15->TranslateEvents;
            if (FVar25 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar36 = FVar25;
            }
            local_b0.ArrayNum = iVar18;
            if ((iVar18 == 0) && (local_b0.ArrayMax == 0)) {
              local_b0.ArrayMax = 4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                        (8,8,iVar18,local_b0.ArrayMax,&local_b0.AllocatorInstance,iVar18,
                         &local_b0.ArrayMax);
              FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
              if (local_b0.AllocatorInstance.SecondaryData !=
                  (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar25 = local_b0.AllocatorInstance.SecondaryData;
              }
              ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                        ((void *)FVar25,(TRefCountPtr<FBaseGraphTask> *)FVar36,iVar18);
            }
          }
          pTVar4 = &pFVar15->BeginGraphEvent;
          FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
          if (local_b0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = local_b0.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)FVar25 <= pTVar4) {
            FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar25 = local_b0.AllocatorInstance.SecondaryData;
            }
            if ((pTVar4 < (undefined1 *)((longlong)FVar25 + (longlong)local_b0.ArrayMax * 8)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
          }
          if (local_b0.ArrayNum == local_b0.ArrayMax) {
            local_b0.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
          }
          FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
          if (local_b0.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar25 = local_b0.AllocatorInstance.SecondaryData;
          }
          lVar23 = (longlong)local_b0.ArrayNum;
          local_b0.ArrayNum = local_b0.ArrayNum + 1;
          *(undefined8 *)((longlong)FVar25 + lVar23 * 8) = 0;
          pFVar9 = pTVar4->Reference;
          *(FBaseGraphTask **)((longlong)FVar25 + lVar23 * 8) = pFVar9;
          if (pFVar9 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar9->field_0x30 = *(int *)&pFVar9->field_0x30 + 1;
            UNLOCK();
          }
          if ((&local_b0 == &pFVar15->ChildGraphEvents) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(void*)this != (void*)&Source",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x96e,L""), bVar17)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar18 = (pFVar15->ChildGraphEvents).ArrayNum;
          if (iVar18 != 0) {
            iVar19 = UE::Core::Private::
                     ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                               (8,8,iVar18,&local_b0.AllocatorInstance,&local_b0.ArrayNum,
                                &local_b0.ArrayMax);
            FVar25 = (pFVar15->ChildGraphEvents).AllocatorInstance.SecondaryData;
            FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&pFVar15->ChildGraphEvents;
            if (FVar25 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar36 = FVar25;
            }
            FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
            if (local_b0.AllocatorInstance.SecondaryData !=
                (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar25 = local_b0.AllocatorInstance.SecondaryData;
            }
            ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                      ((void *)((longlong)FVar25 + (longlong)iVar19 * 8),
                       (TRefCountPtr<FBaseGraphTask> *)FVar36,iVar18);
          }
        }
        FVar25 = (pFVar15->ChildGraphEvents).AllocatorInstance.SecondaryData;
        if (FVar25 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&pFVar15->ChildGraphEvents;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar25,(pFVar15->ChildGraphEvents).ArrayNum);
        (pFVar15->ChildGraphEvents).ArrayNum = 0;
        if ((pFVar15->ChildGraphEvents).ArrayMax != 0) {
          UE::Core::Private::
          ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                    (8,8,0,&(pFVar15->ChildGraphEvents).AllocatorInstance,0,
                     &(pFVar15->ChildGraphEvents).ArrayMax);
        }
        pFVar9 = (pFVar15->BeginGraphEvent).Reference;
        if (pFVar9 != (FBaseGraphTask *)0x0) {
          (pFVar15->BeginGraphEvent).Reference = (FBaseGraphTask *)0x0;
          LOCK();
          puVar38 = &pFVar9->field_0x30;
          iVar18 = *(int *)puVar38;
          *(int *)puVar38 = *(int *)puVar38 + -1;
          UNLOCK();
          if (iVar18 == 1) {
            (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
          }
        }
      }
      FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar25 < 0x154be7ab9) {
        FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
        if (local_b0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = local_b0.AllocatorInstance.SecondaryData;
        }
        if ((&GRHICommandList.LastMutate <
             (undefined1 *)((longlong)FVar25 + (longlong)local_b0.ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_b0.ArrayNum == local_b0.ArrayMax) {
        local_b0.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
      }
      FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      lVar23 = (longlong)local_b0.ArrayNum;
      local_b0.ArrayNum = local_b0.ArrayNum + 1;
      *(undefined8 *)((longlong)FVar25 + lVar23 * 8) = 0;
      *(FBaseGraphTask **)((longlong)FVar25 + lVar23 * 8) = GRHICommandList.LastMutate.Reference;
      if (GRHICommandList.LastMutate.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(GRHICommandList.LastMutate.Reference)->field_0x30 =
             *(int *)&(GRHICommandList.LastMutate.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar40->LastLockFenceCommand != (FRHICommandRHIThreadFence *)0x0) {
        if (((pFVar40->LastLockFenceCommand->Fence).Reference == (FBaseGraphTask *)0x0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("CmdList->LastLockFenceCommand->Fence",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                                ,0x401,L""), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        TVar14.Reference = GRHICommandList.LastMutate.Reference;
        pFVar9 = (pFVar40->LastLockFenceCommand->Fence).Reference;
        if (GRHICommandList.LastMutate.Reference != pFVar9) {
          GRHICommandList.LastMutate.Reference = pFVar9;
          if (pFVar9 != (FBaseGraphTask *)0x0) {
            LOCK();
            *(int *)&pFVar9->field_0x30 = *(int *)&pFVar9->field_0x30 + 1;
            UNLOCK();
          }
          if (TVar14.Reference != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar38 = &(TVar14.Reference)->field_0x30;
            iVar18 = *(int *)puVar38;
            *(int *)puVar38 = *(int *)puVar38 + -1;
            UNLOCK();
            if (iVar18 == 1) {
              (*(code *)**(undefined8 **)TVar14.Reference)(TVar14.Reference,1);
            }
          }
        }
      }
      FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      if ((ulonglong)FVar25 < 0x154be7ac1) {
        FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
        if (local_b0.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar25 = local_b0.AllocatorInstance.SecondaryData;
        }
        if ((&GRHICommandList.LastSubmit <
             (undefined1 *)((longlong)FVar25 + (longlong)local_b0.ArrayMax * 8)) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
      }
      if (local_b0.ArrayNum == local_b0.ArrayMax) {
        local_b0.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
      }
      FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      lVar23 = (longlong)local_b0.ArrayNum;
      local_b0.ArrayNum = local_b0.ArrayNum + 1;
      *(undefined8 *)((longlong)FVar25 + lVar23 * 8) = 0;
      *(FBaseGraphTask **)((longlong)FVar25 + lVar23 * 8) = GRHICommandList.LastSubmit.Reference;
      if (GRHICommandList.LastSubmit.Reference != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&(GRHICommandList.LastSubmit.Reference)->field_0x30 =
             *(int *)&(GRHICommandList.LastSubmit.Reference)->field_0x30 + 1;
        UNLOCK();
      }
      local_60 = pFVar15->CurrentTranslateJob;
      TVar31 = (TAtomic<ENamedThreads::Type>)0x6ff;
      local_68 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FRHICommandListExecutor::FSubmitState::Dispatch'::`10'::<lambda_1>,0,0>
                  ::_vftable_;
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRHICommandListExecutor::FSubmitState::Dispatch'::__l10::<lambda_1>,void>
                    ::Call;
      local_50 = (undefined ***)0x0;
      this_00 = &local_60->TranslatePipe;
      TVar16 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
      if (((GRHICommandList.bLatchedBypass != false) ||
          (GIsRunningRHIInSeparateThread_InternalUseOnly == false)) ||
         (TVar16 = (TAtomic<ENamedThreads::Type>)0x0, local_60->bParallel == false)) {
        TVar31 = TVar16;
        this_00 = &GRHICommandList.RHIThreadPipe;
      }
      local_58 = pFVar40;
      FTaskPipe::Enqueue(this_00,(Type)TVar31,&local_b0,(TFunction<void___cdecl(void)> *)local_78);
      if (local_78[0] != (code *)0x0) {
        pppuVar30 = &local_68;
        if (local_50 != (undefined ***)0x0) {
          pppuVar30 = local_50;
        }
        (*(code *)(*pppuVar30)[2])();
      }
      FVar25 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b0;
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar25 = local_b0.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar25,local_b0.ArrayNum);
      if (local_b0.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
      }
      return;
    }
  } while( true );
}

// FinalizeCurrent @ 145ca37b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FRHICommandListExecutor::FSubmitState::FinalizeCurrent(FSubmitState *this)

{
  FTaskPipe *pFVar1;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  int *piVar3;
  FBaseGraphTask *pFVar4;
  code *pcVar5;
  TAtomic<ENamedThreads::Type> TVar6;
  bool bVar7;
  int iVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar11;
  undefined ***pppuVar12;
  TAtomic<ENamedThreads::Type> TVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> in_RDX;
  longlong lVar14;
  FTaskPipe *this_00;
  undefined1 auStack_e8 [40];
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_98;
  code *local_68 [2];
  undefined **local_58;
  FTranslateState *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  local_50 = this->CurrentTranslateJob;
  local_98.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRHICommandListExecutor::FTranslateState::Finalize'::`2'::<lambda_1>,0,0>
              ::_vftable_;
  pFVar1 = &local_50->TranslatePipe;
  local_98.ArrayNum = 0;
  local_40 = (undefined ***)0x0;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRHICommandListExecutor::FTranslateState::Finalize'::__l2::<lambda_1>,void>
                ::Call;
  local_98.ArrayMax = 4;
  TVar13 = (TAtomic<ENamedThreads::Type>)0x6ff;
  TVar6 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if (((GRHICommandList.bLatchedBypass) || (!GIsRunningRHIInSeparateThread_InternalUseOnly)) ||
     (this_00 = pFVar1, TVar6 = (TAtomic<ENamedThreads::Type>)0x0, local_50->bParallel == false)) {
    TVar13 = TVar6;
    this_00 = &GRHICommandList.RHIThreadPipe;
  }
  FTaskPipe::Enqueue(this_00,(Type)TVar13,&local_98,(TFunction<void___cdecl(void)> *)local_68);
  FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_98;
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar11 = local_98.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar11,local_98.ArrayNum);
  if (local_98.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar12 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar12 = local_40;
    }
    (*(code *)(*pppuVar12)[2])();
  }
  if (this_00 == pFVar1) {
    if (this_00->Current != (FTask *)0x0) {
      FTaskPipe::FTask::Release(this_00->Current);
      this_00->Current = (FTask *)0x0;
    }
    *(longlong *)in_RDX = 0;
    pFVar4 = (this_00->LastEvent).Reference;
    *(FBaseGraphTask **)in_RDX = pFVar4;
    if (pFVar4 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar4->field_0x30 = *(int *)&pFVar4->field_0x30 + 1;
      UNLOCK();
    }
  }
  else {
    if ((this_00 != &GRHICommandList.RHIThreadPipe) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pipe == &GRHICommandList.RHIThreadPipe",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x4a0,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      TVar10.Reference = (FBaseGraphTask *)(*pcVar5)();
      return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
    }
    *(longlong *)in_RDX = 0;
  }
  FVar11 = (this->TranslateEvents).AllocatorInstance.SecondaryData;
  pTVar2 = &this->TranslateEvents;
  FVar9 = FVar11;
  if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
  }
  if ((ulonglong)FVar9 <= (ulonglong)in_RDX) {
    lVar14 = (longlong)(this->TranslateEvents).ArrayMax;
    FVar9 = FVar11;
    if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar9 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
    }
    if ((ulonglong)in_RDX < (ulonglong)((longlong)FVar9 + lVar14 * 8)) {
      local_b0 = (longlong)(this->TranslateEvents).ArrayNum;
      local_a8 = 8;
      local_c0 = FVar11;
      if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        local_c0 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
      }
      local_b8 = lVar14;
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        TVar10.Reference = (FBaseGraphTask *)(*pcVar5)();
        return (TRefCountPtr<FBaseGraphTask>)TVar10.Reference;
      }
    }
  }
  iVar8 = (this->TranslateEvents).ArrayNum;
  piVar3 = &(this->TranslateEvents).ArrayMax;
  if (iVar8 == *piVar3) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar3);
  }
  (this->TranslateEvents).ArrayNum = iVar8 + 1;
  FVar11 = (this->TranslateEvents).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar11 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
  }
  *(undefined8 *)((longlong)FVar11 + (longlong)iVar8 * 8) = 0;
  lVar14 = *(longlong *)in_RDX;
  *(longlong *)((longlong)FVar11 + (longlong)iVar8 * 8) = lVar14;
  if (lVar14 != 0) {
    LOCK();
    *(int *)(lVar14 + 0x30) = *(int *)(lVar14 + 0x30) + 1;
    UNLOCK();
  }
  this->CurrentTranslateJob = (FTranslateState *)0x0;
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)in_RDX;
}

// ShouldSplitTranslateJob @ 145cc05d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FRHICommandListExecutor::FSubmitState::ShouldSplitTranslateJob
          (FSubmitState *this,FRHICommandListBase *param_1)

{
  uint uVar1;
  FTranslateState *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  pFVar2 = this->CurrentTranslateJob;
  if (this->bAllowSingleParallelCombine == false) {
    if (param_1->bAllowParallelTranslate == false) {
      bVar5 = false;
    }
    else if ((param_1->PersistentState).bImmediate == '\0') {
      if (param_1->bUsesLockFence == false) {
        if ((param_1->bUsesShaderBundles == false) || (GRHIGlobals.ShaderBundles.SupportsParallel))
        {
          bVar5 = true;
        }
        else {
          bVar5 = false;
        }
      }
      else {
        bVar5 = false;
      }
    }
    else {
      bVar5 = false;
    }
    bVar5 = pFVar2->bParallel != bVar5;
  }
  else if ((pFVar2->bParallel == false) ||
          ((((param_1->bAllowParallelTranslate != false &&
             ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bUsesLockFence == false))
           && ((param_1->bUsesShaderBundles == false || (GRHIGlobals.ShaderBundles.SupportsParallel)
               ))))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  uVar1 = this->MaxCommandsPerTranslate;
  if ((int)uVar1 < 0) {
    bVar3 = true;
  }
  else if (uVar1 == 0) {
    bVar3 = false;
  }
  else {
    bVar3 = uVar1 < pFVar2->NumCommands + param_1->NumCommands;
  }
  if ((param_1->SubRenderPassInfo).Object == (FRHIParallelRenderPassInfo *)0x0) {
    if (pFVar2->bUsingSubCmdLists != false) goto LAB_145cc06a1;
  }
  else if (pFVar2->bUsingSubCmdLists == false) {
LAB_145cc06a1:
    bVar4 = true;
    goto LAB_145cc068f;
  }
  bVar4 = false;
LAB_145cc068f:
  if (((!bVar5) && (!bVar3)) && (!bVar4)) {
    return false;
  }
  return true;
}

// Submit @ 145cc3e60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FSubmitState::Submit(FSubmitState *this,FSubmitArgs *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  TSharedFromThis<FRHIBreadcrumbAllocator,1> *pTVar3;
  FRHIBreadcrumbNode *pFVar4;
  FTaskBase *this_00;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  byte bVar7;
  FScriptContainerElement *pFVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  longlong lVar12;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar13;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar14;
  ulonglong uVar15;
  longlong lVar16;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar17;
  byte bVar18;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar19;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar20;
  longlong lVar21;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> FVar22;
  longlong lVar23;
  ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *pFVar24;
  FScriptContainerElement *pFVar25;
  longlong *plVar26;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_148 [8];
  ForAnyElementType local_140;
  undefined8 local_138;
  uint local_130;
  uint local_12c;
  longlong *local_128;
  longlong local_120;
  FRHIBreadcrumbNode *local_118;
  FRHIBreadcrumbAllocator *local_110;
  FSharedReferencer<1> FStack_108;
  longlong local_100;
  longlong local_f8;
  FRHIBreadcrumbAllocator **local_f0;
  FScriptContainerElement *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  FScriptContainerElement *local_d0;
  undefined8 local_c8;
  FSharedReferencer<1> local_c0;
  FScriptContainerElement *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  uint local_a0;
  FSubmitArgs *local_98;
  long64 local_90;
  char local_88;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_80;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_70;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_60 [2];
  
  pFVar25 = (this->TranslateJobs).AllocatorInstance.Data;
  local_12c = (this->TranslateJobs).ArrayNum;
  uVar15 = (ulonglong)(int)local_12c;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = 0;
  local_d0 = pFVar25 + uVar15 * 8;
  do {
    pFVar8 = local_d0;
    local_e8 = pFVar25;
    if ((this->TranslateJobs).ArrayNum != (int)uVar15) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (pFVar25 == pFVar8) {
      if (GDynamicRHI == (FDynamicRHI *)0x0) {
        if (((int)local_138 != 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("FinalizedCmdLists.IsEmpty()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                                ,0x4de,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      else {
        local_b8 = local_140.Data;
        local_b0 = (int)local_138;
        local_ac = local_138._4_4_;
        local_a8 = 0;
        local_140.Data = (FScriptContainerElement *)0x0;
        local_138 = 0;
        (**(code **)(GDynamicRHI->_padding_ + 0x3f0))(GDynamicRHI,&local_b8);
        if (local_b8 != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b8);
        }
      }
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"DeleteRHIResources");
      if (CpuChannel->Enabled < 0) {
        bVar10 = false;
      }
      else {
        bVar10 = true;
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId1250,"DeleteRHIResources",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x4e2);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1250);
      }
      while( true ) {
        if (((byte)this->SubmitFlags & 6) == 6) {
          FRHIResource::GatherResourcesToDelete
                    (&this->ResourcesToDelete,this->bIncludeExtendedLifetimeResources);
        }
        if ((this->ResourcesToDelete).ArrayNum == 0) break;
        FRHIResource::DeleteResources(&this->ResourcesToDelete);
        (this->ResourcesToDelete).ArrayNum = 0;
        if ((this->ResourcesToDelete).ArrayMax < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&(this->ResourcesToDelete).AllocatorInstance,0,
                     &(this->ResourcesToDelete).ArrayMax);
        }
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      FGenericPlatformMisc::EndNamedEvent();
      if ((GDynamicRHI != (FDynamicRHI *)0x0) && ((this->SubmitFlags & DeleteResources) != None)) {
        (**(code **)(GDynamicRHI->_padding_ + 0x3f8))();
      }
      if ((this->SubmitFlags & EndFrame) != None) {
        local_a0 = GRHICommandList.FrameNumber;
        GRHICommandList.FrameNumber = GRHICommandList.FrameNumber + 1;
        local_88 = (param_1->StatsFrame).bIsSet;
        if ((bool)local_88 != false) {
          local_90 = (param_1->StatsFrame).TypedValue;
        }
        local_98 = param_1;
        (**(code **)(GDynamicRHI->_padding_ + 0x40))();
        FRHIDrawStats::ProcessAsFrameStats(&GRHICommandList.FrameDrawStats);
      }
      this_00 = (FTaskBase *)(this->CompletionEvent).Reference;
      if (this_00->ExtendedPriority == TaskEvent) {
        LOCK();
        this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
      FVar17 = (this->ChildGraphEvents).AllocatorInstance.SecondaryData;
      if (FVar17 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->ChildGraphEvents;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar17,(this->ChildGraphEvents).ArrayNum);
      FVar17 = (this->ChildGraphEvents).AllocatorInstance.SecondaryData;
      if (FVar17 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)FVar17);
      }
      pFVar5 = (this->BeginGraphEvent).Reference;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar2 = &pFVar5->field_0x30;
        iVar11 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
      pFVar25 = (this->ResourcesToDelete).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      FVar17 = (this->TranslateEvents).AllocatorInstance.SecondaryData;
      if (FVar17 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar17 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->TranslateEvents;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar17,(this->TranslateEvents).ArrayNum);
      FVar17 = (this->TranslateEvents).AllocatorInstance.SecondaryData;
      if (FVar17 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)FVar17);
      }
      DestructItems<TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>,int>
                ((TUniquePtr<FRHICommandListExecutor::FTranslateState,TDefaultDelete<FRHICommandListExecutor::FTranslateState>_>
                  *)(this->TranslateJobs).AllocatorInstance.Data,(this->TranslateJobs).ArrayNum);
      pFVar25 = (this->TranslateJobs).AllocatorInstance.Data;
      if (pFVar25 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar25);
      }
      pFVar5 = (this->CompletionEvent).Reference;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar2 = &pFVar5->field_0x30;
        iVar11 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar11 == 1) {
          (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
        }
      }
      ::operator_delete(this,0x18b0);
      if (local_140.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_140.Data);
      }
      return;
    }
    bVar18 = 3;
    do {
      lVar23 = *(longlong *)pFVar25;
      bVar9 = ~bVar18 + 1;
      local_130 = (uint)bVar9;
      bVar7 = bVar9 & bVar18;
      if ((bVar7 == 1) || (bVar7 != 2)) {
        lVar21 = 0;
        local_f8 = 8;
        local_120 = 0x18;
      }
      else {
        local_120 = 0x38;
        local_f8 = 0x28;
        lVar21 = 0x20;
      }
      FVar20 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)(local_120 + lVar23);
      local_100 = lVar23;
      if (FVar20 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
        if (FVar20 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)(lVar23 + 0x48)) {
          FVar19 = FVar20;
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
              != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                      ((longlong)FVar20 + 0x20);
          }
          DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                    ((TSharedRef<FRHIBreadcrumbAllocator,1> *)FVar19,
                     *(int *)((longlong)FVar20 + 0x28));
          piVar1 = (int *)((longlong)FVar20 + 0x2c);
          iVar11 = *(int *)(lVar23 + 0x70);
          pFVar24 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)(lVar23 + 0x48);
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> **)(lVar23 + 0x68) !=
              (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)0x0) {
            pFVar24 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> **)(lVar23 + 0x68);
          }
          *(int *)((longlong)FVar20 + 0x28) = iVar11;
          if ((iVar11 == 0) && (*piVar1 == 0)) {
            *piVar1 = 2;
          }
          else {
            UE::Core::Private::
            ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                      (0x10,8,iVar11,*piVar1,
                       (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)FVar20,iVar11,
                       piVar1);
            if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
                != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
              FVar20 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                        ((longlong)FVar20 + 0x20);
            }
            ConstructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,TSharedRef<FRHIBreadcrumbAllocator,1>,int>
                      ((void *)FVar20,(TSharedRef<FRHIBreadcrumbAllocator,1> *)pFVar24,iVar11);
          }
        }
        FVar20 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)(local_120 + lVar23);
        if ((bVar7 == 1) || (bVar7 != 2)) {
          plVar26 = (longlong *)&GRHICommandList.Breadcrumbs.GPU.field_0x18;
          local_f0 = (FRHIBreadcrumbAllocator **)&GRHICommandList.Breadcrumbs.GPU.field_0x20;
          lVar16 = GRHICommandList.Breadcrumbs.GPU._24_8_;
        }
        else {
          plVar26 = (longlong *)&GRHICommandList.Breadcrumbs.GPU.field_0x48;
          local_f0 = (FRHIBreadcrumbAllocator **)&GRHICommandList.Breadcrumbs.GPU.field_0x50;
          lVar16 = GRHICommandList.Breadcrumbs.GPU._72_8_;
        }
        local_128 = plVar26;
        if (lVar16 != 0) {
          if ((bVar7 == 1) || (lVar12 = 0x20, bVar7 != 2)) {
            lVar12 = 0x18;
          }
          if ((*(longlong *)(lVar16 + lVar12) != 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!Next",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                                  ,0x4bd,L""), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined8 *)(lVar16 + lVar12) = *(undefined8 *)(lVar21 + lVar23);
        }
        lVar16 = *plVar26;
        uStack_d8 = 0;
        if (lVar16 == 0) {
          lVar16 = *(longlong *)(lVar21 + lVar23);
        }
        local_e0 = lVar16;
        if (lVar16 != 0) {
          iVar11 = *(int *)((longlong)FVar20 + 0x28);
          pTVar3 = *(TSharedFromThis<FRHIBreadcrumbAllocator,1> **)(lVar16 + 0x28);
          FVar19 = FVar20;
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
              != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                      ((longlong)FVar20 + 0x20);
          }
          FVar22 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                   ((longlong)iVar11 * 0x10 + (longlong)FVar19);
          while( true ) {
            if (*(int *)((longlong)FVar20 + 0x28) != iVar11) {
              local_res20[0] = 0;
              `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_res20);
            }
            if (FVar19 == FVar22) break;
            lVar23 = local_100;
            plVar26 = local_128;
            if (pTVar3 == *(TSharedFromThis<FRHIBreadcrumbAllocator,1> **)FVar19)
            goto LAB_145cc41bf;
            FVar19 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                     ((longlong)FVar19 + 0x10);
          }
          FVar14 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                   TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared(pTVar3,&local_80);
          FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                    ((longlong)FVar20 + 0x20);
          FVar22 = FVar20;
          if (FVar19 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar22 = FVar19;
          }
          if ((ulonglong)FVar22 <= (ulonglong)FVar14) {
            FVar22 = FVar20;
            if (FVar19 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
              FVar22 = FVar19;
            }
            if (((ulonglong)FVar14 <
                 (ulonglong)((longlong)*(int *)((longlong)FVar20 + 0x2c) * 0x10 + (longlong)FVar22))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = *(int *)((longlong)FVar20 + 0x28);
          if (iVar11 == *(int *)((longlong)FVar20 + 0x2c)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                               (0x810,(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                                      FVar20,(int *)((longlong)FVar20 + 0x2c));
          }
          *(int *)((longlong)FVar20 + 0x28) = iVar11 + 1;
          FVar19 = FVar20;
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
              != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                      ((longlong)FVar20 + 0x20);
          }
          *(undefined8 *)((longlong)FVar19 + (longlong)iVar11 * 0x10) = *(undefined8 *)FVar14;
          lVar23 = *(longlong *)((longlong)FVar14 + 8);
          *(longlong *)((longlong)FVar19 + 8 + (longlong)iVar11 * 0x10) = lVar23;
          if (lVar23 != 0) {
            LOCK();
            *(int *)(lVar23 + 8) = *(int *)(lVar23 + 8) + 1;
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_80.SharedReferenceCount.ReferenceController);
          lVar23 = local_100;
          plVar26 = local_128;
        }
LAB_145cc41bf:
        pFVar4 = *(FRHIBreadcrumbNode **)(local_f8 + lVar23);
        if (pFVar4 != (FRHIBreadcrumbNode *)0x0) {
          local_110 = (FRHIBreadcrumbAllocator *)0x0;
          FStack_108.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          local_118 = pFVar4;
          if (pFVar4 != FRHIBreadcrumbNode::Sentinel) {
            pTVar13 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                                ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)pFVar4->Allocator,
                                 &local_70);
            local_c0.ReferenceController = (pTVar13->SharedReferenceCount).ReferenceController;
            local_110 = pTVar13->Object;
            if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_c0.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_c8 = 0;
            SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_108,&local_c0);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_c0.ReferenceController);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_70.SharedReferenceCount.ReferenceController);
          }
          *plVar26 = (longlong)local_118;
          if (local_f0 != &local_110) {
            *local_f0 = local_110;
            local_110 = (FRHIBreadcrumbAllocator *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)(local_f0 + 1),&FStack_108);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FStack_108.ReferenceController);
        }
        uStack_d8 = lVar16;
        if (*plVar26 != 0) {
          uStack_d8 = *plVar26;
        }
        if (uStack_d8 != 0) {
          pTVar3 = *(TSharedFromThis<FRHIBreadcrumbAllocator,1> **)(uStack_d8 + 0x28);
          iVar11 = *(int *)((longlong)FVar20 + 0x28);
          FVar19 = FVar20;
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
              != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                      ((longlong)FVar20 + 0x20);
          }
          FVar22 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                   ((longlong)iVar11 * 0x10 + (longlong)FVar19);
          while( true ) {
            if (*(int *)((longlong)FVar20 + 0x28) != iVar11) {
              local_148[0] = 0;
              `TCheckedPointerIterator<TSharedRef<FRHIBreadcrumbAllocator,1>,int,0>::operator!='::
              __l2::<lambda_1>::operator()(local_148);
            }
            if (FVar19 == FVar22) break;
            if (pTVar3 == *(TSharedFromThis<FRHIBreadcrumbAllocator,1> **)FVar19)
            goto LAB_145cc43bb;
            FVar19 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                     ((longlong)FVar19 + 0x10);
          }
          FVar14 = (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)
                   TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared(pTVar3,local_60);
          FVar19 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                    ((longlong)FVar20 + 0x20);
          FVar22 = FVar20;
          if (FVar19 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar22 = FVar19;
          }
          if ((ulonglong)FVar22 <= (ulonglong)FVar14) {
            FVar22 = FVar20;
            if (FVar19 != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
              FVar22 = FVar19;
            }
            if (((ulonglong)FVar14 <
                 (ulonglong)((longlong)*(int *)((longlong)FVar20 + 0x2c) * 0x10 + (longlong)FVar22))
               && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar10)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          iVar11 = *(int *)((longlong)FVar20 + 0x28);
          if (iVar11 == *(int *)((longlong)FVar20 + 0x2c)) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>_>
                               (0x810,(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                                      FVar20,(int *)((longlong)FVar20 + 0x2c));
          }
          *(int *)((longlong)FVar20 + 0x28) = iVar11 + 1;
          if (*(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)((longlong)FVar20 + 0x20)
              != (ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_>)0x0) {
            FVar20 = *(ForElementType<TSharedRef<FRHIBreadcrumbAllocator,1>_> *)
                      ((longlong)FVar20 + 0x20);
          }
          *(undefined8 *)((longlong)FVar20 + (longlong)iVar11 * 0x10) = *(undefined8 *)FVar14;
          lVar21 = *(longlong *)((longlong)FVar14 + 8);
          *(longlong *)((longlong)FVar20 + 8 + (longlong)iVar11 * 0x10) = lVar21;
          if (lVar21 != 0) {
            LOCK();
            *(int *)(lVar21 + 8) = *(int *)(lVar21 + 8) + 1;
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60[0].SharedReferenceCount.ReferenceController);
        }
LAB_145cc43bb:
        lVar21 = *(longlong *)(local_120 + lVar23);
        pFVar25 = (FScriptContainerElement *)(local_120 + lVar23);
        *(undefined4 *)(lVar21 + 0x30) = (undefined4)local_e0;
        *(undefined4 *)(lVar21 + 0x34) = local_e0._4_4_;
        *(undefined4 *)(lVar21 + 0x38) = (undefined4)uStack_d8;
        *(undefined4 *)(lVar21 + 0x3c) = uStack_d8._4_4_;
        if (((local_140.Data <= pFVar25) &&
            (pFVar25 < local_140.Data + (longlong)local_138._4_4_ * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (int)local_138;
        if ((int)local_138 == local_138._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_140,(int *)((longlong)&local_138 + 4));
        }
        local_138 = CONCAT44(local_138._4_4_,iVar11 + 1);
        *(undefined8 *)(local_140.Data + (longlong)iVar11 * 8) = *(undefined8 *)pFVar25;
        bVar9 = (byte)local_130;
        pFVar25 = local_e8;
      }
      bVar18 = bVar18 & ~bVar9;
    } while (bVar18 != 0);
    FRHIDrawStats::Accumulate
              (&GRHICommandList.FrameDrawStats,(FRHIDrawStats *)(*(longlong *)pFVar25 + 0x98));
    uVar15 = (ulonglong)local_12c;
    pFVar25 = pFVar25 + 8;
  } while( true );
}

