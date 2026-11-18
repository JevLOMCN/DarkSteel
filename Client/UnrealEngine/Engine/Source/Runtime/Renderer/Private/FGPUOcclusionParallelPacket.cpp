// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// operator() @ 145522d40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`FGPUOcclusionParallelPacket::LaunchOcclusionCullTask'::__l2::<lambda_1>::operator()(void *this)

{
  uint *puVar1;
  FGPUOcclusionPacket *this_00;
  longlong lVar2;
  FViewInfo *pFVar3;
  bool bVar4;
  int iVar5;
  FLowLevelMemTracker *this_01;
  FPageAllocator *this_02;
  uint uVar6;
  ulonglong uVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  ForElementType<int> FVar12;
  FViewInfo *pFVar13;
  bool bVar14;
  FOcclusionCullResult local_res18;
  FTaskTagScope local_58;
  TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> local_48;
  
  FTaskTagScope::FTaskTagScope(&local_58,EParallelRenderingThread);
  this_00 = *(FGPUOcclusionPacket **)this;
  piVar11 = (int *)0x0;
  local_48.AllocatorInstance.Data = (int *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"OcclusionCull");
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3338,"OcclusionCull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xd0a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3338);
  }
  uVar6 = *(uint *)&this_00[1].ViewElementPDI;
  local_res18.NumCulledPrimitives = 0;
  local_res18.NumTestedQueries = 0;
  if (-1 < (int)uVar6) {
    piVar10 = piVar11;
    FVar12.Data = piVar11;
    if (0 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                (4,4,uVar6,&local_48.AllocatorInstance,0,&local_48.ArrayMax);
      piVar10 = (int *)(local_48._8_8_ & 0xffffffff);
      FVar12.Data = local_48.AllocatorInstance.Data;
    }
    iVar9 = (int)piVar10;
    pFVar13 = this_00[1].View;
    uVar6 = 0;
    if (*(uint *)&this_00[1].ViewElementPDI != 0) {
      uVar7 = (ulonglong)*(uint *)&this_00[1].ViewElementPDI;
      piVar8 = piVar11;
      do {
        iVar5 = (int)piVar10;
        iVar9 = *(int *)(pFVar13->_padding_ + (longlong)piVar8 * 4);
        bVar4 = FGPUOcclusionPacket::OcclusionCullPrimitive<1,FGPUOcclusionPacket::FRecordVisitor>
                          (this_00,(FRecordVisitor *)&this_00[1].HZBOcclusionTests,&local_res18,
                           iVar9);
        if (bVar4) {
          if (iVar5 == local_48.ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                              (0x404,&local_48.AllocatorInstance,&local_48.ArrayMax);
            FVar12.Data = local_48.AllocatorInstance.Data;
          }
          piVar10 = (int *)(ulonglong)(iVar5 + 1U);
          FVar12.Data[iVar5] = iVar9;
          local_48.ArrayNum = iVar5 + 1U;
        }
        iVar9 = (int)piVar10;
        uVar6 = (int)piVar8 + 1;
        piVar8 = piVar11;
        pFVar3 = (FViewInfo *)&pFVar13->_padding_;
        if (uVar6 < 0x100) {
          piVar8 = (int *)(ulonglong)uVar6;
          pFVar3 = pFVar13;
        }
        pFVar13 = pFVar3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
      uVar6 = local_res18.NumCulledPrimitives;
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (iVar9 == 0) {
      TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
      ReleaseNumCommands((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                          *)(**(longlong **)this + 0x140),1);
    }
    else {
      TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>::
      EnqueueCommand<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                ((TCommandPipe<TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)(**(longlong **)this + 0x140),&local_48);
      FVar12.Data = local_48.AllocatorInstance.Data;
    }
    lVar2 = *(longlong *)(**(longlong **)this + 8);
    LOCK();
    piVar11 = (int *)(lVar2 + 0x58);
    *piVar11 = *piVar11 + uVar6;
    UNLOCK();
    LOCK();
    piVar11 = (int *)(lVar2 + 0x5c);
    *piVar11 = *piVar11 + local_res18.NumTestedQueries;
    UNLOCK();
    if (FVar12.Data != (int *)0x0) {
      puVar1 = (uint *)(FVar12.Data + -2);
      MemoryTrace_Free((ulong64)puVar1,0,0);
      if (FLowLevelMemTracker::EnabledState != Disabled) {
        this_01 = FLowLevelMemTracker::TrackerInstance;
        if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
          this_01 = FLowLevelMemTracker::Construct();
        }
        FLowLevelMemTracker::OnLowLevelFree(this_01,Default,puVar1,FMalloc,true);
      }
      piVar11 = (int *)((longlong)puVar1 - (ulonglong)*puVar1);
      LOCK();
      iVar9 = *piVar11;
      *piVar11 = *piVar11 + -1;
      UNLOCK();
      if (iVar9 == 1) {
        lVar2 = *(longlong *)(piVar11 + 0x10);
        MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar11,0,0);
        if (lVar2 - (longlong)piVar11 == 0x10000) {
          this_02 = FPageAllocator::Get();
          FPageAllocator::Free(this_02,piVar11);
        }
        else {
          (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar11);
        }
      }
    }
    FTaskTagScope::~FTaskTagScope(&local_58);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// AddPrimitive @ 145528300

bool __thiscall
FGPUOcclusionParallelPacket::AddPrimitive(FGPUOcclusionParallelPacket *this,int param_1)

{
  uint *puVar1;
  byte bVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int *piVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar8 = this->_padding_;
  uVar10 = 0;
  if (param_1 < *(int *)(lVar8 + 0x2910)) {
    uVar10 = (uint)~param_1 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  bVar2 = *(byte *)(*(longlong *)(lVar8 + 0x2908) + (longlong)param_1);
  if ((bVar2 & 1) == 0) {
    lVar8 = this->_padding_;
    if ((param_1 < 0) || (*(int *)(lVar8 + 0x1ca8) <= param_1)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Index>=0 && Index<NumBits",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x5be,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    lVar11 = *(longlong *)(lVar8 + 0x1ca0);
    if (*(longlong *)(lVar8 + 0x1ca0) == 0) {
      lVar11 = lVar8 + 0x1c90;
    }
    lVar8 = (longlong)((int)(param_1 + (param_1 >> 0x1f & 0x1fU)) >> 5);
    puVar1 = (uint *)(lVar11 + lVar8 * 4);
    uVar10 = 1 << ((byte)param_1 & 0x1f);
    if ((*(uint *)(lVar11 + lVar8 * 4) & uVar10) == 0) {
      LOCK();
      *puVar1 = *puVar1 | uVar10;
      UNLOCK();
    }
    bVar5 = false;
  }
  else {
    piVar7 = operator_new<int,1024,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
                       (4,&this->Input);
    if (piVar7 != (int *)0x0) {
      *piVar7 = param_1;
    }
    iVar9 = 1;
    if (((bVar2 & 0x10) != 0) && (*(char *)(this->_padding_ + 0xf) != '\0')) {
      lVar8 = this->_padding_;
      uVar10 = 0;
      if (param_1 < *(int *)(lVar8 + 0x28b8)) {
        uVar10 = (uint)~param_1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      plVar3 = *(longlong **)(*(longlong *)(lVar8 + 0x28b0) + (longlong)param_1 * 8);
      lVar8 = (**(code **)(*plVar3 + 0xc0))(plVar3,this->_padding_);
      iVar9 = *(int *)(lVar8 + 8);
    }
    this->NumInputSubQueries = this->NumInputSubQueries + iVar9;
    bVar5 = true;
  }
  return bVar5;
}

// LaunchOcclusionCullTask @ 145547ab0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FGPUOcclusionParallelPacket::LaunchOcclusionCullTask(FGPUOcclusionParallelPacket *this)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  ETaskPriority EVar4;
  longlong lVar5;
  FTaskBase *pFVar6;
  code *pcVar7;
  bool bVar8;
  FTaskBase *this_00;
  FTaskHandle *pFVar9;
  longlong local_18 [2];
  
  if ((this->bTaskLaunched != false) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bTaskLaunched",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                         ,0xce6,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((this->Input).NumElements != 0) {
    this->bTaskLaunched = true;
    LOCK();
    piVar2 = (int *)(this->_padding_ + 0x1f0);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
    lVar5 = *(longlong *)(this->_padding_ + 8);
    EVar4 = *(ETaskPriority *)(lVar5 + 0x38);
    this_00 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
              ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                          *)&UE::Tasks::Private::SmallTaskAllocator);
    if (this_00 == (FTaskBase *)0x0) {
      this_00 = (FTaskBase *)0x0;
    }
    else {
      UE::Tasks::Private::FTaskBase::FTaskBase(this_00,2,true);
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTaskBase<`FGPUOcclusionParallelPacket::LaunchOcclusionCullTask'::`2'::<lambda_1>,void,void>
            ::_vftable_;
      UE::Tasks::Private::FTaskBase::Init
                (this_00,
                 L"C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp(3315)"
                 ,EVar4,None,None);
      this_00[1]._padding_ = (longlong)this;
      this_00[1]._padding_ = lVar5;
      this_00->_padding_ =
           (longlong)
           &UE::Tasks::Private::
            TExecutableTask<`FGPUOcclusionParallelPacket::LaunchOcclusionCullTask'::`2'::<lambda_1>_>
            ::_vftable_;
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
    pFVar9 = &this->Task;
    if (pFVar9 == (FTaskHandle *)local_18) {
      if (this_00 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &this_00->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
          (**(code **)this_00->_padding_)(this_00,1);
        }
      }
    }
    else {
      pFVar6 = (pFVar9->Pimpl).Reference;
      (pFVar9->Pimpl).Reference = this_00;
      if (pFVar6 != (FTaskBase *)0x0) {
        LOCK();
        paVar1 = &pFVar6->RefCount;
        aVar3 = *paVar1;
        *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar3 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145547bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)pFVar6->_padding_)(pFVar6,1);
          return;
        }
      }
    }
  }
  return;
}

// OcclusionCullTask @ 14554a4a0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FOcclusionCullResult __thiscall
FGPUOcclusionParallelPacket::OcclusionCullTask
          (FGPUOcclusionParallelPacket *this,
          TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *param_1)

{
  int *piVar1;
  int iVar2;
  void **ppvVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ForElementType<int> *in_R8;
  void **ppvVar9;
  bool bVar10;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"OcclusionCull");
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId3338,"OcclusionCull",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0xd0a);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId3338);
  }
  uVar8 = 0;
  (param_1->AllocatorInstance).Data = (int *)0x0;
  uVar6 = (this->Input).NumElements;
  if (-1 < (int)uVar6) {
    piVar1 = (int *)((longlong)&in_R8[1].Data + 4);
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                (4,4,uVar6,in_R8,*(int *)&in_R8[1].Data,piVar1);
    }
    uVar6 = (this->Input).NumElements;
    ppvVar9 = (this->Input).Chunks.Array.AllocatorInstance.Data;
    if (uVar6 != 0) {
      uVar7 = (ulonglong)uVar6;
      do {
        iVar2 = *(int *)((longlong)*ppvVar9 + uVar8 * 4);
        bVar4 = FGPUOcclusionPacket::OcclusionCullPrimitive<1,FGPUOcclusionPacket::FRecordVisitor>
                          ((FGPUOcclusionPacket *)this,&this->RecordVisitor,
                           (FOcclusionCullResult *)param_1,iVar2);
        if (bVar4) {
          iVar5 = *(int *)&in_R8[1].Data;
          if (iVar5 == *piVar1) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                              (0x404,in_R8,piVar1);
          }
          *(int *)&in_R8[1].Data = iVar5 + 1;
          in_R8->Data[iVar5] = iVar2;
        }
        uVar6 = (int)uVar8 + 1;
        uVar8 = 0;
        ppvVar3 = ppvVar9 + 1;
        if (uVar6 < 0x100) {
          uVar8 = (ulonglong)uVar6;
          ppvVar3 = ppvVar9;
        }
        ppvVar9 = ppvVar3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    if (bVar10) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    return (FOcclusionCullResult)param_1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

