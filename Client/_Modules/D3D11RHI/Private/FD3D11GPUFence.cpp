// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D11RHI
// Functions: 8

// FD3D11GPUFence @ 14596c490

FD3D11GPUFence * __thiscall FD3D11GPUFence::FD3D11GPUFence(FD3D11GPUFence *this,FName param_1)

{
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GPUFence);
  this->_padding_ = (longlong)&___7FRHIGPUFence__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FD3D11GPUFence__6B_;
  *(FName *)((longlong)&this->_padding_ + 4) = param_1;
  (this->Event).Reference = (FBaseGraphTask *)0x0;
  return this;
}

// operator() @ 145970530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FD3D11GPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined1 *puVar1;
  FBaseGraphTask *pFVar2;
  TNode **ppTVar3;
  TRefCountPtr<ID3D11Query> TVar4;
  int iVar5;
  longlong lVar6;
  TNode *pTVar7;
  TRefCountPtr<ID3D11Query> local_res8;
  undefined8 local_res18 [2];
  
  lVar6 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  local_res18[0] = 0;
  local_res8.Reference = (ID3D11Query *)0x0;
  iVar5 = (**(code **)(**(longlong **)(lVar6 + 0x178) + 0xc0))
                    (*(longlong **)(lVar6 + 0x178),local_res18,&local_res8);
  if (iVar5 < 0) {
    VerifyD3D11Result(iVar5,"RHI.GetDevice()->CreateQuery(&Desc, Query.GetInitReference())",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                      ,0x731,(ID3D11Device *)0x0);
  }
  (**(code **)(**(longlong **)(lVar6 + 0x160) + 0xe0))
            (*(longlong **)(lVar6 + 0x160),local_res8.Reference);
  TVar4.Reference = local_res8.Reference;
  pFVar2 = *(FBaseGraphTask **)this;
  local_res8.Reference = (ID3D11Query *)0x0;
  *(undefined8 *)this = 0;
  pTVar7 = ::operator_new(0x18);
  if (pTVar7 == (TNode *)0x0) {
    if (TVar4.Reference != (ID3D11Query *)0x0) {
      (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
    }
    if (pFVar2 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &pFVar2->field_0x30;
      iVar5 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar5 == 1) {
        (*(code *)**(undefined8 **)pFVar2)(pFVar2,1);
      }
    }
  }
  else {
    pTVar7->NextNode = (TNode *)0x0;
    (pTVar7->Item).Event.Reference = pFVar2;
    (pTVar7->Item).Query.Reference = TVar4.Reference;
    ppTVar3 = &(FD3D11GPUFence::ActiveSyncs.Head)->NextNode;
    FD3D11GPUFence::ActiveSyncs.Head = pTVar7;
    *ppTVar3 = pTVar7;
  }
  if (local_res8.Reference != (ID3D11Query *)0x0) {
    (**(code **)((longlong)*local_res8.Reference + 0x10))();
  }
  return;
}

// operator() @ 145970650

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`FD3D11GPUFence::Wait'::__l6::<lambda_1>::operator()(void *this,FRHICommandListImmediate *param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  atomic<int> aVar2;
  atomic<int> aVar3;
  TReferenceControllerBase<1> *pTVar4;
  bool bVar5;
  
  if (*(longlong *)this == 0) {
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
  }
  else if (*(char *)(*(longlong *)this + 0xd0) == '\0') {
    FD3D11GPUFence::PollFencesUntil(*(FBaseGraphTask **)this);
  }
  pTVar4 = *(TReferenceControllerBase<1> **)((longlong)this + 0x10);
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    aVar2 = pTVar4->SharedReferenceCount;
    do {
      if (aVar2 == (atomic<int>)0x0) {
        pTVar4 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1459706b0;
      }
      LOCK();
      aVar3 = pTVar4->SharedReferenceCount;
      bVar5 = aVar2 == aVar3;
      if (bVar5) {
        pTVar4->SharedReferenceCount = (atomic<int>)((int)aVar2 + 1);
        aVar3 = aVar2;
      }
      UNLOCK();
      aVar2 = aVar3;
    } while (!bVar5);
    lpCriticalSection = *(LPCRITICAL_SECTION *)((longlong)this + 8);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      EnterCriticalSection(lpCriticalSection);
      if (lpCriticalSection[1].DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
        p_Var1 = lpCriticalSection[1].DebugInfo;
        p_Var1->Type = 0x7788;
        p_Var1->CreatorBackTraceIndex = 0x7788;
        *(undefined4 *)&p_Var1->field_0x4 = 0x77887788;
      }
      LeaveCriticalSection(lpCriticalSection);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return;
    }
  }
LAB_1459706b0:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return;
}

// Clear @ 145973900

void __thiscall FD3D11GPUFence::Clear(FD3D11GPUFence *this)

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
                    /* WARNING: Could not recover jumptable at 0x00014597392b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
      return;
    }
  }
  return;
}

// Poll @ 145986de0

bool __thiscall FD3D11GPUFence::Poll(FD3D11GPUFence *this)

{
  FBaseGraphTask *pFVar1;
  
  pFVar1 = (this->Event).Reference;
  if ((pFVar1 != (FBaseGraphTask *)0x0) && (pFVar1->field_0xd0 != '\0')) {
    return true;
  }
  return false;
}

// PollFencesUntil @ 145986e10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FD3D11GPUFence::PollFencesUntil(FBaseGraphTask *param_1)

{
  undefined1 *puVar1;
  FTaskBase *this;
  TNode *pTVar2;
  FBaseGraphTask *pFVar3;
  ID3D11Query *pIVar4;
  TNode *pTVar5;
  int iVar6;
  longlong lVar7;
  FD3D11Sync *pFVar8;
  TRefCountPtr<ID3D11Query> *pTVar9;
  int local_res8 [2];
  longlong local_38;
  longlong local_30;
  
  lVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  do {
    pFVar8 = (FD3D11Sync *)0x0;
    if ((ActiveSyncs.Tail)->NextNode != (TNode *)0x0) {
      pFVar8 = &(ActiveSyncs.Tail)->NextNode->Item;
    }
    if (pFVar8 == (FD3D11Sync *)0x0) {
      if (param_1 == (FBaseGraphTask *)0x0) {
        return;
      }
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogD3D11RHI);
      return;
    }
LAB_145986e80:
    local_res8[0] = 0;
    iVar6 = (**(code **)(**(longlong **)(lVar7 + 0x160) + 0xe8))
                      (*(longlong **)(lVar7 + 0x160),(pFVar8->Query).Reference,local_res8,4,
                       param_1 == (FBaseGraphTask *)0x0);
    if (iVar6 == 1) {
LAB_145986eb9:
      if (param_1 == (FBaseGraphTask *)0x0) {
        return;
      }
      goto LAB_145986e80;
    }
    if (iVar6 == 0) {
      if (local_res8[0] != 0) goto LAB_145986ee5;
      goto LAB_145986eb9;
    }
    if (iVar6 < 0) {
      VerifyD3D11Result(iVar6,"Result",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Windows\\D3D11RHI\\Private\\D3D11Commands.cpp"
                        ,0x712,(ID3D11Device *)0x0);
    }
LAB_145986ee5:
    this = (FTaskBase *)(pFVar8->Event).Reference;
    if (this->ExtendedPriority == TaskEvent) {
      LOCK();
      this->RefCount = (atomic<unsigned_int>)((int)this->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this,0);
    pTVar5 = ActiveSyncs.Tail;
    pTVar2 = (ActiveSyncs.Tail)->NextNode;
    if (pTVar2 != (TNode *)0x0) {
      pFVar8 = &pTVar2->Item;
      ActiveSyncs.Tail = pTVar2;
      if (pFVar8 != (FD3D11Sync *)&local_38) {
        pFVar3 = (pFVar8->Event).Reference;
        (pFVar8->Event).Reference = (FBaseGraphTask *)0x0;
        if (pFVar3 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &pFVar3->field_0x30;
          iVar6 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
          }
        }
      }
      pTVar9 = &(pTVar2->Item).Query;
      if (pTVar9 != (TRefCountPtr<ID3D11Query> *)&local_30) {
        pIVar4 = pTVar9->Reference;
        pTVar9->Reference = (ID3D11Query *)0x0;
        if (pIVar4 != (ID3D11Query *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))();
        }
      }
      if (pTVar5 != (TNode *)0x0) {
        pIVar4 = (pTVar5->Item).Query.Reference;
        if (pIVar4 != (ID3D11Query *)0x0) {
          (**(code **)((longlong)*pIVar4 + 0x10))();
        }
        pFVar3 = (pTVar5->Item).Event.Reference;
        if (pFVar3 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &pFVar3->field_0x30;
          iVar6 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar6 == 1) {
            (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
          }
        }
        ::operator_delete(pTVar5,0x18);
      }
    }
    if (this == (FTaskBase *)param_1) {
      return;
    }
  } while( true );
}

// Wait @ 1459a0ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FD3D11GPUFence::Wait(FD3D11GPUFence *this,FRHICommandListImmediate *param_1,FRHIGPUMask param_2)

{
  atomic<int> *paVar1;
  undefined1 *puVar2;
  atomic<int> aVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  _RTL_CRITICAL_SECTION *p_Var7;
  bool bVar8;
  TReferenceControllerBase<1> *pTVar9;
  undefined8 *puVar10;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined1 auStack_78 [32];
  _RTL_CRITICAL_SECTION_DEBUG local_58;
  
  local_58._32_8_ = __security_cookie.value ^ (ulonglong)auStack_78;
  pFVar5 = (this->Event).Reference;
  if ((pFVar5 != (FBaseGraphTask *)0x0) && (pFVar5->field_0xd0 == '\0')) {
    local_58.Type = 0x3344;
    local_58.CreatorBackTraceIndex = 0x3344;
    local_58._4_4_ = 0x33443344;
    pTVar9 = ::operator_new(0x40);
    if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
      pTVar9 = (TReferenceControllerBase<1> *)0x0;
      lpCriticalSection = (LPCRITICAL_SECTION)&DAT_00000010;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
    }
    else {
      pTVar9->SharedReferenceCount = (atomic<int>)0x1;
      pTVar9->WeakReferenceCount = (atomic<int>)0x1;
      pTVar9->_padding_ =
           (longlong)
           &SharedPointerInternals::
            TIntrusiveReferenceController<`FD3D11GPUFence::Wait'::`5'::FDebugScope,1>::_vftable_;
      pTVar9[1]._padding_ = 0;
      pTVar9[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar9[2]._padding_ = 0;
      pTVar9[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar9[3]._padding_ = 0;
      pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar9 + 1),4000);
      lpCriticalSection = (LPCRITICAL_SECTION)(pTVar9 + 1);
      pTVar9[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar9[3].WeakReferenceCount = (atomic<int>)0x0;
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      LOCK();
      pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
      UNLOCK();
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
      if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L"");
        if (bVar8) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
    lpCriticalSection[1].DebugInfo = &local_58;
    if (pTVar9 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar9->WeakReferenceCount = (atomic<int>)((int)pTVar9->WeakReferenceCount + 1);
      UNLOCK();
    }
    pFVar5 = (this->Event).Reference;
    if (pFVar5 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
      UNLOCK();
    }
    local_58.CriticalSection = (_RTL_CRITICAL_SECTION *)pFVar5;
    local_58.ProcessLocksList.Flink = (_LIST_ENTRY *)lpCriticalSection;
    local_58.ProcessLocksList.Blink = (_LIST_ENTRY *)pTVar9;
    if (((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
       (param_1->field_0x64 == '\0')) {
      puVar10 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x30,8);
      *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
      **(undefined8 **)&param_1->field_0x30 = puVar10;
      *(undefined8 **)&param_1->field_0x30 = puVar10 + 1;
      puVar10[1] = 0;
      puVar10[2] = pFVar5;
      *puVar10 = &TRHILambdaCommand<FRHICommandListImmediate,`FD3D11GPUFence::Wait'::`6'::<lambda_1>_>
                  ::_vftable_;
      local_58.ProcessLocksList.Blink = (_LIST_ENTRY *)0x0;
      local_58.ProcessLocksList.Flink = (_LIST_ENTRY *)0x0;
      local_58.CriticalSection = (_RTL_CRITICAL_SECTION *)0x0;
      puVar10[3] = lpCriticalSection;
      puVar10[4] = pTVar9;
      puVar10[5] = L"TRHILambdaCommand";
    }
    else {
      `FD3D11GPUFence::Wait'::__l6::<lambda_1>::operator()(&local_58.CriticalSection,param_1);
    }
    p_Var7 = local_58.CriticalSection;
    if ((TReferenceControllerBase<1> *)local_58.ProcessLocksList.Blink !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = (atomic<int> *)((longlong)local_58.ProcessLocksList.Blink + 0xc);
      aVar3 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar3 == (atomic<int>)0x1) {
        (**(code **)((longlong)(local_58.ProcessLocksList.Blink)->Flink + 8))
                  (local_58.ProcessLocksList.Blink,1);
      }
    }
    if ((FBaseGraphTask *)p_Var7 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = (undefined1 *)((longlong)p_Var7 + 0x30);
      iVar4 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)p_Var7)(p_Var7,1);
      }
    }
    FRHICommandListImmediate::ImmediateFlush(param_1,DispatchToRHIThread,None);
    UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport((FTaskBase *)(this->Event).Reference)
    ;
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    local_58.Type = 0x5566;
    local_58.CreatorBackTraceIndex = 0x5566;
    local_58._4_4_ = 0x55665566;
    LeaveCriticalSection(lpCriticalSection);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  }
  return;
}

// WriteGPUFence_TopOfPipe @ 1459a1270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FD3D11GPUFence::WriteGPUFence_TopOfPipe(FD3D11GPUFence *this,FRHICommandListBase *param_1)

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
    if (this_01 == (FTaskBase *)0x0) goto LAB_1459a132d;
    LOCK();
    paVar1 = &this_01->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1459a132d;
    puVar7 = (undefined8 *)this_01->_padding_;
  }
  else {
    pFVar5 = (FTaskBase *)pTVar10->Reference;
    pTVar10->Reference = (FBaseGraphTask *)this_01;
    if (pFVar5 == (FTaskBase *)0x0) goto LAB_1459a132d;
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 != (atomic<unsigned_int>)0x1) goto LAB_1459a132d;
    puVar7 = (undefined8 *)pFVar5->_padding_;
    this_01 = pFVar5;
  }
  (*(code *)*puVar7)(this_01,1);
LAB_1459a132d:
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
         &TRHILambdaCommand<FRHICommandListBase,`FD3D11GPUFence::WriteGPUFence_TopOfPipe'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar8[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
    pFVar8[1]._padding_ = (longlong)pFVar6;
  }
  else {
    `FD3D11GPUFence::WriteGPUFence_TopOfPipe'::__l2::<lambda_1>::operator()(&local_res8,param_1);
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

