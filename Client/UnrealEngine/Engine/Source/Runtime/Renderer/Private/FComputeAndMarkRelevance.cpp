// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FComputeAndMarkRelevance @ 14551d8d0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FComputeAndMarkRelevance * __thiscall
FComputeAndMarkRelevance::FComputeAndMarkRelevance
          (FComputeAndMarkRelevance *this,FVisibilityTaskData *param_1,FScene *param_2,
          FViewInfo *param_3,uchar param_4,FTaskHandle *param_5)

{
  int *piVar1;
  uint uVar2;
  FViewInfo *this_00;
  FTaskBase *pFVar3;
  FVisibilityTaskData *pFVar4;
  code *pcVar5;
  double dVar6;
  TConsoleVariableData<float> *pTVar7;
  bool bVar8;
  FStaticShaderPlatform FVar9;
  int iVar10;
  FComputeAndMarkRelevance *pFVar11;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar12;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar13;
  atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
  aVar14;
  ForElementType<FViewCommands> FVar15;
  uchar *_Dst;
  
  this->TaskData = param_1;
  this->Scene = param_2;
  this->View = param_3;
  if (((param_1->DynamicMeshElements).ViewCommandsPerView.ArrayNum <= (int)(uint)param_4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FComputeAndMarkRelevance *)(*pcVar5)();
    return pFVar11;
  }
  FVar15 = (param_1->DynamicMeshElements).ViewCommandsPerView.AllocatorInstance.SecondaryData;
  this->ViewIndex = (uint)param_4;
  if (FVar15 == (ForElementType<FViewCommands>)0x0) {
    FVar15 = (ForElementType<FViewCommands>)&(param_1->DynamicMeshElements).ViewCommandsPerView;
  }
  this_00 = this->View;
  this->ViewCommands = (FViewCommands *)((longlong)FVar15 + (ulonglong)param_4 * 0x7f0);
  dVar6 = (double)this_00->_padding_;
  (this->ViewData).ViewOrigin.field0_0x0._s_0.X =
       (((TVector<double> *)&this_00->_padding_)->field0_0x0)._s_0.X;
  (this->ViewData).ViewOrigin.field0_0x0._s_0.Y = dVar6;
  (this->ViewData).ViewOrigin.field0_0x0._s_0.Z = (double)this_00->_padding_;
  iVar10 = 0;
  if ((BADTYPE)(((FSceneViewFamily *)this_00->_padding_)->EngineShowFlags).LOD) {
    iVar10 = GetCVarForceLOD();
  }
  (this->ViewData).ForcedLODLevel = iVar10;
  pTVar7 = CVarStaticMeshLODDistanceScale.Ref;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar11 = (FComputeAndMarkRelevance *)(*pcVar5)();
    return pFVar11;
  }
  (this->ViewData).LODScale = *(float *)&this_00->_padding_ * pTVar7->ShadowedValue[1];
  (this->ViewData).MinScreenRadiusForDepthPrepassSquared =
       GMinScreenRadiusForDepthPrepass * GMinScreenRadiusForDepthPrepass;
  FVar9.Platform = FSceneView::GetShaderPlatform((FSceneView *)this_00);
  bVar8 = ShouldForceFullDepthPass(FVar9);
  (this->ViewData).bFullEarlyZPass = bVar8;
  piVar1 = &(this->Packets).ArrayMax;
  this->NumMeshes = *(uint *)&(this->Scene->StaticMeshes).field_0x8;
  this->NumPrimitivesPerPacket = (param_1->TaskConfig).Relevance.NumPrimitivesPerPacket;
  (this->Packets).AllocatorInstance.Data = (FRelevancePacket **)0x0;
  (this->Packets).ArrayNum = 0;
  *piVar1 = 0;
  (this->PrerequisitesTask).Pimpl.Reference = (FTaskBase *)0x0;
  pFVar3 = (param_5->Pimpl).Reference;
  (this->PrerequisitesTask).Pimpl.Reference = pFVar3;
  if (pFVar3 != (FTaskBase *)0x0) {
    LOCK();
    pFVar3->RefCount = (atomic<unsigned_int>)((int)pFVar3->RefCount + 1);
    UNLOCK();
  }
  pFVar4 = this->TaskData;
  bVar8 = (pFVar4->TaskConfig).Schedule == Parallel;
  this->bFinalized = false;
  this->bLaunchOnAddPrimitive = bVar8;
  this->bFinished = !bVar8;
  aVar12 = (atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
            )TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc
                       ((ulonglong)(this->NumMeshes + 0x1f) + 0x10,8);
  *(undefined ***)aVar12 =
       &
       ___7FAllocation___TConcurrentLinearBulkObjectAllocator_UFSceneRenderingBlockAllocationTag____6B_
  ;
  *(undefined8 *)((longlong)aVar12 + 8) = 0;
  _Dst = (uchar *)((longlong)aVar12 + 0x17U & 0xfffffffffffffff8);
  aVar13 = (pFVar4->Allocator).Next;
  do {
    *(atomic<TConcurrentLinearBulkObjectAllocator<FSceneRenderingBlockAllocationTag>::FAllocation_*>
      *)((longlong)aVar12 + 8) = aVar13;
    LOCK();
    aVar14 = (pFVar4->Allocator).Next;
    bVar8 = aVar13 == aVar14;
    if (bVar8) {
      (pFVar4->Allocator).Next = aVar12;
      aVar14 = aVar13;
    }
    UNLOCK();
    aVar13 = aVar14;
  } while (!bVar8);
  this->MarkMasks = _Dst;
  memset(_Dst,0,(ulonglong)(this->NumMeshes + 0x1f));
  uVar2 = (param_1->TaskConfig).Relevance.NumEstimatedPackets;
  if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
  }
  if (*piVar1 < (int)uVar2) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_>
              (8,8,uVar2,&(this->Packets).AllocatorInstance,(this->Packets).ArrayNum,piVar1);
  }
  CreateRelevancePacket(this);
  return this;
}

// operator() @ 145523800

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FComputeAndMarkRelevance::Finalize'::__l12::<lambda_1>::operator()(void *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FLowLevelMemTracker *this_00;
  FPageAllocator *this_01;
  uint uVar5;
  FDynamicPrimitiveIndex *pFVar6;
  int *piVar7;
  FTaskTagScope local_28;
  FDynamicPrimitiveIndexList local_18;
  
  FTaskTagScope::FTaskTagScope(&local_28,EParallelRenderingThread);
  lVar2 = *(longlong *)this;
  local_18.Primitives.AllocatorInstance.Data = (FDynamicPrimitiveIndex *)0x0;
  local_18.Primitives.ArrayNum = 0;
  local_18.Primitives.ArrayMax = 0;
  uVar5 = 0;
  if (param_1 < *(int *)(lVar2 + 0x68)) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  FRelevancePacket::ComputeRelevance
            (*(FRelevancePacket **)(*(longlong *)(lVar2 + 0x60) + (longlong)param_1 * 8),&local_18);
  if (local_18.Primitives.AllocatorInstance.Data != (FDynamicPrimitiveIndex *)0x0) {
    pFVar6 = local_18.Primitives.AllocatorInstance.Data + -2;
    MemoryTrace_Free((ulong64)pFVar6,0,0);
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar6,FMalloc,true);
    }
    piVar7 = (int *)((longlong)pFVar6 - (ulonglong)(uint)*pFVar6);
    LOCK();
    iVar1 = *piVar7;
    *piVar7 = *piVar7 + -1;
    UNLOCK();
    if (iVar1 == 1) {
      lVar2 = *(longlong *)(piVar7 + 0x10);
      MemoryTrace_UnmarkAllocAsHeap((ulong64)piVar7,0,0);
      if (lVar2 - (longlong)piVar7 == 0x10000) {
        this_01 = FPageAllocator::Get();
        FPageAllocator::Free(this_01,piVar7);
      }
      else {
        (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,piVar7);
      }
    }
  }
  FTaskTagScope::~FTaskTagScope(&local_28);
  return;
}

// AddPrimitive @ 145528160

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FComputeAndMarkRelevance::AddPrimitive(FComputeAndMarkRelevance *this,int param_1)

{
  FRelevancePacket *this_00;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int local_18 [4];
  
  iVar5 = (this->Packets).ArrayNum;
  uVar6 = iVar5 - 1;
  uVar4 = 0;
  if ((int)uVar6 < iVar5) {
    uVar4 = ~uVar6 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = (this->Packets).AllocatorInstance.Data[(longlong)(this->Packets).ArrayNum + -1];
  local_18[0] = param_1;
  if ((this_00->Input).Prims.ArrayNum == 0) {
    uVar4 = (this_00->Input).MaxOutputPrims;
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((this_00->Input).Prims.ArrayMax < (int)uVar4) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                (4,4,uVar4,(ForElementType<int> *)&this_00->Input,0,&(this_00->Input).Prims.ArrayMax
                );
    }
  }
  piVar1 = (this_00->Input).Prims.AllocatorInstance.Data;
  if ((piVar1 <= local_18) && (local_18 < piVar1 + (this_00->Input).Prims.ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar5 = (this_00->Input).Prims.ArrayNum;
  piVar1 = &(this_00->Input).Prims.ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<int>_>
                      (0x404,(ForElementType<int> *)&this_00->Input,piVar1);
  }
  (this_00->Input).Prims.ArrayNum = iVar5 + 1;
  (this_00->Input).Prims.AllocatorInstance.Data[iVar5] = local_18[0];
  if ((this_00->Input).MaxOutputPrims <= (this_00->Input).Prims.ArrayNum) {
    if (this->bLaunchOnAddPrimitive != false) {
      FRelevancePacket::LaunchComputeRelevanceTask(this_00);
    }
    CreateRelevancePacket(this);
  }
  return;
}

// AddPrimitives @ 1455284c0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FComputeAndMarkRelevance::AddPrimitives
          (FComputeAndMarkRelevance *this,
          TArray<int,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *param_1)

{
  FRelevancePrimSet<int,1> *pFVar1;
  FRelevancePacket **ppFVar2;
  FRelevancePacket **ppFVar3;
  int iVar4;
  int *piVar5;
  code *pcVar6;
  bool bVar7;
  FRelevancePacket *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int *piVar12;
  undefined1 local_res8 [8];
  
  uVar9 = param_1->ArrayNum;
  if (uVar9 == this->NumPrimitivesPerPacket) {
    pFVar8 = CreateRelevancePacket(this);
    pFVar1 = &pFVar8->Input;
    if (pFVar1 != (FRelevancePrimSet<int,1> *)param_1) {
      piVar5 = (pFVar1->Prims).AllocatorInstance.Data;
      if (piVar5 != (int *)0x0) {
        TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar5);
      }
      (pFVar1->Prims).AllocatorInstance.Data = (param_1->AllocatorInstance).Data;
      (param_1->AllocatorInstance).Data = (int *)0x0;
      (pFVar8->Input).Prims.ArrayNum = param_1->ArrayNum;
      (pFVar8->Input).Prims.ArrayMax = param_1->ArrayMax;
      param_1->ArrayNum = 0;
      param_1->ArrayMax = 0;
    }
    if (this->bLaunchOnAddPrimitive != false) {
      FRelevancePacket::LaunchComputeRelevanceTask(pFVar8);
    }
    iVar4 = (this->Packets).ArrayNum;
    uVar10 = iVar4 - 2;
    uVar9 = 0;
    if ((int)uVar10 < iVar4) {
      uVar9 = ~uVar10 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar4 = (this->Packets).ArrayNum;
    uVar11 = iVar4 - 1;
    ppFVar2 = (this->Packets).AllocatorInstance.Data + (int)uVar10;
    uVar9 = 0;
    if ((int)uVar11 < iVar4) {
      uVar9 = ~uVar11 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    ppFVar3 = (this->Packets).AllocatorInstance.Data + (int)uVar11;
    pFVar8 = *ppFVar3;
    *ppFVar3 = *ppFVar2;
    *ppFVar2 = pFVar8;
  }
  else {
    piVar12 = (param_1->AllocatorInstance).Data;
    piVar5 = piVar12 + (int)uVar9;
    while( true ) {
      if (param_1->ArrayNum != uVar9) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (piVar12 == piVar5) break;
      AddPrimitive(this,*piVar12);
      piVar12 = piVar12 + 1;
    }
  }
  return;
}

// CreateRelevancePacket @ 145530880

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRelevancePacket * __thiscall
FComputeAndMarkRelevance::CreateRelevancePacket(FComputeAndMarkRelevance *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FRelevancePacket *pFVar5;
  
  if ((this->bLaunchOnAddPrimitive != false) && (this->bFinished != false)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bLaunchOnAddPrimitive || !bFinished",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibilityPrivate.h"
                       ,0x333,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRelevancePacket *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Malloc(0x9e8,8);
  if (pFVar5 == (FRelevancePacket *)0x0) {
    pFVar5 = (FRelevancePacket *)0x0;
  }
  else {
    pFVar5 = FRelevancePacket::FRelevancePacket
                       (pFVar5,this->TaskData,this->View,this->ViewIndex,&this->ViewData,
                        this->MarkMasks,&this->PrerequisitesTask);
  }
  iVar4 = (this->Packets).ArrayNum;
  piVar1 = &(this->Packets).ArrayMax;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_>
                      (0x808,&(this->Packets).AllocatorInstance,piVar1);
  }
  (this->Packets).ArrayNum = iVar4 + 1;
  (this->Packets).AllocatorInstance.Data[iVar4] = pFVar5;
  return pFVar5;
}

// Finalize @ 14553dfa0

/* WARNING: Removing unreachable block (ram,0x00014553e7dc) */
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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FComputeAndMarkRelevance::Finalize(FComputeAndMarkRelevance *this)

{
  int *piVar1;
  uchar *puVar2;
  bool *pbVar3;
  undefined1 *this_00;
  longlong *plVar4;
  undefined1 *this_01;
  FRelevancePacket **ppFVar5;
  undefined1 *puVar6;
  atomic<unsigned_char> aVar7;
  byte bVar8;
  byte bVar9;
  FTaskBase *pFVar10;
  FRelevancePacket *pFVar11;
  FScene *pFVar12;
  FViewInfo *pFVar13;
  FSubstrateViewData *pFVar14;
  longlong lVar15;
  FPrimitiveViewRelevance *_Src;
  FLODMask *_Src_00;
  code *pcVar16;
  uint uVar17;
  undefined8 uVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  ushort uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  FName *pFVar47;
  FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_13_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize>
  FVar48;
  FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_2_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits>
  FVar49;
  FSceneView *pFVar50;
  TArray<FPrimitiveViewRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar51;
  TArray<FLODMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *pTVar52;
  int iVar53;
  uint uVar54;
  ulong64 uVar55;
  FMutex *pFVar56;
  ulonglong uVar57;
  ForElementType<FSetElementId> *_Src_01;
  FName FVar58;
  byte *pbVar59;
  TVector<double> *pTVar60;
  ForElementType<FVisibleMeshDrawCommand> *pFVar61;
  ForElementType<FStaticMeshBatch_const_*> *pFVar62;
  ForElementType<EMeshDrawCommandCullingPayloadFlags> *pFVar63;
  byte *pbVar64;
  int iVar65;
  uint uVar66;
  ulong64 uVar67;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar68;
  int iVar69;
  ulong64 uVar70;
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *pTVar71;
  TVector<double> *this_02;
  uint uVar72;
  FRelevancePacket **ppFVar73;
  uint uVar74;
  longlong lVar75;
  <lambda_1> local_res8;
  uint local_res10;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
  *local_e0;
  FColor_u_0 local_d8;
  FColor_u_0 local_d4;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b0;
  int local_a0;
  FComputeAndMarkRelevance *local_98;
  TArrayView<std::nullptr_t,int> local_90;
  code *local_80;
  FComputeAndMarkRelevance **local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  if (((this->bFinished == false) || (this->bFinalized != false)) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("bFinished && !bFinalized",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x8a3,L""), bVar22)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  this->bFinalized = true;
  pFVar10 = (this->PrerequisitesTask).Pimpl.Reference;
  if (pFVar10 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::Wait(pFVar10);
  }
  if (this->bLaunchOnAddPrimitive == false) {
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`FComputeAndMarkRelevance::Finalize'::__l12::<lambda_1>,void,int>
               ::Call;
    local_78 = &local_98;
    local_90.DataPtr = (void **)0x0;
    local_90.ArrayNum = 0;
    local_98 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",(this->Packets).ArrayNum,1,
               (TFunctionRef<void___cdecl(int)> *)&local_80,local_res8,None,&local_90);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FinalizeRelevance");
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2227,"FinalizeRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x8b3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2227);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize =
         (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_13_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize>
          )0x0;
    pFVar47 = ::FName::FName(&local_70,"STAT_ComputeAndMarkRelevanceForViewParallel_Finalize");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize,*pFVar47,
               L"STAT_ComputeAndMarkRelevanceForViewParallel_Finalize","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar48 = StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize;
  if (StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_13_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize>
       )0x0) {
    pFVar47 = ::FName::FName(&local_68,"STAT_ComputeAndMarkRelevanceForViewParallel_Finalize");
    FVar48 = (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_13_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_Finalize,*pFVar47,
                          L"STAT_ComputeAndMarkRelevanceForViewParallel_Finalize","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar58 = *(FName *)FVar48;
  bVar20 = false;
  bVar19 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  bVar23 = false;
  bVar21 = false;
  if ((FVar58.ComparisonIndex.Value.Value == 0) && (FVar58.Number == 0)) {
LAB_14553e293:
    bVar20 = bVar23;
    bVar19 = bVar21;
    bVar21 = false;
    FVar58 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d8._s_0,(char *)*(FName *)((longlong)FVar48 + 0x10));
      bVar20 = false;
      bVar19 = true;
      bVar23 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d0.ComparisonIndex.Value = FVar58.ComparisonIndex.Value.Value;
        local_d0.Number = FVar58.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d0,(wchar_t *)*(FName *)((longlong)FVar48 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x8b6);
        bVar20 = true;
        bVar19 = true;
        bVar23 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14553e293;
    FThreadStats::AddMessage(FVar58,CycleScopeStart);
    bVar21 = true;
  }
  lVar75 = 0x3c0;
  do {
    uVar55 = 0;
    uVar66 = (this->Packets).ArrayNum;
    uVar57 = (ulonglong)(int)uVar66;
    ppFVar73 = (this->Packets).AllocatorInstance.Data;
    ppFVar5 = ppFVar73 + uVar57;
    uVar67 = uVar55;
    uVar70 = uVar55;
    while( true ) {
      iVar53 = (int)uVar55;
      if ((this->Packets).ArrayNum != (int)uVar57) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<FRelevancePacket_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
        uVar57 = (ulonglong)uVar66;
      }
      iVar69 = (int)uVar70;
      iVar65 = (int)uVar67;
      if (ppFVar73 == ppFVar5) break;
      pFVar11 = *ppFVar73;
      uVar55 = (ulong64)(uint)(iVar53 + *(int *)(lVar75 + -0x270 + (longlong)pFVar11));
      uVar70 = (ulong64)(uint)(iVar69 + *(int *)((longlong)&pFVar11->CurrentWorldTime + lVar75));
      uVar67 = (ulong64)(uint)(iVar65 + *(int *)((longlong)
                                                 &(pFVar11->DrawCommandPacket).
                                                  VisibleCachedDrawCommands[0x12].ArrayNum + lVar75)
                              );
      ppFVar73 = ppFVar73 + 1;
    }
    pFVar61 = (ForElementType<FVisibleMeshDrawCommand> *)
              ((longlong)this->ViewCommands + lVar75 + -0x3c0);
    if (iVar53 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar55);
    }
    if (*(int *)((longlong)&pFVar61[1].Data + 4) < iVar53) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FVisibleMeshDrawCommand>_>
                (0x48,8,iVar53,pFVar61,*(int *)&pFVar61[1].Data,
                 (int *)((longlong)&pFVar61[1].Data + 4));
    }
    if (iVar69 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar70);
    }
    pFVar62 = (ForElementType<FStaticMeshBatch_const_*> *)
              ((longlong)this->ViewCommands + lVar75 + -0xb0);
    if (*(int *)((longlong)&pFVar62[1].Data + 4) < iVar69) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FStaticMeshBatch_const_*>_>
                (8,8,iVar69,pFVar62,*(int *)&pFVar62[1].Data,(int *)((longlong)&pFVar62[1].Data + 4)
                );
    }
    if (iVar65 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar67);
    }
    pFVar63 = (ForElementType<EMeshDrawCommandCullingPayloadFlags> *)
              ((longlong)&(this->ViewCommands->MeshCommands).Elements[0x1c].AllocatorInstance.Data +
              lVar75);
    if (*(int *)((longlong)&pFVar63[1].Data + 4) < iVar65) {
      UE::Core::Private::
      ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<enum_EMeshDrawCommandCullingPayloadFlags>_>
                (1,1,iVar65,pFVar63,*(int *)&pFVar63[1].Data,(int *)((longlong)&pFVar63[1].Data + 4)
                );
    }
    if ((iVar69 != iVar65) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("NumDynamicBuildRequests == NumDynamicBuildFlags",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                            ,0x8c8,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    lVar75 = lVar75 + 0x10;
  } while (lVar75 < 0x630);
  pFVar56 = &this->View->DirtyIndirectLightingCacheBufferPrimitivesMutex;
  LOCK();
  bVar23 = pFVar56->State == (atomic<unsigned_char>)0x0;
  if (bVar23) {
    pFVar56->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar23) {
    UE::FMutex::LockSlow(pFVar56);
  }
  ppFVar73 = (this->Packets).AllocatorInstance.Data;
  iVar53 = (this->Packets).ArrayNum;
  ppFVar5 = ppFVar73 + iVar53;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar53) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRelevancePacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (ppFVar73 == ppFVar5) break;
    pFVar11 = *ppFVar73;
    FRelevancePacket::Finalize(pFVar11);
    if (pFVar11 != (FRelevancePacket *)0x0) {
      FRelevancePacket::~FRelevancePacket(pFVar11);
      TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar11);
    }
    ppFVar73 = ppFVar73 + 1;
  }
  pFVar56 = &this->View->DirtyIndirectLightingCacheBufferPrimitivesMutex;
  LOCK();
  aVar7 = pFVar56->State;
  pFVar56->State = (atomic<unsigned_char>)((char)pFVar56->State + -1);
  UNLOCK();
  if (((byte)aVar7 & 2) != 0) {
    UE::FMutex::WakeWaitingThread(pFVar56);
  }
  uVar66 = 0;
  piVar1 = &(this->Packets).ArrayMax;
  (this->Packets).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FRelevancePacket_*>_>
              (8,8,0,&(this->Packets).AllocatorInstance,0,piVar1);
  }
  if (this->TaskData->bAddNaniteRelevance != false) {
    pFVar12 = this->Scene;
    if (`public:_void___cdecl_FScene::WaitForCacheNaniteMaterialBinsTask(void)___ptr64'::__l2::
        __CsvProfilerStat3834 == false) {
      FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/CacheNaniteMaterialBins");
      `public:_void___cdecl_FScene::WaitForCacheNaniteMaterialBinsTask(void)___ptr64'::__l2::
      __CsvProfilerStat3834 = true;
    }
    FCsvProfiler::BeginSetWaitStat
              ("EventWait/CacheNaniteMaterialBins","CsvEventWait/CacheNaniteMaterialBins",
               "CsvEventWait/CacheNaniteMaterialBins (Non-CP)");
    pFVar10 = (pFVar12->CacheNaniteMaterialBinsTask).Pimpl.Reference;
    if (pFVar10 != (FTaskBase *)0x0) {
      UE::Tasks::Private::FTaskBase::Wait(pFVar10);
    }
    FCsvProfiler::EndSetWaitStat();
    pFVar12 = this->Scene;
    pFVar13 = this->View;
    pFVar13->ShadingModelMaskInView =
         pFVar13->ShadingModelMaskInView |
         (ushort)pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ & 0x3fff;
    uVar54 = ((uint)*(byte *)((longlong)
                              &pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ + 5) *
              2 | *(uint *)&pFVar13->field_0x24b8) & 0x40 ^
             *(uint *)&pFVar13->field_0x24b8 & 0xffffffbf;
    *(uint *)&pFVar13->field_0x24b8 = uVar54;
    uVar54 = (*(uint *)&pFVar12->NaniteShadingPipelines[0].CombinedRelevance.field_0x8 >> 6 | uVar54
             ) & 0x80 ^ uVar54 & 0xffffff7f;
    *(uint *)&pFVar13->field_0x24b8 = uVar54;
    uVar54 = ((uint)*(byte *)((longlong)
                              &pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ + 6)
              << 8 | uVar54) & 0x4000 ^ uVar54 & 0xffffbfff;
    *(uint *)&pFVar13->field_0x24b8 = uVar54;
    pFVar13->bHasDistortionPrimitives =
         (bool)(pFVar13->bHasDistortionPrimitives |
               *(byte *)((longlong)&pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ +
                        4) >> 4 & 1);
    pFVar13->bHasCustomDepthPrimitives =
         (bool)(pFVar13->bHasCustomDepthPrimitives |
               pFVar12->NaniteShadingPipelines[0].CombinedRelevance.bRenderCustomDepth);
    uVar54 = ((uint)*(byte *)((longlong)
                              &pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ + 4)
              << 10 | uVar54) & 0x400 ^ uVar54 & 0xfffffbff;
    *(uint *)&pFVar13->field_0x24b8 = uVar54;
    if ((pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ & 0x200000000) != 0) {
      uVar66 = 0x800;
    }
    *(uint *)&pFVar13->field_0x24b8 = (uVar66 | uVar54 & 0x800) ^ uVar54 & 0xfffff7ff;
    uVar66 = (uint)*(byte *)((longlong)
                             &pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ + 3) *
             2 + 1;
    local_a0 = 0x1f;
    if (uVar66 != 0) {
      for (; uVar66 >> local_a0 == 0; local_a0 = local_a0 + -1) {
      }
    }
    uVar66 = 8 - (byte)(8 - (char)local_a0);
    pFVar14 = pFVar13->SubstrateViewData;
    if (uVar66 < pFVar14->MaxClosurePerPixel) {
      uVar66 = pFVar14->MaxClosurePerPixel;
    }
    pFVar14->MaxClosurePerPixel = uVar66;
    pFVar14 = pFVar13->SubstrateViewData;
    uVar66 = ((uint)pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ >> 0x12 & 0x3f)
             << 2;
    if (uVar66 < pFVar14->MaxBytesPerPixel) {
      uVar66 = pFVar14->MaxBytesPerPixel;
    }
    pFVar14->MaxBytesPerPixel = uVar66;
    puVar2 = &pFVar13->SubstrateViewData->UsesTileTypeMask;
    *puVar2 = *puVar2 | (byte)((uint)pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_
                              >> 0xe) & 0xf;
    pbVar3 = &pFVar13->SubstrateViewData->bUsesAnisotropy;
    *pbVar3 = (bool)(*pbVar3 |
                    *(byte *)((longlong)
                              &pFVar12->NaniteShadingPipelines[0].CombinedRelevance._padding_ + 7)
                    >> 3 & 1);
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar58,CycleScopeEnd);
  }
  uVar57 = (ulonglong)(this->TaskData->TaskConfig).Relevance.NumPrimitivesProcessed;
  if ((__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.Value != uVar57) &&
     (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.Value = uVar57,
     -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.CounterId ==
        (atomic<unsigned_int>)0x0) {
      uVar24 = FCountersTrace::OutputInitCounter
                         (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.
                          CounterName,TraceCounterType_Int,
                          __GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.
                          CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.CounterId ==
          (atomic<unsigned_int>)0x0) {
        __GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.CounterId._2_2_ = 0;
        __GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.CounterId._0_2_ = uVar24;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.CounterId._0_2_,
               __GTraceCounterScene_Visibility_Relevance_NumPrimitivesProcessed.Value);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
    StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits =
         (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_2_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits>
          )0x0;
    pFVar47 = ::FName::FName(&local_60,
                             "STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits,*pFVar47,
               L"STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS3);
  }
  FVar49 = StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits;
  if (StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_2_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits>
       )0x0) {
    pFVar47 = ::FName::FName(local_58,
                             "STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits");
    FVar49 = (FThreadSafeStaticStat<_public:_void___cdecl_FComputeAndMarkRelevance::Finalize(void)_::_2_::FStat_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits,
                          *pFVar47,L"STAT_ComputeAndMarkRelevanceForViewParallel_TransposeMeshBits",
                          "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                          false,MCR_Invalid);
  }
  FVar58 = *(FName *)FVar49;
  bVar20 = false;
  bVar19 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  bVar23 = false;
  bVar21 = false;
  if ((FVar58.ComparisonIndex.Value.Value != 0) || (FVar58.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d4._s_0,(char *)*(FName *)((longlong)FVar49 + 0x10));
      bVar20 = false;
      bVar19 = true;
      bVar23 = false;
      bVar21 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar58.ComparisonIndex.Value.Value;
        local_c8.Number = FVar58.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar49 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                   ,0x8f4);
        bVar20 = true;
        bVar19 = true;
        bVar23 = true;
        bVar21 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar58,CycleScopeStart);
      bVar21 = true;
      goto LAB_14553e922;
    }
  }
  bVar20 = bVar23;
  bVar19 = bVar21;
  bVar21 = false;
  FVar58 = local_b0;
LAB_14553e922:
  pFVar13 = this->View;
  uVar66 = this->NumMeshes;
  if (((((pFVar13->StaticMeshVisibilityMap).NumBits != uVar66) ||
       ((pFVar13->StaticMeshFadeOutDitheredLODMap).NumBits != uVar66)) ||
      ((pFVar13->StaticMeshFadeInDitheredLODMap).NumBits != uVar66)) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("View.StaticMeshVisibilityMap.Num() == NumMeshes && View.StaticMeshFadeOutDitheredLODMap.Num() == NumMeshes && View.StaticMeshFadeInDitheredLODMap.Num() == NumMeshes"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                          ,0x8f8,L""), bVar23)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar13 = this->View;
  pbVar59 = this->MarkMasks;
  local_res10 = 0;
  pTVar68 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(pFVar13->StaticMeshVisibilityMap).AllocatorInstance.SecondaryData.Data;
  pTVar71 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
             *)(pFVar13->StaticMeshFadeOutDitheredLODMap).AllocatorInstance.SecondaryData.Data;
  local_e0 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
              *)(pFVar13->StaticMeshFadeInDitheredLODMap).AllocatorInstance.SecondaryData.Data;
  if (pTVar68 ==
      (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar68 = &pFVar13->StaticMeshVisibilityMap;
  }
  if (pTVar71 ==
      (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    pTVar71 = &pFVar13->StaticMeshFadeOutDitheredLODMap;
  }
  if (local_e0 ==
      (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
       *)0x0) {
    local_e0 = &pFVar13->StaticMeshFadeInDitheredLODMap;
  }
  pbVar64 = pbVar59;
  if (this->NumMeshes != 0) {
    do {
      uVar54 = 0;
      uVar72 = 0;
      uVar74 = 0;
      uVar66 = 1;
      bVar23 = false;
      lVar75 = 4;
      do {
        lVar15 = *(longlong *)pbVar64;
        pbVar64 = pbVar64 + 8;
        if (lVar15 == 0) {
          uVar66 = uVar66 << 8;
        }
        else {
          bVar8 = *pbVar59;
          uVar25 = 0;
          if ((bVar8 & 2) != 0) {
            uVar25 = uVar66;
          }
          uVar26 = 0;
          if ((bVar8 & 0x10) != 0) {
            uVar26 = uVar66;
          }
          bVar9 = pbVar59[1];
          uVar27 = 0;
          if ((bVar8 & 0x20) != 0) {
            uVar27 = uVar66;
          }
          uVar17 = uVar66 * 2;
          uVar28 = 0;
          if ((bVar9 & 2) != 0) {
            uVar28 = uVar17;
          }
          uVar29 = 0;
          if ((bVar9 & 0x10) != 0) {
            uVar29 = uVar17;
          }
          bVar8 = pbVar59[2];
          uVar30 = 0;
          if ((bVar9 & 0x20) != 0) {
            uVar30 = uVar17;
          }
          uVar17 = uVar66 * 4;
          uVar31 = 0;
          if ((bVar8 & 2) != 0) {
            uVar31 = uVar17;
          }
          uVar32 = 0;
          if ((bVar8 & 0x10) != 0) {
            uVar32 = uVar17;
          }
          bVar9 = pbVar59[3];
          uVar33 = 0;
          if ((bVar8 & 0x20) != 0) {
            uVar33 = uVar17;
          }
          uVar17 = uVar66 * 8;
          uVar34 = 0;
          if ((bVar9 & 2) != 0) {
            uVar34 = uVar17;
          }
          uVar35 = 0;
          if ((bVar9 & 0x10) != 0) {
            uVar35 = uVar17;
          }
          bVar8 = pbVar59[4];
          uVar36 = 0;
          if ((bVar9 & 0x20) != 0) {
            uVar36 = uVar17;
          }
          uVar17 = uVar66 * 0x10;
          uVar37 = 0;
          if ((bVar8 & 2) != 0) {
            uVar37 = uVar17;
          }
          uVar38 = 0;
          if ((bVar8 & 0x10) != 0) {
            uVar38 = uVar17;
          }
          bVar9 = pbVar59[5];
          uVar39 = 0;
          if ((bVar8 & 0x20) != 0) {
            uVar39 = uVar17;
          }
          uVar17 = uVar66 * 0x20;
          uVar40 = 0;
          if ((bVar9 & 2) != 0) {
            uVar40 = uVar17;
          }
          uVar41 = 0;
          if ((bVar9 & 0x10) != 0) {
            uVar41 = uVar17;
          }
          bVar8 = pbVar59[6];
          uVar42 = 0;
          if ((bVar9 & 0x20) != 0) {
            uVar42 = uVar17;
          }
          uVar17 = uVar66 * 0x40;
          uVar43 = 0;
          if ((bVar8 & 2) != 0) {
            uVar43 = uVar17;
          }
          uVar44 = 0;
          if ((bVar8 & 0x10) != 0) {
            uVar44 = uVar17;
          }
          bVar9 = pbVar59[7];
          uVar45 = 0;
          if ((bVar8 & 0x20) != 0) {
            uVar45 = uVar17;
          }
          uVar17 = uVar66 * 0x80;
          uVar46 = 0;
          if ((bVar9 & 2) != 0) {
            uVar46 = uVar17;
          }
          uVar54 = uVar54 | uVar25 | uVar28 | uVar31 | uVar34 | uVar37 | uVar40 | uVar43 | uVar46;
          uVar25 = 0;
          if ((bVar9 & 0x10) != 0) {
            uVar25 = uVar17;
          }
          uVar72 = uVar72 | uVar26 | uVar29 | uVar32 | uVar35 | uVar38 | uVar41 | uVar44 | uVar25;
          bVar23 = true;
          uVar25 = 0;
          if ((bVar9 & 0x20) != 0) {
            uVar25 = uVar17;
          }
          uVar66 = uVar66 * 0x100;
          uVar74 = uVar74 | uVar27 | uVar30 | uVar33 | uVar36 | uVar39 | uVar42 | uVar45 | uVar25;
        }
        pbVar59 = pbVar59 + 8;
        lVar75 = lVar75 + -1;
      } while (lVar75 != 0);
      if (bVar23) {
        *(uint *)(pTVar68->AllocatorInstance).InlineData = uVar54;
        *(uint *)(pTVar71->AllocatorInstance).InlineData = uVar72;
        *(uint *)(local_e0->AllocatorInstance).InlineData = uVar74;
      }
      local_e0 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  *)((local_e0->AllocatorInstance).InlineData + 4);
      local_res10 = local_res10 + 0x20;
      pTVar68 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((pTVar68->AllocatorInstance).InlineData + 4);
      pTVar71 = (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                 *)((pTVar71->AllocatorInstance).InlineData + 4);
    } while (local_res10 < this->NumMeshes);
  }
  if (*(char *)((longlong)&this->View->_padding_ + 7) != '\0') {
    if (((int)this->View->_padding_ == 2) &&
       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                           ("View.StereoPass != EStereoscopicPass::eSSP_SECONDARY",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                            ,0x926,L""), bVar23)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pFVar50 = FSceneView::GetInstancedSceneView((FSceneView *)this->View);
    if (pFVar50 != (FSceneView *)0x0) {
      pTVar68 = &this->View->PrimitiveVisibilityMap;
      if ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)&pFVar50[1].DynamicMeshElementsShadowCullFrustum != pTVar68) {
        TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::
        Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)&pFVar50[1].DynamicMeshElementsShadowCullFrustum,pTVar68);
      }
      pTVar68 = &this->View->PrimitiveRayTracingVisibilityMap;
      if ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)&pFVar50[1].StereoCullingFrustum != pTVar68) {
        TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::
        Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)&pFVar50[1].StereoCullingFrustum,pTVar68);
      }
      plVar4 = &pFVar50[1].SceneViewInitOptions._padding_;
      pTVar68 = &this->View->PrimitiveDefinitelyUnoccludedMap;
      if ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)plVar4 != pTVar68) {
        TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::
        Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)plVar4,pTVar68);
      }
      plVar4 = &pFVar50[1].SceneViewInitOptions._padding_;
      pTVar51 = &this->View->PrimitiveViewRelevanceMap;
      if ((TArray<FPrimitiveViewRelevance,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
           *)plVar4 != pTVar51) {
        iVar53 = (this->View->PrimitiveViewRelevanceMap).ArrayNum;
        piVar1 = (int *)((longlong)&pFVar50[1].SceneViewInitOptions._padding_ + 4);
        _Src = (pTVar51->AllocatorInstance).Data;
        iVar65 = *piVar1;
        *(int *)&pFVar50[1].SceneViewInitOptions._padding_ = iVar53;
        if ((iVar53 == 0) && (iVar65 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FPrimitiveViewRelevance>_>
                    (0x10,8,iVar53,iVar65,(ForElementType<FPrimitiveViewRelevance> *)plVar4,iVar53,
                     piVar1);
          if (iVar53 != 0) {
            memcpy((void *)*plVar4,_Src,(longlong)iVar53 << 4);
          }
        }
      }
      plVar4 = &pFVar50[1].SceneViewInitOptions._padding_;
      pTVar68 = &this->View->StaticMeshVisibilityMap;
      if ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
           *)plVar4 != pTVar68) {
        TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::
        Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                  ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    *)plVar4,pTVar68);
      }
      plVar4 = &pFVar50[1].SceneViewInitOptions._padding_;
      pTVar52 = &this->View->PrimitivesLODMask;
      if ((TArray<FLODMask,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_> *)plVar4
          != pTVar52) {
        iVar53 = (this->View->PrimitivesLODMask).ArrayNum;
        piVar1 = (int *)((longlong)&pFVar50[1].SceneViewInitOptions._padding_ + 4);
        _Src_00 = (pTVar52->AllocatorInstance).Data;
        iVar65 = *piVar1;
        *(int *)&pFVar50[1].SceneViewInitOptions._padding_ = iVar53;
        if ((iVar53 == 0) && (iVar65 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::
          ReallocForCopy<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FLODMask>_>
                    (2,2,iVar53,iVar65,(ForElementType<FLODMask> *)plVar4,iVar53,piVar1);
          if (iVar53 != 0) {
            memcpy((void *)*plVar4,_Src_00,(longlong)iVar53 * 2);
          }
        }
      }
      this_01 = &pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0.TypedValue.Elements.
                 field_0x20;
      *(int *)&pFVar50[1].SceneViewInitOptions._padding_ = this->View->NumVisibleDynamicPrimitives;
      *(int *)((longlong)&pFVar50[1].SceneViewInitOptions._padding_ + 4) =
           this->View->NumVisibleDynamicEditorPrimitives;
      *(ushort *)pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[3] =
           this->View->ShadingModelMaskInView;
      uVar66 = *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3);
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x40 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x80 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x100 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x4000 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x8000 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) =
           (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x10000 ^ uVar66;
      pFVar13 = this->View;
      uVar66 = (pFVar13->TranslucentPrimCount).Count[1];
      uVar18 = *(undefined8 *)((pFVar13->TranslucentPrimCount).Count + 2);
      pFVar50[1].SceneViewInitOptions.HiddenPrimitives.HashSize =
           (pFVar13->TranslucentPrimCount).Count[0];
      *(uint *)&pFVar50[1].SceneViewInitOptions.HiddenPrimitives.field_0x4c = uVar66;
      *(undefined8 *)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 = uVar18;
      uVar18 = *(undefined8 *)((pFVar13->TranslucentPrimCount).Count + 6);
      *(undefined8 *)((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 + 8)
           = *(undefined8 *)((pFVar13->TranslucentPrimCount).Count + 4);
      *(undefined8 *)
       ((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 + 0x10) = uVar18;
      *(undefined4 *)
       ((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 + 0x18) =
           *(undefined4 *)((pFVar13->TranslucentPrimCount).UseSceneColorCopyPerPass + 4);
      *(bool *)((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 + 0x1c) =
           this->View->bHasDistortionPrimitives;
      *(bool *)((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 + 0x1d) =
           this->View->bHasCustomDepthPrimitives;
      pFVar13 = this->View;
      if ((TSet<unsigned_int,DefaultKeyFuncs<unsigned_int,0>,TSetAllocator<TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>,TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>_>
           *)this_01 != &pFVar13->CustomDepthStencilValues) {
        iVar53 = (pFVar13->CustomDepthStencilValues).HashSize;
        this_02 = (TVector<double> *)&pFVar50[1].SceneViewInitOptions.LODDistanceFactor;
        TSizedInlineAllocator<1,32,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
        ::ForElementType<FSetElementId>::ResizeAllocation
                  ((ForElementType<FSetElementId> *)this_02,0,iVar53,4);
        _Src_01 = (ForElementType<FSetElementId> *)
                  (pFVar13->CustomDepthStencilValues).Hash.SecondaryData.SecondaryData.Data;
        if (_Src_01 == (ForElementType<FSetElementId> *)0x0) {
          _Src_01 = (ForElementType<FSetElementId> *)
                    &(pFVar13->CustomDepthStencilValues).Hash.SecondaryData;
        }
        if (_Src_01 == (ForElementType<FSetElementId> *)0x0) {
          _Src_01 = &(pFVar13->CustomDepthStencilValues).Hash;
        }
        pTVar60 = (TVector<double> *)
                  pFVar50[1].SceneViewInitOptions.OriginOffsetThisFrame.field0_0x0._s_0.Z;
        if (pTVar60 == (TVector<double> *)0x0) {
          pTVar60 = &pFVar50[1].SceneViewInitOptions.OriginOffsetThisFrame;
        }
        if (pTVar60 != (TVector<double> *)0x0) {
          this_02 = pTVar60;
        }
        if (iVar53 != 0) {
          memcpy(this_02,_Src_01,(longlong)iVar53 << 2);
        }
        pFVar50[1].SceneViewInitOptions.bInCameraCut = (bool)(char)iVar53;
        pFVar50[1].SceneViewInitOptions.bUseFieldOfViewForLOD = (bool)(char)((uint)iVar53 >> 8);
        *(short *)&pFVar50[1].SceneViewInitOptions.field_0x2ca = (short)((uint)iVar53 >> 0x10);
        iVar53 = *(int *)&(pFVar13->CustomDepthStencilValues).Elements.field_0x8;
        TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
        ::Empty((TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>,TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>_>
                 *)this_01,iVar53);
        UE::Core::Private::
        ReallocGrow<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_>_>
                  (0xc,4,iVar53,
                   (ForElementType<TSparseArrayElementOrFreeListLink<TAlignedBytes<12,4>_>_> *)
                   this_01,(int *)((longlong)
                                   &pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0 +
                                  0x28),
                   (int *)((longlong)&pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0
                          + 0x2c));
        puVar6 = &(pFVar13->CustomDepthStencilValues).Elements.field_0x10;
        this_00 = &pFVar50[1].SceneViewInitOptions.ShowOnlyPrimitives.field0_0x0.TypedValue.Elements
                   .field_0x30;
        pFVar50[1].SceneViewInitOptions.CursorPos.field0_0x0._s_0.X =
             *(int *)&(pFVar13->CustomDepthStencilValues).Elements.field_0x30;
        pFVar50[1].SceneViewInitOptions.CursorPos.field0_0x0._s_0.Y =
             *(int *)&(pFVar13->CustomDepthStencilValues).Elements.field_0x34;
        if (this_00 != puVar6) {
          TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
          ::
          Assign<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                    ((TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)this_00,
                     (TBitArray<TSizedInlineAllocator<4,32,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_>
                      *)puVar6);
        }
        if (iVar53 != 0) {
          memcpy(*(void **)this_01,*(void **)&(pFVar13->CustomDepthStencilValues).Elements,
                 (longlong)iVar53 * 0xc);
        }
      }
      uVar66 = *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3);
      uVar66 = (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x400 ^ uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) = uVar66;
      *(uint *)(pFVar50[1].ViewMatrices.InvTranslatedViewMatrix.M[2] + 3) =
           (uVar66 ^ *(uint *)&this->View->field_0x24b8) & 0x800 ^ uVar66;
      *(uint *)pFVar50[1].ViewMatrices.InvViewProjectionMatrix.M[2][2] =
           this->View->SubstrateViewData->MaxClosurePerPixel;
      *(uint *)((longlong)pFVar50[1].ViewMatrices.InvViewProjectionMatrix.M[2][2] + 4) =
           this->View->SubstrateViewData->MaxClosurePerPixel;
      *(uchar *)((longlong)pFVar50[1].ViewMatrices.InvViewProjectionMatrix.M[2][2] + 8) =
           this->View->SubstrateViewData->UsesTileTypeMask;
      *(bool *)((longlong)pFVar50[1].ViewMatrices.InvViewProjectionMatrix.M[2][2] + 9) =
           this->View->SubstrateViewData->bUsesAnisotropy;
    }
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar58,CycleScopeEnd);
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// Finish @ 14553ffd0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FComputeAndMarkRelevance::Finish(FComputeAndMarkRelevance *this,FTaskEvent *param_1)

{
  FRelevancePacket **ppFVar1;
  atomic<bool> aVar2;
  int iVar3;
  FTaskBase *pFVar4;
  FTaskEvent this_00;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FRelevancePacket **ppFVar10;
  undefined1 local_res8 [8];
  
  if ((this->bFinished != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bFinished",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
                         ,0x88f,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  this->bFinished = true;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Magenta,"FinishRelevance");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId2194,"FinishRelevance",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\SceneVisibility.cpp"
               ,0x892);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId2194);
  }
  iVar3 = (this->Packets).ArrayNum;
  uVar9 = iVar3 - 1;
  uVar8 = 0;
  if ((int)uVar9 < iVar3) {
    uVar8 = ~uVar9 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FRelevancePacket::LaunchComputeRelevanceTask
            ((this->Packets).AllocatorInstance.Data[(longlong)(this->Packets).ArrayNum + -1]);
  ppFVar10 = (this->Packets).AllocatorInstance.Data;
  iVar3 = (this->Packets).ArrayNum;
  ppFVar1 = ppFVar10 + iVar3;
  while( true ) {
    if ((this->Packets).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRelevancePacket_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (ppFVar10 == ppFVar1) break;
    if (((*ppFVar10)->bComputeRelevanceTaskLaunched != false) &&
       (pFVar4 = ((*ppFVar10)->ComputeRelevanceTask).Pimpl.Reference, pFVar4 != (FTaskBase *)0x0)) {
      UE::Tasks::Private::FTaskBase::AddPrerequisites((FTaskBase *)*param_1,pFVar4);
    }
    ppFVar10 = ppFVar10 + 1;
  }
  if ((*param_1 != (FTaskEvent)0x0) && (*(char *)((longlong)*param_1 + 0xd0) == '\0')) {
    this_00 = *param_1;
    LOCK();
    aVar2 = *(atomic<bool> *)((longlong)this_00 + 0x45);
    *(atomic<bool> *)((longlong)this_00 + 0x45) = (atomic<bool>)0x1;
    UNLOCK();
    if (aVar2 == (atomic<bool>)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)((longlong)this_00 + 0x30) =
           (atomic<unsigned_int>)((int)*(atomic<unsigned_int> *)((longlong)this_00 + 0x30) + 1);
      UNLOCK();
      UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_00,0xd8);
    }
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

