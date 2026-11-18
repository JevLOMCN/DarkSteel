// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 8

// FVulkanRayTracingPipelineState @ 145b481c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

FVulkanRayTracingPipelineState * __thiscall
FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState
          (FVulkanRayTracingPipelineState *this,FVulkanDevice *param_1,
          FRayTracingPipelineStateInitializer *param_2)

{
  FScriptContainerElement *pFVar1;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar2;
  FVulkanRayTracingPipelineLibraryCache *pFVar3;
  FName FVar4;
  FScriptContainerElement *pFVar5;
  FVulkanPipelineStateCacheManager *pFVar6;
  VkPipelineLayout_T *pVVar7;
  VkPipeline_T *pVVar8;
  FName FVar9;
  code *pcVar10;
  FRHIRayTracingShader **ppFVar11;
  undefined8 uVar12;
  FRHIRayTracingShader **ppFVar13;
  undefined8 uVar14;
  FRHIRayTracingShader **ppFVar15;
  undefined8 uVar16;
  FRHIRayTracingShader **ppFVar17;
  undefined8 uVar18;
  int iVar19;
  FVulkanDevice *pFVar20;
  bool bVar21;
  int iVar22;
  VkResult VVar23;
  FVulkanRayTracingPipelineState *pFVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCompiledShaders> FVar26;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  FTaskGraphInterface *pFVar29;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCreatedPipelines> FVar30;
  ulonglong uVar31;
  longlong lVar32;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar33;
  uint uVar34;
  FPlatformRWLock *SRWLock;
  uint uVar35;
  uint uVar36;
  ForAnyElementType FVar37;
  VkPipelineCache_T *pVVar38;
  uchar auVar39 [8];
  undefined1 auStackY_318 [32];
  undefined1 local_2b8 [8];
  ForAnyElementType local_2b0;
  undefined8 local_2a8;
  FName local_2a0;
  ForAnyElementType local_298;
  int local_290 [2];
  ForAnyElementType local_288;
  int local_280 [2];
  ForAnyElementType local_278;
  int local_270 [2];
  ForAnyElementType local_268;
  int local_260 [2];
  ForAnyElementType local_258;
  undefined8 local_250;
  FName local_248;
  FVulkanDevice *local_240;
  FName local_238;
  FStatMessage local_230;
  FStatMessage local_220;
  VkRayTracingPipelineInterfaceCreateInfoKHR local_210;
  ForAnyElementType *local_1f8;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> *local_1f0;
  FVulkanRayTracingPipelineLibraryCache *local_1e8;
  FName local_1e0;
  VkPipelineLibraryCreateInfoKHR local_1d8;
  VkRayTracingPipelineCreateInfoKHR local_1b8;
  FName local_148;
  FName local_140;
  TArrayView<FRHIRayTracingShader_*,int> local_138;
  TArrayView<FRHIRayTracingShader_*,int> local_128;
  TArrayView<FRHIRayTracingShader_*,int> local_118;
  TArrayView<FRHIRayTracingShader_*,int> local_108;
  FRHIRayTracingShader **local_f8;
  undefined8 uStack_f0;
  FRHIRayTracingShader **local_e8;
  undefined8 uStack_e0;
  FRHIRayTracingShader **local_d8;
  undefined8 uStack_d0;
  FRHIRayTracingShader **local_c8;
  undefined8 uStack_c0;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_b8;
  int local_90;
  int local_8c;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2a0 = (FName)param_2;
  local_240 = param_1;
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RayTracingPipelineState);
  RHIValidation::FRayTracingPipelineState::FRayTracingPipelineState
            ((FRayTracingPipelineState *)&this->_padding_,param_2);
  this->Device = param_1;
  this->_padding_ = (longlong)&___7FVulkanRayTracingPipelineState__6B_;
  (this->RayGen).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayGen).Shaders.ArrayNum = 0;
  (this->RayGen).Shaders.ArrayMax = 0;
  (this->RayGen).ShaderHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RayGen).ShaderHandles.ArrayNum = 0;
  (this->RayGen).ShaderHandles.ArrayMax = 0;
  (this->Miss).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Miss).Shaders.ArrayNum = 0;
  (this->Miss).Shaders.ArrayMax = 0;
  (this->Miss).ShaderHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Miss).ShaderHandles.ArrayNum = 0;
  (this->Miss).ShaderHandles.ArrayMax = 0;
  (this->HitGroup).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroup).Shaders.ArrayNum = 0;
  (this->HitGroup).Shaders.ArrayMax = 0;
  (this->HitGroup).ShaderHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroup).ShaderHandles.ArrayNum = 0;
  (this->HitGroup).ShaderHandles.ArrayMax = 0;
  (this->Callable).Shaders.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callable).Shaders.ArrayNum = 0;
  (this->Callable).Shaders.ArrayMax = 0;
  (this->Callable).ShaderHandles.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Callable).ShaderHandles.ArrayNum = 0;
  (this->Callable).ShaderHandles.ArrayMax = 0;
  this->Pipeline = (VkPipeline_T *)0x0;
  this->bIsPartialPipeline = param_2->bPartial;
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  bVar21 = FVulkanDevice::SupportsBindless(param_1);
  if ((!bVar21) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("InDevice.SupportsBindless()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x61b,L"Vulkan ray tracing pipelines are only supported in bindless."),
     bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar24 = (FVulkanRayTracingPipelineState *)(*pcVar10)();
    return pFVar24;
  }
  if (((param_1->OptionalDeviceExtensionProperties).RayTracingPipelineProps.maxRayHitAttributeSize <
       (uint)param_2->_padding_) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Initializer.MaxAttributeSizeInBytes <= InDevice.GetOptionalExtensionProperties().RayTracingPipelineProps.maxRayHitAttributeSize"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x61f,L"Required attribute size (%u) too large for current device (%u).")
     , bVar21)) {
    pcVar10 = (code *)swi(3);
    pFVar24 = (FVulkanRayTracingPipelineState *)(*pcVar10)();
    return pFVar24;
  }
  ppFVar11 = (param_2->RayGenTable).DataPtr;
  uVar12._0_4_ = (param_2->RayGenTable).ArrayNum;
  uVar12._4_4_ = *(undefined4 *)&(param_2->RayGenTable).field_0xc;
  pFVar3 = param_1->RayTracingPipelineLibraryCache;
  ppFVar13 = (param_2->MissTable).DataPtr;
  uVar14._0_4_ = (param_2->MissTable).ArrayNum;
  uVar14._4_4_ = *(undefined4 *)&(param_2->MissTable).field_0xc;
  local_258.Data = (FScriptContainerElement *)0x0;
  ppFVar15 = (param_2->HitGroupTable).DataPtr;
  uVar16._0_4_ = (param_2->HitGroupTable).ArrayNum;
  uVar16._4_4_ = *(undefined4 *)&(param_2->HitGroupTable).field_0xc;
  local_250 = 0;
  ppFVar17 = (param_2->CallableTable).DataPtr;
  uVar18._0_4_ = (param_2->CallableTable).ArrayNum;
  uVar18._4_4_ = *(undefined4 *)&(param_2->CallableTable).field_0xc;
  uVar34 = (int)*(undefined8 *)&(param_2->RayGenTable).ArrayNum +
           (int)*(undefined8 *)&(param_2->CallableTable).ArrayNum +
           (int)*(undefined8 *)&(param_2->HitGroupTable).ArrayNum +
           (int)*(undefined8 *)&(param_2->MissTable).ArrayNum;
  local_b8.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  local_90 = 0;
  local_8c = 4;
  local_f8 = ppFVar11;
  uStack_f0 = uVar12;
  local_e8 = ppFVar13;
  uStack_e0 = uVar14;
  local_d8 = ppFVar15;
  uStack_d0 = uVar16;
  local_c8 = ppFVar17;
  uStack_c0 = uVar18;
  if ((int)uVar34 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar34);
  }
  if (0 < (int)uVar34) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar34,&local_258,0,(int *)((longlong)&local_250 + 4));
  }
  if (local_8c < (int)uVar34) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,uVar34,&local_b8,local_90,&local_8c);
  }
  FVar9 = local_2a0;
  local_1f8 = &local_258;
  local_1f0 = &local_b8;
  local_1e0 = local_2a0;
  local_1e8 = pFVar3;
  local_138.DataPtr = ppFVar11;
  local_138._8_8_ = uVar12;
  `FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState'::__l2::<lambda_1>::operator()
            (&local_1f8,&local_138,&(this->RayGen).Shaders);
  local_128.DataPtr = ppFVar13;
  local_128._8_8_ = uVar14;
  `FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState'::__l2::<lambda_1>::operator()
            (&local_1f8,&local_128,&(this->Miss).Shaders);
  local_118.DataPtr = ppFVar15;
  local_118._8_8_ = uVar16;
  `FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState'::__l2::<lambda_1>::operator()
            (&local_1f8,&local_118,&(this->HitGroup).Shaders);
  local_108.DataPtr = ppFVar17;
  local_108._8_8_ = uVar18;
  `FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState'::__l2::<lambda_1>::operator()
            (&local_1f8,&local_108,&(this->Callable).Shaders);
  auVar39[4] = '\0';
  auVar39[5] = '\0';
  auVar39[6] = '\0';
  auVar39[7] = '\0';
  auVar39._0_4_ = uVar34;
  if (auVar39 != (uchar  [8])0x0) {
    FVar26 = StatPtr_STAT_VulkanRayTracingCompiledShaders;
    if (StatPtr_STAT_VulkanRayTracingCompiledShaders ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCompiledShaders>)0x0) {
      pFVar25 = ::FName::FName(&local_148,"STAT_VulkanRayTracingCompiledShaders");
      FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCompiledShaders>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingCompiledShaders
                          ,*pFVar25,L"Compiled shaders (total)","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Invalid);
    }
    FVar4 = *(FName *)FVar26;
    local_2a0 = FVar4;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      local_230.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_248 = FVar4;
      local_230.StatData.Pad = auVar39;
      local_230.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar27,&local_230);
      FStatsTrace::Add(&local_248,(long64)auVar39);
      if (pFVar27->ScopeCount == 0) {
        FThreadStats::Flush(pFVar27,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar27,false,false);
      }
    }
  }
  if (this->bIsPartialPipeline != false) goto LAB_145b48d85;
  pFVar29 = FTaskGraphInterface::Get();
  (**(code **)((longlong)*pFVar29 + 0x60))(pFVar29,&local_b8,0xff);
  iVar19 = (int)local_250;
  uVar31 = (ulonglong)(int)local_250;
  local_2b0.Data = (FScriptContainerElement *)0x0;
  local_2a8 = 0;
  pFVar1 = local_258.Data + uVar31 * 8;
  FVar37.Data = local_258.Data;
  while( true ) {
    if ((int)uVar31 != iVar19) {
      local_2b8[0] = 0;
      `TCheckedPointerIterator<FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_2b8);
    }
    pFVar20 = local_240;
    if (FVar37.Data == pFVar1) break;
                    /* WARNING: Load size is inaccurate */
    pFVar5 = *FVar37.Data;
    if ((*(longlong *)pFVar5 == 0) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("PipelineLibrary->PipelineHandle",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x654,
                            L"Invalid pipeline library handle while building ray tracing pipeline.")
       , bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar24 = (FVulkanRayTracingPipelineState *)(*pcVar10)();
      return pFVar24;
    }
    if (((local_2b0.Data <= pFVar5) && (pFVar5 < local_2b0.Data + (longlong)local_2a8._4_4_ * 8)) &&
       (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar21)) {
      pcVar10 = (code *)swi(3);
      pFVar24 = (FVulkanRayTracingPipelineState *)(*pcVar10)();
      return pFVar24;
    }
    if ((int)local_2a8 == local_2a8._4_4_) {
      iVar22 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&local_2b0,(int *)((longlong)&local_2a8 + 4));
      local_2a8 = CONCAT44(local_2a8._4_4_,iVar22);
    }
    lVar32 = (longlong)(int)local_2a8;
    FVar37.Data = FVar37.Data + 8;
    local_2a8 = CONCAT44(local_2a8._4_4_,(int)local_2a8 + 1);
    *(longlong *)(local_2b0.Data + lVar32 * 8) = *(longlong *)pFVar5;
    uVar31 = local_250 & 0xffffffff;
  }
  local_1b8._52_4_ = 0;
  local_210.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
  local_1b8.pDynamicState._0_4_ = 0;
  local_1b8.pDynamicState._4_4_ = 0;
  local_1d8.sType = VK_STRUCTURE_TYPE_PIPELINE_LIBRARY_CREATE_INFO_KHR;
  local_210._4_8_ = 0;
  local_210._12_8_ = (ulonglong)*(uint *)((longlong)FVar9 + 4) << 0x20;
  local_210.maxPipelineRayHitAttributeSize = *(uint *)FVar9;
  local_1d8._20_4_ = 0;
  pFVar6 = local_240->PipelineStateCache;
  local_1d8._4_8_ = 0;
  local_1d8._12_8_ = local_2a8 << 0x20;
  local_1d8.pLibraries._0_4_ = SUB84(local_2b0.Data,0);
  local_1d8.pLibraries._4_4_ = (undefined4)((ulonglong)local_2b0.Data >> 0x20);
  local_1b8._100_4_ = 0;
  local_1b8.pLibraryInfo = &local_1d8;
  local_1b8.pLibraryInterface = &local_210;
  local_1b8._36_8_ = 0;
  local_1b8.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
  local_1b8._4_8_ = 0;
  local_1b8._44_8_ = 0x100000000;
  local_1b8.basePipelineHandle._0_4_ = 0;
  local_1b8._92_8_ = 0;
  local_1b8._20_8_ = 0;
  local_1b8._28_8_ = 0;
  pVVar7 = local_240->BindlessDescriptorManager->BindlessPipelineLayout;
  local_1b8.layout._0_4_ = SUB84(pVVar7,0);
  local_1b8.layout._4_4_ = (undefined4)((ulonglong)pVVar7 >> 0x20);
  local_1b8._12_8_ = 0x2000000000000000;
  if (this->bIsPartialPipeline == false) {
LAB_145b4881b:
    SRWLock = &(pFVar6->GlobalPSOCache).PipelineCacheLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pVVar38 = (pFVar6->GlobalPSOCache).PipelineCache;
  }
  else {
    SRWLock = &(pFVar6->CurrentPrecompilingPSOCache).PipelineCacheLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pVVar38 = (pFVar6->CurrentPrecompilingPSOCache).PipelineCache;
    if (pVVar38 == (VkPipelineCache_T *)0x0) {
      ReleaseSRWLockShared((PSRWLOCK)SRWLock);
      goto LAB_145b4881b;
    }
  }
  VVar23 = (*VulkanDynamicAPI::vkCreateRayTracingPipelinesKHR)
                     (pFVar6->Device->Device,(VkDeferredOperationKHR_T *)0x0,pVVar38,1,&local_1b8,
                      &VulkanRHI::GAllocationCallbacks,&this->Pipeline);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  if ((int)VVar23 < 0) {
    VulkanRHI::VerifyVulkanResult
              (VVar23,
               "InDevice.GetPipelineStateCache()->CreateRayTracingPipeline(RayTracingPipelineCreateInfo, bIsPartialPipeline, Pipeline)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
               ,0x66a);
  }
  pVVar8 = this->Pipeline;
  uVar34 = (pFVar20->OptionalDeviceExtensionProperties).RayTracingPipelineProps.
           shaderGroupHandleSize;
  local_288.Data = (FScriptContainerElement *)0x0;
  local_280[0] = 0;
  local_280[1] = 0;
  uVar35 = (uint)uStack_f0;
  uVar36 = 0;
  if (uVar35 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar34 * uVar35,&local_288,local_280,local_280 + 1);
    VVar23 = (*VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR)
                       (pFVar20->Device,pVVar8,0,uVar35,(ulonglong)(uVar34 * uVar35),local_288.Data)
    ;
    uVar36 = uVar35;
    if (VVar23 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar23,
                 "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice.GetHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                 ,0x67b);
    }
  }
  pTVar2 = &(this->RayGen).ShaderHandles;
  if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_288) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_288.Data;
    (this->RayGen).ShaderHandles.ArrayNum = local_280[0];
    (this->RayGen).ShaderHandles.ArrayMax = local_280[1];
    local_280[0] = 0;
    local_280[1] = 0;
    local_288.Data = (FScriptContainerElement *)0x0;
  }
  if (local_288.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_288.Data);
  }
  pVVar8 = this->Pipeline;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270[0] = 0;
  local_270[1] = 0;
  uVar35 = (uint)uStack_e0;
  if (uVar35 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar34 * uVar35,&local_278,local_270,local_270 + 1);
    VVar23 = (*VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR)
                       (pFVar20->Device,pVVar8,uVar36,uVar35,(ulonglong)(uVar34 * uVar35),
                        local_278.Data);
    if (VVar23 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar23,
                 "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice.GetHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                 ,0x67b);
    }
    uVar36 = uVar36 + uVar35;
  }
  pTVar2 = &(this->Miss).ShaderHandles;
  if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_278) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_278.Data;
    (this->Miss).ShaderHandles.ArrayNum = local_270[0];
    (this->Miss).ShaderHandles.ArrayMax = local_270[1];
    local_270[0] = 0;
    local_270[1] = 0;
    local_278.Data = (FScriptContainerElement *)0x0;
  }
  if (local_278.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_278.Data);
  }
  pVVar8 = this->Pipeline;
  local_268.Data = (FScriptContainerElement *)0x0;
  local_260[0] = 0;
  local_260[1] = 0;
  uVar35 = (uint)uStack_d0;
  if (uVar35 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar35 * uVar34,&local_268,local_260,local_260 + 1);
    VVar23 = (*VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR)
                       (pFVar20->Device,pVVar8,uVar36,uVar35,(ulonglong)(uVar35 * uVar34),
                        local_268.Data);
    if (VVar23 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar23,
                 "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice.GetHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                 ,0x67b);
    }
    uVar36 = uVar36 + uVar35;
  }
  pTVar2 = &(this->HitGroup).ShaderHandles;
  if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_268) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_268.Data;
    (this->HitGroup).ShaderHandles.ArrayNum = local_260[0];
    (this->HitGroup).ShaderHandles.ArrayMax = local_260[1];
    local_260[0] = 0;
    local_260[1] = 0;
    local_268.Data = (FScriptContainerElement *)0x0;
  }
  if (local_268.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_268.Data);
  }
  pVVar8 = this->Pipeline;
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290[0] = 0;
  local_290[1] = 0;
  uVar35 = (uint)uStack_c0;
  if (uVar35 != 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar35 * uVar34,&local_298,local_290,local_290 + 1);
    VVar23 = (*VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR)
                       (pFVar20->Device,pVVar8,uVar36,uVar35,(ulonglong)(uVar35 * uVar34),
                        local_298.Data);
    if (VVar23 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar23,
                 "VulkanDynamicAPI::vkGetRayTracingShaderGroupHandlesKHR(InDevice.GetHandle(), RTPipeline, HandleOffset, HandleCount, ShaderHandleStorageSize, OutHandleStorage.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                 ,0x67b);
    }
  }
  pTVar2 = &(this->Callable).ShaderHandles;
  if (pTVar2 != (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)&local_298) {
    pFVar1 = (pTVar2->AllocatorInstance).Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pTVar2->AllocatorInstance).Data = local_298.Data;
    (this->Callable).ShaderHandles.ArrayNum = local_290[0];
    (this->Callable).ShaderHandles.ArrayMax = local_290[1];
    local_290[0] = 0;
    local_290[1] = 0;
    local_298.Data = (FScriptContainerElement *)0x0;
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  FVar30 = StatPtr_STAT_VulkanRayTracingCreatedPipelines;
  if (StatPtr_STAT_VulkanRayTracingCreatedPipelines ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCreatedPipelines>)0x0) {
    pFVar25 = ::FName::FName(&local_140,"STAT_VulkanRayTracingCreatedPipelines");
    FVar30 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingCreatedPipelines>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingCreatedPipelines,
                        *pFVar25,L"Created pipelines (total)","STATGROUP_VulkanRayTracing",
                        "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                        MCR_Invalid);
  }
  FVar9 = *(FName *)FVar30;
  local_2a0 = FVar9;
  if (((FVar9 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar27 == (FThreadStats *)0x0) {
      pFVar28 = FThreadStatsPool::Get();
      pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
    }
    local_220.NameAndInfo.Number = FVar9.Number & 0xffffafff | 0xa000;
    local_220.StatData.Pad[0] = '\x01';
    local_220.StatData.Pad[1] = '\0';
    local_220.StatData.Pad[2] = '\0';
    local_220.StatData.Pad[3] = '\0';
    local_220.StatData.Pad[4] = '\0';
    local_220.StatData.Pad[5] = '\0';
    local_220.StatData.Pad[6] = '\0';
    local_220.StatData.Pad[7] = '\0';
    local_238 = FVar9;
    local_220.NameAndInfo.Index.Value = FVar9.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar27,&local_220);
    FStatsTrace::Add(&local_238,1);
    if (pFVar27->ScopeCount == 0) {
      FThreadStats::Flush(pFVar27,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar27,false,false);
    }
  }
  if (local_2b0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b0.Data);
  }
LAB_145b48d85:
  FVar33 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_b8;
  if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar33 = local_b8.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>((TRefCountPtr<FBaseGraphTask> *)FVar33,local_90);
  if (local_b8.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_b8.SecondaryData);
  }
  if (local_258.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_258.Data);
  }
  return this;
}

// ~FVulkanRayTracingPipelineState @ 145b4ffa0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanRayTracingPipelineState::~FVulkanRayTracingPipelineState
          (FVulkanRayTracingPipelineState *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanRayTracingPipelineState__6B_;
  if (this->Pipeline != (VkPipeline_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,this->Pipeline,&VulkanRHI::GAllocationCallbacks);
    this->Pipeline = (VkPipeline_T *)0x0;
  }
  pFVar1 = (this->Callable).ShaderHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
            ((TRefCountPtr<FVulkanRayTracingShader> *)
             (this->Callable).Shaders.AllocatorInstance.Data,(this->Callable).Shaders.ArrayNum);
  pFVar1 = (this->Callable).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->HitGroup).ShaderHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
            ((TRefCountPtr<FVulkanRayTracingShader> *)
             (this->HitGroup).Shaders.AllocatorInstance.Data,(this->HitGroup).Shaders.ArrayNum);
  pFVar1 = (this->HitGroup).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Miss).ShaderHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
            ((TRefCountPtr<FVulkanRayTracingShader> *)(this->Miss).Shaders.AllocatorInstance.Data,
             (this->Miss).Shaders.ArrayNum);
  pFVar1 = (this->Miss).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RayGen).ShaderHandles.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TRefCountPtr<FVulkanRayTracingShader>,int>
            ((TRefCountPtr<FVulkanRayTracingShader> *)(this->RayGen).Shaders.AllocatorInstance.Data,
             (this->RayGen).Shaders.ArrayNum);
  pFVar1 = (this->RayGen).Shaders.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145b52fb0

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
`FVulkanRayTracingPipelineState::FVulkanRayTracingPipelineState'::__l2::<lambda_1>::operator()
          (void *this,TArrayView<FRHIRayTracingShader_*,int> *param_1,
          TArray<TRefCountPtr<FVulkanRayTracingShader>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  int *piVar2;
  FRHIRayTracingShader **ppFVar3;
  uint uVar4;
  FVulkanRayTracingShader *this_00;
  FBaseGraphTask *pFVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  ForAnyElementType *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar13;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  FRHIRayTracingShader **ppFVar15;
  FPipelineLibrary *local_38;
  FVulkanRayTracingShader *local_30;
  
  uVar4 = param_1->ArrayNum;
  if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
  }
  piVar1 = &param_2->ArrayMax;
  if (*piVar1 < (int)uVar4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar4,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
  }
  ppFVar15 = param_1->DataPtr;
  ppFVar3 = ppFVar15 + (int)uVar4;
  while( true ) {
    if (ppFVar15 == ppFVar3) {
      return;
    }
    this_00 = (FVulkanRayTracingShader *)*ppFVar15;
    local_38 = FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary
                         (*(FVulkanRayTracingPipelineLibraryCache **)((longlong)this + 0x10),this_00
                          ,*(FRayTracingPipelineStateInitializer **)((longlong)this + 0x18));
    pFVar5 = (local_38->GraphEvent).Reference;
    if ((pFVar5 != (FBaseGraphTask *)0x0) && (pFVar5->field_0xd0 == '\0')) {
      FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)this + 8);
      pTVar14 = &local_38->GraphEvent;
      FVar6 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar13 + 0x20);
      FVar12 = FVar13;
      if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar12 = FVar6;
      }
      if ((ulonglong)FVar12 <= pTVar14) {
        FVar12 = FVar13;
        if (FVar6 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar12 = FVar6;
        }
        if ((pTVar14 < (undefined1 *)
                       ((longlong)FVar12 + (longlong)*(int *)((longlong)FVar13 + 0x2c) * 8)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      iVar11 = *(int *)((longlong)FVar13 + 0x28);
      if (iVar11 == *(int *)((longlong)FVar13 + 0x2c)) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                           (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar13,
                            (int *)((longlong)FVar13 + 0x2c));
      }
      *(int *)((longlong)FVar13 + 0x28) = iVar11 + 1;
      if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar13 + 0x20) !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar13 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar13 + 0x20);
      }
      *(undefined8 *)((longlong)FVar13 + (longlong)iVar11 * 8) = 0;
      pFVar5 = pTVar14->Reference;
      *(FBaseGraphTask **)((longlong)FVar13 + (longlong)iVar11 * 8) = pFVar5;
      if (pFVar5 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar5->field_0x30 = *(int *)&pFVar5->field_0x30 + 1;
        UNLOCK();
      }
    }
    pFVar7 = *(ForAnyElementType **)this;
    if (((pFVar7->Data <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar7->Data + (longlong)*(int *)((longlong)&pFVar7[1].Data + 4) * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iVar11 = *(int *)&pFVar7[1].Data;
    piVar2 = (int *)((longlong)&pFVar7[1].Data + 4);
    if (iVar11 == *piVar2) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,pFVar7,piVar2);
    }
    *(int *)&pFVar7[1].Data = iVar11 + 1;
    *(FPipelineLibrary **)(pFVar7->Data + (longlong)iVar11 * 8) = local_38;
    local_30 = this_00;
    if (this_00 != (FVulkanRayTracingShader *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    pFVar8 = (param_2->AllocatorInstance).Data;
    if (((pFVar8 <= (FScriptContainerElement *)&local_30) &&
        ((FScriptContainerElement *)&local_30 < pFVar8 + (longlong)*piVar1 * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) break;
    iVar11 = param_2->ArrayNum;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,piVar1);
      param_2->ArrayNum = iVar11;
    }
    param_2->ArrayNum = iVar11 + 1;
    ppFVar15 = ppFVar15 + 1;
    pFVar8 = (param_2->AllocatorInstance).Data;
    *(undefined8 *)(pFVar8 + (longlong)iVar11 * 8) = 0;
    *(FVulkanRayTracingShader **)(pFVar8 + (longlong)iVar11 * 8) = local_30;
    local_30 = (FVulkanRayTracingShader *)0x0;
  }
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}

// GetShaderData @ 145b6ac50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

ShaderData * __thiscall
FVulkanRayTracingPipelineState::GetShaderData
          (FVulkanRayTracingPipelineState *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  ShaderData *pSVar3;
  
  if (param_1 == SF_NumStandardFrequencies) {
    return &this->RayGen;
  }
  if (param_1 == SF_RayMiss) {
    return &this->Miss;
  }
  if (param_1 == SF_RayHitGroup) {
    return &this->HitGroup;
  }
  if (param_1 != SF_RayCallable) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x6a4,L"Only usable with RayTracing shaders.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pSVar3 = (ShaderData *)(*pcVar1)();
      return pSVar3;
    }
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        atexit(`FVulkanRayTracingPipelineState::GetShaderData'::__l2::
               _dynamic_atexit_destructor_for__EmptyShaderData__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    return &EmptyShaderData;
  }
  return &this->Callable;
}

// GetShaderHandles @ 145b6ad30

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

TArray<unsigned_char,TSizedDefaultAllocator<32>_> * __thiscall
FVulkanRayTracingPipelineState::GetShaderHandles
          (FVulkanRayTracingPipelineState *this,EShaderFrequency param_1)

{
  ShaderData *pSVar1;
  
  pSVar1 = GetShaderData(this,param_1);
  return &pSVar1->ShaderHandles;
}

// GetShaderIndex @ 145b6ad50

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

int __thiscall
FVulkanRayTracingPipelineState::GetShaderIndex
          (FVulkanRayTracingPipelineState *this,FVulkanRayTracingShader *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ShaderData *pSVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar3 = param_1->_padding_;
  lVar4 = param_1->_padding_;
  lVar5 = param_1->_padding_;
  pSVar9 = GetShaderData(this,*(EShaderFrequency *)((longlong)&param_1->_padding_ + 4));
  uVar10 = 0;
  iVar8 = (pSVar9->Shaders).ArrayNum;
  if (0 < iVar8) {
    lVar11 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      lVar1 = *(longlong *)((pSVar9->Shaders).AllocatorInstance.Data + lVar11);
      if (((lVar3 == *(longlong *)(lVar1 + 0xf0)) && (lVar4 == *(longlong *)(lVar1 + 0xf8))) &&
         ((int)lVar5 == *(int *)(lVar1 + 0x100))) {
        return uVar10;
      }
      iVar8 = (pSVar9->Shaders).ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar10 < iVar8);
  }
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                     ,0x6b8,L"RayTracing shader is not present in the given ray tracing pipeline. ")
  ;
  if (!bVar6) {
    return -1;
  }
  pcVar2 = (code *)swi(3);
  iVar8 = (*pcVar2)();
  return iVar8;
}

// GetVulkanShader @ 145b6b400

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

FVulkanRayTracingShader * __thiscall
FVulkanRayTracingPipelineState::GetVulkanShader
          (FVulkanRayTracingPipelineState *this,EShaderFrequency param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  ShaderData *pSVar3;
  FVulkanRayTracingShader *pFVar4;
  uint uVar5;
  
  pSVar3 = GetShaderData(this,param_1);
  uVar5 = 0;
  if (param_2 < (pSVar3->Shaders).ArrayNum) {
    uVar5 = (uint)~param_2 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVulkanRayTracingShader *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FVulkanRayTracingShader **)
          ((pSVar3->Shaders).AllocatorInstance.Data + (longlong)param_2 * 8);
}

// GetVulkanShaderNum @ 145b6b480

/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

int __thiscall
FVulkanRayTracingPipelineState::GetVulkanShaderNum
          (FVulkanRayTracingPipelineState *this,EShaderFrequency param_1)

{
  ShaderData *pSVar1;
  
  pSVar1 = GetShaderData(this,param_1);
  return (pSVar1->Shaders).ArrayNum;
}

