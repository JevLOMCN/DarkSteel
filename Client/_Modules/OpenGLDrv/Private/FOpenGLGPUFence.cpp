// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 7

// FOpenGLGPUFence @ 145be1590

FOpenGLGPUFence * __thiscall FOpenGLGPUFence::FOpenGLGPUFence(FOpenGLGPUFence *this,FName param_1)

{
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GPUFence);
  this->_padding_ = (longlong)&___7FRHIGPUFence__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOpenGLGPUFence__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = param_1;
  (this->Event).Reference = (FBaseGraphTask *)0x0;
  return this;
}

// operator() @ 145bedb20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FOpenGLGPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  TNode **ppTVar4;
  HGLRC pHVar5;
  __GLsync *p_Var6;
  TNode *pTVar7;
  
  pHVar5 = wglGetCurrentContext();
  if (pHVar5 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
    IsInRHIThread();
    IsInRenderingThread();
    IsInGameThread();
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  }
  p_Var6 = (*glFenceSync)(0x9117,0);
  pFVar3 = *(FBaseGraphTask **)this;
  *(undefined8 *)this = 0;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 == (TNode *)0x0) {
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
  }
  else {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).Event.Reference = pFVar3;
    (pTVar7->Item).GLSync = p_Var6;
    ppTVar4 = &(FOpenGLGPUFence::ActiveSyncs.Head)->NextNode;
    FOpenGLGPUFence::ActiveSyncs.Head = pTVar7;
    *ppTVar4 = pTVar7;
  }
  return;
}

// Clear @ 145bf5cb0

void __thiscall FOpenGLGPUFence::Clear(FOpenGLGPUFence *this)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  
  pFVar3 = (this->Event).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->Event).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar3->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000145bf5cdb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      return;
    }
  }
  return;
}

// Poll @ 145c16080

bool __thiscall FOpenGLGPUFence::Poll(FOpenGLGPUFence *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->Event).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 != '\0')) {
    return true;
  }
  return false;
}

// PollFencesUntil @ 145c160b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FOpenGLGPUFence::PollFencesUntil(FBaseGraphTask *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  FTaskBase *this;
  TNode *pTVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  TNode *pTVar7;
  bool bVar8;
  uint uVar9;
  HGLRC pHVar10;
  FGLSync *pFVar11;
  longlong local_18 [2];
  
  pHVar10 = wglGetCurrentContext();
  if ((pHVar10 == (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) ||
     (param_1 != (FBaseGraphTask *)0x0)) {
    pHVar10 = wglGetCurrentContext();
    if (pHVar10 != (HGLRC)(FPlatformOpenGLDevice::Singleton->RenderingContext).OpenGLContext) {
      IsInRHIThread();
      IsInRenderingThread();
      IsInGameThread();
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    }
    do {
      pFVar11 = (FGLSync *)0x0;
      if ((ActiveSyncs.Tail)->NextNode != (TNode *)0x0) {
        pFVar11 = &(ActiveSyncs.Tail)->NextNode->Item;
      }
      if (pFVar11 == (FGLSync *)0x0) {
        if (param_1 == (FBaseGraphTask *)0x0) {
          return;
        }
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Target",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\OpenGLDrv\\Private\\OpenGLQuery.cpp"
                           ,0x37e,
                           L"Attempt to poll for a specific fence, but it was not found in the queue."
                          );
        if (!bVar8) {
          return;
        }
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = (pFVar11->Event).Reference;
      uVar9 = (*glClientWaitSync)(pFVar11->GLSync,0,(ulonglong)(pFVar3 != param_1) - 1);
      if (uVar9 != 0x911a) {
        if (uVar9 == 0x911b) {
          return;
        }
        if (uVar9 != 0x911c) {
          UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogOpenGL);
          return;
        }
      }
      this = (FTaskBase *)(pFVar11->Event).Reference;
      if (this->ExtendedPriority == TaskEvent) {
        LOCK();
        this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
        UNLOCK();
      }
      UE::Tasks::Private::FTaskBase::TryLaunch(this,0);
      (*glDeleteSync)(pFVar11->GLSync);
      pTVar7 = ActiveSyncs.Tail;
      pTVar4 = (ActiveSyncs.Tail)->NextNode;
      if (pTVar4 != (TNode *)0x0) {
        pFVar11 = &pTVar4->Item;
        local_18[1] = 0;
        local_18[0] = 0;
        ActiveSyncs.Tail = pTVar4;
        if (pFVar11 != (FGLSync *)local_18) {
          pFVar5 = (pFVar11->Event).Reference;
          (pFVar11->Event).Reference = (FBaseGraphTask *)0x0;
          if (pFVar5 != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar1 = &pFVar5->field_0x30;
            iVar2 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (*(code *)**(undefined8 **)pFVar5)();
            }
          }
        }
        (pTVar4->Item).GLSync = (__GLsync *)0x0;
        if (pTVar7 != (TNode *)0x0) {
          pFVar5 = (pTVar7->Item).Event.Reference;
          if (pFVar5 != (FBaseGraphTask *)0x0) {
            LOCK();
            puVar1 = &pFVar5->field_0x30;
            iVar2 = *(int *)puVar1;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UNLOCK();
            if (iVar2 == 1) {
              (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
            }
          }
          ::operator_delete(pTVar7,0x18);
        }
      }
    } while (pFVar3 != param_1);
  }
  return;
}

// Wait @ 145c385b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FOpenGLGPUFence::Wait(FOpenGLGPUFence *this,FRHICommandListImmediate *param_1,FRHIGPUMask param_2)

{
  undefined1 *puVar1;
  int iVar2;
  FBaseGraphTask *pFVar3;
  undefined8 *puVar4;
  
  pFVar3 = (this->Event).Reference;
  if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
    pFVar3 = (this->Event).Reference;
    if (pFVar3 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar3->field_0x30 = *(int *)&pFVar3->field_0x30 + 1;
      UNLOCK();
    }
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar4 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar4;
      *(undefined8 **)&param_1->field_0x30 = puVar4 + 1;
      *puVar4 = &TRHILambdaCommand<FRHICommandListImmediate,`FOpenGLGPUFence::Wait'::`5'::<lambda_1>_>
                 ::_vftable_;
      puVar4[3] = L"TRHILambdaCommand";
      puVar4[1] = 0;
      puVar4[2] = pFVar3;
    }
    else {
      if (pFVar3->field_0xd0 == '\0') {
        PollFencesUntil(pFVar3);
      }
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
    }
    FRHICommandListImmediate::ImmediateFlush(param_1,DispatchToRHIThread,None);
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)(this->Event).Reference)
    ;
  }
  return;
}

// WriteGPUFence_TopOfPipe @ 145c38b00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FOpenGLGPUFence::WriteGPUFence_TopOfPipe(FOpenGLGPUFence *this,FRHICommandListBase *param_1)

{
  atomic<unsigned_int> *paVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FTaskBase *pFVar5;
  FBaseGraphTask *pFVar6;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *this_00;
  FTaskBase *this_01;
  undefined8 *puVar7;
  FRHICommandBase *pFVar8;
  FBaseGraphTask *pFVar9;
  TRefCountPtr<FBaseGraphTask> *pTVar10;
  FBaseGraphTask *local_res8;
  longlong local_28 [2];
  
  this_00 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(this_00);
  if (this_01 == (FTaskBase *)0x0) {
    this_01 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_01,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_01->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)this_01->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphEvent",Default,TaskEvent,None);
  }
  pFVar9 = (FBaseGraphTask *)0x0;
  pTVar10 = &this->Event;
  if (pTVar10 == (TRefCountPtr<FBaseGraphTask> *)local_28) {
    if (this_01 == (FTaskBase *)0x0) goto LAB_145c38bbd;
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145c38bbd;
    puVar7 = (undefined8 *)this_01->_padding_;
  }
  else {
    pFVar5 = (FTaskBase *)pTVar10->Reference;
    pTVar10->Reference = (FBaseGraphTask *)this_01;
    if (pFVar5 == (FTaskBase *)0x0) goto LAB_145c38bbd;
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_145c38bbd;
    puVar7 = (undefined8 *)pFVar5->_padding_;
    this_01 = pFVar5;
  }
  (*(code *)*puVar7)(this_01,1);
LAB_145c38bbd:
  pFVar6 = pTVar10->Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar6->field_0x30 = *(int *)&pFVar6->field_0x30 + 1;
    UNLOCK();
  }
  local_res8 = pFVar6;
  if (((GRHICommandList.bLatchedBypass == false) || ((param_1->PersistentState).bImmediate == '\0'))
     && (param_1->bExecuting == false)) {
    pFVar8 = FMemStackBase::Alloc(&param_1->MemManager,0x20,8);
    param_1->NumCommands = param_1->NumCommands + 1;
    *param_1->CommandLink = pFVar8;
    param_1->CommandLink = &pFVar8->Next;
    pFVar8->Next = (FRHICommandBase *)0x0;
    pFVar8->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FOpenGLGPUFence::WriteGPUFence_TopOfPipe'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar8[1]._padding_ = (longlong)pFVar6;
  }
  else {
    `FOpenGLGPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()(&local_res8,param_1);
    pFVar9 = local_res8;
  }
  if (pFVar9 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar2 = &pFVar9->field_0x30;
    iVar4 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
    }
  }
  return;
}

