// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 13

// ~FRHICommandListExecutor @ 145c8ae50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandListExecutor::~FRHICommandListExecutor(FRHICommandListExecutor *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Breadcrumbs).GPU.field_0x58);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Breadcrumbs).GPU.field_0x40);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Breadcrumbs).GPU.field_0x28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&(this->Breadcrumbs).GPU.field_0x10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Breadcrumbs).CPU.Last.AllocatorRef.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->Breadcrumbs).CPU.Current.AllocatorRef.SharedReferenceCount.ReferenceController);
  FVar4 = (this->NextDispatchTaskPrerequisites).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->NextDispatchTaskPrerequisites;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar4,(this->NextDispatchTaskPrerequisites).ArrayNum);
  FVar4 = (this->NextDispatchTaskPrerequisites).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar3 = (this->CompletionEvent).Reference;
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
  pFVar3 = (this->LastSubmit).Reference;
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
  pFVar3 = (this->LastMutate).Reference;
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
  pFVar3 = (this->RHIThreadPipe).LastEvent.Reference;
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
  pFVar3 = (this->DispatchPipe).LastEvent.Reference;
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
  FRHICommandListBase::FinishRecording((FRHICommandListBase *)&this->CommandListImmediate);
  FRHICommandListBase::~FRHICommandListBase((FRHICommandListBase *)&this->CommandListImmediate);
  FVar4 = (this->WaitOutstandingTasks).AllocatorInstance.SecondaryData;
  FVar5 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar5 = FVar4;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar5,(this->WaitOutstandingTasks).ArrayNum);
  FVar4 = (this->WaitOutstandingTasks).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  return;
}

// operator() @ 145c8ed80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall `FRHICommandListExecutor::Submit'::__l53::<lambda_2>::operator()(void *this)

{
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_Dispatch");
  if (CpuChannel->Enabled < 0) {
    FRHICommandListExecutor::FSubmitState::Dispatch
              (*(FSubmitState **)this,*(FRHICommandListBase **)((longlong)this + 8));
    FGenericPlatformMisc::EndNamedEvent();
    return;
  }
  FCpuProfilerTrace::GetOrCreateSpecId
            (&__CpuProfilerEventSpecId1435,"RHI_Dispatch",
             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
             ,0x59b);
  FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1435);
  FRHICommandListExecutor::FSubmitState::Dispatch
            (*(FSubmitState **)this,*(FRHICommandListBase **)((longlong)this + 8));
  FCpuProfilerTrace::OutputEndEvent();
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 145c8ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall `FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()(void *this)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  byte bVar5;
  byte bVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  code **ppcVar9;
  undefined8 *puVar10;
  TAtomic<ENamedThreads::Type> TVar11;
  char cVar12;
  code *pcVar13;
  code *pcVar14;
  bool bVar15;
  undefined1 auStack_b8 [32];
  code *local_98;
  code *local_90;
  code *pcStack_88;
  code *local_80;
  char local_78;
  longlong local_70;
  code *local_68 [2];
  code *local_58 [3];
  code **local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHI_FinalizeAndSubmit");
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1461,"RHI_FinalizeAndSubmit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x5b5);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1461);
  }
  FRHICommandListExecutor::FSubmitState::FinalizeCurrent(*(FSubmitState **)((longlong)this + 8));
  if (local_98 != (code *)0x0) {
    LOCK();
    pcVar13 = local_98 + 0x30;
    iVar2 = *(int *)pcVar13;
    *(int *)pcVar13 = *(int *)pcVar13 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (local_98 != (code *)0x0)) {
      (*(code *)**(undefined8 **)local_98)(local_98,1);
    }
  }
  bVar6 = 3;
  local_78 = '\0';
  do {
    bVar5 = ~bVar6 + 1 & bVar6;
    if ((bVar5 == 1) || (bVar5 != 2)) {
      pcVar13 = (code *)GRHICommandList.Breadcrumbs.GPU._0_8_;
      if ((bVar5 == 1) || (bVar5 != 2)) {
        ppcVar9 = &local_90;
      }
      else {
        ppcVar9 = &pcStack_88;
      }
    }
    else {
      ppcVar9 = &pcStack_88;
      pcVar13 = (code *)GRHICommandList.Breadcrumbs.GPU._48_8_;
    }
    *ppcVar9 = pcVar13;
    bVar6 = bVar6 & ~(~bVar6 + 1);
  } while (bVar6 != 0);
  cVar12 = local_78;
  if (((code **)((longlong)this + 0x10) != &local_80) && (*(char *)((longlong)this + 0x18) != '\0'))
  {
    local_80 = *(code **)((longlong)this + 0x10);
    cVar12 = '\x01';
  }
  lVar3 = *(longlong *)this;
  pcVar13 = *(code **)((longlong)this + 8);
  pcVar14 = local_98;
  if (cVar12 != '\0') {
    pcVar14 = local_80;
  }
  local_68[0] = (code *)0x0;
  local_40 = FMemory::Malloc(0x30,8);
  local_40[1] = pcVar13;
  *local_40 = (code *)&UE::Core::Private::Function::
                       TFunction_OwnedObject<``FRHICommandListExecutor::Submit'::`56'::<lambda_3>::operator()'::`2'::<lambda_1>,0,1>
                       ::_vftable_;
  local_40[2] = local_90;
  local_40[3] = pcStack_88;
  *(char *)(local_40 + 5) = cVar12;
  if (cVar12 != '\0') {
    local_40[4] = pcVar14;
  }
  if (local_40 != (code **)&DAT_fffffffffffffff8) {
    local_68[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<``FRHICommandListExecutor::Submit'::__l56::<lambda_3>::operator()'::__l2::<lambda_1>,void>
                  ::Call;
  }
  TVar11 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if ((*(char *)(lVar3 + 0x30) == '\0') && (GIsRunningRHIInSeparateThread_InternalUseOnly != false))
  {
    TVar11 = (TAtomic<ENamedThreads::Type>)0x0;
  }
  FRHICommandListExecutor::FTaskPipe::Enqueue
            ((FTaskPipe *)(lVar3 + 0x1c00),(Type)TVar11,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)(*(longlong *)((longlong)this + 8) + 0x18),(TFunction<void___cdecl(void)> *)local_68
            );
  if (local_68[0] != (code *)0x0) {
    ppcVar9 = local_68 + 2;
    if (local_40 != (code **)0x0) {
      ppcVar9 = local_40;
    }
    (**(code **)(*ppcVar9 + 0x10))();
  }
  lVar3 = *(longlong *)this;
  if (*(FTask **)(lVar3 + 0x1c00) != (FTask *)0x0) {
    FRHICommandListExecutor::FTaskPipe::FTask::Release(*(FTask **)(lVar3 + 0x1c00));
    *(undefined8 *)(lVar3 + 0x1c00) = 0;
  }
  puVar10 = *(undefined8 **)(lVar3 + 0x1c08);
  if (puVar10 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(puVar10 + 6) = *(int *)(puVar10 + 6) + 1;
    UNLOCK();
  }
  plVar7 = (longlong *)(*(longlong *)this + 0x1c28);
  if (plVar7 == &local_70) {
    if (puVar10 == (undefined8 *)0x0) goto LAB_145c8f0a5;
    LOCK();
    piVar1 = (int *)(puVar10 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145c8f0a5;
    puVar8 = (undefined8 *)*puVar10;
  }
  else {
    puVar4 = (undefined8 *)*plVar7;
    *plVar7 = (longlong)puVar10;
    if (puVar4 == (undefined8 *)0x0) goto LAB_145c8f0a5;
    LOCK();
    piVar1 = (int *)(puVar4 + 6);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 != 1) goto LAB_145c8f0a5;
    puVar8 = (undefined8 *)*puVar4;
    puVar10 = puVar4;
  }
  (*(code *)*puVar8)(puVar10,1);
LAB_145c8f0a5:
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddNextDispatchPrerequisite @ 145c90f50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::AddNextDispatchPrerequisite
          (FRHICommandListExecutor *this,TRefCountPtr<FBaseGraphTask> param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  
  bVar5 = IsInRenderingThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x2fa,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FVar7 = (this->NextDispatchTaskPrerequisites).AllocatorInstance.SecondaryData;
  pTVar2 = &this->NextDispatchTaskPrerequisites;
  if (FVar7 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
  }
  if (((ulonglong)FVar7 <= param_1.Reference) &&
     (param_1.Reference <
      (FBaseGraphTask *)
      ((longlong)FVar7 + (longlong)(this->NextDispatchTaskPrerequisites).ArrayMax * 8))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (this->NextDispatchTaskPrerequisites).ArrayNum;
  piVar1 = &(this->NextDispatchTaskPrerequisites).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (0x808,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->NextDispatchTaskPrerequisites).ArrayNum = iVar6 + 1;
  FVar7 = (this->NextDispatchTaskPrerequisites).AllocatorInstance.SecondaryData;
  if (FVar7 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar2;
  }
  puVar3 = (undefined8 *)((longlong)FVar7 + (longlong)iVar6 * 8);
  *puVar3 = 0;
  *puVar3 = *(undefined8 *)param_1.Reference;
  *(undefined8 *)param_1.Reference = 0;
  return;
}

// AllowParallel @ 145c914a0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FRHICommandListExecutor::AllowParallel(FRHICommandListExecutor *this)

{
  if ((this->bLatchedBypass == false) && (GIsRunningRHIInSeparateThread_InternalUseOnly)) {
    return true;
  }
  return false;
}

// AreRHITasksActive @ 145c91530

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FRHICommandListExecutor::AreRHITasksActive(void)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x6fc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((GRHICommandList.CompletionEvent.Reference != (FBaseGraphTask *)0x0) &&
     ((GRHICommandList.CompletionEvent.Reference)->field_0xd0 == '\0')) {
    return true;
  }
  return false;
}

// CleanupGraphEvents @ 145c93a20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRHICommandListExecutor::CleanupGraphEvents(FRHICommandListExecutor *this)

{
  int *piVar1;
  undefined1 *puVar2;
  int iVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar8;
  
  if (this->SubmitState != (FSubmitState *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("!SubmitState",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x912,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  piVar1 = &(this->WaitOutstandingTasks).ArrayMax;
  iVar3 = (this->WaitOutstandingTasks).ArrayNum;
  FVar4 = (this->WaitOutstandingTasks).AllocatorInstance.SecondaryData;
  if ((this->WaitOutstandingTasks).ArrayMax < 0) {
    FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar8 = FVar4;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar8,iVar3);
    (this->WaitOutstandingTasks).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                (8,8,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this,0,piVar1);
    }
  }
  else {
    FVar8 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
    if (FVar4 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar8 = FVar4;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar8,iVar3);
    (this->WaitOutstandingTasks).ArrayNum = 0;
  }
  pFVar5 = (this->LastMutate).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->LastMutate).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->LastSubmit).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->LastSubmit).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->CompletionEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->CompletionEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->DispatchPipe).LastEvent.Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->DispatchPipe).LastEvent.Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  pFVar5 = (this->RHIThreadPipe).LastEvent.Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    (this->RHIThreadPipe).LastEvent.Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar5->field_0x30;
    iVar3 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  return;
}

// EnqueueDispatchTask @ 145c9e7d0

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskPipe * __thiscall
FRHICommandListExecutor::EnqueueDispatchTask
          (FRHICommandListExecutor *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,TFunction<void___cdecl(void)> *param_2)

{
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FTaskPipe *pFVar6;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar7;
  TAtomic<ENamedThreads::Type> TVar8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> _Src;
  
  bVar4 = IsInRenderingThread();
  if (!bVar4) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x300,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTaskPipe *)(*pcVar3)();
      return pFVar6;
    }
  }
  if ((this->bLatchedBypass != false) ||
     (TVar8 = (TAtomic<ENamedThreads::Type>)0x6ff,
     GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
    TVar8 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  }
  pTVar1 = &this->NextDispatchTaskPrerequisites;
  if (pTVar1 == param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x986,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FTaskPipe *)(*pcVar3)();
      return pFVar6;
    }
  }
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                      (8,8,iVar2,&pTVar1->AllocatorInstance,
                       &(this->NextDispatchTaskPrerequisites).ArrayNum,
                       &(this->NextDispatchTaskPrerequisites).ArrayMax);
    FVar7 = (param_1->AllocatorInstance).SecondaryData;
    _Src = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
    if (FVar7 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      _Src = FVar7;
    }
    FVar7 = (this->NextDispatchTaskPrerequisites).AllocatorInstance.SecondaryData;
    if (FVar7 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar7 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)pTVar1;
    }
    memmove((void *)((longlong)FVar7 + (longlong)iVar5 * 8),(void *)_Src,(longlong)iVar2 << 3);
    param_1->ArrayNum = 0;
  }
  FTaskPipe::Enqueue(&this->DispatchPipe,(Type)TVar8,pTVar1,param_2);
  return &this->DispatchPipe;
}

// EnqueueSubmitTask @ 145c9e920

/* WARNING: Enum "Type": Some values do not have unique names */

FTaskPipe * __thiscall
FRHICommandListExecutor::EnqueueSubmitTask
          (FRHICommandListExecutor *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1,TFunction<void___cdecl(void)> *param_2)

{
  TAtomic<ENamedThreads::Type> TVar1;
  
  TVar1 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  if ((this->bLatchedBypass == false) && (GIsRunningRHIInSeparateThread_InternalUseOnly)) {
    TVar1 = (TAtomic<ENamedThreads::Type>)0x0;
  }
  FTaskPipe::Enqueue(&this->RHIThreadPipe,(Type)TVar1,param_1,param_2);
  return &this->RHIThreadPipe;
}

// LatchBypass @ 145cb1e30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EConsoleVariableFlags": Some values do not have unique names */

void __thiscall FRHICommandListExecutor::LatchBypass(FRHICommandListExecutor *this)

{
  FRHICommandListBase **ppFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  longlong lVar5;
  wchar_t *pwVar6;
  int iVar7;
  byte bVar8;
  TArrayView<FRHICommandListBase_*_const,int> local_res18;
  uint uStack_3c;
  undefined8 local_38;
  longlong lStack_30;
  
  bVar8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      pwVar6 = FCommandLine::Get();
      bVar4 = FParse::Param(pwVar6,L"forcerhibypass");
      pTVar3 = CVarRHICmdBypass.Ref;
      if (bVar4) {
        bVar4 = IsInParallelRenderingThread();
        if (!bVar4) {
          bVar4 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<6409875433831007955>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                             ,0x6d3,"IsInParallelRenderingThread()");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        if (pTVar3->ShadowedValue[1] != 0) goto LAB_145cb201f;
        iVar7 = 1;
LAB_145cb2088:
        IConsoleVariable::Set<int>
                  ((IConsoleVariable *)CVarRHICmdBypass._padding_,iVar7,ECVF_SetByCommandline,
                   (FName)0x0);
      }
      else {
LAB_145cb201f:
        pwVar6 = FCommandLine::Get();
        bVar4 = FParse::Param(pwVar6,L"parallelrendering");
        pTVar3 = CVarRHICmdBypass.Ref;
        if (bVar4) {
          bVar4 = IsInParallelRenderingThread();
          if (!bVar4) {
            bVar4 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<6409875433831007955>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x6d3,"IsInParallelRenderingThread()");
            if (bVar4) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
          if (0 < pTVar3->ShadowedValue[1]) {
            iVar7 = 0;
            goto LAB_145cb2088;
          }
        }
      }
      ThreadSafeOnce51 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  bVar4 = IsInGameThread();
  pTVar3 = CVarRHICmdBypass.Ref;
  if (bVar4) {
LAB_145cb1ea3:
    if (GIsRunningRHIInSeparateThread_InternalUseOnly == false) {
      bVar4 = true;
      goto LAB_145cb1eb1;
    }
  }
  else {
    bVar4 = IsInParallelGameThread();
    if (bVar4) {
LAB_145cb1e9a:
      lVar5 = 0;
    }
    else {
      bVar4 = IsInGameThread();
      lVar5 = 4;
      if (bVar4) goto LAB_145cb1e9a;
    }
    if (0 < *(int *)((longlong)pTVar3->ShadowedValue + lVar5)) goto LAB_145cb1ea3;
  }
  bVar4 = false;
LAB_145cb1eb1:
  if (this->bLatchedBypass != bVar4) {
    bVar8 = ((bVar4 ^ 1U) + 1) * '\x10';
  }
  bVar4 = GetEmitDrawEvents();
  if (this->bEmitBreadcrumbs != bVar4) {
    bVar8 = bVar8 | !bVar4 * '@' + 0x40U;
  }
  if (bVar8 != 0) {
    lStack_30 = (ulonglong)uStack_3c << 0x20;
    local_38 = 0;
    Submit(&GRHICommandList,&local_res18,(ERHISubmitFlags)&local_38);
    if (local_res18.DataPtr != (FRHICommandListBase **)0x0) {
      LOCK();
      ppFVar1 = local_res18.DataPtr + 6;
      iVar7 = *(int *)ppFVar1;
      *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
      UNLOCK();
      if (iVar7 == 1) {
        (*(code *)((*local_res18.DataPtr)->MemManager).Top)(local_res18.DataPtr,1);
      }
    }
  }
  if ((this->bLatchedBypass == false) &&
     ((GRHIGlobals.SupportsParallelRenderingTasksWithSeparateRHIThread != false ||
      (GIsRunningRHIInSeparateThread_InternalUseOnly == false)))) {
    bVar4 = FApp::ShouldUseThreadingForPerformance();
    this->bLatchedUseParallelAlgorithms = bVar4;
    return;
  }
  this->bLatchedUseParallelAlgorithms = false;
  return;
}

// Submit @ 145cc2ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145cc3856) */
/* WARNING: Removing unreachable block (ram,0x000145cc37d8) */
/* WARNING: Removing unreachable block (ram,0x000145cc380f) */
/* WARNING: Removing unreachable block (ram,0x000145cc3813) */
/* WARNING: Removing unreachable block (ram,0x000145cc3816) */
/* WARNING: Removing unreachable block (ram,0x000145cc381a) */
/* WARNING: Removing unreachable block (ram,0x000145cc3864) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FRHICommandListExecutor::Submit
          (FRHICommandListExecutor *this,TArrayView<FRHICommandListBase_*_const,int> *param_1,
          ERHISubmitFlags param_2)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  undefined4 uVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  ERHISubmitFlags EVar14;
  TConsoleVariableData<bool> *pTVar15;
  TConsoleVariableData<int> *pTVar16;
  <lambda_1> <Var17;
  bool bVar18;
  bool bVar19;
  byte bVar20;
  int iVar21;
  uint uVar22;
  TRefCountPtr<FBaseGraphTask> TVar23;
  FName *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_ImmedCmdListExecuteTime> FVar25;
  TStatId TVar26;
  FRHICommandListBase *this_00;
  FRHICommandListBase *this_01;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  longlong *plVar29;
  FSubmitState *pFVar30;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar31;
  FBaseGraphTask *pFVar32;
  FThreadSafeStaticStat<FStat_STAT_ExplicitWaitRHIThread> FVar33;
  FTaskGraphInterface *this_02;
  undefined ***pppuVar34;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar35;
  code **ppcVar36;
  undefined8 *puVar37;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar38;
  undefined8 uVar39;
  FNameEntryId FVar40;
  undefined8 *puVar41;
  FSubmitState *pFVar42;
  longlong lVar43;
  FName FVar44;
  char cVar45;
  undefined4 in_register_00000084;
  ERHISubmitFlags in_R9D;
  TAtomic<ENamedThreads::Type> TVar46;
  longlong lVar47;
  ERHISubmitFlags EVar48;
  longlong *plVar49;
  uint uVar50;
  ERHISubmitFlags EVar51;
  FBaseGraphTask *pFVar52;
  undefined1 auStackY_258 [32];
  undefined1 local_1f6 [6];
  uint local_1f0;
  uint uStack_1ec;
  ERHISubmitFlags local_1e8;
  uint local_1e4;
  <lambda_1> local_1e0;
  longlong local_1d8;
  FColor_u_0 local_1d0;
  FColor_u_0 local_1cc;
  FBaseGraphTask *local_1c8;
  FBaseGraphTask *local_1c0;
  TArray<FRHICommandListBase_*,TSizedDefaultAllocator<32>_> local_1b8;
  FName local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_188;
  LARGE_INTEGER local_178;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_170;
  LARGE_INTEGER local_168;
  FBaseGraphTask *local_160;
  FBaseGraphTask *local_158;
  FStatMessage local_150;
  FStatMessage local_140;
  FName local_130 [2];
  FName local_120;
  undefined8 local_118;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_110;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_e0;
  code *local_a8 [2];
  undefined **local_98 [2];
  longlong local_88;
  undefined ***local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_258;
  local_170 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
  local_160 = (FBaseGraphTask *)param_1;
  bVar18 = IsInRenderingThread();
  if ((!bVar18) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInRenderingThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x513,L""), bVar18)) {
    pcVar9 = (code *)swi(3);
    TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
    return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::White,"RHICmdList_Submit");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1300,"RHICmdList_Submit",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x514);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1300);
  }
  local_1e8 = in_R9D | SubmitToGPU;
  if (this->bLatchedBypass == false) {
    local_1e8 = in_R9D;
  }
  this_01 = (FRHICommandListBase *)0x0;
  FVar25 = StatPtr_STAT_ImmedCmdListExecuteTime;
  if (StatPtr_STAT_ImmedCmdListExecuteTime ==
      (FThreadSafeStaticStat<FStat_STAT_ImmedCmdListExecuteTime>)0x0) {
    pFVar24 = ::FName::FName(local_130,"STAT_ImmedCmdListExecuteTime");
    FVar25 = (FThreadSafeStaticStat<FStat_STAT_ImmedCmdListExecuteTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ImmedCmdListExecuteTime,*pFVar24,
                        L"All Command List Execute","STATGROUP_RHICMDLIST","STATCAT_Advanced",
                        L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar44 = *(FName *)FVar25;
  bVar11 = false;
  bVar19 = false;
  local_198.ComparisonIndex.Value = 0;
  local_198.Number = 0;
  FVar40 = FVar44.ComparisonIndex.Value;
  uVar50 = FVar44.Number;
  if ((FVar40.Value == 0) && (uVar50 == 0)) {
LAB_145cc2cdc:
    bVar12 = false;
    FVar44 = local_198;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1d0._s_0,(char *)*(FName *)((longlong)FVar25 + 0x10));
      bVar11 = false;
      bVar19 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a8.ComparisonIndex.Value = FVar40.Value;
        local_1a8.Number = uVar50;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)*(FName *)((longlong)FVar25 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x521);
        bVar11 = true;
        bVar19 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145cc2cdc;
    local_1f0 = FVar40.Value;
    uStack_1ec = uVar50;
    FThreadStats::AddMessage(FVar44,CycleScopeStart);
    bVar12 = true;
  }
  iVar21 = FMemStackBase::GetByteCount((FMemStackBase *)&this->CommandListImmediate);
  if ((iVar21 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_ImmedCmdListMemory,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ImmedCmdListMemory,1> *)
                        &StatPtr_STAT_ImmedCmdListMemory);
    FVar6 = *(FName *)(TVar26.StatIdPtr)->Name;
    local_1f0 = (uint)FVar6.ComparisonIndex.Value;
    uStack_1ec = FVar6.Number;
    FThreadStats::AddMessage<__int64>(FVar6,Add,(longlong)iVar21,false);
  }
  uVar50 = *(uint *)&(this->CommandListImmediate).field_0x60;
  if ((uVar50 != 0) && (FThreadStats::bPrimaryEnable != false)) {
    TVar26 = FThreadSafeStaticStatInner<FStat_STAT_ImmedCmdListCount,1>::GetStatId
                       ((FThreadSafeStaticStatInner<FStat_STAT_ImmedCmdListCount,1> *)
                        &StatPtr_STAT_ImmedCmdListCount);
    FVar6 = *(FName *)(TVar26.StatIdPtr)->Name;
    local_1f0 = (uint)FVar6.ComparisonIndex.Value;
    uStack_1ec = FVar6.Number;
    FThreadStats::AddMessage<__int64>(FVar6,Add,(ulonglong)uVar50,false);
  }
  uVar5 = *(undefined4 *)&(this->CommandListImmediate).field_0x29c;
  this_00 = ::operator_new(0x1bb0);
  if (this_00 != (FRHICommandListBase *)0x0) {
    this_01 = FRHICommandListBase::FRHICommandListBase
                        (this_00,(FRHICommandListBase *)&this->CommandListImmediate);
  }
  FRHICommandListBase::~FRHICommandListBase((FRHICommandListBase *)&this->CommandListImmediate);
  FRHICommandListBase::FRHICommandListBase
            ((FRHICommandListBase *)&this->CommandListImmediate,&this_01->PersistentState);
  *(undefined4 *)&(this->CommandListImmediate).field_0x2a0 = uVar5;
  FRHICommandListBase::FinishRecording(this_01);
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar12) && (FVar44 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar27 == (FThreadStats *)0x0) {
      pFVar28 = FThreadStatsPool::Get();
      pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
    }
    if (pFVar27->bWaitForExplicitFlush < pFVar27->ScopeCount) {
      local_150.NameAndInfo.Index = FVar44.ComparisonIndex.Value;
      local_150.NameAndInfo.Number = FVar44.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_178);
      local_150.StatData.Pad[4] = '\0';
      local_150.StatData.Pad[5] = '\0';
      local_150.StatData.Pad[6] = '\0';
      local_150.StatData.Pad[7] = '\0';
      local_150.StatData.Pad[0] = local_178.s.LowPart._0_1_;
      local_150.StatData.Pad[1] = local_178.s.LowPart._1_1_;
      local_150.StatData.Pad[2] = local_178.s.LowPart._2_1_;
      local_150.StatData.Pad[3] = local_178.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar27,&local_150);
      piVar1 = &pFVar27->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar27,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar27,false,false);
      }
    }
  }
  local_1e0.AllCmdLists = &local_1b8;
  local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.ArrayNum = 0;
  local_1b8.ArrayMax = 0;
  `FRHICommandListExecutor::Submit'::__l2::<lambda_1>::
  operator()<_FRHICommandListExecutor::Submit_::__l2::<lambda_1>_>(&local_1e0,&local_1e0,this_01);
  plVar49 = *(longlong **)CONCAT44(in_register_00000084,param_2);
  plVar29 = plVar49 + (int)((longlong *)CONCAT44(in_register_00000084,param_2))[1];
  for (; plVar49 != plVar29; plVar49 = plVar49 + 1) {
    lVar47 = *plVar49;
    puVar41 = *(undefined8 **)(lVar47 + 0x78);
    iVar21 = *(int *)(lVar47 + 0x80);
    puVar37 = puVar41 + iVar21;
    local_1d8 = lVar47;
    while( true ) {
      if (*(int *)(lVar47 + 0x80) != iVar21) {
        local_1f6[0] = 0;
        `TCheckedPointerIterator<FRHICommandListBase_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1f6);
      }
      <Var17.AllCmdLists = local_1e0.AllCmdLists;
      if (puVar41 == puVar37) break;
      `FRHICommandListExecutor::Submit'::__l2::<lambda_1>::
      operator()<_FRHICommandListExecutor::Submit_::__l2::<lambda_1>_>
                (&local_1e0,&local_1e0,(FRHICommandListBase *)*puVar41);
      puVar41 = puVar41 + 1;
    }
    pFVar7 = ((local_1e0.AllCmdLists)->AllocatorInstance).Data;
    if (((pFVar7 <= (FScriptContainerElement *)&local_1d8) &&
        ((FScriptContainerElement *)&local_1d8 <
         pFVar7 + (longlong)(local_1e0.AllCmdLists)->ArrayMax * 8)) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    iVar21 = (<Var17.AllCmdLists)->ArrayNum;
    if (iVar21 == (<Var17.AllCmdLists)->ArrayMax) {
      iVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&(<Var17.AllCmdLists)->AllocatorInstance,
                          &(<Var17.AllCmdLists)->ArrayMax);
    }
    pFVar7 = ((<Var17.AllCmdLists)->AllocatorInstance).Data;
    (<Var17.AllCmdLists)->ArrayNum = iVar21 + 1;
    *(longlong *)(pFVar7 + (longlong)iVar21 * 8) = local_1d8;
    this = (FRHICommandListExecutor *)local_170;
  }
  pFVar42 = (FSubmitState *)0x0;
  if (*(FSubmitState **)((longlong)this + 0x1c18) == (FSubmitState *)0x0) {
    pFVar30 = ::operator_new(0x18b0);
    if (pFVar30 != (FSubmitState *)0x0) {
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[0] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[1] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[2] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[3] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[4] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[5] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[6] = '\0';
      (pFVar30->TranslateEvents).AllocatorInstance.InlineData[7] = '\0';
      pTVar3 = &pFVar30->TranslateEvents;
      (pTVar3->AllocatorInstance).InlineData[8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
      pTVar3 = &pFVar30->TranslateEvents;
      (pTVar3->AllocatorInstance).InlineData[0x10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x11] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x12] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x13] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x14] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x15] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x16] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x17] = '\0';
      pTVar3 = &pFVar30->TranslateEvents;
      (pTVar3->AllocatorInstance).InlineData[0x18] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x19] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1f] = '\0';
      pFVar30->bAllowSingleParallelCombine = false;
      pFVar30->bAllowParallelTranslate = true;
      pFVar30->bEmitBreadcrumbs = false;
      pFVar30->field_0x57 = 0;
      *(undefined4 *)&pFVar30->field_0x185c = 0;
      *(undefined4 *)&pFVar30->field_0x1871 = 0;
      *(undefined2 *)&pFVar30->field_0x1875 = 0;
      pFVar30->field_0x1877 = 0;
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[0] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[1] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[2] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[3] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[4] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[5] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[6] = '\0';
      (pFVar30->ChildGraphEvents).AllocatorInstance.InlineData[7] = '\0';
      pTVar3 = &pFVar30->ChildGraphEvents;
      (pTVar3->AllocatorInstance).InlineData[8] = '\0';
      (pTVar3->AllocatorInstance).InlineData[9] = '\0';
      (pTVar3->AllocatorInstance).InlineData[10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xb] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xc] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xd] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xe] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0xf] = '\0';
      pTVar3 = &pFVar30->ChildGraphEvents;
      (pTVar3->AllocatorInstance).InlineData[0x10] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x11] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x12] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x13] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x14] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x15] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x16] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x17] = '\0';
      pTVar3 = &pFVar30->ChildGraphEvents;
      (pTVar3->AllocatorInstance).InlineData[0x18] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x19] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1a] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1b] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1c] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1d] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1e] = '\0';
      (pTVar3->AllocatorInstance).InlineData[0x1f] = '\0';
      (pFVar30->CompletionEvent).Reference = (FBaseGraphTask *)0x0;
      (pFVar30->TranslateJobs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar30->TranslateJobs).ArrayNum = 0;
      (pFVar30->TranslateJobs).ArrayMax = 0;
      (pFVar30->TranslateEvents).AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      (pFVar30->TranslateEvents).ArrayNum = 0;
      (pFVar30->TranslateEvents).ArrayMax = 4;
      pFVar30->CurrentTranslateJob = (FTranslateState *)0x0;
      pFVar30->MaxCommandsPerTranslate = 0;
      memset(&pFVar30->DrawStats,0,0x1800);
      pFVar30->SubmitFlags = None;
      (pFVar30->ResourcesToDelete).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (pFVar30->ResourcesToDelete).ArrayNum = 0;
      (pFVar30->ResourcesToDelete).ArrayMax = 0;
      pFVar30->bIncludeExtendedLifetimeResources = false;
      (pFVar30->BeginGraphEvent).Reference = (FBaseGraphTask *)0x0;
      (pFVar30->ChildGraphEvents).AllocatorInstance.SecondaryData =
           (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
      (pFVar30->ChildGraphEvents).ArrayNum = 0;
      (pFVar30->ChildGraphEvents).ArrayMax = 4;
      pFVar42 = pFVar30;
    }
    *(FSubmitState **)((longlong)this + 0x1c18) = pFVar42;
    FBaseGraphTask::CreateGraphEvent();
    pFVar32 = ((TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x1c30))->Reference;
    if (pFVar32 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar32->field_0x30 = *(int *)&pFVar32->field_0x30 + 1;
      UNLOCK();
      local_1c0 = pFVar32;
      FBaseGraphTask::DontCompleteUntil(local_1c8,(FBaseGraphTask *)&local_1c0);
    }
    pFVar32 = ((TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x1c30))->Reference;
    if (pFVar32 != local_1c8) {
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x1c30))->Reference = local_1c8;
      if (local_1c8 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&local_1c8->field_0x30 = *(int *)&local_1c8->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar32 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar2 = &pFVar32->field_0x30;
        iVar21 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (*(code *)**(undefined8 **)pFVar32)(pFVar32,1);
        }
      }
    }
    pFVar32 = ((TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x1c30))->Reference;
    pFVar52 = ((*(FSubmitState **)((longlong)this + 0x1c18))->CompletionEvent).Reference;
    if (pFVar52 != pFVar32) {
      ((*(FSubmitState **)((longlong)this + 0x1c18))->CompletionEvent).Reference = pFVar32;
      if (pFVar32 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar32->field_0x30 = *(int *)&pFVar32->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar52 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar2 = &pFVar52->field_0x30;
        iVar21 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar21 == 1) {
          (*(code *)**(undefined8 **)pFVar52)();
        }
      }
    }
    (*(FSubmitState **)((longlong)this + 0x1c18))->bEmitBreadcrumbs =
         *(bool *)((longlong)this + 0x32);
    pTVar15 = CVarRHICmdParallelTranslateEnable.Ref;
    if ((GRHIGlobals.SupportsParallelRHIExecute == false) ||
       (GRHIGlobals.TriggerGPUProfile != false)) {
LAB_145cc3244:
      (*(FSubmitState **)((longlong)this + 0x1c18))->MaxCommandsPerTranslate = 0;
      (*(FSubmitState **)((longlong)this + 0x1c18))->bAllowSingleParallelCombine = true;
      (*(FSubmitState **)((longlong)this + 0x1c18))->bAllowParallelTranslate = false;
    }
    else {
      bVar19 = IsInParallelRenderingThread();
      if ((!bVar19) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
        pcVar9 = (code *)swi(3);
        TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
        return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
      }
      pTVar16 = CVarRHICmdParallelTranslateMaxCommandsPerTranslate.Ref;
      if (pTVar15->ShadowedValue[1] == false) goto LAB_145cc3244;
      bVar19 = IsInParallelRenderingThread();
      if ((!bVar19) &&
         (bVar19 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6409875433831007955>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                              ,0x6d3,"IsInParallelRenderingThread()"), bVar19)) {
        pcVar9 = (code *)swi(3);
        TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
        return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
      }
      (*(FSubmitState **)((longlong)this + 0x1c18))->MaxCommandsPerTranslate =
           pTVar16->ShadowedValue[1];
      bVar19 = TAutoConsoleVariable<bool>::GetValueOnRenderThread
                         (&CVarRHICmdParallelTranslateCombineSingleAndParallel);
      (*(FSubmitState **)((longlong)this + 0x1c18))->bAllowSingleParallelCombine = bVar19;
      (*(FSubmitState **)((longlong)this + 0x1c18))->bAllowParallelTranslate = true;
    }
    if (local_1c8 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &local_1c8->field_0x30;
      iVar21 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar21 == 1) {
        (*(code *)**(undefined8 **)local_1c8)(local_1c8,1);
      }
    }
  }
  EVar48 = local_1e8;
  uVar50 = 0;
  EVar14 = local_1e8 & SubmitToGPU;
  EVar51 = local_1e8 & SubmitToGPU;
  if ((local_1e8 & SubmitToGPU) != None) {
    (*(FSubmitState **)((longlong)this + 0x1c18))->bIncludeExtendedLifetimeResources =
         GRHIResourceLifetimeRefCount == 0;
    (*(FSubmitState **)((longlong)this + 0x1c18))->SubmitFlags = local_1e8;
    if (((local_1e8 & DeleteResources) != None) && ((local_1e8 & FlushRHIThread) == None)) {
      FRHIResource::GatherResourcesToDelete
                (&(*(FSubmitState **)((longlong)this + 0x1c18))->ResourcesToDelete,
                 (*(FSubmitState **)((longlong)this + 0x1c18))->bIncludeExtendedLifetimeResources);
    }
  }
  if (0 < local_1b8.ArrayNum) {
    pTVar3 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)((longlong)this + 0x1c38);
    lVar47 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar50 < local_1b8.ArrayNum) {
        uVar22 = ~uVar50 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar9 = (code *)swi(3);
        TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
        return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
      }
      FVar35 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 0x20);
      lVar43 = *(longlong *)(local_1b8.AllocatorInstance.Data + lVar47);
      FVar31 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
      if (FVar35 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar31 = FVar35;
      }
      FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(lVar43 + 0xb8);
      if ((ulonglong)FVar31 <= (ulonglong)FVar4) {
        FVar31 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
        if (FVar35 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar31 = FVar35;
        }
        if (((ulonglong)FVar4 <
             (ulonglong)((longlong)FVar31 + (longlong)*(int *)((longlong)this + 0x2c) * 8)) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar19)) {
          pcVar9 = (code *)swi(3);
          TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
          return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
        }
      }
      iVar21 = *(int *)((longlong)this + 0x28);
      if (iVar21 == *(int *)((longlong)this + 0x2c)) {
        iVar21 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)this,
                            (int *)((longlong)this + 0x2c));
      }
      *(int *)((longlong)this + 0x28) = iVar21 + 1;
      FVar35 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)this;
      if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 0x20) !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar35 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 0x20);
      }
      *(undefined8 *)((longlong)FVar35 + (longlong)iVar21 * 8) = 0;
      lVar8 = *(longlong *)FVar4;
      *(longlong *)((longlong)FVar35 + (longlong)iVar21 * 8) = lVar8;
      if (lVar8 != 0) {
        LOCK();
        *(int *)(lVar8 + 0x30) = *(int *)(lVar8 + 0x30) + 1;
        UNLOCK();
      }
      local_110.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
      ;
      local_110.ArrayMax = 4;
      local_110.ArrayNum = 0;
      iVar21 = 0;
      if ((&local_110 <= (ulonglong)FVar4) &&
         ((ulonglong)FVar4 < &local_110.AllocatorInstance.SecondaryData)) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar9 = (code *)swi(3);
          TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
          return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
        }
        iVar21 = local_110.ArrayNum;
        if (local_110.ArrayNum == local_110.ArrayMax) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,&local_110.AllocatorInstance,&local_110.ArrayMax);
        }
      }
      local_110.ArrayNum = iVar21 + 1;
      FVar35 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_110;
      if (local_110.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar35 = local_110.AllocatorInstance.SecondaryData;
      }
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar35 + (longlong)iVar21 * 8))->Reference =
           (FBaseGraphTask *)0x0;
      pFVar32 = *(FBaseGraphTask **)FVar4;
      ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar35 + (longlong)iVar21 * 8))->Reference =
           pFVar32;
      if (pFVar32 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar32->field_0x30 = *(int *)&pFVar32->field_0x30 + 1;
        UNLOCK();
      }
      local_80 = (undefined ***)0x0;
      local_98[0] = &UE::Core::Private::Function::
                     TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`53'::<lambda_2>,0,0>
                     ::_vftable_;
      local_98[1] = *(undefined ***)((longlong)this + 0x1c18);
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRHICommandListExecutor::Submit'::__l53::<lambda_2>,void>::
                    Call;
      local_88 = lVar43;
      bVar19 = IsInRenderingThread();
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInRenderingThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                              ,0x300,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
        return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
      }
      if ((*(char *)((longlong)this + 0x30) != '\0') ||
         (TVar46 = (TAtomic<ENamedThreads::Type>)0x6ff,
         GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
        TVar46 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
      }
      if ((pTVar3 == &local_110) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("(void*)this != (void*)&Source",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x986,L""), bVar19)) {
        pcVar9 = (code *)swi(3);
        TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
        return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
      }
      lVar43 = (longlong)local_110.ArrayNum;
      if (local_110.ArrayNum != 0) {
        iVar21 = UE::Core::Private::
                 ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (8,8,local_110.ArrayNum,
                            (ForElementType<TRefCountPtr<FBaseGraphTask>_> *)pTVar3,
                            (int *)((longlong)this + 0x1c60),(int *)((longlong)this + 0x1c64));
        FVar35 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_110;
        if (local_110.AllocatorInstance.SecondaryData !=
            (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar35 = local_110.AllocatorInstance.SecondaryData;
        }
        pTVar38 = pTVar3;
        if (*(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              **)((longlong)this + 0x1c58) !=
            (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
             *)0x0) {
          pTVar38 = *(TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                      **)((longlong)this + 0x1c58);
        }
        memmove((pTVar38->AllocatorInstance).InlineData + (longlong)iVar21 * 8,(void *)FVar35,
                lVar43 << 3);
        local_110.ArrayNum = 0;
      }
      FTaskPipe::Enqueue((FTaskPipe *)((longlong)this + 0x1be8),(Type)TVar46,pTVar3,
                         (TFunction<void___cdecl(void)> *)local_a8);
      if (local_a8[0] != (code *)0x0) {
        pppuVar34 = local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar34 = local_80;
        }
        (*(code *)(*pppuVar34)[2])();
      }
      FVar35 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_110;
      if (local_110.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar35 = local_110.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar35,local_110.ArrayNum);
      if (local_110.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_110.AllocatorInstance.SecondaryData);
      }
      uVar50 = uVar50 + 1;
      lVar47 = lVar47 + 8;
      EVar48 = local_1e8;
    } while ((int)uVar50 < local_1b8.ArrayNum);
  }
  if (EVar51 != None) {
    cVar45 = '\0';
    pFVar32 = local_1c0;
    if (((EVar48 & EndFrame) != None) && (UE::Stats::FStats::StatsFrameRT.bIsSet != false)) {
      UE::Stats::FStats::StatsFrameRT.bIsSet = false;
      cVar45 = '\x01';
      pFVar32 = (FBaseGraphTask *)UE::Stats::FStats::StatsFrameRT.TypedValue;
    }
    pcVar9 = *(code **)((longlong)this + 0x1c18);
    pFVar52 = local_158;
    if (cVar45 != '\0') {
      pFVar52 = pFVar32;
    }
    local_78[0] = (code *)0x0;
    local_50 = FMemory::Malloc(0x28,8);
    *(FRHICommandListExecutor **)(local_50 + 1) = this;
    local_50[2] = pcVar9;
    *local_50 = (code *)&UE::Core::Private::Function::
                         TFunction_OwnedObject<`FRHICommandListExecutor::Submit'::`56'::<lambda_3>,0,1>
                         ::_vftable_;
    *(char *)(local_50 + 4) = cVar45;
    if (cVar45 != '\0') {
      local_50[3] = (code *)pFVar52;
    }
    local_e0.ArrayNum = 0;
    local_e0.ArrayMax = 4;
    if (local_50 != (code **)&DAT_fffffffffffffff8) {
      local_78[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FRHICommandListExecutor::Submit'::__l56::<lambda_3>,void>::
                    Call;
    }
    local_e0.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    bVar19 = IsInRenderingThread();
    if ((!bVar19) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x300,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    if ((*(char *)((longlong)this + 0x30) != '\0') ||
       (TVar46 = (TAtomic<ENamedThreads::Type>)0x6ff,
       GIsRunningRHIInSeparateThread_InternalUseOnly == false)) {
      TVar46 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
    }
    if (((TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)((longlong)this + 0x1c38) == &local_e0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("(void*)this != (void*)&Source",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x986,L""), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    FTaskPipe::Enqueue((FTaskPipe *)((longlong)this + 0x1be8),(Type)TVar46,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)((longlong)this + 0x1c38),(TFunction<void___cdecl(void)> *)local_78);
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)&local_e0,0);
    if (local_78[0] != (code *)0x0) {
      ppcVar36 = local_78 + 2;
      if (local_50 != (code **)0x0) {
        ppcVar36 = local_50;
      }
      (**(code **)(*ppcVar36 + 0x10))();
    }
    *(undefined8 *)((longlong)this + 0x1c18) = 0;
  }
  EVar51 = local_1e8;
  EVar48 = local_1e8 & FlushRHIThread;
  if ((EVar48 == None) &&
     ((EVar14 == None ||
      ((*(char *)((longlong)this + 0x30) == '\0' &&
       (GIsRunningRHIInSeparateThread_InternalUseOnly != false)))))) goto LAB_145cc3bb3;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHICmdList_FlushRHIThread");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1499,"RHICmdList_FlushRHIThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
               ,0x5db);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1499);
  }
  if ((*(longlong *)((longlong)this + 0x1c30) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 0x1c30) + 0xd0) == '\0')) {
    if (__CsvProfilerStat1504 == false) {
      FCsvProfilerTrace::OutputInlineStat("FlushRHIThreadTotal",_GCsvCategory_RHITFlushes.Index);
      __CsvProfilerStat1504 = true;
    }
    local_1e4 = _GCsvCategory_RHITFlushes.Index;
    FCsvProfiler::BeginStat
              ("FlushRHIThreadTotal",_GCsvCategory_RHITFlushes.Index,"CSV_FlushRHIThreadTotal");
    FVar33 = StatPtr_STAT_ExplicitWaitRHIThread;
    if (StatPtr_STAT_ExplicitWaitRHIThread ==
        (FThreadSafeStaticStat<FStat_STAT_ExplicitWaitRHIThread>)0x0) {
      pFVar24 = ::FName::FName(&local_120,"STAT_ExplicitWaitRHIThread");
      FVar33 = (FThreadSafeStaticStat<FStat_STAT_ExplicitWaitRHIThread>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitWaitRHIThread,*pFVar24,
                          L"Explicit wait for RHI thread","STATGROUP_RHICMDLIST","STATCAT_Advanced",
                          L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar44 = *(FName *)FVar33;
    bVar11 = false;
    bVar12 = false;
    local_188.ComparisonIndex.Value = 0;
    local_188.Number = 0;
    FVar40 = FVar44.ComparisonIndex.Value;
    uVar50 = FVar44.Number;
    if ((FVar40.Value == 0) && (uVar50 == 0)) {
LAB_145cc3a99:
      bVar13 = false;
      FVar44 = local_188;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_1cc.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_1cc._s_0,(char *)*(FName *)((longlong)FVar33 + 0x10));
        bVar11 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1a0.ComparisonIndex.Value = FVar40.Value;
          local_1a0.Number = uVar50;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar33 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                     ,0x5e1);
          bVar11 = true;
          bVar12 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145cc3a99;
      local_1f0 = FVar40.Value;
      uStack_1ec = uVar50;
      FThreadStats::AddMessage(FVar44,CycleScopeStart);
      bVar13 = true;
    }
    this_02 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes
              (this_02,(TRefCountPtr<FBaseGraphTask> *)((longlong)this + 0x1c30),
               (Type)ENamedThreads::FRenderThreadStatics::RenderThread_Local);
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar11) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar13) && (FVar44 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      if (pFVar27->bWaitForExplicitFlush < pFVar27->ScopeCount) {
        local_140.NameAndInfo.Index = FVar44.ComparisonIndex.Value;
        local_140.NameAndInfo.Number = FVar44.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_168);
        local_140.StatData.Pad[4] = '\0';
        local_140.StatData.Pad[5] = '\0';
        local_140.StatData.Pad[6] = '\0';
        local_140.StatData.Pad[7] = '\0';
        local_140.StatData.Pad[0] = local_168.s.LowPart._0_1_;
        local_140.StatData.Pad[1] = local_168.s.LowPart._1_1_;
        local_140.StatData.Pad[2] = local_168.s.LowPart._2_1_;
        local_140.StatData.Pad[3] = local_168.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar27,&local_140);
        piVar1 = &pFVar27->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar27,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar27,false,false);
        }
      }
    }
    FCsvProfiler::EndStat("FlushRHIThreadTotal",local_1e4);
    EVar51 = local_1e8;
  }
  WaitForTasks(this,&this->WaitOutstandingTasks);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
LAB_145cc3bb3:
  if ((EVar51 & (DisableBypass|EnableBypass)) != None) {
    if ((EVar48 == None) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAnyFlags(SubmitFlags, ERHISubmitFlags::FlushRHIThread)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x5ed,L"Must flush the RHI thread when toggling Bypass."), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    *(byte *)((longlong)this + 0x30) = (byte)(EVar51 >> 4) & 1;
  }
  if ((EVar51 & (DisableDrawEvents|EnableDrawEvents)) != None) {
    if ((EVar48 == None) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("EnumHasAnyFlags(SubmitFlags, ERHISubmitFlags::FlushRHIThread)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x5f6,L"Must flush the RHI thread when toggling draw events."), bVar19)
       ) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    if ((*(longlong *)((longlong)this + 0x1c68) != 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Breadcrumbs.CPU.Current == nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                            ,0x5f7,
                            L"Draw events can only be toggled where there are no breadcrumbs on the stack"
                           ), bVar19)) {
      pcVar9 = (code *)swi(3);
      TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
      return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
    }
    *(byte *)((longlong)this + 0x32) = (byte)(EVar51 >> 6) & 1;
  }
  if ((*(longlong *)((longlong)this + 0x88) != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Contexts[ERHIPipeline::Graphics ] == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x603,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
    return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
  }
  if ((*(longlong *)((longlong)this + 0x90) != 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Contexts[ERHIPipeline::AsyncCompute] == nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0x604,L""), bVar19)) {
    pcVar9 = (code *)swi(3);
    TVar23.Reference = (FBaseGraphTask *)(*pcVar9)();
    return (TRefCountPtr<FBaseGraphTask>)TVar23.Reference;
  }
  if ((GRHICommandList.bLatchedBypass != false) && ((*(byte *)((longlong)this + 0x2d3) & 0x20) != 0)
     ) {
    *(FRHIBreadcrumbNode **)((longlong)this + 0x118) = GRHICommandList.Breadcrumbs.CPU.Current.Node;
    *(bool *)((longlong)this + 0x130) = GRHICommandList.bEmitBreadcrumbs;
    bVar20 = 3;
    do {
      bVar10 = bVar20 & ~bVar20 + 1;
      if ((bVar10 == 1) || (bVar10 != 2)) {
        if ((bVar10 == 1) || (bVar10 != 2)) {
          *(undefined8 *)((longlong)this + 0x138) = GRHICommandList.Breadcrumbs.GPU._0_8_;
          if ((bVar10 == 1) || (bVar10 != 2)) {
            uVar39 = GRHICommandList.Breadcrumbs.GPU._0_8_;
            if ((bVar10 == 1) || (bVar10 != 2)) {
              lVar47 = 0x108;
            }
            else {
              lVar47 = 0x138;
            }
          }
          else {
            lVar47 = 0x138;
            uVar39 = GRHICommandList.Breadcrumbs.GPU._48_8_;
          }
        }
        else {
          *(undefined8 *)((longlong)this + 0x168) = GRHICommandList.Breadcrumbs.GPU._0_8_;
          lVar47 = 0x138;
          uVar39 = GRHICommandList.Breadcrumbs.GPU._48_8_;
        }
      }
      else {
        lVar47 = 0x138;
        *(undefined8 *)((longlong)this + 0x168) = GRHICommandList.Breadcrumbs.GPU._48_8_;
        uVar39 = GRHICommandList.Breadcrumbs.GPU._48_8_;
      }
      puVar37 = (undefined8 *)
                ((longlong)&(((FRHICommandListBase *)((longlong)this + 0x38))->MemManager).Top +
                lVar47);
      if (&local_118 != puVar37) {
        *puVar37 = uVar39;
        *(undefined1 *)(puVar37 + 1) = 1;
      }
      bVar20 = bVar20 & ~(~bVar20 + 1);
    } while (bVar20 != 0);
    if ((FRHIDrawStatsCategory **)((longlong)this + 0x1e8) !=
        &GRHICommandList.CurrentDrawStatsCategory) {
      *(FRHIDrawStatsCategory **)((longlong)this + 0x1e8) = GRHICommandList.CurrentDrawStatsCategory
      ;
      *(undefined1 *)((longlong)this + 0x1f0) = 1;
    }
  }
  if (GDynamicRHI != (FDynamicRHI *)0x0) {
    FRHICommandListBase::ActivatePipelines((FRHICommandListBase *)((longlong)this + 0x38),Graphics);
  }
  pFVar32 = local_160;
  *(longlong *)local_160 = 0;
  lVar47 = *(longlong *)((longlong)this + 0x1c30);
  *(longlong *)local_160 = lVar47;
  if (lVar47 != 0) {
    LOCK();
    *(int *)(lVar47 + 0x30) = *(int *)(lVar47 + 0x30) + 1;
    UNLOCK();
  }
  if (local_1b8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.AllocatorInstance.Data);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return (TRefCountPtr<FBaseGraphTask>)pFVar32;
}

// WaitForTasks @ 145ccb960

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::WaitForTasks
          (FRHICommandListExecutor *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  int *piVar1;
  int *piVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TAtomic<ENamedThreads::Type> TVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ExplicitWait> FVar13;
  FTaskGraphInterface *pFVar14;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar15;
  int iVar16;
  uint uVar17;
  FNameEntryId FVar18;
  ulonglong uVar19;
  FName FVar20;
  ulonglong uVar21;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x71b,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar16 = param_1->ArrayNum;
  piVar1 = &param_1->ArrayNum;
  if (iVar16 != 0) {
    uVar19 = 0;
    uVar21 = uVar19;
    if (0 < iVar16) {
      do {
        uVar17 = (uint)uVar19;
        uVar11 = 0;
        if ((int)uVar17 < iVar16) {
          uVar11 = ~uVar17 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        FVar3 = (param_1->AllocatorInstance).SecondaryData;
        FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
        if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar15 = FVar3;
        }
        if (*(char *)(*(longlong *)(uVar21 + (longlong)FVar15) + 0xd0) == '\0') {
          FVar13 = StatPtr_STAT_ExplicitWait;
          if (StatPtr_STAT_ExplicitWait == (FThreadSafeStaticStat<FStat_STAT_ExplicitWait>)0x0) {
            pFVar12 = ::FName::FName(&local_60,"STAT_ExplicitWait");
            FVar13 = (FThreadSafeStaticStat<FStat_STAT_ExplicitWait>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ExplicitWait,*pFVar12,
                                L"Explicit wait for tasks","STATGROUP_RHICMDLIST","STATCAT_Advanced"
                                ,L"RHICmdList",true,true,ST_int64,true,false,MCR_Invalid);
          }
          FVar20 = *(FName *)FVar13;
          bVar8 = false;
          bVar6 = false;
          local_58.ComparisonIndex.Value = 0;
          local_58.Number = 0;
          FVar18 = FVar20.ComparisonIndex.Value;
          uVar11 = FVar20.Number;
          if ((FVar18.Value == 0) && (uVar11 == 0)) {
LAB_145ccbb9f:
            bVar5 = false;
            FVar20 = local_58;
          }
          else {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              local_res10[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10))
              ;
              bVar8 = false;
              bVar6 = true;
              if (-1 < CpuChannel->Enabled) {
                local_res18.ComparisonIndex.Value = FVar18.Value;
                local_res18.Number = uVar11;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&local_res18,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x72b);
                bVar8 = true;
                bVar6 = true;
              }
            }
            if (FThreadStats::bPrimaryEnable == false) goto LAB_145ccbb9f;
            local_res20 = FVar18.Value;
            uStackX_24 = uVar11;
            FThreadStats::AddMessage(FVar20,CycleScopeStart);
            bVar5 = true;
          }
          TVar7 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
          pFVar14 = FTaskGraphInterface::Get();
          cVar9 = (**(code **)((longlong)*pFVar14 + 0x38))(pFVar14,TVar7);
          if ((cVar9 != '\0') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!FTaskGraphInterface::Get().IsThreadProcessingTasks(RenderThread_Local)"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                                  ,0x72d,L""), bVar10)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar14 = FTaskGraphInterface::Get();
          (**(code **)((longlong)*pFVar14 + 0x60))(pFVar14,param_1);
          if (bVar6) {
            FGenericPlatformMisc::EndNamedEvent();
          }
          if (bVar8) {
            FCpuProfilerTrace::OutputEndEvent();
          }
          if ((((bVar5) && (FVar20 != (FName)0x0)) &&
              (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_00 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_00 == (FThreadStats *)0x0) {
              this_01 = FThreadStatsPool::Get();
              this_00 = FThreadStatsPool::GetFromPool(this_01);
            }
            if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
              local_48.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
              local_48.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
              QueryPerformanceCounter(&local_68);
              local_48.StatData.Pad[4] = '\0';
              local_48.StatData.Pad[5] = '\0';
              local_48.StatData.Pad[6] = '\0';
              local_48.StatData.Pad[7] = '\0';
              local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
              local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
              local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
              local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
              FThreadStats::AddStatMessage(this_00,&local_48);
              piVar2 = &this_00->ScopeCount;
              *piVar2 = *piVar2 + -1;
              if (*piVar2 == 0) {
                FThreadStats::Flush(this_00,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_00,false,false);
              }
            }
          }
          break;
        }
        iVar16 = *piVar1;
        uVar19 = (ulonglong)(uVar17 + 1);
        uVar21 = uVar21 + 8;
      } while ((int)(uVar17 + 1) < iVar16);
    }
    piVar2 = &param_1->ArrayMax;
    FVar3 = (param_1->AllocatorInstance).SecondaryData;
    if (*piVar2 < 0) {
      FVar15 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1;
      if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar15 = FVar3;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar15,*piVar1);
      *piVar1 = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,0,&param_1->AllocatorInstance,0,piVar2);
      }
    }
    else {
      if (FVar3 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        param_1 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar3;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)param_1,*piVar1);
      *piVar1 = 0;
    }
  }
  return;
}

// WaitOnRHIThreadFence @ 145ccbd70

/* WARNING: Removing unreachable block (ram,0x000145ccc223) */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask> *param_1)

{
  FRHICommandListBase **ppFVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TAtomic<ENamedThreads::Type> TVar7;
  bool bVar8;
  char cVar9;
  uint *puVar10;
  FTlsAutoCleanup *pFVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_13_::FStat_STAT_WaitOnRHIThreadFence_Dispatch>
  FVar13;
  FThreadStats *pFVar14;
  FThreadStatsPool *pFVar15;
  FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_12_::FStat_STAT_WaitOnRHIThreadFence_Wait>
  FVar16;
  FTaskGraphInterface *pFVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  ulonglong uVar21;
  uint local_res8;
  uint uStackX_c;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FColor_u_0 local_res20 [2];
  FName local_110;
  FName local_108;
  FName local_100;
  FName local_f0;
  undefined1 local_e0 [16];
  LARGE_INTEGER local_d0;
  FStatMessage local_c8;
  FStatMessage local_b8;
  code *local_a8;
  uint *local_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  uint uStack_8c;
  code *local_88;
  undefined1 *local_80;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  undefined8 local_58;
  longlong lStack_50;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x702,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar10 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
  local_a0 = &local_res8;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar10);
  *(int *)(pFVar11 + 3) = *(int *)(pFVar11 + 3) + -1;
  if ((param_1->Reference == (FBaseGraphTask *)0x0) || (param_1->Reference->field_0xd0 != '\0'))
  goto LAB_145ccc496;
  uVar21 = (ulonglong)_tls_index;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS0)
     && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_WaitOnRHIThreadFence_Dispatch =
         (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_13_::FStat_STAT_WaitOnRHIThreadFence_Dispatch>
          )0x0;
    pFVar12 = ::FName::FName(&local_78,"STAT_WaitOnRHIThreadFence_Dispatch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitOnRHIThreadFence_Dispatch,*pFVar12,
               L"STAT_WaitOnRHIThreadFence_Dispatch","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar13 = StatPtr_STAT_WaitOnRHIThreadFence_Dispatch;
  if (StatPtr_STAT_WaitOnRHIThreadFence_Dispatch ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_13_::FStat_STAT_WaitOnRHIThreadFence_Dispatch>
       )0x0) {
    pFVar12 = ::FName::FName(&local_70,"STAT_WaitOnRHIThreadFence_Dispatch");
    FVar13 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_13_::FStat_STAT_WaitOnRHIThreadFence_Dispatch>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitOnRHIThreadFence_Dispatch,
                          *pFVar12,L"STAT_WaitOnRHIThreadFence_Dispatch","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar13;
  bVar8 = false;
  bVar6 = false;
  local_100.ComparisonIndex.Value = 0;
  local_100.Number = 0;
  if ((FVar20.ComparisonIndex.Value.Value == 0) && (FVar20.Number == 0)) {
LAB_145ccc002:
    bVar5 = false;
    FVar20 = local_100;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_110.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
        local_110.Number = FVar20.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_110,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x70a);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ccc002;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  local_98 = 0;
  uStack_90 = 0;
  lStack_50 = (ulonglong)uStack_8c << 0x20;
  local_58 = 0;
  Submit(&GRHICommandList,(TArrayView<FRHICommandListBase_*_const,int> *)local_e0,
         (ERHISubmitFlags)&local_58);
  if ((FRHICommandListBase **)local_e0._0_8_ != (FRHICommandListBase **)0x0) {
    LOCK();
    ppFVar1 = (FRHICommandListBase **)(local_e0._0_8_ + 0x30);
    iVar3 = *(int *)ppFVar1;
    *(int *)ppFVar1 = *(int *)ppFVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)((*(FRHICommandListBase **)local_e0._0_8_)->MemManager).Top)(local_e0._0_8_,1);
    }
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_c8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_c8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter((LARGE_INTEGER *)(local_e0 + 8));
      local_c8.StatData.Pad[4] = '\0';
      local_c8.StatData.Pad[5] = '\0';
      local_c8.StatData.Pad[6] = '\0';
      local_c8.StatData.Pad[7] = '\0';
      local_c8.StatData.Pad[0] = local_e0[8];
      local_c8.StatData.Pad[1] = local_e0[9];
      local_c8.StatData.Pad[2] = local_e0[10];
      local_c8.StatData.Pad[3] = local_e0[0xb];
      FThreadStats::AddStatMessage(pFVar14,&local_c8);
      piVar2 = &pFVar14->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
  if ((GIsRunningRHIInSeparateThread_InternalUseOnly == false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsRunningRHIInSeparateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x70d,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar21 * 8) + 0x9d4c) < ::_TSS1)
     && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    StatPtr_STAT_WaitOnRHIThreadFence_Wait =
         (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_12_::FStat_STAT_WaitOnRHIThreadFence_Wait>
          )0x0;
    pFVar12 = ::FName::FName(&local_68,"STAT_WaitOnRHIThreadFence_Wait");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitOnRHIThreadFence_Wait,*pFVar12,
               L"STAT_WaitOnRHIThreadFence_Wait","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
               true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS1);
  }
  FVar16 = StatPtr_STAT_WaitOnRHIThreadFence_Wait;
  if (StatPtr_STAT_WaitOnRHIThreadFence_Wait ==
      (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_12_::FStat_STAT_WaitOnRHIThreadFence_Wait>
       )0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_WaitOnRHIThreadFence_Wait");
    FVar16 = (FThreadSafeStaticStat<_public:_static_void___cdecl_FRHICommandListExecutor::WaitOnRHIThreadFence(TRefCountPtr<FBaseGraphTask>_&)_::_12_::FStat_STAT_WaitOnRHIThreadFence_Wait>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_WaitOnRHIThreadFence_Wait,
                          *pFVar12,L"STAT_WaitOnRHIThreadFence_Wait","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar8 = false;
  bVar6 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value == 0) && (uVar18 == 0)) {
LAB_145ccc365:
    bVar5 = false;
    FVar20 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_108.ComparisonIndex.Value = FVar19.Value;
        local_108.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_108,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                   ,0x70e);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ccc365;
    local_res8 = FVar19.Value;
    uStackX_c = uVar18;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  TVar7 = ENamedThreads::FRenderThreadStatics::RenderThread_Local;
  pFVar17 = FTaskGraphInterface::Get();
  cVar9 = (**(code **)((longlong)*pFVar17 + 0x38))(pFVar17,TVar7);
  if (cVar9 != '\0') {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  pFVar17 = FTaskGraphInterface::Get();
  FTaskGraphInterface::WaitUntilTaskCompletes(pFVar17,param_1,(Type)TVar7);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar14 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar14 == (FThreadStats *)0x0) {
      pFVar15 = FThreadStatsPool::Get();
      pFVar14 = FThreadStatsPool::GetFromPool(pFVar15);
    }
    if (pFVar14->bWaitForExplicitFlush < pFVar14->ScopeCount) {
      local_b8.NameAndInfo.Index = FVar20.ComparisonIndex.Value;
      local_b8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_d0);
      local_b8.StatData.Pad[4] = '\0';
      local_b8.StatData.Pad[5] = '\0';
      local_b8.StatData.Pad[6] = '\0';
      local_b8.StatData.Pad[7] = '\0';
      local_b8.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b8.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b8.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b8.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar14,&local_b8);
      piVar2 = &pFVar14->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(pFVar14,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar14,false,false);
      }
    }
  }
LAB_145ccc496:
  puVar10 = TThreadSingleton<UE::Stats::FThreadIdleStats>::GetTlsSlot();
  local_80 = local_res10;
  local_88 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<UE::Stats::FThreadIdleStats>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar11 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar10);
  *(int *)(pFVar11 + 3) = *(int *)(pFVar11 + 3) + 1;
  return;
}

