// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 9

// CreatePSO<FVulkanGraphicsPipelineState> @ 145ad32d0

/* WARNING: Removing unreachable block (ram,0x000145ad35d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

VkResult __thiscall
FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>
          (FVulkanPipelineCacheChunk *this,FVulkanGraphicsPipelineState *param_1,
          EPSOCacheFindResult param_2,
          TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
          *param_3)

{
  atomic<void_*> aVar1;
  code *pcVar2;
  FArchive *pFVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  VkResult VVar13;
  uint uVar14;
  FName *pFVar15;
  TStatIdData *pTVar16;
  undefined8 uVar17;
  FThreadStats *pFVar18;
  FThreadStatsPool *pFVar19;
  FIndexedLockFreeLink *pFVar20;
  TStatId TVar21;
  FVulkanCombinedChunkCacheFile *pFVar22;
  longlong *plVar23;
  FStatMessage *pFVar24;
  FName FVar25;
  FName FVar26;
  FName FVar27;
  int *piVar28;
  ulonglong uVar29;
  FColor_u_0 local_238 [2];
  TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
  *local_230;
  FColor_u_0 local_228;
  FColor_u_0 local_224;
  FColor_u_0 local_220;
  FColor_u_0 local_21c;
  FName local_218;
  byte local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d0;
  FName local_1c0;
  FName local_1b0;
  FName local_1a0;
  LARGE_INTEGER local_190;
  LARGE_INTEGER local_188;
  FStatMessage local_180;
  LARGE_INTEGER local_170;
  LARGE_INTEGER local_168;
  FStatMessage local_160;
  FStatMessage local_150;
  FStatMessage local_140;
  FSourceLocation local_128;
  FVulkanGraphicsPipelineState *local_108;
  VkPipelineCache_T *local_100;
  undefined4 local_f8;
  FPlatformRWLock *local_f0;
  FVulkanGraphicsPipelineState *local_e8;
  VkPipelineCache_T *local_e0;
  undefined4 local_d8;
  FPlatformRWLock *local_d0;
  FName local_c8 [2];
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FName local_98;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_230 = param_3;
  GetCurrentThreadId();
  ::FString::PrintfImpl
            (&local_68,
             L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO  tot %d ");
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  Touch(this);
  bVar6 = false;
  bVar5 = false;
  piVar28 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar28 <
       `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_a0,"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO"
                            );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                ::__l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO,*pFVar15
               ,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar16 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO == (TStatIdData *)0x0) {
    pFVar15 = ::FName::FName(&local_a8,"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO"
                            );
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                          ::__l2::
                          StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO,
                         *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSO",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar27 = *(FName *)&pTVar16->Name;
  bVar8 = false;
  bVar10 = false;
  local_1c0.ComparisonIndex.Value = 0;
  local_1c0.Number = 0;
  bVar11 = false;
  bVar7 = false;
  if ((FVar27.ComparisonIndex.Value.Value == 0) && (FVar27.Number == 0)) {
LAB_145ad3522:
    bVar10 = bVar7;
    bVar8 = bVar11;
    bVar11 = false;
    FVar27 = local_1c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_228.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_228._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar10 = true;
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_208.ComparisonIndex.Value = FVar27.ComparisonIndex.Value.Value;
        local_208.Number = FVar27.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_208,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x20f);
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ad3522;
    FThreadStats::AddMessage(FVar27,CycleScopeStart);
    bVar11 = true;
  }
  if ((*piVar28 <
       `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
       ::__l3::_thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                           ::__l3::_thread_safe_static_guard_1__),
     `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
     ::__l3::_thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC = (TStatIdData *)0x0;
    pFVar15 = ::FName::FName(&local_b0,
                             "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                ::__l3::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC,
               *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                         ::__l3::_thread_safe_static_guard_1__);
  }
  pTVar16 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC == (TStatIdData *)0x0
     ) {
    pFVar15 = ::FName::FName(&local_b8,
                             "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC");
    pTVar16 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                          ::__l3::
                          StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC,
                         *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_CreatePSOFUNC"
                         ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                         false,MCR_Invalid);
  }
  FVar26 = *(FName *)&pTVar16->Name;
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_145ad3707:
    bVar7 = false;
    FVar26 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_224.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_224._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_200.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
        local_200.Number = FVar26.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_200,(pTVar16->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x214);
        bVar6 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145ad3707;
    FThreadStats::AddMessage(FVar26,CycleScopeStart);
    bVar7 = true;
  }
  GetCurrentThreadId();
  ::FString::PrintfImpl
            (&local_58,
             L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO(lock  tot %d "
            );
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  aVar1 = (atomic<void_*>)param_1->PrecacheKey;
  if (param_2 == Found) {
    if ((*piVar28 <
         `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
         ::__l6::_thread_safe_static_guard_2__) &&
       (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                             ::__l6::_thread_safe_static_guard_2__),
       `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
       ::__l6::_thread_safe_static_guard_2__ == -1)) {
      _StatPtr_STAT_Vulkan_CacheManagerCreatePSO_WARM = (TStatIdData *)0x0;
      pFVar15 = ::FName::FName(&local_70,"STAT_Vulkan_CacheManagerCreatePSO_WARM");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                  ::__l6::StatPtr_STAT_Vulkan_CacheManagerCreatePSO_WARM,*pFVar15,
                 L"STAT_Vulkan_CacheManagerCreatePSO_WARM","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                           ::__l6::_thread_safe_static_guard_2__);
    }
    pTVar16 = _StatPtr_STAT_Vulkan_CacheManagerCreatePSO_WARM;
    if (_StatPtr_STAT_Vulkan_CacheManagerCreatePSO_WARM == (TStatIdData *)0x0) {
      pFVar15 = ::FName::FName(&local_98,"STAT_Vulkan_CacheManagerCreatePSO_WARM");
      pTVar16 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                            ::__l6::StatPtr_STAT_Vulkan_CacheManagerCreatePSO_WARM,*pFVar15,
                           L"STAT_Vulkan_CacheManagerCreatePSO_WARM","STATGROUP_Quick",
                           "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar25 = *(FName *)&pTVar16->Name;
    bVar12 = false;
    bVar9 = false;
    local_1e0.ComparisonIndex.Value = 0;
    local_1e0.Number = 0;
    if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_145ad3924:
      bVar4 = false;
      FVar25 = local_1e0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_220.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_220._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
        bVar12 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1f8.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
          local_1f8.Number = FVar25.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1f8,(pTVar16->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                     ,0x21a);
          bVar12 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145ad3924;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar4 = true;
    }
    local_100 = this->PipelineCacheObj;
    local_f0 = &this->PipelineCacheObjLock;
    local_f8 = 1;
    local_108 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)local_230);
    pcVar2 = *(code **)local_230;
    plVar23 = (longlong *)&local_230->field_0x10;
    if (*(longlong **)&local_230->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&local_230->field_0x28;
    }
    uVar17 = (**(code **)(*plVar23 + 8))();
    VVar13 = (*pcVar2)(uVar17,&local_108);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_160.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
        local_160.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_170);
        local_160.StatData.Pad[4] = '\0';
        local_160.StatData.Pad[5] = '\0';
        local_160.StatData.Pad[6] = '\0';
        local_160.StatData.Pad[7] = '\0';
        local_160.StatData.Pad[0] = local_170.s.LowPart._0_1_;
        local_160.StatData.Pad[1] = local_170.s.LowPart._1_1_;
        local_160.StatData.Pad[2] = local_170.s.LowPart._2_1_;
        local_160.StatData.Pad[3] = local_170.s.LowPart._3_1_;
        pFVar24 = &local_160;
LAB_145ad3a1d:
        FThreadStats::AddStatMessage(pFVar18,pFVar24);
        piVar28 = &pFVar18->ScopeCount;
        *piVar28 = *piVar28 + -1;
        if (*piVar28 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  else if (param_2 == NotFound) {
    AcquireSRWLockShared((PSRWLOCK)&this->CacheStateLock);
    if (((this->CacheState != Building) && (this->CacheState != Closing)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("CacheState == ECacheState::Building || CacheState == ECacheState::Closing"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                            ,0x223,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      VVar13 = (*pcVar2)();
      return VVar13;
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->CacheStateLock);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) <
         `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
         ::__l19::_thread_safe_static_guard_3__) &&
       (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                             ::__l19::_thread_safe_static_guard_3__),
       `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
       ::__l19::_thread_safe_static_guard_3__ == -1)) {
      _StatPtr_STAT_Vulkan_CacheManagerCreatePSO_COLD = (TStatIdData *)0x0;
      pFVar15 = ::FName::FName(&local_90,"STAT_Vulkan_CacheManagerCreatePSO_COLD");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                  ::__l19::StatPtr_STAT_Vulkan_CacheManagerCreatePSO_COLD,*pFVar15,
                 L"STAT_Vulkan_CacheManagerCreatePSO_COLD","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                           ::__l19::_thread_safe_static_guard_3__);
    }
    pTVar16 = _StatPtr_STAT_Vulkan_CacheManagerCreatePSO_COLD;
    if (_StatPtr_STAT_Vulkan_CacheManagerCreatePSO_COLD == (TStatIdData *)0x0) {
      pFVar15 = ::FName::FName(&local_88,"STAT_Vulkan_CacheManagerCreatePSO_COLD");
      pTVar16 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                            ::__l19::StatPtr_STAT_Vulkan_CacheManagerCreatePSO_COLD,*pFVar15,
                           L"STAT_Vulkan_CacheManagerCreatePSO_COLD","STATGROUP_Quick",
                           "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    FVar25 = *(FName *)&pTVar16->Name;
    bVar12 = false;
    bVar9 = false;
    local_1b0.ComparisonIndex.Value = 0;
    local_1b0.Number = 0;
    if ((FVar25.ComparisonIndex.Value.Value == 0) && (FVar25.Number == 0)) {
LAB_145ad3cfe:
      bVar4 = false;
      FVar25 = local_1b0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_21c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_21c._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
        bVar12 = false;
        bVar9 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1f0.ComparisonIndex.Value = FVar25.ComparisonIndex.Value.Value;
          local_1f0.Number = FVar25.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1f0,(pTVar16->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                     ,0x228);
          bVar12 = true;
          bVar9 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145ad3cfe;
      FThreadStats::AddMessage(FVar25,CycleScopeStart);
      bVar4 = true;
    }
    local_e0 = this->PipelineCacheObj;
    local_d0 = &this->PipelineCacheObjLock;
    local_d8 = 1;
    local_e8 = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)local_230);
    pcVar2 = *(code **)local_230;
    plVar23 = (longlong *)&local_230->field_0x10;
    if (*(longlong **)&local_230->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&local_230->field_0x28;
    }
    uVar17 = (**(code **)(*plVar23 + 8))();
    VVar13 = (*pcVar2)(uVar17,&local_e8);
    if (bVar9) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar12) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && (FVar25 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->ScopeCount <= pFVar18->bWaitForExplicitFlush) goto LAB_145ad3a43;
      local_150.NameAndInfo.Index = FVar25.ComparisonIndex.Value;
      local_150.NameAndInfo.Number = FVar25.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_168);
      local_150.StatData.Pad[4] = '\0';
      local_150.StatData.Pad[5] = '\0';
      local_150.StatData.Pad[6] = '\0';
      local_150.StatData.Pad[7] = '\0';
      local_150.StatData.Pad[0] = local_168.s.LowPart._0_1_;
      local_150.StatData.Pad[1] = local_168.s.LowPart._1_1_;
      local_150.StatData.Pad[2] = local_168.s.LowPart._2_1_;
      local_150.StatData.Pad[3] = local_168.s.LowPart._3_1_;
      pFVar24 = &local_150;
      goto LAB_145ad3a1d;
    }
  }
  else {
    VVar13 = VK_SUCCESS;
  }
LAB_145ad3a43:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar7) {
    FThreadStats::AddMessage(FVar26,CycleScopeEnd);
  }
  if (param_2 == Found) goto LAB_145ad442d;
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  uVar14 = FLockFreeLinkPolicy::AllocLockFreeLink();
  if (uVar14 == 0) {
    pFVar20 = (FIndexedLockFreeLink *)0x0;
  }
  else {
    pFVar20 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar14 >> 0xe] + (uVar14 & 0x3fff);
  }
  pFVar20->Payload = aVar1;
  FLockFreePointerListLIFORoot<64,1>::Push
            ((FLockFreePointerListLIFORoot<64,1> *)&this->PSOsToBeFlushed2,uVar14);
  LOCK();
  this->TotalNumPSOs = (TAtomic<int>)((int)this->TotalNumPSOs + 1);
  UNLOCK();
  if (param_2 == NotFound) {
    uVar29 = (ulonglong)_tls_index;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c) <
         `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
         ::__l27::_thread_safe_static_guard_4__) &&
       (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                             ::__l27::_thread_safe_static_guard_4__),
       `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
       ::__l27::_thread_safe_static_guard_4__ == -1)) {
      _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo = (TStatIdData *)0x0;
      pFVar15 = ::FName::FName(&local_80,
                               "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                  ::__l27::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo,
                 *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo",
                 "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                 MCR_Invalid);
      _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                           ::__l27::_thread_safe_static_guard_4__);
    }
    pTVar16 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo;
    if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo == (TStatIdData *)0x0
       ) {
      pFVar15 = ::FName::FName(&local_78,
                               "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo");
      pTVar16 = FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                            ::__l27::
                            StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo,
                           *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_AddTo"
                           ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                           false,MCR_Invalid);
    }
    FVar26 = *(FName *)&pTVar16->Name;
    bVar5 = false;
    bVar6 = false;
    local_1a0.ComparisonIndex.Value = 0;
    local_1a0.Number = 0;
    if ((FVar26.ComparisonIndex.Value.Value == 0) && (FVar26.Number == 0)) {
LAB_145ad4045:
      bVar7 = false;
      FVar26 = local_1a0;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_238[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_238[0]._s_0,(pTVar16->StatDescriptionAnsi).Ptr);
        bVar5 = false;
        bVar6 = true;
        if (-1 < CpuChannel->Enabled) {
          local_1e8.ComparisonIndex.Value = FVar26.ComparisonIndex.Value.Value;
          local_1e8.Number = FVar26.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_1e8,(pTVar16->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                     ,0x23e);
          bVar5 = true;
          bVar6 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145ad4045;
      FThreadStats::AddMessage(FVar26,CycleScopeStart);
      bVar7 = true;
    }
    GetCurrentThreadId();
    ::FString::PrintfImpl
              (&local_48,
               L"FVulkanChunkedPipelineCacheManager: FVulkanPipelineCacheChunk.CreatePSO AddTo tot %d "
              );
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    LOCK();
    this->TotalNumUniquePSOs = (TAtomic<int>)((int)this->TotalNumUniquePSOs + 1);
    UNLOCK();
    if ((this->PendingAddToCompiles == (atomic<unsigned___int64>)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("PendingAddToCompiles.load() != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                            ,0x243,L""), bVar12)) {
      pcVar2 = (code *)swi(3);
      VVar13 = (*pcVar2)();
      return VVar13;
    }
    LOCK();
    this->PendingAddToCompiles =
         (atomic<unsigned___int64>)((longlong)this->PendingAddToCompiles + -1);
    UNLOCK();
    if ((this->CacheState == Closing) &&
       (this->PendingAddToCompiles == (atomic<unsigned___int64>)0x0)) {
      piVar28 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar29 * 8) + 0x9d4c);
      if ((*piVar28 <
           `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
           ::__l37::_thread_safe_static_guard_5__) &&
         (_Init_thread_header(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                               ::__l37::_thread_safe_static_guard_5__),
         `public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
         ::__l37::_thread_safe_static_guard_5__ == -1)) {
        _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush = 0;
        pFVar15 = ::FName::FName(local_c8,
                                 "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                    ::__l37::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush,
                   *pFVar15,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush",
                   "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
                   MCR_Invalid);
        _Init_thread_footer(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                             ::__l37::_thread_safe_static_guard_5__);
      }
      TVar21 = FThreadSafeStaticStatInner<`FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>'::__l37::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush,1>
               ::GetStatId(&`public:_enum_VkResult___cdecl_FVulkanPipelineCacheChunk::CreatePSO<FVulkanGraphicsPipelineState>(FVulkanGraphicsPipelineState*___ptr64,FVulkanPipelineCacheChunk::EPSOCacheFindResult,TUniqueFunction<enum_VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>&___ptr64)>)___ptr64'
                            ::__l37::
                            StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Flush);
      local_128.Impl._Line = 0x247;
      local_128.Impl._Function =
           "enum VkResult __cdecl FVulkanPipelineCacheChunk::CreatePSO<class FVulkanGraphicsPipelineState>(class FVulkanGraphicsPipelineState *,enum FVulkanPipelineCacheChunk::EPSOCacheFindResult,class TUniqueFunction<enum VkResult __cdecl(struct FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<class FVulkanGraphicsPipelineState> &)>)"
      ;
      local_128.Impl._Column = 6;
      local_128.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_218,*(TStatIdData **)&(TVar21.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,&local_128);
      if ((*piVar28 <
           `private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'::
           __l2::_thread_safe_static_guard_0__) &&
         (_Init_thread_header(&`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
                               ::__l2::_thread_safe_static_guard_0__),
         `private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'::__l2
         ::_thread_safe_static_guard_0__ == -1)) {
        InitializeCriticalSectionAndSpinCount
                  ((LPCRITICAL_SECTION)
                   &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
                    ::__l2::ArchiveMutex,4000);
        atexit(`FVulkanPipelineCacheChunk::SavePSOCacheInternal'::__l2::
               _dynamic_atexit_destructor_for__ArchiveMutex__);
        _Init_thread_footer(&`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
                             ::__l2::_thread_safe_static_guard_0__);
      }
      EnterCriticalSection
                ((LPCRITICAL_SECTION)
                 &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
                  ::__l2::ArchiveMutex);
      this->CacheState = PendingFlush;
      pFVar22 = FVulkanCombinedChunkCacheFile::Get();
      if (((pFVar22->PSOFileWriter).Ptr == (FArchive *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("PSOFileWriter.IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                              ,0x19a,L""), bVar12)) {
        pcVar2 = (code *)swi(3);
        VVar13 = (*pcVar2)();
        return VVar13;
      }
      SavePSOCacheInternal(this,(pFVar22->PSOFileWriter).Ptr);
      pFVar22 = FVulkanCombinedChunkCacheFile::Get();
      pFVar3 = (pFVar22->PSOFileWriter).Ptr;
      (**(code **)(*(longlong *)pFVar3 + 0x208))(pFVar3);
      uVar14 = (**(code **)(*(longlong *)pFVar3 + 0x28))(pFVar3);
      (**(code **)(*(longlong *)pFVar3 + 0x1b8))(pFVar3,0);
      FVulkanCombinedChunkCacheFile::WriteFileHeader(pFVar3,uVar14);
      (**(code **)(*(longlong *)pFVar3 + 0x1b8))(pFVar3,uVar14);
      (**(code **)(*(longlong *)pFVar3 + 0x208))(pFVar3);
      FVulkanCombinedChunkCacheFile::UpdateMapping(pFVar22,uVar14);
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)
                 &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(void)___ptr64'
                  ::__l2::ArchiveMutex);
      if ((local_210 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_210 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_210 & 4) != 0) {
        FThreadStats::AddMessage(local_218,CycleScopeEnd);
      }
    }
    if (bVar6) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar7) && (FVar26 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar18 == (FThreadStats *)0x0) {
        pFVar19 = FThreadStatsPool::Get();
        pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
      }
      if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
        local_140.NameAndInfo.Index = FVar26.ComparisonIndex.Value;
        local_140.NameAndInfo.Number = FVar26.Number & 0xffff6fff | 0x6000;
        QueryPerformanceCounter(&local_190);
        local_140.StatData.Pad[4] = '\0';
        local_140.StatData.Pad[5] = '\0';
        local_140.StatData.Pad[6] = '\0';
        local_140.StatData.Pad[7] = '\0';
        local_140.StatData.Pad[0] = local_190.s.LowPart._0_1_;
        local_140.StatData.Pad[1] = local_190.s.LowPart._1_1_;
        local_140.StatData.Pad[2] = local_190.s.LowPart._2_1_;
        local_140.StatData.Pad[3] = local_190.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar18,&local_140);
        piVar28 = &pFVar18->ScopeCount;
        *piVar28 = *piVar28 + -1;
        if (*piVar28 == 0) {
          FThreadStats::Flush(pFVar18,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar18,false,false);
        }
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
LAB_145ad442d:
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar11) && (FVar27 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar18 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar18 == (FThreadStats *)0x0) {
      pFVar19 = FThreadStatsPool::Get();
      pFVar18 = FThreadStatsPool::GetFromPool(pFVar19);
    }
    if (pFVar18->bWaitForExplicitFlush < pFVar18->ScopeCount) {
      local_180.NameAndInfo.Index = FVar27.ComparisonIndex.Value;
      local_180.NameAndInfo.Number = FVar27.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_188);
      local_180.StatData.Pad[4] = '\0';
      local_180.StatData.Pad[5] = '\0';
      local_180.StatData.Pad[6] = '\0';
      local_180.StatData.Pad[7] = '\0';
      local_180.StatData.Pad[0] = local_188.s.LowPart._0_1_;
      local_180.StatData.Pad[1] = local_188.s.LowPart._1_1_;
      local_180.StatData.Pad[2] = local_188.s.LowPart._2_1_;
      local_180.StatData.Pad[3] = local_188.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar18,&local_180);
      piVar28 = &pFVar18->ScopeCount;
      *piVar28 = *piVar28 + -1;
      if (*piVar28 == 0) {
        FThreadStats::Flush(pFVar18,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar18,false,false);
      }
    }
  }
  if (*(longlong *)local_230 != 0) {
    plVar23 = (longlong *)&local_230->field_0x10;
    if (*(longlong **)&local_230->field_0x28 != (longlong *)0x0) {
      plVar23 = *(longlong **)&local_230->field_0x28;
    }
    (**(code **)(*plVar23 + 0x10))();
  }
  return VVar13;
}

// CreateVKCacheInternal @ 145ae1e50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall
FVulkanPipelineCacheChunk::CreateVKCacheInternal
          (FVulkanPipelineCacheChunk *this,TArrayView<unsigned_char_const_,int> *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  VkResult VVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FColor_u_0 FVar10;
  FName FVar11;
  FNameEntryId FVar12;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_98;
  FName local_90;
  FStatMessage local_80;
  FString local_70;
  VkPipelineCacheCreateInfo local_60;
  
  ::FString::PrintfImpl(&local_70,L"FVulkanChunkedPipelineCacheManager: CreateVKCacheInternal %s ");
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if (((this->CacheState != FinalizedEvicted) && (this->CacheState != Initialized)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheState == ECacheState::FinalizedEvicted || CacheState == ECacheState::Initialized"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x2e9,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar12.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_CacheManagerLoadCache = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_Vulkan_CacheManagerLoadCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
                ::__l2::StatPtr_STAT_Vulkan_CacheManagerLoadCache,*pFVar7,
               L"STAT_Vulkan_CacheManagerLoadCache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_Vulkan_CacheManagerLoadCache;
  if (_StatPtr_STAT_Vulkan_CacheManagerLoadCache == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_98,"STAT_Vulkan_CacheManagerLoadCache");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_FVulkanPipelineCacheChunk::CreateVKCacheInternal(TArrayView<unsigned_char_const_,int>)___ptr64'
                         ::__l2::StatPtr_STAT_Vulkan_CacheManagerLoadCache,*pFVar7,
                        L"STAT_Vulkan_CacheManagerLoadCache","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar5 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar10.Bits = (uint)FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Bits != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar10.Bits;
        local_res14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x2ea);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.Bits = FVar10.Bits;
      uStackX_c = uVar9;
      local_90 = FVar11;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      FVar12.Value = local_90.ComparisonIndex.Value;
      goto LAB_145ae2045;
    }
  }
  bVar3 = false;
  FVar11 = local_90;
LAB_145ae2045:
  local_60.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
  local_60._20_4_ = 0;
  local_60.pInitialData._0_4_ = SUB84(param_1->DataPtr,0);
  local_60.pInitialData._4_4_ = (undefined4)((ulonglong)param_1->DataPtr >> 0x20);
  local_60.initialDataSize._0_4_ = param_1->ArrayNum;
  local_60.initialDataSize._4_4_ = (int)local_60.initialDataSize >> 0x1f;
  local_60._4_8_ = 0;
  local_60._12_8_ = 0;
  VVar6 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                    (GVulkanRHI->Device->Device,&local_60,&VulkanRHI::GAllocationCallbacks,
                     &this->PipelineCacheObj);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,
               "VulkanRHI::vkCreatePipelineCache(UE::Vulkan::GetVulkanDeviceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheObj)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
               ,0x2ef);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar12.Value;
      QueryPerformanceCounter(&local_res18);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// InitNewCache @ 145ae8d20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */

void __thiscall FVulkanPipelineCacheChunk::InitNewCache(FVulkanPipelineCacheChunk *this)

{
  int *piVar1;
  FFileInfo *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  VkResult VVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FPlatformFileManager *this_00;
  FGuid *this_01;
  FString *pFVar12;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar13;
  FNameEntryId FVar14;
  FName FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FString local_d8;
  FString local_c8;
  FName local_b8;
  FStatMessage local_a8;
  FName local_98;
  FString local_90;
  VkPipelineCacheCreateInfo local_80;
  FGuid local_58;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_init = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_res20,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_init");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'::__l2::
                StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_init,*pFVar10,
               L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_init","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_init;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_init == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_98,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_init");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::InitNewCache(void)___ptr64'
                          ::__l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_init,*pFVar10,
                         L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_init","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar14.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x1cd);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar14.Value;
      local_res18.s.HighPart = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_145ae8e7a;
    }
  }
  bVar6 = false;
  FVar15 = local_b8;
LAB_145ae8e7a:
  AcquireSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  local_80.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
  local_80.pInitialData._4_4_ = 0;
  local_80._4_8_ = 0;
  local_80._12_8_ = 0;
  local_80._20_8_ = 0;
  local_80._28_8_ = 0;
  VVar9 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                    (GVulkanRHI->Device->Device,&local_80,&VulkanRHI::GAllocationCallbacks,
                     &this->PipelineCacheObj);
  if (VVar9 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar9,
               "VulkanRHI::vkCreatePipelineCache(UE::Vulkan::GetVulkanDeviceHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheObj)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
               ,0x1d4);
  }
  this->CacheState = Building;
  if ((this->LastSaveSize != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("LastSaveSize == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x1d6,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((1 < (this->BinaryCacheFileInfo).Filename.Data.ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BinaryCacheFileInfo.Filename.IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x1d7,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = FPlatformFileManager::Get();
  FPlatformFileManager::GetPlatformFile(this_00);
  this_01 = FGuid::NewGuid(&local_58);
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  FGuid::AppendString(this_01,&local_c8,Digits);
  pFVar12 = ::FString::FString(&local_90,L"VulkanPSO_");
  ::FString::ConcatFF(&local_d8,pFVar12,&local_c8);
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  pFVar2 = &this->BinaryCacheFileInfo;
  if (pFVar2 != (FFileInfo *)&local_d8) {
    pFVar3 = (pFVar2->Filename).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Filename).Data.AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    (this->BinaryCacheFileInfo).Filename.Data.ArrayNum = local_d8.Data.ArrayNum;
    (this->BinaryCacheFileInfo).Filename.Data.ArrayMax = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_a8.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_a8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// Load @ 145ae9460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanPipelineCacheChunk::Load
          (FVulkanPipelineCacheChunk *this,FPSOArchiveReader *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,ECacheChunkLoadType param_3)

{
  int *piVar1;
  FArchive *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ECacheChunkLoadType EVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FNameEntryId FVar12;
  FName FVar13;
  ECacheState EVar14;
  FColor_u_0 local_res8 [2];
  FPSOArchiveReader *local_res10;
  FName local_res18;
  ECacheChunkLoadType local_res20;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FName local_70;
  FStatMessage local_60 [2];
  
  local_res10 = param_1;
  local_res20 = param_3;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_80,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
                ::__l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve,*pFVar10,
               L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_78,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::Load(FVulkanCombinedChunkCacheFile::FPSOArchiveReader&___ptr64,TArray<unsigned___int64,TSizedDefaultAllocator<32>_>*___ptr64,FVulkanPipelineCacheChunk::ECacheChunkLoadType)___ptr64'
                          ::__l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve,
                         *pFVar10,L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar13 = *(FName *)&pTVar11->Name;
  bVar4 = false;
  bVar6 = false;
  local_70.ComparisonIndex.Value = 0;
  local_70.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x2a0);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.s.LowPart = FVar12.Value;
      local_88.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_145ae95e6;
    }
  }
  bVar5 = false;
  FVar13 = local_70;
LAB_145ae95e6:
  AcquireSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  pFVar2 = (param_1->Archive).Ptr;
  if ((param_2->ArrayNum != 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("PSOsFoundOUT->IsEmpty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x2a4,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->CacheState != Initialized) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheState == ECacheState::Initialized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x2a5,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar9 = (**(code **)(*(longlong *)pFVar2 + 0x28))(pFVar2);
  EVar7 = local_res20;
  this->OffsetWithinFile = uVar9;
  LoadInternal(this,local_res10,param_2,local_res20);
  EVar14 = Building;
  if (EVar7 == LoadAsEvicted) {
    EVar14 = FinalizedEvicted;
  }
  this->CacheState = EVar14;
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_60[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_60[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_60[0].StatData.Pad[4] = '\0';
      local_60[0].StatData.Pad[5] = '\0';
      local_60[0].StatData.Pad[6] = '\0';
      local_60[0].StatData.Pad[7] = '\0';
      local_60[0].StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_60[0].StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_60[0].StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_60[0].StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// LoadInternal @ 145aea500

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanPipelineCacheChunk::LoadInternal
          (FVulkanPipelineCacheChunk *this,FPSOArchiveReader *param_1,
          TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *param_2,ECacheChunkLoadType param_3)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FArchive *this_00;
  TAtomic<int> *pTVar2;
  int *piVar3;
  uchar *puVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  TAtomic<int> local_res8 [2];
  uint local_res20 [2];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_a8;
  TArrayView<unsigned_char_const_,int> local_98;
  FScriptContainerElement *local_88;
  int iStack_80;
  undefined4 uStack_7c;
  FString local_78;
  FString local_68;
  FString local_58;
  TArrayView<unsigned_char_const_,int> local_48;
  
  ::FString::PrintfImpl(&local_78,L"FVulkanChunkedPipelineCacheManager: LoadInternal TOT  ");
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  this_00 = (param_1->Archive).Ptr;
  pTVar2 = (TAtomic<int> *)**(undefined8 **)&this_00->field_0x8;
  if ((TAtomic<int> *)(*(undefined8 **)&this_00->field_0x8)[1] < pTVar2 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)local_res8);
    }
  }
  else {
    local_res8[0] = *pTVar2;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  piVar1 = &this->CacheSize;
  LOCK();
  this->TotalNumUniquePSOs = local_res8[0];
  UNLOCK();
  piVar3 = (int *)**(undefined8 **)&this_00->field_0x8;
  if ((int *)(*(undefined8 **)&this_00->field_0x8)[1] < piVar3 + 1) {
    if ((this_00->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this_00 + 0x188))(this_00,piVar1,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this_00,(uint *)piVar1);
    }
  }
  else {
    *piVar1 = *piVar3;
    **(longlong **)&this_00->field_0x8 = **(longlong **)&this_00->field_0x8 + 4;
  }
  this->LastSaveSize = *piVar1;
  uVar8 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
  (this->BinaryCacheFileInfo).RawDataOffset = uVar8;
  if (param_3 == LoadAllData) {
    if (param_1->PSOBytes == (uchar *)0x0) {
      local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = 0;
      local_a8.ArrayMax = 0;
      ::FString::PrintfImpl
                (&local_58,L"FVulkanChunkedPipelineCacheManager: LoadInternal Serialize %d");
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_a8,*piVar1,Default);
      (**(code **)(*(longlong *)this_00 + 0x188))
                (this_00,local_a8.AllocatorInstance.Data,(longlong)*piVar1);
      if ((this_00->field_0x29 & 2) != 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Archive.IsError()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x32e,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iVar9 = local_a8.ArrayNum;
      local_88 = local_a8.AllocatorInstance.Data;
      if (local_a8.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      iStack_80 = iVar9;
      local_48._12_4_ = uStack_7c;
      local_48.ArrayNum = iVar9;
      local_48.DataPtr = (uchar *)local_88;
      CreateVKCacheInternal(this,&local_48);
      if (local_a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      LOCK();
      UE::Vulkan::TotalResidentCacheSize =
           (atomic<int>)((int)UE::Vulkan::TotalResidentCacheSize + *piVar1);
      UNLOCK();
    }
    else {
      ::FString::PrintfImpl
                (&local_68,L"FVulkanChunkedPipelineCacheManager: LoadInternal MappedSerialize %d");
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      puVar4 = param_1->PSOBytes;
      lVar10 = (**(code **)(*(longlong *)this_00 + 0x28))(this_00);
      local_98.ArrayNum = *piVar1;
      local_98.DataPtr = puVar4 + lVar10;
      if (local_98.ArrayNum < 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L"");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      lVar10 = *(longlong *)this_00;
      iVar9 = *piVar1;
      local_98._12_4_ = local_48._12_4_;
      lVar11 = (**(code **)(lVar10 + 0x28))(this_00);
      (**(code **)(lVar10 + 0x1b8))(this_00,iVar9 + lVar11);
      CreateVKCacheInternal(this,&local_98);
      LOCK();
      UE::Vulkan::TotalResidentCacheSize =
           (atomic<int>)((int)UE::Vulkan::TotalResidentCacheSize + *piVar1);
      UNLOCK();
    }
  }
  else {
    lVar10 = *(longlong *)this_00;
    iVar9 = *piVar1;
    lVar11 = (**(code **)(lVar10 + 0x28))(this_00);
    (**(code **)(lVar10 + 0x1b8))(this_00,iVar9 + lVar11);
  }
  if (param_2 != (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0) {
    plVar5 = *(longlong **)&this_00->field_0x8;
    local_res20[0] = 0;
    if ((uint *)plVar5[1] < (uint *)*plVar5 + 1) {
      if ((this_00->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)this_00 + 0x188))(this_00,local_res20,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(this_00,local_res20);
      }
    }
    else {
      local_res20[0] = *(uint *)*plVar5;
      *plVar5 = *plVar5 + 4;
    }
    uVar8 = local_res20[0];
    iVar9 = param_2->ArrayNum;
    piVar1 = &param_2->ArrayNum;
    lVar10 = (longlong)(int)local_res20[0];
    if (iVar9 < (int)local_res20[0]) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,local_res20[0] - iVar9,&param_2->AllocatorInstance,piVar1,&param_2->ArrayMax);
    }
    else {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
      }
      if ((int)local_res20[0] < iVar9) {
        uVar12 = iVar9 - local_res20[0];
        if ((int)(local_res20[0] | uVar12) < 0) {
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
        if (uVar12 != 0) {
          _Dst = (param_2->AllocatorInstance).Data + lVar10 * 8;
          iVar9 = (*piVar1 - uVar12) - uVar8;
          if (iVar9 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar12 * 8,(longlong)iVar9 << 3);
          }
          *piVar1 = *piVar1 - uVar12;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&param_2->AllocatorInstance,*piVar1,&param_2->ArrayMax);
        }
      }
    }
    (**(code **)(*(longlong *)this_00 + 0x188))
              (this_00,(param_2->AllocatorInstance).Data,(longlong)*piVar1 << 3);
    LOCK();
    this->TotalNumPSOs = (TAtomic<int>)*piVar1;
    UNLOCK();
  }
  return;
}

// ReservePendingPSO @ 145af3290

/* WARNING: Removing unreachable block (ram,0x000145af35c4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanPipelineCacheChunk::ReservePendingPSO(FVulkanPipelineCacheChunk *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  ulonglong uVar16;
  FName FVar17;
  FColor_u_0 FVar18;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FColor_u_0 local_res20;
  uint local_res24;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  uVar16 = (ulonglong)_tls_index;
  FVar18.Bits = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x9d4c) <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_68,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::
                __l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve,*pFVar10,
               L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_60,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                          ::__l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve,
                         *pFVar10,L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Reserve",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar11->Name;
  bVar4 = false;
  bVar7 = false;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar9 = FVar15.Number;
  if ((FVar14.Bits == 0) && (uVar9 == 0)) {
LAB_145af3478:
    bVar5 = false;
    FVar15.ComparisonIndex.Value = 0;
    FVar15.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar14.Bits;
        local_res1c = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x255);
        bVar4 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145af3478;
    local_res10.Bits = FVar14.Bits;
    uStackX_14 = uVar9;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockShared((PSRWLOCK)&this->CacheStateLock);
  if ((this->CacheState != Building) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheState == ECacheState::Building",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x259,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  LOCK();
  this->PendingAddToCompiles = (atomic<unsigned___int64>)((longlong)this->PendingAddToCompiles + 1);
  UNLOCK();
  if ((ulonglong)((longlong)(int)this->TotalNumUniquePSOs + (longlong)this->PendingAddToCompiles) <
      (ulonglong)(longlong)UE::Vulkan::GMaxPSOsPerChunk) {
    ReleaseSRWLockShared((PSRWLOCK)&this->CacheStateLock);
    goto LAB_145af3814;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->CacheStateLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar16 * 8) + 0x9d4c) <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::__l12::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                           ::__l12::_thread_safe_static_guard_1__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::__l12::
     _thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_58,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'::
                __l12::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite,*pFVar10,
               L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                         ::__l12::_thread_safe_static_guard_1__);
  }
  pTVar11 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(local_50,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::ReservePendingPSO(void)___ptr64'
                          ::__l12::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite,
                         *pFVar10,L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_ReserveWrite",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar17 = *(FName *)&pTVar11->Name;
  bVar8 = false;
  bVar6 = false;
  FVar14.Bits = (uint)FVar17.ComparisonIndex.Value;
  uVar9 = FVar17.Number;
  if ((FVar14.Bits == 0) && (uVar9 == 0)) {
LAB_145af3700:
    bVar3 = false;
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar8 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.Bits = FVar14.Bits;
        local_res24 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res20._s_0,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x25e);
        bVar8 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145af3700;
    local_res8.Bits = FVar14.Bits;
    uStackX_c = uVar9;
    FThreadStats::AddMessage(FVar17,CycleScopeStart);
    bVar3 = true;
    FVar18.Bits = FVar14.Bits;
  }
  if ((ulonglong)(longlong)UE::Vulkan::GMaxPSOsPerChunk <=
      (ulonglong)((longlong)(int)this->TotalNumUniquePSOs + (longlong)this->PendingAddToCompiles)) {
    this->CacheState = Closing;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar17 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_88.NameAndInfo.Number = FVar17.Number & 0xffff6fff | 0x6000;
      local_88.NameAndInfo.Index.Value = FVar18.Bits;
      QueryPerformanceCounter(&local_98);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_88);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
        ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
        goto LAB_145af3814;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
LAB_145af3814:
  ReleaseSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar12 == (FThreadStats *)0x0) {
      pFVar13 = FThreadStatsPool::Get();
      pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
    }
    if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
      local_78.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_78.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_78.StatData.Pad[4] = '\0';
      local_78.StatData.Pad[5] = '\0';
      local_78.StatData.Pad[6] = '\0';
      local_78.StatData.Pad[7] = '\0';
      local_78.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_78.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_78.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_78.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar12,&local_78);
      piVar1 = &pFVar12->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar12,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar12,false,false);
      }
    }
  }
  return;
}

// SavePSOCacheInternal @ 145af3fd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FVulkanPipelineCacheChunk::SavePSOCacheInternal(FVulkanPipelineCacheChunk *this,FArchive *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  TStatIdData *pTVar9;
  FNameEntryId FVar10;
  FName FVar11;
  uint local_res8 [2];
  TAtomic<int> local_res10 [2];
  uint local_res18 [2];
  FColor_u_0 local_res20 [2];
  ulong64 local_c8;
  TArray<void_*,TSizedDefaultAllocator<32>_> local_c0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_b0;
  FName local_a0;
  uint local_98;
  uint uStack_94;
  FName local_90;
  FName local_80;
  FName local_78;
  FString local_70;
  FString local_60;
  FString local_50;
  
  ::FString::PrintfImpl
            (&local_70,L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal TOT %s ");
  if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data.AllocatorInstance.Data);
  }
  if ((this->CacheState != PendingFlush) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheState == ECacheState::PendingFlush",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x348,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_CacheManagerWriteCache = (TStatIdData *)0x0;
    pFVar8 = ::FName::FName(&local_80,"STAT_Vulkan_CacheManagerWriteCache");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_Vulkan_CacheManagerWriteCache,*pFVar8,
               L"STAT_Vulkan_CacheManagerWriteCache","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
               true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar9 = _StatPtr_STAT_Vulkan_CacheManagerWriteCache;
  if (_StatPtr_STAT_Vulkan_CacheManagerWriteCache == (TStatIdData *)0x0) {
    pFVar8 = ::FName::FName(&local_78,"STAT_Vulkan_CacheManagerWriteCache");
    pTVar9 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_void___cdecl_FVulkanPipelineCacheChunk::SavePSOCacheInternal(FArchive&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_Vulkan_CacheManagerWriteCache,*pFVar8,
                        L"STAT_Vulkan_CacheManagerWriteCache","STATGROUP_Quick","STATCAT_Advanced",
                        L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar9->Name;
  bVar5 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar7 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(pTVar9->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_a0.ComparisonIndex.Value = FVar10.Value;
        local_a0.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_a0,(pTVar9->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x34a);
        bVar5 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98 = FVar10.Value;
      uStack_94 = uVar7;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar3 = true;
      goto LAB_145af4195;
    }
  }
  bVar3 = false;
  FVar11 = local_90;
LAB_145af4195:
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  local_c8 = 0;
  ::FString::PrintfImpl
            (&local_60,L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal get vk data %s ");
  if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data.AllocatorInstance.Data);
  }
  (*VulkanDynamicAPI::vkGetPipelineCacheData)
            (GVulkanRHI->Device->Device,this->PipelineCacheObj,&local_c8,(void *)0x0);
  TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_b0,(int)local_c8,Default);
  (*VulkanDynamicAPI::vkGetPipelineCacheData)
            (GVulkanRHI->Device->Device,this->PipelineCacheObj,&local_c8,
             local_b0.AllocatorInstance.Data);
  this->CacheSize = (int)local_c8;
  ::FString::PrintfImpl
            (&local_50,L"FVulkanChunkedPipelineCacheManager: SavePSOCacheInternal serialize %s %zu "
            );
  if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data.AllocatorInstance.Data);
  }
  uVar7 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  this->OffsetWithinFile = uVar7;
  local_res10[0] = this->TotalNumUniquePSOs;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((TAtomic<int> *)plVar1[1] < (TAtomic<int> *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res10,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,(uint *)local_res10);
    }
  }
  else {
    local_res10[0] = *(TAtomic<int> *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res8[0] = local_b0.ArrayNum;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res8);
    }
  }
  else {
    local_res8[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  uVar7 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
  (this->BinaryCacheFileInfo).RawDataOffset = uVar7;
  (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_b0.AllocatorInstance.Data,local_res8[0])
  ;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  FLockFreePointerListLIFOBase<void,64,1>::PopAll<TArray<void_*,TSizedDefaultAllocator<32>_>_>
            ((FLockFreePointerListLIFOBase<void,64,1> *)&this->PSOsToBeFlushed2,&local_c0);
  plVar1 = *(longlong **)&param_1->field_0x8;
  local_res18[0] = local_c0.ArrayNum;
  if ((uint *)plVar1[1] < (uint *)*plVar1 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,local_res18);
    }
  }
  else {
    local_res18[0] = *(uint *)*plVar1;
    *plVar1 = *plVar1 + 4;
  }
  (**(code **)(*(longlong *)param_1 + 0x188))
            (param_1,local_c0.AllocatorInstance.Data,(longlong)local_c0.ArrayNum << 3);
  if (((param_1->field_0x29 & 2) != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Archive.IsError()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x36a,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->CacheState = Finalized;
  LOCK();
  UE::Vulkan::TotalResidentCacheSize =
       (atomic<int>)((int)UE::Vulkan::TotalResidentCacheSize + this->CacheSize);
  UNLOCK();
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar11,CycleScopeEnd);
  }
  return;
}

// Touch @ 145af4e20

/* WARNING: Removing unreachable block (ram,0x000145af54cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanPipelineCacheChunk::Touch(FVulkanPipelineCacheChunk *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned___int64> aVar8;
  FName *pFVar9;
  TStatIdData *pTVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FVulkanCombinedChunkCacheFile *this_00;
  FColor_u_0 FVar13;
  FNameEntryId FVar14;
  FName FVar15;
  int *piVar16;
  FColor_u_0 local_res8 [2];
  FColor_u_0 local_res10;
  uint uStackX_14;
  FColor_u_0 local_res18;
  uint local_res1c;
  FName local_res20;
  LARGE_INTEGER local_f8;
  FName local_f0;
  FName local_e0;
  LARGE_INTEGER local_d0;
  LARGE_INTEGER local_c8;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FStatMessage local_a0;
  FPSOArchiveReader local_90;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FString local_58;
  
  aVar8._4_4_ = 0;
  aVar8._0_4_ = GFrameNumber;
  LOCK();
  this->LastUsedFrame = aVar8;
  UNLOCK();
  AcquireSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
  piVar16 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  if ((*piVar16 <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l3::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::
                           __l3::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l3::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch = (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_78,
                            "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l3::
                StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch,*pFVar9,
               L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l3
                         ::_thread_safe_static_guard_0__);
  }
  pTVar10 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch == (TStatIdData *)0x0)
  {
    pFVar9 = ::FName::FName(&local_70,
                            "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch");
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::
                          __l3::
                          StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch,
                         *pFVar9,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_Touch",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar10->Name;
  bVar4 = false;
  bVar3 = false;
  local_f0.ComparisonIndex.Value = 0;
  local_f0.Number = 0;
  FVar13.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar13.Bits == 0) && (uVar7 == 0)) {
LAB_145af4f95:
    bVar5 = false;
    FVar15 = local_f0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar4 = false;
      bVar3 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.Bits = FVar13.Bits;
        local_res1c = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res18._s_0,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x1e0);
        bVar4 = true;
        bVar3 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145af4f95;
    local_res10.Bits = FVar13.Bits;
    uStackX_14 = uVar7;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar5 = true;
  }
  AcquireSRWLockShared((PSRWLOCK)&this->CacheStateLock);
  if (this->CacheState != FinalizedEvicted) {
    ReleaseSRWLockShared((PSRWLOCK)&this->CacheStateLock);
    if (bVar3) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar4) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar11 == (FThreadStats *)0x0) {
        pFVar12 = FThreadStatsPool::Get();
        pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
      }
      if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
        local_c0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
        local_c0.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_f8);
        local_c0.StatData.Pad[4] = '\0';
        local_c0.StatData.Pad[5] = '\0';
        local_c0.StatData.Pad[6] = '\0';
        local_c0.StatData.Pad[7] = '\0';
        local_c0.StatData.Pad[0] = local_f8.s.LowPart._0_1_;
        local_c0.StatData.Pad[1] = local_f8.s.LowPart._1_1_;
        local_c0.StatData.Pad[2] = local_f8.s.LowPart._2_1_;
        local_c0.StatData.Pad[3] = local_f8.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar11,&local_c0);
        piVar16 = &pFVar11->ScopeCount;
        *piVar16 = *piVar16 + -1;
        if (*piVar16 == 0) {
          FThreadStats::Flush(pFVar11,false,false);
          ReleaseSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
          return;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    ReleaseSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
    return;
  }
  ReleaseSRWLockShared((PSRWLOCK)&this->CacheStateLock);
  if (bVar3) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar15 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_b0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      local_b0.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      QueryPerformanceCounter(&local_d0);
      local_b0.StatData.Pad[4] = '\0';
      local_b0.StatData.Pad[5] = '\0';
      local_b0.StatData.Pad[6] = '\0';
      local_b0.StatData.Pad[7] = '\0';
      local_b0.StatData.Pad[0] = local_d0.s.LowPart._0_1_;
      local_b0.StatData.Pad[1] = local_d0.s.LowPart._1_1_;
      local_b0.StatData.Pad[2] = local_d0.s.LowPart._2_1_;
      local_b0.StatData.Pad[3] = local_d0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_b0);
      piVar1 = &pFVar11->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  if ((*piVar16 <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l7::
       _thread_safe_static_guard_1__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::
                           __l7::_thread_safe_static_guard_1__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l7::
     _thread_safe_static_guard_1__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate =
         (TStatIdData *)0x0;
    pFVar9 = ::FName::FName(&local_68,
                            "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate"
                           );
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l7::
                StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate,
               *pFVar9,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::__l7
                         ::_thread_safe_static_guard_1__);
  }
  pTVar10 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate ==
      (TStatIdData *)0x0) {
    pFVar9 = ::FName::FName(&local_60,
                            "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate"
                           );
    pTVar10 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:_void___cdecl_FVulkanPipelineCacheChunk::Touch(void)___ptr64'::
                          __l7::
                          StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate
                         ,*pFVar9,
                         L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_Chunk_TouchReinstate",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar10->Name;
  bVar3 = false;
  bVar4 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar7 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(pTVar10->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.Value;
        local_res20.Number = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(pTVar10->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x1e8);
        bVar3 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8.s.LowPart = FVar14.Value;
      local_f8.s.HighPart = uVar7;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar5 = true;
      goto LAB_145af52a7;
    }
  }
  bVar5 = false;
  FVar15 = local_e0;
LAB_145af52a7:
  ReleaseSRWLockShared((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  if (this->CacheState == FinalizedEvicted) {
    GetCurrentThreadId();
    ::FString::PrintfImpl
              (&local_58,L"FVulkanChunkedPipelineCacheManager: ReinstateDriverBlobInternal tot %d ")
    ;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if ((this->CacheState != FinalizedEvicted) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("CacheState == ECacheState::FinalizedEvicted",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x2db,L""), bVar6)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    this_00 = FVulkanCombinedChunkCacheFile::Get();
    FVulkanCombinedChunkCacheFile::GetReader(this_00,&local_90,this->OffsetWithinFile);
    if (local_90.Archive.Ptr == (FArchive *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3624225577688367839>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x2df,"ArchiveReader.IsValid()");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      LoadInternal(this,&local_90,(TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *)0x0,
                   LoadAllData);
      this->CacheState = Finalized;
    }
    if (local_90.MappingLock.Ptr != (FRWScopeLock *)0x0) {
      if ((local_90.MappingLock.Ptr)->LockType == SLT_ReadOnly) {
        ReleaseSRWLockShared((PSRWLOCK)(local_90.MappingLock.Ptr)->LockObject);
      }
      else {
        ReleaseSRWLockExclusive((PSRWLOCK)(local_90.MappingLock.Ptr)->LockObject);
      }
      ::operator_delete(local_90.MappingLock.Ptr,0x10);
    }
    if (local_90.Archive.Ptr != (FArchive *)0x0) {
      (*(code *)**(undefined8 **)local_90.Archive.Ptr)(local_90.Archive.Ptr,1);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar11 == (FThreadStats *)0x0) {
      pFVar12 = FThreadStatsPool::Get();
      pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
    }
    if (pFVar11->bWaitForExplicitFlush < pFVar11->ScopeCount) {
      local_a0.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_a0.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_c8);
      local_a0.StatData.Pad[4] = '\0';
      local_a0.StatData.Pad[5] = '\0';
      local_a0.StatData.Pad[6] = '\0';
      local_a0.StatData.Pad[7] = '\0';
      local_a0.StatData.Pad[0] = local_c8.s.LowPart._0_1_;
      local_a0.StatData.Pad[1] = local_c8.s.LowPart._1_1_;
      local_a0.StatData.Pad[2] = local_c8.s.LowPart._2_1_;
      local_a0.StatData.Pad[3] = local_c8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar11,&local_a0);
      piVar16 = &pFVar11->ScopeCount;
      *piVar16 = *piVar16 + -1;
      if (*piVar16 == 0) {
        FThreadStats::Flush(pFVar11,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar11,false,false);
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  return;
}

// Unload @ 145af5cd0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
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

void __thiscall FVulkanPipelineCacheChunk::Unload(FVulkanPipelineCacheChunk *this)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  TStatIdData *pTVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::__l2::
       _thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::
                           __l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::__l2::
     _thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload = (TStatIdData *)0x0;
    pFVar7 = ::FName::FName(&local_res20,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::__l2::
                StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload,*pFVar7,
               L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::
                         __l2::_thread_safe_static_guard_0__);
  }
  pTVar8 = _StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload;
  if (_StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload == (TStatIdData *)0x0) {
    pFVar7 = ::FName::FName(&local_68,"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload");
    pTVar8 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FVulkanPipelineCacheChunk::Unload(void)___ptr64'::
                         __l2::StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload,*pFVar7,
                        L"STAT_Vulkan_RHICreateGraphicsPipelineChunk_Unload","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)&pTVar8->Name;
  bVar3 = false;
  bVar5 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(pTVar8->StatDescriptionAnsi).Ptr);
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar10.Value;
        local_res10.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(pTVar8->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                   ,0x28e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar10.Value;
      local_res18.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_145af5e48;
    }
  }
  bVar4 = false;
  FVar11 = local_60;
LAB_145af5e48:
  AcquireSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  AcquireSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  if ((this->CacheState != Finalized) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CacheState == ECacheState::Finalized",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                         ,0x291,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  (*VulkanDynamicAPI::vkDestroyPipelineCache)
            (GVulkanRHI->Device->Device,this->PipelineCacheObj,&VulkanRHI::GAllocationCallbacks);
  this->PipelineCacheObj = (VkPipelineCache_T *)0x0;
  this->CacheState = FinalizedEvicted;
  LOCK();
  UE::Vulkan::TotalResidentCacheSize =
       (atomic<int>)((int)UE::Vulkan::TotalResidentCacheSize - this->CacheSize);
  UNLOCK();
  ReleaseSRWLockExclusive((PSRWLOCK)&this->CacheStateLock);
  ReleaseSRWLockExclusive((PSRWLOCK)&this->PipelineCacheObjLock);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

