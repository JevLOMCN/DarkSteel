// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// operator() @ 14560ef00

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

void __thiscall
`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>::operator()(void *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGatherShadowPrimitivesTask");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5179,"FGatherShadowPrimitivesTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x143b);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`13'::<lambda_1>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5179);
  }
  iVar5 = 0;
  if (0 < *(int *)((longlong)this + 0xc)) {
    do {
      lVar1 = *(longlong *)this;
      iVar4 = *(int *)((longlong)this + 8) + iVar5;
      if (iVar4 < *(int *)(lVar1 + 0x78)) {
        if ((iVar4 < 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FGatherShadowPrimitivesPacket::AnyThreadTask
                  (*(FGatherShadowPrimitivesPacket **)
                    (*(longlong *)(lVar1 + 0x70) + (longlong)iVar4 * 8),
                   *(FDynamicShadowsTaskData **)this);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)((longlong)this + 0xc));
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14560f020

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

void __thiscall
`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  FGatherShadowPrimitivesPacket *this_00;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FTaskTagScope local_38;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGatherShadowPrimitivesFinalizeTask");
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`16'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5201,"FGatherShadowPrimitivesFinalizeTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x1451);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`16'::<lambda_2>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5201);
  }
  FTaskTagScope::FTaskTagScope(&local_38,EParallelRenderingThread);
  FDynamicShadowsTaskData::PresizeViewDependentWholeSceneShadows(*(FDynamicShadowsTaskData **)this);
  lVar3 = *(longlong *)this;
  puVar5 = *(undefined8 **)(lVar3 + 0x70);
  iVar2 = *(int *)(lVar3 + 0x78);
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)(lVar3 + 0x78) != iVar2) {
      `TCheckedPointerIterator<FGatherShadowPrimitivesPacket_*,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (puVar5 == puVar1) break;
    this_00 = (FGatherShadowPrimitivesPacket *)*puVar5;
    FGatherShadowPrimitivesPacket::AnyThreadFinalize(this_00,*(FDynamicShadowsTaskData **)this);
    if (this_00 != (FGatherShadowPrimitivesPacket *)0x0) {
      DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
                 (this_00->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data,
                 (this_00->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum);
      pFVar4 = (this_00->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FAddSubjectPrimitiveOp,TSizedDefaultAllocator<32>_> *)
                 (this_00->PreShadowSubjectPrimitives).AllocatorInstance.Data,
                 (this_00->PreShadowSubjectPrimitives).ArrayNum);
      pFVar4 = (this_00->PreShadowSubjectPrimitives).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
                ((FAddSubjectPrimitiveOverflowedIndices *)
                 (this_00->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data,
                 (this_00->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum);
      pFVar4 = (this_00->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      DestructItems<FAddSubjectPrimitiveOverflowedIndices,int>
                ((FAddSubjectPrimitiveOverflowedIndices *)
                 (this_00->PreShadowOverflowedIndices).AllocatorInstance.Data,
                 (this_00->PreShadowOverflowedIndices).ArrayNum);
      pFVar4 = (this_00->PreShadowOverflowedIndices).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      pFVar4 = (this_00->ViewDependentWholeSceneShadowStats).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      ::operator_delete(this_00,0x68);
    }
    puVar5 = puVar5 + 1;
  }
  lVar3 = *(longlong *)this;
  *(undefined4 *)(lVar3 + 0x78) = 0;
  if (*(int *)(lVar3 + 0x7c) != 0) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
              (8,8,0,(ForElementType<FGatherShadowPrimitivesPacket_*> *)(lVar3 + 0x70),0,
               (int *)(lVar3 + 0x7c));
  }
  FSceneRenderer::FilterDynamicShadows
            ((*(FDynamicShadowsTaskData **)this)->SceneRenderer,*(FDynamicShadowsTaskData **)this);
  FTaskTagScope::~FTaskTagScope(&local_38);
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// operator() @ 14560f380

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

void __thiscall
`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>::operator()(void *this)

{
  bool bVar1;
  FTaskTagScope local_18;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"GatherShadowDynamicMeshElements");
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`19'::<lambda_3>::operator()(void)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId5228,"GatherShadowDynamicMeshElements",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x146c);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:___cdecl_`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'::`19'::<lambda_3>::operator()(void)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId5228);
  }
  FTaskTagScope::FTaskTagScope(&local_18,EParallelRenderingThread);
  FSceneRenderer::GatherShadowDynamicMeshElements
            ((*(FDynamicShadowsTaskData **)this)->SceneRenderer,*(FDynamicShadowsTaskData **)this);
  FTaskTagScope::~FTaskTagScope(&local_18);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// AddSubTask @ 145613850

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

void __thiscall
FGatherShadowPrimitivesPrepareTask::AddSubTask
          (FGatherShadowPrimitivesPrepareTask *this,uint param_1,int param_2,int param_3)

{
  int *piVar1;
  FDynamicShadowsTaskData *pFVar2;
  FGatherShadowPrimitivesPacket **ppFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FGatherShadowPrimitivesPacket *pFVar7;
  FGatherShadowPrimitivesPacket *local_18 [2];
  
  pFVar2 = this->TaskData;
  pFVar7 = ::operator_new(0x68);
  local_18[0] = (FGatherShadowPrimitivesPacket *)0x0;
  if (pFVar7 != (FGatherShadowPrimitivesPacket *)0x0) {
    pFVar7->NodeIndex = param_1;
    pFVar7->StartPrimitiveIndex = param_2;
    pFVar7->NumPrimitives = param_3;
    (pFVar7->ViewDependentWholeSceneShadowStats).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar7->ViewDependentWholeSceneShadowStats).ArrayNum = 0;
    (pFVar7->ViewDependentWholeSceneShadowStats).ArrayMax = 0;
    (pFVar7->PreShadowOverflowedIndices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->PreShadowOverflowedIndices).ArrayNum = 0;
    (pFVar7->PreShadowOverflowedIndices).ArrayMax = 0;
    (pFVar7->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar7->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum = 0;
    (pFVar7->ViewDependentWholeSceneShadowOverflowedIndices).ArrayMax = 0;
    (pFVar7->PreShadowSubjectPrimitives).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->PreShadowSubjectPrimitives).ArrayNum = 0;
    (pFVar7->PreShadowSubjectPrimitives).ArrayMax = 0;
    (pFVar7->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (pFVar7->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum = 0;
    (pFVar7->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayMax = 0;
    pFVar7->bSupportMobileInsetShadows = false;
    local_18[0] = pFVar7;
  }
  ppFVar3 = (pFVar2->Packets).AllocatorInstance.Data;
  if (((ppFVar3 <= local_18) && (local_18 < ppFVar3 + (pFVar2->Packets).ArrayMax)) &&
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
  iVar6 = (pFVar2->Packets).ArrayNum;
  piVar1 = &(pFVar2->Packets).ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
                      (0x808,&(pFVar2->Packets).AllocatorInstance,piVar1);
  }
  (pFVar2->Packets).ArrayNum = iVar6 + 1;
  (pFVar2->Packets).AllocatorInstance.Data[iVar6] = local_18[0];
  return;
}

// AnyThreadTask @ 14561cea0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall
FGatherShadowPrimitivesPrepareTask::AnyThreadTask(FGatherShadowPrimitivesPrepareTask *this)

{
  int *piVar1;
  TArray<FGatherShadowPrimitivesPacket_*,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  int iVar3;
  FDynamicShadowsTaskData *pFVar4;
  FGatherShadowPrimitivesPacket **ppFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  TStatIdData *pTVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FGatherShadowPrimitivesPacket *pFVar14;
  uint uVar15;
  TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics> *this_02;
  FColor_u_0 FVar16;
  FName FVar17;
  int iVar18;
  FNameEntryId FVar19;
  FGatherShadowPrimitivesPacket *pFVar20;
  ulonglong uVar21;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  <lambda_2> local_res18;
  <lambda_1> local_res20;
  FGatherShadowPrimitivesPacket *local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  
  pFVar4 = this->TaskData;
  iVar3 = (pFVar4->ViewDependentWholeSceneShadows).ArrayNum;
  iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x18,4,iVar3,&(pFVar4->GatherStats).AllocatorInstance,
                      &(pFVar4->GatherStats).ArrayNum,&(pFVar4->GatherStats).ArrayMax);
  DefaultConstructItems<FAddSubjectPrimitiveStats,int>
            ((pFVar4->GatherStats).AllocatorInstance.Data + (longlong)iVar11 * 0x18,iVar3);
  pTVar9 = CVarParallelGatherNumPrimitivesPerPacket.Ref;
  if (GUseOctreeForShadowCulling == 0) {
    bVar10 = IsInParallelGameThread();
    pFVar20 = (FGatherShadowPrimitivesPacket *)0x0;
    if ((bVar10) ||
       (bVar10 = IsInGameThread(), pFVar14 = (FGatherShadowPrimitivesPacket *)&DAT_00000004, bVar10)
       ) {
      pFVar14 = pFVar20;
    }
    iVar3 = *(int *)((longlong)pTVar9->ShadowedValue + (longlong)&pFVar14->NodeIndex);
    pFVar4 = this->TaskData;
    uVar21 = (longlong)((pFVar4->Scene->Primitives).ArrayNum + -1 + iVar3) / (longlong)iVar3;
    iVar11 = (int)uVar21;
    uVar21 = uVar21 & 0xffffffff;
    if (-1 < iVar11) {
      if ((pFVar4->Packets).ArrayMax < iVar11) {
        UE::Core::Private::
        ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
                  (8,8,iVar11,&(pFVar4->Packets).AllocatorInstance,(pFVar4->Packets).ArrayNum,
                   &(pFVar4->Packets).ArrayMax);
      }
      pFVar14 = pFVar20;
      if (iVar11 < 1) {
        return;
      }
      while( true ) {
        pFVar4 = this->TaskData;
        pTVar2 = &pFVar4->Packets;
        iVar18 = (int)pFVar14;
        iVar11 = (pFVar4->Scene->Primitives).ArrayNum - iVar18;
        pFVar14 = ::operator_new(0x68);
        local_78 = pFVar20;
        if (pFVar14 != (FGatherShadowPrimitivesPacket *)0x0) {
          pFVar14->NodeIndex = 0xffffffff;
          pFVar14->StartPrimitiveIndex = iVar18;
          if (iVar3 < iVar11) {
            iVar11 = iVar3;
          }
          (pFVar14->ViewDependentWholeSceneShadowStats).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          pFVar14->NumPrimitives = iVar11;
          (pFVar14->ViewDependentWholeSceneShadowStats).ArrayNum = 0;
          (pFVar14->ViewDependentWholeSceneShadowStats).ArrayMax = 0;
          (pFVar14->PreShadowOverflowedIndices).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->PreShadowOverflowedIndices).ArrayNum = 0;
          (pFVar14->PreShadowOverflowedIndices).ArrayMax = 0;
          (pFVar14->ViewDependentWholeSceneShadowOverflowedIndices).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->ViewDependentWholeSceneShadowOverflowedIndices).ArrayNum = 0;
          (pFVar14->ViewDependentWholeSceneShadowOverflowedIndices).ArrayMax = 0;
          (pFVar14->PreShadowSubjectPrimitives).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->PreShadowSubjectPrimitives).ArrayNum = 0;
          (pFVar14->PreShadowSubjectPrimitives).ArrayMax = 0;
          (pFVar14->ViewDependentWholeSceneShadowSubjectPrimitives).AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          (pFVar14->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayNum = 0;
          (pFVar14->ViewDependentWholeSceneShadowSubjectPrimitives).ArrayMax = 0;
          pFVar14->bSupportMobileInsetShadows = false;
          local_78 = pFVar14;
        }
        ppFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((ppFVar5 <= &local_78) && (&local_78 < ppFVar5 + (pFVar4->Packets).ArrayMax)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) break;
        iVar11 = (pFVar4->Packets).ArrayNum;
        piVar1 = &(pFVar4->Packets).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
                             (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (pFVar4->Packets).ArrayNum = iVar11 + 1;
        (pTVar2->AllocatorInstance).Data[iVar11] = local_78;
        uVar21 = uVar21 - 1;
        pFVar14 = (FGatherShadowPrimitivesPacket *)(ulonglong)(uint)(iVar18 + iVar3);
        if (uVar21 == 0) {
          return;
        }
      }
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar21);
  }
  FVar19.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'::__l5
       ::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'
                           ::__l5::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'::__l5::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_ShadowSceneOctreeTraversal = (TStatIdData *)0x0;
    pFVar12 = ::FName::FName(&local_68,"STAT_ShadowSceneOctreeTraversal");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'
                ::__l5::StatPtr_STAT_ShadowSceneOctreeTraversal,*pFVar12,
               L"STAT_ShadowSceneOctreeTraversal","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
               ,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'
                         ::__l5::_thread_safe_static_guard_0__);
  }
  pTVar13 = _StatPtr_STAT_ShadowSceneOctreeTraversal;
  if (_StatPtr_STAT_ShadowSceneOctreeTraversal == (TStatIdData *)0x0) {
    pFVar12 = ::FName::FName(&local_60,"STAT_ShadowSceneOctreeTraversal");
    pTVar13 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::AnyThreadTask(void)___ptr64'
                          ::__l5::StatPtr_STAT_ShadowSceneOctreeTraversal,*pFVar12,
                         L"STAT_ShadowSceneOctreeTraversal","STATGROUP_Quick","STATCAT_Advanced",
                         L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar17 = *(FName *)&pTVar13->Name;
  bVar10 = false;
  bVar8 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  FVar16.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar15 = FVar17.Number;
  if ((FVar16.Bits != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(pTVar13->StatDescriptionAnsi).Ptr);
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar16.Bits;
        local_res14 = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(pTVar13->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
                   ,0x1482);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar16.Bits;
      uStackX_c = uVar15;
      local_58 = FVar17;
      FThreadStats::AddMessage(FVar17,CycleScopeStart);
      bVar7 = true;
      FVar19.Value = local_58.ComparisonIndex.Value;
      goto LAB_14561d082;
    }
  }
  bVar7 = false;
  FVar17 = local_58;
LAB_14561d082:
  pFVar4 = this->TaskData;
  if ((pFVar4->Packets).ArrayMax < 100) {
    UE::Core::Private::
    ReallocTo<0,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>::ForElementType<FGatherShadowPrimitivesPacket_*>_>
              (8,8,100,&(pFVar4->Packets).AllocatorInstance,(pFVar4->Packets).ArrayNum,
               &(pFVar4->Packets).ArrayMax);
  }
  this_02 = &this->TaskData->Scene->PrimitiveOctree;
  local_res18.__this = this;
  local_res20.__this = this;
  TOctree2<FPrimitiveSceneInfoCompact,FPrimitiveOctreeSemantics>::
  FindNodesWithPredicateInternal<_FGatherShadowPrimitivesPrepareTask::AnyThreadTask_::__l5::<lambda_1>,_FGatherShadowPrimitivesPrepareTask::AnyThreadTask_::__l5::<lambda_2>_>
            (this_02,0xffffffff,0,&this_02->RootNodeContext,&local_res20,&local_res18);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar19.Value;
      QueryPerformanceCounter(&local_70);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
        return;
      }
    }
  }
  return;
}

// DoTask @ 14562b770

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
FGatherShadowPrimitivesPrepareTask::DoTask
          (FGatherShadowPrimitivesPrepareTask *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  atomic<unsigned_int> *paVar1;
  int *piVar2;
  atomic<unsigned_int> aVar3;
  int iVar4;
  FDynamicShadowsTaskData *pFVar5;
  FTaskBase *this_00;
  FBaseGraphTask *this_01;
  code *pcVar6;
  Type TVar7;
  bool bVar8;
  uint uVar9;
  FTaskGraphInterface *pFVar10;
  FTaskBase *pFVar11;
  longlong lVar12;
  undefined ***pppuVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  Type TVar15;
  Type TVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  undefined1 auStackY_178 [32];
  EExtendedTaskPriority local_147;
  ETaskPriority local_146 [2];
  int local_144;
  undefined8 *local_140;
  ulonglong local_138;
  TRefCountPtr<FBaseGraphTask> *local_130;
  code *local_128;
  undefined **local_118;
  FDynamicShadowsTaskData *pFStack_110;
  int local_108;
  uint uStack_104;
  undefined ***local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  FTaskTagScope local_e8;
  code *local_d8 [2];
  undefined **local_c8;
  FDynamicShadowsTaskData *local_c0;
  undefined8 local_b0;
  code *local_a8 [2];
  undefined **local_98;
  FDynamicShadowsTaskData *local_90;
  undefined8 local_80;
  undefined1 local_78 [32];
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_58;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  local_130 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Green,"FGatherShadowPrimitivesPrepareTask");
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId5150,"FGatherShadowPrimitivesPrepareTask",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\ShadowSetup.cpp"
               ,0x141e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FGatherShadowPrimitivesPrepareTask::DoTask(ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const&___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId5150);
  }
  FTaskTagScope::FTaskTagScope(&local_e8,EParallelRenderingThread);
  pFVar5 = this->TaskData;
  if (pFVar5->bMultithreadedCreateAndFilterShadows != false) {
    FSceneRenderer::CreateDynamicShadows(pFVar5->SceneRenderer,pFVar5);
  }
  AnyThreadTask(this);
  local_58 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_50 = 0;
  local_4c = 4;
  uVar18 = (this->TaskData->Packets).ArrayNum;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (4 < (int)uVar18) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,uVar18,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_78,0,&local_4c);
  }
  uVar18 = (this->TaskData->Packets).ArrayNum;
  if (0 < (int)uVar18) {
    pFVar10 = FTaskGraphInterface::Get();
    uVar9 = (**(code **)((longlong)*pFVar10 + 0x20))(pFVar10);
    uVar17 = uVar18;
    if ((int)uVar9 < (int)uVar18) {
      uVar17 = uVar9;
    }
    uVar9 = (int)((uVar18 - 1) + uVar17) / (int)uVar17;
    if (0 < (int)uVar17) {
      local_138 = (ulonglong)uVar17;
      local_144 = 0;
      do {
        TVar15 = CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority;
        TVar7 = CPrio_GatherShadowPrimitives.TaskPriority;
        TVar16 = CPrio_GatherShadowPrimitives.ThreadPriority;
        uVar17 = uVar18;
        if ((int)uVar18 < 0) {
          uVar17 = 0;
        }
        if ((int)uVar9 < (int)uVar17) {
          uVar17 = uVar9;
        }
        if (0 < (int)uVar17) {
          iVar4 = ENamedThreads::bHasHighPriorityThreads;
          if (((CPrio_GatherShadowPrimitives.ThreadPriority == HighThreadPriority) ||
              (iVar4 = ENamedThreads::bHasBackgroundThreads,
              CPrio_GatherShadowPrimitives.ThreadPriority == BackgroundThreadPriority)) &&
             (iVar4 == 0)) {
            if (((CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority &
                 ~HighTaskPriority) != MainQueue) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                   ,0xcd,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          else {
            if ((((CPrio_GatherShadowPrimitives.ThreadPriority & ~ThreadPriorityMask) != MainQueue
                  || (CPrio_GatherShadowPrimitives.ThreadPriority & ThreadPriorityMask) ==
                     ThreadPriorityMask) ||
                ((CPrio_GatherShadowPrimitives.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                   ,0xb1,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            TVar15 = TVar16 | TVar7;
          }
          pFStack_110 = this->TaskData;
          local_118 = &
                      ___7__TFunction_OwnedObject_V<lambda_1>__N___DoTask_FGatherShadowPrimitivesPrepareTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_0A__Function_Private_Core_UE__6B_
          ;
          local_108 = local_144;
          local_100 = (undefined ***)0x0;
          local_128 = UE::Core::Private::Function::
                      TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l13::<lambda_1>,void>
                      ::Call;
          uStack_104 = uVar17;
          pFVar11 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
          if (pFVar11 == (FTaskBase *)0x0) {
            pFVar11 = (FTaskBase *)0x0;
          }
          else {
            FBaseGraphTask::FBaseGraphTask
                      ((FBaseGraphTask *)pFVar11,
                       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                        *)0x0);
            pFVar11->_padding_ =
                 (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
          }
          pFVar11[1]._padding_ = (longlong)&TStatId::TStatId_NAME_None;
          pFVar11[1]._padding_ = (longlong)local_128;
          *(undefined ****)&pFVar11[1].StateChangeEvent = local_100;
          local_100 = (undefined ***)0x0;
          pFVar11[1]._padding_ = (longlong)local_118;
          *(FDynamicShadowsTaskData **)&pFVar11[1].RefCount = pFStack_110;
          pFVar11[1].Pipe = (FPipe *)CONCAT44(uStack_104,local_108);
          if (pFVar11[1]._padding_ != 0) {
            local_128 = (code *)0x0;
          }
          pFVar11[1].ExecutingThreadId = (atomic<unsigned_int>)(TVar15 | AnyNormalThreadNormalTask);
          UE::Tasks::Private::TranslatePriority
                    (TVar15 | AnyNormalThreadNormalTask,local_146,&local_147);
          UE::Tasks::Private::FTaskBase::Init(pFVar11,L"GraphTask",local_146[0],local_147,None);
          LOCK();
          pFVar11->RefCount = (atomic<unsigned_int>)((int)pFVar11->RefCount + 1);
          UNLOCK();
          UE::Tasks::Private::FTaskBase::TryLaunch(pFVar11,0x130);
          if (local_128 != (code *)0x0) {
            pppuVar13 = &local_118;
            if (local_100 != (undefined ***)0x0) {
              pppuVar13 = local_100;
            }
            (*(code *)(*pppuVar13)[2])();
          }
          if (local_50 == local_4c) {
            local_50 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                 (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_78,
                                  &local_4c);
          }
          lVar12 = (longlong)local_50;
          local_50 = local_50 + 1;
          FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
          if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar14 = local_58;
          }
          *(FTaskBase **)((longlong)FVar14 + lVar12 * 8) = pFVar11;
          pFVar11 = (FTaskBase *)local_130->Reference;
          uVar17 = 0;
          if ((int)(local_50 - 1U) < local_50) {
            uVar17 = ~(local_50 - 1U) >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
          if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar14 = local_58;
          }
          this_00 = *(FTaskBase **)((longlong)FVar14 + (longlong)(local_50 + -1) * 8);
          if (this_00 != (FTaskBase *)0x0) {
            LOCK();
            this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
            UNLOCK();
            if (pFVar11->ExtendedPriority == TaskEvent) {
              UE::Tasks::Private::FTaskBase::AddPrerequisites(pFVar11,this_00);
            }
            else {
              LOCK();
              paVar1 = &pFVar11->NumLocks;
              aVar3 = *paVar1;
              *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + 1);
              UNLOCK();
              if ((aVar3 == (atomic<unsigned_int>)0xfffffffe) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("PrevNumLocks + 1 < TNumericLimits<uint32>::Max()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                     ,0x1c2,L"Max number of nested tasks reached: %d"), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (((uint)aVar3 < 0x80000001) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("PrevNumLocks > ExecutionFlag",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Tasks\\TaskPrivate.h"
                                     ,0x1c3,
                                     L"Internal error: nested tasks can be added only during parent\'s execution (%u)"
                                    ), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar8 = UE::Tasks::Private::FTaskBase::AddSubsequent(this_00,pFVar11);
              if (bVar8) {
                LOCK();
                this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
                UNLOCK();
                UE::Tasks::Private::FTaskBase::
                FPrerequisites<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::Push
                          (&pFVar11->Prerequisites,this_00);
              }
              else {
                LOCK();
                pFVar11->NumLocks = (atomic<unsigned_int>)((int)pFVar11->NumLocks + -1);
                UNLOCK();
              }
            }
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
        local_144 = local_144 + uVar9;
        uVar18 = uVar18 - uVar9;
        local_138 = local_138 - 1;
      } while (local_138 != 0);
      local_138 = 0;
      param_2 = local_130;
    }
  }
  if (this->TaskData->bMultithreadedCreateAndFilterShadows == false) goto LAB_14562bfc7;
  iVar4 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_GatherShadowPrimitives.ThreadPriority == HighThreadPriority) ||
      (iVar4 = ENamedThreads::bHasBackgroundThreads,
      CPrio_GatherShadowPrimitives.ThreadPriority == BackgroundThreadPriority)) && (iVar4 == 0)) {
    if (((CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  else if ((((CPrio_GatherShadowPrimitives.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
             (CPrio_GatherShadowPrimitives.ThreadPriority & ThreadPriorityMask) ==
             ThreadPriorityMask) ||
           ((CPrio_GatherShadowPrimitives.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
          (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                              ,0xb1,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_c8 = &
             ___7__TFunction_OwnedObject_V<lambda_2>__BA___DoTask_FGatherShadowPrimitivesPrepareTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_0A__Function_Private_Core_UE__6B_
  ;
  local_c0 = this->TaskData;
  local_b0 = 0;
  local_d8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l16::<lambda_2>,void>
                ::Call;
  TVar16 = (Type)local_78;
  FFunctionGraphTask::CreateAndDispatchWhenReady
            ((TUniqueFunction<void___cdecl(void)> *)&local_140,(TStatIdData *)local_d8,
             (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              *)&TStatId::TStatId_NAME_None,TVar16);
  this_01 = param_2->Reference;
  local_f8 = local_140;
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    *(int *)(local_140 + 6) = *(int *)(local_140 + 6) + 1;
    UNLOCK();
  }
  FBaseGraphTask::DontCompleteUntil(this_01,(FBaseGraphTask *)&local_f8);
  if (this->TaskData->bMultithreadedGDME != false) {
    if (local_4c < 0) {
      FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
      if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar14 = local_58;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_50);
      local_50 = 0;
      if (local_4c != 0) {
        UE::Core::Private::
        ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,0,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_78,0,&local_4c);
        goto LAB_14562be47;
      }
LAB_14562be4c:
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)local_78,
                            &local_4c);
    }
    else {
      FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
      if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar14 = local_58;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_50);
      local_50 = 0;
LAB_14562be47:
      if (local_50 == local_4c) goto LAB_14562be4c;
    }
    lVar12 = (longlong)local_50;
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
    if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_58;
    }
    local_50 = local_50 + 1;
    *(undefined8 **)((longlong)FVar14 + lVar12 * 8) = local_140;
    if (local_140 != (undefined8 *)0x0) {
      LOCK();
      *(int *)(local_140 + 6) = *(int *)(local_140 + 6) + 1;
      UNLOCK();
    }
    iVar4 = ENamedThreads::bHasHighPriorityThreads;
    if (((CPrio_GatherShadowPrimitives.ThreadPriority == HighThreadPriority) ||
        (iVar4 = ENamedThreads::bHasBackgroundThreads,
        CPrio_GatherShadowPrimitives.ThreadPriority == BackgroundThreadPriority)) && (iVar4 == 0)) {
      if (((CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority &
           ~HighTaskPriority) != MainQueue) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                             ,0xcd,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if ((((CPrio_GatherShadowPrimitives.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
               (CPrio_GatherShadowPrimitives.ThreadPriority & ThreadPriorityMask) ==
               ThreadPriorityMask) ||
             ((CPrio_GatherShadowPrimitives.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
            (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                               ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                                ,0xb1,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_80 = 0;
    local_98 = &
               ___7__TFunction_OwnedObject_V<lambda_3>__BD___DoTask_FGatherShadowPrimitivesPrepareTask__QEAAXW4Type_ENamedThreads__AEBV__TRefCountPtr_VFBaseGraphTask_____Z__00_0A__Function_Private_Core_UE__6B_
    ;
    local_90 = this->TaskData;
    local_a8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FGatherShadowPrimitivesPrepareTask::DoTask'::__l19::<lambda_3>,void>
                  ::Call;
    FFunctionGraphTask::CreateAndDispatchWhenReady
              ((TUniqueFunction<void___cdecl(void)> *)&local_f0,(TStatIdData *)local_a8,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)&TStatId::TStatId_NAME_None,TVar16);
    if (local_f0 != (undefined8 *)0x0) {
      LOCK();
      piVar2 = (int *)(local_f0 + 6);
      iVar4 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (**(code **)*local_f0)(local_f0,1);
      }
    }
  }
  if (local_140 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_140 + 6);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)*local_140)(local_140,1);
    }
  }
LAB_14562bfc7:
  FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)local_78;
  if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar14 = local_58;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar14,local_50);
  if (local_58 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_58);
  }
  FTaskTagScope::~FTaskTagScope(&local_e8);
  if (bVar19) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// GetDesiredThread @ 145636340

/* WARNING: Enum "Type": Some values do not have unique names */

Type __cdecl FGatherShadowPrimitivesPrepareTask::GetDesiredThread(void)

{
  code *pcVar1;
  int iVar2;
  Type TVar3;
  bool bVar4;
  Type TVar5;
  Type TVar6;
  
  TVar6 = CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority;
  TVar3 = CPrio_GatherShadowPrimitives.TaskPriority;
  TVar5 = CPrio_GatherShadowPrimitives.ThreadPriority;
  iVar2 = ENamedThreads::bHasHighPriorityThreads;
  if (((CPrio_GatherShadowPrimitives.ThreadPriority == HighThreadPriority) ||
      (iVar2 = ENamedThreads::bHasBackgroundThreads,
      CPrio_GatherShadowPrimitives.ThreadPriority == BackgroundThreadPriority)) && (iVar2 == 0)) {
    if (((CPrio_GatherShadowPrimitives.TaskPriorityIfForcedToNormalThreadPriority &
         ~HighTaskPriority) != MainQueue) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xcd,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
  }
  else {
    if ((((CPrio_GatherShadowPrimitives.ThreadPriority & ~ThreadPriorityMask) != MainQueue ||
          (CPrio_GatherShadowPrimitives.ThreadPriority & ThreadPriorityMask) == ThreadPriorityMask)
        || ((CPrio_GatherShadowPrimitives.TaskPriority & ~HighTaskPriority) != MainQueue)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!(ThreadAndIndex & ~ThreadIndexMask) && !(ThreadPriority & ~ThreadPriorityMask) && (ThreadPriority & ThreadPriorityMask) != ThreadPriorityMask && !(TaskPriority & ~TaskPriorityMask)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                           ,0xb1,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      TVar5 = (*pcVar1)();
      return TVar5;
    }
    TVar6 = TVar5 | TVar3;
  }
  return TVar6 | AnyNormalThreadNormalTask;
}

