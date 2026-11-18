// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 44

// GetInstance @ 145325410

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRayTracingGeometryInstance * __thiscall
FRayTracingScene::GetInstance(FRayTracingScene *this,FInstanceHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRayTracingGeometryInstance *pFVar4;
  ulonglong uVar5;
  uint uStackX_14;
  
  uVar5 = (ulonglong)param_1 & 0xff;
  if ((this->Layers).ArrayNum <= (int)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRayTracingGeometryInstance *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uStackX_14 = param_1.Index;
  if ((longlong)param_1 < 0 || *(int *)(pFVar1 + uVar5 * 0x70 + 0x28) <= (int)uStackX_14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRayTracingGeometryInstance *)(*pcVar2)();
      return pFVar4;
    }
  }
  return (FRayTracingGeometryInstance *)
         ((longlong)(int)uStackX_14 * 0x58 + *(longlong *)(pFVar1 + uVar5 * 0x70 + 0x20));
}

// GetInstanceBuffer @ 1453254e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
FRayTracingScene::GetInstanceBuffer
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGBuffer *pFVar5;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FRDGBuffer **)
          ((longlong)(int)param_2.Index * 0x188 + 0x110 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58));
}

// GetInstanceDebugBuffer @ 1453255b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
FRayTracingScene::GetInstanceDebugBuffer(FRayTracingScene *this,ERayTracingSceneLayer param_1)

{
  code *pcVar1;
  bool bVar2;
  FRDGBuffer *pFVar3;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRDGBuffer *)(*pcVar1)();
      return pFVar3;
    }
  }
  return *(FRDGBuffer **)((this->Layers).AllocatorInstance.Data + (ulonglong)param_1 * 0x70 + 0x18);
}

// GetInstanceExtraDataBuffer @ 145325620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBuffer * __thiscall
FRayTracingScene::GetInstanceExtraDataBuffer
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGBuffer *pFVar5;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBuffer *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FRDGBuffer **)
          ((longlong)(int)param_2.Index * 0x188 + 0x158 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58));
}

// FRayTracingScene @ 145362dc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRayTracingScene * __thiscall FRayTracingScene::FRayTracingScene(FRayTracingScene *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FRayTracingScene *pFVar7;
  FName *pFVar8;
  int iVar9;
  FName local_res8;
  FString local_28;
  
  piVar1 = &(this->Layers).ArrayNum;
  piVar2 = &(this->Layers).ArrayMax;
  (this->GeometriesToBuild).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometriesToBuild).ArrayNum = 0;
  (this->GeometriesToBuild).ArrayMax = 0;
  this->bUsesLightingChannels = false;
  (this->InitTask).Pimpl.Reference = (FTaskBase *)0x0;
  (this->Layers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar9 = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  FMemStackBase::FMemStackBase(&this->Allocator,Small);
  (this->ViewParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ViewParameters).ArrayNum = 0;
  (this->ViewParameters).ArrayMax = 0;
  *(undefined8 *)&this->ActiveViews = 0;
  *(undefined8 *)&(this->ActiveViews).field_0x8 = 0;
  *(undefined8 *)&(this->ActiveViews).field_0x20 = 0;
  *(undefined4 *)&(this->ActiveViews).field_0x28 = 0;
  *(undefined4 *)&(this->ActiveViews).field_0x2c = 0x80;
  *(undefined4 *)&(this->ActiveViews).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ActiveViews).field_0x34 = 0;
  *(undefined8 *)&this->ViewIndexMap = 0;
  *(undefined8 *)&(this->ViewIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->ViewIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->ViewIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->ViewIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->ViewIndexMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ViewIndexMap).field_0x34 = 0;
  *(undefined8 *)&(this->ViewIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->ViewIndexMap).field_0x48 = 0;
  (this->TransientViewIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->TransientViewIndices).ArrayNum = 0;
  (this->TransientViewIndices).ArrayMax = 0;
  this->bInstanceExtraDataBufferEnabled = false;
  this->bTracingFeedbackEnabled = false;
  this->bInstanceDebugDataEnabled = false;
  this->bInitializationDataBuilt = false;
  this->bUsedThisFrame = false;
  this->bCachedInstancesLocked = false;
  this->MaxReadbackBuffers = 4;
  this->InstanceStatsBuffer = (FRDGBuffer *)0x0;
  (this->FeedbackReadback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FeedbackReadback).ArrayNum = 0;
  (this->FeedbackReadback).ArrayMax = 0;
  this->FeedbackReadbackWriteIndex = 0;
  this->FeedbackReadbackNumPending = 0;
  (this->StatsReadback).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->StatsReadback).ArrayNum = 0;
  (this->StatsReadback).ArrayMax = 0;
  this->StatsReadbackWriteIndex = 0;
  this->StatsReadbackNumPending = 0;
  iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x70,8,3,&(this->Layers).AllocatorInstance,piVar1,piVar2);
  DefaultConstructItems<FRayTracingScene::FLayer,int>
            ((this->Layers).AllocatorInstance.Data + (longlong)iVar6 * 0x70,3);
  if (*piVar1 < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRayTracingScene *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  ::FString::PrintfImpl(&local_28,L"RayTracingScene_Layer%u");
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = iVar9;
  }
  pFVar8 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)(pFVar3 + 0x68) = *pFVar8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (*piVar1 < 2) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRayTracingScene *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  ::FString::PrintfImpl(&local_28,L"RayTracingScene_Layer%u");
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = iVar9;
  }
  pFVar8 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)(pFVar3 + 0xd8) = *pFVar8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (*piVar1 < 3) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FRayTracingScene *)(*pcVar4)();
      return pFVar7;
    }
  }
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  ::FString::PrintfImpl(&local_28,L"RayTracingScene_Layer%u");
  iVar6 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar6 = iVar9;
  }
  pFVar8 = ::FName::FName(&local_res8,iVar6,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  *(FName *)(pFVar3 + 0x148) = *pFVar8;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return this;
}

// ~FRayTracingScene @ 145363b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::~FRayTracingScene(FRayTracingScene *this)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FTaskBase *pFVar5;
  code *pcVar6;
  bool bVar7;
  
  ReleaseFeedbackReadbackBuffers(this);
  ReleaseReadbackBuffers(this);
  pFVar3 = (this->StatsReadback).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->FeedbackReadback).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->TransientViewIndices).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->ViewIndexMap).field_0x48 = 0;
  pvVar4 = *(void **)&(this->ViewIndexMap).field_0x40;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ViewIndexMap);
  TSparseArray<int,FDefaultSparseArrayAllocator>::~TSparseArray<int,FDefaultSparseArrayAllocator>
            (&this->ActiveViews);
  pFVar3 = (this->ViewParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((GIsCriticalError == false) && ((this->Allocator).NumMarks != 0)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(GIsCriticalError || !NumMarks)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                       ,0x74,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FMemStackBase::FreeChunks(&this->Allocator,(FTaggedMemory *)0x0);
  DestructItems<FRayTracingScene::FLayer,int>
            ((FLayer *)(this->Layers).AllocatorInstance.Data,(this->Layers).ArrayNum);
  pFVar3 = (this->Layers).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar5 = (this->InitTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar3 = (this->GeometriesToBuild).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// operator() @ 145364f70

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRayTracingScene::Build'::__l2::<lambda_1>::operator()(void *this,FRHICommandList *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  int *piVar2;
  ulonglong uVar3;
  FRDGResource *pFVar4;
  FRHIResource *pFVar5;
  undefined8 uVar6;
  code *pcVar7;
  TConsoleVariableData<bool> *pTVar8;
  longlong *plVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  IRHIComputeContext *pIVar14;
  undefined8 *puVar15;
  longlong lVar16;
  uint uVar17;
  int iVar18;
  longlong *plVar19;
  longlong lVar20;
  TBitArray<FDefaultBitArrayAllocator> *pTVar21;
  uint uVar22;
  undefined1 local_res20 [8];
  ForAnyElementType local_188;
  undefined8 local_180;
  uint local_178;
  int local_170;
  uint uStack_16c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_168;
  undefined4 local_160;
  int iStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  FRayTracingSceneBuildParams local_148;
  longlong *local_d8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d0;
  int local_b0;
  int local_a8;
  int local_a4;
  longlong *local_a0;
  longlong local_98;
  undefined8 *local_90;
  FRHIRayTracingGeometry **local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FRayTracingSceneBuildParams *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FRayTracingSceneBuildParams *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FRayTracingSceneBuildParams_const_,int> local_58;
  TArrayView<FRayTracingSceneBuildParams_const_,int> local_48;
  
  pTVar8 = CVarRayTracingSceneBatchedBuild.Ref;
  bVar10 = IsInParallelRenderingThread();
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  bVar10 = pTVar8->ShadowedValue[1];
  local_188.Data = (FScriptContainerElement *)0x0;
  local_180 = 0;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x70,8,3,&local_188,0,(int *)((longlong)&local_180 + 4));
  local_178 = 0;
  do {
    uVar17 = local_178;
    lVar16 = *(longlong *)((longlong)this + 8);
    if ((*(int *)(lVar16 + 0x28) <= (int)local_178) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar20 = *(longlong *)((longlong)this + 8);
    plVar19 = (longlong *)(lVar20 + 0x68);
    uStack_16c = 1;
    iVar13 = *(int *)(lVar20 + 0x90);
    pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar20 + 0x78);
    local_98 = (longlong)(int)uVar17 * 0x70 + *(longlong *)(lVar16 + 0x20);
    local_170 = 0;
    iStack_15c = 0;
    iStack_158 = 0;
    if (iVar13 != 0) {
      pTVar21 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar20 + 0x88) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar20 + 0x88);
      }
      uVar17 = *(uint *)(pTVar21->AllocatorInstance).InlineData;
      iStack_158 = 0;
      local_170 = 0;
      while (uVar17 == 0) {
        iStack_158 = iStack_158 + 0x20;
        lVar16 = (longlong)local_170;
        local_170 = local_170 + 1;
        if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < local_170) goto LAB_145365121;
        uVar17 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uStack_16c = -uVar17 & uVar17;
      uVar3 = (ulonglong)uStack_16c * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_a8 = (int)lVar16;
      iStack_15c = local_a8 + -1 + iStack_158;
      if (iVar13 < iStack_15c) {
LAB_145365121:
        iStack_15c = iVar13;
      }
    }
    local_160 = 0xffffffff;
    uVar17 = *(uint *)(lVar20 + 0x90);
    local_b0 = *(int *)(lVar20 + 0x70) - *(int *)(lVar20 + 0x9c);
    local_d0._padding_ = CONCAT44(uStack_16c,local_170);
    local_d0.CurrentBitIndex = iStack_15c;
    local_d0.UnvisitedBitMask = 0xffffffff;
    local_d0._28_4_ = uStack_154;
    local_d0.BaseBitIndex = iStack_158;
    iVar18 = (int)uVar17 >> 5;
    uVar22 = uVar17 & 0xffffffe0;
    pTStack_168 = pTVar1;
    local_d8 = plVar19;
    local_d0.Array = pTVar1;
    local_a0 = plVar19;
    if ((((int)uVar17 < 0) || (iVar13 < (int)uVar17)) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    plVar9 = local_a0;
    uVar12 = *(uint *)(lVar20 + 0x90);
    if (uVar17 != uVar12) {
      pTVar21 = pTVar1;
      if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar20 + 0x88) !=
          (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
        pTVar21 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar20 + 0x88);
      }
      uVar17 = -1 << ((byte)uVar17 & 0x1f) &
               *(uint *)((pTVar21->AllocatorInstance).InlineData + (longlong)iVar18 * 4);
      while (uVar17 == 0) {
        lVar16 = (longlong)iVar18;
        uVar22 = uVar22 + 0x20;
        iVar18 = iVar18 + 1;
        uVar17 = uVar12;
        if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar18)
        goto LAB_145365220;
        uVar17 = *(uint *)((pTVar21->AllocatorInstance).InlineData + lVar16 * 4 + 4);
      }
      uVar3 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
      lVar16 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar16 == 0; lVar16 = lVar16 + -1) {
        }
      }
      local_a4 = (int)lVar16;
      uVar17 = local_a4 + -1 + uVar22;
      if ((int)uVar12 < (int)uVar17) {
        uVar17 = uVar12;
      }
    }
LAB_145365220:
    while( true ) {
      if ((int)plVar19[1] - *(int *)((longlong)plVar19 + 0x34) != local_b0) {
        local_res20[0] = 0;
        `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      lVar16 = local_98;
      if (((local_d0.CurrentBitIndex == uVar17) && (local_d0.Array == pTVar1)) &&
         (plVar19 == plVar9)) break;
      uVar22 = *(uint *)(*plVar19 + (longlong)local_d0.CurrentBitIndex * 8);
      uVar12 = 0;
      if ((int)uVar22 < *(int *)(local_98 + 0x60)) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_148.ResultBuffer = (FRHIBuffer *)0x0;
      lVar20 = (longlong)(int)uVar22 * 0x188;
      lVar16 = *(longlong *)(lVar16 + 0x58);
      local_148.ResultBufferOffset = 0;
      local_148.ScratchBuffer = (FRHIBuffer *)0x0;
      local_148.ScratchBufferOffset = 0;
      local_148.InstanceBuffer = (FRHIBuffer *)0x0;
      local_148.InstanceBufferOffset = 0;
      local_148.HitGroupContributionsBuffer = (FRHIBuffer *)0x0;
      local_148.HitGroupContributionsBufferOffset = 0;
      local_148.NumInstances = 0;
      local_148.ReferencedGeometries.DataPtr = (FRHIRayTracingGeometry **)0x0;
      local_148.ReferencedGeometries._8_8_ =
           local_148.ReferencedGeometries._8_8_ & 0xffffffff00000000;
      local_148.PerInstanceGeometries.DataPtr = (FRHIRayTracingGeometry **)0x0;
      local_148.PerInstanceGeometries.ArrayNum = 0;
      local_148.BuildMode = Build;
      local_148.Scene = *(FRHIRayTracingScene **)(lVar20 + 0x108 + lVar16);
      pFVar4 = *(FRDGResource **)(lVar20 + 0x120 + lVar16);
      FRDGResource::ValidateRHIAccess(pFVar4);
      local_148.ScratchBuffer = (FRHIBuffer *)pFVar4->ResourceRHI;
      local_148.ScratchBufferOffset = 0;
      pFVar4 = *(FRDGResource **)(lVar20 + 0x110 + lVar16);
      FRDGResource::ValidateRHIAccess(pFVar4);
      local_148.InstanceBuffer = (FRHIBuffer *)pFVar4->ResourceRHI;
      local_148.InstanceBufferOffset = 0;
      if (GRHIGlobals.RayTracing.RequiresSeparateHitGroupContributionsBuffer != false) {
        if ((*(longlong *)(lVar20 + 0x118 + lVar16) == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("LayerView.HitGroupContributionsBuffer",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                                ,0x212,L""), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar4 = *(FRDGResource **)(lVar20 + 0x118 + lVar16);
        FRDGResource::ValidateRHIAccess(pFVar4);
        local_148.HitGroupContributionsBuffer = (FRHIBuffer *)pFVar4->ResourceRHI;
        local_148.HitGroupContributionsBufferOffset = 0;
        local_148.NumInstances = 0;
      }
      local_148.NumInstances = *(uint *)(lVar20 + 0x184 + lVar16);
      local_88 = *(FRHIRayTracingGeometry ***)(lVar20 + 0xb0 + lVar16);
      iVar13 = *(int *)(lVar20 + 0xb8 + lVar16);
      if ((iVar13 < 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_148.ReferencedGeometries._8_8_ = CONCAT44(uStack_7c,iVar13);
      local_148.ReferencedGeometries.DataPtr = local_88;
      pFVar4 = *(FRDGResource **)(lVar20 + 0x148 + lVar16);
      iStack_80 = iVar13;
      FRDGResource::ValidateRHIAccess(pFVar4);
      pFVar5 = pFVar4->ResourceRHI;
      uVar6 = *(undefined8 *)(lVar20 + 0x108 + lVar16);
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar15 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar15;
        *(undefined8 **)&param_1->field_0x30 = puVar15 + 1;
        puVar15[1] = 0;
        *puVar15 = &___7FRHICommandBindAccelerationStructureMemory__6B_;
        *(undefined4 *)(puVar15 + 4) = 0;
        puVar15[2] = uVar6;
        puVar15[3] = pFVar5;
        FRHICommandListBase::RHIThreadFence((FRHICommandListBase *)param_1,SUB81(&local_90,0));
        if (local_90 != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_90 + 6);
          iVar13 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar13 == 1) && (local_90 != (undefined8 *)0x0)) {
            (**(code **)*local_90)(local_90,1);
          }
        }
      }
      else {
        pIVar14 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar14->_padding_ + 0x140))(pIVar14,uVar6,pFVar5,0);
      }
      if (bVar10 == false) {
        uStack_70 = 1;
        local_58._12_4_ = uStack_6c;
        local_58.ArrayNum = 1;
        local_78 = &local_148;
        local_58.DataPtr = &local_148;
        FRHIComputeCommandList::BuildAccelerationStructures
                  ((FRHIComputeCommandList *)param_1,&local_58);
      }
      else {
        if (((local_188.Data <= &local_148) &&
            (&local_148 <
             (FRayTracingSceneBuildParams *)(local_188.Data + (longlong)local_180._4_4_ * 0x70))) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar11)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = (int)local_180;
        if ((int)local_180 == local_180._4_4_) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x870,&local_188,(int *)((longlong)&local_180 + 4));
        }
        local_180 = CONCAT44(local_180._4_4_,iVar13 + 1);
        lVar16 = (longlong)iVar13 * 0x70;
        *(FRHIRayTracingScene **)&local_188.Data[lVar16].field_0x0 = local_148.Scene;
        *(FRHIBuffer **)(local_188.Data + lVar16 + 8) = local_148.ResultBuffer;
        *(ulonglong *)(local_188.Data + lVar16 + 0x10) =
             CONCAT44(local_148._20_4_,local_148.ResultBufferOffset);
        *(FRHIBuffer **)(local_188.Data + lVar16 + 0x10 + 8) = local_148.ScratchBuffer;
        *(ulonglong *)(local_188.Data + lVar16 + 0x20) =
             CONCAT44(local_148._36_4_,local_148.ScratchBufferOffset);
        *(FRHIBuffer **)(local_188.Data + lVar16 + 0x20 + 8) = local_148.InstanceBuffer;
        *(ulonglong *)(local_188.Data + lVar16 + 0x30) =
             CONCAT44(local_148._52_4_,local_148.InstanceBufferOffset);
        *(FRHIBuffer **)(local_188.Data + lVar16 + 0x30 + 8) = local_148.HitGroupContributionsBuffer
        ;
        *(undefined8 *)(local_188.Data + lVar16 + 0x40) = local_148._64_8_;
        *(FRHIRayTracingGeometry ***)(local_188.Data + lVar16 + 0x40 + 8) =
             local_148.ReferencedGeometries.DataPtr;
        *(undefined8 *)(local_188.Data + lVar16 + 0x50) = local_148.ReferencedGeometries._8_8_;
        *(FRHIRayTracingGeometry ***)(local_188.Data + lVar16 + 0x50 + 8) =
             local_148.PerInstanceGeometries.DataPtr;
        *(ulonglong *)(local_188.Data + lVar16 + 0x60) =
             CONCAT44(local_148.PerInstanceGeometries._12_4_,
                      local_148.PerInstanceGeometries.ArrayNum);
        *(ulonglong *)(local_188.Data + lVar16 + 0x60 + 8) =
             CONCAT44(local_148._108_4_,local_148.BuildMode);
      }
      local_d0.UnvisitedBitMask = local_d0.UnvisitedBitMask & ~local_d0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d0);
      plVar19 = local_d8;
    }
    local_178 = local_178 + 1;
    if (2 < local_178) {
      if (bVar10 != false) {
        iVar13 = (int)local_180;
        local_68 = (FRayTracingSceneBuildParams *)local_188.Data;
        if (((int)local_180 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iStack_60 = iVar13;
        local_48._12_4_ = uStack_5c;
        local_48.ArrayNum = iVar13;
        local_48.DataPtr = local_68;
        FRHIComputeCommandList::BuildAccelerationStructures
                  ((FRHIComputeCommandList *)param_1,&local_48);
      }
      if ((FRayTracingSceneBuildParams *)local_188.Data != (FRayTracingSceneBuildParams *)0x0) {
        FMemory::Free(local_188.Data);
      }
      return;
    }
  } while( true );
}

// operator() @ 145366ce0

void __thiscall
`FRayTracingScene::FinishStats'::__l31::<lambda_1>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  FRDGResource *this_00;
  FRHIGPUBufferReadback *this_01;
  
  this_00 = *(FRDGResource **)((longlong)this + 8);
  this_01 = (FRHIGPUBufferReadback *)**(undefined8 **)this;
  FRDGResource::ValidateRHIAccess(this_00);
  FRHIGPUBufferReadback::EnqueueCopy(this_01,param_2,(FRHIBuffer *)this_00->ResourceRHI,0);
  return;
}

// operator() @ 145367c70

void __thiscall
`FRayTracingScene::Build'::__l20::<lambda_2>::operator()
          (void *this,FRHICommandListImmediate *param_1)

{
  FDateTime this_00;
  FString *pFVar1;
  ForAnyElementType FVar2;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  this_00 = FDateTime::Now();
  FDateTime::ToString((FDateTime *)this_00.Ticks,&local_28,L"%Y%m%d_%H%M%S");
  ::FName::ToString((FName *)(*(longlong *)((longlong)this + 8) + 0x68),&local_58);
  ::FString::PrintfImpl(&local_38,L"%s_%d_(%s)");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pFVar1 = FPaths::ScreenShotDir(&local_28);
  ::FString::ConcatFC(&local_48,pFVar1,L"BVH/");
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ::FString::ConcatFF(&local_58,&local_48,&local_38);
  ::FString::ConcatFC(&local_68,&local_58,L".bvh");
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  FVar2.Data = (FScriptContainerElement *)L"";
  if (local_68.Data.ArrayNum != 0) {
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
  }
  (**(code **)(GDynamicRHI->_padding_ + 0x4b8))
            (GDynamicRHI,param_1,*(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x108),
             FVar2.Data);
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 145368270

void __thiscall
`FRayTracingScene::FinishTracingFeedback'::__l40::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  longlong *plVar1;
  FRHIGPUBufferReadback *pFVar2;
  FRDGResource *pFVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  
  plVar1 = *(longlong **)((longlong)this + 0x10);
  pFVar2 = *(FRHIGPUBufferReadback **)this;
  if (*plVar1 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x183,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = (FRDGResource *)*plVar1;
  FRDGResource::ValidateRHIAccess(pFVar3);
  FRHIGPUBufferReadback::EnqueueCopy(pFVar2,param_2,(FRHIBuffer *)pFVar3->ResourceRHI,0);
  lVar4 = *(longlong *)((longlong)this + 0x10);
  pFVar2 = *(FRHIGPUBufferReadback **)((longlong)this + 8);
  if (*(longlong *)(lVar4 + 0x10) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Buffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                       ,0x183,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar3 = *(FRDGResource **)(lVar4 + 0x10);
  FRDGResource::ValidateRHIAccess(pFVar3);
  FRHIGPUBufferReadback::EnqueueCopy(pFVar2,param_2,(FRHIBuffer *)pFVar3->ResourceRHI,0);
  return;
}

// operator() @ 145368b10

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
`FRayTracingScene::Update'::__l45::<lambda_3>::operator()(void *this,FRHICommandList *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  FRDGResource *pFVar5;
  FRayTracingInstanceBufferBuilder *this_00;
  FRHIUnorderedAccessView *pFVar6;
  FRHIUnorderedAccessView *pFVar7;
  FRHIUnorderedAccessView *pFVar8;
  FGPUSceneResourceParametersRHI local_88;
  
  lVar4 = *(longlong *)this;
  local_88.CommonParameters._0_8_ = *(undefined8 *)(lVar4 + 0x30);
  local_88.CommonParameters._8_8_ = *(undefined8 *)(lVar4 + 0x38);
  local_88.CommonParameters._16_8_ = *(undefined8 *)(lVar4 + 0x40);
  local_88.CommonParameters._24_8_ = *(undefined8 *)(lVar4 + 0x48);
  pFVar5 = *(FRDGResource **)(lVar4 + 0x50);
  FRDGResource::ValidateRHIAccess(pFVar5);
  local_88.GPUSceneInstanceSceneData = (FRHIShaderResourceView *)pFVar5->ResourceRHI;
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x58);
  FRDGResource::ValidateRHIAccess(pFVar5);
  local_88.GPUSceneInstancePayloadData = (FRHIShaderResourceView *)pFVar5->ResourceRHI;
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x60);
  FRDGResource::ValidateRHIAccess(pFVar5);
  local_88.GPUScenePrimitiveSceneData = (FRHIShaderResourceView *)pFVar5->ResourceRHI;
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x68);
  FRDGResource::ValidateRHIAccess(pFVar5);
  local_88.GPUSceneLightmapData = (FRHIShaderResourceView *)pFVar5->ResourceRHI;
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x70);
  FRDGResource::ValidateRHIAccess(pFVar5);
  local_88.GPUSceneLightData = (FRHIShaderResourceView *)pFVar5->ResourceRHI;
  pFVar7 = (FRHIUnorderedAccessView *)0x0;
  this_00 = *(FRayTracingInstanceBufferBuilder **)((longlong)this + 8);
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x18);
  pFVar6 = pFVar7;
  if (pFVar5 != (FRDGResource *)0x0) {
    FRDGResource::ValidateRHIAccess(pFVar5);
    pFVar6 = (FRHIUnorderedAccessView *)pFVar5->ResourceRHI;
  }
  uVar2 = *(uint *)((longlong)this + 0x10);
  pFVar5 = *(FRDGResource **)(*(longlong *)this + 0x10);
  pFVar8 = pFVar7;
  if (pFVar5 != (FRDGResource *)0x0) {
    FRDGResource::ValidateRHIAccess(pFVar5);
    pFVar8 = (FRHIUnorderedAccessView *)pFVar5->ResourceRHI;
  }
  bVar1 = *(bool *)((longlong)this + 0x2c);
  uVar3 = *(uint *)((longlong)this + 0x28);
  if (GRHIGlobals.RayTracing.RequiresSeparateHitGroupContributionsBuffer != false) {
    pFVar5 = *(FRDGResource **)(*(longlong *)this + 8);
    FRDGResource::ValidateRHIAccess(pFVar5);
    pFVar7 = (FRHIUnorderedAccessView *)pFVar5->ResourceRHI;
  }
  pFVar5 = (FRDGResource *)**(undefined8 **)this;
  FRDGResource::ValidateRHIAccess(pFVar5);
  FRayTracingInstanceBufferBuilder::BuildRayTracingInstanceBuffer
            (this_00,param_1,*(FGPUScene **)((longlong)this + 0x18),&local_88,
             *(FRayTracingCullingParameters **)((longlong)this + 0x20),
             (FRHIUnorderedAccessView *)pFVar5->ResourceRHI,pFVar7,uVar3,bVar1,pFVar8,uVar2,pFVar6);
  return;
}

// AddCachedInstance @ 14536a920

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstanceHandle __thiscall
FRayTracingScene::AddCachedInstance
          (FRayTracingScene *this,FRayTracingGeometryInstance *param_1,ERayTracingSceneLayer param_2
          ,FPrimitiveSceneProxy *param_3,bool param_4,int param_5)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  FInstanceHandle FVar26;
  longlong lVar27;
  uint *puVar28;
  undefined7 in_register_00000081;
  undefined8 *puVar29;
  ulonglong uVar30;
  undefined7 in_stack_00000029;
  undefined4 in_stack_00000038;
  
  puVar29 = (undefined8 *)CONCAT71(in_register_00000081,param_2);
  uVar30 = (ulonglong)param_3 & 0xff;
  if ((this->bCachedInstancesLocked != false) &&
     (bVar20 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5453896197133565010>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                          ,0x3ae,"!bCachedInstancesLocked"), bVar20)) {
    pcVar7 = (code *)swi(3);
    FVar26 = (FInstanceHandle)(*pcVar7)();
    return FVar26;
  }
  if (((this->Layers).ArrayNum <= (int)uVar30) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar20)) {
    pcVar7 = (code *)swi(3);
    FVar26 = (FInstanceHandle)(*pcVar7)();
    return FVar26;
  }
  uVar4 = *puVar29;
  pFVar5 = (this->Layers).AllocatorInstance.Data;
  uVar25 = 0;
  if (*(int *)(pFVar5 + uVar30 * 0x70 + 0x48) == 0) {
    if (((*(undefined8 **)(pFVar5 + uVar30 * 0x70 + 0x20) <= puVar29) &&
        (puVar29 < *(undefined8 **)(pFVar5 + uVar30 * 0x70 + 0x20) +
                   (longlong)*(int *)(pFVar5 + uVar30 * 0x70 + 0x2c) * 0xb)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar20)) {
      pcVar7 = (code *)swi(3);
      FVar26 = (FInstanceHandle)(*pcVar7)();
      return FVar26;
    }
    uVar21 = *(uint *)(pFVar5 + uVar30 * 0x70 + 0x28);
    if (uVar21 == *(uint *)(pFVar5 + uVar30 * 0x70 + 0x2c)) {
      uVar21 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x858,(ForAnyElementType *)(pFVar5 + uVar30 * 0x70 + 0x20),
                          (int *)(pFVar5 + uVar30 * 0x70 + 0x2c));
    }
    *(uint *)(pFVar5 + uVar30 * 0x70 + 0x28) = uVar21 + 1;
    uVar12 = puVar29[1];
    lVar27 = (longlong)(int)uVar21 * 0x58;
    lVar6 = *(longlong *)(pFVar5 + uVar30 * 0x70 + 0x20);
    *(undefined8 *)(lVar27 + lVar6) = *puVar29;
    ((undefined8 *)(lVar27 + lVar6))[1] = uVar12;
    uVar12 = puVar29[3];
    puVar2 = (undefined8 *)(lVar27 + 0x10 + lVar6);
    *puVar2 = puVar29[2];
    puVar2[1] = uVar12;
    uVar12 = puVar29[5];
    puVar2 = (undefined8 *)(lVar27 + 0x20 + lVar6);
    *puVar2 = puVar29[4];
    puVar2[1] = uVar12;
    uVar12 = puVar29[7];
    puVar2 = (undefined8 *)(lVar27 + 0x30 + lVar6);
    *puVar2 = puVar29[6];
    puVar2[1] = uVar12;
    uVar12 = puVar29[9];
    puVar2 = (undefined8 *)(lVar27 + 0x40 + lVar6);
    *puVar2 = puVar29[8];
    puVar2[1] = uVar12;
    *(undefined8 *)(lVar27 + 0x50 + lVar6) = puVar29[10];
  }
  else {
    if ((*(int *)(pFVar5 + uVar30 * 0x70 + 0x48) < 1) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      FVar26 = (FInstanceHandle)(*pcVar7)();
      return FVar26;
    }
    uVar21 = *(uint *)(*(longlong *)(pFVar5 + uVar30 * 0x70 + 0x40) + -4 +
                      (longlong)*(int *)(pFVar5 + uVar30 * 0x70 + 0x48) * 4);
    *(int *)(pFVar5 + uVar30 * 0x70 + 0x48) = *(int *)(pFVar5 + uVar30 * 0x70 + 0x48) + -1;
    uVar12 = puVar29[2];
    uVar13 = puVar29[3];
    uVar14 = puVar29[4];
    uVar15 = puVar29[5];
    uVar8 = *(undefined4 *)puVar29;
    uVar9 = *(undefined4 *)((longlong)puVar29 + 4);
    uVar10 = *(undefined4 *)(puVar29 + 1);
    uVar11 = *(undefined4 *)((longlong)puVar29 + 0xc);
    uVar23 = uVar25;
    if ((int)uVar21 < *(int *)(pFVar5 + uVar30 * 0x70 + 0x28)) {
      uVar23 = ~uVar21 >> 0x1f;
    }
    uVar16 = puVar29[6];
    uVar17 = puVar29[7];
    uVar18 = puVar29[8];
    uVar19 = puVar29[9];
    uVar3 = puVar29[10];
    if ((uVar23 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar7 = (code *)swi(3);
      FVar26 = (FInstanceHandle)(*pcVar7)();
      return FVar26;
    }
    lVar6 = *(longlong *)(pFVar5 + uVar30 * 0x70 + 0x20);
    lVar27 = (longlong)(int)uVar21 * 0x58;
    puVar1 = (undefined4 *)(lVar27 + lVar6);
    *puVar1 = uVar8;
    puVar1[1] = uVar9;
    puVar1[2] = uVar10;
    puVar1[3] = uVar11;
    puVar29 = (undefined8 *)(lVar27 + 0x10 + lVar6);
    *puVar29 = uVar12;
    puVar29[1] = uVar13;
    puVar29 = (undefined8 *)(lVar27 + 0x20 + lVar6);
    *puVar29 = uVar14;
    puVar29[1] = uVar15;
    puVar29 = (undefined8 *)(lVar27 + 0x30 + lVar6);
    *puVar29 = uVar16;
    puVar29[1] = uVar17;
    puVar29 = (undefined8 *)(lVar27 + 0x40 + lVar6);
    *puVar29 = uVar18;
    puVar29[1] = uVar19;
    *(undefined8 *)(lVar27 + 0x50 + lVar6) = uVar3;
  }
  *(int *)(pFVar5 + uVar30 * 0x70 + 0x50) = *(int *)(pFVar5 + uVar30 * 0x70 + 0x50) + 1;
  if (this->bTracingFeedbackEnabled != false) {
    if (((int)uVar21 < 0) || (*(int *)(pFVar5 + uVar30 * 0x70 + 0x10) <= (int)uVar21)) {
      uVar23 = *(uint *)(pFVar5 + uVar30 * 0x70 + 0x10);
      if (uVar23 == *(uint *)(pFVar5 + uVar30 * 0x70 + 0x14)) {
        uVar23 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)(pFVar5 + uVar30 * 0x70 + 8),
                            (int *)(pFVar5 + uVar30 * 0x70 + 0x14));
        *(uint *)(pFVar5 + uVar30 * 0x70 + 0x10) = uVar23;
      }
      *(uint *)(pFVar5 + uVar30 * 0x70 + 0x10) = uVar23 + 1;
    }
    else {
      uVar22 = uVar25;
      if ((int)uVar21 < *(int *)(pFVar5 + uVar30 * 0x70 + 0x10)) {
        uVar22 = ~uVar21 >> 0x1f;
      }
      uVar23 = uVar21;
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        FVar26 = (FInstanceHandle)(*pcVar7)();
        return FVar26;
      }
    }
    *(undefined4 *)(*(longlong *)(pFVar5 + uVar30 * 0x70 + 8) + (longlong)(int)uVar23 * 4) =
         in_stack_00000038;
    if ((*(int *)(pFVar5 + uVar30 * 0x70 + 0x28) != *(int *)(pFVar5 + uVar30 * 0x70 + 0x10)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Layer.Instances.Num() == Layer.GeometryHandles.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                            ,0x3c6,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      FVar26 = (FInstanceHandle)(*pcVar7)();
      return FVar26;
    }
  }
  if (this->bInstanceDebugDataEnabled != false) {
    if (((int)uVar21 < 0) || (*(int *)(pFVar5 + uVar30 * 0x70 + 0x38) <= (int)uVar21)) {
      iVar24 = *(int *)(pFVar5 + uVar30 * 0x70 + 0x38);
      if (iVar24 == *(int *)(pFVar5 + uVar30 * 0x70 + 0x3c)) {
        iVar24 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,(ForAnyElementType *)(pFVar5 + uVar30 * 0x70 + 0x30),
                            (int *)(pFVar5 + uVar30 * 0x70 + 0x3c));
        *(int *)(pFVar5 + uVar30 * 0x70 + 0x38) = iVar24;
      }
      *(int *)(pFVar5 + uVar30 * 0x70 + 0x38) = iVar24 + 1;
      puVar28 = (uint *)(*(longlong *)(pFVar5 + uVar30 * 0x70 + 0x30) + (longlong)iVar24 * 0x10);
      DefaultConstructItems<FRayTracingInstanceDebugData,int>(puVar28,1);
    }
    else {
      uVar23 = 0;
      if ((int)uVar21 < *(int *)(pFVar5 + uVar30 * 0x70 + 0x38)) {
        uVar23 = ~uVar21 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar7 = (code *)swi(3);
        FVar26 = (FInstanceHandle)(*pcVar7)();
        return FVar26;
      }
      puVar28 = (uint *)((longlong)(int)uVar21 * 0x10 + *(longlong *)(pFVar5 + uVar30 * 0x70 + 0x30)
                        );
    }
    *puVar28 = param_5 & 0xff;
    *(undefined8 *)(puVar28 + 2) = uVar4;
    if ((longlong *)CONCAT71(in_stack_00000029,param_4) != (longlong *)0x0) {
      uVar25 = (**(code **)(*(longlong *)CONCAT71(in_stack_00000029,param_4) + 8))();
    }
    puVar28[1] = uVar25;
    if ((*(int *)(pFVar5 + uVar30 * 0x70 + 0x28) != *(int *)(pFVar5 + uVar30 * 0x70 + 0x38)) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("Layer.Instances.Num() == Layer.InstancesDebugData.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                            ,0x3d0,L""), bVar20)) {
      pcVar7 = (code *)swi(3);
      FVar26 = (FInstanceHandle)(*pcVar7)();
      return FVar26;
    }
  }
  *(char *)&param_1->GeometryRHI = (char)param_3;
  *(uint *)((longlong)&param_1->GeometryRHI + 4) = uVar21;
  return (FInstanceHandle)param_1;
}

// AddTransientInstance @ 14536d250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FInstanceHandle __thiscall
FRayTracingScene::AddTransientInstance
          (FRayTracingScene *this,FRayTracingGeometryInstance *param_1,ERayTracingSceneLayer param_2
          ,FViewHandle param_3,FPrimitiveSceneProxy *param_4,bool param_5,int param_6)

{
  int iVar1;
  uchar *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  FInstanceHandle FVar12;
  longlong lVar13;
  uint *puVar14;
  longlong lVar15;
  undefined7 in_register_00000081;
  undefined8 *puVar16;
  TBitArray<FDefaultBitArrayAllocator> *pTVar17;
  byte bVar18;
  undefined7 in_stack_00000031;
  undefined4 in_stack_00000040;
  
  puVar16 = (undefined8 *)CONCAT71(in_register_00000081,param_2);
  bVar18 = (byte)param_3.Index;
  if (this->bCachedInstancesLocked == false) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5453896197133564913>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x40f,"bCachedInstancesLocked");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar12 = (FInstanceHandle)(*pcVar6)();
      return FVar12;
    }
  }
  if ((this->Layers).ArrayNum <= (int)(param_3.Index & 0xff)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar12 = (FInstanceHandle)(*pcVar6)();
      return FVar12;
    }
  }
  uVar4 = *puVar16;
  pFVar5 = (this->Layers).AllocatorInstance.Data;
  if ((*(undefined8 **)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x20) <= puVar16) &&
     (puVar16 < *(undefined8 **)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x20) +
                (longlong)*(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x2c) * 0xb)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar12 = (FInstanceHandle)(*pcVar6)();
      return FVar12;
    }
  }
  iVar9 = *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x28);
  if (iVar9 == *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x2c)) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x858,(ForAnyElementType *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x20),
                       (int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x2c));
  }
  iVar1 = iVar9 + 1;
  *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x28) = iVar1;
  uVar7 = puVar16[1];
  lVar13 = (longlong)iVar9 * 0x58;
  lVar15 = *(longlong *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x20);
  *(undefined8 *)(lVar13 + lVar15) = *puVar16;
  ((undefined8 *)(lVar13 + lVar15))[1] = uVar7;
  uVar7 = puVar16[3];
  puVar3 = (undefined8 *)(lVar13 + 0x10 + lVar15);
  *puVar3 = puVar16[2];
  puVar3[1] = uVar7;
  uVar7 = puVar16[5];
  puVar3 = (undefined8 *)(lVar13 + 0x20 + lVar15);
  *puVar3 = puVar16[4];
  puVar3[1] = uVar7;
  uVar7 = puVar16[7];
  puVar3 = (undefined8 *)(lVar13 + 0x30 + lVar15);
  *puVar3 = puVar16[6];
  puVar3[1] = uVar7;
  uVar7 = puVar16[9];
  puVar3 = (undefined8 *)(lVar13 + 0x40 + lVar15);
  *puVar3 = puVar16[8];
  puVar3[1] = uVar7;
  *(undefined8 *)(lVar13 + 0x50 + lVar15) = puVar16[10];
  if (this->bTracingFeedbackEnabled != false) {
    if ((*(undefined4 **)(pFVar5 + (ulonglong)bVar18 * 0x70 + 8) <= &stack0x00000040) &&
       (&stack0x00000040 <
        *(undefined4 **)(pFVar5 + (ulonglong)bVar18 * 0x70 + 8) +
        *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x14))) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        FVar12 = (FInstanceHandle)(*pcVar6)();
        return FVar12;
      }
    }
    iVar10 = *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x10);
    if (iVar10 == *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x14)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x404,(ForAnyElementType *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 8),
                          (int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x14));
    }
    *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x10) = iVar10 + 1;
    *(undefined4 *)(*(longlong *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 8) + (longlong)iVar10 * 4) =
         in_stack_00000040;
    if (*(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x28) !=
        *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x10)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Layer.Instances.Num() == Layer.GeometryHandles.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                         ,0x41a,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        FVar12 = (FInstanceHandle)(*pcVar6)();
        return FVar12;
      }
    }
  }
  if (this->bInstanceDebugDataEnabled != false) {
    iVar10 = *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x38);
    if (iVar10 == *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x3c)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x30),
                          (int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x3c));
    }
    lVar15 = *(longlong *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x30);
    *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x38) = iVar10 + 1;
    puVar14 = (uint *)(lVar15 + (longlong)iVar10 * 0x10);
    DefaultConstructItems<FRayTracingInstanceDebugData,int>(puVar14,1);
    *puVar14 = param_6 & 0xff;
    *(undefined8 *)(puVar14 + 2) = uVar4;
    if ((longlong *)CONCAT71(in_stack_00000031,param_5) == (longlong *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (**(code **)(*(longlong *)CONCAT71(in_stack_00000031,param_5) + 8))();
    }
    puVar14[1] = uVar11;
    if (*(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x28) !=
        *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x38)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Layer.Instances.Num() == Layer.InstancesDebugData.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                         ,0x424,L"");
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        FVar12 = (FInstanceHandle)(*pcVar6)();
        return FVar12;
      }
    }
  }
  uVar11 = 0;
  if ((int)(uint)param_4 < *(int *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x60)) {
    uVar11 = ~(uint)param_4 >> 0x1f;
  }
  if (uVar11 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar12 = (FInstanceHandle)(*pcVar6)();
      return FVar12;
    }
  }
  lVar15 = (longlong)(int)(uint)param_4 * 0x188 +
           *(longlong *)(pFVar5 + (ulonglong)bVar18 * 0x70 + 0x58);
  if (*(int *)(lVar15 + 0x178) < iVar1) {
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x160),iVar1,false);
  }
  if ((iVar9 < 0) || (*(int *)(lVar15 + 0x178) <= iVar9)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      FVar12 = (FInstanceHandle)(*pcVar6)();
      return FVar12;
    }
  }
  pTVar17 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x170);
  if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar15 + 0x170) ==
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pTVar17 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar15 + 0x160);
  }
  puVar2 = (pTVar17->AllocatorInstance).InlineData +
           (longlong)((int)(iVar9 + (iVar9 >> 0x1f & 0x1fU)) >> 5) * 4;
  *(uint *)puVar2 = *(uint *)puVar2 | 1 << ((byte)iVar9 & 0x1f);
  *(byte *)&param_1->GeometryRHI = bVar18;
  *(int *)((longlong)&param_1->GeometryRHI + 4) = iVar9;
  return (FInstanceHandle)param_1;
}

// AddView @ 14536d650

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FViewHandle __thiscall FRayTracingScene::AddView(FRayTracingScene *this,uint param_1)

{
  int *piVar1;
  TMap<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
  *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint *puVar8;
  undefined4 in_register_00000014;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  uint in_R8D;
  TSparseArray<int,FDefaultSparseArrayAllocator> *this_01;
  uint local_res18 [2];
  uint local_58 [2];
  FSparseArrayAllocationInfo local_50;
  uint *local_40;
  uint *local_38;
  
  this_00 = &this->ViewIndexMap;
  if (*(int *)&(this->ViewIndexMap).field_0x8 != *(int *)&(this->ViewIndexMap).field_0x34) {
    puVar9 = *(undefined1 **)&(this->ViewIndexMap).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->ViewIndexMap).field_0x38;
    }
    iVar7 = *(int *)(puVar9 + (ulonglong)(*(int *)&(this->ViewIndexMap).field_0x48 - 1U & in_R8D) *
                              4);
    if (iVar7 != -1) {
      do {
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar7 * 0x10) == in_R8D) {
          if (iVar7 != -1) {
            puVar8 = (uint *)TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                             ::FindChecked((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                                            *)this_00,in_R8D);
            uVar11 = *puVar8;
            if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)&(this->ActiveViews).field_0x28)) {
              puVar9 = *(undefined1 **)&(this->ActiveViews).field_0x20;
              if (puVar9 == (undefined1 *)0x0) {
                puVar9 = &(this->ActiveViews).field_0x10;
              }
              if (((*(uint *)(puVar9 + (longlong)
                                       ((int)(uVar11 + ((int)uVar11 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                    (uVar11 & 0x1f) & 1) != 0) &&
                 (*(uint *)(*(longlong *)&this->ActiveViews + (longlong)(int)uVar11 * 8) == uVar11))
              goto LAB_14536d78a;
            }
            bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ActiveViews.IsValidIndex(ViewIndex) && ActiveViews[ViewIndex] == ViewIndex"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                               ,0x94,L"");
            if (bVar6) {
              pcVar5 = (code *)swi(3);
              uVar11 = (*pcVar5)();
              return (FViewHandle)uVar11;
            }
LAB_14536d78a:
            *(uint *)CONCAT44(in_register_00000014,param_1) = uVar11;
            return (FViewHandle)param_1;
          }
          break;
        }
        iVar7 = *(int *)(*(longlong *)&this_00->field_0x0 + 8 + (longlong)iVar7 * 0x10);
      } while (iVar7 != -1);
    }
  }
  this_01 = &this->ActiveViews;
  iVar7 = *(int *)&(this->ActiveViews).field_0x34;
  local_res18[0] = in_R8D;
  if (iVar7 == 0) {
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,4,1,(ForAnyElementType *)this_01,(int *)&(this->ActiveViews).field_0x8,
                        (int *)&(this->ActiveViews).field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->ActiveViews).field_0x10,false);
  }
  else {
    iVar10 = *(int *)&(this->ActiveViews).field_0x30;
    iVar7 = iVar7 + -1;
    iVar3 = *(int *)(*(longlong *)&this_01->field_0x0 + 4 + (longlong)iVar10 * 8);
    *(int *)&(this->ActiveViews).field_0x30 = iVar3;
    *(int *)&(this->ActiveViews).field_0x34 = iVar7;
    if (iVar7 != 0) {
      *(undefined4 *)(*(longlong *)&this_01->field_0x0 + (longlong)iVar3 * 8) = 0xffffffff;
    }
  }
  TSparseArrayBase<4,4,FDefaultSparseArrayAllocator>::AllocateIndex
            ((TSparseArrayBase<4,4,FDefaultSparseArrayAllocator> *)this_01,&local_50,iVar10);
  uVar11 = 0;
  if (local_50.Pointer != (undefined4 *)0x0) {
    *(undefined4 *)local_50.Pointer = 0;
  }
  local_58[0] = local_50.Index;
  *(int *)(*(longlong *)&this_01->field_0x0 + (longlong)local_50.Index * 8) = local_50.Index;
  if (local_res18[0] == 0) {
    pTVar2 = &this->TransientViewIndices;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)local_58) &&
        ((FScriptContainerElement *)local_58 <
         pFVar4 + (longlong)(this->TransientViewIndices).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (FViewHandle)uVar11;
    }
    iVar7 = (this->TransientViewIndices).ArrayNum;
    piVar1 = &(this->TransientViewIndices).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->TransientViewIndices).ArrayNum = iVar7 + 1;
    *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 4) = local_58[0];
  }
  else {
    local_40 = local_res18;
    local_38 = local_58;
    TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<unsigned_int_const_&,int_const_&>_>
              ((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                *)this_00,(TPairInitializer<unsigned_int_const_&,int_const_&> *)&stack0x00000008,
               (bool *)&local_40);
  }
  piVar1 = &(this->ViewParameters).ArrayNum;
  iVar7 = *piVar1;
  if (iVar7 < (int)(local_58[0] + 1)) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,(local_58[0] + 1) - iVar7,&(this->ViewParameters).AllocatorInstance,piVar1,
               &(this->ViewParameters).ArrayMax);
  }
  do {
    if (((this->Layers).ArrayNum <= (int)uVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      uVar11 = (*pcVar5)();
      return (FViewHandle)uVar11;
    }
    pFVar4 = (this->Layers).AllocatorInstance.Data;
    if (*(int *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x60) < (int)(local_58[0] + 1)) {
      iVar10 = (local_58[0] + 1) - *(int *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x60);
      iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x188,8,iVar10,
                         (ForAnyElementType *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x58),
                         (int *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x60),
                         (int *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 100));
      DefaultConstructItems<FRayTracingScene::FLayerView,int>
                ((void *)((longlong)iVar7 * 0x188 +
                         *(longlong *)(pFVar4 + (longlong)(int)uVar11 * 0x70 + 0x58)),iVar10);
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 3);
  *(uint *)CONCAT44(in_register_00000014,param_1) = local_58[0];
  return (FViewHandle)param_1;
}

// Build @ 14536fe70

/* WARNING: Removing unreachable block (ram,0x000145370804) */
/* WARNING: Removing unreachable block (ram,0x000145370814) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRayTracingScene::Build
          (FRayTracingScene *this,FRDGBuilder *param_1,ERDGPassFlags param_2,FRDGBuffer *param_3)

{
  int *piVar1;
  FRayTracingSceneSerializePassParams *pFVar2;
  ulonglong uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  FRDGEventName *pFVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FRayTracingSceneBuildPassParams *pFVar12;
  TSparseArray<int,FDefaultSparseArrayAllocator> *pTVar13;
  uint uVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  ForElementType<unsigned_int> FVar17;
  ForElementType<unsigned_int> FVar18;
  FLayer *pFVar19;
  int iVar20;
  FLayerView *pFVar21;
  uint uVar22;
  uint local_res20 [2];
  undefined1 local_198 [4];
  uint local_194;
  ForElementType<unsigned_int> local_190;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined8 *local_180;
  undefined8 *local_178;
  int local_170;
  uint uStack_16c;
  ForElementType<unsigned_int> FStack_168;
  undefined4 local_160;
  uint uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  int local_150;
  uint uStack_14c;
  ForElementType<unsigned_int> FStack_148;
  undefined4 local_140;
  uint uStack_13c;
  int iStack_138;
  undefined4 uStack_134;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_130;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_128;
  int local_108;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_f8;
  int local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  FMemStackBase *local_c0;
  <lambda_1> local_b8;
  FRDGBuffer *local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  <lambda_2> local_98;
  FRDGEventName local_78;
  FRDGEventName local_60;
  
  local_c0 = (FMemStackBase *)&param_1->_padding_;
  puVar11 = (undefined8 *)0x0;
  local_res20[0] = 0;
  puVar8 = FMemStackBase::Alloc(local_c0,0x30,0x10);
  if (puVar8 == (undefined8 *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                       ,0x61,L"");
    puVar8 = puVar11;
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar8[2] = 0;
    *puVar8 = &___7__TObject_VFRayTracingSceneBuildPassParams___FRDGAllocator__6B_;
    puVar8[3] = 0;
    puVar8[4] = 0;
    *(undefined4 *)(puVar8 + 5) = 0x400;
  }
  local_180 = puVar8;
  if ((((undefined8 **)param_1->_padding_ <= &local_180) &&
      (&local_180 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar7 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  *(int *)&param_1->_padding_ = iVar7 + 1;
  FVar16 = (ForElementType<unsigned_int>)&(this->ActiveViews).field_0x10;
  pFVar12 = (FRayTracingSceneBuildPassParams *)(puVar8 + 2);
  uStack_188 = 0x400;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_180;
  local_194 = 0;
  puVar8[4] = param_3;
  puVar8[5] = CONCAT44(uStack_184,0x400);
  local_190 = FVar16;
  do {
    pTVar13 = &this->ActiveViews;
    iVar7 = (int)puVar11;
    if (((this->Layers).ArrayNum <= iVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       FVar16 = local_190, bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = *(int *)((longlong)FVar16 + 0x18);
    local_170 = 0;
    pFVar4 = (this->Layers).AllocatorInstance.Data;
    uStack_16c = 1;
    uStack_15c = 0;
    iStack_158 = 0;
    FVar18 = FVar16;
    if (uVar15 != 0) {
      FVar17 = FVar16;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
      }
      uVar14 = *(uint *)FVar17;
      iStack_158 = 0;
      local_170 = 0;
      while (FVar18 = local_190, uVar14 == 0) {
        iStack_158 = iStack_158 + 0x20;
        lVar10 = (longlong)local_170;
        local_170 = local_170 + 1;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < local_170)
        goto LAB_1453700ce;
        uVar14 = ((uint *)((longlong)FVar17 + 4))[lVar10];
      }
      uStack_16c = -uVar14 & uVar14;
      uVar3 = (ulonglong)uStack_16c * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_d0 = (int)lVar10;
      uStack_15c = iStack_158 + -1 + local_d0;
      if ((int)uVar15 < (int)uStack_15c) {
LAB_1453700ce:
        uStack_15c = uVar15;
      }
    }
    local_160 = 0xffffffff;
    uVar14 = *(uint *)&(this->ActiveViews).field_0x28;
    local_108 = *(int *)&(this->ActiveViews).field_0x8 - *(int *)&(this->ActiveViews).field_0x34;
    local_128._padding_ = CONCAT44(uStack_16c,local_170);
    local_128.CurrentBitIndex = uStack_15c;
    local_128.UnvisitedBitMask = 0xffffffff;
    local_128._28_4_ = uStack_154;
    local_128.BaseBitIndex = iStack_158;
    iVar20 = (int)uVar14 >> 5;
    uVar22 = uVar14 & 0xffffffe0;
    FStack_168 = FVar16;
    local_130 = pTVar13;
    local_128.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar16;
    if ((((int)uVar14 < 0) || ((int)uVar15 < (int)uVar14)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("StartIndex >= 0 && StartIndex <= Array.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                           ,0x7af,L""), FVar18 = local_190, bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar15 = *(int *)((longlong)FVar18 + 0x18);
    if (uVar14 != uVar15) {
      FVar16 = FVar18;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar20 * 4);
      while (uVar14 == 0) {
        lVar10 = (longlong)iVar20;
        uVar22 = uVar22 + 0x20;
        iVar20 = iVar20 + 1;
        uVar14 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
        goto LAB_1453701c1;
        uVar14 = ((uint *)((longlong)FVar16 + 4))[lVar10];
      }
      uVar3 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar10 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      local_cc = (int)lVar10;
      uVar14 = (uVar22 - 1) + local_cc;
      if ((int)uVar15 < (int)uVar14) {
        uVar14 = uVar15;
      }
    }
LAB_1453701c1:
    while( true ) {
      FVar16 = FVar18;
      if (*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34 != local_108) {
        local_res20[0] = local_res20[0] & 0xffffff00;
        `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
        FVar16 = local_190;
      }
      if (((local_128.CurrentBitIndex == uVar14) &&
          ((ForElementType<unsigned_int>)local_128.Array == FVar16)) &&
         (pTVar13 == &this->ActiveViews)) break;
      uVar15 = *(uint *)(*(longlong *)pTVar13 + (longlong)local_128.CurrentBitIndex * 8);
      uVar22 = 0;
      if ((int)uVar15 < *(int *)(pFVar4 + (longlong)iVar7 * 0x70 + 0x60)) {
        uVar22 = ~uVar15 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar20 = *(int *)(puVar8 + 3);
      lVar10 = (longlong)(int)uVar15 * 0x188 + *(longlong *)(pFVar4 + (longlong)iVar7 * 0x70 + 0x58)
      ;
      if (iVar20 == *(int *)((longlong)puVar8 + 0x1c)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                           (0x810,(ForElementType<FRDGBufferAccess> *)pFVar12,
                            (int *)((longlong)puVar8 + 0x1c));
      }
      *(int *)(puVar8 + 3) = iVar20 + 1;
      puVar11 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)&pFVar12->TLASBuildBuffers);
      *puVar11 = *(undefined8 *)(lVar10 + 0x120);
      *(undefined4 *)(puVar11 + 1) = 0x400;
      iVar20 = *(int *)(puVar8 + 3);
      if (iVar20 == *(int *)((longlong)puVar8 + 0x1c)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                           (0x810,(ForElementType<FRDGBufferAccess> *)pFVar12,
                            (int *)((longlong)puVar8 + 0x1c));
      }
      *(int *)(puVar8 + 3) = iVar20 + 1;
      puVar11 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)&pFVar12->TLASBuildBuffers);
      *puVar11 = *(undefined8 *)(lVar10 + 0x110);
      *(undefined4 *)(puVar11 + 1) = 0x10;
      if (GRHIGlobals.RayTracing.RequiresSeparateHitGroupContributionsBuffer != false) {
        iVar20 = *(int *)(puVar8 + 3);
        if (iVar20 == *(int *)((longlong)puVar8 + 0x1c)) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                             (0x810,(ForElementType<FRDGBufferAccess> *)pFVar12,
                              (int *)((longlong)puVar8 + 0x1c));
        }
        *(int *)(puVar8 + 3) = iVar20 + 1;
        puVar11 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)&pFVar12->TLASBuildBuffers);
        *puVar11 = *(undefined8 *)(lVar10 + 0x118);
        *(undefined4 *)(puVar11 + 1) = 0x10;
      }
      iVar20 = *(int *)(puVar8 + 3);
      if (iVar20 == *(int *)((longlong)puVar8 + 0x1c)) {
        iVar20 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBufferAccess>_>
                           (0x810,(ForElementType<FRDGBufferAccess> *)pFVar12,
                            (int *)((longlong)puVar8 + 0x1c));
      }
      *(int *)(puVar8 + 3) = iVar20 + 1;
      puVar11 = (undefined8 *)((longlong)iVar20 * 0x10 + *(longlong *)&pFVar12->TLASBuildBuffers);
      *puVar11 = *(undefined8 *)(lVar10 + 0x148);
      *(undefined4 *)(puVar11 + 1) = 0x20000;
      local_128.UnvisitedBitMask = local_128.UnvisitedBitMask & ~local_128._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_128);
      pTVar13 = local_130;
      FVar18 = local_190;
    }
    local_194 = local_194 + 1;
    puVar11 = (undefined8 *)(ulonglong)local_194;
  } while (local_194 < 3);
  local_b8.PassParams = pFVar12;
  local_b8.__this = this;
  pFVar9 = FRDGEventName::FRDGEventName(&local_78,1,L"RayTracingBuildScene");
  FRDGBuilder::AddPass<FRayTracingSceneBuildPassParams,_FRayTracingScene::Build_::__l2::<lambda_1>_>
            (param_1,pFVar9,pFVar12,param_2,&local_b8);
  if (local_78.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if ((GRayTracingSerializeSceneNextFrame != false) &&
     (GRHIGlobals.RayTracing.SupportsSerializeAccelerationStructure != false)) {
    local_194 = 0;
    FVar16 = local_190;
    do {
      uVar15 = local_194;
      pTVar13 = &this->ActiveViews;
      if (((this->Layers).ArrayNum <= (int)local_194) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         FVar16 = local_190, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = *(uint *)((longlong)FVar16 + 0x18);
      local_150 = 0;
      pFVar19 = (FLayer *)((this->Layers).AllocatorInstance.Data + (longlong)(int)uVar15 * 0x70);
      uStack_14c = 1;
      uStack_13c = 0;
      iStack_138 = 0;
      FVar18 = FVar16;
      if (uVar14 != 0) {
        FVar17 = FVar16;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar17 = *(ForElementType<unsigned_int> *)((longlong)FVar16 + 0x10);
        }
        uVar15 = *(uint *)FVar17;
        local_150 = 0;
        iStack_138 = 0;
        while (FVar18 = local_190, uVar15 == 0) {
          iStack_138 = iStack_138 + 0x20;
          lVar10 = (longlong)local_150;
          local_150 = local_150 + 1;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < local_150)
          goto LAB_1453704eb;
          uVar15 = ((uint *)((longlong)FVar17 + 4))[lVar10];
        }
        uStack_14c = -uVar15 & uVar15;
        uVar3 = (ulonglong)uStack_14c * 2 + 1;
        lVar10 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_c8 = (int)lVar10;
        uStack_13c = iStack_138 + -1 + local_c8;
        if ((int)uVar14 < (int)uStack_13c) {
LAB_1453704eb:
          uStack_13c = uVar14;
        }
      }
      local_140 = 0xffffffff;
      uVar15 = *(uint *)&(this->ActiveViews).field_0x28;
      local_d8 = *(int *)&(this->ActiveViews).field_0x8 - *(int *)&(this->ActiveViews).field_0x34;
      local_f8._padding_ = CONCAT44(uStack_14c,local_150);
      local_f8.CurrentBitIndex = uStack_13c;
      local_f8.UnvisitedBitMask = 0xffffffff;
      local_f8._28_4_ = uStack_134;
      local_f8.BaseBitIndex = iStack_138;
      uVar22 = uVar15 & 0xffffffe0;
      iVar7 = (int)uVar15 >> 5;
      FStack_148 = FVar16;
      local_100 = pTVar13;
      local_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar16;
      if ((((int)uVar15 < 0) || ((int)uVar14 < (int)uVar15)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), FVar18 = local_190, bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar14 = *(uint *)((longlong)FVar18 + 0x18);
      if (uVar15 != uVar14) {
        FVar16 = FVar18;
        if (*(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10) !=
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar18 + 0x10);
        }
        uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4);
        while (uVar15 == 0) {
          lVar10 = (longlong)iVar7;
          uVar22 = uVar22 + 0x20;
          iVar7 = iVar7 + 1;
          uVar15 = uVar14;
          if ((int)((uVar14 - 1) + ((int)(uVar14 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
          goto LAB_1453705e0;
          uVar15 = ((uint *)((longlong)FVar16 + 4))[lVar10];
        }
        uVar3 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar10 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        local_c4 = (int)lVar10;
        uVar15 = (uVar22 - 1) + local_c4;
        if ((int)uVar14 < (int)uVar15) {
          uVar15 = uVar14;
        }
      }
LAB_1453705e0:
      while( true ) {
        FVar16 = FVar18;
        if (*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34 != local_d8) {
          local_198[0] = 0;
          `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
          <lambda_1>::operator()(local_198);
          FVar16 = local_190;
        }
        if (((local_f8.CurrentBitIndex == uVar15) &&
            ((ForElementType<unsigned_int>)local_f8.Array == FVar16)) &&
           (pTVar13 == &this->ActiveViews)) break;
        uVar14 = *(uint *)(*(longlong *)pTVar13 + (longlong)local_f8.CurrentBitIndex * 8);
        uVar22 = 0;
        if ((int)uVar14 < (pFVar19->Views).ArrayNum) {
          uVar22 = ~uVar14 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar21 = (FLayerView *)
                  ((pFVar19->Views).AllocatorInstance.Data + (longlong)(int)uVar14 * 0x188);
        puVar8 = FMemStackBase::Alloc(local_c0,0x20,0x10);
        if (puVar8 == (undefined8 *)0x0) {
          puVar8 = (undefined8 *)0x0;
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Object",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                             ,0x61,L"");
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        else {
          puVar8[2] = 0;
          *puVar8 = &___7__TObject_VFRayTracingSceneSerializePassParams___FRDGAllocator__6B_;
          *(undefined4 *)(puVar8 + 3) = 0x10000;
        }
        local_178 = puVar8;
        if ((((undefined8 **)param_1->_padding_ <= &local_178) &&
            (&local_178 <
             (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar7 = (int)param_1->_padding_;
        piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
        if (iVar7 == *piVar1) {
          iVar7 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
        }
        *(int *)&param_1->_padding_ = iVar7 + 1;
        pFVar2 = (FRayTracingSceneSerializePassParams *)(puVar8 + 2);
        uStack_a0 = 0x10000;
        *(undefined8 **)(param_1->_padding_ + (longlong)iVar7 * 8) = local_178;
        local_a8 = pFVar21->RayTracingSceneBufferRDG;
        *(FRDGBuffer **)&pFVar2->TLASBuffer = local_a8;
        puVar8[3] = CONCAT44(uStack_9c,0x10000);
        local_98.SerializePassParams = pFVar2;
        local_98.Layer = pFVar19;
        local_98.LayerView = pFVar21;
        local_98.ViewIndex = uVar14;
        pFVar9 = FRDGEventName::FRDGEventName(&local_60,1,L"RayTracingSerializeScene");
        FRDGBuilder::
        AddPass<FRayTracingSceneSerializePassParams,_FRayTracingScene::Build_::__l20::<lambda_2>_>
                  (param_1,pFVar9,pFVar2,Readback,&local_98);
        if (local_60.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.FormattedEventName.Data.AllocatorInstance.Data);
        }
        local_f8.UnvisitedBitMask = local_f8.UnvisitedBitMask & ~local_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_f8);
        pTVar13 = local_100;
        FVar18 = local_190;
      }
      local_194 = local_194 + 1;
    } while (local_194 < 3);
  }
  GRayTracingSerializeSceneNextFrame = false;
  return;
}

// BuildInitializationData @ 145370cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::BuildInitializationData
          (FRayTracingScene *this,bool param_1,bool param_2,bool param_3)

{
  ulonglong uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  uint *puVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  uint uVar8;
  FRayTracingScene *pFVar9;
  bool bVar10;
  ForElementType<unsigned_int> FVar11;
  longlong lVar12;
  TSparseArray<int,FDefaultSparseArrayAllocator> *pTVar13;
  uint *_Src;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  FRayTracingInstanceBufferBuilder *this_00;
  undefined1 auStack_1b8 [32];
  longlong local_198;
  longlong local_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined1 local_186;
  undefined1 local_185;
  uint local_184;
  int local_180;
  uint uStack_17c;
  ForElementType<unsigned_int> FStack_178;
  undefined4 local_170;
  uint uStack_16c;
  int iStack_168;
  undefined4 uStack_164;
  FRayTracingScene *local_160;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_158;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_150;
  int local_130;
  int local_128;
  int local_124;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_120;
  ForElementType<unsigned_int> local_118;
  FRayTracingGeometryInstance *local_110;
  int iStack_108;
  undefined4 uStack_104;
  FRayTracingInstanceBufferBuilderInitializer local_100;
  FRayTracingGeometryInstance *local_a8;
  ulonglong uStack_a0;
  TBitArray<FDefaultBitArrayAllocator> local_98;
  double local_78;
  double dStack_70;
  double local_68;
  undefined2 local_60;
  undefined1 local_5e;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_120 = &this->ActiveViews;
  FVar11 = (ForElementType<unsigned_int>)&(this->ActiveViews).field_0x10;
  local_184 = 0;
  local_187 = param_1;
  local_186 = param_2;
  local_185 = param_3;
  local_160 = this;
  local_118 = FVar11;
  do {
    pTVar13 = local_120;
    pFVar9 = local_160;
    uVar8 = local_184;
    iVar15 = (local_160->Layers).ArrayNum;
    if (iVar15 <= (int)local_184) {
      local_198 = (longlong)(int)local_184;
      local_190 = (longlong)iVar15;
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar3 = *(int *)((longlong)FVar11 + 0x18);
    local_180 = 0;
    pFVar4 = (pFVar9->Layers).AllocatorInstance.Data;
    uStack_17c = 1;
    uStack_16c = 0;
    iStack_168 = 0;
    if (uVar3 != 0) {
      FVar16 = FVar11;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10);
      }
      uVar14 = *(uint *)FVar16;
      local_180 = 0;
      while (uVar14 == 0) {
        iStack_168 = iStack_168 + 0x20;
        lVar12 = (longlong)local_180;
        local_180 = local_180 + 1;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < local_180)
        goto LAB_145370e30;
        uVar14 = ((uint *)((longlong)FVar16 + 4))[lVar12];
      }
      uStack_17c = -uVar14 & uVar14;
      uVar1 = (ulonglong)uStack_17c * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_128 = (int)lVar12;
      uStack_16c = local_128 + -1 + iStack_168;
      if ((int)uVar3 < (int)uStack_16c) {
LAB_145370e30:
        uStack_16c = uVar3;
      }
    }
    local_170 = 0xffffffff;
    uVar14 = *(uint *)&pTVar13->field_0x28;
    local_130 = *(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34;
    local_150._padding_ = CONCAT44(uStack_17c,local_180);
    local_150.CurrentBitIndex = uStack_16c;
    local_150.UnvisitedBitMask = 0xffffffff;
    local_150._28_4_ = uStack_164;
    local_150.BaseBitIndex = iStack_168;
    uVar17 = uVar14 & 0xffffffe0;
    iVar15 = (int)uVar14 >> 5;
    FStack_178 = FVar11;
    local_158 = pTVar13;
    local_150.Array = (TBitArray<FDefaultBitArrayAllocator> *)FVar11;
    if ((((int)uVar14 < 0) || ((int)uVar3 < (int)uVar14)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar3 = *(uint *)((longlong)FVar11 + 0x18);
    if (uVar14 != uVar3) {
      FVar16 = FVar11;
      if (*(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10) !=
          (ForElementType<unsigned_int>)0x0) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)FVar11 + 0x10);
      }
      uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar15 * 4);
      while (uVar14 == 0) {
        lVar12 = (longlong)iVar15;
        uVar17 = uVar17 + 0x20;
        iVar15 = iVar15 + 1;
        uVar14 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_145370f20;
        uVar14 = ((uint *)((longlong)FVar16 + 4))[lVar12];
      }
      uVar1 = (ulonglong)(-uVar14 & uVar14) * 2 + 1;
      lVar12 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      local_124 = (int)lVar12;
      uVar14 = local_124 + -1 + uVar17;
      if ((int)uVar3 < (int)uVar14) {
        uVar14 = uVar3;
      }
    }
LAB_145370f20:
    while( true ) {
      if (*(int *)&pTVar13->field_0x8 - *(int *)&pTVar13->field_0x34 != local_130) {
        local_188 = 0;
        `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
        <lambda_1>::operator()(&local_188);
      }
      if (((local_150.CurrentBitIndex == uVar14) &&
          ((ForElementType<unsigned_int>)local_150.Array == FVar11)) && (pTVar13 == local_120))
      break;
      uVar3 = *(uint *)(*(longlong *)pTVar13 + (longlong)local_150.CurrentBitIndex * 8);
      lVar12 = (longlong)(int)uVar3;
      uVar17 = 0;
      if ((int)uVar3 < *(int *)(pFVar4 + (longlong)(int)uVar8 * 0x70 + 0x60)) {
        uVar17 = ~uVar3 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_198 = lVar12,
         local_190 = (longlong)*(int *)(pFVar4 + (longlong)(int)uVar8 * 0x70 + 0x60),
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_110 = *(FRayTracingGeometryInstance **)(pFVar4 + (longlong)(int)uVar8 * 0x70 + 0x20);
      iVar15 = *(int *)(pFVar4 + (longlong)(int)uVar8 * 0x70 + 0x28);
      local_a8 = (FRayTracingGeometryInstance *)0x0;
      this_00 = (FRayTracingInstanceBufferBuilder *)
                (lVar12 * 0x188 + *(longlong *)(pFVar4 + (longlong)(int)uVar8 * 0x70 + 0x58));
      uStack_a0 = uStack_a0 & 0xffffffff00000000;
      local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_98.NumBits = 0;
      local_98.MaxBits = 0x80;
      local_60 = 0;
      local_5e = 0;
      if ((iVar15 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_a0 = CONCAT44(uStack_104,iVar15);
      _Src = &this_00[1].Data.NumGPUInstanceDescriptors;
      local_a8 = local_110;
      iStack_108 = iVar15;
      if (&local_98 != (TBitArray<FDefaultBitArrayAllocator> *)_Src) {
        uVar17 = *(int *)&this_00[1].Data.InstanceGeometryIndices.AllocatorInstance.Data + 0x1fU &
                 0xffffffe0;
        if ((local_98.MaxBits < (int)uVar17) || (0x80 < local_98.MaxBits)) {
          local_98.MaxBits = 0x80;
          if (0x80 < (int)uVar17) {
            local_98.MaxBits = uVar17;
          }
          local_98.NumBits = 0;
          TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_98,0);
        }
        local_98.NumBits = *(int *)&this_00[1].Data.InstanceGeometryIndices.AllocatorInstance.Data;
        if (local_98.NumBits != 0) {
          puVar5 = *(uint **)&this_00[1].Data.TotalNumSegments;
          if (puVar5 != (uint *)0x0) {
            _Src = puVar5;
          }
          FVar11 = (ForElementType<unsigned_int>)&local_98;
          if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar11 = local_98.AllocatorInstance.SecondaryData;
          }
          memcpy((void *)FVar11,_Src,(ulonglong)(local_98.NumBits + 0x1fU >> 5) << 2);
        }
      }
      pFVar9 = local_160;
      iVar15 = (local_160->ViewParameters).ArrayNum;
      uVar17 = 0;
      if ((int)uVar3 < iVar15) {
        uVar17 = ~uVar3 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (local_198 = lVar12, local_190 = (longlong)iVar15,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pFVar9->ViewParameters).AllocatorInstance.Data;
      local_100.Instances.DataPtr = local_a8;
      local_100.Instances._8_8_ = uStack_a0;
      pFVar2 = pFVar6 + lVar12 * 0x20 + 8;
      local_100.PreViewTranslation.field0_0x0._s_0.X = (double)*(undefined8 *)pFVar2;
      local_100.PreViewTranslation.field0_0x0._s_0.Y = (double)*(undefined8 *)(pFVar2 + 8);
      local_100.PreViewTranslation.field0_0x0._s_0.Z =
           (double)*(undefined8 *)(pFVar6 + lVar12 * 0x20 + 0x18);
      local_60 = CONCAT11(local_186,local_187);
      local_5e = local_185;
      if (local_98.AllocatorInstance.SecondaryData == (ForElementType<unsigned_int>)0x0) {
        local_100.VisibleInstances.AllocatorInstance.InlineData[0] =
             local_98.AllocatorInstance.InlineData[0];
        local_100.VisibleInstances.AllocatorInstance.InlineData[1] =
             local_98.AllocatorInstance.InlineData[1];
        local_100.VisibleInstances.AllocatorInstance.InlineData[2] =
             local_98.AllocatorInstance.InlineData[2];
        local_100.VisibleInstances.AllocatorInstance.InlineData[3] =
             local_98.AllocatorInstance.InlineData[3];
        local_100.VisibleInstances.AllocatorInstance.InlineData[4] =
             local_98.AllocatorInstance.InlineData[4];
        local_100.VisibleInstances.AllocatorInstance.InlineData[5] =
             local_98.AllocatorInstance.InlineData[5];
        local_100.VisibleInstances.AllocatorInstance.InlineData[6] =
             local_98.AllocatorInstance.InlineData[6];
        local_100.VisibleInstances.AllocatorInstance.InlineData[7] =
             local_98.AllocatorInstance.InlineData[7];
        local_100.VisibleInstances.AllocatorInstance.InlineData[8] =
             local_98.AllocatorInstance.InlineData[8];
        local_100.VisibleInstances.AllocatorInstance.InlineData[9] =
             local_98.AllocatorInstance.InlineData[9];
        local_100.VisibleInstances.AllocatorInstance.InlineData[10] =
             local_98.AllocatorInstance.InlineData[10];
        local_100.VisibleInstances.AllocatorInstance.InlineData[0xb] =
             local_98.AllocatorInstance.InlineData[0xb];
        local_100.VisibleInstances.AllocatorInstance.InlineData[0xc] =
             local_98.AllocatorInstance.InlineData[0xc];
        local_100.VisibleInstances.AllocatorInstance.InlineData[0xd] =
             local_98.AllocatorInstance.InlineData[0xd];
        local_100.VisibleInstances.AllocatorInstance.InlineData[0xe] =
             local_98.AllocatorInstance.InlineData[0xe];
        local_100.VisibleInstances.AllocatorInstance.InlineData[0xf] =
             local_98.AllocatorInstance.InlineData[0xf];
      }
      local_100.VisibleInstances.AllocatorInstance.SecondaryData =
           local_98.AllocatorInstance.SecondaryData;
      local_100.VisibleInstances.NumBits = local_98.NumBits;
      local_100.bDisableTriangleCull = (bool)local_185;
      local_100.VisibleInstances.MaxBits = local_98.MaxBits;
      local_98.NumBits = 0;
      local_98.MaxBits = 0;
      local_98.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
      local_100.bUseLightingChannels = (bool)local_187;
      local_100.bForceOpaque = (bool)local_186;
      local_78 = local_100.PreViewTranslation.field0_0x0._s_0.X;
      dStack_70 = local_100.PreViewTranslation.field0_0x0._s_0.Y;
      local_68 = local_100.PreViewTranslation.field0_0x0._s_0.Z;
      FRayTracingInstanceBufferBuilder::Init(this_00,&local_100);
      if (local_98.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_98.AllocatorInstance.SecondaryData);
      }
      local_150.UnvisitedBitMask = local_150.UnvisitedBitMask & ~local_150._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_150);
      pTVar13 = local_158;
      FVar11 = local_118;
    }
    local_184 = local_184 + 1;
    if (2 < local_184) {
      local_160->bInitializationDataBuilt = true;
      return;
    }
  } while( true );
}

// CreateLayerViewRHI @ 14537b290

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FRHIShaderResourceView> __thiscall
FRayTracingScene::CreateLayerViewRHI
          (FRayTracingScene *this,FRHICommandListBase *param_1,ERayTracingSceneLayer param_2,
          FViewHandle param_3)

{
  FScriptContainerElement *pFVar1;
  FRHIBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TRefCountPtr<FRHIShaderResourceView> TVar6;
  FShaderResourceViewInitializer *pFVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined7 in_register_00000081;
  FMemScope local_res8;
  FLLMScope local_res20 [2];
  uint in_stack_00000028;
  FShaderResourceViewInitializer local_38;
  
  uVar8 = (ulonglong)param_3.Index & 0xff;
  if ((this->Layers).ArrayNum <= (int)uVar8) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FRHIShaderResourceView *)(*pcVar3)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar6.Reference;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)in_stack_00000028 < *(int *)(pFVar1 + uVar8 * 0x70 + 0x60)) {
    uVar5 = ~in_stack_00000028 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FRHIShaderResourceView *)(*pcVar3)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar6.Reference;
    }
  }
  lVar9 = (longlong)(int)in_stack_00000028 * 0x188 + *(longlong *)(pFVar1 + uVar8 * 0x70 + 0x58);
  if (*(longlong *)(lVar9 + 0x140) == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerView.RayTracingScenePooledBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x395,L"Ray tracing scene was not created. Perhaps Update() was not called."
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar6.Reference = (FRHIShaderResourceView *)(*pcVar3)();
      return (TRefCountPtr<FRHIShaderResourceView>)TVar6.Reference;
    }
  }
  pFVar7 = FShaderResourceViewInitializer::FShaderResourceViewInitializer
                     (&local_38,*(FRHIBuffer **)(*(longlong *)(lVar9 + 0x140) + 0x28),
                      *(FRHIRayTracingScene **)(lVar9 + 0x108),0);
  pFVar2 = pFVar7->Buffer;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      ::FName::FName(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                      ::__l2::LLMScope_Name977,L"RHIMisc/CreateShaderResourceView");
      _Init_thread_footer(&`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  FLLMScope::FLLMScope
            (local_res20,
             `public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
             ::__l2::LLMScope_Name977,false,None,Default,true);
  FMemScope::FMemScope
            (&local_res8,
             &`public:_class_TRefCountPtr<FRHIShaderResourceView>___cdecl_FRHICommandListBase::CreateShaderResourceView(FRHIBuffer*___ptr64,FRHIViewDesc::FBufferSRV::FInitializer_const&___ptr64)___ptr64'
              ::__l2::LLMScope_Name977,true);
  (**(code **)(GDynamicRHI->_padding_ + 0x1b0))
            (GDynamicRHI,param_1,CONCAT71(in_register_00000081,param_2),pFVar2,pFVar7);
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res20);
  return (TRefCountPtr<FRHIShaderResourceView>)(FRHIShaderResourceView *)param_1;
}

// EndFrame @ 14537cad0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::EndFrame(FRayTracingScene *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined8 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  int iVar11;
  ulonglong uVar12;
  
  Reset(this);
  if (this->bUsedThisFrame != false) {
    this->bInitializationDataBuilt = false;
    this->bUsedThisFrame = false;
    return;
  }
  uVar12 = 0;
  uVar9 = uVar12;
  do {
    iVar11 = (int)uVar9;
    if (((this->Layers).ArrayNum <= iVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Layers).AllocatorInstance.Data;
    uVar9 = uVar12;
    uVar10 = uVar12;
    if (0 < *(int *)(pFVar3 + (longlong)iVar11 * 0x70 + 0x60)) {
      do {
        uVar8 = (uint)uVar9;
        uVar7 = 0;
        if ((int)uVar8 < *(int *)(pFVar3 + (longlong)iVar11 * 0x70 + 0x60)) {
          uVar7 = ~uVar8 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        puVar4 = *(undefined8 **)
                  (uVar10 + 0x140 + *(longlong *)(pFVar3 + (longlong)iVar11 * 0x70 + 0x58));
        if (puVar4 != (undefined8 *)0x0) {
          *(undefined8 *)(uVar10 + 0x140 + *(longlong *)(pFVar3 + (longlong)iVar11 * 0x70 + 0x58)) =
               0;
          piVar1 = (int *)(puVar4 + 1);
          LOCK();
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar4)(puVar4,1);
          }
        }
        uVar9 = (ulonglong)(uVar8 + 1);
        uVar10 = uVar10 + 0x188;
      } while ((int)(uVar8 + 1) < *(int *)(pFVar3 + (longlong)iVar11 * 0x70 + 0x60));
    }
    uVar9 = (ulonglong)(iVar11 + 1U);
    if (2 < iVar11 + 1U) {
      piVar1 = &(this->GeometriesToBuild).ArrayMax;
      (this->GeometriesToBuild).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      ReleaseFeedbackReadbackBuffers(this);
      ReleaseReadbackBuffers(this);
      this->bInitializationDataBuilt = false;
      this->bUsedThisFrame = false;
      return;
    }
  } while( true );
}

// FinishStats @ 1453873b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingScene::FinishStats(FRayTracingScene *this,FRDGBuilder *param_1,ERDGPassFlags param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined1 *puVar6;
  FName FVar7;
  FRDGBuffer *pFVar8;
  code *pcVar9;
  FScriptContainerElement *pFVar10;
  TSparseArray<int,FDefaultSparseArrayAllocator> *pTVar11;
  bool bVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  FRHIGPUBufferReadback *this_00;
  FName *pFVar16;
  uchar auVar17 [8];
  FThreadSafeStaticStat<FStat_STAT_RayTracingTotalInstances> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_RayTracingActiveInstances> FVar21;
  FRDGEventName *pFVar22;
  undefined8 *puVar23;
  longlong lVar24;
  uint uVar25;
  uint uVar26;
  uchar auVar27 [8];
  FScriptContainerElement *pFVar28;
  TSparseArray<int,FDefaultSparseArrayAllocator> *pTVar29;
  uint uVar30;
  undefined8 *puVar31;
  undefined1 *puVar32;
  uint *puVar33;
  uint uVar34;
  uchar auVar35 [8];
  undefined1 local_res20 [8];
  uint local_130;
  uint local_12c;
  undefined8 *local_128;
  int local_120;
  uint uStack_11c;
  undefined1 *puStack_118;
  undefined4 local_110;
  int iStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  FRDGBuffer *local_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_f0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e8;
  int local_c8;
  int local_c0;
  int local_bc;
  FScriptContainerElement *local_b8;
  TSparseArray<int,FDefaultSparseArrayAllocator> *local_b0;
  FName local_a8;
  FName local_a0;
  FStatMessage local_98;
  FStatMessage local_88;
  <lambda_1> local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FRDGEventName local_50;
  
  auVar35[0] = '\0';
  auVar35[1] = '\0';
  auVar35[2] = '\0';
  auVar35[3] = '\0';
  auVar35[4] = '\0';
  auVar35[5] = '\0';
  auVar35[6] = '\0';
  auVar35[7] = '\0';
  piVar2 = &(this->StatsReadback).ArrayNum;
  if (*piVar2 == 0) {
    uVar30 = this->MaxReadbackBuffers;
    if ((int)uVar30 < 1) {
      if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
      }
    }
    else {
      iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x10,8,uVar30,&(this->StatsReadback).AllocatorInstance,piVar2,
                          &(this->StatsReadback).ArrayMax);
      DefaultConstructItems<FRayTracingScene::FStatsReadbackData,int>
                ((this->StatsReadback).AllocatorInstance.Data + (longlong)iVar14 * 0x10,uVar30);
    }
    auVar27 = auVar35;
    if (this->MaxReadbackBuffers != 0) {
      do {
        this_00 = ::operator_new(0x58);
        auVar17 = auVar35;
        if (this_00 != (FRHIGPUBufferReadback *)0x0) {
          pFVar16 = ::FName::FName(&local_68,L"FRayTracingScene::StatsReadbackBuffer");
          auVar17 = (uchar  [8])FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_00,*pFVar16);
        }
        uVar25 = auVar27._0_4_;
        uVar30 = 0;
        if ((int)uVar25 < (this->StatsReadback).ArrayNum) {
          uVar30 = ~uVar25 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        auVar27._0_4_ = uVar25 + 1;
        auVar27[4] = '\0';
        auVar27[5] = '\0';
        auVar27[6] = '\0';
        auVar27[7] = '\0';
        *(uchar (*) [8])
         ((this->StatsReadback).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10) = auVar17;
      } while (auVar27._0_4_ < this->MaxReadbackBuffers);
    }
  }
  uVar30 = this->StatsReadbackNumPending;
  local_130 = 0;
  local_12c = 0;
  auVar17 = auVar35;
  if (uVar30 != 0) {
    do {
      uVar34 = 0;
      uVar25 = ((this->StatsReadbackWriteIndex - uVar30) + this->MaxReadbackBuffers) %
               this->MaxReadbackBuffers;
      uVar30 = 0;
      if ((int)uVar25 < (this->StatsReadback).ArrayNum) {
        uVar30 = ~uVar25 >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar28 = (this->StatsReadback).AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10;
      lVar24 = *(longlong *)(*(longlong *)pFVar28 + 8);
      if ((lVar24 != 0) &&
         ((*(int *)(lVar24 + 0x18) != 0 ||
          (cVar13 = (**(code **)(**(longlong **)(*(longlong *)pFVar28 + 8) + 0x20))(),
          cVar13 == '\0')))) break;
      this->StatsReadbackNumPending = this->StatsReadbackNumPending - 1;
      local_100 = FRHIGPUBufferReadback::Lock
                            (*(FRHIGPUBufferReadback **)pFVar28,*(int *)(pFVar28 + 8) * 0xc);
      local_b0 = &this->ActiveViews;
      puVar1 = &(this->ActiveViews).field_0x10;
      do {
        pTVar29 = &this->ActiveViews;
        if (((this->Layers).ArrayNum <= (int)uVar34) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar14 = *(int *)&(this->ActiveViews).field_0x28;
        local_120 = 0;
        local_b8 = (this->Layers).AllocatorInstance.Data + (longlong)(int)uVar34 * 0x70;
        uStack_11c = 1;
        iStack_10c = 0;
        iStack_108 = 0;
        if (iVar14 != 0) {
          puVar5 = *(uint **)&(this->ActiveViews).field_0x20;
          puVar33 = (uint *)puVar1;
          if (puVar5 != (uint *)0x0) {
            puVar33 = puVar5;
          }
          uVar30 = *puVar33;
          iStack_108 = 0;
          local_120 = 0;
          while (uVar30 == 0) {
            iStack_108 = iStack_108 + 0x20;
            lVar24 = (longlong)local_120;
            local_120 = local_120 + 1;
            if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < local_120)
            goto LAB_1453876e0;
            uVar30 = puVar33[lVar24 + 1];
          }
          uStack_11c = -uVar30 & uVar30;
          uVar3 = (ulonglong)uStack_11c * 2 + 1;
          lVar24 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_c0 = (int)lVar24;
          iStack_10c = local_c0 + -1 + iStack_108;
          if (iVar14 < iStack_10c) {
LAB_1453876e0:
            iStack_10c = iVar14;
          }
        }
        local_110 = 0xffffffff;
        uVar30 = *(uint *)&(this->ActiveViews).field_0x28;
        local_c8 = *(int *)&(this->ActiveViews).field_0x8 - *(int *)&(this->ActiveViews).field_0x34;
        local_e8._padding_ = CONCAT44(uStack_11c,local_120);
        local_e8.CurrentBitIndex = iStack_10c;
        local_e8.UnvisitedBitMask = 0xffffffff;
        local_e8._28_4_ = uStack_104;
        local_e8.BaseBitIndex = iStack_108;
        uVar25 = uVar30 & 0xffffffe0;
        iVar14 = (int)uVar30 >> 5;
        puStack_118 = puVar1;
        local_f0 = pTVar29;
        local_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
        if (((int)uVar30 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                ,0x7af,L""), bVar12)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        pTVar11 = local_b0;
        pFVar10 = local_b8;
        uVar15 = *(uint *)&(this->ActiveViews).field_0x28;
        if (uVar30 != uVar15) {
          puVar6 = *(undefined1 **)&(this->ActiveViews).field_0x20;
          puVar32 = puVar1;
          if (puVar6 != (undefined1 *)0x0) {
            puVar32 = puVar6;
          }
          uVar30 = -1 << ((byte)uVar30 & 0x1f) & *(uint *)(puVar32 + (longlong)iVar14 * 4);
          while (uVar30 == 0) {
            lVar24 = (longlong)iVar14;
            uVar25 = uVar25 + 0x20;
            iVar14 = iVar14 + 1;
            uVar30 = uVar15;
            if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
            goto LAB_1453877bf;
            uVar30 = *(uint *)(puVar32 + lVar24 * 4 + 4);
          }
          uVar3 = (ulonglong)(-uVar30 & uVar30) * 2 + 1;
          lVar24 = 0x3f;
          if (uVar3 != 0) {
            for (; uVar3 >> lVar24 == 0; lVar24 = lVar24 + -1) {
            }
          }
          local_bc = (int)lVar24;
          uVar30 = local_bc + -1 + uVar25;
          if ((int)uVar15 < (int)uVar30) {
            uVar30 = uVar15;
          }
        }
LAB_1453877bf:
        while( true ) {
          if (*(int *)&pTVar29->field_0x8 - *(int *)&pTVar29->field_0x34 != local_c8) {
            local_res20[0] = 0;
            `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
            <lambda_1>::operator()(local_res20);
          }
          if (((local_e8.CurrentBitIndex == uVar30) &&
              (local_e8.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
             (pTVar29 == pTVar11)) break;
          uVar25 = *(uint *)(*(longlong *)pTVar29 + (longlong)local_e8.CurrentBitIndex * 8);
          uVar15 = 0;
          if ((int)uVar25 < *(int *)(pFVar10 + 0x60)) {
            uVar15 = ~uVar25 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          lVar24 = (longlong)(int)uVar25 * 0x188 + *(longlong *)(pFVar10 + 0x58);
          uVar26 = *(int *)(lVar24 + 100) + *(int *)(lVar24 + 0x60);
          uVar25 = *(uint *)((longlong)local_100 +
                            (ulonglong)(uVar34 * *(int *)(pFVar28 + 8) + uVar25) * 4);
          uVar15 = uVar26;
          if (uVar25 < uVar26) {
            uVar15 = uVar25;
          }
          local_130 = local_130 + uVar26;
          local_12c = local_12c + uVar15;
          *(uint *)(lVar24 + 0x180) = uVar15;
          local_e8.UnvisitedBitMask = local_e8.UnvisitedBitMask & ~local_e8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_e8);
          pTVar29 = local_f0;
        }
        uVar34 = uVar34 + 1;
      } while (uVar34 < 3);
      FRHIGPUBufferReadback::Unlock(*(FRHIGPUBufferReadback **)pFVar28);
      uVar30 = this->StatsReadbackNumPending;
    } while (uVar30 != 0);
    auVar35[4] = '\0';
    auVar35[5] = '\0';
    auVar35[6] = '\0';
    auVar35[7] = '\0';
    auVar35[0] = (undefined1)local_130;
    auVar35[1] = local_130._1_1_;
    auVar35[2] = local_130._2_1_;
    auVar35[3] = local_130._3_1_;
    auVar17[4] = '\0';
    auVar17[5] = '\0';
    auVar17[6] = '\0';
    auVar17[7] = '\0';
    auVar17[0] = (undefined1)local_12c;
    auVar17[1] = local_12c._1_1_;
    auVar17[2] = local_12c._2_1_;
    auVar17[3] = local_12c._3_1_;
  }
  puVar31 = (undefined8 *)0x0;
  if (FThreadStats::bPrimaryEnable != false) {
    FVar18 = StatPtr_STAT_RayTracingTotalInstances;
    if (StatPtr_STAT_RayTracingTotalInstances ==
        (FThreadSafeStaticStat<FStat_STAT_RayTracingTotalInstances>)0x0) {
      pFVar16 = ::FName::FName(&local_60,"STAT_RayTracingTotalInstances");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_RayTracingTotalInstances>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingTotalInstances,
                          *pFVar16,L"Ray tracing total instances","STATGROUP_SceneRendering",
                          "STATCAT_Advanced",L"Scene Rendering",true,true,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar7 = *(FName *)FVar18;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar19 == (FThreadStats *)0x0) {
        pFVar20 = FThreadStatsPool::Get();
        pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
      }
      local_98.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
      local_a8 = FVar7;
      local_98.StatData.Pad = auVar35;
      local_98.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar19,&local_98);
      FStatsTrace::Set(&local_a8,(long64)auVar35);
      if (pFVar19->ScopeCount == 0) {
        FThreadStats::Flush(pFVar19,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar19,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar21 = StatPtr_STAT_RayTracingActiveInstances;
      if (StatPtr_STAT_RayTracingActiveInstances ==
          (FThreadSafeStaticStat<FStat_STAT_RayTracingActiveInstances>)0x0) {
        pFVar16 = ::FName::FName(&local_58,"STAT_RayTracingActiveInstances");
        FVar21 = (FThreadSafeStaticStat<FStat_STAT_RayTracingActiveInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RayTracingActiveInstances,
                            *pFVar16,L"Ray tracing active instances","STATGROUP_SceneRendering",
                            "STATCAT_Advanced",L"Scene Rendering",true,true,ST_int64,false,false,
                            MCR_Invalid);
      }
      FVar7 = *(FName *)FVar21;
      if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar19 == (FThreadStats *)0x0) {
          pFVar20 = FThreadStatsPool::Get();
          pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
        }
        local_88.NameAndInfo.Number = FVar7.Number & 0xffff8fff | 0x8000;
        local_a0 = FVar7;
        local_88.StatData.Pad = auVar17;
        local_88.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar19,&local_88);
        FStatsTrace::Set(&local_a0,(long64)auVar17);
        if (pFVar19->ScopeCount == 0) {
          FThreadStats::Flush(pFVar19,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar19,false,false);
        }
      }
    }
  }
  if ((this->InstanceStatsBuffer != (FRDGBuffer *)0x0) &&
     (this->StatsReadbackNumPending < this->MaxReadbackBuffers)) {
    uVar30 = this->StatsReadbackWriteIndex;
    uVar25 = 0;
    if ((int)uVar30 < (this->StatsReadback).ArrayNum) {
      uVar25 = ~uVar30 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar8 = this->InstanceStatsBuffer;
    local_78.ReadbackData =
         (FStatsReadbackData *)
         ((this->StatsReadback).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10);
    local_78.InstanceStatsBuffer = pFVar8;
    pFVar22 = FRDGEventName::FRDGEventName(&local_50,1,L"FRayTracingScene::StatsReadback");
    puVar23 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x20,0x10);
    if (puVar23 == (undefined8 *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Object",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                          ,0x61,L"");
      if (bVar12) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    else {
      puVar23[2] = 0;
      *puVar23 = &___7__TObject_VFReadbackBufferParameters___FRDGAllocator__6B_;
      *(undefined4 *)(puVar23 + 3) = 0x80;
      puVar31 = puVar23;
    }
    local_128 = puVar31;
    if ((((undefined8 **)param_1->_padding_ <= &local_128) &&
        (&local_128 <
         (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar14 = (int)param_1->_padding_;
    piVar2 = (int *)((longlong)&param_1->_padding_ + 4);
    if (iVar14 == *piVar2) {
      iVar14 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&param_1->_padding_,piVar2);
    }
    *(int *)&param_1->_padding_ = iVar14 + 1;
    uStack_f8 = 0x80;
    *(undefined8 **)(param_1->_padding_ + (longlong)iVar14 * 8) = local_128;
    *(FRDGBuffer **)&((FReadbackBufferParameters *)(puVar31 + 2))->Buffer = pFVar8;
    puVar31[3] = CONCAT44(uStack_f4,0x80);
    local_100 = pFVar8;
    FRDGBuilder::
    AddPass<FReadbackBufferParameters,_FRayTracingScene::FinishStats_::__l31::<lambda_1>_>
              (param_1,pFVar22,(FReadbackBufferParameters *)(puVar31 + 2),Readback,&local_78);
    if (local_50.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.FormattedEventName.Data.AllocatorInstance.Data);
    }
    uVar30 = this->StatsReadbackWriteIndex;
    uVar4 = *(undefined4 *)&(this->ActiveViews).field_0x8;
    uVar25 = 0;
    if ((int)uVar30 < (this->StatsReadback).ArrayNum) {
      uVar25 = ~uVar30 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    *(undefined4 *)((this->StatsReadback).AllocatorInstance.Data + (longlong)(int)uVar30 * 0x10 + 8)
         = uVar4;
    uVar30 = this->MaxReadbackBuffers;
    uVar25 = this->StatsReadbackNumPending + 1;
    this->StatsReadbackWriteIndex = (this->StatsReadbackWriteIndex + 1) % uVar30;
    if (uVar25 < uVar30) {
      uVar30 = uVar25;
    }
    this->StatsReadbackNumPending = uVar30;
  }
  return;
}

// FinishTracingFeedback @ 145387e20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FRayTracingScene::FinishTracingFeedback
          (FRayTracingScene *this,FRDGBuilder *param_1,ERDGPassFlags param_2)

{
  longlong *plVar1;
  TArray<FRayTracingScene::FFeedbackReadbackData,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  code *pcVar5;
  ERDGPassFlags EVar6;
  bool bVar7;
  char cVar8;
  char cVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  FRDGScope *this_00;
  FRDGBufferUAV *pFVar13;
  FRHIGPUBufferReadback *pFVar14;
  FRDGBufferSRV *pFVar15;
  FGlobalShaderMap *pFVar16;
  FGlobalShaderType *pFVar17;
  FShaderType *pFVar18;
  FName FVar19;
  FRDGEventName *pFVar20;
  FShaderParametersMetadata *pFVar21;
  FRDGBuffer *pFVar22;
  FRHIGPUBufferReadback *this_01;
  FName *pFVar23;
  FRHIGPUBufferReadback *pFVar24;
  uint *puVar25;
  int *piVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  FRHIGPUBufferReadback *pFVar30;
  ulonglong uVar31;
  undefined1 local_res8 [8];
  FRDGBuilder *local_res10;
  ERDGPassFlags local_res18;
  undefined1 local_res20 [8];
  FRHIGPUBufferReadback *local_360;
  FRHIGPUBufferReadback *local_358;
  FRHIGPUBufferReadback *local_350;
  FRDGBuffer *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  undefined8 local_338;
  uint local_330;
  FRDGBuffer *local_328;
  FRDGBuffer *local_320;
  FScriptContainerElement *local_318;
  FRDGBufferUAVDesc local_310;
  FRDGBufferUAVDesc local_300;
  FRDGBufferUAVDesc local_2f0;
  FRDGBufferUAVDesc local_2e0;
  FRDGBufferUAVDesc local_2d0;
  FRDGBufferUAVDesc local_2c0;
  TIntVector3<int>_u_0 local_2b0 [2];
  TIntVector3<int>_u_0 local_298;
  TIntVector3<int>_u_0 local_288;
  TIntVector3<int>_u_0 local_278;
  TRDGEventScopeGuard<FRDGScope_RHI> local_268;
  char local_258;
  FRDGBufferSRVDesc local_250;
  FRDGBufferSRVDesc local_230;
  FRDGBufferSRVDesc local_210;
  FRDGBufferSRVDesc local_1f0;
  FRDGBufferSRVDesc local_1d0;
  FRDGBufferDesc local_1b0;
  FRDGBufferDesc local_198;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_178;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  <lambda_2> local_158;
  FRDGBufferDesc local_140;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  FName local_118;
  FName local_110;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_> local_108;
  FString local_f8;
  TShaderRefBase<FRayTracingUpdateGeometryHitCountCS,FShaderMapPointerTable> local_e8;
  FString local_d8;
  TShaderRefBase<FRayTracingProcessFeedbackCS,FShaderMapPointerTable> local_c8;
  uint uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  FRDGEventName local_98;
  FRDGEventName local_80;
  FRDGEventName local_68;
  
  cVar8 = *(char *)((longlong)&param_1->_padding_ + 6);
  pFVar30 = (FRHIGPUBufferReadback *)0x0;
  local_258 = '\0';
  local_res10 = param_1;
  local_res18 = param_2;
  if ((cVar8 != '\0') && ((cVar8 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = 0;
      uStack_a4 = 0;
      ::Desc._12_8_ = ZEXT48(uStack_ac);
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_ = (longlong)u_RayTracingScene;
      ::Desc._padding_ = (longlong)u_RayTracingScene;
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      ::Desc._padding_._0_4_ = 0x297;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```FRayTracingScene::FinishTracingFeedback'::__l7::Desc::operator()<>'::__l3::
             <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_108._Myfirst._Val = &::Desc;
    local_268.State = (FRDGScopeState *)param_1;
    this_00 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)this_00;
    local_268.Scope = this_00;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<39>_const_*,std::tuple<>_>_>
              (&(this_00->Impl).Impl,(FRDGScopeState *)param_1,&local_108);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(this_00,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(this_00,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_258 = '\x01';
  }
  if (this->bTracingFeedbackEnabled != false) {
    if (((this->Layers).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->Layers).AllocatorInstance.Data;
    local_318 = pFVar3;
    if ((*(int *)(pFVar3 + 0x60) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar4 = *(longlong *)(pFVar3 + 0x58);
    uVar29 = *(uint *)(lVar4 + 0xb8);
    local_330 = uVar29;
    if (((int)uVar29 < 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = *(int *)(lVar4 + 100) + *(int *)(lVar4 + 0x60);
    if (uVar29 != 0) {
      local_1b0.Metadata = (FShaderParametersMetadata *)0x0;
      local_1b0.Usage = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess;
      local_1b0.BytesPerElement = 4;
      local_1b0.NumElements = uVar29;
      local_328 = FRDGBuilder::CreateBuffer
                            (param_1,&local_1b0,L"FRayTracingScene::GeometryHandleBuffer",None);
      local_198.Metadata = (FShaderParametersMetadata *)0x0;
      local_198.Usage = StructuredBuffer|ShaderResource|UnorderedAccess;
      local_198.BytesPerElement = 4;
      local_198.NumElements = uVar29;
      local_320 = FRDGBuilder::CreateBuffer
                            (param_1,&local_198,L"FRayTracingScene::GeometryHitCountBuffer",None);
      local_310._padding_._2_1_ = 0;
      bVar27 = 0;
      if (((local_320->Desc).Usage & DrawIndirect) != None) {
        bVar27 = 0x1c;
      }
      local_310._padding_._0_2_ = (ushort)bVar27;
      local_310.Buffer = local_320;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_310,None);
      AddClearUAVPass(param_1,pFVar13,0,param_2);
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x50,0x10);
      if (pFVar14 == (FRHIGPUBufferReadback *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        pFVar14 = pFVar30;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ =
             (longlong)
             &___7__TObject_VFParameters_FRayTracingUpdateGeometryHitCountCS___FRDGAllocator__6B_;
        pFVar14->DestinationStagingBuffers[0].Reference = (FRHIStagingBuffer *)0x0;
        pFVar14->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)0x0;
        pFVar14->DestinationStagingBuffers[2].Reference = (FRHIStagingBuffer *)0x0;
        pFVar14->DestinationStagingBuffers[3].Reference = (FRHIStagingBuffer *)0x0;
        pFVar14->DestinationStagingBuffers[4].Reference = (FRHIStagingBuffer *)0x0;
      }
      local_360 = pFVar14;
      if ((((FRHIGPUBufferReadback **)param_1->_padding_ <= &local_360) &&
          (&local_360 <
           (FRHIGPUBufferReadback **)param_1->_padding_ +
           *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar11 = (int)param_1->_padding_;
      if (iVar11 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      *(int *)&param_1->_padding_ = iVar11 + 1;
      uVar29 = 0;
      local_250._padding_._4_4_ = 0;
      local_250._padding_._0_4_ = 0xffffffff;
      local_250._padding_ = 0;
      *(FRHIGPUBufferReadback **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_360;
      local_250.Buffer = *(FRDGBuffer **)local_318;
      local_250._padding_._0_1_ = 0;
      if ((((local_250.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_250._padding_._0_1_ = 0x1c;
      }
      local_348 = (FRDGBuffer *)&pFVar14->_padding_;
      pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_250);
      pFVar14->_padding_ = (longlong)pFVar15;
      local_230.Buffer = *(FRDGBuffer **)(lVar4 + 0x138);
      local_230._padding_._4_4_ = 0;
      local_230._padding_._0_4_ = 0xffffffff;
      local_230._padding_ = 0;
      local_230._padding_._0_1_ = 0;
      if ((((local_230.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_230._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_230);
      pFVar14->DestinationStagingBuffers[3].Reference = (FRHIStagingBuffer *)pFVar15;
      local_210.Buffer = *(FRDGBuffer **)(lVar4 + 0x128);
      local_210._padding_._4_4_ = 0;
      local_210._padding_._0_4_ = 0xffffffff;
      local_210._padding_ = 0;
      local_210._padding_._0_1_ = 0;
      if ((((local_210.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_210._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_210);
      pFVar14->DestinationStagingBuffers[0].Reference = (FRHIStagingBuffer *)pFVar15;
      local_300._padding_._2_1_ = 0;
      local_300.Buffer = local_320;
      bVar27 = 0;
      if (((local_320->Desc).Usage & DrawIndirect) != None) {
        bVar27 = 0x1c;
      }
      local_300._padding_._0_2_ = (ushort)bVar27;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_300,None);
      pFVar14->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)pFVar13;
      local_2f0.Buffer = local_328;
      local_2f0._padding_._2_1_ = 0;
      bVar27 = 0;
      if (((local_328->Desc).Usage & DrawIndirect) != None) {
        bVar27 = 0x1c;
      }
      local_2f0._padding_._0_2_ = (ushort)bVar27;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2f0,None);
      pFVar14->DestinationStagingBuffers[2].Reference = (FRHIStagingBuffer *)pFVar13;
      local_1f0.Buffer = *(FRDGBuffer **)(lVar4 + 0x158);
      local_1f0._padding_._4_4_ = 0;
      local_1f0._padding_._0_4_ = 0xffffffff;
      local_1f0._padding_ = 0;
      local_1f0._padding_._0_1_ = 0;
      if ((((local_1f0.Buffer)->Desc).Usage & DrawIndirect) != None) {
        local_1f0._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_1f0);
      *(int *)&pFVar14->DestinationStagingBuffers[5].Reference = iVar10;
      pFVar14->DestinationStagingBuffers[4].Reference = (FRHIStagingBuffer *)pFVar15;
      FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_2b0[0]._s_0,iVar10,0x40);
      pFVar16 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      pFVar17 = FRayTracingUpdateGeometryHitCountCS::GetStaticType();
      if (*(int *)&pFVar17->field_0x50 != 1) {
        local_res8[0] = 0;
        `FGlobalShaderMap::GetShader<FRayTracingUpdateGeometryHitCountCS>'::__l2::<lambda_1>::
        operator()(local_res8);
      }
      pFVar18 = (FShaderType *)FRayTracingUpdateGeometryHitCountCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar16,&local_178,pFVar18,0);
      if (local_178.ShaderContent == (FShader *)0x0) {
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_128);
        ::FName::ToString((FName *)FVar19,&local_f8);
        FRayTracingUpdateGeometryHitCountCS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FRayTracingUpdateGeometryHitCountCS::GetStaticType();
      local_e8.ShaderContent = (FRayTracingUpdateGeometryHitCountCS *)local_178.ShaderContent;
      local_e8.ShaderMap = local_178.ShaderMap;
      pFVar20 = FRDGEventName::FRDGEventName
                          (&local_98,1,L"FRayTracingScene::RayTracingUpdateGeometryHitCount");
      pFVar21 = FRayTracingUpdateGeometryHitCountCS::FParameters::FTypeInfo::GetStructMetadata();
      EVar6 = local_res18;
      local_298._s_0.Z = local_2b0[0]._s_0.Z;
      local_298._0_8_ = local_2b0[0]._0_8_;
      FComputeShaderUtils::AddPass<FRayTracingUpdateGeometryHitCountCS>
                (param_1,pFVar20,local_res18,&local_e8,pFVar21,(FParameters *)local_348,
                 (TIntVector3<int> *)&local_298._s_0);
      if (local_98.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_98.FormattedEventName.Data.AllocatorInstance.Data);
      }
      uStack_340 = 0x4109;
      local_348 = (FRDGBuffer *)0x100000004;
      local_338 = 0;
      local_140.BytesPerElement = 4;
      local_140.NumElements = 1;
      local_140._12_4_ = uStack_33c;
      local_140.Usage = VertexBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
      local_140.Metadata = (FShaderParametersMetadata *)0x0;
      pFVar22 = FRDGBuilder::CreateBuffer
                          (param_1,&local_140,L"FRayTracingScene::GeometryHandleAllocator",None);
      local_2d0._padding_._0_2_ = 0x1c;
      local_2d0._padding_._2_1_ = 0;
      local_2d0.Buffer = pFVar22;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2d0,None);
      AddClearUAVPass(param_1,pFVar13,0,EVar6);
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (pFVar14 == (FRHIGPUBufferReadback *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        pFVar14 = pFVar30;
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ =
             (longlong)&___7__TObject_VFParameters_FRayTracingProcessFeedbackCS___FRDGAllocator__6B_
        ;
        pFVar14->DestinationStagingBuffers[0].Reference = (FRHIStagingBuffer *)0x0;
        pFVar14->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)0x0;
      }
      local_358 = pFVar14;
      if ((((FRHIGPUBufferReadback **)param_1->_padding_ <= &local_358) &&
          (&local_358 <
           (FRHIGPUBufferReadback **)param_1->_padding_ +
           *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (int)param_1->_padding_;
      if (iVar10 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      *(int *)&param_1->_padding_ = iVar10 + 1;
      local_1d0._padding_._4_4_ = 0;
      local_1d0._padding_._0_4_ = 0xffffffff;
      local_1d0._padding_ = 0;
      *(FRHIGPUBufferReadback **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_358;
      local_1d0.Buffer = local_320;
      local_1d0._padding_._0_1_ = 0;
      if (((local_320->Desc).Usage & DrawIndirect) != None) {
        local_1d0._padding_._0_1_ = 0x1c;
      }
      pFVar15 = FRDGBuilder::CreateSRV(param_1,&local_1d0);
      pFVar14->_padding_ = (longlong)pFVar15;
      local_2e0.Buffer = local_328;
      local_2e0._padding_._2_1_ = 0;
      bVar27 = 0;
      if (((local_328->Desc).Usage & DrawIndirect) != None) {
        bVar27 = 0x1c;
      }
      local_2e0._padding_._0_2_ = (ushort)bVar27;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2e0,None);
      pFVar14->DestinationStagingBuffers[0].Reference = (FRHIStagingBuffer *)pFVar13;
      local_2c0._padding_._0_2_ = 0x1c;
      local_2c0._padding_._2_1_ = 0;
      local_2c0.Buffer = pFVar22;
      pFVar13 = FRDGBuilder::CreateUAV(param_1,&local_2c0,None);
      *(uint *)&pFVar14->DestinationStagingBuffers[2].Reference = local_330;
      pFVar14->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)pFVar13;
      FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_288._s_0,local_330,0x40);
      pFVar16 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      pFVar17 = FRayTracingProcessFeedbackCS::GetStaticType();
      if (*(int *)&pFVar17->field_0x50 != 1) {
        local_res20[0] = 0;
        `FGlobalShaderMap::GetShader<FRayTracingProcessFeedbackCS>'::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      pFVar18 = (FShaderType *)FRayTracingProcessFeedbackCS::GetStaticType();
      FGlobalShaderMap::GetShader(pFVar16,&local_168,pFVar18,0);
      if (local_168.ShaderContent == (FShader *)0x0) {
        FVar19 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_120);
        ::FName::ToString((FName *)FVar19,&local_d8);
        FRayTracingProcessFeedbackCS::GetStaticType();
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Shader.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                           ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      FRayTracingProcessFeedbackCS::GetStaticType();
      local_c8.ShaderContent = (FRayTracingProcessFeedbackCS *)local_168.ShaderContent;
      local_c8.ShaderMap = local_168.ShaderMap;
      pFVar20 = FRDGEventName::FRDGEventName(&local_80,1,L"FRayTracingScene::FinishTracingFeedback")
      ;
      pFVar21 = FRayTracingProcessFeedbackCS::FParameters::FTypeInfo::GetStructMetadata();
      local_278._s_0.Z = local_288._s_0.Z;
      local_278._0_8_ = local_288._0_8_;
      FComputeShaderUtils::AddPass<FRayTracingProcessFeedbackCS>
                (param_1,pFVar20,EVar6,&local_c8,pFVar21,(FParameters *)&pFVar14->_padding_,
                 (TIntVector3<int> *)&local_278._s_0);
      if (local_80.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_80.FormattedEventName.Data.AllocatorInstance.Data);
      }
      piVar26 = &(this->FeedbackReadback).ArrayNum;
      if (*piVar26 == 0) {
        uVar12 = this->MaxReadbackBuffers;
        pTVar2 = &this->FeedbackReadback;
        if ((int)uVar12 < 1) {
          if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
          }
        }
        else {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar12,&pTVar2->AllocatorInstance,piVar26,
                              &(this->FeedbackReadback).ArrayMax);
          DefaultConstructItems<FRayTracingScene::FFeedbackReadbackData,int>
                    ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x10,uVar12);
        }
        pFVar14 = pFVar30;
        param_1 = local_res10;
        if (this->MaxReadbackBuffers != 0) {
          do {
            this_01 = ::operator_new(0x58);
            pFVar24 = pFVar30;
            if (this_01 != (FRHIGPUBufferReadback *)0x0) {
              pFVar23 = ::FName::FName(&local_118,
                                       L"FRayTracingScene::FeedbackReadbackBuffer::GeometryHandles")
              ;
              pFVar24 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(this_01,*pFVar23);
            }
            uVar28 = (uint)pFVar14;
            uVar12 = uVar29;
            if ((int)uVar28 < (this->FeedbackReadback).ArrayNum) {
              uVar12 = ~uVar28 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            *(FRHIGPUBufferReadback **)
             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x10) = pFVar24;
            pFVar14 = ::operator_new(0x58);
            pFVar24 = pFVar30;
            if (pFVar14 != (FRHIGPUBufferReadback *)0x0) {
              pFVar23 = ::FName::FName(&local_110,
                                       L"FRayTracingScene::FeedbackReadbackBuffer::GeometryCount");
              pFVar24 = FRHIGPUBufferReadback::FRHIGPUBufferReadback(pFVar14,*pFVar23);
            }
            uVar12 = uVar29;
            if ((int)uVar28 < (this->FeedbackReadback).ArrayNum) {
              uVar12 = ~uVar28 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            pFVar14 = (FRHIGPUBufferReadback *)(ulonglong)(uVar28 + 1);
            *(FRHIGPUBufferReadback **)
             ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar28 * 0x10 + 8) = pFVar24;
            param_1 = local_res10;
          } while (uVar28 + 1 < this->MaxReadbackBuffers);
        }
      }
      uVar12 = this->FeedbackReadbackNumPending;
      while (uVar12 != 0) {
        uVar28 = ((this->MaxReadbackBuffers - uVar12) + this->FeedbackReadbackWriteIndex) %
                 this->MaxReadbackBuffers;
        uVar12 = uVar29;
        if ((int)uVar28 < (this->FeedbackReadback).ArrayNum) {
          uVar12 = ~uVar28 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar14 = *(FRHIGPUBufferReadback **)
                   ((this->FeedbackReadback).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10);
        uVar12 = uVar29;
        if ((int)uVar28 < (this->FeedbackReadback).ArrayNum) {
          uVar12 = ~uVar28 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar24 = *(FRHIGPUBufferReadback **)
                   ((this->FeedbackReadback).AllocatorInstance.Data +
                   (longlong)(int)uVar28 * 0x10 + 8);
        if ((pFVar24->_padding_ == 0) ||
           ((*(int *)(pFVar24->_padding_ + 0x18) == 0 &&
            (cVar8 = (**(code **)(*(longlong *)pFVar24->_padding_ + 0x20))(), cVar8 != '\0')))) {
          cVar8 = '\x01';
        }
        else {
          cVar8 = '\0';
        }
        if ((pFVar14->_padding_ == 0) ||
           ((*(int *)(pFVar14->_padding_ + 0x18) == 0 &&
            (cVar9 = (**(code **)(*(longlong *)pFVar14->_padding_ + 0x20))(), cVar9 != '\0')))) {
          cVar9 = '\x01';
        }
        else {
          cVar9 = '\0';
        }
        if ((cVar9 != cVar8) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GeometryHandleReadbackBuffer->IsReady() == GeometryCountReadbackBuffer->IsReady()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                               ,0x300,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((pFVar14->_padding_ != 0) &&
            ((param_1 = local_res10, *(int *)(pFVar14->_padding_ + 0x18) != 0 ||
             (cVar8 = (**(code **)(*(longlong *)pFVar14->_padding_ + 0x20))(), param_1 = local_res10
             , cVar8 == '\0')))) ||
           ((pFVar24->_padding_ != 0 &&
            ((param_1 = local_res10, *(int *)(pFVar24->_padding_ + 0x18) != 0 ||
             (cVar8 = (**(code **)(*(longlong *)pFVar24->_padding_ + 0x20))(), param_1 = local_res10
             , cVar8 == '\0')))))) break;
        this->FeedbackReadbackNumPending = this->FeedbackReadbackNumPending - 1;
        puVar25 = FRHIGPUBufferReadback::Lock(pFVar24,4);
        uVar12 = *puVar25;
        uVar31 = (ulonglong)uVar12;
        FRHIGPUBufferReadback::Unlock(pFVar24);
        piVar26 = FRHIGPUBufferReadback::Lock(pFVar14,uVar12 * 4);
        if (uVar12 != 0) {
          do {
            if (*piVar26 == -1) {
              bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5453896197133565171>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                                 ,0x30d,"GeometryHandlesPtr[i] != INDEX_NONE");
              if (bVar7) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else {
              (**(code **)((longlong)*GRayTracingGeometryManager + 0x78))();
            }
            piVar26 = piVar26 + 1;
            uVar31 = uVar31 - 1;
          } while (uVar31 != 0);
        }
        FRHIGPUBufferReadback::Unlock(pFVar14);
        param_1 = local_res10;
        uVar12 = this->FeedbackReadbackNumPending;
      }
      pFVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x30,0x10);
      if (pFVar14 == (FRHIGPUBufferReadback *)0x0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                           ,0x61,L"");
        if (bVar7) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      else {
        pFVar14->_padding_ = 0;
        pFVar14->_padding_ =
             (longlong)&___7__TObject_VFFeedbackReadbackPassParameters___FRDGAllocator__6B_;
        *(undefined4 *)&pFVar14->DestinationStagingBuffers[0].Reference = 0x80;
        pFVar14->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)0x0;
        *(undefined4 *)&pFVar14->DestinationStagingBuffers[2].Reference = 0x80;
        pFVar30 = pFVar14;
      }
      local_350 = pFVar30;
      if ((((FRHIGPUBufferReadback **)param_1->_padding_ <= &local_350) &&
          (&local_350 <
           (FRHIGPUBufferReadback **)param_1->_padding_ +
           *(int *)((longlong)&param_1->_padding_ + 4))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = (int)param_1->_padding_;
      if (iVar10 == *(int *)((longlong)&param_1->_padding_ + 4)) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,(ForAnyElementType *)&param_1->_padding_,
                            (int *)((longlong)&param_1->_padding_ + 4));
      }
      plVar1 = &pFVar30->_padding_;
      *(int *)&param_1->_padding_ = iVar10 + 1;
      puVar25 = &this->FeedbackReadbackWriteIndex;
      *(FRHIGPUBufferReadback **)(param_1->_padding_ + (longlong)iVar10 * 8) = local_350;
      *plVar1 = (longlong)local_328;
      pFVar30->DestinationStagingBuffers[0].Reference =
           (FRHIStagingBuffer *)CONCAT44(uStack_33c,0x80);
      uStack_340 = 0x80;
      pFVar30->DestinationStagingBuffers[1].Reference = (FRHIStagingBuffer *)pFVar22;
      pFVar30->DestinationStagingBuffers[2].Reference =
           (FRHIStagingBuffer *)CONCAT44(uStack_33c,0x80);
      uVar12 = *puVar25;
      uVar28 = uVar29;
      if ((int)uVar12 < (this->FeedbackReadback).ArrayNum) {
        uVar28 = ~uVar12 >> 0x1f;
      }
      local_348 = pFVar22;
      if ((uVar28 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar28 = *puVar25;
      local_res10 = *(FRDGBuilder **)
                     ((this->FeedbackReadback).AllocatorInstance.Data + (longlong)(int)uVar12 * 0x10
                     );
      if ((int)uVar28 < (this->FeedbackReadback).ArrayNum) {
        uVar29 = ~uVar28 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_158.HandleReadbackBuffer = (FRHIGPUBufferReadback *)local_res10;
      local_158.CountReadbackBuffer =
           *(FRHIGPUBufferReadback **)
            ((this->FeedbackReadback).AllocatorInstance.Data + (longlong)(int)uVar28 * 0x10 + 8);
      local_158.PassParameters = (FFeedbackReadbackPassParameters *)plVar1;
      pFVar20 = FRDGEventName::FRDGEventName(&local_68,1,L"FRayTracingScene::FeedbackReadback");
      FRDGBuilder::
      AddPass<FFeedbackReadbackPassParameters,_FRayTracingScene::FinishTracingFeedback_::__l40::<lambda_2>_>
                (param_1,pFVar20,(FFeedbackReadbackPassParameters *)plVar1,Readback,&local_158);
      if (local_68.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_68.FormattedEventName.Data.AllocatorInstance.Data);
      }
      uVar29 = this->MaxReadbackBuffers;
      uVar12 = this->FeedbackReadbackNumPending + 1;
      *puVar25 = (*puVar25 + 1) % uVar29;
      if (uVar12 < uVar29) {
        uVar29 = uVar12;
      }
      this->FeedbackReadbackNumPending = uVar29;
    }
  }
  if (local_258 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_268);
  }
  return;
}

// FreeCachedInstance @ 14538a790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::FreeCachedInstance(FRayTracingScene *this,uint param_1)

{
  undefined4 local_res18;
  
  if (param_1 != 0xffffffff) {
    local_res18 = CONCAT31(local_res18._1_3_,(char)(param_1 >> 0x18));
    FreeCachedInstance(this,(FInstanceHandle)(CONCAT44(param_1,local_res18) & 0xffffffffffffff));
    return;
  }
  return;
}

// FreeCachedInstance @ 14538a7c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::FreeCachedInstance(FRayTracingScene *this,FInstanceHandle param_1)

{
  undefined8 *puVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uStackX_14;
  uint local_68 [2];
  undefined8 local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined2 local_10;
  undefined1 uStack_e;
  undefined5 uStack_d;
  
  if ((this->bCachedInstancesLocked != false) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5453896197133564968>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                         ,0x3d8,"!bCachedInstancesLocked"), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_1.Layer < NUM) {
    uStackX_14 = param_1.Index;
    if (uStackX_14 != 0xffffffff) {
      uVar9 = (ulonglong)param_1 & 0xff;
      if (((this->Layers).ArrayNum <= (int)uVar9) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->Layers).AllocatorInstance.Data;
      local_60 = 0;
      local_50 = 0;
      uStack_48 = 0;
      uStack_38 = 0;
      local_30 = 0;
      uStack_28 = 0;
      local_20 = 0;
      uStack_18 = 0;
      uStack_e = 0;
      uVar8 = 0;
      if ((int)uStackX_14 < *(int *)(pFVar2 + uVar9 * 0x70 + 0x28)) {
        uVar8 = ~uStackX_14 >> 0x1f;
      }
      uStack_58 = 0xffffffff;
      local_40 = 0xffffffff;
      local_10 = 0xff00;
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar3 = *(longlong *)(pFVar2 + uVar9 * 0x70 + 0x20);
      local_68[0] = uStackX_14;
      lVar7 = (longlong)(int)uStackX_14 * 0x58;
      *(undefined8 *)(lVar7 + lVar3) = local_60;
      ((undefined8 *)(lVar7 + lVar3))[1] = CONCAT44(uStack_54,uStack_58);
      puVar1 = (undefined8 *)(lVar7 + 0x10 + lVar3);
      *puVar1 = local_50;
      puVar1[1] = CONCAT44(uStack_44,uStack_48);
      puVar1 = (undefined8 *)(lVar7 + 0x20 + lVar3);
      *puVar1 = CONCAT44(uStack_3c,local_40);
      puVar1[1] = uStack_38;
      puVar1 = (undefined8 *)(lVar7 + 0x30 + lVar3);
      *puVar1 = CONCAT44(uStack_2c,local_30);
      puVar1[1] = uStack_28;
      puVar1 = (undefined8 *)(lVar7 + 0x40 + lVar3);
      *puVar1 = local_20;
      puVar1[1] = CONCAT44(uStack_14,uStack_18);
      *(ulonglong *)(lVar7 + 0x50 + lVar3) = CONCAT53(uStack_d,CONCAT12(uStack_e,local_10));
      if (((*(uint **)(pFVar2 + uVar9 * 0x70 + 0x40) <= local_68) &&
          (local_68 <
           *(uint **)(pFVar2 + uVar9 * 0x70 + 0x40) + *(int *)(pFVar2 + uVar9 * 0x70 + 0x4c))) &&
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
      iVar6 = *(int *)(pFVar2 + uVar9 * 0x70 + 0x48);
      if (iVar6 == *(int *)(pFVar2 + uVar9 * 0x70 + 0x4c)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)(pFVar2 + uVar9 * 0x70 + 0x40),
                           (int *)(pFVar2 + uVar9 * 0x70 + 0x4c));
      }
      *(int *)(pFVar2 + uVar9 * 0x70 + 0x48) = iVar6 + 1;
      *(uint *)(*(longlong *)(pFVar2 + uVar9 * 0x70 + 0x40) + (longlong)iVar6 * 4) = local_68[0];
      *(int *)(pFVar2 + uVar9 * 0x70 + 0x50) = *(int *)(pFVar2 + uVar9 * 0x70 + 0x50) + -1;
    }
  }
  return;
}

// GetCachedInstanceGeometry @ 14538cc50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIRayTracingGeometry * __thiscall
FRayTracingScene::GetCachedInstanceGeometry(FRayTracingScene *this,uint param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  FRHIRayTracingGeometry *pFVar6;
  
  bVar3 = (byte)(param_1 >> 0x18);
  if ((this->Layers).ArrayNum <= (int)(uint)bVar3) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRHIRayTracingGeometry *)(*pcVar2)();
      return pFVar6;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)(param_1 & 0xffffff) < *(int *)(pFVar1 + (ulonglong)bVar3 * 0x70 + 0x28)) {
    uVar5 = ~(param_1 & 0xffffff) >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FRHIRayTracingGeometry *)(*pcVar2)();
      return pFVar6;
    }
  }
  return *(FRHIRayTracingGeometry **)
          ((longlong)(int)(param_1 & 0xffffff) * 0x58 +
          *(longlong *)(pFVar1 + (ulonglong)bVar3 * 0x70 + 0x20));
}

// GetCachedInstanceGeometry @ 14538cd50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIRayTracingGeometry * __thiscall
FRayTracingScene::GetCachedInstanceGeometry(FRayTracingScene *this,FInstanceHandle param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIRayTracingGeometry *pFVar4;
  ulonglong uVar5;
  uint uStackX_14;
  
  uVar5 = (ulonglong)param_1 & 0xff;
  if ((this->Layers).ArrayNum <= (int)uVar5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIRayTracingGeometry *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uStackX_14 = param_1.Index;
  if ((longlong)param_1 < 0 || *(int *)(pFVar1 + uVar5 * 0x70 + 0x28) <= (int)uStackX_14) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRHIRayTracingGeometry *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FRHIRayTracingGeometry **)
          ((longlong)(int)uStackX_14 * 0x58 + *(longlong *)(pFVar1 + uVar5 * 0x70 + 0x20));
}

// GetInstanceHitCountBufferUAV @ 14538dab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferUAV * __thiscall
FRayTracingScene::GetInstanceHitCountBufferUAV
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRDGBufferUAV *pFVar4;
  uint uVar5;
  
  if (this->bTracingFeedbackEnabled == false) {
    return (FRDGBufferUAV *)0x0;
  }
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGBufferUAV *)(*pcVar2)();
      return pFVar4;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar5 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar5 = ~param_2.Index >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FRDGBufferUAV *)(*pcVar2)();
      return pFVar4;
    }
  }
  return *(FRDGBufferUAV **)
          ((longlong)(int)param_2.Index * 0x188 + 0x130 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58));
}

// GetLayerView @ 14538dbd0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRDGBufferSRV * __thiscall
FRayTracingScene::GetLayerView
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRDGBufferSRV *pFVar5;
  longlong lVar6;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBufferSRV *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBufferSRV *)(*pcVar2)();
      return pFVar5;
    }
  }
  lVar6 = (longlong)(int)param_2.Index * 0x188 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58);
  if (*(longlong *)(lVar6 + 0x150) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("LayerView.RayTracingSceneBufferSRV",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x39c,
                       L"Ray tracing scene SRV was not created. Perhaps Update() was not called.");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRDGBufferSRV *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FRDGBufferSRV **)(lVar6 + 0x150);
}

// GetNumNativeInstances @ 14538dd30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

uint __thiscall
FRayTracingScene::GetNumNativeInstances
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar5 = (longlong)(int)param_2.Index * 0x188 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58);
  if (this->bInitializationDataBuilt == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInitializationDataBuilt",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x3a8,
                       L"Must call BuildInitializationData() or Update() before using GetNumNativeInstances()."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(int *)(lVar5 + 100) + *(int *)(lVar5 + 0x60);
}

// GetRHIRayTracingScene @ 14538e330

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIRayTracingScene * __thiscall
FRayTracingScene::GetRHIRayTracingScene
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRHIRayTracingScene *pFVar5;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar2)();
      return pFVar5;
    }
  }
  return *(FRHIRayTracingScene **)
          ((longlong)(int)param_2.Index * 0x188 + 0x108 +
          *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58));
}

// GetRHIRayTracingSceneChecked @ 14538e400

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FRHIRayTracingScene * __thiscall
FRayTracingScene::GetRHIRayTracingSceneChecked
          (FRayTracingScene *this,ERayTracingSceneLayer param_1,FViewHandle param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRHIRayTracingScene *pFVar5;
  
  if ((this->Layers).ArrayNum <= (int)(uint)param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  uVar4 = 0;
  if ((int)param_2.Index < *(int *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x60)) {
    uVar4 = ~param_2.Index >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar2)();
      return pFVar5;
    }
  }
  pFVar5 = *(FRHIRayTracingScene **)
            ((longlong)(int)param_2.Index * 0x188 + 0x108 +
            *(longlong *)(pFVar1 + (ulonglong)param_1 * 0x70 + 0x58));
  if (pFVar5 == (FRHIRayTracingScene *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Result",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x38e,L"Ray tracing scene was not created. Perhaps Update() was not called."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FRHIRayTracingScene *)(*pcVar2)();
      return pFVar5;
    }
  }
  return pFVar5;
}

// IsCreated @ 14539c630

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FRayTracingScene::IsCreated(FRayTracingScene *this)

{
  return this->bUsedThisFrame;
}

// MarkInstanceVisible @ 14539c910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::MarkInstanceVisible(FRayTracingScene *this,uint param_1,FViewHandle param_2)

{
  undefined4 local_res20;
  
  local_res20 = CONCAT31(local_res20._1_3_,(char)(param_1 >> 0x18));
  MarkInstanceVisible(this,(FInstanceHandle)(CONCAT44(param_1,local_res20) & 0xffffffffffffff),
                      param_2);
  return;
}

// MarkInstanceVisible @ 14539c940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::MarkInstanceVisible
          (FRayTracingScene *this,FInstanceHandle param_1,FViewHandle param_2)

{
  uchar *puVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  TBitArray<FDefaultBitArrayAllocator> *pTVar8;
  uint uStackX_14;
  
  uVar7 = (ulonglong)param_1 & 0xff;
  if ((this->Layers).ArrayNum <= (int)uVar7) {
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
  pFVar2 = (this->Layers).AllocatorInstance.Data;
  uStackX_14 = param_1.Index;
  if ((longlong)param_1 < 0 || *(int *)(pFVar2 + uVar7 * 0x70 + 0x28) <= (int)uStackX_14) {
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
  if (*(longlong *)((longlong)(int)uStackX_14 * 0x58 + *(longlong *)(pFVar2 + uVar7 * 0x70 + 0x20))
      == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Layer.Instances[Handle.Index].GeometryRHI != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                       ,0x438,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = 0;
  if ((int)param_2.Index < *(int *)(pFVar2 + uVar7 * 0x70 + 0x60)) {
    uVar6 = ~param_2.Index >> 0x1f;
  }
  if (uVar6 == 0) {
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
  lVar5 = (longlong)(int)param_2.Index * 0x188 + *(longlong *)(pFVar2 + uVar7 * 0x70 + 0x58);
  if (*(int *)(lVar5 + 0x178) < (int)(uStackX_14 + 1)) {
    TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
              ((TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x160),uStackX_14 + 1,false);
  }
  if (((longlong)param_1 < 0) || (*(int *)(lVar5 + 0x178) <= (int)uStackX_14)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index>=0 && Index<NumBits",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                       ,0x5be,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar8 = *(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x170);
  if (*(TBitArray<FDefaultBitArrayAllocator> **)(lVar5 + 0x170) ==
      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
    pTVar8 = (TBitArray<FDefaultBitArrayAllocator> *)(lVar5 + 0x160);
  }
  puVar1 = (pTVar8->AllocatorInstance).InlineData +
           (longlong)((int)(uStackX_14 + ((int)uStackX_14 >> 0x1f & 0x1fU)) >> 5) * 4;
  *(uint *)puVar1 = *(uint *)puVar1 | 1 << ((byte)param_1.Index & 0x1f);
  return;
}

// PostRender @ 14539ddb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRayTracingScene::PostRender(FRayTracingScene *this,FRDGBuilder *param_1,ERDGPassFlags param_2)

{
  FinishTracingFeedback(this,param_1,param_2);
  FinishStats(this,param_1,param_2);
  return;
}

// ReleaseFeedbackReadbackBuffers @ 14539faf0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::ReleaseFeedbackReadbackBuffers(FRayTracingScene *this)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  iVar3 = (this->FeedbackReadback).ArrayNum;
  pFVar8 = (this->FeedbackReadback).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->FeedbackReadback).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRayTracingScene::FFeedbackReadbackData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar7) break;
    puVar4 = *(undefined8 **)pFVar8;
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4 + 0xb;
      lVar5 = 8;
      do {
        puVar1 = puVar6 + -1;
        puVar6 = puVar6 + -1;
        lVar5 = lVar5 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar5 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
    }
    puVar4 = *(undefined8 **)(pFVar8 + 8);
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4 + 0xb;
      lVar5 = 8;
      do {
        puVar1 = puVar6 + -1;
        puVar6 = puVar6 + -1;
        lVar5 = lVar5 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar5 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  piVar2 = &(this->FeedbackReadback).ArrayMax;
  (this->FeedbackReadback).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->FeedbackReadback).AllocatorInstance,0,piVar2);
  }
  this->FeedbackReadbackWriteIndex = 0;
  this->FeedbackReadbackNumPending = 0;
  return;
}

// ReleaseReadbackBuffers @ 14539fc80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::ReleaseReadbackBuffers(FRayTracingScene *this)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  
  iVar3 = (this->StatsReadback).ArrayNum;
  pFVar8 = (this->StatsReadback).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->StatsReadback).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FRayTracingScene::FStatsReadbackData,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar8 == pFVar7) break;
    puVar4 = *(undefined8 **)pFVar8;
    if (puVar4 != (undefined8 *)0x0) {
      puVar6 = puVar4 + 0xb;
      lVar5 = 8;
      do {
        puVar1 = puVar6 + -1;
        puVar6 = puVar6 + -1;
        lVar5 = lVar5 + -1;
        if ((FRHIResource *)*puVar1 != (FRHIResource *)0x0) {
          FRHIResource::Release((FRHIResource *)*puVar1);
        }
      } while (lVar5 != 0);
      *puVar4 = &___7FRHIGPUMemoryReadback__6B_;
      if ((FRHIResource *)puVar4[1] != (FRHIResource *)0x0) {
        FRHIResource::Release((FRHIResource *)puVar4[1]);
      }
      ::operator_delete(puVar4,0x58);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  piVar2 = &(this->StatsReadback).ArrayMax;
  (this->StatsReadback).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(this->StatsReadback).AllocatorInstance,0,piVar2);
  }
  this->StatsReadbackWriteIndex = 0;
  this->StatsReadbackNumPending = 0;
  return;
}

// RemoveView @ 1453a0cf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::RemoveView(FRayTracingScene *this,uint param_1)

{
  int *piVar1;
  FRayTracingInstanceBufferBuilder *pFVar2;
  double *pdVar3;
  uint uVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined8 *puVar7;
  void *pvVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  FRayTracingScene *pFVar11;
  void *pvVar12;
  bool bVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined1 *puVar17;
  FRayTracingInstanceBufferBuilder *this_00;
  FRayTracingGeometryInstance *pFVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  FRayTracingGeometryInstance *pFVar22;
  FRayTracingGeometryInstance *pFVar23;
  undefined1 auStack_268 [32];
  ulonglong local_248;
  longlong local_240;
  uint local_238;
  uint local_234;
  uint local_230;
  ulonglong local_228;
  FRayTracingScene *local_220;
  longlong local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  FRayTracingInstanceBufferBuilder local_1e8;
  undefined1 local_e0 [72];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88 [2];
  void *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  int local_64;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_268;
  if (*(int *)&(this->ViewIndexMap).field_0x8 != *(int *)&(this->ViewIndexMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->ViewIndexMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->ViewIndexMap).field_0x38;
    }
    iVar14 = *(int *)(puVar17 +
                     (ulonglong)(*(int *)&(this->ViewIndexMap).field_0x48 - 1U & param_1) * 4);
    if (iVar14 != -1) {
      lVar5 = *(longlong *)&this->ViewIndexMap;
      do {
        if (*(uint *)(lVar5 + (longlong)iVar14 * 0x10) == param_1) {
          local_230 = param_1;
          local_220 = this;
          puVar16 = (uint *)TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                            ::FindChecked((TMapBase<unsigned_int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>_>
                                           *)&this->ViewIndexMap,param_1);
          uVar4 = *puVar16;
          uVar19 = (ulonglong)(int)uVar4;
          local_238 = uVar4;
          local_228 = uVar19;
          if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)&(this->ActiveViews).field_0x28)) {
            if ((*(int *)&(this->ActiveViews).field_0x28 <= (int)uVar4) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Index>=0 && Index<NumBits",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                    ,0x5c6,L""), bVar13)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            puVar17 = *(undefined1 **)&(this->ActiveViews).field_0x20;
            if (puVar17 == (undefined1 *)0x0) {
              puVar17 = &(this->ActiveViews).field_0x10;
            }
            if (((*(uint *)(puVar17 +
                           (longlong)((int)(uVar4 + ((int)uVar4 >> 0x1f & 0x1fU)) >> 5) * 4) >>
                  (uVar4 & 0x1f) & 1) != 0) &&
               (*(uint *)(*(longlong *)&this->ActiveViews + uVar19 * 8) == uVar4))
            goto LAB_1453a0e6c;
          }
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("ActiveViews.IsValidIndex(ViewIndex) && ActiveViews[ViewIndex] == ViewIndex"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                              ,0xc0,L"");
          if (bVar13) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
LAB_1453a0e6c:
          pFVar18 = (FRayTracingGeometryInstance *)0x0;
          local_234 = ~uVar4 >> 0x1f;
          local_218 = uVar19 * 0x188;
          uVar20 = uVar19;
          pFVar22 = pFVar18;
          while( true ) {
            uVar4 = local_234;
            iVar14 = (this->Layers).ArrayNum;
            iVar21 = (int)pFVar22;
            if (iVar14 <= iVar21) {
              local_248 = (ulonglong)iVar21;
              local_240 = (longlong)iVar14;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
            }
            local_1e8.Instances.DataPtr = (FRayTracingGeometryInstance *)0x0;
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0xc] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0xd] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0xe] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0xf] = '\0';
            local_1e8.PreViewTranslation.field0_0x0._s_0.Z = 0.0;
            local_1e8.Data._27_4_ = 0;
            local_1e8.Data._31_1_ = 0;
            local_1e8.AccelerationStructureAddressesBuffer.NumBytes = 0;
            local_1e8.AccelerationStructureAddressesBuffer._20_4_ = 0;
            local_1e8.bUseLightingChannels = false;
            local_1e8.bForceOpaque = false;
            local_1e8.bDisableTriangleCull = false;
            local_e0._40_4_ = 0;
            local_e0._44_4_ = 0;
            local_1e8.PreViewTranslation.field0_0x0._s_0.X = 0.0;
            local_1e8.PreViewTranslation.field0_0x0._s_0.Y = 0.0;
            local_1e8.Instances._12_4_ = 0;
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[1] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[2] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[3] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[4] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[5] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[6] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[7] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[8] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[9] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[10] = '\0';
            local_1e8.VisibleInstances.AllocatorInstance.InlineData[0xb] = '\0';
            local_1e8._75_8_ = 0;
            local_1e8.Data._3_8_ = 0;
            local_1e8.Instances.ArrayNum = 0;
            pFVar6 = (this->Layers).AllocatorInstance.Data;
            local_1e8.Data._11_8_ = 0;
            local_1e8.Data._19_8_ = 0;
            local_1e8.VisibleInstances.AllocatorInstance.SecondaryData =
                 (ForElementType<unsigned_int>)0x0;
            local_1e8.VisibleInstances.NumBits = 0;
            iVar14 = *(int *)(pFVar6 + (longlong)iVar21 * 0x70 + 0x60);
            local_1e8.VisibleInstances.MaxBits = 0x80;
            local_1e8.Data.InstanceGeometryIndices.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            uVar15 = 0;
            if ((int)uVar19 < iVar14) {
              uVar15 = uVar4;
            }
            local_1e8.Data.InstanceGeometryIndices.ArrayNum = 0;
            local_1e8.Data.InstanceGeometryIndices.ArrayMax = 0;
            local_1e8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1e8.Data.BaseUploadBufferOffsets.ArrayNum = 0;
            local_1e8.Data.BaseUploadBufferOffsets.ArrayMax = 0;
            local_1e8.Data.BaseInstancePrefixSum.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1e8.Data.BaseInstancePrefixSum.ArrayNum = 0;
            local_1e8.Data.BaseInstancePrefixSum.ArrayMax = 0;
            local_1e8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1e8.Data.InstanceGroupEntryRefs.ArrayNum = 0;
            local_1e8.Data.InstanceGroupEntryRefs.ArrayMax = 0;
            local_1e8.Data.ReferencedGeometries.AllocatorInstance.Data =
                 (FScriptContainerElement *)0x0;
            local_1e8.Data.ReferencedGeometries.ArrayNum = 0;
            local_1e8.Data.ReferencedGeometries.ArrayMax = 0;
            local_1e8.InstanceGroupUploadBuffer.Reference = (FRHIBuffer *)0x0;
            local_1e8.InstanceGroupUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
            local_1e8.InstanceUploadBuffer.Reference = (FRHIBuffer *)0x0;
            local_1e8.InstanceUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
            local_1e8.TransformUploadBuffer.Reference = (FRHIBuffer *)0x0;
            local_1e8.TransformUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
            local_1e8.AccelerationStructureAddressesBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
            local_1e8.AccelerationStructureAddressesBuffer.SRV.Reference =
                 (FRHIShaderResourceView *)0x0;
            local_e0._0_8_ = (FRayTracingGeometryInstance *)0x0;
            local_e0._8_8_ = 0;
            local_e0[0x10] = '\0';
            local_e0[0x11] = '\0';
            local_e0[0x12] = '\0';
            local_e0[0x13] = '\0';
            local_e0[0x14] = '\0';
            local_e0[0x15] = '\0';
            local_e0[0x16] = '\0';
            local_e0[0x17] = '\0';
            local_e0[0x18] = '\0';
            local_e0[0x19] = '\0';
            local_e0[0x1a] = '\0';
            local_e0[0x1b] = '\0';
            local_e0[0x1c] = '\0';
            local_e0[0x1d] = '\0';
            local_e0[0x1e] = '\0';
            local_e0[0x1f] = '\0';
            local_e0._32_8_ = (ForElementType<unsigned_int>)0x0;
            local_e0._48_8_ = 0.0;
            local_e0._56_8_ = (FRayTracingGeometryInstance *)0x0;
            local_e0._64_8_ = 0.0;
            local_98._0_1_ = false;
            local_98._1_1_ = false;
            local_98._2_1_ = false;
            local_98._3_5_ = 0;
            uStack_90._0_4_ = 0;
            uStack_90._4_4_ = 0;
            local_78 = (void *)0x0;
            local_70 = 0;
            uStack_6c = 0x80;
            iStack_68 = 0;
            local_64 = 0;
            if ((uVar15 == 0) &&
               (local_248 = uVar20, local_240 = (longlong)iVar14,
               bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) break;
            this_00 = (FRayTracingInstanceBufferBuilder *)
                      (local_218 + *(longlong *)(pFVar6 + (longlong)iVar21 * 0x70 + 0x58));
            FRayTracingInstanceBufferBuilder::operator=(this_00,&local_1e8);
            pFVar2 = this_00 + 1;
            pFVar22 = (FRayTracingGeometryInstance *)local_e0._0_8_;
            if (pFVar2 != (FRayTracingInstanceBufferBuilder *)local_e0) {
              pFVar23 = (pFVar2->Instances).DataPtr;
              (pFVar2->Instances).DataPtr = (FRayTracingGeometryInstance *)local_e0._0_8_;
              local_e0._0_8_ = (FRayTracingGeometryInstance *)0x0;
              pFVar22 = pFVar18;
              if (pFVar23 != (FRayTracingGeometryInstance *)0x0) {
                FRHIResource::Release((FRHIResource *)pFVar23);
              }
            }
            pdVar3 = (double *)((longlong)&this_00[1].PreViewTranslation.field0_0x0 + 8);
            *(undefined8 *)&this_00[1].Instances.ArrayNum = local_e0._8_8_;
            *(undefined8 *)this_00[1].VisibleInstances.AllocatorInstance.InlineData =
                 local_e0._16_8_;
            *(undefined8 *)(this_00[1].VisibleInstances.AllocatorInstance.InlineData + 8) =
                 local_e0._24_8_;
            this_00[1].VisibleInstances.AllocatorInstance.SecondaryData =
                 (ForElementType<unsigned_int>)local_e0._32_8_;
            this_00[1].VisibleInstances.NumBits = local_e0._40_4_;
            this_00[1].VisibleInstances.MaxBits = local_e0._44_4_;
            this_00[1].PreViewTranslation.field0_0x0._s_0.X = (double)local_e0._48_8_;
            pFVar23 = (FRayTracingGeometryInstance *)local_e0._56_8_;
            if (pdVar3 != (double *)(local_e0 + 0x38)) {
              puVar7 = (undefined8 *)*pdVar3;
              *pdVar3 = (double)local_e0._56_8_;
              local_e0._56_8_ = (FRayTracingGeometryInstance *)0x0;
              pFVar23 = pFVar18;
              if (puVar7 != (undefined8 *)0x0) {
                piVar1 = (int *)(puVar7 + 1);
                LOCK();
                iVar14 = *piVar1;
                *piVar1 = *piVar1 + -1;
                UNLOCK();
                if ((iVar14 == 1) &&
                   (pFVar23 = (FRayTracingGeometryInstance *)0x0, piVar1 != (int *)0x0)) {
                  (**(code **)*puVar7)(puVar7,1);
                }
              }
            }
            pvVar12 = local_78;
            this_00[1].PreViewTranslation.field0_0x0._s_0.Z = (double)local_e0._64_8_;
            this_00[1].bUseLightingChannels = local_98._0_1_;
            this_00[1].bForceOpaque = local_98._1_1_;
            this_00[1].bDisableTriangleCull = local_98._2_1_;
            *(undefined5 *)&this_00[1].field_0x4b = local_98._3_5_;
            this_00[1].Data.NumGPUInstanceGroups = (uint)uStack_90;
            this_00[1].Data.NumCPUInstanceGroups = uStack_90._4_4_;
            if (&this_00[1].Data.NumGPUInstanceDescriptors != (uint *)local_88) {
              if (local_78 == (void *)0x0) {
                this_00[1].Data.NumGPUInstanceDescriptors = (uint)local_88[0];
                this_00[1].Data.NumCPUInstanceDescriptors = local_88[0]._4_4_;
                this_00[1].Data.NumNativeGPUSceneInstances = (uint)local_88[1];
                this_00[1].Data.NumNativeCPUInstances = local_88[1]._4_4_;
              }
              pvVar8 = *(void **)&this_00[1].Data.TotalNumSegments;
              if (pvVar8 != (void *)0x0) {
                FMemory::Free(pvVar8);
              }
              *(void **)&this_00[1].Data.TotalNumSegments = pvVar12;
              *(undefined4 *)&this_00[1].Data.InstanceGeometryIndices.AllocatorInstance.Data =
                   local_70;
              *(undefined4 *)
               ((longlong)&this_00[1].Data.InstanceGeometryIndices.AllocatorInstance.Data + 4) =
                   uStack_6c;
              local_70 = 0;
              uStack_6c = 0;
              local_78 = (void *)0x0;
              uVar20 = local_228;
            }
            this_00[1].Data.InstanceGeometryIndices.ArrayNum = iStack_68;
            this_00[1].Data.InstanceGeometryIndices.ArrayMax = local_64;
            if (local_78 != (void *)0x0) {
              FMemory::Free(local_78);
            }
            if (pFVar23 != (FRayTracingGeometryInstance *)0x0) {
              piVar1 = &pFVar23->InstanceContributionToHitGroupIndex;
              LOCK();
              iVar14 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (((iVar14 == 1) && (piVar1 != (int *)0x0)) &&
                 (pFVar23 != (FRayTracingGeometryInstance *)0x0)) {
                (*(code *)pFVar23->GeometryRHI->_padding_)(pFVar23,1);
              }
            }
            if (pFVar22 != (FRayTracingGeometryInstance *)0x0) {
              FRHIResource::Release((FRHIResource *)pFVar22);
            }
            if (local_1e8.AccelerationStructureAddressesBuffer.SRV.Reference !=
                (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release
                        ((FRHIResource *)
                         local_1e8.AccelerationStructureAddressesBuffer.SRV.Reference);
            }
            if (local_1e8.AccelerationStructureAddressesBuffer.Buffer.Reference != (FRHIBuffer *)0x0
               ) {
              FRHIResource::Release
                        ((FRHIResource *)
                         local_1e8.AccelerationStructureAddressesBuffer.Buffer.Reference);
            }
            if (local_1e8.TransformUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.TransformUploadSRV.Reference);
            }
            if (local_1e8.TransformUploadBuffer.Reference != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.TransformUploadBuffer.Reference);
            }
            if (local_1e8.InstanceUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.InstanceUploadSRV.Reference);
            }
            if (local_1e8.InstanceUploadBuffer.Reference != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.InstanceUploadBuffer.Reference);
            }
            if (local_1e8.InstanceGroupUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.InstanceGroupUploadSRV.Reference);
            }
            if (local_1e8.InstanceGroupUploadBuffer.Reference != (FRHIBuffer *)0x0) {
              FRHIResource::Release((FRHIResource *)local_1e8.InstanceGroupUploadBuffer.Reference);
            }
            if (local_1e8.Data.ReferencedGeometries.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.ReferencedGeometries.AllocatorInstance.Data);
            }
            if (local_1e8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data);
            }
            if (local_1e8.Data.BaseInstancePrefixSum.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.BaseInstancePrefixSum.AllocatorInstance.Data);
            }
            if (local_1e8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data);
            }
            if (local_1e8.Data.InstanceGeometryIndices.AllocatorInstance.Data !=
                (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1e8.Data.InstanceGeometryIndices.AllocatorInstance.Data);
            }
            if (local_1e8.VisibleInstances.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_int>)0x0) {
              FMemory::Free((void *)local_1e8.VisibleInstances.AllocatorInstance.SecondaryData);
            }
            pFVar11 = local_220;
            uVar4 = local_238;
            uVar19 = (ulonglong)local_238;
            pFVar22 = (FRayTracingGeometryInstance *)(ulonglong)(iVar21 + 1U);
            this = local_220;
            if (2 < iVar21 + 1U) {
              iVar14 = (local_220->ViewParameters).ArrayNum;
              local_210 = 0;
              uStack_208 = 0;
              uVar15 = 0;
              if ((int)local_238 < iVar14) {
                uVar15 = local_234;
              }
              local_200 = 0;
              uStack_1f8 = 0;
              if ((uVar15 == 0) &&
                 (local_248 = uVar20, local_240 = (longlong)iVar14,
                 bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar13)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              pFVar9 = (pFVar11->ViewParameters).AllocatorInstance.Data;
              pFVar6 = pFVar9 + uVar20 * 0x20;
              *(undefined8 *)pFVar6 = 0;
              *(undefined8 *)(pFVar6 + 8) = 0;
              pFVar9 = pFVar9 + uVar20 * 0x20 + 0x10;
              *(undefined8 *)pFVar9 = 0;
              *(undefined8 *)(pFVar9 + 8) = 0;
              TSparseArray<int,FDefaultSparseArrayAllocator>::RemoveAt
                        (&pFVar11->ActiveViews,uVar4,1);
              TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
              ::Remove((TSet<TTuple<unsigned_int,int>,TDefaultMapHashableKeyFuncs<unsigned_int,int,0>,FDefaultSetAllocator>
                        *)&pFVar11->ViewIndexMap,local_230);
              return;
            }
          }
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar14 = *(int *)(lVar5 + 8 + (longlong)iVar14 * 0x10);
      } while (iVar14 != -1);
    }
  }
  return;
}

// Reset @ 1453a5220

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall FRayTracingScene::Reset(FRayTracingScene *this)

{
  int *piVar1;
  FRHIResource **ppFVar2;
  FTaskHandle *pFVar3;
  atomic<unsigned_int> *paVar4;
  FRayTracingInstanceBufferBuilder *pFVar5;
  double *pdVar6;
  atomic<unsigned_int> aVar7;
  FRayTracingGeometryInstance *this_00;
  undefined8 *puVar8;
  void *pvVar9;
  longlong lVar10;
  FScriptContainerElement *pFVar11;
  FRHIResource *pFVar12;
  FTaskBase *pFVar13;
  code *pcVar14;
  byte bVar15;
  TArray<FRayTracingScene::FLayer,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  void *pvVar26;
  ulonglong uVar27;
  FRHIResource **ppFVar28;
  FScriptContainerElement *pFVar29;
  FRayTracingInstanceBufferBuilder *this_01;
  ulong64 uVar30;
  undefined8 *puVar31;
  FRHIResource *pFVar32;
  uint uVar33;
  FRHIResource *pFVar34;
  longlong lVar35;
  FRHIResource *pFVar36;
  FRayTracingScene *pFVar37;
  FRHIResource *pFVar38;
  FRayTracingGeometryInstance *this_02;
  FScriptContainerElement *pFVar39;
  FRHIResource *pFVar40;
  undefined1 auStackY_3b8 [32];
  undefined1 local_378 [4];
  uint local_374;
  uint local_370;
  TArray<FRayTracingScene::FLayer,TSizedDefaultAllocator<32>_> *local_368;
  longlong local_360;
  TArray<int,TSizedDefaultAllocator<32>_> *local_358;
  FRayTracingScene *local_350;
  undefined1 *local_348;
  FScriptContainerElement *local_340;
  FScriptContainerElement *local_338;
  undefined8 local_328;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  void *local_308;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined2 local_2e0;
  undefined1 local_2de;
  undefined1 local_2dd [8];
  undefined8 uStack_2d5;
  undefined8 local_2cd;
  undefined8 uStack_2c5;
  undefined4 local_2bd;
  undefined1 local_2b9;
  void *local_2b8;
  undefined8 local_2b0;
  void *local_2a8;
  undefined8 local_2a0;
  void *local_298;
  undefined8 local_290;
  void *local_288;
  undefined8 local_280;
  void *local_278;
  undefined8 local_270;
  FRHIResource *local_268;
  FRHIResource *pFStack_260;
  FRHIResource *local_258;
  FRHIResource *pFStack_250;
  FRHIResource *local_248;
  FRHIResource *pFStack_240;
  FRHIResource *local_238;
  FRHIResource *pFStack_230;
  undefined8 local_228;
  longlong local_218;
  TArray<FRayTracingScene::FLayer,TSizedDefaultAllocator<32>_> *local_210;
  undefined1 *local_208;
  longlong local_200 [5];
  FRayTracingInstanceBufferBuilder local_1d8;
  undefined1 local_d0 [72];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78 [2];
  void *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  int iStack_58;
  int local_54;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_3b8;
  local_358 = &this->TransientViewIndices;
  puVar24 = &(this->ActiveViews).field_0x10;
  local_370 = (this->TransientViewIndices).ArrayNum;
  uVar27 = (ulonglong)(int)local_370;
  local_368 = &this->Layers;
  pFVar29 = (local_358->AllocatorInstance).Data;
  local_340 = pFVar29 + uVar27 * 4;
  local_350 = this;
  local_210 = local_368;
  local_208 = puVar24;
  do {
    puVar25 = local_208;
    pTVar16 = local_210;
    pFVar39 = local_340;
    local_338 = pFVar29;
    if (local_358->ArrayNum != (int)uVar27) {
      local_378[0] = 0;
      local_348 = puVar24;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_378);
      puVar24 = puVar25;
      local_368 = pTVar16;
    }
    local_348 = puVar24;
    if (pFVar29 == pFVar39) {
      local_358->ArrayNum = 0;
      if (local_358->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&local_358->AllocatorInstance,0,&local_358->ArrayMax);
        local_368 = pTVar16;
      }
      local_370 = 0;
      do {
        pTVar16 = local_368;
        uVar33 = local_370;
        uVar30 = 0;
        if ((local_368->ArrayNum <= (int)local_370) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar39 = (pTVar16->AllocatorInstance).Data + (longlong)(int)uVar33 * 0x70;
        uVar33 = *(uint *)(pFVar39 + 0x28);
        pFVar29 = pFVar39 + 0x28;
        uVar19 = *(uint *)(pFVar39 + 0x50) + *(uint *)(pFVar39 + 0x48);
        local_360 = CONCAT44(local_360._4_4_,uVar19);
        local_340 = pFVar39;
        if ((int)uVar33 < (int)uVar19) {
          iVar23 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x58,8,uVar19 - uVar33,(ForAnyElementType *)(pFVar39 + 0x20),
                              (int *)pFVar29,(int *)(pFVar39 + 0x2c));
          DefaultConstructItems<FRayTracingGeometryInstance,int>
                    ((void *)((longlong)iVar23 * 0x58 + *(longlong *)(pFVar39 + 0x20)),
                     uVar19 - uVar33);
        }
        else {
          if ((int)uVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
          }
          if ((int)uVar19 < (int)uVar33) {
            uVar33 = uVar33 - uVar19;
            if (((int)(uVar19 | uVar33) < 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar18)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if (uVar33 != 0) {
              pvVar26 = (void *)((longlong)(int)uVar19 * 0x58 + *(longlong *)(pFVar39 + 0x20));
              iVar23 = (*(uint *)pFVar29 - uVar19) - uVar33;
              if (iVar23 != 0) {
                memmove(pvVar26,(void *)((longlong)(int)uVar33 * 0x58 + (longlong)pvVar26),
                        (longlong)iVar23 * 0x58);
              }
              *(uint *)pFVar29 = *(uint *)pFVar29 - uVar33;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x58,8,(ForAnyElementType *)(pFVar39 + 0x20),*(uint *)pFVar29,
                         (int *)(pFVar39 + 0x2c));
            }
          }
        }
        pFVar37 = local_350;
        uVar33 = *(uint *)(pFVar39 + 0x38);
        pFVar29 = pFVar39 + 0x38;
        if (local_350->bInstanceDebugDataEnabled != false) {
          uVar30 = (ulong64)uVar19;
        }
        uVar21 = (uint)uVar30;
        if ((int)uVar33 < (int)uVar21) {
          iVar23 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x10,8,uVar21 - uVar33,(ForAnyElementType *)(pFVar39 + 0x30),
                              (int *)pFVar29,(int *)(pFVar39 + 0x3c));
          DefaultConstructItems<FRayTracingInstanceDebugData,int>
                    ((void *)((longlong)iVar23 * 0x10 + *(longlong *)(pFVar39 + 0x30)),
                     uVar21 - uVar33);
        }
        else {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum(uVar30);
          }
          if ((int)uVar21 < (int)uVar33) {
            uVar33 = uVar33 - uVar21;
            if (((int)(uVar33 | uVar21) < 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar18)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if (uVar33 != 0) {
              pvVar26 = (void *)((longlong)(int)uVar21 * 0x10 + *(longlong *)(pFVar39 + 0x30));
              iVar23 = (*(uint *)pFVar29 - uVar21) - uVar33;
              if (iVar23 != 0) {
                memmove(pvVar26,(void *)((longlong)(int)uVar33 * 0x10 + (longlong)pvVar26),
                        (longlong)iVar23 << 4);
              }
              *(uint *)pFVar29 = *(uint *)pFVar29 - uVar33;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)(pFVar39 + 0x30),*(uint *)pFVar29,
                         (int *)(pFVar39 + 0x3c));
            }
          }
        }
        *(undefined8 *)pFVar39 = 0;
        pFVar29 = pFVar39 + 0x10;
        uVar33 = *(uint *)pFVar29;
        uVar21 = 0;
        if (pFVar37->bTracingFeedbackEnabled != false) {
          uVar21 = uVar19;
        }
        if ((int)uVar33 < (int)uVar21) {
          iVar23 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,uVar21 - uVar33,(ForAnyElementType *)(pFVar39 + 8),(int *)pFVar29,
                              (int *)(pFVar39 + 0x14));
          memset((void *)(*(longlong *)(pFVar39 + 8) + (longlong)iVar23 * 4),0,
                 (longlong)(int)(uVar21 - uVar33) << 2);
        }
        else {
          if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar21);
          }
          if ((int)uVar21 < (int)uVar33) {
            uVar33 = uVar33 - uVar21;
            if (((int)(uVar33 | uVar21) < 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x458,
                                    L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                   ), bVar18)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            if (uVar33 != 0) {
              pvVar26 = (void *)(*(longlong *)(pFVar39 + 8) + (longlong)(int)uVar21 * 4);
              iVar23 = (*(uint *)pFVar29 - uVar21) - uVar33;
              if (iVar23 != 0) {
                memmove(pvVar26,(void *)((longlong)pvVar26 + (longlong)(int)uVar33 * 4),
                        (longlong)iVar23 << 2);
              }
              *(uint *)pFVar29 = *(uint *)pFVar29 - uVar33;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)(pFVar39 + 8),*(uint *)pFVar29,
                         (int *)(pFVar39 + 0x14));
            }
          }
        }
        *(undefined8 *)(pFVar39 + 0x18) = 0;
        local_374 = 0;
        if (0 < (int)*(uint *)(pFVar39 + 0x60)) {
          local_358 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
          do {
            pTVar17 = local_358;
            pFVar32 = (FRHIResource *)0x0;
            uVar33 = 0;
            if ((int)local_374 < (int)*(uint *)(pFVar39 + 0x60)) {
              uVar33 = ~local_374 >> 0x1f;
            }
            if ((uVar33 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar14 = (code *)swi(3);
              (*pcVar14)();
              return;
            }
            lVar35 = *(longlong *)(pFVar39 + 0x58);
            *(undefined4 *)((longlong)pTVar17 + 0x178 + lVar35) = 0;
            TBitArray<FDefaultBitArrayAllocator>::SetNum<bool>
                      ((TBitArray<FDefaultBitArrayAllocator> *)((longlong)pTVar17 + 0x160 + lVar35),
                       uVar19,false);
            local_328 = 0;
            uStack_30c = 0;
            local_2e8 = 0;
            local_2bd = 0;
            local_2b9 = 0;
            puVar31 = (undefined8 *)((longlong)pTVar17 + 0x10 + lVar35);
            local_228 = 0;
            local_2e0 = 0;
            local_2de = 0;
            local_2b0 = 0;
            local_2a0 = 0;
            local_290 = 0;
            local_280 = 0;
            local_270 = 0;
            uStack_320 = 0;
            local_268 = (FRHIResource *)0x0;
            pFStack_260 = (FRHIResource *)0x0;
            local_248 = (FRHIResource *)0x0;
            pFStack_240 = (FRHIResource *)0x0;
            local_2f8 = 0;
            uStack_2f0 = 0;
            local_308 = (void *)0x0;
            local_300 = 0;
            local_2fc = 0x80;
            local_2b8 = (void *)0x0;
            local_2a8 = (void *)0x0;
            local_298 = (void *)0x0;
            local_288 = (void *)0x0;
            local_278 = (void *)0x0;
            local_258 = (FRHIResource *)0x0;
            pFStack_250 = (FRHIResource *)0x0;
            local_238 = (FRHIResource *)0x0;
            pFStack_230 = (FRHIResource *)0x0;
            uStack_31c = 0;
            uStack_318 = 0;
            uStack_314 = 0;
            uStack_310 = 0;
            local_2dd = (undefined1  [8])0x0;
            uStack_2d5 = 0;
            local_2cd = 0;
            uStack_2c5 = 0;
            *(undefined8 *)((longlong)pTVar17 + lVar35) = 0;
            ((undefined8 *)((longlong)pTVar17 + lVar35))[1] = 0;
            if (puVar31 != (undefined8 *)&uStack_318) {
              *puVar31 = 0;
              puVar31[1] = 0;
              if ((void *)puVar31[2] != (void *)0x0) {
                FMemory::Free((void *)puVar31[2]);
              }
              puVar31[2] = 0;
              *(undefined4 *)(puVar31 + 3) = 0;
              *(undefined4 *)((longlong)puVar31 + 0x1c) = 0x80;
              local_2fc = 0;
            }
            puVar31 = (undefined8 *)((longlong)pTVar17 + 0x30 + lVar35);
            *puVar31 = 0;
            puVar31[1] = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x40 + lVar35) = local_2e8;
            *(undefined2 *)((longlong)pTVar17 + 0x48 + lVar35) = 0;
            *(undefined1 *)((longlong)pTVar17 + 0x4a + lVar35) = 0;
            FRayTracingSceneInitializationData::operator=
                      ((FRayTracingSceneInitializationData *)((longlong)pTVar17 + 0x50 + lVar35),
                       (FRayTracingSceneInitializationData *)(local_2dd + 5));
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xc0 + lVar35);
            if (ppFVar28 != &local_268) {
              pFVar36 = *ppFVar28;
              *ppFVar28 = local_268;
              local_268 = (FRHIResource *)0x0;
              if (pFVar36 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar36);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 200 + lVar35);
            if (ppFVar28 != &pFStack_260) {
              pFVar36 = *ppFVar28;
              *ppFVar28 = pFStack_260;
              pFStack_260 = (FRHIResource *)0x0;
              if (pFVar36 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar36);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xd0 + lVar35);
            if (ppFVar28 != &local_258) {
              pFVar36 = *ppFVar28;
              *ppFVar28 = local_258;
              local_258 = (FRHIResource *)0x0;
              if (pFVar36 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar36);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xd8 + lVar35);
            pFVar36 = pFStack_250;
            if (ppFVar28 != &pFStack_250) {
              pFVar34 = *ppFVar28;
              *ppFVar28 = pFStack_250;
              pFStack_250 = (FRHIResource *)0x0;
              pFVar36 = pFVar32;
              if (pFVar34 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar34);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xe0 + lVar35);
            pFVar34 = local_248;
            if (ppFVar28 != &local_248) {
              pFVar40 = *ppFVar28;
              *ppFVar28 = local_248;
              local_248 = (FRHIResource *)0x0;
              pFVar34 = pFVar32;
              if (pFVar40 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar40);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xe8 + lVar35);
            pFVar40 = pFStack_240;
            if (ppFVar28 != &pFStack_240) {
              pFVar38 = *ppFVar28;
              *ppFVar28 = pFStack_240;
              pFStack_240 = (FRHIResource *)0x0;
              pFVar40 = pFVar32;
              if (pFVar38 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar38);
              }
            }
            ppFVar28 = (FRHIResource **)((longlong)pTVar17 + 0xf0 + lVar35);
            pFVar38 = local_238;
            if (ppFVar28 != &local_238) {
              pFVar12 = *ppFVar28;
              *ppFVar28 = local_238;
              local_238 = (FRHIResource *)0x0;
              pFVar38 = pFVar32;
              if (pFVar12 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar12);
              }
            }
            ppFVar2 = ppFVar28 + 1;
            pFVar32 = pFStack_230;
            if (ppFVar2 != &pFStack_230) {
              pFVar12 = *ppFVar2;
              *ppFVar2 = pFStack_230;
              pFStack_230 = (FRHIResource *)0x0;
              pFVar32 = (FRHIResource *)0x0;
              if (pFVar12 != (FRHIResource *)0x0) {
                FRHIResource::Release(pFVar12);
              }
            }
            *(undefined4 *)(ppFVar28 + 2) = (undefined4)local_228;
            if (pFVar32 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar32);
            }
            if (pFVar38 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar38);
            }
            if (pFVar40 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar40);
            }
            if (pFVar34 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar34);
            }
            if (pFVar36 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFVar36);
            }
            if (local_258 != (FRHIResource *)0x0) {
              FRHIResource::Release(local_258);
            }
            if (pFStack_260 != (FRHIResource *)0x0) {
              FRHIResource::Release(pFStack_260);
            }
            if (local_268 != (FRHIResource *)0x0) {
              FRHIResource::Release(local_268);
            }
            if (local_278 != (void *)0x0) {
              FMemory::Free(local_278);
            }
            if (local_288 != (void *)0x0) {
              FMemory::Free(local_288);
            }
            if (local_298 != (void *)0x0) {
              FMemory::Free(local_298);
            }
            if (local_2a8 != (void *)0x0) {
              FMemory::Free(local_2a8);
            }
            if (local_2b8 != (void *)0x0) {
              FMemory::Free(local_2b8);
            }
            if (local_308 != (void *)0x0) {
              FMemory::Free(local_308);
            }
            pTVar17 = local_358;
            pFVar32 = *(FRHIResource **)((longlong)local_358 + 0x108 + lVar35);
            if (pFVar32 != (FRHIResource *)0x0) {
              *(undefined8 *)((longlong)local_358 + 0x108 + lVar35) = 0;
              FRHIResource::Release(pFVar32);
            }
            local_374 = local_374 + 1;
            *(undefined8 *)((longlong)pTVar17 + 0x148 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x150 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x110 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x118 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x120 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x158 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x128 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x130 + lVar35) = 0;
            *(undefined8 *)((longlong)pTVar17 + 0x138 + lVar35) = 0;
            local_358 = (TArray<int,TSizedDefaultAllocator<32>_> *)((longlong)pTVar17 + 0x188);
            pFVar37 = local_350;
            pFVar39 = local_340;
            uVar19 = (uint)local_360;
          } while ((int)local_374 < (int)*(uint *)(local_340 + 0x60));
        }
        local_370 = local_370 + 1;
        if (2 < local_370) {
          pFVar37->InstanceStatsBuffer = (FRDGBuffer *)0x0;
          piVar1 = &(pFVar37->GeometriesToBuild).ArrayMax;
          (pFVar37->GeometriesToBuild).ArrayNum = 0;
          if (*piVar1 < 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,(ForAnyElementType *)pFVar37,0,piVar1);
          }
          if (((pFVar37->Allocator).NumMarks != 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!NumMarks",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                  ,0xad,L""), bVar18)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          FMemStackBase::FreeChunks(&pFVar37->Allocator,(FTaggedMemory *)0x0);
          pFVar3 = &pFVar37->InitTask;
          pFVar37->bUsesLightingChannels = false;
          pFVar13 = (pFVar3->Pimpl).Reference;
          if (((pFVar13 != (FTaskBase *)0x0) &&
              ((pFVar13->Subsequents).bIsClosed == (atomic<bool>)0x0)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InitTask.IsCompleted()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                                  ,0x492,L""), bVar18)) {
            pcVar14 = (code *)swi(3);
            (*pcVar14)();
            return;
          }
          if (pFVar3 != (FTaskHandle *)local_200) {
            pFVar13 = (pFVar3->Pimpl).Reference;
            (pFVar3->Pimpl).Reference = (FTaskBase *)0x0;
            if (pFVar13 != (FTaskBase *)0x0) {
              LOCK();
              paVar4 = &pFVar13->RefCount;
              aVar7 = *paVar4;
              *paVar4 = (atomic<unsigned_int>)((int)*paVar4 + -1);
              UNLOCK();
              if (aVar7 == (atomic<unsigned_int>)0x1) {
                (**(code **)pFVar13->_padding_)(pFVar13,1);
              }
            }
          }
          pFVar37->bCachedInstancesLocked = false;
          return;
        }
      } while( true );
    }
    uVar33 = *(uint *)pFVar29;
    lVar35 = (longlong)(int)uVar33;
    if (((int)uVar33 < 0) || (*(int *)&(this->ActiveViews).field_0x28 <= (int)uVar33)) {
LAB_1453a5368:
      local_360 = lVar35;
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActiveViews.IsValidIndex(ViewIndex) && ActiveViews[ViewIndex] == ViewIndex"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                          ,0x455,L"");
      if (bVar18) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
    }
    else {
      if ((*(int *)(puVar24 + 0x18) <= (int)uVar33) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Index>=0 && Index<NumBits",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x5c6,L""), bVar18)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      if (*(undefined1 **)(puVar24 + 0x10) != (undefined1 *)0x0) {
        puVar24 = *(undefined1 **)(puVar24 + 0x10);
      }
      uVar19 = uVar33;
      if ((int)uVar33 < 0) {
        uVar19 = uVar33 + 0x1f;
      }
      if (((*(uint *)(puVar24 + (longlong)((int)uVar19 >> 5) * 4) >> (uVar33 & 0x1f) & 1) == 0) ||
         (local_360 = lVar35, *(uint *)(*(longlong *)&this->ActiveViews + lVar35 * 8) != uVar33))
      goto LAB_1453a5368;
    }
    uVar19 = 0;
    local_368 = &local_350->Layers;
    local_374 = ~uVar33 >> 0x1f;
    local_218 = lVar35 * 0x188;
    do {
      lVar10 = local_218;
      pTVar16 = local_368;
      uVar21 = local_374;
      if ((local_368->ArrayNum <= (int)uVar19) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar29 = (pTVar16->AllocatorInstance).Data;
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0xc] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0xd] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0xe] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0xf] = '\0';
      local_1d8.PreViewTranslation.field0_0x0._s_0.Z = 0.0;
      local_1d8.Data._27_4_ = 0;
      local_1d8.Data._31_1_ = 0;
      local_1d8.AccelerationStructureAddressesBuffer.NumBytes = 0;
      local_1d8.AccelerationStructureAddressesBuffer._20_4_ = 0;
      local_1d8.bUseLightingChannels = false;
      local_1d8.bForceOpaque = false;
      local_1d8.bDisableTriangleCull = false;
      local_1d8.Data.InstanceGeometryIndices.ArrayNum = 0;
      local_1d8.Data.InstanceGeometryIndices.ArrayMax = 0;
      local_1d8.Data.BaseUploadBufferOffsets.ArrayNum = 0;
      local_1d8.Data.BaseUploadBufferOffsets.ArrayMax = 0;
      local_1d8.Data.BaseInstancePrefixSum.ArrayNum = 0;
      local_1d8.Data.BaseInstancePrefixSum.ArrayMax = 0;
      local_1d8.Data.InstanceGroupEntryRefs.ArrayNum = 0;
      local_1d8.Data.InstanceGroupEntryRefs.ArrayMax = 0;
      local_1d8.Data.ReferencedGeometries.ArrayNum = 0;
      local_1d8.Data.ReferencedGeometries.ArrayMax = 0;
      local_d0._40_4_ = 0;
      local_d0._44_4_ = 0;
      local_1d8.PreViewTranslation.field0_0x0._s_0.X = 0.0;
      local_1d8.PreViewTranslation.field0_0x0._s_0.Y = 0.0;
      local_1d8.Instances._12_4_ = 0;
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[1] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[2] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[3] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[4] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[5] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[6] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[7] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[8] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[9] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[10] = '\0';
      local_1d8.VisibleInstances.AllocatorInstance.InlineData[0xb] = '\0';
      local_1d8._75_8_ = 0;
      local_1d8.Data._3_8_ = 0;
      local_1d8.Instances.DataPtr = (FRayTracingGeometryInstance *)0x0;
      local_1d8.Instances.ArrayNum = 0;
      local_1d8.Data._11_8_ = 0;
      local_1d8.Data._19_8_ = 0;
      local_1d8.VisibleInstances.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0
      ;
      local_1d8.VisibleInstances.NumBits = 0;
      local_1d8.VisibleInstances.MaxBits = 0x80;
      local_1d8.Data.InstanceGeometryIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      uVar20 = 0;
      if ((int)uVar33 < *(int *)(pFVar29 + (longlong)(int)uVar19 * 0x70 + 0x60)) {
        uVar20 = uVar21;
      }
      local_1d8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data = (FScriptContainerElement *)0x0
      ;
      local_1d8.Data.BaseInstancePrefixSum.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.Data.ReferencedGeometries.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d8.InstanceGroupUploadBuffer.Reference = (FRHIBuffer *)0x0;
      local_1d8.InstanceGroupUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
      local_1d8.InstanceUploadBuffer.Reference = (FRHIBuffer *)0x0;
      local_1d8.InstanceUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
      local_1d8.TransformUploadBuffer.Reference = (FRHIBuffer *)0x0;
      local_1d8.TransformUploadSRV.Reference = (FRHIShaderResourceView *)0x0;
      local_1d8.AccelerationStructureAddressesBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
      local_1d8.AccelerationStructureAddressesBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
      local_d0._0_8_ = (FRayTracingGeometryInstance *)0x0;
      local_d0._8_8_ = 0;
      local_d0[0x10] = '\0';
      local_d0[0x11] = '\0';
      local_d0[0x12] = '\0';
      local_d0[0x13] = '\0';
      local_d0[0x14] = '\0';
      local_d0[0x15] = '\0';
      local_d0[0x16] = '\0';
      local_d0[0x17] = '\0';
      local_d0[0x18] = '\0';
      local_d0[0x19] = '\0';
      local_d0[0x1a] = '\0';
      local_d0[0x1b] = '\0';
      local_d0[0x1c] = '\0';
      local_d0[0x1d] = '\0';
      local_d0[0x1e] = '\0';
      local_d0[0x1f] = '\0';
      local_d0._32_8_ = (ForElementType<unsigned_int>)0x0;
      local_d0._48_8_ = 0.0;
      local_d0._56_8_ = (undefined8 *)0x0;
      local_d0._64_8_ = 0.0;
      local_88._0_1_ = false;
      local_88._1_1_ = false;
      local_88._2_1_ = false;
      local_88._3_5_ = 0;
      uStack_80._0_4_ = 0;
      uStack_80._4_4_ = 0;
      local_68 = (void *)0x0;
      local_60 = 0;
      uStack_5c = 0x80;
      iStack_58 = 0;
      local_54 = 0;
      if ((uVar20 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      this_01 = (FRayTracingInstanceBufferBuilder *)
                (*(longlong *)(pFVar29 + (longlong)(int)uVar19 * 0x70 + 0x58) + lVar10);
      FRayTracingInstanceBufferBuilder::operator=(this_01,&local_1d8);
      pFVar5 = this_01 + 1;
      this_02 = (FRayTracingGeometryInstance *)local_d0._0_8_;
      if (pFVar5 != (FRayTracingInstanceBufferBuilder *)local_d0) {
        this_00 = (pFVar5->Instances).DataPtr;
        (pFVar5->Instances).DataPtr = (FRayTracingGeometryInstance *)local_d0._0_8_;
        local_d0._0_8_ = (FRayTracingGeometryInstance *)0x0;
        this_02 = (FRayTracingGeometryInstance *)0x0;
        if (this_00 != (FRayTracingGeometryInstance *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      pdVar6 = (double *)((longlong)&this_01[1].PreViewTranslation.field0_0x0 + 8);
      *(undefined8 *)&this_01[1].Instances.ArrayNum = local_d0._8_8_;
      *(undefined8 *)this_01[1].VisibleInstances.AllocatorInstance.InlineData = local_d0._16_8_;
      *(undefined8 *)(this_01[1].VisibleInstances.AllocatorInstance.InlineData + 8) =
           local_d0._24_8_;
      this_01[1].VisibleInstances.AllocatorInstance.SecondaryData =
           (ForElementType<unsigned_int>)local_d0._32_8_;
      this_01[1].VisibleInstances.NumBits = local_d0._40_4_;
      this_01[1].VisibleInstances.MaxBits = local_d0._44_4_;
      this_01[1].PreViewTranslation.field0_0x0._s_0.X = (double)local_d0._48_8_;
      puVar31 = (undefined8 *)local_d0._56_8_;
      if (pdVar6 != (double *)(local_d0 + 0x38)) {
        puVar8 = (undefined8 *)*pdVar6;
        puVar31 = (undefined8 *)0x0;
        *pdVar6 = (double)local_d0._56_8_;
        local_d0._56_8_ = (undefined8 *)0x0;
        if (puVar8 != (undefined8 *)0x0) {
          piVar1 = (int *)(puVar8 + 1);
          LOCK();
          iVar23 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar23 == 1) && (piVar1 != (int *)0x0)) {
            (**(code **)*puVar8)(puVar8,1);
          }
        }
      }
      pvVar26 = local_68;
      this_01[1].PreViewTranslation.field0_0x0._s_0.Z = (double)local_d0._64_8_;
      this_01[1].bUseLightingChannels = local_88._0_1_;
      this_01[1].bForceOpaque = local_88._1_1_;
      this_01[1].bDisableTriangleCull = local_88._2_1_;
      *(undefined5 *)&this_01[1].field_0x4b = local_88._3_5_;
      this_01[1].Data.NumGPUInstanceGroups = (uint)uStack_80;
      this_01[1].Data.NumCPUInstanceGroups = uStack_80._4_4_;
      if (&this_01[1].Data.NumGPUInstanceDescriptors != (uint *)local_78) {
        if (local_68 == (void *)0x0) {
          this_01[1].Data.NumGPUInstanceDescriptors = (uint)local_78[0];
          this_01[1].Data.NumCPUInstanceDescriptors = local_78[0]._4_4_;
          this_01[1].Data.NumNativeGPUSceneInstances = (uint)local_78[1];
          this_01[1].Data.NumNativeCPUInstances = local_78[1]._4_4_;
        }
        pvVar9 = *(void **)&this_01[1].Data.TotalNumSegments;
        if (pvVar9 != (void *)0x0) {
          FMemory::Free(pvVar9);
        }
        *(void **)&this_01[1].Data.TotalNumSegments = pvVar26;
        *(undefined4 *)&this_01[1].Data.InstanceGeometryIndices.AllocatorInstance.Data = local_60;
        *(undefined4 *)
         ((longlong)&this_01[1].Data.InstanceGeometryIndices.AllocatorInstance.Data + 4) = uStack_5c
        ;
        local_60 = 0;
        uStack_5c = 0;
        local_68 = (void *)0x0;
        lVar35 = local_360;
      }
      this_01[1].Data.InstanceGeometryIndices.ArrayNum = iStack_58;
      this_01[1].Data.InstanceGeometryIndices.ArrayMax = local_54;
      if (local_68 != (void *)0x0) {
        FMemory::Free(local_68);
      }
      if (puVar31 != (undefined8 *)0x0) {
        piVar1 = (int *)(puVar31 + 1);
        LOCK();
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (((iVar23 == 1) && (piVar1 != (int *)0x0)) && (puVar31 != (undefined8 *)0x0)) {
          (**(code **)*puVar31)(puVar31,1);
        }
      }
      if (this_02 != (FRayTracingGeometryInstance *)0x0) {
        FRHIResource::Release((FRHIResource *)this_02);
      }
      if (local_1d8.AccelerationStructureAddressesBuffer.SRV.Reference !=
          (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release
                  ((FRHIResource *)local_1d8.AccelerationStructureAddressesBuffer.SRV.Reference);
      }
      if (local_1d8.AccelerationStructureAddressesBuffer.Buffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release
                  ((FRHIResource *)local_1d8.AccelerationStructureAddressesBuffer.Buffer.Reference);
      }
      if (local_1d8.TransformUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.TransformUploadSRV.Reference);
      }
      if (local_1d8.TransformUploadBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.TransformUploadBuffer.Reference);
      }
      if (local_1d8.InstanceUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.InstanceUploadSRV.Reference);
      }
      if (local_1d8.InstanceUploadBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.InstanceUploadBuffer.Reference);
      }
      if (local_1d8.InstanceGroupUploadSRV.Reference != (FRHIShaderResourceView *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.InstanceGroupUploadSRV.Reference);
      }
      if (local_1d8.InstanceGroupUploadBuffer.Reference != (FRHIBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)local_1d8.InstanceGroupUploadBuffer.Reference);
      }
      if (local_1d8.Data.ReferencedGeometries.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.ReferencedGeometries.AllocatorInstance.Data);
      }
      if (local_1d8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.InstanceGroupEntryRefs.AllocatorInstance.Data);
      }
      if (local_1d8.Data.BaseInstancePrefixSum.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.BaseInstancePrefixSum.AllocatorInstance.Data);
      }
      if (local_1d8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.BaseUploadBufferOffsets.AllocatorInstance.Data);
      }
      if (local_1d8.Data.InstanceGeometryIndices.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.InstanceGeometryIndices.AllocatorInstance.Data);
      }
      if (local_1d8.VisibleInstances.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_int>)0x0) {
        FMemory::Free((void *)local_1d8.VisibleInstances.AllocatorInstance.SecondaryData);
      }
      puVar24 = local_348;
      this = local_350;
      uVar19 = uVar19 + 1;
    } while (uVar19 < 3);
    bVar15 = (byte)uVar33 & 0x1f;
    uVar19 = 1 << bVar15 | 1U >> 0x20 - bVar15;
    lVar10 = *(longlong *)&local_350->ActiveViews;
    if ((((int)uVar33 < 0) || (*(int *)(local_348 + 0x18) <= (int)uVar33)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    puVar25 = puVar24;
    if (*(undefined1 **)(puVar24 + 0x10) != (undefined1 *)0x0) {
      puVar25 = *(undefined1 **)(puVar24 + 0x10);
    }
    uVar21 = uVar33;
    if ((int)uVar33 < 0) {
      uVar21 = uVar33 + 0x1f;
    }
    if (((*(uint *)(puVar25 + (longlong)((int)uVar21 >> 5) * 4) & uVar19) == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllocationFlags[Index]",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\SparseArray.h"
                            ,0xc5,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (*(int *)&(this->ActiveViews).field_0x34 != 0) {
      *(uint *)(lVar10 + (longlong)*(int *)&(this->ActiveViews).field_0x30 * 8) = uVar33;
    }
    uVar22 = 0xffffffff;
    *(undefined4 *)(lVar10 + lVar35 * 8) = 0xffffffff;
    if (0 < *(int *)&(this->ActiveViews).field_0x34) {
      uVar22 = *(undefined4 *)&(this->ActiveViews).field_0x30;
    }
    *(undefined4 *)(lVar10 + 4 + lVar35 * 8) = uVar22;
    puVar25 = &(this->ActiveViews).field_0x34;
    *(int *)puVar25 = *(int *)puVar25 + 1;
    *(uint *)&(this->ActiveViews).field_0x30 = uVar33;
    if ((((int)uVar33 < 0) || (*(int *)(puVar24 + 0x18) <= (int)uVar33)) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index>=0 && Index<NumBits",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x5be,L""), bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    puVar25 = puVar24;
    if (*(undefined1 **)(puVar24 + 0x10) != (undefined1 *)0x0) {
      puVar25 = *(undefined1 **)(puVar24 + 0x10);
    }
    local_200[1] = 0;
    local_200[2] = 0;
    local_200[3] = 0;
    local_200[4] = 0;
    *(uint *)(puVar25 + (longlong)((int)uVar21 >> 5) * 4) =
         *(uint *)(puVar25 + (longlong)((int)uVar21 >> 5) * 4) & ~uVar19;
    uVar19 = 0;
    if ((int)uVar33 < (this->ViewParameters).ArrayNum) {
      uVar19 = local_374;
    }
    if ((uVar19 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar18)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    pFVar11 = (this->ViewParameters).AllocatorInstance.Data;
    uVar27 = (ulonglong)local_370;
    pFVar29 = local_338 + 4;
    pFVar39 = pFVar11 + lVar35 * 0x20;
    *(undefined8 *)pFVar39 = 0;
    *(undefined8 *)(pFVar39 + 8) = 0;
    pFVar11 = pFVar11 + lVar35 * 0x20 + 0x10;
    *(undefined8 *)pFVar11 = 0;
    *(undefined8 *)(pFVar11 + 8) = 0;
  } while( true );
}

// SetInstanceDebugDataEnabled @ 1453a76f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FRayTracingScene::SetInstanceDebugDataEnabled(FRayTracingScene *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  void *_Dst;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  bVar12 = this->bInstanceDebugDataEnabled != param_1;
  this->bInstanceDebugDataEnabled = param_1;
  if (bVar12) {
    uVar11 = 0;
    if (param_1) {
      do {
        if (((this->Layers).ArrayNum <= (int)uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar9 = (longlong)(int)uVar11 * 0x70;
        pFVar3 = (this->Layers).AllocatorInstance.Data;
        uVar2 = *(uint *)(pFVar3 + lVar9 + 0x28);
        iVar8 = *(int *)(pFVar3 + lVar9 + 0x38);
        pFVar1 = pFVar3 + lVar9 + 0x38;
        if (iVar8 < (int)uVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x10,8,uVar2 - iVar8,(ForAnyElementType *)(pFVar3 + lVar9 + 0x30),
                             (int *)pFVar1,(int *)(pFVar3 + lVar9 + 0x3c));
          DefaultConstructItems<FRayTracingInstanceDebugData,int>
                    ((void *)((longlong)iVar7 * 0x10 + *(longlong *)(pFVar3 + lVar9 + 0x30)),
                     uVar2 - iVar8);
        }
        else {
          if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
          }
          if ((int)uVar2 < iVar8) {
            uVar10 = iVar8 - uVar2;
            if (((int)(uVar10 | uVar2) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if (uVar10 != 0) {
              _Dst = (void *)((longlong)(int)uVar2 * 0x10 + *(longlong *)(pFVar3 + lVar9 + 0x30));
              iVar8 = (*(int *)pFVar1 - uVar2) - uVar10;
              if (iVar8 != 0) {
                memmove(_Dst,(void *)((longlong)(int)uVar10 * 0x10 + (longlong)_Dst),
                        (longlong)iVar8 << 4);
              }
              *(uint *)pFVar1 = *(int *)pFVar1 - uVar10;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x10,8,(ForAnyElementType *)(pFVar3 + lVar9 + 0x30),*(int *)pFVar1,
                         (int *)(pFVar3 + lVar9 + 0x3c));
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 3);
    }
    else {
      if (((this->Layers).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0x38) = 0;
      if (*(int *)(pFVar1 + 0x3c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(pFVar1 + 0x30),0,(int *)(pFVar1 + 0x3c));
      }
      if (((this->Layers).ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0xa8) = 0;
      if (*(int *)(pFVar1 + 0xac) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(pFVar1 + 0xa0),0,(int *)(pFVar1 + 0xac));
      }
      if (((this->Layers).ArrayNum < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0x118) = 0;
      if (*(int *)(pFVar1 + 0x11c) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,(ForAnyElementType *)(pFVar1 + 0x110),0,(int *)(pFVar1 + 0x11c));
      }
    }
  }
  return bVar12;
}

// SetInstanceExtraDataBufferEnabled @ 1453a7a00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall
FRayTracingScene::SetInstanceExtraDataBufferEnabled(FRayTracingScene *this,bool param_1)

{
  this->bInstanceExtraDataBufferEnabled = param_1;
  return false;
}

// SetTracingFeedbackEnabled @ 1453a8a50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FRayTracingScene::SetTracingFeedbackEnabled(FRayTracingScene *this,bool param_1)

{
  FScriptContainerElement *pFVar1;
  void *_Dst;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  bVar12 = this->bTracingFeedbackEnabled != param_1;
  this->bTracingFeedbackEnabled = param_1;
  if (bVar12) {
    uVar11 = 0;
    if (param_1) {
      do {
        if (((this->Layers).ArrayNum <= (int)uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        lVar9 = (longlong)(int)uVar11 * 0x70;
        pFVar3 = (this->Layers).AllocatorInstance.Data;
        uVar2 = *(uint *)(pFVar3 + lVar9 + 0x28);
        iVar8 = *(int *)(pFVar3 + lVar9 + 0x10);
        pFVar1 = pFVar3 + lVar9 + 0x10;
        if (iVar8 < (int)uVar2) {
          iVar7 = UE::Core::Private::
                  ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (4,4,uVar2 - iVar8,(ForAnyElementType *)(pFVar3 + lVar9 + 8),
                             (int *)pFVar1,(int *)(pFVar3 + lVar9 + 0x14));
          memset((void *)(*(longlong *)(pFVar3 + lVar9 + 8) + (longlong)iVar7 * 4),0,
                 (longlong)(int)(uVar2 - iVar8) << 2);
        }
        else {
          if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
          }
          if ((int)uVar2 < iVar8) {
            uVar10 = iVar8 - uVar2;
            if (((int)(uVar10 | uVar2) < 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x458,
                                   L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                  ), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            if (uVar10 != 0) {
              _Dst = (void *)(*(longlong *)(pFVar3 + lVar9 + 8) + (longlong)(int)uVar2 * 4);
              iVar8 = (*(int *)pFVar1 - uVar2) - uVar10;
              if (iVar8 != 0) {
                memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar10 * 4),
                        (longlong)iVar8 << 2);
              }
              *(uint *)pFVar1 = *(int *)pFVar1 - uVar10;
              UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(ForAnyElementType *)(pFVar3 + lVar9 + 8),*(int *)pFVar1,
                         (int *)(pFVar3 + lVar9 + 0x14));
            }
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 < 3);
    }
    else {
      if (((this->Layers).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0x10) = 0;
      if (*(int *)(pFVar1 + 0x14) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar1 + 8),0,(int *)(pFVar1 + 0x14));
      }
      if (((this->Layers).ArrayNum < 2) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0x80) = 0;
      if (*(int *)(pFVar1 + 0x84) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar1 + 0x78),0,(int *)(pFVar1 + 0x84));
      }
      if (((this->Layers).ArrayNum < 3) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar1 = (this->Layers).AllocatorInstance.Data;
      *(undefined4 *)(pFVar1 + 0xf0) = 0;
      if (*(int *)(pFVar1 + 0xf4) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)(pFVar1 + 0xe8),0,(int *)(pFVar1 + 0xf4));
      }
    }
  }
  return bVar12;
}

// SetViewParams @ 1453a8d50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::SetViewParams
          (FRayTracingScene *this,FViewHandle param_1,FViewMatrices *param_2,
          FRayTracingCullingParameters *param_3)

{
  FScriptContainerElement *pFVar1;
  double dVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  
  uVar10 = 0;
  if ((int)param_1.Index < (this->ViewParameters).ArrayNum) {
    uVar10 = ~param_1.Index >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar11 = (longlong)(int)param_1.Index * 0x20;
  *(FRayTracingCullingParameters **)((this->ViewParameters).AllocatorInstance.Data + lVar11) =
       param_3;
  uVar5 = *(undefined4 *)&(param_2->PreViewTranslation).field0_0x0;
  uVar6 = *(undefined4 *)((longlong)&(param_2->PreViewTranslation).field0_0x0 + 4);
  uVar7 = *(undefined4 *)((longlong)&(param_2->PreViewTranslation).field0_0x0 + 8);
  uVar8 = *(undefined4 *)((longlong)&(param_2->PreViewTranslation).field0_0x0 + 0xc);
  dVar2 = (param_2->PreViewTranslation).field0_0x0._s_0.Z;
  uVar10 = 0;
  if ((int)param_1.Index < (this->ViewParameters).ArrayNum) {
    uVar10 = ~param_1.Index >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->ViewParameters).AllocatorInstance.Data;
  pFVar1 = pFVar3 + lVar11 + 8;
  *(undefined4 *)pFVar1 = uVar5;
  *(undefined4 *)(pFVar1 + 4) = uVar6;
  *(undefined4 *)(pFVar1 + 8) = uVar7;
  *(undefined4 *)(pFVar1 + 0xc) = uVar8;
  *(double *)(pFVar3 + lVar11 + 0x18) = dVar2;
  return;
}

// Update @ 1453b3db0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FRayTracingScene::Update
          (FRayTracingScene *this,FRDGBuilder *param_1,FSceneUniformBuffer *param_2,
          FGPUScene *param_3,ERDGPassFlags param_4)

{
  longlong *plVar1;
  byte *pbVar2;
  TReferenceControllerBase<1> *pTVar3;
  int *piVar4;
  FBuildInstanceBufferPassParams *pFVar5;
  wchar_t **ppwVar6;
  FRDGPooledBuffer *pFVar7;
  FRDGUserValidation *this_00;
  TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2> *this_01;
  TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2> *this_02;
  FRHIResource *pFVar8;
  FUploadedBuffer *pFVar9;
  void *_Src;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  FRDGBufferSRV *pFVar14;
  FRDGBufferSRV *pFVar15;
  FRDGBufferSRV *pFVar16;
  FRDGBufferSRV *pFVar17;
  undefined8 uVar18;
  TConsoleVariableData<int> *pTVar19;
  TConsoleVariableData<bool> *pTVar20;
  TConsoleVariableData<int> *pTVar21;
  FTaskHandle *pFVar22;
  bool bVar23;
  byte bVar24;
  bool bVar25;
  char cVar26;
  uint uVar27;
  TStatId TVar28;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar29;
  TRefCountPtr<FRDGPooledBuffer> TVar30;
  FRDGBufferSRV *pFVar31;
  FRDGBuffer *pFVar32;
  FRDGBufferUAV *pFVar33;
  undefined8 *puVar34;
  TRDGUniformBuffer<FSceneUniformParameters> *pTVar35;
  FShaderParametersMetadata *pFVar36;
  FGPUSceneResourceParameters *pFVar37;
  FRDGEventName *pFVar38;
  void *_Dst;
  ulonglong uVar39;
  ulonglong uVar40;
  FRDGPooledBuffer *pFVar41;
  EUniformBufferBindingFlags EVar42;
  FRayTracingInstanceDebugData *pFVar43;
  int iVar44;
  FMemStackBase *pFVar45;
  ulong64 uVar46;
  uint uVar47;
  atomic<unsigned___int64> aVar48;
  longlong lVar49;
  undefined8 *puVar50;
  atomic<unsigned___int64> aVar51;
  FScriptContainerElement *pFVar52;
  atomic<UE::Tasks::Private::FTaskBase_*> aVar53;
  bool bVar54;
  FShaderParametersMetadata *local_res10;
  undefined1 local_446 [6];
  undefined1 local_440 [16];
  longlong local_430;
  FMemStackBase *local_428;
  uint local_420;
  uint local_41c;
  uint local_418;
  FRDGBufferDesc local_410;
  FRHIResource *local_3f8;
  undefined8 *local_3f0;
  undefined4 local_3e8;
  uint local_3e4;
  int local_3e0;
  uint local_3dc;
  uint local_3d8;
  FScriptContainerElement *local_3d0;
  FRDGBufferUAVDesc local_3c8;
  FRDGBufferUAVDesc local_3b8;
  FRDGBufferUAVDesc local_3a8;
  FName local_398;
  byte local_390;
  FRDGBufferUAVDesc local_388;
  FRDGBufferUAVDesc local_378;
  longlong local_368;
  undefined8 local_358;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined8 local_348;
  FRDGBufferUAVDesc local_338;
  FTaskHandle *local_328;
  undefined8 local_320;
  FTaskHandle *local_318;
  undefined8 local_310;
  FRDGBufferDesc local_308;
  FRDGBufferDesc local_2f0;
  FRDGBufferDesc local_2d8;
  FRDGBufferDesc local_2c0;
  FRDGBufferDesc local_2a8;
  FRDGBufferDesc local_290;
  uint local_278;
  undefined8 uStack_274;
  undefined4 uStack_26c;
  undefined8 local_268;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_260;
  FRDGBufferSRVDesc local_240;
  FRDGPooledBuffer *local_220;
  FRDGBuffer *local_218;
  FPipe local_210;
  undefined1 local_1e8 [20];
  uint uStack_1d4;
  FSharedReferencer<1> FStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  int local_1b8;
  FSourceLocation local_1a8;
  TRDGUniformBuffer<FSceneUniformParameters> *local_188;
  EBufferUsageFlags EStack_180;
  undefined4 uStack_17c;
  FShaderParametersMetadata *local_178;
  FRDGBufferDesc local_170;
  <lambda_3> local_158;
  uint local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  FRDGEventName local_100;
  longlong local_e0;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_b8;
  FGPUSceneResourceParameters local_98;
  
  local_41c = 0;
  bVar54 = -1 < CpuChannel->Enabled;
  if (bVar54) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId220,"FRayTracingScene::Update",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
               ,0xdc);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId220);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_RayTracingScene_Update =
         (FThreadSafeStaticStat<_public:_void___cdecl_FRayTracingScene::Update(FRDGBuilder_&,FSceneUniformBuffer_&,FGPUScene_const_*,ERDGPassFlags)_::_2_::FStat_STAT_RayTracingScene_Update>
          )0x0;
    FThreadSafeStaticStatInner<`FRayTracingScene::Update'::__l2::FStat_STAT_RayTracingScene_Update,1>
    ::GetStatId(&StatPtr_STAT_RayTracingScene_Update);
    _Init_thread_footer(&::_TSS0);
  }
  TVar28 = FThreadSafeStaticStatInner<`FRayTracingScene::Update'::__l2::FStat_STAT_RayTracingScene_Update,1>
           ::GetStatId(&StatPtr_STAT_RayTracingScene_Update);
  local_1a8.Impl._Line = 0xdd;
  local_1a8.Impl._Function =
       "void __cdecl FRayTracingScene::Update(class FRDGBuilder &,class FSceneUniformBuffer &,const class FGPUScene *,enum ERDGPassFlags)"
  ;
  local_1a8.Impl._Column = 2;
  local_1a8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_398,*(TStatIdData **)&(TVar28.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_1a8);
  pTVar19 = CVarRayTracingSceneBuildMode.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3e8 = 8;
  if (pTVar19->ShadowedValue[1] != 0) {
    local_3e8 = 4;
  }
  if ((this->bInitializationDataBuilt == false) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInitializationDataBuilt",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                          ,0xe3,L"BuildInitializationData(...) must be called before Update(...)."),
     bVar23)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  local_3e0 = *(int *)&(this->ActiveViews).field_0x8;
  uStack_350 = 0x10109;
  local_348 = 0;
  local_358 = (TRDGUniformBuffer<FSceneUniformParameters> *)CONCAT44(local_3e0 * 3,4);
  this->bUsedThisFrame = true;
  local_178 = (FShaderParametersMetadata *)0x0;
  local_188 = local_358;
  uStack_17c = uStack_34c;
  EStack_180 = StructuredBuffer|ShaderResource|SourceCopy|UnorderedAccess|Static;
  local_338.Buffer =
       FRDGBuilder::CreateBuffer
                 (param_1,(FRDGBufferDesc *)&local_188,L"FRayTracingScene::InstanceStatsBuffer",None
                 );
  this->InstanceStatsBuffer = local_338.Buffer;
  local_338._padding_._2_1_ = 0;
  bVar24 = 0;
  if ((((local_338.Buffer)->Desc).Usage & DrawIndirect) != None) {
    bVar24 = 0x1c;
  }
  local_338._padding_._0_2_ = (ushort)bVar24;
  local_210.DebugName = (wchar_t *)FRDGBuilder::CreateUAV(param_1,&local_338,None);
  AddClearUAVPass(param_1,(FRDGBufferUAV *)local_210.DebugName,0,param_4);
  pTVar20 = CVarRayTracingSceneCompactInstances.Ref;
  bVar23 = IsInParallelRenderingThread();
  if ((!bVar23) &&
     (bVar23 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar23)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  bVar23 = pTVar20->ShadowedValue[1];
  local_418 = 0;
  aVar51 = (atomic<unsigned___int64>)&this->ActiveViews;
  local_210.EmptyEventRef.Object = (TEventCount<unsigned_int> *)aVar51;
  do {
    uVar47 = local_418;
    if (((this->Layers).ArrayNum <= (int)local_418) &&
       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar25)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_260._padding_._4_4_ = 1;
    pFVar52 = (this->Layers).AllocatorInstance.Data + (longlong)(int)uVar47 * 0x70;
    local_260._padding_._0_4_ = 0;
    local_260.UnvisitedBitMask = 0xffffffff;
    local_260.CurrentBitIndex = 0;
    local_260.BaseBitIndex = 0;
    local_3d0 = pFVar52;
    local_260.Array = (TBitArray<FDefaultBitArrayAllocator> *)((longlong)aVar51 + 0x10);
    if (*(int *)((longlong)aVar51 + 0x28) != 0) {
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_260);
    }
    unique0x100015df =
         (TEventCount<unsigned_int> *)
         CONCAT44(local_260._padding_._4_4_,(undefined4)local_260._padding_);
    local_1c8 = (wchar_t *)CONCAT44(local_260.CurrentBitIndex,local_260.UnvisitedBitMask);
    uStack_1c0 = CONCAT44(local_260._28_4_,local_260.BaseBitIndex);
    iVar44 = *(int *)((longlong)aVar51 + 8) - *(int *)((longlong)aVar51 + 0x34);
    FStack_1d0.ReferenceController = (TReferenceControllerBase<1> *)local_260.Array;
    local_1e8._8_8_ = aVar51;
    local_1b8 = iVar44;
    pTVar29 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
              TConstSetBitIterator<FDefaultBitArrayAllocator>
                        (&local_b8,(TBitArray<FDefaultBitArrayAllocator> *)((longlong)aVar51 + 0x10)
                         ,*(int *)((longlong)aVar51 + 0x28));
    local_e0 = pTVar29->_padding_;
    pTStack_d8 = pTVar29->Array;
    local_d0._0_4_ = pTVar29->UnvisitedBitMask;
    local_d0._4_4_ = pTVar29->CurrentBitIndex;
    uStack_c8 = *(undefined8 *)&pTVar29->BaseBitIndex;
    aVar48 = aVar51;
    while( true ) {
      if (*(int *)((longlong)aVar48 + 8) - *(int *)((longlong)aVar48 + 0x34) != iVar44) {
        local_446[0] = 0;
        `TSparseArray<int,FDefaultSparseArrayAllocator>::TRangedForIterator::operator!='::__l2::
        <lambda_1>::operator()(local_446);
      }
      if (((local_1c8._4_4_ == local_d0._4_4_) &&
          ((TBitArray<FDefaultBitArrayAllocator> *)FStack_1d0.ReferenceController == pTStack_d8)) &&
         (aVar48 == aVar51)) break;
      local_3dc = *(uint *)(*(longlong *)aVar48 + (longlong)local_1c8._4_4_ * 8);
      lVar49 = (longlong)(int)local_3dc;
      local_3d8 = ~local_3dc >> 0x1f;
      uVar47 = 0;
      if ((int)local_3dc < *(int *)(pFVar52 + 0x60)) {
        uVar47 = local_3d8;
      }
      if ((uVar47 == 0) &&
         (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar25)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar19 = CVarRayTracingSceneCompactInstancesMargin.Ref;
      aVar53 = (atomic<UE::Tasks::Private::FTaskBase_*>)
               (*(longlong *)(pFVar52 + 0x58) + lVar49 * 0x188);
      local_420 = *(int *)((longlong)aVar53 + 100) +
                  (int)((TLinkedList<FShaderParametersMetadata_*> *)((longlong)aVar53 + 0x60))->
                       _padding_;
      local_368 = lVar49;
      if (bVar23 != false) {
        bVar25 = IsInParallelRenderingThread();
        if ((!bVar25) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pTVar21 = CVarRayTracingSceneCompactInstancesMin.Ref;
        uVar47 = pTVar19->ShadowedValue[1] +
                 (int)((FShaderParametersMetadata *)((longlong)aVar53 + 0x180))->_padding_;
        bVar25 = IsInParallelRenderingThread();
        if ((!bVar25) &&
           (bVar25 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007955>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6d3,"IsInParallelRenderingThread()"), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_420 = *(int *)((longlong)aVar53 + 100) +
                    (int)((TLinkedList<FShaderParametersMetadata_*> *)((longlong)aVar53 + 0x60))->
                         _padding_;
        if (uVar47 < (uint)pTVar21->ShadowedValue[1]) {
          uVar47 = pTVar21->ShadowedValue[1];
        }
        if (uVar47 < local_420) {
          local_420 = uVar47;
        }
      }
      *(uint *)((longlong)aVar53 + 0x184) = local_420;
      uStack_274 = 0;
      local_3e4 = 1;
      if (1 < local_420) {
        local_3e4 = local_420;
      }
      uVar47 = local_3e4 + 0x1fff;
      local_268 = *(undefined8 *)(local_3d0 + 0x68);
      uStack_26c = local_3e8;
      uStack_114 = 0;
      uStack_110 = 0;
      uStack_10c = local_3e8;
      local_278 = local_420;
      local_118 = local_420;
      local_108 = local_268;
      (**(code **)(GDynamicRHI->_padding_ + 0x498))(GDynamicRHI,&local_3f8);
      ppwVar6 = (wchar_t **)((longlong)aVar53 + 0x108);
      if ((FRHIResource **)ppwVar6 == &local_3f8) {
LAB_1453b4384:
        if (local_3f8 != (FRHIResource *)0x0) {
          FRHIResource::Release(local_3f8);
        }
      }
      else {
        pFVar8 = (FRHIResource *)*ppwVar6;
        *ppwVar6 = (wchar_t *)local_3f8;
        local_3f8 = (FRHIResource *)0x0;
        if (pFVar8 != (FRHIResource *)0x0) {
          FRHIResource::Release(pFVar8);
          goto LAB_1453b4384;
        }
      }
      pFVar8 = (FRHIResource *)*ppwVar6;
      pFVar7 = (FRDGPooledBuffer *)((longlong)aVar53 + 0x140);
      pFVar41 = (FRDGPooledBuffer *)pFVar7->_padding_;
      local_440._0_4_ = pFVar8[8].AtomicFlags;
      local_440[4] = pFVar8[8].ResourceType;
      local_440[5] = pFVar8[8].field_0xd;
      local_440._6_2_ = pFVar8[8]._padding_;
      local_440._8_8_ = pFVar8[8].OwnerName;
      local_430 = pFVar8[9]._padding_;
      uVar39 = 1;
      if (1 < (ulonglong)local_440._0_8_) {
        uVar39 = local_440._0_8_;
      }
      uVar40 = uVar39 + 0xffffff & 0xffffffffff000000;
      if (((pFVar41 == (FRDGPooledBuffer *)0x0) ||
          (uVar27 = (pFVar41->Desc).NumElements * (pFVar41->Desc).BytesPerElement, uVar27 < uVar40))
         || (uVar40 < uVar27 >> 1)) {
        local_410.NumElements = (uint)(uVar39 + 0xffffff) & 0xff000000;
        local_410.Usage = VertexBuffer|ShaderResource|UnorderedAccess|Static;
        local_410.BytesPerElement = 1;
        local_410.Metadata = (FShaderParametersMetadata *)0x0;
        local_170.BytesPerElement = 1;
        local_170.NumElements = local_410.NumElements;
        local_170._12_4_ = local_410._12_4_;
        local_170.Usage = AccelerationStructure;
        local_170.Metadata = (FShaderParametersMetadata *)0x0;
        TVar30 = AllocatePooledBuffer((FRDGBufferDesc *)&local_220,(wchar_t *)&local_170,0x10);
        if (pFVar7 != TVar30.Reference) {
          pFVar41 = (FRDGPooledBuffer *)pFVar7->_padding_;
          pFVar7->_padding_ = (longlong)(TVar30.Reference)->_padding_;
          (TVar30.Reference)->_padding_ = 0;
          if (pFVar41 != (FRDGPooledBuffer *)0x0) {
            plVar1 = &pFVar41->_padding_;
            LOCK();
            lVar49 = *plVar1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)lVar49 == 1) {
              if (plVar1 == (longlong *)0x0) {
                pFVar41 = (FRDGPooledBuffer *)0x0;
              }
              if (pFVar41 != (FRDGPooledBuffer *)0x0) {
                (**(code **)pFVar41->_padding_)(pFVar41,1);
              }
            }
          }
        }
        if (local_220 != (FRDGPooledBuffer *)0x0) {
          plVar1 = &local_220->_padding_;
          LOCK();
          lVar49 = *plVar1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)lVar49 == 1) {
            pFVar41 = local_220;
            if (plVar1 == (longlong *)0x0) {
              pFVar41 = (FRDGPooledBuffer *)0x0;
            }
            if (pFVar41 != (FRDGPooledBuffer *)0x0) {
              (**(code **)pFVar41->_padding_)(pFVar41,1);
            }
          }
        }
      }
      local_240.Buffer =
           FRDGBuilder::RegisterExternalBuffer
                     (param_1,(TRefCountPtr<FRDGPooledBuffer> *)pFVar7,None);
      local_240._padding_ = (longlong)*ppwVar6;
      this_00 = &param_1->UserValidation;
      ((TRefCountPtr<FRHIUniformBufferLayout_const_> *)((longlong)aVar53 + 0x148))->Reference =
           (FRHIUniformBufferLayout *)local_240.Buffer;
      local_240._padding_._0_4_ = (uint)local_240._padding_ & 0xffffff00;
      local_240._padding_._4_4_ = 0;
      local_240._padding_._0_4_ = 0xffffffff;
      FRDGUserValidation::ValidateCreateSRV(this_00,&local_240);
      pFVar32 = local_240.Buffer;
      local_428 = (FMemStackBase *)&param_1->_padding_;
      this_01 = &param_1->Views;
      pFVar31 = FMemStackBase::Alloc(local_428,0x50,8);
      lVar49 = pFVar32->_padding_;
      *(byte *)&pFVar31->_padding_ = (byte)pFVar31->_padding_ & 0xfe;
      *(undefined8 *)((longlong)&pFVar31->_padding_ + 4) = 0xffffffffffffffff;
      pFVar31->_padding_ = lVar49;
      pFVar31->_padding_ = 0;
      *(undefined1 *)&pFVar31->_padding_ = 3;
      pFVar31->_padding_ = (longlong)&___7FRDGBufferSRV__6B_;
      (pFVar31->Desc)._padding_ = CONCAT44(local_240._padding_._4_4_,(uint)local_240._padding_);
      (pFVar31->Desc)._padding_ =
           CONCAT44(local_240._padding_._4_4_,(undefined4)local_240._padding_);
      (pFVar31->Desc)._padding_ = local_240._padding_;
      (pFVar31->Desc).Buffer = local_240.Buffer;
      iVar44 = (param_1->Views).Array.ArrayNum;
      if (iVar44 == (param_1->Views).Array.ArrayMax) {
        iVar44 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                           (0x808,(ForElementType<FRDGView_*> *)this_01,
                            &(param_1->Views).Array.ArrayMax);
      }
      (param_1->Views).Array.ArrayNum = iVar44 + 1;
      (this_01->Array).AllocatorInstance.Data[iVar44] = (FRDGView *)pFVar31;
      *(int *)((longlong)&pFVar31->_padding_ + 4) = (param_1->Views).Array.ArrayNum + -1;
      FRDGUserValidation::ValidateCreateSRV(this_00,pFVar31);
      (((TArray<FShaderParametersMetadata::FMember,TSizedDefaultAllocator<32>_> *)
       ((longlong)aVar53 + 0x150))->AllocatorInstance).Data = (FScriptContainerElement *)pFVar31;
      local_410.Usage = 0x90008;
      local_410.NumElements =
           (uint)((local_440._8_8_ + -1 + (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment)
                 / (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment);
      local_410.BytesPerElement = GRHIGlobals.RayTracing.ScratchBufferAlignment;
      local_410.Metadata = (FShaderParametersMetadata *)0x0;
      local_308.BytesPerElement = GRHIGlobals.RayTracing.ScratchBufferAlignment;
      local_308.NumElements = local_410.NumElements;
      local_308.Usage = 0x90008;
      local_308._12_4_ = local_410._12_4_;
      local_308.Metadata = (FShaderParametersMetadata *)0x0;
      FRDGUserValidation::ValidateCreateBuffer
                (this_00,&local_308,L"FRayTracingScene::ScratchBuffer",None);
      pFVar45 = local_428;
      this_02 = &param_1->Buffers;
      uVar27 = local_308.BytesPerElement;
      if (local_308.BytesPerElement == 0) {
        uVar27 = 1;
      }
      if (local_308.NumElements == 0) {
        local_308.NumElements = 1;
      }
      local_308.BytesPerElement = uVar27;
      pFVar32 = FMemStackBase::Alloc(local_428,0x130,8);
      pFVar32 = FRDGBuffer::FRDGBuffer(pFVar32,L"FRayTracingScene::ScratchBuffer",&local_308,None);
      iVar44 = (param_1->Buffers).Array.ArrayNum;
      if (iVar44 == (param_1->Buffers).Array.ArrayMax) {
        iVar44 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)this_02,
                            &(param_1->Buffers).Array.ArrayMax);
      }
      (param_1->Buffers).Array.ArrayNum = iVar44 + 1;
      (this_02->Array).AllocatorInstance.Data[iVar44] = pFVar32;
      (pFVar32->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
      FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
      *(FRDGBuffer **)((longlong)aVar53 + 0x120) = pFVar32;
      local_440._0_8_ =
           CONCAT44(uVar47,GRHIGlobals.RayTracing.InstanceDescriptorSize) & 0xffffe000ffffffff;
      local_440._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess;
      local_430 = 0;
      local_410.BytesPerElement = local_440._0_4_;
      local_410.NumElements = local_440._4_4_;
      local_410._8_8_ = local_440._8_8_;
      local_410.Metadata = (FShaderParametersMetadata *)0x0;
      FRDGUserValidation::ValidateCreateBuffer
                (this_00,&local_410,L"FRayTracingScene::InstanceBuffer",None);
      uVar27 = local_410.BytesPerElement;
      if (local_410.BytesPerElement == 0) {
        uVar27 = 1;
      }
      if (local_410.NumElements == 0) {
        local_410.NumElements = 1;
      }
      local_410.BytesPerElement = uVar27;
      pFVar32 = FMemStackBase::Alloc(pFVar45,0x130,8);
      pFVar32 = FRDGBuffer::FRDGBuffer(pFVar32,L"FRayTracingScene::InstanceBuffer",&local_410,None);
      piVar4 = &(param_1->Buffers).Array.ArrayMax;
      iVar44 = (param_1->Buffers).Array.ArrayNum;
      if (iVar44 == *piVar4) {
        iVar44 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                           (0x808,(ForElementType<FRDGBuffer_*> *)this_02,piVar4);
      }
      (param_1->Buffers).Array.ArrayNum = iVar44 + 1;
      (this_02->Array).AllocatorInstance.Data[iVar44] = pFVar32;
      (pFVar32->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
      FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
      FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
      *(FRDGBuffer **)((longlong)aVar53 + 0x110) = pFVar32;
      if (bVar23 != false) {
        local_388._padding_._1_1_ = 0;
        local_388._padding_._2_1_ = 0;
        local_388._padding_._0_1_ = 0;
        if (((pFVar32->Desc).Usage & DrawIndirect) != None) {
          local_388._padding_._0_1_ = 0x1c;
        }
        local_388.Buffer = pFVar32;
        FRDGUserValidation::ValidateCreateUAV(this_00,&local_388);
        pFVar32 = local_388.Buffer;
        pFVar33 = FMemStackBase::Alloc(pFVar45,0x48,8);
        lVar49 = pFVar32->_padding_;
        *(byte *)&pFVar33->_padding_ = (byte)pFVar33->_padding_ & 0xfe;
        pFVar33->_padding_ = lVar49;
        *(undefined8 *)((longlong)&pFVar33->_padding_ + 4) = 0xffffffffffffffff;
        pFVar33->_padding_ = 0;
        *(undefined1 *)&pFVar33->_padding_ = 2;
        *(undefined1 *)&pFVar33->_padding_ = 0;
        pFVar33->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar33->Desc)._padding_ =
             CONCAT53(local_388._padding_._3_5_,
                      CONCAT12(local_388._padding_._2_1_,
                               CONCAT11(local_388._padding_._1_1_,(undefined1)local_388._padding_)))
        ;
        (pFVar33->Desc).Buffer = local_388.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_01,(FRDGView *)pFVar33)
        ;
        FRDGUserValidation::ValidateCreateUAV(this_00,pFVar33);
        AddClearUAVPass(param_1,pFVar33,0,param_4);
        pFVar45 = local_428;
      }
      if (GRHIGlobals.RayTracing.RequiresSeparateHitGroupContributionsBuffer != false) {
        local_440._4_4_ = uVar47 & 0xffffe000;
        local_440._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess;
        local_440._0_4_ = 4;
        local_430 = 0;
        local_2f0.BytesPerElement = 4;
        local_2f0.NumElements = local_440._4_4_;
        local_2f0._8_8_ = local_440._8_8_;
        local_2f0.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer
                  (this_00,&local_2f0,L"FRayTracingScene::HitGroupContributionsBuffer",None);
        uVar27 = local_2f0.BytesPerElement;
        if (local_2f0.BytesPerElement == 0) {
          uVar27 = 1;
        }
        if (local_2f0.NumElements == 0) {
          local_2f0.NumElements = 1;
        }
        local_2f0.BytesPerElement = uVar27;
        pFVar32 = FMemStackBase::Alloc(pFVar45,0x130,8);
        pFVar32 = FRDGBuffer::FRDGBuffer
                            (pFVar32,L"FRayTracingScene::HitGroupContributionsBuffer",&local_2f0,
                             None);
        TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert(this_02,pFVar32);
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
        *(FRDGBuffer **)((longlong)aVar53 + 0x118) = pFVar32;
      }
      if (this->bTracingFeedbackEnabled == false) {
        cVar26 = '\0';
      }
      else {
        local_440._4_4_ = uVar47 & 0xffffe000;
        local_440._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess;
        local_440._0_4_ = 4;
        local_430 = 0;
        local_2d8.BytesPerElement = 4;
        local_2d8.NumElements = local_440._4_4_;
        local_2d8._8_8_ = local_440._8_8_;
        local_2d8.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer
                  (this_00,&local_2d8,L"FRayTracingScene::InstanceHitCount",None);
        uVar27 = local_2d8.BytesPerElement;
        if (local_2d8.BytesPerElement == 0) {
          uVar27 = 1;
        }
        if (local_2d8.NumElements == 0) {
          local_2d8.NumElements = 1;
        }
        local_2d8.BytesPerElement = uVar27;
        pFVar32 = FMemStackBase::Alloc(pFVar45,0x130,8);
        pFVar32 = FRDGBuffer::FRDGBuffer
                            (pFVar32,L"FRayTracingScene::InstanceHitCount",&local_2d8,None);
        TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert(this_02,pFVar32);
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
        local_378._padding_._1_1_ = 0;
        local_378._padding_._2_1_ = 0;
        ((FHashedName *)((longlong)aVar53 + 0x128))->Hash = (ulong64)pFVar32;
        local_378._padding_._0_1_ = 0;
        if (((pFVar32->Desc).Usage & DrawIndirect) != None) {
          local_378._padding_._0_1_ = 0x1c;
        }
        local_378.Buffer = pFVar32;
        FRDGUserValidation::ValidateCreateUAV(this_00,&local_378);
        pFVar32 = local_378.Buffer;
        pFVar33 = FMemStackBase::Alloc(pFVar45,0x48,8);
        lVar49 = pFVar32->_padding_;
        *(byte *)&pFVar33->_padding_ = (byte)pFVar33->_padding_ & 0xfe;
        pFVar33->_padding_ = lVar49;
        *(undefined8 *)((longlong)&pFVar33->_padding_ + 4) = 0xffffffffffffffff;
        pFVar33->_padding_ = 0;
        *(undefined1 *)&pFVar33->_padding_ = 2;
        *(undefined1 *)&pFVar33->_padding_ = 1;
        pFVar33->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar33->Desc)._padding_ =
             CONCAT53(local_378._padding_._3_5_,
                      CONCAT12(local_378._padding_._2_1_,
                               CONCAT11(local_378._padding_._1_1_,(undefined1)local_378._padding_)))
        ;
        (pFVar33->Desc).Buffer = local_378.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert(this_01,(FRDGView *)pFVar33)
        ;
        FRDGUserValidation::ValidateCreateUAV(this_00,pFVar33);
        *(FRDGBufferUAV **)((longlong)aVar53 + 0x130) = pFVar33;
        AddClearUAVPass(param_1,pFVar33,0,param_4);
        local_440._4_4_ = uVar47 & 0xffffe000;
        local_440._8_4_ = StructuredBuffer|ShaderResource;
        local_440._0_4_ = 4;
        local_430 = 0;
        local_2c0.BytesPerElement = 4;
        local_2c0.NumElements = local_440._4_4_;
        local_2c0._8_8_ = local_440._8_8_;
        local_2c0.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer
                  (this_00,&local_2c0,L"FRayTracingScene::AccelerationStructureIndexBuffer",None);
        uVar47 = local_2c0.BytesPerElement;
        if (local_2c0.BytesPerElement == 0) {
          uVar47 = 1;
        }
        if (local_2c0.NumElements == 0) {
          local_2c0.NumElements = 1;
        }
        local_2c0.BytesPerElement = uVar47;
        pFVar32 = FMemStackBase::Alloc(local_428,0x130,8);
        pFVar32 = FRDGBuffer::FRDGBuffer
                            (pFVar32,L"FRayTracingScene::AccelerationStructureIndexBuffer",
                             &local_2c0,None);
        TRDGHandleRegistry<TRDGHandle<FRDGBuffer,unsigned_int>,2>::Insert(this_02,pFVar32);
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
        *(FRDGBuffer **)((longlong)aVar53 + 0x138) = pFVar32;
        uVar47 = *(uint *)((longlong)aVar53 + 0x78);
        pFVar36 = *(FShaderParametersMetadata **)((longlong)aVar53 + 0x70);
        if (((int)uVar47 < 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_218 = *(FRDGBuffer **)((longlong)aVar53 + 0x138);
        uVar46 = (longlong)(int)uVar47 << 2;
        FRDGUserValidation::ValidateUploadBuffer(this_00,local_218,pFVar36,uVar46);
        local_res10 = pFVar36;
        if (uVar46 != 0) {
          local_res10 = FMemStackBase::Alloc(local_428,uVar46,0x10);
          memcpy(local_res10,pFVar36,uVar46);
        }
        iVar44 = (param_1->UploadedBuffers).ArrayNum;
        piVar4 = &(param_1->UploadedBuffers).ArrayMax;
        if (iVar44 == *piVar4) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,piVar4);
        }
        (param_1->UploadedBuffers).ArrayNum = iVar44 + 1;
        pFVar9 = (param_1->UploadedBuffers).AllocatorInstance.Data;
        pFVar9[iVar44].bUseDataCallbacks = false;
        pFVar9[iVar44].bUseFreeCallbacks = false;
        pFVar9[iVar44].Buffer = local_218;
        pFVar9[iVar44].Data = local_res10;
        pFVar9[iVar44].DataSize = uVar46;
        *(undefined8 *)&pFVar9[iVar44].DataCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataSizeCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFreeCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFillCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFillCallback.field_0x28 = 0;
        pbVar2 = (byte *)((longlong)&local_218->_padding_ + 1);
        *pbVar2 = *pbVar2 | 0x80;
        cVar26 = this->bTracingFeedbackEnabled;
      }
      local_res10 = (FShaderParametersMetadata *)0x0;
      if (((this->bInstanceExtraDataBufferEnabled != false) || (cVar26 != '\0')) ||
         (this->bInstanceDebugDataEnabled != false)) {
        local_430 = 0;
        local_440._8_4_ = StructuredBuffer|ShaderResource|UnorderedAccess;
        local_440._4_4_ = local_3e4;
        local_440._0_4_ = 8;
        local_2a8.Metadata = (FShaderParametersMetadata *)0x0;
        local_2a8.BytesPerElement = 8;
        local_2a8.NumElements = local_3e4;
        local_2a8._8_8_ = local_440._8_8_;
        FRDGUserValidation::ValidateCreateBuffer
                  (this_00,&local_2a8,L"FRayTracingScene::InstanceExtraDataBuffer",None);
        pFVar45 = local_428;
        uVar47 = local_2a8.BytesPerElement;
        if (local_2a8.BytesPerElement == 0) {
          uVar47 = 1;
        }
        if (local_2a8.NumElements == 0) {
          local_2a8.NumElements = 1;
        }
        local_2a8.BytesPerElement = uVar47;
        pFVar32 = FMemStackBase::Alloc(local_428,0x130,8);
        pFVar32 = FRDGBuffer::FRDGBuffer
                            (pFVar32,L"FRayTracingScene::InstanceExtraDataBuffer",&local_2a8,None);
        iVar44 = (param_1->Buffers).Array.ArrayNum;
        if (iVar44 == (param_1->Buffers).Array.ArrayMax) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)this_02,
                              &(param_1->Buffers).Array.ArrayMax);
        }
        (param_1->Buffers).Array.ArrayNum = iVar44 + 1;
        (this_02->Array).AllocatorInstance.Data[iVar44] = pFVar32;
        (pFVar32->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
        local_3a8._padding_._1_1_ = 0;
        local_3a8._padding_._2_1_ = 0;
        *(FRDGBuffer **)((longlong)aVar53 + 0x158) = pFVar32;
        local_3a8._padding_._0_1_ = 0;
        if (((pFVar32->Desc).Usage & DrawIndirect) != None) {
          local_3a8._padding_._0_1_ = 0x1c;
        }
        local_3a8.Buffer = pFVar32;
        FRDGUserValidation::ValidateCreateUAV(this_00,&local_3a8);
        pFVar32 = local_3a8.Buffer;
        local_res10 = FMemStackBase::Alloc(pFVar45,0x48,8);
        lVar49 = pFVar32->_padding_;
        piVar4 = &(param_1->Views).Array.ArrayMax;
        *(byte *)&((FRDGBufferUAV *)local_res10)->_padding_ =
             (byte)((FRDGBufferUAV *)local_res10)->_padding_ & 0xfe;
        *(undefined8 *)((longlong)&((FRDGBufferUAV *)local_res10)->_padding_ + 4) =
             0xffffffffffffffff;
        ((FRDGBufferUAV *)local_res10)->_padding_ = lVar49;
        ((FRDGBufferUAV *)local_res10)->_padding_ = 0;
        *(undefined1 *)&((FRDGBufferUAV *)local_res10)->_padding_ = 2;
        *(undefined1 *)&((FRDGBufferUAV *)local_res10)->_padding_ = 0;
        ((FRDGBufferUAV *)local_res10)->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (((FRDGBufferUAV *)local_res10)->Desc)._padding_ =
             CONCAT53(local_3a8._padding_._3_5_,
                      CONCAT12(local_3a8._padding_._2_1_,
                               CONCAT11(local_3a8._padding_._1_1_,(undefined1)local_3a8._padding_)))
        ;
        (((FRDGBufferUAV *)local_res10)->Desc).Buffer = local_3a8.Buffer;
        iVar44 = (param_1->Views).Array.ArrayNum;
        if (iVar44 == *piVar4) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGView_*>_>
                             (0x808,(ForElementType<FRDGView_*> *)this_01,piVar4);
        }
        (param_1->Views).Array.ArrayNum = iVar44 + 1;
        (this_01->Array).AllocatorInstance.Data[iVar44] = (FRDGView *)local_res10;
        *(int *)((longlong)&((FRDGBufferUAV *)local_res10)->_padding_ + 4) =
             (param_1->Views).Array.ArrayNum + -1;
        FRDGUserValidation::ValidateCreateUAV(this_00,(FRDGBufferUAV *)local_res10);
        AddClearUAVPass(param_1,(FRDGBufferUAV *)local_res10,0xffffffff,param_4);
      }
      if (local_420 != 0) {
        puVar50 = (undefined8 *)0x0;
        local_328 = (FTaskHandle *)0x0;
        local_320 = 0;
        local_210.LastTask = aVar53;
        FRDGBuilder::
        AddCommandListSetupTask<_FRayTracingScene::Update_::__l44::<lambda_1>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                  (param_1,(<lambda_1> *)&local_210.TaskCount,&local_210,
                   (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                   (ETaskPriority)&local_328,true,Execute);
        pFVar22 = local_328;
        DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_328,(int)local_320);
        if (pFVar22 != (FTaskHandle *)0x0) {
          FMemory::Free(pFVar22);
        }
        if (local_210.TaskCount != (atomic<unsigned___int64>)0x0) {
          LOCK();
          puVar34 = (undefined8 *)((longlong)local_210.TaskCount + 0x30);
          iVar44 = *(int *)puVar34;
          *(int *)puVar34 = *(int *)puVar34 + -1;
          UNLOCK();
          if (iVar44 == 1) {
            (*(code *)**(undefined8 **)local_210.TaskCount)(local_210.TaskCount,1);
          }
        }
        local_318 = (FTaskHandle *)0x0;
        local_310 = 0;
        local_1e8._0_8_ = aVar53;
        FRDGBuilder::
        AddCommandListSetupTask<_FRayTracingScene::Update_::__l44::<lambda_2>,TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_>_>
                  (param_1,(<lambda_2> *)&local_210.EmptyEventRef.SharedReferenceCount,
                   (FPipe *)local_1e8,
                   (TArray<UE::Tasks::Private::FTaskHandle,TSizedDefaultAllocator<32>_> *)0x0,
                   (ETaskPriority)&local_318,true,Execute);
        pFVar22 = local_318;
        DestructItems<UE::Tasks::Private::FTaskHandle,int>(local_318,(int)local_310);
        if (pFVar22 != (FTaskHandle *)0x0) {
          FMemory::Free(pFVar22);
        }
        if (local_210.EmptyEventRef.SharedReferenceCount.ReferenceController !=
            (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3 = local_210.EmptyEventRef.SharedReferenceCount.ReferenceController + 3;
          lVar49 = pTVar3->_padding_;
          *(int *)&pTVar3->_padding_ = (int)pTVar3->_padding_ + -1;
          UNLOCK();
          if ((int)lVar49 == 1) {
            (**(code **)(local_210.EmptyEventRef.SharedReferenceCount.ReferenceController)->
                        _padding_)
                      (local_210.EmptyEventRef.SharedReferenceCount.ReferenceController,1);
          }
        }
        pFVar45 = local_428;
        puVar34 = FMemStackBase::Alloc(local_428,0x90,0x10);
        if (puVar34 == (undefined8 *)0x0) {
          bVar25 = ::FDebug::CheckVerifyFailedImpl2
                             ("Object",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                              ,0x61,L"");
          if (bVar25) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
        }
        else {
          puVar34[2] = 0;
          *puVar34 = &___7__TObject_VFBuildInstanceBufferPassParams___FRDGAllocator__6B_;
          puVar34[3] = 0;
          puVar34[4] = 0;
          puVar34[5] = 0;
          puVar34[6] = 0;
          *(undefined1 *)(puVar34 + 7) = 1;
          puVar34[0xc] = 0;
          puVar34[0xd] = 0;
          puVar34[0xe] = 0;
          puVar34[0xf] = 0;
          puVar34[0x10] = 0;
          puVar50 = puVar34;
        }
        local_3f0 = puVar50;
        if (((pFVar45[1].Top <= &local_3f0) &&
            (&local_3f0 <
             (undefined8 **)
             ((longlong)pFVar45[1].Top + (longlong)*(int *)((longlong)&pFVar45[1].End + 4) * 8))) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar44 = *(int *)&pFVar45[1].End;
        piVar4 = (int *)((longlong)&pFVar45[1].End + 4);
        if (iVar44 == *piVar4) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)(pFVar45 + 1),piVar4);
        }
        pFVar5 = (FBuildInstanceBufferPassParams *)(puVar50 + 2);
        *(int *)&pFVar45[1].End = iVar44 + 1;
        local_3b8._padding_._1_1_ = 0;
        *(undefined8 **)(pFVar45[1].Top + (longlong)iVar44 * 8) = local_3f0;
        local_3b8.Buffer = *(FRDGBuffer **)((longlong)aVar53 + 0x110);
        local_3b8._padding_._2_1_ = 0;
        local_3b8._padding_._0_1_ = 0;
        if ((((local_3b8.Buffer)->Desc).Usage & DrawIndirect) != None) {
          local_3b8._padding_._0_1_ = 0x1c;
        }
        FRDGUserValidation::ValidateCreateUAV(this_00,&local_3b8);
        pFVar32 = local_3b8.Buffer;
        pFVar33 = FMemStackBase::Alloc(pFVar45,0x48,8);
        lVar49 = pFVar32->_padding_;
        *(byte *)&pFVar33->_padding_ = (byte)pFVar33->_padding_ & 0xfe;
        pFVar33->_padding_ = lVar49;
        *(undefined8 *)((longlong)&pFVar33->_padding_ + 4) = 0xffffffffffffffff;
        pFVar33->_padding_ = 0;
        *(undefined1 *)&pFVar33->_padding_ = 2;
        *(undefined1 *)&pFVar33->_padding_ = 0;
        pFVar33->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
        (pFVar33->Desc)._padding_ =
             CONCAT53(local_3b8._padding_._3_5_,
                      CONCAT12(local_3b8._padding_._2_1_,
                               CONCAT11(local_3b8._padding_._1_1_,(undefined1)local_3b8._padding_)))
        ;
        (pFVar33->Desc).Buffer = local_3b8.Buffer;
        TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                  (&param_1->Views,(FRDGView *)pFVar33);
        FRDGUserValidation::ValidateCreateUAV(this_00,pFVar33);
        pFVar5->InstanceBuffer = pFVar33;
        if (GRHIGlobals.RayTracing.RequiresSeparateHitGroupContributionsBuffer != false) {
          local_3c8.Buffer = *(FRDGBuffer **)((longlong)aVar53 + 0x118);
          local_3c8._padding_._2_1_ = 0;
          local_3c8._padding_._1_1_ = 0;
          local_3c8._padding_._0_1_ = 0;
          if ((((local_3c8.Buffer)->Desc).Usage & DrawIndirect) != None) {
            local_3c8._padding_._0_1_ = 0x1c;
          }
          FRDGUserValidation::ValidateCreateUAV(this_00,&local_3c8);
          pFVar32 = local_3c8.Buffer;
          pFVar33 = FMemStackBase::Alloc(local_428,0x48,8);
          lVar49 = pFVar32->_padding_;
          *(byte *)&pFVar33->_padding_ = (byte)pFVar33->_padding_ & 0xfe;
          pFVar33->_padding_ = lVar49;
          *(undefined8 *)((longlong)&pFVar33->_padding_ + 4) = 0xffffffffffffffff;
          pFVar33->_padding_ = 0;
          *(undefined1 *)&pFVar33->_padding_ = 2;
          *(undefined1 *)&pFVar33->_padding_ = 0;
          pFVar33->_padding_ = (longlong)&___7FRDGBufferUAV__6B_;
          (pFVar33->Desc)._padding_ =
               CONCAT53(local_3c8._padding_._3_5_,
                        CONCAT12(local_3c8._padding_._2_1_,
                                 CONCAT11(local_3c8._padding_._1_1_,(undefined1)local_3c8._padding_)
                                ));
          (pFVar33->Desc).Buffer = local_3c8.Buffer;
          TRDGHandleRegistry<TRDGHandle<FRDGView,unsigned_int>,2>::Insert
                    (&param_1->Views,(FRDGView *)pFVar33);
          FRDGUserValidation::ValidateCreateUAV(this_00,pFVar33);
          puVar50[3] = pFVar33;
        }
        puVar50[5] = local_res10;
        pTVar35 = FSceneUniformBuffer::GetBuffer(param_2,param_1);
        pFVar36 = FSceneUniformParameters::FTypeInfo::GetStructMetadata();
        EVar42 = Static;
        if (pFVar36->BindingFlags != StaticAndShader) {
          EVar42 = pFVar36->BindingFlags;
        }
        uStack_350 = CONCAT31(uStack_350._1_3_,EVar42);
        puVar50[6] = pTVar35;
        puVar50[7] = CONCAT44(uStack_34c,uStack_350);
        local_358 = pTVar35;
        pFVar37 = FGPUScene::GetShaderParameters(param_3,&local_98,param_1);
        lVar49 = local_368;
        uVar11 = *(undefined8 *)&(pFVar37->CommonParameters).GPUSceneInstanceDataTileStride;
        uVar12 = *(undefined8 *)&(pFVar37->CommonParameters).GPUSceneMaxAllocatedInstanceId;
        uVar13 = *(undefined8 *)&(pFVar37->CommonParameters).GPUSceneNumLightmapDataItems;
        pFVar31 = pFVar37->GPUSceneInstanceSceneData;
        pFVar14 = pFVar37->GPUSceneInstancePayloadData;
        pFVar15 = pFVar37->GPUScenePrimitiveSceneData;
        pFVar16 = pFVar37->GPUSceneLightmapData;
        pFVar17 = pFVar37->GPUSceneLightData;
        uVar18 = *(undefined8 *)&pFVar37->field_0x48;
        uVar27 = local_418 * local_3e0 + local_3dc;
        puVar50[8] = *(undefined8 *)&pFVar37->CommonParameters;
        puVar50[9] = uVar11;
        puVar50[4] = local_210.DebugName;
        puVar50[10] = uVar12;
        puVar50[0xb] = uVar13;
        puVar50[0xc] = pFVar31;
        puVar50[0xd] = pFVar14;
        puVar50[0xe] = pFVar15;
        puVar50[0xf] = pFVar16;
        puVar50[0x10] = pFVar17;
        puVar50[0x11] = uVar18;
        uVar47 = 0;
        if ((int)local_3dc < (this->ViewParameters).ArrayNum) {
          uVar47 = local_3d8;
        }
        if ((uVar47 == 0) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        local_158.CullingParameters =
             *(FRayTracingCullingParameters **)
              ((this->ViewParameters).AllocatorInstance.Data + lVar49 * 0x20);
        local_158.NumNativeInstances = local_420;
        local_158.PassParams = pFVar5;
        local_158.InstanceBufferBuilder = (FRayTracingInstanceBufferBuilder *)aVar53;
        local_158.OutputStatsOffset = uVar27;
        local_158.GPUScene = param_3;
        local_158.bCompactInstanceBuffer = bVar23;
        pFVar38 = FRDGEventName::FRDGEventName(&local_100,1,L"RayTracingBuildInstanceBuffer");
        FRDGBuilder::
        AddPass<FBuildInstanceBufferPassParams,_FRayTracingScene::Update_::__l45::<lambda_3>_>
                  (param_1,pFVar38,pFVar5,param_4,&local_158);
        uVar47 = local_41c;
        local_41c = local_41c & 0xfffffffd;
        if (local_100.FormattedEventName.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.FormattedEventName.Data.AllocatorInstance.Data);
        }
        if (((uVar47 & 1) != 0) &&
           (local_41c = uVar47 & 0xfffffffc, this != (FRayTracingScene *)0x0)) {
          FMemory::Free(this);
        }
      }
      pFVar52 = local_3d0;
      if (this->bTracingFeedbackEnabled != false) {
        local_440._8_4_ = StructuredBuffer|ShaderResource;
        local_440._4_4_ = 1;
        if (1 < *(int *)(local_3d0 + 0x10)) {
          local_440._4_4_ = *(undefined4 *)(local_3d0 + 0x10);
        }
        local_440._0_4_ = 4;
        local_430 = 0;
        local_290.BytesPerElement = 4;
        local_290.NumElements = local_440._4_4_;
        local_290._8_8_ = local_440._8_8_;
        local_290.Metadata = (FShaderParametersMetadata *)0x0;
        FRDGUserValidation::ValidateCreateBuffer
                  (this_00,&local_290,L"FRayTracingScene::GeometryHandleBuffer",None);
        pFVar45 = local_428;
        uVar47 = local_290.BytesPerElement;
        if (local_290.BytesPerElement == 0) {
          uVar47 = 1;
        }
        if (local_290.NumElements == 0) {
          local_290.NumElements = 1;
        }
        local_290.BytesPerElement = uVar47;
        pFVar32 = FMemStackBase::Alloc(local_428,0x130,8);
        pFVar32 = FRDGBuffer::FRDGBuffer
                            (pFVar32,L"FRayTracingScene::GeometryHandleBuffer",&local_290,None);
        iVar44 = (param_1->Buffers).Array.ArrayNum;
        if (iVar44 == (param_1->Buffers).Array.ArrayMax) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuffer_*>_>
                             (0x808,(ForElementType<FRDGBuffer_*> *)this_02,
                              &(param_1->Buffers).Array.ArrayMax);
        }
        (param_1->Buffers).Array.ArrayNum = iVar44 + 1;
        (this_02->Array).AllocatorInstance.Data[iVar44] = pFVar32;
        (pFVar32->Handle).Index = (param_1->Buffers).Array.ArrayNum - 1;
        FRDGUserValidation::ValidateCreateBuffer(this_00,pFVar32);
        FRDGTrace::AddResource(&param_1->Trace,(FRDGViewableResource *)pFVar32);
        _Src = *(void **)(pFVar52 + 8);
        uVar47 = *(int *)(pFVar52 + 0x10) << 2;
        *(FRDGBuffer **)pFVar52 = pFVar32;
        uVar39 = (ulonglong)uVar47;
        FRDGUserValidation::ValidateUploadBuffer(this_00,pFVar32,_Src,(ulonglong)uVar47);
        _Dst = _Src;
        if (uVar39 != 0) {
          _Dst = FMemStackBase::Alloc(pFVar45,uVar39,0x10);
          memcpy(_Dst,_Src,(ulonglong)uVar47);
        }
        iVar44 = (param_1->UploadedBuffers).ArrayNum;
        piVar4 = &(param_1->UploadedBuffers).ArrayMax;
        if (iVar44 == *piVar4) {
          iVar44 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TRDGArrayAllocator<0>::ForElementType<FRDGBuilder::FUploadedBuffer>_>
                             (0x10e0,&(param_1->UploadedBuffers).AllocatorInstance,piVar4);
        }
        (param_1->UploadedBuffers).ArrayNum = iVar44 + 1;
        pFVar9 = (param_1->UploadedBuffers).AllocatorInstance.Data;
        pFVar9[iVar44].DataSize = uVar39;
        pFVar9[iVar44].bUseDataCallbacks = false;
        pFVar9[iVar44].bUseFreeCallbacks = false;
        pFVar9[iVar44].Buffer = pFVar32;
        pFVar9[iVar44].Data = _Dst;
        *(undefined8 *)&pFVar9[iVar44].DataCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataSizeCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataSizeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFreeCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFreeCallback.field_0x28 = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFillCallback = 0;
        *(undefined8 *)&pFVar9[iVar44].DataFillCallback.field_0x28 = 0;
        pbVar2 = (byte *)((longlong)&pFVar32->_padding_ + 1);
        *pbVar2 = *pbVar2 | 0x80;
      }
      if (0 < *(int *)(pFVar52 + 0x38)) {
        if ((*(int *)(pFVar52 + 0x38) != *(int *)(pFVar52 + 0x28)) &&
           (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                               ("Layer.InstancesDebugData.Num() == Layer.Instances.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\RayTracing\\RayTracingScene.cpp"
                                ,0x1cd,L""), bVar25)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c) <
             `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
             ::__l2::_thread_safe_static_guard_0__) &&
           (_Init_thread_header(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                                 ::__l2::_thread_safe_static_guard_0__),
           `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
           ::__l2::_thread_safe_static_guard_0__ == -1)) {
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
          ::__l2::DummyElement.Flags = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
          ::__l2::DummyElement.ProxyHash = 0;
          `class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
          ::__l2::DummyElement.GeometryAddress = 0;
          _Init_thread_footer(&`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                               ::__l2::_thread_safe_static_guard_0__);
        }
        uVar47 = *(uint *)(pFVar52 + 0x38);
        bVar25 = uVar47 != 0;
        if (bVar25) {
          pFVar43 = *(FRayTracingInstanceDebugData **)(pFVar52 + 0x30);
          uVar46 = (ulong64)(uVar47 << 4);
        }
        else {
          uVar47 = 1;
          pFVar43 = &`class_FRDGBuffer*___ptr64___cdecl_CreateStructuredBuffer<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>(FRDGBuilder&___ptr64,wchar_t_const*___ptr64,TArray<FRayTracingInstanceDebugData,TSizedDefaultAllocator<32>_>_const&___ptr64,ERDGInitialDataFlags)'
                     ::__l2::DummyElement;
          uVar46 = 0x10;
        }
        pFVar32 = CreateStructuredBuffer
                            (param_1,L"FRayTracingScene::InstanceDebugData",0x10,uVar47,pFVar43,
                             uVar46,!bVar25);
        *(FRDGBuffer **)(pFVar52 + 0x18) = pFVar32;
      }
      local_1c8 = (wchar_t *)CONCAT44(local_1c8._4_4_,(uint)local_1c8 & ~uStack_1d4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1e8 + 0x10));
      aVar48 = (atomic<unsigned___int64>)local_1e8._8_8_;
      aVar51 = (atomic<unsigned___int64>)local_210.EmptyEventRef.Object;
      iVar44 = local_1b8;
    }
    local_418 = local_418 + 1;
    if (2 < local_418) {
      if ((local_390 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_390 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_390 & 4) != 0) {
        FThreadStats::AddMessage(local_398,CycleScopeEnd);
      }
      local_390 = 0;
      if (bVar54) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
  } while( true );
}

// UpdateCachedInstanceGeometry @ 1453b6700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::UpdateCachedInstanceGeometry
          (FRayTracingScene *this,uint param_1,FRHIRayTracingGeometry *param_2,int param_3)

{
  undefined4 local_18;
  
  local_18 = CONCAT31(local_18._1_3_,(char)(param_1 >> 0x18));
  UpdateCachedInstanceGeometry
            (this,(FInstanceHandle)(CONCAT44(param_1,local_18) & 0xffffffffffffff),param_2,param_3);
  return;
}

// UpdateCachedInstanceGeometry @ 1453b6730

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRayTracingScene::UpdateCachedInstanceGeometry
          (FRayTracingScene *this,FInstanceHandle param_1,FRHIRayTracingGeometry *param_2,
          int param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uStackX_14;
  
  uVar5 = (ulonglong)param_1 & 0xff;
  if ((this->Layers).ArrayNum <= (int)uVar5) {
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
  uStackX_14 = param_1.Index;
  pFVar1 = (this->Layers).AllocatorInstance.Data;
  bVar3 = (longlong)param_1 < 0;
  if (bVar3 || *(int *)(pFVar1 + uVar5 * 0x70 + 0x28) <= (int)uStackX_14) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (longlong)(int)uStackX_14 * 0x58;
  *(FRHIRayTracingGeometry **)(lVar6 + *(longlong *)(pFVar1 + uVar5 * 0x70 + 0x20)) = param_2;
  if (bVar3 || *(int *)(pFVar1 + uVar5 * 0x70 + 0x28) <= (int)uStackX_14) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)(*(longlong *)(pFVar1 + uVar5 * 0x70 + 0x20) + 8 + lVar6) = param_3;
  if (this->bInstanceDebugDataEnabled != false) {
    if (bVar3 || *(int *)(pFVar1 + uVar5 * 0x70 + 0x38) <= (int)uStackX_14) {
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
    *(FRHIRayTracingGeometry **)
     (*(longlong *)(pFVar1 + uVar5 * 0x70 + 0x30) + 8 + (longlong)(int)uStackX_14 * 0x10) = param_2;
  }
  return;
}

