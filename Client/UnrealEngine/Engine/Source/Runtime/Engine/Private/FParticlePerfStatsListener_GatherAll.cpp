// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// FParticlePerfStatsListener_GatherAll @ 14815a790

FParticlePerfStatsListener_GatherAll * __thiscall
FParticlePerfStatsListener_GatherAll::FParticlePerfStatsListener_GatherAll
          (FParticlePerfStatsListener_GatherAll *this,bool param_1,bool param_2,bool param_3)

{
  byte bVar1;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener_GatherAll__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->AccumulatedStatsGuard,4000);
  this->bGatherWorldStats = '\0';
  bVar1 = this->field_0x40;
  *(undefined8 *)&this->AccumulatedWorldStats = 0;
  *(undefined8 *)&(this->AccumulatedWorldStats).field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedWorldStats).field_0x20 = 0;
  this->field_0x40 = (param_2 | param_3 * '\x02') * '\x02' | param_1 | bVar1 & 0xf9;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedWorldStats).field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x48 = 0;
  *(undefined8 *)&this->AccumulatedSystemStats = 0;
  *(undefined8 *)&(this->AccumulatedSystemStats).field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedSystemStats).field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedSystemStats).field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x48 = 0;
  *(undefined8 *)&this->AccumulatedComponentStats = 0;
  *(undefined8 *)&(this->AccumulatedComponentStats).field_0x8 = 0;
  *(undefined8 *)&(this->AccumulatedComponentStats).field_0x20 = 0;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x28 = 0;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x2c = 0x80;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AccumulatedComponentStats).field_0x40 = 0;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x48 = 0;
  return this;
}

// ~FParticlePerfStatsListener_GatherAll @ 1481600d0

void __thiscall
FParticlePerfStatsListener_GatherAll::~FParticlePerfStatsListener_GatherAll
          (FParticlePerfStatsListener_GatherAll *this)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener_GatherAll__6B_;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AccumulatedComponentStats).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AccumulatedComponentStats);
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AccumulatedSystemStats).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AccumulatedSystemStats);
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x48 = 0;
  pvVar3 = *(void **)&(this->AccumulatedWorldStats).field_0x40;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AccumulatedWorldStats);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->AccumulatedStatsGuard);
  this->_padding_ = (longlong)&___7FParticlePerfStatsListener__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (**(code **)(*plVar4 + 8))(plVar4,1);
    }
  }
  return;
}

// operator() @ 148161320

void __thiscall
`FParticlePerfStatsListener_GatherAll::DumpStatsToDevice'::__l2::<lambda_1>::operator()
          (void *this,FOutputDevice *param_1,FString *param_2,FAccumulatedParticlePerfStats *param_3
          )

{
  ForElementType<unsigned___int64> FVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  ForElementType<unsigned___int64> FVar6;
  wchar_t *pwVar7;
  undefined1 local_res20 [8];
  undefined1 local_58 [32];
  
  if (param_3 != (FAccumulatedParticlePerfStats *)0x0) {
    bVar4 = IsInGameThread();
    if (((!bVar4) && (bVar4 = IsInRenderingThread(), !bVar4)) &&
       (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<392709136413884568>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Particles\\ParticlePerfStatsManager.h"
                           ,0x98,"IsInRenderingThread()"), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((((param_3->GameThreadStats).NumFrames != 0) ||
        ((param_3->RenderThreadStats).NumFrames != 0)) &&
       (((param_3->GameThreadStats).AccumulatedStats.NumInstances != 0 ||
        ((param_3->RenderThreadStats).AccumulatedStats.NumInstances != 0)))) {
      iVar2 = (param_3->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum;
      if (0 < iVar2) {
        uVar5 = 0;
        if ((int)(iVar2 - 1U) < iVar2) {
          uVar5 = ~(iVar2 - 1U) >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      iVar2 = (param_3->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum;
      if (0 < iVar2) {
        uVar5 = 0;
        if ((int)(iVar2 - 1U) < iVar2) {
          uVar5 = ~(iVar2 - 1U) >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      ::FString::Reset(*(FString **)this,0);
      pwVar7 = L"";
      ::FString::AppendfImpl(*(FString **)this,L",%s");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u");
      ::FString::AppendfImpl(*(FString **)this,L",%u,[ ");
      FVar6 = (param_3->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      iVar2 = (param_3->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum;
      if (FVar6 == (ForElementType<unsigned___int64>)0x0) {
        FVar6 = (ForElementType<unsigned___int64>)&(param_3->GameThreadStats).MaxPerFrameTotalCycles
        ;
      }
      FVar1 = (ForElementType<unsigned___int64>)((longlong)FVar6 + (longlong)iVar2 * 8);
      while( true ) {
        if ((param_3->GameThreadStats).MaxPerFrameTotalCycles.ArrayNum != iVar2) {
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (FVar6 == FVar1) break;
        ::FString::AppendfImpl(*(FString **)this,L"%u ");
        FVar6 = (ForElementType<unsigned___int64>)((longlong)FVar6 + 8);
      }
      ::FString::AppendChars(*(FString **)this,L"]",1);
      ::FString::AppendfImpl(*(FString **)this,L",%u,[ ");
      FVar6 = (param_3->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      iVar2 = (param_3->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum;
      if (FVar6 == (ForElementType<unsigned___int64>)0x0) {
        FVar6 = (ForElementType<unsigned___int64>)
                &(param_3->RenderThreadStats).MaxPerFrameTotalCycles;
      }
      FVar1 = (ForElementType<unsigned___int64>)((longlong)FVar6 + (longlong)iVar2 * 8);
      while( true ) {
        if ((param_3->RenderThreadStats).MaxPerFrameTotalCycles.ArrayNum != iVar2) {
          `TCheckedPointerIterator<unsigned___int64_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_58);
        }
        if (FVar6 == FVar1) break;
        ::FString::AppendfImpl(*(FString **)this,L"%u ");
        FVar6 = (ForElementType<unsigned___int64>)((longlong)FVar6 + 8);
      }
      ::FString::AppendChars(*(FString **)this,L"]",1);
      if (*(int *)(*(undefined8 **)this + 1) != 0) {
        pwVar7 = (wchar_t *)**(undefined8 **)this;
      }
      FOutputDevice::Log(param_1,pwVar7);
    }
  }
  return;
}

// Begin @ 1481672d0

void __thiscall
FParticlePerfStatsListener_GatherAll::Begin(FParticlePerfStatsListener_GatherAll *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->AccumulatedStatsGuard;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FParticlePerfStatsManager::
    ForAllWorldStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_1>_>
              ((<lambda_1>)this);
    FParticlePerfStatsManager::
    ForAllSystemStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_2>_>
              ((<lambda_2>)this);
    FParticlePerfStatsManager::
    ForAllComponentStats<_FParticlePerfStatsListener_GatherAll::Begin_::__l2::<lambda_3>_>
              ((<lambda_3>)this);
                    /* WARNING: Could not recover jumptable at 0x000148167314. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DumpStatsToDevice @ 148171390

void __thiscall
FParticlePerfStatsListener_GatherAll::DumpStatsToDevice
          (FParticlePerfStatsListener_GatherAll *this,FOutputDevice *param_1)

{
  TMap<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar1;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar2;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *pTVar3;
  FAccumulatedParticlePerfStats *pFVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  UObject *pUVar8;
  FString *pFVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  void **local_res8;
  FName local_res18 [2];
  undefined1 auStack_b0 [16];
  uint uStack_a0;
  uint uStack_9c;
  longlong local_98;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_90;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *local_88;
  undefined2 local_80;
  FString local_78;
  void *local_68;
  undefined8 local_60;
  undefined1 local_58 [32];
  longlong local_38;
  TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
  *pTStack_30;
  
  FlushRenderingCommands();
  local_68 = (void *)0x0;
  local_60 = 0;
  FOutputDevice::Log(param_1,L",**** Particle Performance Stats");
  FOutputDevice::Log(param_1,
                     L",Name,Average PerFrame GameThread,Average PerInstance GameThread,Average PerFrame RenderThread,Average PerInstance RenderThread,NumFrames,Total Instances,Total Tick GameThread,Total Tick Concurrent,Total Finalize,Total End Of Frame,Total Render Update,Total Get Dynamic Mesh Elements,Max PerFrame GameThread,Max Range PerFrame GameThread,Max PerFrame RenderThread,Max Range PerFrame RenderThread"
                    );
  iVar11 = 1;
  local_res8 = &local_68;
  if (this->bGatherWorldStats != 0) {
    FOutputDevice::Log(param_1,L",** Per World Stats");
    pTVar1 = &this->AccumulatedWorldStats;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar1);
    uVar6 = local_58._0_8_;
    local_80 = 0;
    stack0xffffffffffffff58 = local_58._16_16_;
    auStack_b0._0_8_ = local_58._8_8_;
    local_98 = local_38;
    pTStack_90 = pTStack_30;
    uVar10 = local_58._24_8_ >> 0x20;
    uVar12 = local_58._28_4_;
    local_88 = (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar1;
    if ((int)uVar12 < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (*(longlong *)uVar6 + (longlong)(int)uVar10 * 0x18));
        if (pUVar8 != (UObject *)0x0) {
          local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
          local_res18[0].Number = *(uint *)&pUVar8->field_0x1c;
          pFVar4 = *(FAccumulatedParticlePerfStats **)
                    (*(longlong *)uVar6 + 8 + (longlong)(int)uVar12 * 0x18);
          pFVar9 = ::FName::ToString(local_res18,&local_78);
          `FParticlePerfStatsListener_GatherAll::DumpStatsToDevice'::__l2::<lambda_1>::operator()
                    (&local_res8,param_1,pFVar9,pFVar4);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar10 = (ulonglong)uStack_9c;
        uVar12 = uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar12 = *(int *)&(local_88->Elements).field_0x8 - *(int *)&(local_88->Elements).field_0x34;
        if (uVar12 < 4) {
          iVar7 = 1;
        }
        else {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar5 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
          local_88->HashSize = iVar7;
          TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::Rehash(local_88);
        }
      }
    }
  }
  if (this->bGatherSystemStats != '\0') {
    FOutputDevice::Log(param_1,L",** Per System Stats");
    pTVar2 = &this->AccumulatedSystemStats;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar2);
    uVar6 = local_58._0_8_;
    local_80 = 0;
    stack0xffffffffffffff58 = local_58._16_16_;
    auStack_b0._0_8_ = local_58._8_8_;
    local_98 = local_38;
    pTStack_90 = pTStack_30;
    uVar10 = local_58._24_8_ >> 0x20;
    uVar12 = local_58._28_4_;
    local_88 = (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar2;
    if ((int)uVar12 < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (*(longlong *)uVar6 + (longlong)(int)uVar10 * 0x18));
        if (pUVar8 != (UObject *)0x0) {
          local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
          local_res18[0].Number = *(uint *)&pUVar8->field_0x1c;
          pFVar4 = *(FAccumulatedParticlePerfStats **)
                    (*(longlong *)uVar6 + 8 + (longlong)(int)uVar12 * 0x18);
          pFVar9 = ::FName::ToString(local_res18,&local_78);
          `FParticlePerfStatsListener_GatherAll::DumpStatsToDevice'::__l2::<lambda_1>::operator()
                    (&local_res8,param_1,pFVar9,pFVar4);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar10 = (ulonglong)uStack_9c;
        uVar12 = uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar12 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&local_88->Elements)->field_0x8 -
                 *(int *)&((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&local_88->Elements)->field_0x34;
        if (uVar12 < 4) {
          iVar7 = 1;
        }
        else {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar7 = 1 << ((byte)lVar5 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_88->HashSize < iVar7)) || (iVar7 < local_88->HashSize)) {
          local_88->HashSize = iVar7;
          TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                    *)local_88);
        }
      }
    }
  }
  if (this->bGatherComponentStats != '\0') {
    FOutputDevice::Log(param_1,L",** Per Component Stats");
    pTVar3 = &this->AccumulatedComponentStats;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::TIterator::TIterator
              ((TIterator *)local_58,
               (TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar3);
    local_80 = 0;
    stack0xffffffffffffff58 = local_58._16_16_;
    auStack_b0._0_8_ = local_58._8_8_;
    local_98 = local_38;
    pTStack_90 = pTStack_30;
    uVar10 = local_58._24_8_ >> 0x20;
    uVar12 = local_58._28_4_;
    local_88 = (TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)pTVar3;
    if ((int)uVar12 < *(int *)(local_58._16_8_ + 0x18)) {
      do {
        pUVar8 = FWeakObjectPtr::Get((FWeakObjectPtr *)
                                     (*(longlong *)local_58._0_8_ + (longlong)(int)uVar10 * 0x18));
        if (pUVar8 != (UObject *)0x0) {
          local_res18[0].ComparisonIndex.Value = *(uint *)&pUVar8->field_0x18;
          local_res18[0].Number = *(uint *)&pUVar8->field_0x1c;
          pFVar4 = *(FAccumulatedParticlePerfStats **)
                    (*(longlong *)local_58._0_8_ + 8 + (longlong)(int)uVar12 * 0x18);
          pFVar9 = ::FName::ToString(local_res18,&local_78);
          `FParticlePerfStatsListener_GatherAll::DumpStatsToDevice'::__l2::<lambda_1>::operator()
                    (&local_res8,param_1,pFVar9,pFVar4);
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
        }
        uStack_a0 = uStack_a0 & ~auStack_b0._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_b0);
        uVar10 = (ulonglong)uStack_9c;
        uVar12 = uStack_9c;
      } while ((int)uStack_9c < *(int *)(auStack_b0._8_8_ + 0x18));
      if (((char)local_80 != '\0') && (local_80._1_1_ != '\0')) {
        uVar12 = *(int *)&((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&local_88->Elements)->field_0x8 -
                 *(int *)&((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&local_88->Elements)->field_0x34;
        if (3 < uVar12) {
          uVar10 = (ulonglong)((uVar12 >> 1) + 7) * 2 + 1;
          lVar5 = 0x3f;
          if (uVar10 != 0) {
            for (; uVar10 >> lVar5 == 0; lVar5 = lVar5 + -1) {
            }
          }
          iVar11 = 1 << ((byte)lVar5 & 0x1f);
        }
        if (((0 < (int)uVar12) && (local_88->HashSize < iVar11)) || (iVar11 < local_88->HashSize)) {
          local_88->HashSize = iVar11;
          TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                    *)local_88);
        }
      }
    }
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// DumpStatsToFile @ 148171820

void __thiscall
FParticlePerfStatsListener_GatherAll::DumpStatsToFile(FParticlePerfStatsListener_GatherAll *this)

{
  int iVar1;
  FString *pFVar2;
  IFileManager *pIVar3;
  FDateTime this_00;
  FOutputDevice *pFVar4;
  FOutputDevice *this_01;
  undefined8 *puVar5;
  ForAnyElementType FVar6;
  int iVar7;
  uint uVar8;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar2 = FPaths::ProfilingDir(&local_38);
  ::FString::ConcatFC(&local_58,pFVar2,L"ParticlePerf");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pIVar3 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_58.Data.ArrayNum != 0) {
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
  }
  (**(code **)((longlong)*pIVar3 + 0x60))(pIVar3,FVar6.Data,0);
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_38,L"%d-%H.%M.%S");
  ::FString::PrintfImpl(&local_48,L"ParticlePerf-%s.csv");
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  FVar6.Data = local_58.Data.AllocatorInstance.Data;
  iVar7 = local_48.Data.ArrayNum + -1;
  if (local_48.Data.ArrayNum == 0) {
    iVar7 = 0;
  }
  if ((local_58.Data.ArrayNum == 0) && (iVar7 != -1)) {
    iVar1 = iVar7 + 2;
LAB_14817192d:
    local_68.Data.ArrayNum = local_58.Data.ArrayNum;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (iVar1 == 0) {
      local_68.Data.ArrayMax = 0;
      goto LAB_14817197d;
    }
  }
  else {
    iVar1 = iVar7 + 1;
    if (local_58.Data.ArrayNum == 0) goto LAB_14817192d;
  }
  local_68.Data.ArrayNum = local_58.Data.ArrayNum;
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  uVar8 = iVar1 + local_58.Data.ArrayNum;
  if ((int)uVar8 < local_58.Data.ArrayNum) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,uVar8,0,(ForAnyElementType *)&local_68,local_58.Data.ArrayNum,
             &local_68.Data.ArrayMax);
  if (local_58.Data.ArrayNum != 0) {
    memcpy(local_68.Data.AllocatorInstance.Data,FVar6.Data,(longlong)local_58.Data.ArrayNum * 2);
  }
LAB_14817197d:
  ::FString::PathAppend(&local_68,(wchar_t *)local_48.Data.AllocatorInstance.Data,iVar7);
  pIVar3 = IFileManager::Get();
  FVar6.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar6.Data = local_68.Data.AllocatorInstance.Data;
  }
  pFVar4 = (FOutputDevice *)(**(code **)((longlong)*pIVar3 + 0x28))(pIVar3,FVar6.Data,0);
  if (pFVar4 != (FOutputDevice *)0x0) {
    this_01 = ::operator_new(0x18);
    if (this_01 == (FOutputDevice *)0x0) {
      DumpStatsToDevice(this,(FOutputDevice *)0x0);
      puVar5 = (undefined8 *)pFVar4->_padding_;
    }
    else {
      FOutputDevice::FOutputDevice(this_01);
      this_01[1]._padding_ = (longlong)pFVar4;
      this_01->_padding_ = (longlong)&___7FOutputDeviceArchiveWrapper__6B_;
      DumpStatsToDevice(this,this_01);
      (**(code **)pFVar4->_padding_)(pFVar4,1);
      puVar5 = (undefined8 *)this_01->_padding_;
      pFVar4 = this_01;
    }
    (*(code *)*puVar5)(pFVar4,1);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return;
}

// End @ 148172370

void __thiscall
FParticlePerfStatsListener_GatherAll::End(FParticlePerfStatsListener_GatherAll *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  undefined1 *puVar1;
  TMap<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *this_00;
  TMap<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>_>
  *this_01;
  int iVar2;
  bool bVar3;
  
  lpCriticalSection = &this->AccumulatedStatsGuard;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar3 = 1 < *(int *)&(this->AccumulatedWorldStats).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&this->AccumulatedWorldStats);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)&this->AccumulatedWorldStats,0,
                    *(int *)&(this->AccumulatedWorldStats).field_0x8);
  puVar1 = &(this->AccumulatedWorldStats).field_0xc;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)&this->AccumulatedWorldStats,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x34 = 0;
  iVar2 = *(int *)&(this->AccumulatedWorldStats).field_0x2c;
  *(undefined4 *)&(this->AccumulatedWorldStats).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AccumulatedWorldStats).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AccumulatedWorldStats).field_0x10,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AccumulatedWorldStats).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)&this->AccumulatedWorldStats);
  }
  this_00 = &this->AccumulatedSystemStats;
  bVar3 = 1 < *(int *)&(this->AccumulatedSystemStats).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_00,0,*(int *)&(this->AccumulatedSystemStats).field_0x8);
  puVar1 = &(this->AccumulatedSystemStats).field_0xc;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x34 = 0;
  iVar2 = *(int *)&(this->AccumulatedSystemStats).field_0x2c;
  *(undefined4 *)&(this->AccumulatedSystemStats).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AccumulatedSystemStats).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AccumulatedSystemStats).field_0x10,0)
    ;
  }
  if (bVar3) {
    *(undefined4 *)&(this->AccumulatedSystemStats).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)this_00);
  }
  this_01 = &this->AccumulatedComponentStats;
  bVar3 = 1 < *(int *)&(this->AccumulatedComponentStats).field_0x48;
  if (!bVar3) {
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)this_01);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)this_01,0,*(int *)&(this->AccumulatedComponentStats).field_0x8);
  puVar1 = &(this->AccumulatedComponentStats).field_0xc;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this_01,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x34 = 0;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x30 = 0xffffffff;
  iVar2 = *(int *)&(this->AccumulatedComponentStats).field_0x2c;
  *(undefined4 *)&(this->AccumulatedComponentStats).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(this->AccumulatedComponentStats).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->AccumulatedComponentStats).field_0x10
               ,0);
  }
  if (bVar3) {
    *(undefined4 *)&(this->AccumulatedComponentStats).field_0x48 = 1;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
              *)this_01);
  }
                    /* WARNING: Could not recover jumptable at 0x000148172592. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetStats @ 14817eb60

FAccumulatedParticlePerfStats * __thiscall
FParticlePerfStatsListener_GatherAll::GetStats
          (FParticlePerfStatsListener_GatherAll *this,UFXSystemAsset *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFXSystemAsset *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&this->AccumulatedSystemStats,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->AccumulatedSystemStats).field_0x0 + (longlong)iVar2 * 0x18;
    puVar3 = (undefined8 *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return (FAccumulatedParticlePerfStats *)*puVar3;
    }
  }
  return (FAccumulatedParticlePerfStats *)0x0;
}

// GetStats @ 14817ec30

FAccumulatedParticlePerfStats * __thiscall
FParticlePerfStatsListener_GatherAll::GetStats
          (FParticlePerfStatsListener_GatherAll *this,UFXSystemComponent *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFXSystemComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UFXSystemComponent *)0x0)
     ) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&this->AccumulatedComponentStats,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->AccumulatedComponentStats).field_0x0 + (longlong)iVar2 * 0x18;
    puVar3 = (undefined8 *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return (FAccumulatedParticlePerfStats *)*puVar3;
    }
  }
  return (FAccumulatedParticlePerfStats *)0x0;
}

// GetStats @ 14817ed00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FAccumulatedParticlePerfStats * __thiscall
FParticlePerfStatsListener_GatherAll::GetStats
          (FParticlePerfStatsListener_GatherAll *this,UWorld *param_1)

{
  longlong lVar1;
  int iVar2;
  undefined8 *puVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10 = (FWeakObjectPtr)param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UWorld *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res10);
  local_res10 = local_res8;
  iVar2 = TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                    ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                      *)&this->AccumulatedWorldStats,
                     local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                     (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res10);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)&(this->AccumulatedWorldStats).field_0x0 + (longlong)iVar2 * 0x18;
    puVar3 = (undefined8 *)(lVar1 + 8);
    if (lVar1 == 0) {
      puVar3 = (undefined8 *)0x0;
    }
    if (puVar3 != (undefined8 *)0x0) {
      return (FAccumulatedParticlePerfStats *)*puVar3;
    }
  }
  return (FAccumulatedParticlePerfStats *)0x0;
}

// NeedsComponentStats @ 148186830

bool __thiscall
FParticlePerfStatsListener_GatherAll::NeedsComponentStats
          (FParticlePerfStatsListener_GatherAll *this)

{
  return this->bGatherComponentStats;
}

// NeedsSystemStats @ 148186840

bool __thiscall
FParticlePerfStatsListener_GatherAll::NeedsSystemStats(FParticlePerfStatsListener_GatherAll *this)

{
  return this->bGatherSystemStats;
}

// NeedsWorldStats @ 148186850

bool __thiscall
FParticlePerfStatsListener_GatherAll::NeedsWorldStats(FParticlePerfStatsListener_GatherAll *this)

{
  return this->bGatherWorldStats;
}

// OnAddComponent @ 1481868b0

void __thiscall
FParticlePerfStatsListener_GatherAll::OnAddComponent
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<unsigned___int64> FVar1;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar2;
  FAccumulatedParticlePerfStats *this_00;
  TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_const_&> local_res8 [2];
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
  local_res18;
  TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *local_res20;
  
  if (this->bGatherComponentStats != '\0') {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = ::operator_new(0x2b8);
    local_res18.Ptr = (FAccumulatedParticlePerfStats *)0x0;
    if (this_00 != (FAccumulatedParticlePerfStats *)0x0) {
      local_res18.Ptr = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this_00);
    }
    local_res20 = param_1;
    TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&this->AccumulatedComponentStats,local_res8,(bool *)&local_res20);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&this->AccumulatedComponentStats +
                 ((longlong)(int)local_res8[0].Key * 3 + 1) * 8),&local_res18);
    TVar2.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_res18.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar2.Ptr,0x2b8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnAddSystem @ 1481869e0

void __thiscall
FParticlePerfStatsListener_GatherAll::OnAddSystem
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<unsigned___int64> FVar1;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar2;
  FAccumulatedParticlePerfStats *this_00;
  TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&> local_res8 [2];
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
  local_res18;
  TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *local_res20;
  
  if (this->bGatherSystemStats != '\0') {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = ::operator_new(0x2b8);
    local_res18.Ptr = (FAccumulatedParticlePerfStats *)0x0;
    if (this_00 != (FAccumulatedParticlePerfStats *)0x0) {
      local_res18.Ptr = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this_00);
    }
    local_res20 = param_1;
    TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&this->AccumulatedSystemStats,local_res8,(bool *)&local_res20);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&this->AccumulatedSystemStats +
                 ((longlong)(int)local_res8[0].Key * 3 + 1) * 8),&local_res18);
    TVar2.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_res18.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar2.Ptr,0x2b8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnAddWorld @ 148186b10

void __thiscall
FParticlePerfStatsListener_GatherAll::OnAddWorld
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  ForElementType<unsigned___int64> FVar1;
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_> TVar2;
  FAccumulatedParticlePerfStats *this_00;
  TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_const_&> local_res8 [2];
  TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
  local_res18;
  TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *local_res20;
  
  if (this->bGatherWorldStats != 0) {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this_00 = ::operator_new(0x2b8);
    local_res18.Ptr = (FAccumulatedParticlePerfStats *)0x0;
    if (this_00 != (FAccumulatedParticlePerfStats *)0x0) {
      local_res18.Ptr = FAccumulatedParticlePerfStats::FAccumulatedParticlePerfStats(this_00);
    }
    local_res20 = param_1;
    TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_const_&>_>
              ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                *)&this->AccumulatedWorldStats,local_res8,(bool *)&local_res20);
    TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>::
    operator=((TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>
               *)(*(longlong *)&this->AccumulatedWorldStats +
                 ((longlong)(int)local_res8[0].Key * 3 + 1) * 8),&local_res18);
    TVar2.Ptr = local_res18.Ptr;
    if (local_res18.Ptr != (FAccumulatedParticlePerfStats *)0x0) {
      FVar1 = ((local_res18.Ptr)->GPUStats).MaxPerInstanceMicroseconds.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GPUStats).MaxPerFrameTotalMicroseconds.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->RenderThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.
              SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerInstanceCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      FVar1 = ((TVar2.Ptr)->GameThreadStats).MaxPerFrameTotalCycles.AllocatorInstance.SecondaryData;
      if (FVar1 != (ForElementType<unsigned___int64>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      ::operator_delete(TVar2.Ptr,0x2b8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnRemoveComponent @ 148187610

void __thiscall
FParticlePerfStatsListener_GatherAll::OnRemoveComponent
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr local_res8;
  
  if (this->bGatherComponentStats != '\0') {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = param_1->WeakPtr;
    if (*(int *)&(this->AccumulatedComponentStats).field_0x8 !=
        *(int *)&(this->AccumulatedComponentStats).field_0x34) {
      TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&this->AccumulatedComponentStats,
                 local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                 (TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *)&local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnRemoveSystem @ 148187690

void __thiscall
FParticlePerfStatsListener_GatherAll::OnRemoveSystem
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr local_res8;
  
  if (this->bGatherSystemStats != '\0') {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = param_1->WeakPtr;
    if (*(int *)&(this->AccumulatedSystemStats).field_0x8 !=
        *(int *)&(this->AccumulatedSystemStats).field_0x34) {
      TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&this->AccumulatedSystemStats,
                 local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                 (TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *)&local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// OnRemoveWorld @ 148187710

void __thiscall
FParticlePerfStatsListener_GatherAll::OnRemoveWorld
          (FParticlePerfStatsListener_GatherAll *this,
          TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FWeakObjectPtr local_res8;
  
  if (this->bGatherWorldStats != 0) {
    lpCriticalSection = &this->AccumulatedStatsGuard;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    local_res8 = param_1->WeakPtr;
    if (*(int *)&(this->AccumulatedWorldStats).field_0x8 !=
        *(int *)&(this->AccumulatedWorldStats).field_0x34) {
      TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
      ::RemoveImpl<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>_>
                ((TSet<TTuple<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>_>,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UWorld_const_,FWeakObjectPtr>,TUniquePtr<FAccumulatedParticlePerfStats,TDefaultDelete<FAccumulatedParticlePerfStats>_>,0>,FDefaultSetAllocator>
                  *)&this->AccumulatedWorldStats,
                 local_res8.ObjectSerialNumber ^ local_res8.ObjectIndex,
                 (TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *)&local_res8);
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// Tick @ 1481a2860

bool __thiscall
FParticlePerfStatsListener_GatherAll::Tick(FParticlePerfStatsListener_GatherAll *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->AccumulatedStatsGuard;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TickStats_Internal<UWorld_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
              (this,&this->AccumulatedWorldStats,local_res8);
    TickStats_Internal<UFXSystemAsset_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
              (this,&this->AccumulatedSystemStats,local_res8);
    TickStats_Internal<UFXSystemComponent_const_,_FParticlePerfStatsListener_GatherAll::Tick_::__l2::<lambda_1>_>
              (this,&this->AccumulatedComponentStats,local_res8);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return true;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TickRT @ 1481a5670

void __thiscall
FParticlePerfStatsListener_GatherAll::TickRT(FParticlePerfStatsListener_GatherAll *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  <lambda_1> local_res8;
  
  lpCriticalSection = &this->AccumulatedStatsGuard;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    TickStats_Internal<UWorld_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              (this,&this->AccumulatedWorldStats,local_res8);
    TickStats_Internal<UFXSystemAsset_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              (this,&this->AccumulatedSystemStats,local_res8);
    TickStats_Internal<UFXSystemComponent_const_,_FParticlePerfStatsListener_GatherAll::TickRT_::__l2::<lambda_1>_>
              (this,&this->AccumulatedComponentStats,local_res8);
                    /* WARNING: Could not recover jumptable at 0x0001481a56d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

