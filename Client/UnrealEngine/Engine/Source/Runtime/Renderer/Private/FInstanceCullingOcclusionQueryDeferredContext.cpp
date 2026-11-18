// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 4

// CountVisibleInstances @ 144bb5fc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

uint __thiscall
FInstanceCullingOcclusionQueryDeferredContext::CountVisibleInstances
          (FInstanceCullingOcclusionQueryDeferredContext *this,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1,FScene *param_2)

{
  FVisibleMeshDrawCommand *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  FVisibleMeshDrawCommand *pFVar9;
  bool bVar10;
  undefined1 local_res10 [8];
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_unsigned_int___cdecl_FInstanceCullingOcclusionQueryDeferredContext::CountVisibleInstances(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,FScene_const*___ptr64)const___ptr64'
                ::__l2::__CpuProfilerEventSpecId414,
               "FInstanceCullingOcclusionQueryDeferredContext::CountVisibleInstances",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
               ,0x19e);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_unsigned_int___cdecl_FInstanceCullingOcclusionQueryDeferredContext::CountVisibleInstances(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,FScene_const*___ptr64)const___ptr64'
               ::__l2::__CpuProfilerEventSpecId414);
  }
  iVar2 = param_1->ArrayNum;
  uVar7 = 0;
  pFVar9 = (param_1->AllocatorInstance).Data;
  pFVar1 = pFVar9 + iVar2;
  do {
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FVisibleMeshDrawCommand_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) {
        if (bVar10) {
          FCpuProfilerTrace::OutputEndEvent();
        }
        return uVar7;
      }
      bVar5 = pFVar9->CullingPayloadFlags;
      if ((((bVar5 == 0) || (bVar5 == 1)) && ((pFVar9->Flags & 4) != 0)) &&
         (((pFVar9->PrimitiveIdInfo).InstanceSceneDataOffset != -1 && (pFVar9->NumRuns == 0))))
      break;
LAB_144bb616d:
      pFVar9 = pFVar9 + 1;
    }
    if ((pFVar9->Flags & 0x20) == 0) {
      uVar7 = uVar7 + pFVar9->MeshDrawCommand->NumInstances;
      goto LAB_144bb616d;
    }
    if ((param_2 == (FScene *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Scene != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                           ,0x148,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    if (((BADTYPE)(pFVar9->PrimitiveIdInfo).bIsDynamicPrimitive) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!VisibleMeshDrawCommand.PrimitiveIdInfo.bIsDynamicPrimitive",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                           ,0x149,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar3 = (pFVar9->PrimitiveIdInfo).ScenePrimitiveId;
    uVar8 = 0;
    if ((int)uVar3 < (param_2->Primitives).ArrayNum) {
      uVar8 = ~uVar3 >> 0x1f;
    }
    if ((uVar8 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      uVar7 = (*pcVar4)();
      return uVar7;
    }
    uVar7 = uVar7 + *(int *)(*(longlong *)
                              ((param_2->Primitives).AllocatorInstance.Data +
                              (longlong)(int)uVar3 * 8) + 0x228);
    pFVar9 = pFVar9 + 1;
  } while( true );
}

// Execute @ 144bc1c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryDeferredContext::Execute
          (FInstanceCullingOcclusionQueryDeferredContext *this)

{
  int *piVar1;
  TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
  *pTVar2;
  FParallelMeshDrawCommandPass *this_00;
  FInstanceProcessingGPULoadBalancer *pFVar3;
  FViewInfo *pFVar4;
  FUploadData *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FScene *pFVar10;
  ulonglong uVar11;
  FScriptContainerElement *_Dst;
  int iVar12;
  bool bVar13;
  int local_res8 [2];
  TIntVector3<int>_u_0 local_38;
  FInstanceCullingOcclusionQueryDeferredContext *local_28;
  int *local_20;
  
  if (this->bFunctionExecuted != false) {
    return;
  }
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
                ::__l2::__CpuProfilerEventSpecId342,
               "FInstanceCullingOcclusionQueryDeferredContext::Execute",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
               ,0x156);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
               ::__l2::__CpuProfilerEventSpecId342);
  }
  this->bFunctionExecuted = true;
  this_00 = (this->View->ParallelMeshDrawCommandPasses).Elements[this->MeshPass];
  if (this_00 == (FParallelMeshDrawCommandPass *)0x0) goto LAB_144bc1f9d;
  FParallelMeshDrawCommandPass::WaitForSetupTask(this_00);
  if (this->InstanceCullingContext == (FInstanceCullingContext *)0x0) {
    pTVar2 = &(this_00->TaskContext).MeshDrawCommands;
    pFVar10 = (FScene *)(**(code **)(**(longlong **)(this->View->_padding_ + 0x40) + 0x420))();
    uVar9 = CountVisibleInstances(this,pTVar2,pFVar10);
    this->NumInstances = uVar9;
    (this->NumThreadGroups).field0_0x0._s_0.X =
         (int)(uVar9 + 0x3f + ((int)(uVar9 + 0x3f) >> 0x1f & 0x3fU)) >> 6;
    (this->NumThreadGroups).field0_0x0._s_0.Y = 1;
    (this->NumThreadGroups).field0_0x0._s_0.Z = 1;
    local_res8[0] = GRHIGlobals.MaxDispatchThreadGroupsPerDimension.field0_0x0._s_0.X << 6;
    if (local_res8[0] < (this->NumThreadGroups).field0_0x0._s_0.X << 6) {
      local_20 = local_res8;
      local_28 = this;
      bVar7 = `FInstanceCullingOcclusionQueryDeferredContext::Execute'::__l15::<lambda_1>::
              operator()(&local_28);
      if (!bVar7) goto LAB_144bc1f9d;
    }
    uVar9 = (this->NumThreadGroups).field0_0x0._s_0.X;
    this->AlignedNumInstances = uVar9 << 6;
    if ((uVar9 & 0x3ffffff) != 0) {
      pFVar4 = this->View;
      if ((((pFVar4->DynamicPrimitiveCollector).bCommitted == false) &&
          ((pFVar4->DynamicPrimitiveCollector).UploadData != (FUploadData *)0x0)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("bCommitted || UploadData == nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\GPUScene.h"
                             ,0x74,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pFVar4->DynamicPrimitiveCollector).UploadData;
      if (pFVar5 == (FUploadData *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = pFVar5->InstanceSceneDataOffset;
      }
      FillVisibleInstanceIds(this,pTVar2,uVar9,pFVar10);
      this->bValid = true;
    }
    goto LAB_144bc1f9d;
  }
  pFVar3 = (this->InstanceCullingContext->LoadBalancers).Elements[0];
  uVar11 = (ulonglong)_tls_index;
  this->InstanceProcessingGPULoadBalancer = pFVar3;
  this->bValid = pFVar3 != (FInstanceProcessingGPULoadBalancer *)0x0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar11 * 8) + 0x9d4c) <
       `public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'::
       __l11::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
                           ::__l11::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'::
     __l11::_thread_safe_static_guard_0__ == -1)) {
    FInstanceProcessingGPULoadBalancer::FInstanceProcessingGPULoadBalancer
              (&`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
                ::__l11::Dummy);
    atexit(`FInstanceCullingOcclusionQueryDeferredContext::Execute'::__l11::
           _dynamic_atexit_destructor_for__Dummy__);
    _Init_thread_footer(&`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
                         ::__l11::_thread_safe_static_guard_0__);
  }
  if (this->bValid == false) {
    this->InstanceProcessingGPULoadBalancer =
         &`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'
          ::__l11::Dummy;
  }
  piVar1 = &(this->VisibleInstanceIds).ArrayNum;
  this->AlignedNumInstances = 0x40;
  iVar12 = *piVar1;
  if (iVar12 < 0x40) {
    iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0x40 - iVar12,&(this->VisibleInstanceIds).AllocatorInstance,piVar1,
                       &(this->VisibleInstanceIds).ArrayMax);
    memset((this->VisibleInstanceIds).AllocatorInstance.Data + (longlong)iVar8 * 4,0,
           (longlong)(0x40 - iVar12) << 2);
  }
  else if (0x40 < iVar12) {
    iVar12 = iVar12 + -0x40;
    if (iVar12 < 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (iVar12 == 0) goto LAB_144bc1e31;
    _Dst = (this->VisibleInstanceIds).AllocatorInstance.Data + 0x100;
    iVar8 = (*piVar1 - iVar12) + -0x40;
    if (iVar8 != 0) {
      memmove(_Dst,_Dst + (longlong)iVar12 * 4,(longlong)iVar8 << 2);
    }
    *piVar1 = *piVar1 - iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->VisibleInstanceIds).AllocatorInstance,*piVar1,
               &(this->VisibleInstanceIds).ArrayMax);
  }
LAB_144bc1e31:
  TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_>::FinalizeBatches
            ((TInstanceCullingLoadBalancer<TSizedDefaultAllocator<32>_> *)
             this->InstanceProcessingGPULoadBalancer);
  iVar12 = *(int *)(*(longlong *)this->InstanceProcessingGPULoadBalancer + 0x10);
  if ((iVar12 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FComputeShaderUtils::GetGroupCountWrapped((TIntVector3<int> *)&local_38._s_0,iVar12);
  this->AlignedNumInstances = local_38._s_0.Z * local_38._s_0.Y * local_38._s_0.X * 0x40;
LAB_144bc1f9d:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// FillVisibleInstanceIds @ 144bc2180

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
FInstanceCullingOcclusionQueryDeferredContext::FillVisibleInstanceIds
          (FInstanceCullingOcclusionQueryDeferredContext *this,
          TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>
          *param_1,uint param_2,FScene *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  FVisibleMeshDrawCommand *pFVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  FVisibleMeshDrawCommand *pFVar18;
  bool bVar19;
  undefined1 local_78 [8];
  FVisibleMeshDrawCommand *local_70;
  FScriptContainerElement *local_68;
  
  bVar19 = -1 < CpuChannel->Enabled;
  if (bVar19) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::FillVisibleInstanceIds(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,unsigned_int,FScene_const*___ptr64)___ptr64'
                ::__l2::__CpuProfilerEventSpecId432,
               "FInstanceCullingOcclusionQueryDeferredContext::FillVisibleInstanceIds",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
               ,0x1b0);
    FCpuProfilerTrace::OutputBeginEvent
              (`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::FillVisibleInstanceIds(TArray<FVisibleMeshDrawCommand,TLinearArrayAllocatorBase<FSceneRenderingBlockAllocationTag,0>_>_const&___ptr64,unsigned_int,FScene_const*___ptr64)___ptr64'
               ::__l2::__CpuProfilerEventSpecId432);
  }
  if ((this->AlignedNumInstances == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("AlignedNumInstances != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                         ,0x1b2,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar11 = (this->VisibleInstanceIds).ArrayNum;
  piVar1 = &(this->VisibleInstanceIds).ArrayNum;
  uVar14 = this->AlignedNumInstances;
  if (iVar11 < (int)uVar14) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar14 - iVar11,&(this->VisibleInstanceIds).AllocatorInstance,piVar1,
               &(this->VisibleInstanceIds).ArrayMax);
  }
  else {
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((int)uVar14 < iVar11) {
      uVar17 = iVar11 - uVar14;
      if (((int)(uVar17 | uVar14) < 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar17 != 0) {
        pFVar16 = (this->VisibleInstanceIds).AllocatorInstance.Data + (longlong)(int)uVar14 * 4;
        iVar11 = (*piVar1 - uVar14) - uVar17;
        if (iVar11 != 0) {
          memmove(pFVar16,pFVar16 + (longlong)(int)uVar17 * 4,(longlong)iVar11 << 2);
        }
        *piVar1 = *piVar1 - uVar17;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&(this->VisibleInstanceIds).AllocatorInstance,*piVar1,
                   &(this->VisibleInstanceIds).ArrayMax);
      }
    }
  }
  iVar6 = _UNK_150631e0c;
  iVar5 = _UNK_150631e08;
  iVar4 = __xmm_00000003000000020000000100000000._4_4_;
  iVar12 = (int)__xmm_00000003000000020000000100000000;
  pFVar16 = (this->VisibleInstanceIds).AllocatorInstance.Data;
  iVar11 = param_1->ArrayNum;
  pFVar18 = (param_1->AllocatorInstance).Data;
  pFVar15 = pFVar18 + iVar11;
  local_70 = pFVar15;
  local_68 = pFVar16;
  do {
    if (param_1->ArrayNum != iVar11) {
      local_78[0] = 0;
      `TCheckedPointerIterator<FVisibleMeshDrawCommand_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_78);
    }
    if (pFVar18 == pFVar15) {
      iVar11 = this->NumInstances;
      iVar12 = this->AlignedNumInstances;
      if (iVar11 < iVar12) {
        do {
          *(int *)pFVar16 = 0;
          iVar11 = iVar11 + 1;
          iVar12 = this->AlignedNumInstances;
          pFVar16 = pFVar16 + 4;
        } while (iVar11 < iVar12);
      }
      if ((pFVar16 != local_68 + (longlong)iVar12 * 4) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ResultCursor == ResultData + AlignedNumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                             ,0x1da,L""), bVar7)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (bVar19) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      return;
    }
    bVar8 = pFVar18->CullingPayloadFlags;
    if ((((bVar8 == 0) || (bVar8 == 1)) && ((pFVar18->Flags & 4) != 0)) &&
       (((pFVar18->PrimitiveIdInfo).InstanceSceneDataOffset != -1 && (pFVar18->NumRuns == 0)))) {
      if ((pFVar18->Flags & 0x20) == 0) {
        uVar14 = pFVar18->MeshDrawCommand->NumInstances;
      }
      else {
        if ((param_3 == (FScene *)0x0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Scene != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                               ,0x148,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((BADTYPE)(pFVar18->PrimitiveIdInfo).bIsDynamicPrimitive) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("!VisibleMeshDrawCommand.PrimitiveIdInfo.bIsDynamicPrimitive",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                               ,0x149,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = (pFVar18->PrimitiveIdInfo).ScenePrimitiveId;
        uVar17 = 0;
        if ((int)uVar14 < (param_3->Primitives).ArrayNum) {
          uVar17 = ~uVar14 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar14 = *(uint *)(*(longlong *)
                            ((param_3->Primitives).AllocatorInstance.Data +
                            (longlong)(int)uVar14 * 8) + 0x228);
      }
      pFVar15 = local_70;
      if (uVar14 != 0) {
        iVar13 = (pFVar18->PrimitiveIdInfo).InstanceSceneDataOffset;
        if ((BADTYPE)(pFVar18->PrimitiveIdInfo).bIsDynamicPrimitive) {
          iVar13 = iVar13 + param_2;
        }
        if (((uint)this->NumGPUSceneInstances < uVar14 + iVar13) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InstanceBaseIndex + CommandNumInstances <= uint32(NumGPUSceneInstances)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\InstanceCulling\\InstanceCullingOcclusionQuery.cpp"
                               ,0x1cb,L""), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar17 = 0;
        pFVar15 = local_70;
        if (uVar14 != 0) {
          if (0xf < uVar14) {
            iVar10 = 8;
            do {
              iVar9 = iVar10 + -4;
              *(uint *)pFVar16 = uVar17 + iVar13 + iVar12;
              *(uint *)(pFVar16 + 4) = uVar17 + iVar13 + iVar4;
              *(uint *)(pFVar16 + 8) = uVar17 + iVar13 + iVar5;
              *(uint *)(pFVar16 + 0xc) = uVar17 + iVar13 + iVar6;
              uVar17 = uVar17 + 0x10;
              *(int *)(pFVar16 + 0x10) = iVar9 + iVar13 + iVar12;
              *(int *)(pFVar16 + 0x14) = iVar9 + iVar13 + iVar4;
              *(int *)(pFVar16 + 0x18) = iVar9 + iVar13 + iVar5;
              *(int *)(pFVar16 + 0x1c) = iVar9 + iVar13 + iVar6;
              *(int *)(pFVar16 + 0x20) = iVar10 + iVar13 + iVar12;
              *(int *)(pFVar16 + 0x24) = iVar10 + iVar13 + iVar4;
              *(int *)(pFVar16 + 0x28) = iVar10 + iVar13 + iVar5;
              *(int *)(pFVar16 + 0x2c) = iVar10 + iVar13 + iVar6;
              *(int *)(pFVar16 + 0x30) = iVar10 + 4 + iVar13;
              *(int *)(pFVar16 + 0x34) = iVar10 + 5 + iVar13;
              *(int *)(pFVar16 + 0x38) = iVar10 + 6 + iVar13;
              *(int *)(pFVar16 + 0x3c) = iVar10 + 7 + iVar13;
              pFVar16 = pFVar16 + 0x40;
              iVar10 = iVar10 + 0x10;
            } while (uVar17 < (uVar14 & 0xfffffff0));
            if (uVar14 <= uVar17) goto LAB_144bc259f;
          }
          do {
            iVar10 = uVar17 + iVar13;
            uVar17 = uVar17 + 1;
            *(int *)pFVar16 = iVar10;
            pFVar16 = pFVar16 + 4;
          } while (uVar17 < uVar14);
        }
      }
    }
LAB_144bc259f:
    pFVar18 = pFVar18 + 1;
  } while( true );
}

// operator() @ 1504c6730

bool __thiscall
`FInstanceCullingOcclusionQueryDeferredContext::Execute'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4571219442154864248>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4571219442154864248>,
                       &`public:___cdecl_`public:_void___cdecl_FInstanceCullingOcclusionQueryDeferredContext::Execute(void)___ptr64'::`15'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

