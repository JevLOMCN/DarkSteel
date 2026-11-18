// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 4

// Close @ 145c94030

/* WARNING: Enum "Type": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall FRHICommandListExecutor::FTaskPipe::Close(FTaskPipe *this)

{
  FBaseGraphTask *pFVar1;
  FBaseGraphTask *in_RDX;
  
  if (this->Current != (FTask *)0x0) {
    FTask::Release(this->Current);
    this->Current = (FTask *)0x0;
  }
  pFVar1 = (this->LastEvent).Reference;
  *(FBaseGraphTask **)in_RDX = pFVar1;
  if (pFVar1 != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&pFVar1->field_0x30 = *(int *)&pFVar1->field_0x30 + 1;
    UNLOCK();
  }
  return (TRefCountPtr<FBaseGraphTask>)in_RDX;
}

// Enqueue @ 145c9d8e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FTaskPipe::Enqueue
          (FTaskPipe *this,Type param_1,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2,TFunction<void___cdecl(void)> *param_3)

{
  TOptional<ENamedThreads::Type> *pTVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined8 *puVar4;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar5;
  atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> this_00;
  FBaseGraphTask *pFVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> aVar13;
  TRefCountPtr<FBaseGraphTask> TVar14;
  atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> aVar15;
  TRefCountPtr<FBaseGraphTask> *pTVar16;
  undefined8 *local_res8;
  int local_res10 [2];
  FBaseGraphTask *local_48 [2];
  
  pTVar1 = &this->LastThread;
  aVar15 = (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0;
  if ((this->LastThread).bIsSet == true) {
    bVar9 = pTVar1->TypedValue != param_1;
  }
  else {
    bVar9 = true;
  }
  if (bVar9) {
    if (this->Current != (FTask *)0x0) {
      FTask::Release(this->Current);
      this->Current = (FTask *)0x0;
    }
    local_48[0] = (this->LastEvent).Reference;
    if (local_48[0] != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_48[0]->field_0x30 = *(int *)&local_48[0]->field_0x30 + 1;
      UNLOCK();
      if (local_48[0] != (FBaseGraphTask *)0x0) {
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
        if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar12 = FVar5;
        }
        if ((ulonglong)FVar12 <= local_48) {
          FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
          if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar12 = FVar5;
          }
          if ((local_48 < (FBaseGraphTask **)((longlong)FVar12 + (longlong)param_2->ArrayMax * 8))
             && (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        iVar10 = param_2->ArrayNum;
        if (iVar10 == param_2->ArrayMax) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                             (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar10 + 1;
        FVar5 = (param_2->AllocatorInstance).SecondaryData;
        FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_2;
        if (FVar5 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar12 = FVar5;
        }
        puVar4 = (undefined8 *)((longlong)FVar12 + (longlong)iVar10 * 8);
        *puVar4 = 0;
        *puVar4 = local_48[0];
        if (local_48[0] != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&local_48[0]->field_0x30 = *(int *)&local_48[0]->field_0x30 + 1;
          UNLOCK();
        }
      }
    }
    if ((TOptional<ENamedThreads::Type> *)local_res10 != pTVar1) {
      pTVar1->TypedValue = param_1;
      (this->LastThread).bIsSet = true;
    }
    if (local_48[0] != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &local_48[0]->field_0x30;
      iVar10 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if ((iVar10 == 1) && (local_48[0] != (FBaseGraphTask *)0x0)) {
        (*(code *)**(undefined8 **)local_48[0])(local_48[0],1);
      }
    }
  }
  this_00 = (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)this->Current;
  uVar11 = FLockFreePointerListLIFORoot<64,1>::Pop
                     ((FLockFreePointerListLIFORoot<64,1> *)&FTask::MemoryPool);
  aVar13 = aVar15;
  if (uVar11 != 0) {
    aVar13 = *(atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> *)
              &FLockFreeLinkPolicy::LinkAllocator.Pages[uVar11 >> 0xe][uVar11 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar11);
  }
  if ((aVar13 != (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0) ||
     (aVar13 = (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)FMemory::Malloc(0x80,0x10),
     aVar13 != (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0)) {
    aVar15 = aVar13;
    *(undefined8 *)aVar15 = *(undefined8 *)param_3;
    *(undefined8 *)((longlong)aVar15 + 0x28) = *(undefined8 *)&param_3->field_0x28;
    *(undefined8 *)&param_3->field_0x28 = 0;
    uVar8 = *(undefined8 *)&param_3->field_0x18;
    *(undefined8 *)((longlong)aVar15 + 0x10) = *(undefined8 *)&param_3->field_0x10;
    *(undefined8 *)((longlong)aVar15 + 0x18) = uVar8;
    *(undefined8 *)((longlong)aVar15 + 0x20) = *(undefined8 *)&param_3->field_0x20;
    if (*(longlong *)aVar15 != 0) {
      *(undefined8 *)param_3 = 0;
    }
    *(undefined8 *)((longlong)aVar15 + 0x50) = 0;
    if ((param_2->AllocatorInstance).SecondaryData ==
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      memmove((void *)((longlong)aVar15 + 0x30),param_2,0x20);
    }
    if (*(void **)((longlong)aVar15 + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)aVar15 + 0x50));
    }
    *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)aVar15 + 0x50) =
         (param_2->AllocatorInstance).SecondaryData;
    (param_2->AllocatorInstance).SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    *(int *)((longlong)aVar15 + 0x58) = param_2->ArrayNum;
    *(int *)((longlong)aVar15 + 0x5c) = param_2->ArrayMax;
    param_2->ArrayNum = 0;
    param_2->ArrayMax = 4;
    *(undefined8 *)((longlong)aVar15 + 0x60) = 0;
    *(undefined4 *)((longlong)aVar15 + 0x68) = 2;
    *(Type *)((longlong)aVar15 + 0x70) = param_1;
    *(Type *)((longlong)aVar15 + 0x6c) = param_1;
    if ((GIsRunningRHIInTaskThread_InternalUseOnly != false) && (param_1 == MainQueue)) {
      *(undefined4 *)((longlong)aVar15 + 0x70) = 0x4ff;
    }
  }
  this->Current = (FTask *)aVar15;
  if (this_00 != (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0) {
    LOCK();
    aVar13 = *(atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> *)((longlong)this_00 + 0x60);
    bVar9 = aVar13 == (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0;
    if (bVar9) {
      *(atomic<FRHICommandListExecutor::FTaskPipe::FTask_*> *)((longlong)this_00 + 0x60) = aVar15;
      aVar13 = (atomic<FRHICommandListExecutor::FTaskPipe::FTask_*>)0x0;
    }
    UNLOCK();
    if (bVar9) {
      FTask::Release((FTask *)this_00);
      return;
    }
    if ((aVar13 != this_00) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Expected == Existing",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x28b,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FTask::Release((FTask *)this_00);
  }
  TVar14 = LaunchTask(this,(FTask *)&local_res8);
  pTVar16 = &this->LastEvent;
  if ((FBaseGraphTask *)pTVar16 != TVar14.Reference) {
    pFVar6 = pTVar16->Reference;
                    /* WARNING: Load size is inaccurate */
    pTVar16->Reference = *TVar14.Reference;
    *(undefined8 *)TVar14.Reference = 0;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar2 = &pFVar6->field_0x30;
      iVar10 = *(int *)puVar2;
      *(int *)puVar2 = *(int *)puVar2 + -1;
      UNLOCK();
      if (iVar10 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
  }
  if (local_res8 != (undefined8 *)0x0) {
    LOCK();
    piVar3 = (int *)(local_res8 + 6);
    iVar10 = *piVar3;
    *piVar3 = *piVar3 + -1;
    UNLOCK();
    if ((iVar10 == 1) && (local_res8 != (undefined8 *)0x0)) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  return;
}

// Execute @ 145ca0560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145ca069b) */
/* WARNING: Removing unreachable block (ram,0x000145ca06a1) */
/* WARNING: Removing unreachable block (ram,0x000145ca06aa) */
/* WARNING: Removing unreachable block (ram,0x000145ca06b0) */
/* WARNING: Removing unreachable block (ram,0x000145ca06b9) */
/* WARNING: Removing unreachable block (ram,0x000145ca06c2) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListExecutor::FTaskPipe::Execute
          (FTaskPipe *this,FTask *param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  FBaseGraphTask *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  undefined8 uVar7;
  atomic<void_*> aVar8;
  FIndexedLockFreeLink *pFVar9;
  TRefCountPtr<FBaseGraphTask> *pTVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined1 auStack_a8 [32];
  undefined1 local_88 [8];
  undefined8 *local_80;
  TRefCountPtr<FBaseGraphTask> *local_78;
  undefined8 *local_70;
  undefined1 local_68 [20];
  undefined1 local_54;
  FScopedRHIThreadOwnership local_50;
  uchar local_4f;
  byte local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_a8;
  local_48 = 0;
  local_78 = param_2;
  if (param_1->LogicalThread == MainQueue) {
    local_68._0_8_ = &GRHIThreadOnTasksCritical;
    EnterCriticalSection((LPCRITICAL_SECTION)&GRHIThreadOnTasksCritical);
    local_54 = 0;
    local_4f = '\0';
    if (GIsRunningRHIInTaskThread_InternalUseOnly != false) {
      FTaskTagScope::FTaskTagScope((FTaskTagScope *)(local_68 + 8),ERhiThread);
      local_54 = 1;
      if (local_4f != '\0') {
        FScopedRHIThreadOwnership::~FScopedRHIThreadOwnership(&local_50);
      }
      local_50.bCondition = true;
      FGenericPlatformMisc::BeginNamedEvent(&FColor::Red,"RHIAcquireThreadOwnership");
      if (-1 < CpuChannel->Enabled) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&`public:___cdecl_FScopedRHIThreadOwnership::FScopedRHIThreadOwnership(bool)___ptr64'
                    ::__l5::__CpuProfilerEventSpecId1509,"RHIAcquireThreadOwnership",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DynamicRHI.h"
                   ,0x5e5);
        FCpuProfilerTrace::OutputBeginEvent
                  (`public:___cdecl_FScopedRHIThreadOwnership::FScopedRHIThreadOwnership(bool)___ptr64'
                   ::__l5::__CpuProfilerEventSpecId1509);
        (**(code **)(GDynamicRHI->_padding_ + 0x2f0))();
        FCpuProfilerTrace::OutputEndEvent();
        FGenericPlatformMisc::EndNamedEvent();
        local_4f = '\x01';
        local_48 = 2;
        goto LAB_145ca06f0;
      }
      (**(code **)(GDynamicRHI->_padding_ + 0x2f0))();
      FGenericPlatformMisc::EndNamedEvent();
      local_4f = '\x01';
    }
    local_48 = 2;
  }
  else if ((TAtomic<ENamedThreads::Type>)param_1->LogicalThread !=
           ENamedThreads::FRenderThreadStatics::RenderThread_Local) {
    FTaskTagScope::FTaskTagScope((FTaskTagScope *)local_68,EParallelRhiThread);
    local_48 = 1;
  }
LAB_145ca06f0:
  while( true ) {
    iVar3 = *(int *)((longlong)param_1 + 0x58);
    if (iVar3 != 0) {
      plVar11 = (longlong *)((longlong)param_1 + 0x30);
      if (*(longlong **)((longlong)param_1 + 0x50) != (longlong *)0x0) {
        plVar11 = *(longlong **)((longlong)param_1 + 0x50);
      }
      plVar2 = plVar11 + iVar3;
      while( true ) {
        if (*(int *)((longlong)param_1 + 0x58) != iVar3) {
          local_88[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FBaseGraphTask>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_88);
        }
        if (plVar11 == plVar2) break;
        if ((*plVar11 != 0) && (*(char *)(*plVar11 + 0xd0) == '\0')) {
          LaunchTask(this,(FTask *)&local_80);
          this_00 = local_78->Reference;
          local_70 = local_80;
          if (local_80 != (undefined8 *)0x0) {
            LOCK();
            *(int *)(local_80 + 6) = *(int *)(local_80 + 6) + 1;
            UNLOCK();
          }
          FBaseGraphTask::DontCompleteUntil(this_00,(FBaseGraphTask *)&local_70);
          if (local_80 != (undefined8 *)0x0) {
            LOCK();
            piVar1 = (int *)(local_80 + 6);
            iVar3 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if ((iVar3 == 1) && (local_80 != (undefined8 *)0x0)) {
              (**(code **)*local_80)(local_80,1);
            }
          }
          goto LAB_145ca08b7;
        }
        plVar11 = plVar11 + 1;
      }
    }
    UE::Core::Private::Function::CheckCallable(*(void **)param_1);
    pcVar4 = *(code **)param_1;
    plVar11 = *(longlong **)((longlong)param_1 + 0x28);
    if (*(longlong **)((longlong)param_1 + 0x28) == (longlong *)0x0) {
      plVar11 = (longlong *)((longlong)param_1 + 0x10);
    }
    uVar7 = (**(code **)(*plVar11 + 8))();
    (*pcVar4)(uVar7);
    LOCK();
    aVar8 = *(atomic<void_*> *)((longlong)param_1 + 0x60);
    bVar5 = aVar8 == (atomic<void_*>)0x0;
    if (bVar5) {
      *(atomic<void_*> *)((longlong)param_1 + 0x60) = (atomic<void_*>)param_1;
      aVar8 = (atomic<void_*>)0x0;
    }
    UNLOCK();
    if (bVar5) {
      aVar8 = (atomic<void_*>)0x0;
    }
    LOCK();
    plVar11 = (longlong *)((longlong)param_1 + 0x68);
    iVar3 = *(int *)plVar11;
    *(int *)plVar11 = *(int *)plVar11 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      pTVar10 = (TRefCountPtr<FBaseGraphTask> *)((longlong)param_1 + 0x30);
      if (*(TRefCountPtr<FBaseGraphTask> **)((longlong)param_1 + 0x50) !=
          (TRefCountPtr<FBaseGraphTask> *)0x0) {
        pTVar10 = *(TRefCountPtr<FBaseGraphTask> **)((longlong)param_1 + 0x50);
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar10,*(int *)((longlong)param_1 + 0x58));
      if (*(void **)((longlong)param_1 + 0x50) != (void *)0x0) {
        FMemory::Free(*(void **)((longlong)param_1 + 0x50));
      }
      if (*(longlong *)param_1 != 0) {
        plVar11 = *(longlong **)((longlong)param_1 + 0x28);
        if (*(longlong **)((longlong)param_1 + 0x28) == (longlong *)0x0) {
          plVar11 = (longlong *)((longlong)param_1 + 0x10);
        }
        (**(code **)(*plVar11 + 0x10))();
      }
      uVar6 = FLockFreeLinkPolicy::AllocLockFreeLink();
      if (uVar6 == 0) {
        pFVar9 = (FIndexedLockFreeLink *)0x0;
      }
      else {
        pFVar9 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar6 >> 0xe] + (uVar6 & 0x3fff);
      }
      pFVar9->Payload = (atomic<void_*>)param_1;
      FLockFreePointerListLIFORoot<64,1>::Push
                ((FLockFreePointerListLIFORoot<64,1> *)&FTask::MemoryPool,uVar6);
    }
    if (bVar5) break;
    if (((aVar8 == (atomic<void_*>)0x0) ||
        (bVar5 = aVar8 == (atomic<void_*>)param_1, param_1 = (FTask *)aVar8, bVar5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Expected != nullptr && Expected != Task",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x2eb,L""), param_1 = (FTask *)aVar8, bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
LAB_145ca08b7:
  uVar12 = (ulonglong)local_48;
  if ((2 < uVar12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                         ,0xd4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(code *)(&PTR_Destruct_151113650)[uVar12])(local_68);
  return;
}

// LaunchTask @ 145cb20b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FRHICommandListExecutor::FTaskPipe::LaunchTask(FTaskPipe *this,FTask *param_1)

{
  atomic<unsigned_int> aVar1;
  void *pvVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<_public:___cdecl__private:_class_TRefCountPtr<FBaseGraphTask>___cdecl_FRHICommandListExecutor::FTaskPipe::LaunchTask(FRHICommandListExecutor::FTaskPipe::FTask_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RHITaskPipe>
  FVar4;
  FTaskBase *this_00;
  ulonglong uVar5;
  undefined ***pppuVar6;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar7;
  FTaskBase *this_01;
  FPipe *in_R8;
  undefined1 auStackY_118 [32];
  EExtendedTaskPriority local_b8;
  ETaskPriority local_b7 [15];
  code *local_a8;
  undefined **local_98;
  FTaskPipe *pFStack_90;
  FPipe *local_88;
  undefined ***local_80;
  FName local_78;
  atomic<unsigned___int64> local_70;
  TEventCount<unsigned_int> *pTStack_68;
  TReferenceControllerBase<1> *local_60;
  wchar_t *pwStack_58;
  atomic<UE::Tasks::Private::FTaskBase_*> local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_50 = in_R8[2].LastTask;
  if (local_50 == (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    local_70 = in_R8[1].TaskCount;
    pTStack_68 = in_R8[1].EmptyEventRef.Object;
    local_60 = in_R8[1].EmptyEventRef.SharedReferenceCount.ReferenceController;
    pwStack_58 = in_R8[1].DebugName;
  }
  uVar5 = (ulonglong)_tls_index;
  this_01 = (FTaskBase *)0x0;
  in_R8[2].LastTask = (atomic<UE::Tasks::Private::FTaskBase_*>)0x0;
  pvVar2 = ThreadLocalStoragePointer;
  local_48 = *(int *)&in_R8[2].TaskCount;
  local_44 = *(int *)&in_R8[2].TaskCount.field_0x4;
  *(undefined4 *)&in_R8[2].TaskCount = 0;
  *(undefined4 *)&in_R8[2].TaskCount.field_0x4 = 4;
  aVar1 = *(atomic<unsigned_int> *)&in_R8[2].DebugName;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + uVar5 * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_RHITaskPipe =
         (FThreadSafeStaticStat<_public:___cdecl__private:_class_TRefCountPtr<FBaseGraphTask>___cdecl_FRHICommandListExecutor::FTaskPipe::LaunchTask(FRHICommandListExecutor::FTaskPipe::FTask_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RHITaskPipe>
          )0x0;
    pFVar3 = ::FName::FName(&local_78,"RHITaskPipe");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_RHITaskPipe,*pFVar3,L"RHITaskPipe",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar4 = StatPtr_RHITaskPipe;
  if (StatPtr_RHITaskPipe ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_class_TRefCountPtr<FBaseGraphTask>___cdecl_FRHICommandListExecutor::FTaskPipe::LaunchTask(FRHICommandListExecutor::FTaskPipe::FTask_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RHITaskPipe>
       )0x0) {
    pFVar3 = ::FName::FName(&local_78,"RHITaskPipe");
    FVar4 = (FThreadSafeStaticStat<_public:___cdecl__private:_class_TRefCountPtr<FBaseGraphTask>___cdecl_FRHICommandListExecutor::FTaskPipe::LaunchTask(FRHICommandListExecutor::FTaskPipe::FTask_*)const_::_2_::<lambda_2>::operator()(void)const_::_2_::FStat_RHITaskPipe>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_RHITaskPipe,*pFVar3,L"RHITaskPipe",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  local_80 = (undefined ***)0x0;
  local_98 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::`2'::<lambda_1>,1,0>
              ::_vftable_;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FRHICommandListExecutor::FTaskPipe::LaunchTask'::__l2::<lambda_1>,void,enum_ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&>
             ::Call;
  pFStack_90 = this;
  local_88 = in_R8;
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&local_70);
    this_00->_padding_ =
         (longlong)
         &
         ___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z_0A_____6B_
    ;
    this_01 = this_00;
  }
  this_01[1]._padding_ = (longlong)FVar4;
  this_01[1]._padding_ = (longlong)local_a8;
  *(undefined ****)&this_01[1].StateChangeEvent = local_80;
  this_01[1]._padding_ = (longlong)local_98;
  *(FTaskPipe **)&this_01[1].RefCount = pFStack_90;
  this_01[1].Pipe = local_88;
  if (this_01[1]._padding_ != 0) {
    local_a8 = (code *)0x0;
  }
  this_01[1].ExecutingThreadId = aVar1;
  UE::Tasks::Private::TranslatePriority((Type)aVar1,local_b7,&local_b8);
  UE::Tasks::Private::FTaskBase::Init(this_01,L"GraphTask",local_b7[0],local_b8,None);
  *(FTaskBase **)&param_1->Lambda = this_01;
  if (this_01 != (FTaskBase *)0x0) {
    LOCK();
    this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(*(FTaskBase **)&param_1->Lambda,0x130);
  if (local_a8 != (code *)0x0) {
    pppuVar6 = &local_98;
    if (local_80 != (undefined ***)0x0) {
      pppuVar6 = local_80;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  aVar7 = (atomic<UE::Tasks::Private::FTaskBase_*>)&local_70;
  if (local_50 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    aVar7 = local_50;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)aVar7,local_48);
  if (local_50 != (atomic<UE::Tasks::Private::FTaskBase_*>)0x0) {
    FMemory::Free((void *)local_50);
  }
  return (TRefCountPtr<FBaseGraphTask>)(FBaseGraphTask *)param_1;
}

