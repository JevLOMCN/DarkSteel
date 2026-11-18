// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 8

// FQueueState @ 145c45e10

FQueueState * __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FQueueState
          (FQueueState *this,FQueue *param_1)

{
  atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*> aVar1;
  
  (this->Queue).field0_0x0 = param_1->field0_0x0;
  (this->PendingStreams).Tail =
       (atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>)0x0;
  (this->PendingStreams).NumElems = (atomic<int>)0x0;
  aVar1 = (atomic<TSpscQueue<UE::RHI::GPUProfiler::FEventSink::FIterator,FMemory>::FNode_*>)
          FMemory::Malloc(0x28,8);
  *(undefined8 *)aVar1 = 0;
  (this->PendingStreams).Tail = aVar1;
  (this->PendingStreams).TailCopy = (FNode *)aVar1;
  (this->PendingStreams).First = (FNode *)aVar1;
  (this->PendingStreams).Head = (FNode *)aVar1;
  LOCK();
  (this->PendingStreams).NumElems = (atomic<int>)0x0;
  UNLOCK();
  (this->Signals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Signals).ArrayNum = 0;
  (this->Signals).ArrayMax = 0;
  (this->MaxSignal).GPUTimestampBOP = 0;
  (this->MaxSignal).Value = 0;
  (this->Timestamps).Queue.Values.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Timestamps).Queue.Values.ArrayNum = 0;
  (this->Timestamps).Queue.Values.ArrayMax = 0;
  (this->Timestamps).WholeQueueStat.Exclusive.BusyCycles = 0;
  (this->Timestamps).WholeQueueStat.Exclusive.IdleCycles = 0;
  (this->Timestamps).WholeQueueStat.Exclusive.WaitCycles = 0;
  (this->Timestamps).WholeQueueStat.Inclusive.BusyCycles = 0;
  (this->Timestamps).WholeQueueStat.Inclusive.IdleCycles = 0;
  (this->Timestamps).WholeQueueStat.Inclusive.WaitCycles = 0;
  (this->Timestamps).CPUFrameBoundary = 0;
  (this->Timestamps).TotalBusyCycles.bIsSet = false;
  *(undefined8 *)&(this->Timestamps).Stats = 0;
  *(undefined8 *)&(this->Timestamps).Stats.field_0x8 = 0;
  *(undefined8 *)&(this->Timestamps).Stats.field_0x20 = 0;
  this->LastGPUCycles = 0;
  *(undefined4 *)&(this->Timestamps).Stats.field_0x28 = 0;
  *(undefined4 *)&(this->Timestamps).Stats.field_0x2c = 0x80;
  *(undefined4 *)&(this->Timestamps).Stats.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Timestamps).Stats.field_0x34 = 0;
  *(undefined8 *)&(this->Timestamps).Stats.field_0x40 = 0;
  *(undefined4 *)&(this->Timestamps).Stats.field_0x48 = 0;
  this->bBusy = false;
  this->bWasTraced = false;
  *(undefined8 *)&this->ActiveStats = 0;
  *(undefined8 *)&(this->ActiveStats).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveStats).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveStats).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveStats).field_0x34 = 0;
  *(undefined8 *)&(this->ActiveStats).field_0x40 = 0;
  *(undefined4 *)&(this->ActiveStats).field_0x48 = 0;
  (this->ActiveStatsStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveStatsStack).ArrayNum = 0;
  (this->ActiveStatsStack).ArrayMax = 0;
  (this->Breadcrumb).Node = (FRHIBreadcrumbNode *)0x0;
  (this->Breadcrumb).AllocatorRef.Object = (FRHIBreadcrumbAllocator *)0x0;
  (this->Breadcrumb).AllocatorRef.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Profile).Nodes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Profile).Nodes.ArrayNum = 0;
  (this->Profile).Nodes.ArrayMax = 0;
  (this->Profile).Current = (FNode *)0x0;
  (this->Profile).Prev = (FNode *)0x0;
  (this->Profile).First = (FNode *)0x0;
  (this->Profile).bProfileFrame = false;
  return this;
}

// operator() @ 145c4c740

void __thiscall
`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::
__l41::<lambda_5>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *pFVar3;
  IModuleInterface *pIVar4;
  FText *pFVar5;
  wchar_t *pwVar6;
  FName local_res10;
  undefined8 local_28;
  longlong local_20;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&ProfileVisualizerModule,L"ProfileVisualizer");
    _Init_thread_footer(&::_TSS0);
  }
  pFVar3 = FModuleManager::Get();
  bVar2 = FModuleManager::IsModuleLoaded(pFVar3,ProfileVisualizerModule);
  if (bVar2) {
    local_res10 = ProfileVisualizerModule;
    pFVar3 = FModuleManager::Get();
    bVar2 = FModuleManager::IsModuleLoaded(pFVar3,local_res10);
    pwVar6 = L"";
    if (!bVar2) {
      ::FName::ToString(&local_res10,&local_18);
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ModuleManager.IsModuleLoaded(ModuleName)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Modules\\ModuleManager.h"
                         ,0x15a,L"Tried to get module interface for unloaded module: \'%s\'");
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pIVar4 = FModuleManager::GetModule(pFVar3,local_res10);
    pcVar1 = *(code **)((longlong)*pIVar4 + 0x40);
    pFVar5 = FText::GetEmpty();
    if (*(int *)((longlong)this + 8) != 0) {
      pwVar6 = *(wchar_t **)this;
    }
    local_28 = *(undefined8 *)((longlong)this + 0x10);
    local_20 = *(longlong *)((longlong)this + 0x18);
    if (local_20 != 0) {
      LOCK();
      *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
      UNLOCK();
    }
    (*pcVar1)(pIVar4,&local_28,pwVar6,pFVar5,&FLinearColor::White);
  }
  return;
}

// AccumulateTime @ 145c4cee0

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::AccumulateTime
          (FQueueState *this,ulong64 param_1,ulong64 param_2,ulong64 param_3)

{
  FStatState *pFVar1;
  ulong64 *puVar2;
  <unnamed_type_Exclusive> *p<Var3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  FNode *pFVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  byte bVar13;
  longlong lVar14;
  undefined1 *puVar15;
  ulonglong *puVar16;
  uint uVar17;
  int iVar18;
  undefined1 *puVar19;
  uint *puVar20;
  int iVar21;
  undefined1 local_res8 [8];
  uint local_res10;
  int local_res18;
  int local_res20;
  undefined4 uStack_7c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveStats).field_0x10;
  iVar12 = *(int *)&(this->ActiveStats).field_0x28;
  iVar18 = 0;
  iVar21 = 0;
  uVar10 = 1;
  iVar11 = 0;
  if (iVar12 != 0) {
    puVar20 = *(uint **)&(this->ActiveStats).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)TStack_70.Array;
    }
    uVar5 = *puVar20;
    while (uVar5 == 0) {
      lVar14 = (longlong)iVar21;
      iVar18 = iVar18 + 0x20;
      iVar21 = iVar21 + 1;
      iVar11 = iVar12;
      if ((int)(iVar12 + -1 + (iVar12 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_145c4cf8d;
      uVar5 = puVar20[lVar14 + 1];
    }
    uVar10 = -uVar5 & uVar5;
    uVar4 = (ulonglong)uVar10 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    iVar11 = local_res18 + -1 + iVar18;
    if (iVar12 < iVar11) {
      iVar11 = iVar12;
    }
  }
LAB_145c4cf8d:
  local_res10 = *(uint *)&(this->ActiveStats).field_0x28;
  TStack_70._padding_ = CONCAT44(uVar10,iVar21);
  TStack_70.CurrentBitIndex = iVar11;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  uVar10 = local_res10 & 0xffffffe0;
  iVar21 = (int)local_res10 >> 5;
  TStack_70._28_4_ = iVar11;
  TStack_70.BaseBitIndex = iVar18;
  uStack_50 = CONCAT44(uStack_7c,
                       *(int *)&(this->ActiveStats).field_0x8 -
                       *(int *)&(this->ActiveStats).field_0x34);
  bVar13 = (byte)local_res10;
  if ((((int)local_res10 < 0) || (iVar12 < (int)local_res10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = *(uint *)&(this->ActiveStats).field_0x28;
  uVar17 = local_res10;
  if (local_res10 != uVar5) {
    puVar19 = *(undefined1 **)&(this->ActiveStats).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = &(this->ActiveStats).field_0x10;
    }
    uVar17 = -1 << (bVar13 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar21 * 4);
    while (uVar17 == 0) {
      lVar14 = (longlong)iVar21;
      uVar10 = uVar10 + 0x20;
      iVar21 = iVar21 + 1;
      local_res10 = uVar5;
      uVar17 = uVar5;
      if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar21) goto LAB_145c4d0c0;
      uVar17 = *(uint *)(puVar19 + lVar14 * 4 + 4);
    }
    uVar4 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res20 = (int)lVar14;
    local_res10 = local_res20 + -1 + uVar10;
    uVar17 = local_res10;
    if ((int)uVar5 < (int)local_res10) {
      local_res10 = uVar5;
      uVar17 = uVar5;
    }
  }
LAB_145c4d0c0:
  do {
    if (*(int *)&(this->ActiveStats).field_0x8 - *(int *)&(this->ActiveStats).field_0x34 !=
        (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar14 = (longlong)TStack_70.CurrentBitIndex;
    if ((TStack_70.CurrentBitIndex == uVar17) &&
       (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveStats).field_0x10))
    {
      if ((this->ActiveStatsStack).ArrayNum == 0) {
        pFVar1 = &(this->Timestamps).WholeQueueStat;
        (pFVar1->Exclusive).BusyCycles = (pFVar1->Exclusive).BusyCycles + param_1;
        puVar2 = &(this->Timestamps).WholeQueueStat.Exclusive.IdleCycles;
        *puVar2 = *puVar2 + param_3;
        puVar2 = &(this->Timestamps).WholeQueueStat.Exclusive.WaitCycles;
        *puVar2 = *puVar2 + param_2;
      }
      p<Var3 = &(this->Timestamps).WholeQueueStat.Inclusive;
      p<Var3->BusyCycles = p<Var3->BusyCycles + param_1;
      puVar2 = &(this->Timestamps).WholeQueueStat.Inclusive.IdleCycles;
      *puVar2 = *puVar2 + param_3;
      puVar2 = &(this->Timestamps).WholeQueueStat.Inclusive.WaitCycles;
      *puVar2 = *puVar2 + param_2;
      for (pFVar7 = (this->Profile).Current; pFVar7 != (FNode *)0x0; pFVar7 = pFVar7->Parent) {
        puVar2 = &(pFVar7->Inclusive).BusyCycles;
        *puVar2 = *puVar2 + param_1;
        puVar2 = &(pFVar7->Inclusive).IdleCycles;
        *puVar2 = *puVar2 + param_3;
        puVar2 = &(pFVar7->Inclusive).WaitCycles;
        *puVar2 = *puVar2 + param_2;
        if (pFVar7 == (this->Profile).Current) {
          puVar2 = &(pFVar7->Exclusive).BusyCycles;
          *puVar2 = *puVar2 + param_1;
          puVar2 = &(pFVar7->Exclusive).IdleCycles;
          *puVar2 = *puVar2 + param_3;
          puVar2 = &(pFVar7->Exclusive).WaitCycles;
          *puVar2 = *puVar2 + param_2;
        }
      }
      return;
    }
    lVar6 = *(longlong *)&this->ActiveStats;
    uVar4 = *(ulonglong *)(lVar6 + lVar14 * 0x18);
    uVar10 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    if (*(int *)&(this->Timestamps).Stats.field_0x8 != *(int *)&(this->Timestamps).Stats.field_0x34)
    {
      puVar19 = *(undefined1 **)&(this->Timestamps).Stats.field_0x40;
      puVar15 = &(this->Timestamps).Stats.field_0x38;
      if (puVar19 != (undefined1 *)0x0) {
        puVar15 = puVar19;
      }
      iVar12 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->Timestamps).Stats.field_0x48 - 1U &
                       (uVar10 >> 0x10 ^ uVar10)) * 4);
      if (iVar12 != -1) {
        do {
          puVar16 = (ulonglong *)((longlong)iVar12 * 0x40 + *(longlong *)&(this->Timestamps).Stats);
          if (*puVar16 == uVar4) {
            if (puVar16 != (ulonglong *)0x0) goto LAB_145c4d1c3;
            goto LAB_145c4d19d;
          }
          iVar12 = (int)puVar16[7];
        } while (iVar12 != -1);
      }
    }
    puVar16 = (ulonglong *)0x0;
LAB_145c4d19d:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
LAB_145c4d1c3:
    puVar16[4] = puVar16[4] + param_1;
    puVar16[5] = puVar16[5] + param_3;
    puVar16[6] = puVar16[6] + param_2;
    iVar12 = (this->ActiveStatsStack).ArrayNum;
    if (0 < iVar12) {
      uVar10 = 0;
      if ((int)(iVar12 - 1U) < iVar12) {
        uVar10 = ~(iVar12 - 1U) >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)
           ((this->ActiveStatsStack).AllocatorInstance.Data +
           (longlong)(this->ActiveStatsStack).ArrayNum * 8 + -8) ==
          *(longlong *)(lVar6 + lVar14 * 0x18)) {
        puVar16[1] = puVar16[1] + param_1;
        puVar16[2] = puVar16[2] + param_3;
        puVar16[3] = puVar16[3] + param_2;
      }
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// BeginBreadcrumb @ 145c50460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::BeginBreadcrumb
          (FQueueState *this,FBeginBreadcrumb *param_1)

{
  TArray<FRHIBreadcrumbData_Stats,TSizedDefaultAllocator<32>_> *pTVar1;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar2;
  FScriptContainerElement *pFVar3;
  FRHIBreadcrumbNode *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  int *piVar8;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar9;
  wchar_t *pwVar10;
  uint uVar11;
  ulonglong uVar12;
  ulong64 uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined1 auStack_1c8 [32];
  longlong *local_1a8;
  FScriptContainerElement *local_1a0;
  longlong local_198;
  longlong local_190;
  undefined8 local_188;
  FRHIBreadcrumbNode *local_178;
  FRHIBreadcrumbAllocator *local_170;
  FSharedReferencer<1> FStack_168;
  undefined8 local_160;
  FSharedReferencer<1> local_158;
  FString local_150;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_140;
  undefined1 local_128 [256];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  uVar13 = param_1->GPUTimestampTOP - this->LastGPUCycles;
  if (param_1->GPUTimestampTOP <= this->LastGPUCycles) {
    uVar13 = 0;
  }
  AccumulateTime(this,uVar13,0,0);
  uVar12 = param_1->GPUTimestampTOP;
  if (param_1->GPUTimestampTOP < this->LastGPUCycles) {
    uVar12 = this->LastGPUCycles;
  }
  this->LastGPUCycles = uVar12;
  plVar15 = &param_1->Breadcrumb->Data->_padding_;
  uVar12 = *plVar15;
  if (uVar12 != 0) {
    uVar11 = ((uint)(uVar12 >> 0x14) & 0xffff ^ (uint)(uVar12 >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    piVar8 = TMapBase<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
             ::FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&>
                       ((TMapBase<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
                         *)&this->ActiveStats,uVar11 >> 0x10 ^ uVar11,
                        (FRHIBreadcrumbData_Stats *)plVar15);
    iVar7 = *piVar8;
    *piVar8 = iVar7 + 1;
    if (iVar7 == 0) {
      uVar11 = ((uint)((ulonglong)*plVar15 >> 0x14) & 0xffff ^ (uint)((ulonglong)*plVar15 >> 4)) *
               -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
      ::FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&>
                ((TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
                  *)&(this->Timestamps).Stats,uVar11 >> 0x10 ^ uVar11,
                 (FRHIBreadcrumbData_Stats *)plVar15);
    }
    pTVar1 = &this->ActiveStatsStack;
    pFVar3 = (pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= plVar15) &&
       (lVar14 = (longlong)(this->ActiveStatsStack).ArrayMax, plVar15 < pFVar3 + lVar14 * 8)) {
      local_190 = (longlong)(this->ActiveStatsStack).ArrayNum;
      local_188 = 8;
      local_1a8 = plVar15;
      local_1a0 = pFVar3;
      local_198 = lVar14;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->ActiveStatsStack).ArrayNum;
    piVar8 = &(this->ActiveStatsStack).ArrayMax;
    if (iVar7 == *piVar8) {
      iVar7 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar1->AllocatorInstance,piVar8);
    }
    (this->ActiveStatsStack).ArrayNum = iVar7 + 1;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 8) = *plVar15;
  }
  local_178 = param_1->Breadcrumb;
  local_170 = (FRHIBreadcrumbAllocator *)0x0;
  FStack_168.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((local_178 != (FRHIBreadcrumbNode *)0x0) && (local_178 != FRHIBreadcrumbNode::Sentinel)) {
    pTVar9 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                       ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)local_178->Allocator,
                        &local_140);
    local_158.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_170 = pTVar9->Object;
    if (local_158.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_158.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_158.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_160 = 0;
    SharedPointerInternals::FSharedReferencer<1>::operator=(&FStack_168,&local_158);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
  }
  (this->Breadcrumb).Node = local_178;
  pTVar2 = &(this->Breadcrumb).AllocatorRef;
  if (pTVar2 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_170) {
    pTVar2->Object = local_170;
    local_170 = (FRHIBreadcrumbAllocator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Breadcrumb).AllocatorRef.SharedReferenceCount,&FStack_168);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_168.ReferenceController);
  pFVar4 = (this->Breadcrumb).Node;
  (**(code **)pFVar4->_padding_)(pFVar4,(this->Queue).field0_0x0.Value,param_1->GPUTimestampTOP);
  if ((this->Profile).bProfileFrame != false) {
    pwVar10 = (wchar_t *)
              (**(code **)(param_1->Breadcrumb->_padding_ + 0x10))(param_1->Breadcrumb,local_128);
    ::FString::FString(&local_150,pwVar10);
    <unnamed-type-Profile>::PushNode(&this->Profile,&local_150);
    if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_150.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// EndBreadcrumb @ 145c56a40

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::EndBreadcrumb
          (FQueueState *this,FEndBreadcrumb *param_1)

{
  int *piVar1;
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar2;
  FScriptContainerElement *_Dst;
  FRHIBreadcrumbData *pFVar3;
  longlong lVar4;
  FRHIBreadcrumbNode *pFVar5;
  FNode *pFVar6;
  code *pcVar7;
  bool bVar8;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  ulong64 uVar14;
  undefined1 *puVar15;
  ulong64 uVar16;
  FSharedReferencer<1> local_50;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_48;
  FRHIBreadcrumbNode *local_38;
  FRHIBreadcrumbAllocator *local_30;
  FSharedReferencer<1> aFStack_28 [2];
  
  uVar16 = 0;
  uVar14 = param_1->GPUTimestampBOP - this->LastGPUCycles;
  if (param_1->GPUTimestampBOP <= this->LastGPUCycles) {
    uVar14 = uVar16;
  }
  AccumulateTime(this,uVar14,0,0);
  uVar11 = param_1->GPUTimestampBOP;
  if (param_1->GPUTimestampBOP < this->LastGPUCycles) {
    uVar11 = this->LastGPUCycles;
  }
  this->LastGPUCycles = uVar11;
  pFVar3 = param_1->Breadcrumb->Data;
  uVar11 = pFVar3->_padding_;
  if (uVar11 != 0) {
    uVar10 = ((uint)(uVar11 >> 0x14) & 0xffff ^ (uint)(uVar11 >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar14 = uVar16;
    if (*(int *)&(this->ActiveStats).field_0x8 != *(int *)&(this->ActiveStats).field_0x34) {
      puVar15 = *(undefined1 **)&(this->ActiveStats).field_0x40;
      if (puVar15 == (undefined1 *)0x0) {
        puVar15 = &(this->ActiveStats).field_0x38;
      }
      iVar13 = *(int *)(puVar15 +
                       (ulonglong)
                       (*(int *)&(this->ActiveStats).field_0x48 - 1U & (uVar10 >> 0x10 ^ uVar10)) *
                       4);
      if (iVar13 != -1) {
        lVar4 = *(longlong *)&this->ActiveStats;
        do {
          uVar14 = lVar4 + (longlong)iVar13 * 0x18;
          if (*(ulonglong *)(lVar4 + (longlong)iVar13 * 0x18) == uVar11) {
            if (uVar14 != 0) goto LAB_145c56b65;
            break;
          }
          iVar13 = *(int *)(uVar14 + 0x10);
          uVar14 = uVar16;
        } while (iVar13 != -1);
      }
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pair != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                       ,0x288,L"");
    if (bVar8) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
LAB_145c56b65:
    piVar1 = (int *)(uVar14 + 8);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
      ::FindAndRemoveChecked(&this->ActiveStats,(FRHIBreadcrumbData_Stats *)&pFVar3->_padding_);
    }
    iVar13 = (this->ActiveStatsStack).ArrayNum;
    uVar12 = iVar13 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar13) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((*(longlong *)
          ((this->ActiveStatsStack).AllocatorInstance.Data +
          (longlong)(this->ActiveStatsStack).ArrayNum * 8 + -8) != pFVar3->_padding_) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveStatsStack.Last() == Stat",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                           ,0x884,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->ActiveStatsStack).ArrayNum;
    uVar12 = iVar13 - 1;
    uVar10 = 0;
    if ((int)uVar12 < iVar13) {
      uVar10 = ~uVar12 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (this->ActiveStatsStack).ArrayNum + ~uVar12;
    _Dst = (this->ActiveStatsStack).AllocatorInstance.Data + (longlong)(int)uVar12 * 8;
    if (iVar13 != 0) {
      memmove(_Dst,_Dst + 8,(longlong)iVar13 << 3);
    }
    piVar1 = &(this->ActiveStatsStack).ArrayNum;
    *piVar1 = *piVar1 + -1;
  }
  pFVar5 = (this->Breadcrumb).Node;
  (**(code **)(pFVar5->_padding_ + 8))
            (pFVar5,(this->Queue).field0_0x0.Value,param_1->GPUTimestampBOP);
  local_30 = (FRHIBreadcrumbAllocator *)0x0;
  aFStack_28[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_38 = param_1->Breadcrumb->Parent;
  if ((local_38 != (FRHIBreadcrumbNode *)0x0) && (local_38 != FRHIBreadcrumbNode::Sentinel)) {
    pTVar9 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                       ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)local_38->Allocator,&local_48)
    ;
    local_50.ReferenceController = (pTVar9->SharedReferenceCount).ReferenceController;
    local_30 = pTVar9->Object;
    if (local_50.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_50.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_50.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    SharedPointerInternals::FSharedReferencer<1>::operator=(aFStack_28,&local_50);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
  }
  (this->Breadcrumb).Node = local_38;
  pTVar2 = &(this->Breadcrumb).AllocatorRef;
  if (pTVar2 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_30) {
    pTVar2->Object = local_30;
    local_30 = (FRHIBreadcrumbAllocator *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->Breadcrumb).AllocatorRef.SharedReferenceCount,aFStack_28);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (aFStack_28[0].ReferenceController);
  if ((this->Profile).bProfileFrame != false) {
    pFVar6 = (this->Profile).Current;
    if (((pFVar6 == (FNode *)0x0) || (pFVar6->Parent == (FNode *)0x0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Current && Current->Parent",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                           ,0x702,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    (this->Profile).Current = ((this->Profile).Current)->Parent;
  }
  return;
}

// FrameBoundary @ 145c581c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary
          (FQueueState *this,FFrameBoundary *param_1,FFrameState *param_2,uint param_3)

{
  <unnamed_type_Profile> *this_00;
  undefined1 *puVar1;
  ulonglong uVar2;
  FQueue_u_0 FVar3;
  FQueue_u_0 FVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  code *pcVar9;
  <lambda_1> <Var10;
  FQueueTimestamps *pFVar11;
  TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
  *pTVar12;
  bool bVar13;
  wchar_t *pwVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  undefined1 *puVar19;
  uint *puVar20;
  uint uVar21;
  undefined1 auStack_278 [32];
  undefined1 local_258 [4];
  uint local_254;
  <lambda_1> local_250;
  TPairInitializer<UE::RHI::GPUProfiler::FQueue_const_&,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps_&&>
  local_248;
  TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
  *local_238;
  int iStack_230;
  uint uStack_22c;
  undefined1 *local_228;
  undefined4 uStack_220;
  int iStack_21c;
  int local_218;
  undefined4 uStack_214;
  int iStack_210;
  undefined4 uStack_20c;
  TMap<FRHIBreadcrumbData_Stats,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,int,0>_>
  *local_208;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_200;
  undefined8 uStack_1e0;
  FQueueState *local_1d8;
  FQueueTimestamps *local_1d0;
  FString local_1c8;
  FString local_1b8 [2];
  undefined4 local_18c;
  <unnamed_type_Profile> local_188;
  FQueue_u_0 *local_158;
  longlong local_150;
  undefined1 local_148 [256];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_278;
  local_254 = param_3;
  local_248.Value = (FQueueTimestamps *)param_1;
  if ((this->bBusy != false) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!bBusy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\GPUProfiler.cpp"
                          ,0x8ce,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar3 = (this->Queue).field0_0x0;
  (this->Timestamps).CPUFrameBoundary = param_1->CPUTimestamp;
  FVar4 = (FQueue_u_0)param_1->FrameNumber;
  if (-1 < GpuChannel->Enabled) {
    Trace::Private::FLogScope::Enter<UE::RHI::GPUProfiler::FGpuProfilerEventFrameBoundaryFields>
              ((TLogScope<0> *)&local_158);
    *local_158 = FVar3;
    local_158[1] = FVar4;
    *(undefined8 *)(local_150 + 0x28) = *(undefined8 *)(local_150 + 0x20);
  }
  this_00 = &this->Profile;
  iVar16 = 0;
  if ((this->Profile).bProfileFrame != false) {
    <unnamed-type-Profile>::LogTree(this_00,this,param_1->FrameNumber);
    if (this_00 != &local_188) {
      DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int>
                ((TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>
                  *)(this_00->Nodes).AllocatorInstance.Data,(this->Profile).Nodes.ArrayNum);
      pFVar7 = (this_00->Nodes).AllocatorInstance.Data;
      if (pFVar7 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar7);
      }
      (this_00->Nodes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (this->Profile).Nodes.ArrayNum = 0;
      (this->Profile).Nodes.ArrayMax = 0;
    }
    (this->Profile).Current = (FNode *)0x0;
    (this->Profile).Prev = (FNode *)0x0;
    (this->Profile).First = (FNode *)0x0;
    (this->Profile).bProfileFrame = false;
    DestructItems<TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>,int>
              ((TUniquePtr<UE::RHI::GPUProfiler::FNode,TDefaultDelete<UE::RHI::GPUProfiler::FNode>_>
                *)0x0,0);
  }
  local_1d8 = this;
  local_1d0 = &this->Timestamps;
  TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<UE::RHI::GPUProfiler::FQueue_const_&,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps_&&>_>
            ((TSet<TTuple<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps>,TDefaultMapHashableKeyFuncs<UE::RHI::GPUProfiler::FQueue,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueTimestamps,0>,FDefaultSetAllocator>
              *)param_2,&local_248,(bool *)&local_1d8);
  puVar1 = &(this->ActiveStats).field_0x10;
  uStack_22c = 1;
  iVar5 = *(int *)&(this->ActiveStats).field_0x28;
  local_238 = &this->ActiveStats;
  iStack_21c = iVar16;
  iStack_230 = iVar16;
  if (iVar5 != 0) {
    puVar20 = *(uint **)&(this->ActiveStats).field_0x20;
    if (puVar20 == (uint *)0x0) {
      puVar20 = (uint *)puVar1;
    }
    uVar18 = *puVar20;
    iStack_230 = 0;
    while (uVar18 == 0) {
      lVar15 = (longlong)iStack_230;
      iVar16 = iVar16 + 0x20;
      iStack_230 = iStack_230 + 1;
      iStack_21c = iVar5;
      if ((int)(iVar5 + -1 + (iVar5 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_230) goto LAB_145c5837e;
      uVar18 = puVar20[lVar15 + 1];
    }
    uStack_22c = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_22c * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_248.Key._4_4_ = (int)lVar15;
    iStack_21c = iVar16 + -1 + local_248.Key._4_4_;
    if (iVar5 < iStack_21c) {
      iStack_21c = iVar5;
    }
  }
LAB_145c5837e:
  uVar18 = *(uint *)&(this->ActiveStats).field_0x28;
  uStack_214 = local_18c;
  iStack_210 = *(int *)&(this->ActiveStats).field_0x8 - *(int *)&(this->ActiveStats).field_0x34;
  uStack_220 = 0xffffffff;
  uVar21 = uVar18 & 0xffffffe0;
  TStack_200._padding_ = CONCAT44(uStack_22c,iStack_230);
  TStack_200.CurrentBitIndex = iStack_21c;
  TStack_200.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar18 >> 5;
  TStack_200._28_4_ = local_18c;
  TStack_200.BaseBitIndex = iVar16;
  uStack_1e0 = CONCAT44(uStack_20c,iStack_210);
  local_228 = puVar1;
  local_218 = iVar16;
  local_208 = local_238;
  TStack_200.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar5 < (int)uVar18)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar6 = *(uint *)&(this->ActiveStats).field_0x28;
  if (uVar18 != uVar6) {
    puVar19 = *(undefined1 **)&(this->ActiveStats).field_0x20;
    if (puVar19 == (undefined1 *)0x0) {
      puVar19 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar19 + (longlong)iVar17 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar17;
      uVar21 = uVar21 + 0x20;
      iVar17 = iVar17 + 1;
      uVar18 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17) goto LAB_145c5848b;
      uVar18 = *(uint *)(puVar19 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    uVar18 = (int)lVar15 + -1 + uVar21;
    if ((int)uVar6 < (int)uVar18) {
      uVar18 = uVar6;
    }
  }
LAB_145c5848b:
  while( true ) {
    pTVar12 = local_208;
    if (*(int *)&local_208->field_0x8 - *(int *)&local_208->field_0x34 != (int)uStack_1e0) {
      `TSparseArray<TSparseSetElement<TTuple<FRHIBreadcrumbData_Stats,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_258);
    }
    pFVar11 = local_248.Value;
    if (((TStack_200.CurrentBitIndex == uVar18) &&
        (TStack_200.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
       (pTVar12 == &this->ActiveStats)) break;
    lVar15 = *(longlong *)pTVar12;
    uVar2 = *(ulonglong *)(lVar15 + (longlong)TStack_200.CurrentBitIndex * 0x18);
    uVar21 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
    uVar21 = (uVar21 >> 0xd ^ uVar21) * -0x3d4d51cb;
    TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
    ::FindOrAddImpl<FRHIBreadcrumbData_Stats_const_&>
              ((TMapBase<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRHIBreadcrumbData_Stats,UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FStatState,0>_>
                *)&(this->Timestamps).Stats,uVar21 >> 0x10 ^ uVar21,
               (FRHIBreadcrumbData_Stats *)(lVar15 + (longlong)TStack_200.CurrentBitIndex * 0x18));
    TStack_200.UnvisitedBitMask = TStack_200.UnvisitedBitMask & ~TStack_200._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_200);
  }
  if (local_254 == ((local_248.Value)->Queue).Values.ArrayNum + 1U) {
    (this->Profile).bProfileFrame = true;
    ::FString::FString(&local_1c8,L"<root>");
    <unnamed-type-Profile>::PushNode(this_00,&local_1c8);
    if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
    }
    pFVar8 = (FRHIBreadcrumbNode *)(pFVar11->WholeQueueStat).Exclusive.IdleCycles;
    if (pFVar8 != (FRHIBreadcrumbNode *)0x0) {
      local_250.__this = this;
      `UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary'::__l19::
      <lambda_1>::
      operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::FrameBoundary_::__l19::<lambda_1>_>
                (&local_250,&local_250,pFVar8->Parent);
      <Var10.__this = local_250.__this;
      pwVar14 = (wchar_t *)(**(code **)(pFVar8->_padding_ + 0x10))(pFVar8,local_148);
      ::FString::FString(local_1b8,pwVar14);
      <unnamed-type-Profile>::PushNode(&(<Var10.__this)->Profile,local_1b8);
      if (local_1b8[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8[0].Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// LogTree @ 145c615c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree
          (<unnamed_type_Profile> *this,FQueueState *param_1,uint param_2)

{
  int *piVar1;
  void *_Src;
  FNode *pFVar2;
  code *pcVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  TConsoleVariableData<int> *pTVar5;
  TConsoleVariableData<FString> *pTVar6;
  TConsoleVariableData<float> *pTVar7;
  TConsoleVariableData<bool> *pTVar8;
  FIdentityFunctor FVar9;
  bool bVar10;
  longlong lVar11;
  TSharedPtr<FVisualizerEvent,1> *pTVar12;
  int iVar13;
  longlong *plVar14;
  longlong lVar15;
  ForAnyElementType FVar16;
  FScriptContainerElement *pFVar17;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar18;
  int iVar19;
  FScriptContainerElement *pFVar20;
  FQueueState *pFVar21;
  undefined **ppuVar22;
  bool bVar23;
  <unnamed_type_Profile> *p<Var24;
  ForAnyElementType FVar25;
  float fVar26;
  undefined1 auStackY_338 [32];
  FIdentityFunctor local_2e8;
  undefined1 local_2e7;
  undefined1 local_2e6 [6];
  <unnamed_type_Profile> *local_2e0;
  undefined4 local_2d8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_2d0;
  FWildcardString local_2c0;
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  FVisualizerEvent *local_2a0;
  TReferenceControllerBase<1> *local_298;
  ForAnyElementType local_290;
  int local_288;
  int local_284;
  int local_280 [2];
  FQueueState *local_278;
  ulong64 local_270;
  double local_268;
  <lambda_3> local_260;
  FString local_258;
  FString local_248;
  ulong64 local_238;
  TStatIdData *local_230;
  FConstructor local_228;
  undefined8 *local_220;
  FString local_218;
  <lambda_4> local_208;
  FString local_1f8;
  <lambda_2> local_1e8;
  TStatId local_1c8 [2];
  longlong local_1b8 [3];
  longlong *local_1a0;
  void *local_198 [2];
  void *local_188 [2];
  void *local_178 [2];
  TSharedPtr<FVisualizerEvent,1> local_168;
  TSharedPtr<FVisualizerEvent,1> local_158;
  FTable local_148;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  bVar23 = false;
  local_2d8 = 0;
  local_2e0 = this;
  local_278 = param_1;
  FTable::FTable(&local_148);
  pTVar5 = GCVarProfileGPU_Sort.Ref;
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 4;
  }
  pTVar6 = GCVarProfileGPU_Root.Ref;
  iVar13 = 3;
  if (*(int *)((longlong)pTVar5->ShadowedValue + lVar11) < 3) {
    iVar13 = *(int *)((longlong)pTVar5->ShadowedValue + lVar11);
  }
  iVar19 = 0;
  if (0 < iVar13) {
    iVar19 = iVar13;
  }
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), bVar10)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 0x10;
  }
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = *(int *)((longlong)&pTVar6->ShadowedValue[0].Data.ArrayNum + lVar11);
  lVar15 = (longlong)local_288;
  _Src = *(void **)((longlong)&pTVar6->ShadowedValue[0].Data.AllocatorInstance.Data + lVar11);
  if (local_288 == 0) {
    local_284 = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_288,0,&local_290,local_288,&local_284);
    memcpy(local_290.Data,_Src,lVar15 * 2);
  }
  iVar13 = local_288;
  FVar25.Data = local_290.Data;
  local_2c0._0_8_ = (FScriptContainerElement *)0x0;
  local_2c0._8_4_ = local_288;
  if (local_288 == 0) {
    local_2c0._12_4_ = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_288,0,(ForAnyElementType *)&local_2c0,local_288,
               (int *)((longlong)&local_2c0 + 0xc));
    memcpy((void *)local_2c0._0_8_,FVar25.Data,(longlong)iVar13 * 2);
  }
  if (local_290.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_290.Data);
  }
  pTVar8 = GCVarProfileGPU_ShowLeafEvents.Ref;
  bVar10 = IsInParallelGameThread();
  if (bVar10) {
LAB_145c61754:
    lVar11 = 0;
  }
  else {
    bVar10 = IsInGameThread();
    lVar11 = 1;
    if (bVar10) goto LAB_145c61754;
  }
  pTVar7 = GCVarProfileGPU_ThresholdPercent.Ref;
  local_2e8 = *(FIdentityFunctor *)(pTVar8->ShadowedValue + lVar11);
  bVar10 = IsInParallelGameThread();
  if ((bVar10) || (bVar10 = IsInGameThread(), lVar11 = 4, bVar10)) {
    lVar11 = 0;
  }
  p<Var24 = local_2e0;
  FVar9 = local_2e8;
  fVar26 = *(float *)((longlong)pTVar7->ShadowedValue + lVar11);
  if (__real_42c80000 <= fVar26) {
    fVar26 = __real_42c80000;
  }
  if (fVar26 <= 0.0) {
    fVar26 = 0.0;
  }
  local_268 = (double)fVar26;
  if (iVar19 != 0) {
    for (pFVar2 = local_2e0->First; pFVar2 != (FNode *)0x0; pFVar2 = pFVar2->Next) {
      local_280[0] = iVar19;
      AlgoImpl::
      IntroSortInternal<UE::RHI::GPUProfiler::FNode_*,int,FIdentityFunctor,TDereferenceWrapper<UE::RHI::GPUProfiler::FNode_*,_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l7::<lambda_1>_>_>
                ((FNode **)(pFVar2->Children).AllocatorInstance.Data,(pFVar2->Children).ArrayNum,
                 FVar9,(<lambda_1> *)local_280);
    }
  }
  pFVar2 = p<Var24->First;
  local_1e8.PercentThreshold = &local_268;
  local_1e8.RootWildcard = &local_2c0;
  local_1e8.bShowEmptyNodes = (bool *)&local_2e8;
  local_1e8.Table = &local_148;
  if ((pFVar2 != (FNode *)0x0) && ((pFVar2->Inclusive).BusyCycles != 0)) {
    `UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::
    LogTree'::__l2::<lambda_2>::
    operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l2::<lambda_2>_>
              (&local_1e8,&local_1e8,(FNode *)0x0,pFVar2,false,0);
  }
  FVar25.Data = (FScriptContainerElement *)0x0;
  if (local_148.bShowHeader != false) {
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
              (IConsoleManager::Singleton,local_178,GCVarProfileGPU_ShowLeafEvents._padding_);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
              (IConsoleManager::Singleton,local_188,GCVarProfileGPU_ThresholdPercent._padding_);
    if (((IConsoleManager::Singleton == (IConsoleManager *)0x0) &&
        (IConsoleManager::SetupSingleton(), IConsoleManager::Singleton == (IConsoleManager *)0x0))
       && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("Singleton != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                               ,0x4fb,L""), bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (**(code **)((longlong)*IConsoleManager::Singleton + 0xd0))
              (IConsoleManager::Singleton,local_198,GCVarProfileGPU_Root._padding_);
    ::FString::PrintfImpl
              (&local_258,
               L"    - %-30s: %.2fms\n    - %-30s: \"%s\"\n    - %-30s: %.2f%%\n    - %-30s: %s\n\n"
              );
    FVar25.Data = local_258.Data.AllocatorInstance.Data;
    local_258.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_258.Data.ArrayNum = 0;
    local_258.Data.ArrayMax = 0;
    if (local_198[0] != (void *)0x0) {
      FMemory::Free(local_198[0]);
    }
    if (local_188[0] != (void *)0x0) {
      FMemory::Free(local_188[0]);
    }
    p<Var24 = local_2e0;
    if (local_178[0] != (void *)0x0) {
      FMemory::Free(local_178[0]);
      p<Var24 = local_2e0;
    }
  }
  pFVar21 = local_278;
  ::FString::PrintfImpl(&local_248,L"Frame %d - %s %d - GPU %d");
  if (local_148.NumRows != 0) {
    ppuVar22 = &`public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToString(void)const___ptr64'
                ::__l5::Unicode;
    if (local_148.bUnicodeOutput == false) {
      ppuVar22 = &`public:_class_FString___cdecl_UE::RHI::GPUProfiler::FTable::ToString(void)const___ptr64'
                  ::__l7::Ascii;
    }
    FTable::ToStringInner(&local_148,&local_218,(FFormat *)ppuVar22);
    bVar23 = true;
  }
  ::FString::PrintfImpl(&local_1f8,L"\nGPU Profile for %s\n\n%s%s");
  if ((bVar23) && (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_218.Data.AllocatorInstance.Data);
  }
  if ((local_148.NumRows != 0) || (local_148.bShowEmptyQueues != false)) {
    local_2d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2d0.ArrayNum = 0;
    local_2d0.ArrayMax = 0;
    ::FString::ParseIntoArrayLines(&local_1f8,&local_2d0,false);
    iVar13 = local_2d0.ArrayNum;
    pFVar20 = local_2d0.AllocatorInstance.Data + (longlong)local_2d0.ArrayNum * 0x10;
    FVar16.Data = local_2d0.AllocatorInstance.Data;
    while( true ) {
      if (local_2d0.ArrayNum != iVar13) {
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_2e7);
      }
      if (FVar16.Data == pFVar20) break;
      if (3 < (byte)LogRHI._0_1_) {
        Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
      }
      FVar16.Data = FVar16.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_2d0.AllocatorInstance.Data,local_2d0.ArrayNum);
    pFVar21 = local_278;
    if (local_2d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2d0.AllocatorInstance.Data);
      pFVar21 = local_278;
    }
  }
  pTVar8 = GCVarProfileGPU_ShowUI.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    lVar11 = 1;
    if (!bVar10) goto LAB_145c61c60;
  }
  lVar11 = 0;
LAB_145c61c60:
  if (((pTVar8->ShadowedValue[lVar11] != false) &&
      ((pFVar21->Queue).field0_0x0._s_0.Type == Graphics)) && (local_148.NumRows != 0)) {
    pFVar2 = p<Var24->First;
    local_260.TotalBusyCycles = &local_270;
    local_270 = (pFVar2->Exclusive).BusyCycles;
    pFVar17 = (pFVar2->Children).AllocatorInstance.Data;
    iVar13 = (pFVar2->Children).ArrayNum;
    pFVar20 = pFVar17 + (longlong)iVar13 * 8;
    while( true ) {
      if ((pFVar2->Children).ArrayNum != iVar13) {
        `TCheckedPointerIterator<UE::RHI::GPUProfiler::FNode_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_2e6);
      }
      if (pFVar17 == pFVar20) break;
      `UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::
      LogTree'::__l42::<lambda_3>::
      operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l42::<lambda_3>_>
                (&local_260,&local_260,*(FNode **)pFVar17);
      pFVar17 = pFVar17 + 8;
    }
    local_208.TotalBusyCycles = &local_270;
    local_238 = 0;
    local_168.Object = (FVisualizerEvent *)0x0;
    local_168.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_208.StartCycles = &local_238;
    pTVar12 = `UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::
              <unnamed-type-Profile>::LogTree'::__l41::<lambda_4>::
              operator()<_UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed_type_Profile>::LogTree_::__l41::<lambda_4>_>
                        (&local_208,&local_158,&local_208,local_2e0->First,&local_168);
    FVar16.Data = local_248.Data.AllocatorInstance.Data;
    local_2b0.Data = (FScriptContainerElement *)0x0;
    local_2a8 = CONCAT44(local_2a8._4_4_,local_248.Data.ArrayNum);
    if (local_248.Data.ArrayNum == 0) {
      local_2a8 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_248.Data.ArrayNum,0,&local_2b0,local_248.Data.ArrayNum,
                 (int *)((longlong)&local_2a8 + 4));
      memcpy(local_2b0.Data,FVar16.Data,(longlong)local_248.Data.ArrayNum * 2);
    }
    local_2a0 = pTVar12->Object;
    local_298 = (pTVar12->SharedReferenceCount).ReferenceController;
    (pTVar12->SharedReferenceCount).ReferenceController = (TReferenceControllerBase<1> *)0x0;
    pTVar12->Object = (FVisualizerEvent *)0x0;
    local_1c8[0].StatIdPtr = (TStatIdData *)0x0;
    local_1a0 = FMemory::Malloc(0x28,8);
    local_1a0[1] = 0;
    *local_1a0 = (longlong)
                 &Core::Private::Function::
                  TFunction_OwnedObject<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::`41'::<lambda_5>,1,1>
                  ::_vftable_;
    local_1a0[1] = (longlong)local_2b0.Data;
    local_2b0.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(local_1a0 + 2) = (undefined4)local_2a8;
    *(undefined4 *)((longlong)local_1a0 + 0x14) = local_2a8._4_4_;
    local_2a8 = 0;
    local_1a0[3] = (longlong)local_2a0;
    local_1a0[4] = (longlong)local_298;
    local_298 = (TReferenceControllerBase<1> *)0x0;
    local_2a0 = (FVisualizerEvent *)0x0;
    if (local_1a0 + 1 != (longlong *)0x0) {
      local_1c8[0].StatIdPtr =
           (TStatIdData *)
           Core::Private::Function::
           TFunctionRefCaller<`UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::LogTree'::__l41::<lambda_5>,void>
           ::Call;
    }
    local_2d8 = 1;
    local_230 = &TStatId::TStatId_NAME_None;
    local_228.Prerequisites =
         (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *)0x0;
    TGraphTask<TFunctionGraphTaskImpl<void___cdecl(void),0>_>::FConstructor::
    ConstructAndDispatchWhenReady<TUniqueFunction<void___cdecl(void)>,TStatId_&,enum_ENamedThreads::Type_&>
              (&local_228,(TUniqueFunction<void___cdecl(void)> *)&local_220,local_1c8,
               (Type *)&local_230);
    if (local_1c8[0].StatIdPtr != (TStatIdData *)0x0) {
      plVar14 = local_1b8;
      if (local_1a0 != (longlong *)0x0) {
        plVar14 = local_1a0;
      }
      (**(code **)(*plVar14 + 0x10))();
    }
    if (local_220 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_220 + 6);
      iVar13 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar13 == 1) {
        (**(code **)*local_220)(local_220,1);
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_298);
    if (local_2b0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2b0.Data);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_158.SharedReferenceCount.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)0x0);
  }
  if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
  }
  if (local_248.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_248.Data.AllocatorInstance.Data);
  }
  if (FVar25.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar25.Data);
  }
  if ((FScriptContainerElement *)local_2c0._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_2c0._0_8_);
  }
  if (local_148.RowBreaks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.RowBreaks.AllocatorInstance.Data);
  }
  pTVar18 = (TArray<FString,TSizedDefaultAllocator<32>_> *)&local_148.RowBreaks;
  lVar11 = 0xd;
  do {
    pTVar4 = pTVar18 + -1;
    pTVar18 = pTVar18 + -1;
    lVar11 = lVar11 + -1;
    DestructItems<FString,int>((FString *)(pTVar18->AllocatorInstance).Data,pTVar4->ArrayNum);
    pFVar20 = (pTVar18->AllocatorInstance).Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  } while (lVar11 != 0);
  return;
}

// PushNode @ 145c6e5c0

void __thiscall
UE::RHI::GPUProfiler::FGPUProfilerSink_StatSystem::FQueueState::<unnamed-type-Profile>::PushNode
          (<unnamed_type_Profile> *this,FString *param_1)

{
  FNode **ppFVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNode *pFVar7;
  FNode *pFVar8;
  
  pFVar8 = this->Current;
  ppFVar1 = &this->Current;
  pFVar7 = ::operator_new(0x80);
  if (pFVar7 != (FNode *)0x0) {
    (pFVar7->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
    (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Name).Data.ArrayNum = (param_1->Data).ArrayNum;
    (pFVar7->Name).Data.ArrayMax = (param_1->Data).ArrayMax;
    (param_1->Data).ArrayNum = 0;
    (param_1->Data).ArrayMax = 0;
    pFVar7->Parent = (FNode *)0x0;
    pFVar7->Next = (FNode *)0x0;
    (pFVar7->Children).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Children).ArrayNum = 0;
    (pFVar7->Children).ArrayMax = 0;
    (pFVar7->Exclusive).NumDraws = 0;
    (pFVar7->Exclusive).NumDispatches = 0;
    (pFVar7->Exclusive).NumPrimitives = 0;
    (pFVar7->Exclusive).NumVertices = 0;
    (pFVar7->Exclusive).BusyCycles = 0;
    (pFVar7->Exclusive).IdleCycles = 0;
    (pFVar7->Exclusive).WaitCycles = 0;
    (pFVar7->Inclusive).NumDraws = 0;
    (pFVar7->Inclusive).NumDispatches = 0;
    (pFVar7->Inclusive).NumPrimitives = 0;
    (pFVar7->Inclusive).NumVertices = 0;
    (pFVar7->Inclusive).BusyCycles = 0;
    (pFVar7->Inclusive).IdleCycles = 0;
    (pFVar7->Inclusive).WaitCycles = 0;
  }
  iVar6 = (this->Nodes).ArrayNum;
  piVar2 = &(this->Nodes).ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)this,piVar2);
  }
  (this->Nodes).ArrayNum = iVar6 + 1;
  *(FNode **)((this->Nodes).AllocatorInstance.Data + (longlong)iVar6 * 8) = pFVar7;
  *ppFVar1 = pFVar7;
  pFVar7->Parent = pFVar8;
  if (this->First == (FNode *)0x0) {
    this->First = *ppFVar1;
  }
  if (pFVar8 != (FNode *)0x0) {
    pFVar3 = (pFVar8->Children).AllocatorInstance.Data;
    if (((pFVar3 <= ppFVar1) && (ppFVar1 < pFVar3 + (longlong)(pFVar8->Children).ArrayMax * 8)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar6 = (pFVar8->Children).ArrayNum;
    piVar2 = &(pFVar8->Children).ArrayMax;
    if (iVar6 == *piVar2) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(pFVar8->Children).AllocatorInstance,piVar2);
    }
    (pFVar8->Children).ArrayNum = iVar6 + 1;
    *(FNode **)((pFVar8->Children).AllocatorInstance.Data + (longlong)iVar6 * 8) = *ppFVar1;
  }
  pFVar8 = this->Current;
  if (this->Prev != (FNode *)0x0) {
    this->Prev->Next = pFVar8;
    pFVar8 = this->Current;
  }
  this->Prev = pFVar8;
  return;
}

