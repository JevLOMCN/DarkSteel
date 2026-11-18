// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 8

// operator() @ 145df3af0

void __thiscall
`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskBase *this_00;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  
  RHIResourceLifetimeAddRef(*(int *)((longlong)this + 0x28));
  *(int *)(*(longlong *)this + 0x1c) =
       *(int *)(*(longlong *)this + 0x1c) + *(int *)((longlong)this + 0x28);
  if ((*(longlong *)((longlong)this + 8) != 0) &&
     (*(char *)(*(longlong *)((longlong)this + 8) + 0xd0) == '\0')) {
    this_00 = *(FTaskBase **)((longlong)this + 8);
    LOCK();
    aVar2 = this_00->TaskTriggered;
    this_00->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0xd8);
    }
  }
  iVar3 = *(int *)((longlong)this + 0x20);
  iVar9 = 0;
  iVar11 = 0;
  if (iVar3 != 0) {
    puVar12 = *(uint **)((longlong)this + 0x18);
    if (*(uint **)((longlong)this + 0x18) == (uint *)0x0) {
      puVar12 = (uint *)((longlong)this + 0x10);
    }
    uVar6 = *puVar12;
    while (uVar6 == 0) {
      lVar8 = (longlong)iVar9;
      iVar11 = iVar11 + 0x20;
      iVar9 = iVar9 + 1;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) {
        return;
      }
      uVar6 = puVar12[lVar8 + 1];
    }
    uVar6 = -uVar6 & uVar6;
    uVar1 = (ulonglong)uVar6 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar10 = iVar11 + -1 + (int)lVar8;
    if ((int)uVar10 < iVar3) {
      uVar13 = 0xffffffff;
      do {
        lVar8 = *(longlong *)this;
        uVar7 = 0;
        if ((int)uVar10 < *(int *)(lVar8 + 0x10)) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar13 = ~uVar6 & uVar13;
        *(undefined1 *)(*(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)(int)uVar10 * 8) + 0x5d)
             = 1;
        iVar3 = *(int *)((longlong)this + 0x20);
        puVar12 = (uint *)((longlong)this + 0x10);
        if (*(uint **)((longlong)this + 0x18) != (uint *)0x0) {
          puVar12 = *(uint **)((longlong)this + 0x18);
        }
        uVar6 = uVar13 & puVar12[iVar9];
        while (uVar6 == 0) {
          lVar8 = (longlong)iVar9;
          iVar11 = iVar11 + 0x20;
          iVar9 = iVar9 + 1;
          if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar9) {
            return;
          }
          uVar13 = 0xffffffff;
          uVar6 = puVar12[lVar8 + 1];
        }
        uVar6 = -uVar6 & uVar6;
        uVar1 = (ulonglong)uVar6 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar10 = iVar11 + -1 + (int)lVar8;
      } while (((int)uVar10 <= iVar3) && ((int)uVar10 < iVar3));
    }
  }
  return;
}

// operator() @ 145df3ce0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  int iVar10;
  uint uVar11;
  int iVar12;
  FQueuedCommandList *pFVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  ForElementType<FRHICommandListImmediate::FQueuedCommandList> local_68;
  undefined8 local_60;
  FQueuedCommandList *local_58;
  int iStack_50;
  undefined4 uStack_4c;
  TArrayView<FRHICommandListImmediate::FQueuedCommandList,int> local_48;
  
  uVar5 = *(uint *)((longlong)this + 0x28);
  iVar12 = 0;
  local_68.Data = (FQueuedCommandList *)0x0;
  local_60 = 0;
  if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
  }
  iVar7 = iVar12;
  if (0 < (int)uVar5) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
              (8,8,uVar5,&local_68,0,(int *)((longlong)&local_60 + 4));
    iVar7 = (int)local_60;
  }
  if (*(FTaskBase **)((longlong)this + 0x20) != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(*(FTaskBase **)((longlong)this + 0x20));
  }
  iVar2 = *(int *)((longlong)this + 0x18);
  if (iVar2 != 0) {
    puVar15 = *(uint **)((longlong)this + 0x10);
    if (*(uint **)((longlong)this + 0x10) == (uint *)0x0) {
      puVar15 = (uint *)((longlong)this + 8);
    }
    uVar5 = *puVar15;
    iVar10 = iVar12;
    while (uVar5 == 0) {
      lVar8 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      if ((int)((iVar2 + -1 >> 0x1f & 0x1fU) + iVar2 + -1) >> 5 < iVar10) goto LAB_145df3f30;
      uVar5 = puVar15[lVar8 + 1];
    }
    uVar5 = -uVar5 & uVar5;
    uVar1 = (ulonglong)uVar5 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar11 = (int)lVar8 + -1 + iVar12;
    if ((int)uVar11 < iVar2) {
      uVar16 = 0xffffffff;
      do {
        lVar8 = *(longlong *)this;
        uVar6 = 0;
        if ((int)uVar11 < *(int *)(lVar8 + 0x10)) {
          uVar6 = ~uVar11 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        lVar8 = *(longlong *)(*(longlong *)(lVar8 + 8) + (longlong)(int)uVar11 * 8);
        if (*(FRHICommandListBase **)(lVar8 + 0x20) != (FRHICommandListBase *)0x0) {
          FRHICommandListBase::FinishRecording(*(FRHICommandListBase **)(lVar8 + 0x20));
          if (iVar7 == local_60._4_4_) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>::ForElementType<FRHICommandListImmediate::FQueuedCommandList>_>
                              (0x808,&local_68,(int *)((longlong)&local_60 + 4));
          }
          lVar9 = (longlong)iVar7;
          iVar7 = iVar7 + 1;
          local_60 = CONCAT44(local_60._4_4_,iVar7);
          local_68.Data[lVar9].CmdList = *(FRHICommandListBase **)(lVar8 + 0x20);
          *(undefined8 *)(lVar8 + 0x20) = 0;
        }
        *(undefined1 *)(lVar8 + 0x5d) = 0;
        uVar16 = ~uVar5 & uVar16;
        iVar2 = *(int *)((longlong)this + 0x18);
        lVar8 = (longlong)this + 8;
        if (*(longlong *)((longlong)this + 0x10) != 0) {
          lVar8 = *(longlong *)((longlong)this + 0x10);
        }
        uVar5 = uVar16 & *(uint *)(lVar8 + (longlong)iVar10 * 4);
        while (uVar5 == 0) {
          lVar9 = (longlong)iVar10;
          iVar12 = iVar12 + 0x20;
          iVar10 = iVar10 + 1;
          if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_145df3f30;
          uVar16 = 0xffffffff;
          uVar5 = *(uint *)(lVar8 + 4 + lVar9 * 4);
        }
        uVar5 = -uVar5 & uVar5;
        uVar1 = (ulonglong)uVar5 * 2 + 1;
        lVar8 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar8 == 0; lVar8 = lVar8 + -1) {
          }
        }
        uVar11 = iVar12 + -1 + (int)lVar8;
      } while (((int)uVar11 <= iVar2) && ((int)uVar11 < iVar2));
    }
  }
LAB_145df3f30:
  *(int *)(*(longlong *)this + 0x1c) =
       *(int *)(*(longlong *)this + 0x1c) - *(int *)((longlong)this + 0x28);
  local_58 = local_68.Data;
  if ((iVar7 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_48._12_4_ = uStack_4c;
  local_48.ArrayNum = iVar7;
  local_48.DataPtr = local_58;
  iStack_50 = iVar7;
  FRHICommandListImmediate::QueueAsyncCommandListSubmit(param_1,&local_48,Disabled,0);
  RHIResourceLifetimeReleaseRef(param_1,*(int *)((longlong)this + 0x28));
  if (local_68.Data != (FQueuedCommandList *)0x0) {
    pFVar13 = local_68.Data + -1;
    MemoryTrace_Free((ulong64)pFVar13,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar13,FMalloc,true);
    }
    piVar14 = (int *)((longlong)pFVar13 - (ulonglong)*(uint *)&pFVar13->CmdList);
    LOCK();
    iVar12 = *piVar14;
    *piVar14 = *piVar14 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      lVar8 = *(longlong *)(piVar14 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar14,0,0);
      if (lVar8 - (longlong)piVar14 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar14);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar14);
      }
    }
  }
  return;
}

// StartRecording @ 145e2ddb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e2e6fa) */
/* WARNING: Removing unreachable block (ram,0x000145e2e707) */
/* WARNING: Removing unreachable block (ram,0x000145e2e718) */

void __thiscall
FRenderCommandPipeRegistry::StartRecording
          (FRenderCommandPipeRegistry *this,
          TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          *param_1)

{
  atomic<unsigned_char> *this_00;
  atomic<unsigned_int> *paVar1;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  atomic<unsigned_int> aVar4;
  longlong lVar5;
  FRenderCommandList *this_01;
  code *pcVar6;
  FRenderCommandPipeRegistry *pFVar7;
  int iVar8;
  FTaskBase *pFVar9;
  FTask *pFVar10;
  FTaskBase *pFVar11;
  ForElementType<unsigned_int> FVar12;
  FCommandList *this_02;
  FRenderCommandTag *pFVar13;
  ForElementType<unsigned_int> _Dst;
  code **ppcVar14;
  FTaskBase *pFVar15;
  ulonglong uVar16;
  int iVar17;
  uint uVar18;
  FTaskBase *pFVar19;
  char cVar20;
  uint uVar21;
  uint uVar22;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar23;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar24;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar25;
  bool bVar26;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  longlong local_150;
  char local_148;
  uint local_144;
  int local_140;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_138;
  FRenderCommandPipeRegistry *local_118;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *local_110;
  ulonglong local_108;
  int local_100;
  int local_fc;
  int local_f8;
  ForElementType<unsigned_int> local_f0;
  uint local_e0;
  int local_dc;
  FRenderCommandPipeRegistry *local_d8;
  FTaskBase *local_d0;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_c8;
  int local_b0;
  code *local_a8 [2];
  code *local_98 [3];
  code **local_80;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_178;
  if (GRenderCommandPipeMode != All) {
    return;
  }
  if (!GIsThreadedRendering) {
    return;
  }
  if (param_1->NumBits == 0) {
    return;
  }
  local_118 = this;
  local_110 = param_1;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FRenderCommandPipe_StartRecording");
  bVar26 = CpuChannel->Enabled < 0;
  if (bVar26) {
    local_148 = '\0';
  }
  else {
    local_148 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId2006,"FRenderCommandPipe_StartRecording",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x7d6);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FRenderCommandPipeRegistry::StartRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId2006);
  }
  cVar20 = !bVar26;
  if ((param_1->NumBits != (this->AllPipes).ArrayNum) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("PipeBits.Num() == AllPipes.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                          ,0x7d8,L""), bVar26)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  LOCK();
  bVar26 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar26) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar26) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  pFVar19 = (FTaskBase *)0x0;
  local_138._padding_._4_4_ = 1;
  local_138.UnvisitedBitMask = 0xffffffff;
  local_138._padding_._0_4_ = 0;
  local_138.CurrentBitIndex = 0;
  local_138.BaseBitIndex = 0;
  pFVar9 = pFVar19;
  pFVar11 = pFVar19;
  pFVar15 = pFVar19;
  local_138.Array = param_1;
  if (param_1->NumBits != 0) {
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_138);
    pFVar11 = (FTaskBase *)((ulonglong)local_138._20_8_ >> 0x20);
    pFVar15 = (FTaskBase *)(local_138._20_8_ & 0xffffffff);
    pFVar9 = (FTaskBase *)(ulonglong)(uint)local_138._padding_;
  }
  pTVar23 = local_138.Array;
  if ((int)pFVar15 < (local_138.Array)->NumBits) {
    do {
      iVar17 = (this->AllPipes).ArrayNum;
      uVar21 = (uint)pFVar15;
      uVar22 = 0;
      if ((int)uVar21 < iVar17) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_158 = (ulonglong)(int)uVar21;
        local_150 = (longlong)iVar17;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)((this->AllPipes).AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
      if ((*(char *)(lVar5 + 0x5e) != '\0') && (*(char *)(lVar5 + 0x5c) == '\0')) {
        if (-1 < RenderCommandsChannel->Enabled) {
          FMiscTrace::OutputBeginRegion(L"Render Command Pipe Recording",(wchar_t *)0x0);
        }
        pFVar9 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                 ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                             *)&UE::Tasks::Private::TaskEventBaseAllocator);
        pFVar11 = pFVar19;
        if (pFVar9 != (FTaskBase *)0x0) {
          UE::Tasks::Private::FTaskBase::FTaskBase(pFVar9,1,true);
          pFVar9->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
          TaskTrace::Created((ulong64)pFVar9->TraceId,0xd8);
          if ((*(ulonglong *)&(pFVar9->LowLevelTask).field_0x38 & 0x20) == 0) {
            local_158 = CONCAT44(local_158._4_4_,
                                 (int)*(undefined8 *)&(pFVar9->LowLevelTask).field_0x38) &
                        0xffffffff0000003f;
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsCompleted()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                                ,0x1dd,L"State: %d");
            if (bVar26) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          (**(code **)(*(longlong *)&(pFVar9->LowLevelTask).field_0x28 + 0x18))
                    (&(pFVar9->LowLevelTask).field_0x28);
          *(FTaskBase **)&pFVar9->LowLevelTask = pFVar9;
          *(undefined ***)&(pFVar9->LowLevelTask).field_0x28 =
               &
               ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
          ;
          *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x8 = pFVar9;
          pFVar10 = LowLevelTasks::FTask::GetActiveTask();
          if (pFVar10 != (FTask *)0x0) {
            pFVar11 = *(FTaskBase **)&pFVar10->field_0x30;
          }
          *(FTaskBase **)&(pFVar9->LowLevelTask).field_0x30 = pFVar11;
          *(undefined8 *)&(pFVar9->LowLevelTask).field_0x38 = 0xc8000054453ee800;
          pFVar9->ExtendedPriority = TaskEvent;
          UE::FInheritedContextBase::CaptureInheritedContext
                    ((FInheritedContextBase *)&pFVar9->_padding_);
          pFVar11 = pFVar9;
        }
        pTVar23 = local_110;
        local_140 = 0;
        local_f0.SecondaryData.Data = (uint *)0x0;
        local_dc = 0x20;
        local_e0 = local_110->NumBits;
        uVar22 = local_110->NumBits + 0x1f;
        uVar21 = uVar22 >> 5;
        if (uVar22 >> 5 != 0) {
          if (1 < uVar21) {
            TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
            ForElementType<unsigned_int>::ResizeAllocation(&local_f0,0,uVar21,4);
            local_dc = uVar21 << 5;
          }
          FVar12.Data = (uint *)&local_f0;
          if ((ForElementType<unsigned_int> *)local_f0.SecondaryData.Data !=
              (ForElementType<unsigned_int> *)0x0) {
            FVar12.Data = local_f0.SecondaryData.Data;
          }
          memset(FVar12.Data,0,(ulonglong)uVar21 << 2);
          uVar22 = local_e0 & 0x8000001f;
          if ((int)uVar22 < 0) {
            uVar22 = (uVar22 - 1 | 0xffffffe0) + 1;
          }
          if (uVar22 != 0) {
            FVar12.Data = (uint *)&local_f0;
            if ((ForElementType<unsigned_int> *)local_f0.SecondaryData.Data !=
                (ForElementType<unsigned_int> *)0x0) {
              FVar12.Data = local_f0.SecondaryData.Data;
            }
            *(uint *)(((ForElementType<unsigned_int> *)FVar12.Data)->InlineData +
                     (longlong)((int)(local_e0 + ((int)local_e0 >> 0x1f & 0x1fU)) >> 5) * 4) =
                 *(uint *)(((ForElementType<unsigned_int> *)FVar12.Data)->InlineData +
                          (longlong)((int)(local_e0 + ((int)local_e0 >> 0x1f & 0x1fU)) >> 5) * 4) &
                 0xffffffffU >> (-(char)uVar22 & 0x1fU);
          }
        }
        pFVar7 = local_118;
        uVar22 = pTVar23->NumBits;
        local_108 = CONCAT44(local_108._4_4_,1);
        pFVar15 = pFVar19;
        pFVar9 = pFVar19;
        if (uVar22 == 0) goto LAB_145e2e2bb;
        pTVar24 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)(pTVar23->AllocatorInstance).SecondaryData.Data;
        pFVar15 = (FTaskBase *)(ulonglong)uVar22;
        if (pTVar24 !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          pTVar23 = pTVar24;
        }
        uVar21 = *(uint *)(pTVar23->AllocatorInstance).InlineData;
        goto joined_r0x000145e2e26b;
      }
      pTVar24 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)(pTVar23->AllocatorInstance).SecondaryData.Data;
      uVar22 = pTVar23->NumBits;
      local_138.UnvisitedBitMask = ~local_138._padding_._4_4_ & local_138.UnvisitedBitMask;
      pTVar25 = pTVar23;
      if (pTVar24 !=
          (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar25 = pTVar24;
      }
      uVar21 = local_138.UnvisitedBitMask &
               *(uint *)((pTVar25->AllocatorInstance).InlineData + (longlong)(int)pFVar9 * 4);
      while (uVar21 == 0) {
        local_138._padding_._0_4_ = (int)pFVar9 + 1;
        pFVar9 = (FTaskBase *)(ulonglong)(uint)local_138._padding_;
        uVar21 = (int)pFVar11 + 0x20;
        pFVar11 = (FTaskBase *)(ulonglong)uVar21;
        local_138._20_8_ = (ulonglong)uVar21 << 0x20;
        if ((int)(((int)(uVar22 - 1) >> 0x1f & 0x1fU) + (uVar22 - 1)) >> 5 <
            (int)(uint)local_138._padding_) {
          local_138.BaseBitIndex = uVar21;
          local_138.CurrentBitIndex = uVar22;
          goto LAB_145e2e024;
        }
        local_138.UnvisitedBitMask = 0xffffffff;
        uVar21 = *(uint *)((pTVar25->AllocatorInstance).InlineData +
                          (longlong)(int)(uint)local_138._padding_ * 4);
      }
      local_138._padding_._4_4_ = -uVar21 & uVar21;
      uVar16 = (ulonglong)local_138._padding_._4_4_ * 2 + 1;
      lVar5 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_100 = (int)lVar5;
      uVar21 = (int)pFVar11 + -1 + local_100;
      if ((int)uVar22 < (int)uVar21) {
        uVar21 = uVar22;
      }
      local_138.BaseBitIndex = (int)((ulonglong)local_138._20_8_ >> 0x20);
      local_138.CurrentBitIndex = uVar21;
      uVar22 = uVar21;
LAB_145e2e024:
      pFVar15 = (FTaskBase *)(ulonglong)uVar22;
    } while ((int)uVar22 < pTVar23->NumBits);
  }
  goto LAB_145e2e739;
joined_r0x000145e2e26b:
  if (uVar21 != 0) goto LAB_145e2e28f;
  iVar17 = (int)pFVar19;
  pFVar9 = (FTaskBase *)(ulonglong)((int)pFVar9 + 0x20);
  uVar21 = iVar17 + 1;
  pFVar19 = (FTaskBase *)(ulonglong)uVar21;
  if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar21)
  goto LAB_145e2e2bb;
  uVar21 = *(uint *)((pTVar23->AllocatorInstance).InlineData + (longlong)iVar17 * 4 + 4);
  goto joined_r0x000145e2e26b;
LAB_145e2e28f:
  local_108 = (ulonglong)(-uVar21 & uVar21);
  uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
  lVar5 = 0x3f;
  if (uVar16 != 0) {
    for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
    }
  }
  local_fc = (int)lVar5;
  uVar21 = local_fc + -1 + (int)pFVar9;
  if ((int)uVar22 < (int)uVar21) {
    uVar21 = uVar22;
  }
  pFVar15 = (FTaskBase *)(ulonglong)uVar21;
LAB_145e2e2bb:
  local_144 = 0xffffffff;
  if ((int)pFVar15 < (int)uVar22) {
    do {
      iVar17 = (pFVar7->AllPipes).ArrayNum;
      uVar21 = (uint)pFVar15;
      uVar22 = 0;
      if ((int)uVar21 < iVar17) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      if (uVar22 == 0) {
        local_158 = (ulonglong)(int)uVar21;
        local_150 = (longlong)iVar17;
        bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar26) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar5 = *(longlong *)((pFVar7->AllPipes).AllocatorInstance.Data + (longlong)(int)uVar21 * 8);
      if ((*(char *)(lVar5 + 0x5e) != '\0') && (*(char *)(lVar5 + 0x5c) == '\0')) {
        local_140 = local_140 + 1;
        *(undefined1 *)(lVar5 + 0x5c) = 1;
        if ((((int)uVar21 < 0) || ((int)local_e0 <= (int)uVar21)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index>=0 && Index<NumBits",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x5be,L""), bVar26)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar12.Data = (uint *)&local_f0;
        if ((ForElementType<unsigned_int> *)local_f0.SecondaryData.Data !=
            (ForElementType<unsigned_int> *)0x0) {
          FVar12.Data = local_f0.SecondaryData.Data;
        }
        if ((int)uVar21 < 0) {
          uVar21 = uVar21 + 0x1f;
        }
        this_00 = (atomic<unsigned_char> *)(lVar5 + 8);
        *(uint *)(((ForElementType<unsigned_int> *)FVar12.Data)->InlineData +
                 (longlong)((int)uVar21 >> 5) * 4) =
             *(uint *)(((ForElementType<unsigned_int> *)FVar12.Data)->InlineData +
                      (longlong)((int)uVar21 >> 5) * 4) | 1 << ((byte)pFVar15 & 0x1f);
        if ((this_00 == (atomic<unsigned_char> *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Mutex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                ,0x1b,L""), bVar26)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        LOCK();
        FVar2.State = *this_00;
        if (FVar2.State == (atomic<unsigned_char>)0x0) {
          *this_00 = (atomic<unsigned_char>)0x1;
        }
        UNLOCK();
        if (FVar2.State != (atomic<unsigned_char>)0x0) {
          UE::FMutex::LockSlow((FMutex *)this_00);
        }
        pFVar15 = *(FTaskBase **)(lVar5 + 0x18);
        if (pFVar15 != pFVar11) {
          *(FTaskBase **)(lVar5 + 0x18) = pFVar11;
          if (pFVar11 != (FTaskBase *)0x0) {
            LOCK();
            pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
            UNLOCK();
          }
          if (pFVar15 != (FTaskBase *)0x0) {
            LOCK();
            paVar1 = &pFVar15->RefCount;
            aVar4 = *paVar1;
            *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
            UNLOCK();
            if (aVar4 == (atomic<unsigned_int>)0x1) {
              (**(code **)pFVar15->_padding_)(pFVar15,1);
            }
          }
        }
        if (this_00 != (atomic<unsigned_char> *)0x0) {
          LOCK();
          aVar3 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar3 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)this_00);
          }
        }
      }
      local_144 = ~(uint)local_108 & local_144;
      pTVar23 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                 *)(local_110->AllocatorInstance).SecondaryData.Data;
      uVar22 = local_110->NumBits;
      pTVar24 = local_110;
      if (pTVar23 !=
          (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)0x0) {
        pTVar24 = pTVar23;
      }
      uVar21 = local_144 &
               *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)(int)pFVar19 * 4);
      while (uVar21 == 0) {
        iVar17 = (int)pFVar19;
        pFVar9 = (FTaskBase *)(ulonglong)((int)pFVar9 + 0x20);
        uVar18 = iVar17 + 1;
        pFVar19 = (FTaskBase *)(ulonglong)uVar18;
        uVar21 = uVar22;
        if ((int)((uVar22 - 1) + ((int)(uVar22 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_145e2e4c4;
        uVar21 = *(uint *)((pTVar24->AllocatorInstance).InlineData + (longlong)iVar17 * 4 + 4);
        local_144 = 0xffffffff;
      }
      local_108 = CONCAT44(local_108._4_4_,-uVar21 & uVar21);
      uVar16 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
      lVar5 = 0x3f;
      if (uVar16 != 0) {
        for (; uVar16 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      local_f8 = (int)lVar5;
      uVar21 = (int)pFVar9 + -1 + local_f8;
      if ((int)uVar22 < (int)uVar21) {
        uVar21 = uVar22;
      }
LAB_145e2e4c4:
      pFVar15 = (FTaskBase *)(ulonglong)uVar21;
      cVar20 = local_148;
    } while ((int)uVar21 < local_110->NumBits);
  }
  iVar17 = local_140;
  uVar22 = local_e0 + 0x1f >> 5;
  local_118->NumPipesRecording = local_118->NumPipesRecording + local_140;
  local_d8 = local_118;
  local_c8.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0;
  local_d0 = pFVar11;
  if (0 < (int)(uVar22 << 5)) {
    uVar21 = 0x20;
    if (0x20 < (int)(uVar22 * 0x20)) {
      uVar21 = uVar22 * 0x20;
    }
    local_c8._16_8_ = (ulonglong)uVar21 << 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::Realloc(&local_c8,0);
  }
  local_c8.NumBits = local_e0;
  if (local_e0 != 0) {
    FVar12.Data = (uint *)&local_f0;
    if ((ForElementType<unsigned_int> *)local_f0.SecondaryData.Data !=
        (ForElementType<unsigned_int> *)0x0) {
      FVar12.Data = local_f0.SecondaryData.Data;
    }
    _Dst.Data = (uint *)&local_c8;
    if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)local_c8.AllocatorInstance.SecondaryData.Data !=
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      _Dst.Data = local_c8.AllocatorInstance.SecondaryData.Data;
    }
    memcpy(_Dst.Data,FVar12.Data,(ulonglong)uVar22 << 2);
  }
  iVar8 = local_c8.NumBits;
  FVar12.Data = local_c8.AllocatorInstance.SecondaryData.Data;
  local_b0 = iVar17;
  local_a8[0] = (code *)0x0;
  local_80 = FMemory::Malloc(0x38,8);
  local_80[4] = (code *)0x0;
  *local_80 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__StartRecording_FRenderCommandPipeRegistry__QEAAXAEBV__TBitArray_V__TSizedInlineAllocator__00_0CA_V__TLinearArrayAllocatorBase_UFDefaultBlockAllocationTag___0A________Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_80[1] = (code *)local_d8;
  local_80[2] = (code *)local_d0;
  local_d0 = (FTaskBase *)0x0;
  if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
       *)FVar12.Data ==
      (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
       *)0x0) {
    *(uchar (*) [4])(local_80 + 3) = local_c8.AllocatorInstance.InlineData;
  }
  local_80[4] = (code *)FVar12.Data;
  *(int *)((longlong)local_80 + 0x2c) = local_c8.MaxBits;
  *(int *)(local_80 + 5) = iVar8;
  *(int *)(local_80 + 6) = local_140;
  if (local_80 + 1 != (code **)0x0) {
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderCommandPipeRegistry::StartRecording'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  local_c8.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_c8.NumBits = 0;
  local_c8.MaxBits = 0;
  this_01 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  if (this_01 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderCommandPipeRegistry::StartRecording_::__l2::TSTR_RenderCommandPipe_Start2055>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_01);
    local_78[0] = local_a8[0];
    local_50 = local_80;
    local_80 = (code **)0x0;
    local_68[0] = local_98[0];
    local_68[1] = local_98[1];
    local_68[2] = local_98[2];
    local_a8[0] = (code *)0x0;
    local_48 = 2;
    pFVar13 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderCommandPipeRegistry::StartRecording'::__l2::TSTR_RenderCommandPipe_Start2055>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_78,pFVar13);
    uVar16 = (ulonglong)local_48;
    if ((2 < uVar16) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar26)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_78[0] != (code *)0x0) {
        ppcVar14 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar14 = local_50;
        }
        (**(code **)(*ppcVar14 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar16])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_78);
    }
  }
  if (local_a8[0] != (code *)0x0) {
    ppcVar14 = local_a8 + 2;
    if (local_80 != (code **)0x0) {
      ppcVar14 = local_80;
    }
    (**(code **)(*ppcVar14 + 0x10))();
  }
  this = local_118;
  if ((ForElementType<unsigned_int> *)local_f0.SecondaryData.Data !=
      (ForElementType<unsigned_int> *)0x0) {
    TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free(local_f0.SecondaryData.Data);
    this = local_118;
  }
LAB_145e2e739:
  LOCK();
  aVar3 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar3 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StartRecording @ 145e2e7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FRenderCommandPipeRegistry::StartRecording(FRenderCommandPipeRegistry *this)

{
  uchar *puVar1;
  longlong lVar2;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  ForElementType<unsigned_int> FVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined1 auStack_58 [32];
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_28;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_58;
  if ((GRenderCommandPipeMode == All) && (GIsThreadedRendering)) {
    local_28.NumBits = (this->AllPipes).ArrayNum;
    local_28.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
    local_28.MaxBits = 0x20;
    uVar5 = local_28.NumBits + 0x1fU >> 5;
    if (local_28.NumBits + 0x1fU >> 5 != 0) {
      if (1 < uVar5) {
        TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
        ForElementType<unsigned_int>::ResizeAllocation(&local_28.AllocatorInstance,0,uVar5,4);
        local_28.MaxBits = uVar5 << 5;
      }
      FVar3.Data = (uint *)&local_28;
      if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)local_28.AllocatorInstance.SecondaryData.Data !=
          (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar3.Data = local_28.AllocatorInstance.SecondaryData.Data;
      }
      if (uVar5 < 9) {
        iVar4 = -1;
      }
      else {
        iVar4 = 0xff;
      }
      memset(FVar3.Data,iVar4,(ulonglong)uVar5 << 2);
      uVar5 = local_28.NumBits & 0x8000001f;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xffffffe0) + 1;
      }
      if (uVar5 != 0) {
        FVar3.Data = (uint *)&local_28;
        if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)local_28.AllocatorInstance.SecondaryData.Data !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          FVar3.Data = local_28.AllocatorInstance.SecondaryData.Data;
        }
        puVar1 = (((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                    *)FVar3.Data)->AllocatorInstance).InlineData +
                 (longlong)((int)(local_28.NumBits + (local_28.NumBits >> 0x1f & 0x1fU)) >> 5) * 4;
        *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)uVar5 & 0x1f);
      }
    }
    StartRecording(this,&local_28);
    if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)local_28.AllocatorInstance.SecondaryData.Data !=
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      piVar6 = (int *)(local_28.AllocatorInstance.SecondaryData.Data + -2);
      MemoryTrace_Free((ulong64)piVar6,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_00 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_00 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_00,Default,piVar6,FMalloc,true);
      }
      piVar6 = (int *)((longlong)piVar6 - (ulonglong)(uint)*piVar6);
      LOCK();
      iVar4 = *piVar6;
      *piVar6 = *piVar6 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        lVar2 = *(longlong *)(piVar6 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar6,0,0);
        if (lVar2 - (longlong)piVar6 == 0x10000) {
          this_01 = FPageAllocator::Get();
          FPageAllocator::Free(this_01,piVar6);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar6);
        }
      }
    }
  }
  return;
}

// StopRecording @ 145e31990

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145e32055) */
/* WARNING: Removing unreachable block (ram,0x000145e32064) */

void __thiscall
FRenderCommandPipeRegistry::StopRecording
          (FRenderCommandPipeRegistry *this,
          TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          *param_1)

{
  FMutex FVar1;
  atomic<bool> aVar2;
  atomic<unsigned_char> aVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar6;
  FRenderCommandList *this_00;
  longlong lVar7;
  code *pcVar8;
  FRenderCommandPipeRegistry *pFVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  FTaskBase *this_01;
  FTask *pFVar13;
  undefined8 uVar14;
  FMemStackBase *pFVar15;
  code **ppcVar16;
  FCommandList *this_02;
  FRenderCommandTag *pFVar17;
  FLowLevelMemTracker *this_03;
  FPageAllocator *this_04;
  uint uVar18;
  ForElementType<unsigned_int> FVar19;
  code **_Dst;
  atomic<unsigned_char> *paVar20;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar21;
  ForElementType<unsigned_int> _Src;
  int iVar22;
  FMemStackBase *pFVar23;
  int *piVar24;
  FMemStackBase *pFVar25;
  int iVar26;
  FMemStackBase *pFVar27;
  ulonglong uVar28;
  FMemStackBase *pFVar29;
  uint uVar30;
  uint uVar31;
  ulonglong *puVar32;
  bool bVar33;
  undefined1 auStack_188 [32];
  uint local_154;
  TConstSetBitIterator<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_140;
  uint local_120;
  FRenderCommandPipeRegistry *local_118;
  int local_110;
  int local_10c;
  int local_108;
  code **local_100;
  ulonglong local_f8;
  FRenderCommandPipeRegistry *local_f0;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_e8;
  FTaskBase *local_d0;
  uint local_c8;
  code *local_b8 [2];
  code *local_a8 [3];
  code **local_90;
  code *local_88 [2];
  code *local_78 [3];
  code **local_60;
  byte local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_118 = this;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FRenderCommandPipe_StopRecording");
  bVar33 = -1 < CpuChannel->Enabled;
  if (bVar33) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId2148,"FRenderCommandPipe_StopRecording",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
               ,0x864);
    FCpuProfilerTrace::OutputBeginEvent
              (`private:_void___cdecl_FRenderCommandPipeRegistry::StopRecording(TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId2148);
  }
  this_01 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::TaskEventBaseAllocator);
  if (this_01 == (FTaskBase *)0x0) {
    this_01 = (FTaskBase *)0x0;
  }
  else {
    UE::Tasks::Private::FTaskBase::FTaskBase(this_01,1,true);
    this_01->_padding_ = (longlong)&___7FTaskEventBase_Private_Tasks_UE__6B_;
    TaskTrace::Created((ulong64)this_01->TraceId,0xd8);
    if (((*(ulonglong *)&(this_01->LowLevelTask).field_0x38 & 0x20) == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsCompleted()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                            ,0x1dd,L"State: %d"), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    (**(code **)(*(longlong *)&(this_01->LowLevelTask).field_0x28 + 0x18))
              (&(this_01->LowLevelTask).field_0x28);
    *(FTaskBase **)&this_01->LowLevelTask = this_01;
    *(undefined ***)&(this_01->LowLevelTask).field_0x28 =
         &
         ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_V<lambda_1>__1__0FTaskBase_Private_Tasks_UE__IEAAXPEB_WW4ETaskPriority_LowLevelTasks__W4EExtendedTaskPriority_45_W4ETaskFlags_45__Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAV1_1__Init_FTaskBase_Private_Tasks_UE__IEAAX01W4EExtendedTaskPriority_89_W4ETaskFlags_89__Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
    ;
    *(FTaskBase **)&(this_01->LowLevelTask).field_0x8 = this_01;
    pFVar13 = LowLevelTasks::FTask::GetActiveTask();
    uVar14 = 0;
    if (pFVar13 != (FTask *)0x0) {
      uVar14 = *(undefined8 *)&pFVar13->field_0x30;
    }
    *(undefined8 *)&(this_01->LowLevelTask).field_0x30 = uVar14;
    *(undefined8 *)&(this_01->LowLevelTask).field_0x38 = 0xc8000054453f7c00;
    this_01->ExtendedPriority = TaskEvent;
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)&this_01->_padding_)
    ;
  }
  pFVar25 = (FMemStackBase *)0x0;
  local_154 = 0;
  local_140._padding_._0_4_ = 0;
  local_140._padding_._4_4_ = 1;
  local_140.UnvisitedBitMask = 0xffffffff;
  local_140.CurrentBitIndex = 0;
  local_140.BaseBitIndex = 0;
  pFVar23 = pFVar25;
  pFVar27 = pFVar25;
  pFVar29 = pFVar25;
  local_140.Array = param_1;
  if (param_1->NumBits != 0) {
    TConstSetBitIterator<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::FindFirstSetBit(&local_140);
    pFVar29 = (FMemStackBase *)((ulonglong)local_140._20_8_ >> 0x20);
    pFVar23 = (FMemStackBase *)(local_140._20_8_ & 0xffffffff);
    pFVar27 = (FMemStackBase *)(ulonglong)(uint)local_140._padding_;
  }
  pFVar15 = pFVar25;
  if ((int)pFVar23 < (local_140.Array)->NumBits) {
    do {
      pFVar9 = local_118;
      uVar30 = (uint)pFVar23;
      uVar18 = 0;
      if ((int)uVar30 < (local_118->AllPipes).ArrayNum) {
        uVar18 = ~uVar30 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      puVar4 = *(ulonglong **)
                ((pFVar9->AllPipes).AllocatorInstance.Data + (longlong)(int)uVar30 * 8);
      if ((*(char *)((longlong)puVar4 + 0x5c) == '\0') &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pipe->bRecording",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\RenderingThread.cpp"
                              ,0x86c,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_154 = (int)pFVar15 + 1;
      *(undefined1 *)((longlong)puVar4 + 0x5c) = 0;
      paVar20 = (atomic<unsigned_char> *)(puVar4 + 1);
      LOCK();
      FVar1.State = *paVar20;
      if (FVar1.State == (atomic<unsigned_char>)0x0) {
        *paVar20 = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (FVar1.State != (atomic<unsigned_char>)0x0) {
        UE::FMutex::LockSlow((FMutex *)paVar20);
      }
      if (*(longlong *)(*puVar4 + 0x30) != 0) {
        *(undefined1 *)(*puVar4 + 0x50) = 1;
        pFVar15 = ::operator_new(0x58);
        pFVar23 = pFVar25;
        if (pFVar15 != (FMemStackBase *)0x0) {
          FMemStackBase::FMemStackBase(pFVar15,Large);
          pFVar15[1].Top = (uchar *)pFVar15;
          pFVar15[1].End = (uchar *)0x0;
          pFVar15[1].TopChunk = (FTaggedMemory *)0x0;
          *(undefined4 *)&pFVar15[1].TopMark = 0;
          *(undefined1 *)&pFVar15[1].NumMarks = 0;
          *(undefined1 *)&pFVar15[2].Top = 0;
          pFVar23 = pFVar15;
        }
        *puVar4 = (ulonglong)pFVar23;
      }
      puVar32 = puVar4 + 3;
      if ((FTaskBase *)puVar4[3] != (FTaskBase *)0x0) {
        UE::Tasks::Private::FTaskBase::AddPrerequisites(this_01,(FTaskBase *)puVar4[3]);
      }
      if (puVar32 != &local_f8) {
        puVar5 = (undefined8 *)*puVar32;
        *puVar32 = 0;
        if (puVar5 != (undefined8 *)0x0) {
          LOCK();
          piVar24 = (int *)(puVar5 + 6);
          iVar11 = *piVar24;
          *piVar24 = *piVar24 + -1;
          UNLOCK();
          if (iVar11 == 1) {
            (**(code **)*puVar5)(puVar5,1);
          }
        }
      }
      local_140.UnvisitedBitMask = ~local_140._padding_._4_4_ & local_140.UnvisitedBitMask;
      pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)((local_140.Array)->AllocatorInstance).SecondaryData.Data;
      uVar18 = (local_140.Array)->NumBits;
      pTVar21 = local_140.Array;
      if (pTVar6 != (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                     *)0x0) {
        pTVar21 = pTVar6;
      }
      uVar30 = local_140.UnvisitedBitMask &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)(int)pFVar27 * 4);
      while (uVar30 == 0) {
        local_140._padding_._0_4_ = (int)pFVar27 + 1;
        pFVar27 = (FMemStackBase *)(ulonglong)(uint)local_140._padding_;
        local_140.BaseBitIndex = (int)pFVar29 + 0x20;
        pFVar29 = (FMemStackBase *)(ulonglong)(uint)local_140.BaseBitIndex;
        if ((int)(((int)(uVar18 - 1) >> 0x1f & 0x1fU) + (uVar18 - 1)) >> 5 <
            (int)(uint)local_140._padding_) {
          local_140.CurrentBitIndex = uVar18;
          uVar30 = uVar18;
          goto LAB_145e31d9a;
        }
        local_140.UnvisitedBitMask = 0xffffffff;
        uVar30 = *(uint *)((pTVar21->AllocatorInstance).InlineData +
                          (longlong)(int)(uint)local_140._padding_ * 4);
      }
      local_140._padding_._4_4_ = -uVar30 & uVar30;
      uVar28 = (ulonglong)local_140._padding_._4_4_ * 2 + 1;
      lVar7 = 0x3f;
      if (uVar28 != 0) {
        for (; uVar28 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      local_110 = (int)lVar7;
      local_140.CurrentBitIndex = (int)pFVar29 + -1 + local_110;
      if ((int)uVar18 < local_140.CurrentBitIndex) {
        local_140.CurrentBitIndex = uVar18;
      }
      uVar30 = local_140.CurrentBitIndex;
LAB_145e31d9a:
      pFVar23 = (FMemStackBase *)(ulonglong)uVar30;
      pFVar15 = (FMemStackBase *)(ulonglong)local_154;
    } while ((int)uVar30 < (int)uVar18);
  }
  pFVar9 = local_118;
  local_118->NumPipesRecording = local_118->NumPipesRecording - local_154;
  if ((this_01 != (FTaskBase *)0x0) && ((this_01->Subsequents).bIsClosed == (atomic<bool>)0x0)) {
    LOCK();
    aVar2 = this_01->TaskTriggered;
    this_01->TaskTriggered = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      this_01->RefCount = (atomic<unsigned_int>)((int)this_01->RefCount + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch(this_01,0xd8);
    }
  }
  local_f0 = pFVar9;
  local_e8.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  local_e8.NumBits = 0;
  local_e8.MaxBits = 0;
  uVar18 = param_1->NumBits + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar18) {
    uVar30 = 0x20;
    if (0x20 < (int)uVar18) {
      uVar30 = uVar18;
    }
    local_e8._16_8_ = (ulonglong)uVar30 << 0x20;
    TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::Realloc(&local_e8,0);
  }
  iVar11 = param_1->NumBits;
  local_e8.NumBits = iVar11;
  iVar26 = 0;
  if (iVar11 != 0) {
    pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(param_1->AllocatorInstance).SecondaryData.Data;
    pTVar21 = param_1;
    if (pTVar6 != (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar21 = pTVar6;
    }
    FVar19.Data = (uint *)&local_e8;
    if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)local_e8.AllocatorInstance.SecondaryData.Data !=
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      FVar19.Data = local_e8.AllocatorInstance.SecondaryData.Data;
    }
    memcpy(FVar19.Data,pTVar21,(ulonglong)(iVar11 + 0x1fU >> 5) << 2);
    iVar26 = local_e8.NumBits;
  }
  FVar19.Data = local_e8.AllocatorInstance.SecondaryData.Data;
  local_b8[0] = (code *)0x0;
  local_d0 = this_01;
  local_c8 = local_154;
  ppcVar16 = FMemory::Malloc(0x38,8);
  local_120 = iVar26 + 0x1fU >> 5;
  *ppcVar16 = (code *)&
                      ___7__TFunction_OwnedObject_V<lambda_1>__1__StopRecording_FRenderCommandPipeRegistry__AEAAXAEBV__TBitArray_V__TSizedInlineAllocator__00_0CA_V__TLinearArrayAllocatorBase_UFDefaultBlockAllocationTag___0A________Z__00_00_Function_Private_Core_UE__6B_
  ;
  ppcVar16[1] = (code *)local_f0;
  iVar11 = local_120 * 0x20;
  ppcVar16[3] = (code *)0x0;
  ppcVar16[4] = (code *)0x0;
  local_100 = ppcVar16;
  local_90 = ppcVar16;
  if (0 < iVar11) {
    iVar22 = 0x20;
    if (0x20 < iVar11) {
      iVar22 = iVar11;
    }
    *(int *)((longlong)ppcVar16 + 0x24) = iVar22;
    TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
    ::Realloc((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)(ppcVar16 + 2),0);
  }
  *(int *)(ppcVar16 + 4) = iVar26;
  if (iVar26 != 0) {
    _Src.Data = (uint *)&local_e8;
    if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)FVar19.Data !=
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      _Src.Data = FVar19.Data;
    }
    _Dst = (code **)ppcVar16[3];
    if ((code **)ppcVar16[3] == (code **)0x0) {
      _Dst = ppcVar16 + 2;
    }
    memcpy(_Dst,_Src.Data,(ulonglong)local_120 << 2);
  }
  local_d0 = (FTaskBase *)0x0;
  *(uint *)(local_100 + 6) = local_154;
  local_100[5] = (code *)this_01;
  if (ppcVar16 + 1 != (code **)0x0) {
    local_b8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FRenderCommandPipeRegistry::StopRecording'::__l2::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
  }
  this_00 = *(FRenderCommandList **)
             (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xed0
             );
  if (this_00 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_FRenderCommandPipeRegistry::StopRecording_::__l2::TSTR_RenderCommandPipe_Stop2170>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_b8);
  }
  else {
    this_02 = FRenderCommandList::GetRenderThread(this_00);
    local_88[0] = local_b8[0];
    local_60 = local_90;
    local_90 = (code **)0x0;
    local_78[0] = local_a8[0];
    local_78[1] = local_a8[1];
    local_78[2] = local_a8[2];
    local_b8[0] = (code *)0x0;
    local_58 = 2;
    pFVar17 = (FRenderCommandTag *)
              TRenderCommandTag<`FRenderCommandPipeRegistry::StopRecording'::__l2::TSTR_RenderCommandPipe_Stop2170>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (this_02,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                        *)local_88,pFVar17);
    uVar28 = (ulonglong)local_58;
    if ((2 < uVar28) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                            ,0xd4,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar28] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if (local_88[0] != (code *)0x0) {
        ppcVar16 = local_88 + 2;
        if (local_60 != (code **)0x0) {
          ppcVar16 = local_60;
        }
        (**(code **)(*ppcVar16 + 0x10))();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar28])
                ((TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  *)local_88);
    }
  }
  if (local_b8[0] != (code *)0x0) {
    ppcVar16 = local_b8 + 2;
    if (local_90 != (code **)0x0) {
      ppcVar16 = local_90;
    }
    (**(code **)(*ppcVar16 + 0x10))();
  }
  if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
       *)FVar19.Data !=
      (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
       *)0x0) {
    piVar24 = (int *)(FVar19.Data + -2);
    MemoryTrace_Free((ulong64)piVar24,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_03 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_03 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_03,Default,piVar24,FMalloc,true);
    }
    piVar24 = (int *)((longlong)piVar24 - (ulonglong)(uint)*piVar24);
    LOCK();
    iVar11 = *piVar24;
    *piVar24 = *piVar24 + -1;
    UNLOCK();
    if (iVar11 == 1) {
      lVar7 = *(longlong *)(piVar24 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar24,0,0);
      if (lVar7 - (longlong)piVar24 == 0x10000) {
        this_04 = FPageAllocator::Get();
        FPageAllocator::Free(this_04,piVar24);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar24);
      }
    }
  }
  pFVar9 = local_118;
  iVar11 = param_1->NumBits;
  if (iVar11 != 0) {
    pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(param_1->AllocatorInstance).SecondaryData.Data;
    pTVar21 = param_1;
    if (pTVar6 != (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                   *)0x0) {
      pTVar21 = pTVar6;
    }
    uVar18 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
    pFVar29 = pFVar25;
    while (uVar18 == 0) {
      iVar26 = (int)pFVar29;
      pFVar25 = (FMemStackBase *)(ulonglong)((int)pFVar25 + 0x20);
      uVar18 = iVar26 + 1;
      pFVar29 = (FMemStackBase *)(ulonglong)uVar18;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar18) goto LAB_145e3229a;
      uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar26 * 4 + 4);
    }
    uVar18 = -uVar18 & uVar18;
    uVar28 = (ulonglong)uVar18 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar28 != 0) {
      for (; uVar28 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_10c = (int)lVar7;
    uVar30 = (int)pFVar25 + -1 + local_10c;
    if ((int)uVar30 < iVar11) {
      uVar31 = 0xffffffff;
      do {
        uVar12 = 0;
        if ((int)uVar30 < (pFVar9->AllPipes).ArrayNum) {
          uVar12 = ~uVar30 >> 0x1f;
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
        paVar20 = (atomic<unsigned_char> *)
                  (*(longlong *)
                    ((pFVar9->AllPipes).AllocatorInstance.Data + (longlong)(int)uVar30 * 8) + 8);
        LOCK();
        aVar3 = *paVar20;
        *paVar20 = (atomic<unsigned_char>)((char)*paVar20 + -1);
        UNLOCK();
        if (((byte)aVar3 & 2) != 0) {
          UE::FMutex::WakeWaitingThread((FMutex *)paVar20);
        }
        pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                  *)(param_1->AllocatorInstance).SecondaryData.Data;
        iVar11 = param_1->NumBits;
        uVar31 = ~uVar18 & uVar31;
        pTVar21 = param_1;
        if (pTVar6 != (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                       *)0x0) {
          pTVar21 = pTVar6;
        }
        uVar18 = uVar31 & *(uint *)((pTVar21->AllocatorInstance).InlineData +
                                   (longlong)(int)pFVar29 * 4);
        while (uVar18 == 0) {
          iVar26 = (int)pFVar29;
          pFVar25 = (FMemStackBase *)(ulonglong)((int)pFVar25 + 0x20);
          uVar18 = iVar26 + 1;
          pFVar29 = (FMemStackBase *)(ulonglong)uVar18;
          if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
          goto LAB_145e3229a;
          uVar31 = 0xffffffff;
          uVar18 = *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar26 * 4 + 4);
        }
        uVar18 = -uVar18 & uVar18;
        uVar28 = (ulonglong)uVar18 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar28 != 0) {
          for (; uVar28 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_108 = (int)lVar7;
        uVar30 = local_108 + -1 + (int)pFVar25;
      } while (((int)uVar30 <= iVar11) && ((int)uVar30 < iVar11));
    }
  }
LAB_145e3229a:
  if (-1 < RenderCommandsChannel->Enabled) {
    FMiscTrace::OutputEndRegion(L"Render Command Pipe Recording");
  }
  if (bVar33) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// StopRecording @ 145e32300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_> *
__thiscall
FRenderCommandPipeRegistry::StopRecording
          (FRenderCommandPipeRegistry *this,
          TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          *__return_storage_ptr__,TArrayView<FRenderCommandPipe_*_const,int> *param_1)

{
  uchar *puVar1;
  FRenderCommandPipe **ppFVar2;
  atomic<unsigned_char> aVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  FRenderCommandPipe **ppFVar12;
  undefined1 auStack_88 [40];
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_88;
  if (param_1->ArrayNum == 0) {
    (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
    __return_storage_ptr__->NumBits = 0;
    __return_storage_ptr__->MaxBits = 0x20;
  }
  else {
    if ((this == (FRenderCommandPipeRegistry *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                           ,0x1b,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pTVar8 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                *)(*pcVar5)();
      return pTVar8;
    }
    LOCK();
    bVar6 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
    if (bVar6) {
      (this->Mutex).State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar6) {
      UE::FMutex::LockSlow(&this->Mutex);
    }
    if (this->NumPipesRecording == 0) {
      (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
      __return_storage_ptr__->NumBits = 0;
      __return_storage_ptr__->MaxBits = 0x20;
      LOCK();
      aVar3 = (this->Mutex).State;
      (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this->Mutex);
      }
    }
    else {
      local_60.NumBits = (this->AllPipes).ArrayNum;
      bVar6 = false;
      local_60.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
      uVar11 = local_60.NumBits + 0x1fU >> 5;
      local_60.MaxBits = 0x20;
      uVar10 = local_60.NumBits;
      if (local_60.NumBits + 0x1fU >> 5 != 0) {
        if (1 < uVar11) {
          TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
          ForElementType<unsigned_int>::ResizeAllocation(&local_60.AllocatorInstance,0,uVar11,4);
          local_60.MaxBits = uVar11 << 5;
        }
        FVar9.Data = (uint *)&local_60;
        if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)local_60.AllocatorInstance.SecondaryData.Data !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          FVar9.Data = local_60.AllocatorInstance.SecondaryData.Data;
        }
        memset(FVar9.Data,0,(ulonglong)uVar11 << 2);
        uVar11 = local_60.NumBits & 0x8000001f;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
        }
        uVar10 = local_60.NumBits;
        if (uVar11 != 0) {
          FVar9.Data = (uint *)&local_60;
          if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)local_60.AllocatorInstance.SecondaryData.Data !=
              (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)0x0) {
            FVar9.Data = local_60.AllocatorInstance.SecondaryData.Data;
          }
          puVar1 = (((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)FVar9.Data)->AllocatorInstance).InlineData +
                   (longlong)((int)(local_60.NumBits + (local_60.NumBits >> 0x1f & 0x1fU)) >> 5) * 4
          ;
          *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)uVar11 & 0x1f);
          uVar10 = local_60.NumBits;
        }
      }
      ppFVar12 = param_1->DataPtr;
      ppFVar2 = ppFVar12 + param_1->ArrayNum;
      for (; ppFVar12 != ppFVar2; ppFVar12 = ppFVar12 + 1) {
        if ((*ppFVar12)->bRecording != false) {
          iVar4 = (*ppFVar12)->Index;
          if (((iVar4 < 0) || ((int)uVar10 <= iVar4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            pTVar8 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)(*pcVar5)();
            return pTVar8;
          }
          FVar9.Data = (uint *)&local_60;
          if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)local_60.AllocatorInstance.SecondaryData.Data !=
              (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)0x0) {
            FVar9.Data = local_60.AllocatorInstance.SecondaryData.Data;
          }
          iVar7 = iVar4;
          if (iVar4 < 0) {
            iVar7 = iVar4 + 0x1f;
          }
          puVar1 = (((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)FVar9.Data)->AllocatorInstance).InlineData + (longlong)(iVar7 >> 5) * 4;
          bVar6 = true;
          *(uint *)puVar1 = *(uint *)puVar1 | 1 << ((byte)iVar4 & 0x1f);
          uVar10 = local_60.NumBits;
        }
      }
      if (bVar6) {
        StopRecording(this,&local_60);
        (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
        if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)local_60.AllocatorInstance.SecondaryData.Data ==
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          *&(__return_storage_ptr__->AllocatorInstance).InlineData =
               local_60.AllocatorInstance.InlineData;
        }
        (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data =
             local_60.AllocatorInstance.SecondaryData.Data;
        __return_storage_ptr__->NumBits = local_60.NumBits;
        __return_storage_ptr__->MaxBits = local_60.MaxBits;
        local_60.NumBits = 0;
        local_60.MaxBits = 0;
        local_60.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
      }
      else {
        (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
        __return_storage_ptr__->NumBits = 0;
        __return_storage_ptr__->MaxBits = 0x20;
        if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)local_60.AllocatorInstance.SecondaryData.Data !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          TLinearAllocatorBase<FDefaultBlockAllocationTag,0>::Free
                    (local_60.AllocatorInstance.SecondaryData.Data);
        }
      }
      LOCK();
      aVar3 = (this->Mutex).State;
      (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this->Mutex);
      }
    }
  }
  return __return_storage_ptr__;
}

// StopRecording @ 145e325e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_> *
__thiscall
FRenderCommandPipeRegistry::StopRecording
          (FRenderCommandPipeRegistry *this,
          TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
          *__return_storage_ptr__)

{
  uchar *puVar1;
  atomic<unsigned_char> aVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  *pTVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
  local_50;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_88;
  if ((this == (FRenderCommandPipeRegistry *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                         ,0x1b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
              *)(*pcVar4)();
    return pTVar6;
  }
  uVar10 = 1;
  LOCK();
  bVar5 = (this->Mutex).State == (atomic<unsigned_char>)0x0;
  if (bVar5) {
    (this->Mutex).State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar5) {
    UE::FMutex::LockSlow(&this->Mutex);
  }
  uVar9 = 0;
  if (this->NumPipesRecording == 0) {
    (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
    __return_storage_ptr__->NumBits = 0;
    __return_storage_ptr__->MaxBits = 0x20;
  }
  else {
    local_50.NumBits = (this->AllPipes).ArrayNum;
    local_50.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
    uVar11 = local_50.NumBits + 0x1f;
    local_50.MaxBits = 0x20;
    uVar8 = uVar11 >> 5;
    if (uVar11 >> 5 != 0) {
      if (1 < uVar8) {
        TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>::
        ForElementType<unsigned_int>::ResizeAllocation(&local_50.AllocatorInstance,0,uVar8,4);
        local_50.MaxBits = uVar8 << 5;
      }
      FVar7.Data = (uint *)&local_50;
      if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)local_50.AllocatorInstance.SecondaryData.Data !=
          (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
           *)0x0) {
        FVar7.Data = local_50.AllocatorInstance.SecondaryData.Data;
      }
      memset(FVar7.Data,0,(ulonglong)uVar8 << 2);
      uVar11 = local_50.NumBits & 0x8000001f;
      if ((int)uVar11 < 0) {
        uVar11 = (uVar11 - 1 | 0xffffffe0) + 1;
      }
      if (uVar11 != 0) {
        FVar7.Data = (uint *)&local_50;
        if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)local_50.AllocatorInstance.SecondaryData.Data !=
            (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
             *)0x0) {
          FVar7.Data = local_50.AllocatorInstance.SecondaryData.Data;
        }
        puVar1 = (((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                    *)FVar7.Data)->AllocatorInstance).InlineData +
                 (longlong)((int)(local_50.NumBits + (local_50.NumBits >> 0x1f & 0x1fU)) >> 5) * 4;
        *(uint *)puVar1 = *(uint *)puVar1 & 0xffffffffU >> (0x20U - (char)uVar11 & 0x1f);
      }
    }
    uVar12 = uVar9;
    if (0 < (this->AllPipes).ArrayNum) {
      do {
        iVar3 = (this->AllPipes).ArrayNum;
        uVar8 = (uint)uVar9;
        uVar11 = 0;
        if ((int)uVar8 < iVar3) {
          uVar11 = ~uVar8 >> 0x1f;
        }
        if (uVar11 == 0) {
          local_68 = (longlong)(int)uVar8;
          local_60 = (longlong)iVar3;
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)(*pcVar4)();
            return pTVar6;
          }
        }
        if (*(char *)(*(longlong *)((this->AllPipes).AllocatorInstance.Data + uVar12) + 0x5c) !=
            '\0') {
          if ((((int)uVar8 < 0) || (local_50.NumBits <= (int)uVar8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index>=0 && Index<NumBits",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x5be,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar6 = (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)(*pcVar4)();
            return pTVar6;
          }
          FVar7.Data = (uint *)&local_50;
          if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)local_50.AllocatorInstance.SecondaryData.Data !=
              (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
               *)0x0) {
            FVar7.Data = local_50.AllocatorInstance.SecondaryData.Data;
          }
          uVar11 = uVar8;
          if ((int)uVar8 < 0) {
            uVar11 = uVar8 + 0x1f;
          }
          puVar1 = (((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
                      *)FVar7.Data)->AllocatorInstance).InlineData +
                   (longlong)((int)uVar11 >> 5) * 4;
          *(uint *)puVar1 = *(uint *)puVar1 | uVar10;
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 << 1 | (uint)((int)uVar10 < 0);
        uVar12 = uVar12 + 8;
      } while ((int)(uVar8 + 1) < (this->AllPipes).ArrayNum);
    }
    StopRecording(this,&local_50);
    (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data = (uint *)0x0;
    if ((TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)local_50.AllocatorInstance.SecondaryData.Data ==
        (TBitArray<TSizedInlineAllocator<1,32,TLinearArrayAllocatorBase<FDefaultBlockAllocationTag,0>_>_>
         *)0x0) {
      *&(__return_storage_ptr__->AllocatorInstance).InlineData =
           local_50.AllocatorInstance.InlineData;
    }
    (__return_storage_ptr__->AllocatorInstance).SecondaryData.Data =
         local_50.AllocatorInstance.SecondaryData.Data;
    __return_storage_ptr__->NumBits = local_50.NumBits;
    __return_storage_ptr__->MaxBits = local_50.MaxBits;
    local_50.NumBits = 0;
    local_50.MaxBits = 0;
    local_50.AllocatorInstance.SecondaryData.Data = (uint *)0x0;
  }
  LOCK();
  aVar2 = (this->Mutex).State;
  (this->Mutex).State = (atomic<unsigned_char>)((char)(this->Mutex).State + -1);
  UNLOCK();
  if (((byte)aVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(&this->Mutex);
  }
  return __return_storage_ptr__;
}

// operator() @ 1504dd110

bool __thiscall `FRenderCommandPipeRegistry::IsRecording'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5173014724773672874>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5173014724773672874>,
                       &`public:___cdecl_`public:_bool___cdecl_FRenderCommandPipeRegistry::IsRecording(void)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

