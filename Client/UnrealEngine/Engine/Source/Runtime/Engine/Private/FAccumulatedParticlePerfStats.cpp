// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// FAccumulatedParticlePerfStats @ 14815a120

FAccumulatedParticlePerfStats * __thiscall
FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(FAccumulatedParticlePerfStats *this)

{
  (this->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum = 0;
  (this->GameThreadStats).MaxPerFrameTotalCycles.ArrayMax = 10;
  (this->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GameThreadStats).MaxPerInstanceCycles.ArrayNum = 0;
  (this->GameThreadStats).MaxPerInstanceCycles.ArrayMax = 10;
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  (this->GameThreadStats).AccumulatedStats.NumInstances = 0;
  (this->GameThreadStats).AccumulatedStats.TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.WaitCycles = 0;
  ResetMaxArray(&(this->GameThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->GameThreadStats).MaxPerInstanceCycles);
  (this->GameThreadStats).NumFrames = 0;
  (this->GameThreadStats).AccumulatedStats.NumInstances = 0;
  (this->GameThreadStats).AccumulatedStats.TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.WaitCycles = 0;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->RenderThreadStats).AccumulatedStats.NumInstances = 0;
  (this->RenderThreadStats).AccumulatedStats.RenderUpdateCycles = 0;
  (this->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles = 0;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum = 0;
  (this->RenderThreadStats).MaxPerFrameTotalCycles.ArrayMax = 10;
  (this->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->RenderThreadStats).MaxPerInstanceCycles.ArrayNum = 0;
  (this->RenderThreadStats).MaxPerInstanceCycles.ArrayMax = 10;
  ResetMaxArray(&(this->RenderThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->RenderThreadStats).MaxPerInstanceCycles);
  (this->RenderThreadStats).NumFrames = 0;
  (this->RenderThreadStats).AccumulatedStats.NumInstances = 0;
  (this->RenderThreadStats).AccumulatedStats.RenderUpdateCycles = 0;
  (this->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles = 0;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GPUStats).AccumulatedStats.NumInstances = 0;
  (this->GPUStats).AccumulatedStats.TotalMicroseconds = 0;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.ArrayNum = 0;
  (this->GPUStats).MaxPerFrameTotalMicroseconds.ArrayMax = 10;
  (this->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned___int64>)0x0;
  (this->GPUStats).MaxPerInstanceMicroseconds.ArrayNum = 0;
  (this->GPUStats).MaxPerInstanceMicroseconds.ArrayMax = 10;
  ResetMaxArray(&(this->GPUStats).MaxPerFrameTotalMicroseconds);
  ResetMaxArray(&(this->GPUStats).MaxPerInstanceMicroseconds);
  (this->GPUStats).NumFrames = 0;
  (this->GPUStats).AccumulatedStats.NumInstances = 0;
  (this->GPUStats).AccumulatedStats.TotalMicroseconds = 0;
  ResetMaxArray(&(this->GameThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->GameThreadStats).MaxPerInstanceCycles);
  (this->GameThreadStats).NumFrames = 0;
  (this->GameThreadStats).AccumulatedStats.NumInstances = 0;
  (this->GameThreadStats).AccumulatedStats.TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.WaitCycles = 0;
  ResetRT(this);
  return this;
}

// AddMax @ 148165ba0

void __cdecl
FAccumulatedParticlePerfStats::AddMax
          (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
           *param_1,long64 param_2)

{
  uint uVar1;
  ForElementType<unsigned___int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned___int64> FVar6;
  void *pvVar7;
  int iVar8;
  ForElementType<unsigned___int64> FVar9;
  long64 local_18 [2];
  
  FVar2 = (param_1->AllocatorInstance).SecondaryData;
  FVar6 = (ForElementType<unsigned___int64>)param_1;
  if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
    FVar6 = FVar2;
  }
  FVar2 = (ForElementType<unsigned___int64>)((longlong)FVar6 + (longlong)param_1->ArrayNum * 8);
  FVar9 = FVar6;
  if (FVar6 != FVar2) {
    while (param_2 <= (longlong)(ulonglong)*(uint *)FVar9) {
      FVar9 = (ForElementType<unsigned___int64>)((longlong)FVar9 + 8);
      if (FVar9 == FVar2) {
        return;
      }
    }
    iVar8 = (int)((longlong)FVar9 - (longlong)FVar6 >> 3);
    if (iVar8 != -1) {
      if ((param_1->ArrayNum < 1) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<unsigned___int64>)param_1;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FVar6 = FVar2;
      }
      uVar1 = param_1->ArrayNum - 1;
      pvVar7 = (void *)((longlong)FVar6 + (longlong)(int)uVar1 * 8);
      iVar5 = ~uVar1 + param_1->ArrayNum;
      if (iVar5 != 0) {
        memmove(pvVar7,(void *)((longlong)pvVar7 + 8),(longlong)iVar5 << 3);
      }
      param_1->ArrayNum = param_1->ArrayNum + -1;
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<unsigned___int64>)param_1;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FVar6 = FVar2;
      }
      local_18[0] = param_2;
      if ((ulonglong)FVar6 <= local_18) {
        FVar6 = (ForElementType<unsigned___int64>)param_1;
        if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
          FVar6 = FVar2;
        }
        if ((local_18 < (long64 *)((longlong)FVar6 + (longlong)param_1->ArrayMax * 8)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar5 = param_1->ArrayNum;
      if (iVar5 == param_1->ArrayMax) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      param_1->ArrayNum = iVar5 + 1;
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      FVar6 = (ForElementType<unsigned___int64>)param_1;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        FVar6 = FVar2;
      }
      pvVar7 = (void *)((longlong)FVar6 + (longlong)iVar8 * 8);
      memmove((void *)((longlong)pvVar7 + 8),pvVar7,(longlong)(iVar5 - iVar8) << 3);
      FVar2 = (param_1->AllocatorInstance).SecondaryData;
      if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
        param_1 = (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
                   *)FVar2;
      }
      *(long64 *)((longlong)iVar8 * 8 + (longlong)param_1) = local_18[0];
    }
  }
  return;
}

// Reset @ 148191a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FAccumulatedParticlePerfStats::Reset(FAccumulatedParticlePerfStats *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  undefined ***pppuVar4;
  ulonglong uVar5;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  FAccumulatedParticlePerfStats *pFStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  FAccumulatedParticlePerfStats *pFStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  ResetMaxArray(&(this->GameThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->GameThreadStats).MaxPerInstanceCycles);
  (this->GameThreadStats).NumFrames = 0;
  (this->GameThreadStats).AccumulatedStats.NumInstances = 0;
  (this->GameThreadStats).AccumulatedStats.TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.WaitCycles = 0;
  if (param_1) {
    FlushRenderingCommands();
    ResetRT(this);
  }
  else {
    local_60 = (undefined ***)0x0;
    local_78 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`FAccumulatedParticlePerfStats::Reset'::`7'::<lambda_1>,1,0>::
                _vftable_;
    local_88[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FAccumulatedParticlePerfStats::Reset'::__l7::<lambda_1>,void,FRHICommandListImmediate_&>
                  ::Call;
    pFStack_70 = this;
    this_00 = FRenderCommandList::GetInstanceTLS();
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FAccumulatedParticlePerfStats::Reset_::__l7::TSTR_FResetAccumulatedParticlePerfMaxRT758>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_58._0_8_ = local_88[0];
      local_30 = local_60;
      local_48 = local_78;
      pFStack_40 = pFStack_70;
      local_38 = local_68;
      local_88[0] = (code *)0x0;
      local_28 = 2;
      pFVar3 = (FRenderCommandTag *)
               TRenderCommandTag<`FAccumulatedParticlePerfStats::Reset'::__l7::TSTR_FResetAccumulatedParticlePerfMaxRT758>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_58,pFVar3);
      uVar5 = (ulonglong)local_28;
      if (2 < uVar5) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_58._0_8_ != (code *)0x0) {
          pppuVar4 = (undefined ***)(local_58 + 0x10);
          if (local_30 != (undefined ***)0x0) {
            pppuVar4 = local_30;
          }
          (*(code *)(*pppuVar4)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar5])(local_58);
      }
    }
    if (local_88[0] != (code *)0x0) {
      pppuVar4 = &local_78;
      if (local_60 != (undefined ***)0x0) {
        pppuVar4 = local_60;
      }
      (*(code *)(*pppuVar4)[2])();
    }
  }
  return;
}

// ResetGT @ 1481929c0

void __thiscall FAccumulatedParticlePerfStats::ResetGT(FAccumulatedParticlePerfStats *this)

{
  ResetMaxArray(&(this->GameThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->GameThreadStats).MaxPerInstanceCycles);
  (this->GameThreadStats).NumFrames = 0;
  (this->GameThreadStats).AccumulatedStats.NumInstances = 0;
  (this->GameThreadStats).AccumulatedStats.TickGameThreadCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.TickConcurrentCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.FinalizeCycles = 0;
  LOCK();
  (this->GameThreadStats).AccumulatedStats.EndOfFrameCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  LOCK();
  (this->GameThreadStats).AccumulatedStats.ActivationCycles = (TAtomic<unsigned___int64>)0x0;
  UNLOCK();
  (this->GameThreadStats).AccumulatedStats.WaitCycles = 0;
  return;
}

// ResetMaxArray @ 148192aa0

void __cdecl
FAccumulatedParticlePerfStats::ResetMaxArray
          (TArray<unsigned___int64,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>_>
           *param_1)

{
  int *piVar1;
  ForElementType<unsigned___int64> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<unsigned___int64> FVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar10;
  ulonglong uVar9;
  
  piVar1 = &param_1->ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 < 10) {
    UE::Core::Private::
    ReallocGrow<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,10 - iVar7,&param_1->AllocatorInstance,piVar1,&param_1->ArrayMax);
  }
  else if (10 < iVar7) {
    iVar7 = iVar7 + -10;
    if (iVar7 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (iVar7 == 0) goto LAB_148192b8e;
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<unsigned___int64>)param_1;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FVar6 = FVar2;
    }
    iVar5 = (*piVar1 - iVar7) + -10;
    if (iVar5 != 0) {
      memmove((ForElementType<unsigned___int64> *)((longlong)FVar6 + 0x50),
              (ForElementType<unsigned___int64> *)((longlong)FVar6 + 0x50) + iVar7,
              (longlong)iVar5 << 3);
    }
    *piVar1 = *piVar1 - iVar7;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<10,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned___int64>_>
              (8,8,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
  }
LAB_148192b8e:
  uVar9 = 0;
  uVar10 = uVar9;
  do {
    if (*piVar1 <= (int)uVar9) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    FVar2 = (param_1->AllocatorInstance).SecondaryData;
    FVar6 = (ForElementType<unsigned___int64>)param_1;
    if (FVar2 != (ForElementType<unsigned___int64>)0x0) {
      FVar6 = FVar2;
    }
    uVar8 = (int)uVar9 + 1;
    uVar9 = (ulonglong)uVar8;
    *(undefined8 *)(uVar10 + (longlong)FVar6) = 0;
    uVar10 = uVar10 + 8;
  } while ((int)uVar8 < 10);
  return;
}

// ResetRT @ 1481930c0

void __thiscall FAccumulatedParticlePerfStats::ResetRT(FAccumulatedParticlePerfStats *this)

{
  ResetMaxArray(&(this->RenderThreadStats).MaxPerFrameTotalCycles);
  ResetMaxArray(&(this->RenderThreadStats).MaxPerInstanceCycles);
  (this->RenderThreadStats).NumFrames = 0;
  (this->RenderThreadStats).AccumulatedStats.NumInstances = 0;
  (this->RenderThreadStats).AccumulatedStats.RenderUpdateCycles = 0;
  (this->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles = 0;
  ResetMaxArray(&(this->GPUStats).MaxPerFrameTotalMicroseconds);
  ResetMaxArray(&(this->GPUStats).MaxPerInstanceMicroseconds);
  (this->GPUStats).NumFrames = 0;
  (this->GPUStats).AccumulatedStats.NumInstances = 0;
  (this->GPUStats).AccumulatedStats.TotalMicroseconds = 0;
  return;
}

// Tick @ 1481a1c30

void __thiscall
FAccumulatedParticlePerfStats::Tick(FAccumulatedParticlePerfStats *this,FParticlePerfStats *param_1)

{
  FParticlePerfStats_GT *pFVar1;
  ulong64 *puVar2;
  TAtomic<unsigned___int64> *pTVar3;
  code *pcVar4;
  bool bVar5;
  ulonglong uVar6;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                       ,0x302,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if ((param_1->GameThreadStats).NumInstances != 0) {
    (this->GameThreadStats).NumFrames = (this->GameThreadStats).NumFrames + 1;
    pFVar1 = &(this->GameThreadStats).AccumulatedStats;
    pFVar1->NumInstances = pFVar1->NumInstances + (param_1->GameThreadStats).NumInstances;
    puVar2 = &(this->GameThreadStats).AccumulatedStats.TickGameThreadCycles;
    *puVar2 = *puVar2 + (param_1->GameThreadStats).TickGameThreadCycles;
    LOCK();
    pTVar3 = &(this->GameThreadStats).AccumulatedStats.TickConcurrentCycles;
    *pTVar3 = (TAtomic<unsigned___int64>)
              ((longlong)*pTVar3 + (longlong)(param_1->GameThreadStats).TickConcurrentCycles);
    UNLOCK();
    puVar2 = &(this->GameThreadStats).AccumulatedStats.FinalizeCycles;
    *puVar2 = *puVar2 + (param_1->GameThreadStats).FinalizeCycles;
    LOCK();
    pTVar3 = &(this->GameThreadStats).AccumulatedStats.EndOfFrameCycles;
    *pTVar3 = (TAtomic<unsigned___int64>)
              ((longlong)*pTVar3 + (longlong)(param_1->GameThreadStats).EndOfFrameCycles);
    UNLOCK();
    AddMax(&(this->GameThreadStats).MaxPerFrameTotalCycles,
           (param_1->GameThreadStats).TickGameThreadCycles +
           (param_1->GameThreadStats).FinalizeCycles +
           (longlong)(param_1->GameThreadStats).ActivationCycles +
           (param_1->GameThreadStats).WaitCycles +
           (longlong)(param_1->GameThreadStats).EndOfFrameCycles +
           (longlong)(param_1->GameThreadStats).TickConcurrentCycles);
    if ((param_1->GameThreadStats).NumInstances == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = ((longlong)(param_1->GameThreadStats).EndOfFrameCycles +
               (param_1->GameThreadStats).WaitCycles +
               (param_1->GameThreadStats).TickGameThreadCycles +
               (longlong)(param_1->GameThreadStats).ActivationCycles +
               (param_1->GameThreadStats).FinalizeCycles +
              (longlong)(param_1->GameThreadStats).TickConcurrentCycles) /
              (param_1->GameThreadStats).NumInstances;
    }
    AddMax(&(this->GameThreadStats).MaxPerInstanceCycles,uVar6);
  }
  return;
}

// TickRT @ 1481a5450

void __thiscall
FAccumulatedParticlePerfStats::TickRT
          (FAccumulatedParticlePerfStats *this,FParticlePerfStats *param_1)

{
  FParticlePerfStats_RT *pFVar1;
  ulong64 *puVar2;
  FParticlePerfStats_GPU *pFVar3;
  ulonglong uVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticlePerfStats.cpp"
                         ,0x308,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = 0;
  if ((param_1->RenderThreadStats).NumInstances != 0) {
    (this->RenderThreadStats).NumFrames = (this->RenderThreadStats).NumFrames + 1;
    pFVar1 = &(this->RenderThreadStats).AccumulatedStats;
    pFVar1->NumInstances = pFVar1->NumInstances + (param_1->RenderThreadStats).NumInstances;
    puVar2 = &(this->RenderThreadStats).AccumulatedStats.RenderUpdateCycles;
    *puVar2 = *puVar2 + (param_1->RenderThreadStats).RenderUpdateCycles;
    puVar2 = &(this->RenderThreadStats).AccumulatedStats.GetDynamicMeshElementsCycles;
    *puVar2 = *puVar2 + (param_1->RenderThreadStats).GetDynamicMeshElementsCycles;
    AddMax(&(this->RenderThreadStats).MaxPerFrameTotalCycles,
           (param_1->RenderThreadStats).RenderUpdateCycles +
           (param_1->RenderThreadStats).GetDynamicMeshElementsCycles);
    uVar4 = (param_1->RenderThreadStats).NumInstances;
    uVar7 = uVar8;
    if (uVar4 != 0) {
      uVar7 = ((param_1->RenderThreadStats).RenderUpdateCycles +
              (param_1->RenderThreadStats).GetDynamicMeshElementsCycles) / uVar4;
    }
    AddMax(&(this->RenderThreadStats).MaxPerInstanceCycles,uVar7);
  }
  if ((param_1->GPUStats).NumInstances != 0) {
    (this->GPUStats).NumFrames = (this->GPUStats).NumFrames + 1;
    pFVar3 = &(this->GPUStats).AccumulatedStats;
    pFVar3->NumInstances = pFVar3->NumInstances + (param_1->GPUStats).NumInstances;
    puVar2 = &(this->GPUStats).AccumulatedStats.TotalMicroseconds;
    *puVar2 = *puVar2 + (param_1->GPUStats).TotalMicroseconds;
    AddMax(&(this->GPUStats).MaxPerFrameTotalMicroseconds,(param_1->GPUStats).TotalMicroseconds);
    uVar4 = (param_1->GPUStats).NumInstances;
    if (uVar4 != 0) {
      uVar8 = (param_1->GPUStats).TotalMicroseconds / uVar4;
    }
    AddMax(&(this->GPUStats).MaxPerInstanceMicroseconds,uVar8);
  }
  return;
}

