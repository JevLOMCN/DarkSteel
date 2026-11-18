// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// FVulkanSwapChain @ 145b928a0

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

FVulkanSwapChain * __thiscall
FVulkanSwapChain::FVulkanSwapChain
          (FVulkanSwapChain *this,VkInstance_T *param_1,FVulkanDevice *param_2,
          VkSurfaceKHR_T *param_3,VkSwapchainKHR_T *param_4,VkSurfaceTransformFlagBitsKHR param_5,
          uint param_6,uint param_7,bool param_8,uint param_9,schar param_10,
          FVulkanGenericPlatformWindowContext *param_11)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  FVulkanFence *pFVar8;
  FVulkanSwapChain *pFVar9;
  FVulkanSemaphore *pFVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  uVar6 = param_9;
  piVar1 = &(this->ImageAcquiredSemaphore).ArrayNum;
  this->SwapChain = param_4;
  piVar2 = &(this->ImageAcquiredSemaphore).ArrayMax;
  this->Device = param_2;
  piVar3 = &(this->ImageAcquiredFences).ArrayNum;
  this->PreTransform = param_5;
  piVar4 = &(this->ImageAcquiredFences).ArrayMax;
  this->InternalWidth = param_6;
  this->InternalHeight = param_7;
  this->bInternalFullScreen = param_8;
  this->Instance = param_1;
  this->Surface = param_3;
  this->WindowHandle = param_11->WindowHandle;
  this->NextPresentTargetTime = 0.0;
  (this->ImageAcquiredSemaphore).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  (this->ImageAcquiredFences).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  *piVar4 = 0;
  this->SemaphoreIndex = 0;
  this->NumPresentCalls = 0;
  this->NumAcquireCalls = 0;
  this->RTPacingSampleCount = 0;
  this->RTPacingPreviousFrameCPUTime = 0.0;
  this->RTPacingSampledDeltaTimeMS = 0.0;
  this->PresentID = 0;
  this->CurrentImageIndex = -1;
  this->LockToVsync = param_10;
  QueryPerformanceCounter((LARGE_INTEGER *)&param_4);
  this->NextPresentTargetTime =
       ((double)(longlong)param_4 * FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000)
       - GStartTime;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,uVar6,&(this->ImageAcquiredFences).AllocatorInstance,piVar3,piVar4);
  uVar13 = 0;
  if (uVar6 == 0) {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ImageAcquiredSemaphore).AllocatorInstance,piVar1,piVar2);
  }
  else {
    do {
      pFVar8 = FVulkanFenceManager::AllocateFence(&this->Device->FenceManager,true);
      uVar11 = 0;
      if ((int)uVar13 < *piVar3) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FVulkanSwapChain *)(*pcVar5)();
        return pFVar9;
      }
      lVar12 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      *(FVulkanFence **)((this->ImageAcquiredFences).AllocatorInstance.Data + lVar12 * 8) = pFVar8;
    } while (uVar13 < uVar6);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar6,&(this->ImageAcquiredSemaphore).AllocatorInstance,piVar1,
               &(this->ImageAcquiredSemaphore).ArrayMax);
    uVar13 = 0;
    do {
      pFVar10 = ::operator_new(0x28);
      if (pFVar10 == (FVulkanSemaphore *)0x0) {
        pFVar10 = (FVulkanSemaphore *)0x0;
      }
      else {
        pFVar10 = FVulkanSemaphore::FVulkanSemaphore(pFVar10,this->Device,ExternallySignaled,0);
      }
      uVar11 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FVulkanSwapChain *)(*pcVar5)();
        return pFVar9;
      }
      *(FVulkanSemaphore **)
       ((this->ImageAcquiredSemaphore).AllocatorInstance.Data + (longlong)(int)uVar13 * 8) = pFVar10
      ;
      uVar11 = 0;
      if ((int)uVar13 < *piVar1) {
        uVar11 = ~uVar13 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FVulkanSwapChain *)(*pcVar5)();
        return pFVar9;
      }
      LOCK();
      piVar2 = (int *)(*(longlong *)
                        ((this->ImageAcquiredSemaphore).AllocatorInstance.Data +
                        (longlong)(int)uVar13 * 8) + 8);
      *piVar2 = *piVar2 + 1;
      UNLOCK();
      uVar13 = uVar13 + 1;
    } while (uVar13 < uVar6);
  }
  return this;
}

// AcquireImageIndex @ 145b9d480

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

int __thiscall
FVulkanSwapChain::AcquireImageIndex(FVulkanSwapChain *this,FVulkanSemaphore **param_1)

{
  int *piVar1;
  VkFence_T **ppVVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  _func___cdecl_VkResult_VkDevice_T_ptr_VkSwapchainKHR_T_ptr_ulong64_VkSemaphore_T_ptr_VkFence_T_ptr_uint_ptr
  *p_Var6;
  TConsoleVariableData<int> *pTVar7;
  VkFence_T *pVVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  VkResult VVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanWaitSwapchain> FVar18;
  uint uVar19;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  uint local_res8 [2];
  FVulkanSemaphore **local_res10;
  uint local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FName local_108;
  FColor_u_0 local_100 [2];
  FVulkanFenceManager *local_f8;
  FScopeIdle local_f0;
  int local_e8;
  char local_e4;
  DWORD local_e0;
  FName local_d8;
  VkFence_T *local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b0;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FStatMessage local_70;
  FName local_60;
  FName local_58 [3];
  
  local_res10 = param_1;
  if ((this->CurrentImageIndex != -1) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentImageIndex == -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                         ,0x2af,L""), bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  local_res18 = this->SemaphoreIndex;
  iVar11 = (this->ImageAcquiredSemaphore).ArrayNum;
  local_res8[0] = 0;
  this->SemaphoreIndex = (int)(local_res18 + 1) % iVar11;
  if (((this->NumAcquireCalls == iVar11 - 1U) && (this->NumPresentCalls == 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!(NumAcquireCalls == ImageAcquiredSemaphore.Num() - 1 && NumPresentCalls == 0)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                         ,0x2b9,
                         L"vkAcquireNextImageKHR will fail as no images have been presented before acquiring all of them"
                        ), bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  uVar20 = this->SemaphoreIndex;
  local_f8 = &this->Device->FenceManager;
  uVar19 = 0;
  if ((int)uVar20 < (this->ImageAcquiredFences).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  ppVVar2 = *(VkFence_T ***)
             ((this->ImageAcquiredFences).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
  if (*(int *)(ppVVar2 + 1) != 0) {
    VVar12 = (*VulkanDynamicAPI::vkResetFences)(local_f8->Device->Device,1,ppVVar2);
    if (VVar12 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar12,"VulkanRHI::vkResetFences(Device.GetHandle(), 1, &Fence->Handle)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                 ,0xb3);
    }
    *(undefined4 *)(ppVVar2 + 1) = 0;
  }
  uVar20 = this->SemaphoreIndex;
  uVar19 = 0;
  if ((int)uVar20 < (this->ImageAcquiredFences).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  iVar11 = (this->ImageAcquiredSemaphore).ArrayNum;
  local_d0 = (VkFence_T *)
             **(undefined8 **)
               ((this->ImageAcquiredFences).AllocatorInstance.Data + (longlong)(int)uVar20 * 8);
  FVar15 = StatPtr_STAT_VulkanAcquireBackBuffer;
  if (StatPtr_STAT_VulkanAcquireBackBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer>)0x0) {
    pFVar14 = ::FName::FName(&local_60,"STAT_VulkanAcquireBackBuffer");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanAcquireBackBuffer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanAcquireBackBuffer,*pFVar14,
                        L"Acquire Backbuffer","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_108 = *(FName *)FVar15;
  bVar9 = false;
  bVar5 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  if ((local_108.ComparisonIndex.Value.Value == 0) && (local_108.Number == 0)) {
LAB_145b9d74d:
    bVar4 = false;
    local_108 = local_c0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.ComparisonIndex.Value = local_108.ComparisonIndex.Value.Value;
        local_d8.Number = local_108.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_d8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x2c5);
        bVar9 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b9d74d;
    FThreadStats::AddMessage(local_108,CycleScopeStart);
    bVar4 = true;
  }
  bVar10 = IsInRHIThread();
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_f0,!bVar10);
  local_e8 = 2;
  bVar10 = IsInRenderingThread();
  if (bVar10) {
    local_e4 = '\x01';
    QueryPerformanceCounter(&local_a0);
    local_e0 = local_a0.s.LowPart;
  }
  else {
    local_e4 = '\0';
    local_e0 = 0;
  }
  p_Var6 = VulkanDynamicAPI::vkAcquireNextImageKHR;
  uVar20 = this->SemaphoreIndex;
  uVar13 = 0;
  uVar19 = uVar13;
  if ((int)uVar20 < (this->ImageAcquiredSemaphore).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  VVar12 = (*p_Var6)(this->Device->Device,this->SwapChain,0xffffffffffffffff,
                     *(VkSemaphore_T **)
                      (*(longlong *)
                        ((this->ImageAcquiredSemaphore).AllocatorInstance.Data +
                        (longlong)(int)uVar20 * 8) + 0x18),local_d0,local_res8);
  pVVar8 = local_d0;
  p_Var6 = VulkanDynamicAPI::vkAcquireNextImageKHR;
  while ((VulkanDynamicAPI::vkAcquireNextImageKHR = p_Var6, iVar11 - 1U < local_res8[0] &&
         ((VVar12 == VK_SUCCESS || (VVar12 == VK_SUBOPTIMAL_KHR))))) {
    uVar20 = this->SemaphoreIndex;
    uVar19 = uVar13;
    if ((int)uVar20 < (this->ImageAcquiredSemaphore).ArrayNum) {
      uVar19 = ~uVar20 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
    VVar12 = (*p_Var6)(this->Device->Device,this->SwapChain,0xffffffffffffffff,
                       *(VkSemaphore_T **)
                        (*(longlong *)
                          ((this->ImageAcquiredSemaphore).AllocatorInstance.Data +
                          (longlong)(int)uVar20 * 8) + 0x18),pVVar8,local_res8);
    p_Var6 = VulkanDynamicAPI::vkAcquireNextImageKHR;
  }
  if (local_e4 != '\0') {
    QueryPerformanceCounter(&local_98);
    GRenderThreadIdle[local_e8] = GRenderThreadIdle[local_e8] + (local_98.s.LowPart - local_e0);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_f0);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (local_108 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_80.NameAndInfo.Index = local_108.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = local_108.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_80);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (VVar12 == VK_ERROR_OUT_OF_DATE_KHR) {
    this->SemaphoreIndex = local_res18;
    return -1;
  }
  if (VVar12 == VK_ERROR_SURFACE_LOST_KHR) {
    this->SemaphoreIndex = local_res18;
    return -2;
  }
  this->NumAcquireCalls = this->NumAcquireCalls + 1;
  uVar20 = this->SemaphoreIndex;
  uVar19 = uVar13;
  if ((int)uVar20 < (this->ImageAcquiredSemaphore).ArrayNum) {
    uVar19 = ~uVar20 >> 0x1f;
  }
  if ((uVar19 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  *local_res10 = *(FVulkanSemaphore **)
                  ((this->ImageAcquiredSemaphore).AllocatorInstance.Data + (longlong)(int)uVar20 * 8
                  );
  pTVar7 = GValidationCvar.Ref;
  if (VVar12 == VK_ERROR_VALIDATION_FAILED_EXT) {
    bVar9 = IsInParallelRenderingThread();
    if ((!bVar9) &&
       (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6409875433831007955>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                           ,0x6d3,"IsInParallelRenderingThread()"), bVar9)) {
      pcVar3 = (code *)swi(3);
      iVar11 = (*pcVar3)();
      return iVar11;
    }
    if (pTVar7->ShadowedValue[1] == 0) {
      UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else if (((VVar12 != VK_SUCCESS) && (VVar12 != VK_SUBOPTIMAL_KHR)) &&
          (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                             ("Result == VK_SUCCESS || Result == VK_SUBOPTIMAL_KHR",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                              ,0x2f8,L"vkAcquireNextImageKHR failed Result = %d"), bVar9)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  this->CurrentImageIndex = local_res8[0];
  FVar18 = StatPtr_STAT_VulkanWaitSwapchain;
  if (StatPtr_STAT_VulkanWaitSwapchain == (FThreadSafeStaticStat<FStat_STAT_VulkanWaitSwapchain>)0x0
     ) {
    pFVar14 = ::FName::FName(local_58,"STAT_VulkanWaitSwapchain");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanWaitSwapchain>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanWaitSwapchain,*pFVar14,
                        L"Wait For Swapchain","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar18;
  bVar9 = false;
  bVar5 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value != 0) || (uVar20 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_100[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_100[0]._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c8.ComparisonIndex.Value = FVar21.Value;
        local_c8.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x2fe);
        bVar9 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18 = FVar21.Value;
      uStackX_1c = uVar20;
      FThreadStats::AddMessage(FVar22,CycleScopeStart);
      bVar4 = true;
      goto LAB_145b9dc22;
    }
  }
  bVar4 = false;
  FVar22 = local_b0;
LAB_145b9dc22:
  uVar20 = this->SemaphoreIndex;
  if ((int)uVar20 < (this->ImageAcquiredFences).ArrayNum) {
    uVar13 = ~uVar20 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  bVar10 = FVulkanFenceManager::WaitForFence
                     (local_f8,*(FVulkanFence **)
                                ((this->ImageAcquiredFences).AllocatorInstance.Data +
                                (longlong)(int)uVar20 * 8),0xffffffffffffffff);
  if ((!bVar10) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_6316818237149412608>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                          ,0x300,"bResult"), bVar10)) {
    pcVar3 = (code *)swi(3);
    iVar11 = (*pcVar3)();
    return iVar11;
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_70.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar16,&local_70);
      piVar1 = &pFVar16->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return this->CurrentImageIndex;
}

// Create @ 145ba1ee0

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
/* WARNING: Enum "VkColorSpaceKHR": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkPresentModeKHR": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanSwapChain * __cdecl
FVulkanSwapChain::Create
          (VkInstance_T *param_1,FVulkanDevice *param_2,EPixelFormat *param_3,uint param_4,
          uint param_5,bool param_6,uint *param_7,
          TArray<VkImage_T_*,TSizedDefaultAllocator<32>_> *param_8,schar param_9,
          FVulkanGenericPlatformWindowContext *param_10,FVulkanSwapChainRecreateInfo *param_11)

{
  FVulkanQueue *pFVar1;
  code *pcVar2;
  bool bVar3;
  TConsoleVariableData<int> *pTVar4;
  EShaderPlatform EVar5;
  VkSurfaceKHR_T *pVVar6;
  FVulkanDevice *pFVar7;
  FVulkanGenericPlatformWindowContext *pFVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  EPixelFormat EVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  VkResult VVar16;
  int iVar17;
  VkPresentModeKHR VVar18;
  Type TVar19;
  char *pcVar20;
  size_t sVar21;
  FVulkanSwapChain *pFVar22;
  IConsoleManager *pIVar23;
  longlong *plVar24;
  FVulkanSwapChain *pFVar25;
  FStaticBasicLogRecord *pFVar26;
  ForElementType<FSetElementId> FVar27;
  wchar_t *pwVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  longlong lVar32;
  VkPresentModeKHR VVar33;
  FVulkanSwapChain *pFVar34;
  VkPresentModeKHR VVar36;
  uint uVar37;
  FVulkanSwapChain *pFVar38;
  VkSurfaceTransformFlagBitsKHR VVar39;
  undefined1 auStackY_928 [32];
  ForAnyElementType local_8c0;
  int local_8b8 [6];
  VkSurfaceKHR_T *local_8a0;
  undefined8 local_898;
  ForAnyElementType local_890;
  int local_888 [3];
  uint local_87c;
  uint local_878;
  int local_874;
  uint local_870;
  uint local_86c;
  VkSwapchainKHR_T *local_868;
  FVulkanSwapChainRecreateInfo *local_860;
  FString local_858;
  FVulkanDevice *local_848;
  uint local_840 [2];
  bool *local_838;
  VkSwapchainCreateInfoKHR local_828;
  FVulkanGenericPlatformWindowContext *local_7b8;
  VkInstance_T *local_7b0;
  TArray<VkImage_T_*,TSizedDefaultAllocator<32>_> *local_7a8;
  uint *local_7a0;
  undefined4 local_798;
  undefined4 local_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  int iStack_788;
  undefined4 local_784;
  EPixelFormat local_780 [8];
  FString local_778;
  FVulkanSwapChainRecreateInfo **local_768;
  FVulkanDevice *local_760;
  VkInstance_T **local_758;
  VkSurfaceCapabilitiesKHR local_750;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_718;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_5f8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_4d8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_3b8;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_298;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_178;
  ulonglong local_58;
  FVulkanSwapChain *pFVar35;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_928;
  pFVar35 = (FVulkanSwapChain *)0x0;
  pFVar34 = (FVulkanSwapChain *)0x0;
  local_86c = param_5;
  local_7a0 = param_7;
  local_7b8 = param_10;
  local_7a8 = param_8;
  local_860 = param_11;
  local_8a0 = (VkSurfaceKHR_T *)0x0;
  local_870 = param_4;
  local_848 = param_2;
  local_838 = (bool *)param_3;
  local_7b0 = param_1;
  if ((param_11 == (FVulkanSwapChainRecreateInfo *)0x0) ||
     (param_11->SwapChain == (VkSwapchainKHR_T *)0x0)) {
    FVulkanWindowsPlatform::CreateSurface(param_10,param_1,&local_8a0);
  }
  else {
    if ((param_11->Surface == (VkSurfaceKHR_T *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecreateInfo->Surface != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                            ,0xaf,L""), bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
      return pFVar34;
    }
    local_8a0 = local_860->Surface;
    local_860->Surface = (VkSurfaceKHR_T *)0x0;
  }
  local_768 = &local_860;
  local_758 = &local_7b0;
  pFVar22 = pFVar35;
  local_760 = param_2;
  if (GSimulateLostSurfaceInNextSwapChain != false) {
    GSimulateLostSurfaceInNextSwapChain = false;
    goto LAB_145ba3957;
  }
  VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceFormatsKHR)
                     (param_2->Gpu,local_8a0,(uint *)(local_888 + 2),(VkSurfaceFormatKHR *)0x0);
  if (VVar16 == VK_ERROR_SURFACE_LOST_KHR) goto LAB_145ba3957;
  if ((int)VVar16 < 0) {
    VulkanRHI::VerifyVulkanResult
              (VVar16,
               "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, &NumFormats, nullptr)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
               ,0xd3);
  }
  VVar33 = VK_PRESENT_MODE_IMMEDIATE_KHR;
  if ((local_888[2] == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumFormats > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                          ,0xd4,L""), bVar11)) {
    pcVar2 = (code *)swi(3);
    pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
    return pFVar34;
  }
  local_8c0.Data = (FScriptContainerElement *)0x0;
  local_8b8[0] = 0;
  local_8b8[1] = 0;
  iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (8,4,local_888[2],&local_8c0,local_8b8,local_8b8 + 1);
  memset(local_8c0.Data + (longlong)iVar17 * 8,0,(longlong)local_888[2] << 3);
  VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceFormatsKHR)
                     (param_2->Gpu,local_8a0,(uint *)(local_888 + 2),
                      (VkSurfaceFormatKHR *)local_8c0.Data);
  if (VVar16 != VK_ERROR_SURFACE_LOST_KHR) {
    if ((int)VVar16 < 0) {
      VulkanRHI::VerifyVulkanResult
                (VVar16,
                 "VulkanRHI::vkGetPhysicalDeviceSurfaceFormatsKHR(Device.GetPhysicalHandle(), Surface, &NumFormats, Formats.GetData())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                 ,0xd8);
    }
    if ((local_8b8[0] < 1) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar2 = (code *)swi(3);
      pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
      return pFVar34;
    }
    uVar29 = 1;
    VVar36 = *(VkPresentModeKHR *)(local_8c0.Data + 4);
    if (1 < local_8b8[0]) {
      lVar32 = 8;
      do {
        VVar18 = VVar33;
        if ((int)uVar29 < local_8b8[0]) {
          VVar18 = ~uVar29 >> 0x1f;
        }
        if ((VVar18 == VK_PRESENT_MODE_IMMEDIATE_KHR) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar2 = (code *)swi(3);
          pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
          return pFVar34;
        }
        if (*(VkPresentModeKHR *)(local_8c0.Data + lVar32 + 4) != VVar36) {
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            pIVar23 = IConsoleManager::Get();
            plVar24 = (longlong *)
                      (**(code **)((longlong)*pIVar23 + 0xc0))
                                (pIVar23,L"r.HDR.Display.OutputDevice",1);
            pFVar25 = pFVar35;
            if (plVar24 != (longlong *)0x0) {
              pFVar25 = (FVulkanSwapChain *)(**(code **)(*plVar24 + 0x68))(plVar24);
            }
            CVarHDROutputDevice = (TConsoleVariableData<int> *)pFVar25;
            _Init_thread_footer(&::_TSS0);
          }
          pTVar4 = CVarHDROutputDevice;
          VVar36 = VVar33;
          if (CVarHDROutputDevice != (TConsoleVariableData<int> *)0x0) {
            bVar11 = IsInParallelGameThread();
            if (bVar11) {
LAB_145ba222b:
              pFVar25 = pFVar35;
            }
            else {
              bVar11 = IsInGameThread();
              pFVar25 = (FVulkanSwapChain *)&DAT_00000004;
              if (bVar11) goto LAB_145ba222b;
            }
            iVar17 = *(int *)((longlong)&pFVar25->Instance + (longlong)pTVar4->ShadowedValue);
            if (iVar17 != 0) {
              if (iVar17 == 1) {
                VVar36 = 0x3b9c6046;
              }
              else if ((iVar17 == 3) || (iVar17 == 4)) {
                VVar36 = 0x3b9c6048;
              }
              else if (2 < (byte)LogVulkanRHI._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
              }
            }
          }
          break;
        }
        uVar29 = uVar29 + 1;
        lVar32 = lVar32 + 8;
      } while ((int)uVar29 < local_8b8[0]);
    }
    EVar12 = *param_3;
    local_898 = (ulonglong)local_898._4_4_ << 0x20;
    local_8b8[2] = VK_PRESENT_MODE_IMMEDIATE_KHR;
    if (EVar12 == PF_Unknown) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
        pIVar23 = IConsoleManager::Get();
        plVar24 = (longlong *)
                  (**(code **)((longlong)*pIVar23 + 0xc0))
                            (pIVar23,L"r.DefaultBackBufferPixelFormat",1);
        pFVar25 = pFVar35;
        if (plVar24 != (longlong *)0x0) {
          pFVar25 = (FVulkanSwapChain *)(**(code **)(*plVar24 + 0x68))(plVar24);
        }
        CVarDefaultBackBufferPixelFormat = (TConsoleVariableData<int> *)pFVar25;
        _Init_thread_footer(&::_TSS1);
      }
      pTVar4 = CVarDefaultBackBufferPixelFormat;
      if (CVarDefaultBackBufferPixelFormat == (TConsoleVariableData<int> *)0x0) {
        EVar12 = PF_Unknown;
      }
      else {
        bVar11 = IsInParallelGameThread();
        if (((!bVar11) && (bVar11 = IsInGameThread(), !bVar11)) &&
           (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<6409875433831007945>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                                ,0x6c9,"GetShadowIndex() == 0"), bVar11)) {
          pcVar2 = (code *)swi(3);
          pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
          return pFVar34;
        }
        TVar19 = EDefaultBackBufferPixelFormat::FromInt(pTVar4->ShadowedValue[0]);
        EVar12 = EDefaultBackBufferPixelFormat::Convert2PixelFormat(TVar19);
      }
      *param_3 = EVar12;
    }
    if (EVar12 != PF_Unknown) {
      bVar11 = false;
      if (GPixelFormats[EVar12].Supported == 0) {
        if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
      else {
        uVar29 = GPixelFormats[EVar12].PlatformFormat;
        pFVar25 = pFVar35;
        pFVar38 = pFVar35;
        if (0 < local_8b8[0]) {
          do {
            uVar31 = (uint)pFVar25;
            VVar18 = VVar33;
            if ((int)uVar31 < local_8b8[0]) {
              VVar18 = ~uVar31 >> 0x1f;
            }
            if ((VVar18 == VK_PRESENT_MODE_IMMEDIATE_KHR) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            if (*(uint *)(local_8c0.Data + (longlong)&pFVar38->Instance) == uVar29) {
              VVar18 = VVar33;
              if ((int)uVar31 < local_8b8[0]) {
                VVar18 = ~uVar31 >> 0x1f;
              }
              if ((VVar18 == VK_PRESENT_MODE_IMMEDIATE_KHR) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
              bVar11 = true;
              local_898 = *(longlong *)(local_8c0.Data + (longlong)&pFVar38->Instance);
              local_8b8[2] = (int)((ulonglong)local_898 >> 0x20);
              param_3 = local_838;
              if (local_8b8[2] == VVar36) goto LAB_145ba24f8;
            }
            pFVar25 = (FVulkanSwapChain *)(ulonglong)(uVar31 + 1);
            pFVar38 = (FVulkanSwapChain *)&pFVar38->Device;
          } while ((int)(uVar31 + 1) < local_8b8[0]);
          param_3 = local_838;
          if (bVar11) goto LAB_145ba24f8;
        }
        param_3 = local_838;
        if (GPixelFormatNotSupportedWarning.Elements._8_4_ !=
            GPixelFormatNotSupportedWarning.Elements._52_4_) {
          FVar27 = (ForElementType<FSetElementId>)0x154be5328;
          if (GPixelFormatNotSupportedWarning.Hash.SecondaryData !=
              (ForElementType<FSetElementId>)0x0) {
            FVar27 = GPixelFormatNotSupportedWarning.Hash.SecondaryData;
          }
          for (iVar17 = *(int *)((longlong)FVar27 +
                                ((ulonglong)(GPixelFormatNotSupportedWarning.HashSize - 1) &
                                (ulonglong)*local_838) * 4); iVar17 != -1;
              iVar17 = *(int *)(GPixelFormatNotSupportedWarning.Elements._0_8_ + 4 +
                               (longlong)iVar17 * 0xc)) {
            if ((bool)*(byte *)(GPixelFormatNotSupportedWarning.Elements._0_8_ +
                               (longlong)iVar17 * 0xc) == *local_838) goto LAB_145ba2687;
          }
        }
        TSet<enum_EPixelFormat,DefaultKeyFuncs<enum_EPixelFormat,0>,FDefaultSetAllocator>::
        Emplace<enum_EPixelFormat_const_&>(&GPixelFormatNotSupportedWarning,local_780,local_838);
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          *param_3 = false;
          goto LAB_145ba24f8;
        }
      }
LAB_145ba2687:
      *param_3 = false;
    }
LAB_145ba24f8:
    uVar29 = 0;
    if ((bool)*param_3 == false) {
      pFVar25 = pFVar35;
      pFVar38 = pFVar35;
      if (0 < local_8b8[0]) {
        do {
          uVar30 = (uint)pFVar25;
          uVar37 = ~uVar30 >> 0x1f;
          uVar31 = uVar29;
          if ((int)uVar30 < local_8b8[0]) {
            uVar31 = uVar37;
          }
          if ((uVar31 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
            return pFVar34;
          }
          pFVar25 = pFVar35;
          if ((*(int *)(local_8c0.Data + (longlong)&pFVar38->Instance) == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Formats[Index].format != VK_FORMAT_UNDEFINED",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                                  ,0x12f,L""), bVar11)) {
            pcVar2 = (code *)swi(3);
            pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
            return pFVar34;
          }
          do {
            uVar31 = uVar29;
            if ((int)uVar30 < local_8b8[0]) {
              uVar31 = uVar37;
            }
            if ((uVar31 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            if (*(uint *)(local_8c0.Data + (longlong)&pFVar38->Instance) ==
                GPixelFormats[(int)pFVar25].PlatformFormat) {
              uVar31 = uVar29;
              if ((int)uVar30 < local_8b8[0]) {
                uVar31 = uVar37;
              }
              if ((uVar31 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
              if (*(VkPresentModeKHR *)
                   ((longlong)((longlong)&pFVar38->Instance + 4) + local_8c0.Data) == VVar36) {
                *param_3 = SUB81(pFVar25,0);
                uVar31 = uVar29;
                if ((int)uVar30 < local_8b8[0]) {
                  uVar31 = ~uVar30 >> 0x1f;
                }
                if ((uVar31 == 0) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar2 = (code *)swi(3);
                  pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                  return pFVar34;
                }
                local_898 = *(longlong *)(local_8c0.Data + (longlong)&pFVar38->Instance);
                if (5 < (byte)LogVulkanRHI._0_1_) {
                  pcVar20 = string_VkFormat((VkFormat)local_898);
                  local_5f8._padding_ = 0;
                  if (pcVar20 == (char *)0x0) {
                    local_5f8.Ptr = (wchar_t *)0x0;
                    local_5f8.StringLength = 0;
                  }
                  else {
                    sVar21 = strlen(pcVar20);
                    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                              (&local_5f8,pcVar20,(int)sVar21,Yes);
                  }
                  UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI)
                  ;
                  if ((void *)local_5f8._padding_ != (void *)0x0) {
                    FMemory::Free((void *)local_5f8._padding_);
                  }
                }
                local_8b8[2] = local_898._4_4_;
                break;
              }
            }
            uVar31 = (int)pFVar25 + 1;
            pFVar25 = (FVulkanSwapChain *)(ulonglong)uVar31;
          } while ((int)uVar31 < 0x5e);
          if ((bool)*param_3 != false) goto LAB_145ba2a50;
          pFVar25 = (FVulkanSwapChain *)(ulonglong)(uVar30 + 1);
          pFVar38 = (FVulkanSwapChain *)&pFVar38->Device;
        } while ((int)(uVar30 + 1) < local_8b8[0]);
      }
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar31 = GPixelFormats[*param_3].PlatformFormat;
      pFVar25 = pFVar35;
      pFVar38 = pFVar35;
      if (0 < local_8b8[0]) {
        do {
          uVar37 = (uint)pFVar25;
          uVar30 = uVar29;
          if ((int)uVar37 < local_8b8[0]) {
            uVar30 = ~uVar37 >> 0x1f;
          }
          if ((uVar30 == 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar11)) {
            pcVar2 = (code *)swi(3);
            pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
            return pFVar34;
          }
          if (*(uint *)(local_8c0.Data + (longlong)&pFVar38->Instance) == uVar31) {
            uVar30 = uVar29;
            if ((int)uVar37 < local_8b8[0]) {
              uVar30 = ~uVar37 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            if (*(VkPresentModeKHR *)((longlong)((longlong)&pFVar38->Instance + 4) + local_8c0.Data)
                == VVar36) {
              uVar31 = uVar29;
              if ((int)uVar37 < local_8b8[0]) {
                uVar31 = ~uVar37 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
              local_898._4_4_ =
                   (VkPresentModeKHR)
                   ((ulonglong)*(longlong *)(local_8c0.Data + (longlong)(int)uVar37 * 8) >> 0x20);
              local_8b8[2] = local_898._4_4_;
              local_898 = *(longlong *)(local_8c0.Data + (longlong)(int)uVar37 * 8);
              goto LAB_145ba28ae;
            }
          }
          pFVar25 = (FVulkanSwapChain *)(ulonglong)(uVar37 + 1);
          pFVar38 = (FVulkanSwapChain *)&pFVar38->Device;
        } while ((int)(uVar37 + 1) < local_8b8[0]);
      }
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bSupported",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                          ,0x151,L"");
      if (bVar11) {
        pcVar2 = (code *)swi(3);
        pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
        return pFVar34;
      }
LAB_145ba28ae:
      if ((bool)*param_3 == false) {
        local_858.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_858.Data.ArrayNum = 0;
        local_858.Data.ArrayMax = 0;
        pFVar25 = pFVar35;
        if (0 < local_8b8[0]) {
          do {
            pwVar28 = L"(";
            uVar31 = (uint)pFVar25;
            if (uVar31 != 0) {
              pwVar28 = L", ";
            }
            ::FString::AppendChars(&local_858,pwVar28,(uVar31 != 0) + 1);
            uVar30 = uVar29;
            if ((int)uVar31 < local_8b8[0]) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if (uVar30 == 0) {
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar11) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
            }
            uVar30 = uVar29;
            if ((int)uVar31 < local_8b8[0]) {
              uVar30 = ~uVar31 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            ::FString::PrintfImpl(&local_778,L"%d/%d");
            uVar30 = local_778.Data.ArrayNum - 1;
            if (local_778.Data.ArrayNum == 0) {
              uVar30 = uVar29;
            }
            ::FString::AppendChars
                      (&local_858,(wchar_t *)local_778.Data.AllocatorInstance.Data,uVar30);
            if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_778.Data.AllocatorInstance.Data);
            }
            pFVar25 = (FVulkanSwapChain *)(ulonglong)(uVar31 + 1);
          } while ((int)(uVar31 + 1) < local_8b8[0]);
        }
        if (local_8b8[0] != 0) {
          ::FString::AppendChars(&local_858,L")",1);
        }
        UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_858.Data.AllocatorInstance.Data);
        }
      }
    }
LAB_145ba2a50:
    if ((local_8b8[2] != VVar36) && (2 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    pFVar7 = local_848;
    pVVar6 = local_8a0;
    if (local_848->PresentQueue == (FVulkanQueue *)0x0) {
      local_87c = 0;
      VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR)
                         (local_848->Gpu,(local_848->Queues).Elements[0]->FamilyIndex,local_8a0,
                          &local_87c);
      if (VVar16 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar16,
                   "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x39d);
      }
      if ((local_87c != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u_Queue_Family__d_1510d7558,
                   (FLogCategoryBase *)&LogVulkanRHI);
      }
      if (local_87c != 1) {
        FWindowsPlatformMisc::MessageBoxExt
                  (Ok,
                   L"Cannot find a compatible Vulkan device that supports surface presentation.\n\n"
                   ,L"Vulkan device not available");
        FWindowsPlatformMisc::RequestExitWithStatus(true,'\x01',(wchar_t *)0x0);
      }
      pFVar7->PresentQueue = (pFVar7->Queues).Elements[0];
      pFVar1 = (pFVar7->Queues).Elements[1];
      if (pFVar1 != (FVulkanQueue *)0x0) {
        local_878 = 0;
        VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR)
                           (pFVar7->Gpu,pFVar1->FamilyIndex,pVVar6,&local_878);
        if (VVar16 != VK_SUCCESS) {
          VulkanRHI::VerifyVulkanResult
                    (VVar16,
                     "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(PhysicalDevice, FamilyIndex, Surface, &bSupportsPresent)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                     ,0x39d);
        }
        if ((local_878 != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
          UE::Logging::Private::BasicLog<4>
                    ((FStaticBasicLogRecord *)&PTR_u_Queue_Family__d_1510d7558,
                     (FLogCategoryBase *)&LogVulkanRHI);
        }
        pTVar4 = GAllowPresentOnComputeQueue.Ref;
        if (local_878 == 1) {
          bVar11 = IsInParallelGameThread();
          if (bVar11) {
LAB_145ba2bcd:
            pFVar25 = pFVar35;
          }
          else {
            bVar11 = IsInGameThread();
            pFVar25 = (FVulkanSwapChain *)&DAT_00000004;
            if (bVar11) goto LAB_145ba2bcd;
          }
          if (*(int *)((longlong)&pFVar25->Instance + (longlong)pTVar4->ShadowedValue) != 0) {
            pFVar7->bPresentOnComputeQueue = pFVar7->VendorId == Amd;
            pFVar7->PresentQueue = (pFVar7->Queues).Elements[1];
          }
        }
      }
    }
    VVar36 = VK_PRESENT_MODE_FIFO_KHR;
    local_8b8[3] = 0;
    VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfacePresentModesKHR)
                       (pFVar7->Gpu,local_8a0,(uint *)(local_8b8 + 3),(VkPresentModeKHR *)0x0);
    if (VVar16 != VK_ERROR_SURFACE_LOST_KHR) {
      if ((int)VVar16 < 0) {
        VulkanRHI::VerifyVulkanResult
                  (VVar16,
                   "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, &NumFoundPresentModes, nullptr)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x17c);
      }
      if ((local_8b8[3] == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("NumFoundPresentModes > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                              ,0x17d,L""), bVar11)) {
        pcVar2 = (code *)swi(3);
        pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
        return pFVar34;
      }
      lVar32 = (longlong)local_8b8[3];
      local_890.Data = (FScriptContainerElement *)0x0;
      local_888[0] = 0;
      local_888[1] = 0;
      iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,local_8b8[3],&local_890,local_888,local_888 + 1);
      memset(local_890.Data + (longlong)iVar17 * 4,0,lVar32 << 2);
      VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfacePresentModesKHR)
                         (pFVar7->Gpu,local_8a0,(uint *)(local_8b8 + 3),
                          (VkPresentModeKHR *)local_890.Data);
      pFVar22 = pFVar34;
      if (VVar16 == VK_ERROR_SURFACE_LOST_KHR) {
        pFVar22 = pFVar35;
        if (local_890.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.Data);
          pFVar22 = pFVar34;
        }
      }
      else {
        if ((int)VVar16 < 0) {
          VulkanRHI::VerifyVulkanResult
                    (VVar16,
                     "VulkanRHI::vkGetPhysicalDeviceSurfacePresentModesKHR(Device.GetPhysicalHandle(), Surface, &NumFoundPresentModes, FoundPresentModes.GetData())"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                     ,0x181);
        }
        if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        bVar3 = false;
        bVar13 = false;
        bVar11 = false;
        pFVar34 = pFVar35;
        bVar14 = false;
        bVar9 = false;
        bVar10 = false;
        if (local_8b8[3] != 0) {
          do {
            bVar3 = bVar10;
            bVar13 = bVar9;
            bVar11 = bVar14;
            uVar30 = (uint)pFVar34;
            uVar31 = uVar29;
            if ((int)uVar30 < local_888[0]) {
              uVar31 = ~uVar30 >> 0x1f;
            }
            if ((uVar31 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            iVar17 = *(int *)(local_890.Data + (longlong)(int)uVar30 * 4);
            if (iVar17 == 0) {
              bVar3 = true;
              if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
              }
            }
            else if (iVar17 == 1) {
              bVar11 = true;
              if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
                pFVar26 = &::LOG_Static;
                goto LAB_145ba2eb1;
              }
            }
            else if (iVar17 == 2) {
              bVar13 = true;
              if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
                UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
              }
            }
            else if (iVar17 == 3) {
              if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
                pFVar26 = &::LOG_Static;
                goto LAB_145ba2eb1;
              }
            }
            else if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
              uVar31 = uVar29;
              if ((int)uVar30 < local_888[0]) {
                uVar31 = ~uVar30 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
              pFVar26 = &::LOG_Static;
LAB_145ba2eb1:
              UE::Logging::Private::BasicLog<4>(pFVar26,(FLogCategoryBase *)&LogVulkanRHI);
            }
            pFVar34 = (FVulkanSwapChain *)((longlong)&pFVar34->Instance + 1);
            bVar14 = bVar11;
            bVar9 = bVar13;
            bVar10 = bVar3;
          } while (pFVar34 < (FVulkanSwapChain *)(ulonglong)(uint)local_8b8[3]);
        }
        local_874 = -1;
        pwVar28 = FCommandLine::Get();
        bVar14 = FParse::Value(pwVar28,L"vulkanpresentmode=",&local_874);
        if (bVar14) {
          if (local_874 == 0) {
            VVar36 = VVar33;
            if (bVar3) goto LAB_145ba31db;
          }
          else {
            if (local_874 == 1) {
              VVar36 = VK_PRESENT_MODE_FIFO_KHR - bVar11;
              bVar14 = bVar11;
            }
            else {
              bVar14 = bVar13;
              if (local_874 != 2) goto LAB_145ba3018;
            }
            if (bVar14) goto LAB_145ba3055;
          }
LAB_145ba3018:
          if ((2 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          local_874 = -1;
LAB_145ba305e:
          if (FVulkanDynamicRHI::HMDVulkanExtensions.Object ==
              (IHeadMountedDisplayVulkanExtensions *)0x0) {
            cVar15 = '\0';
          }
          else {
            if ((FVulkanDynamicRHI::HMDVulkanExtensions.Object ==
                 (IHeadMountedDisplayVulkanExtensions *)0x0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar14)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            cVar15 = (**(code **)((longlong)*FVulkanDynamicRHI::HMDVulkanExtensions.Object + 0x10))
                               ();
          }
          if ((!bVar3) || ((VVar36 = VVar33, cVar15 == '\0' && (param_9 != '\0')))) {
            if (bVar11) {
              VVar36 = VK_PRESENT_MODE_MAILBOX_KHR;
            }
            else if (bVar13) {
              VVar36 = VK_PRESENT_MODE_FIFO_KHR;
            }
            else {
              if (2 < (byte)LogVulkanRHI._0_1_) {
                if ((local_888[0] < 1) &&
                   (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar11)) {
                  pcVar2 = (code *)swi(3);
                  pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                  return pFVar34;
                }
                pcVar20 = string_VkPresentModeKHR(*(VkPresentModeKHR *)local_890.Data);
                local_4d8._padding_ = 0;
                if (pcVar20 == (char *)0x0) {
                  local_4d8.Ptr = (wchar_t *)0x0;
                  local_4d8.StringLength = 0;
                }
                else {
                  sVar21 = strlen(pcVar20);
                  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                            (&local_4d8,pcVar20,(int)sVar21,Yes);
                }
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
                if ((void *)local_4d8._padding_ != (void *)0x0) {
                  FMemory::Free((void *)local_4d8._padding_);
                }
              }
              if ((local_888[0] < 1) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar2 = (code *)swi(3);
                pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
                return pFVar34;
              }
              VVar36 = *(VkPresentModeKHR *)local_890.Data;
            }
          }
        }
        else {
LAB_145ba3055:
          if (local_874 == -1) goto LAB_145ba305e;
        }
LAB_145ba31db:
        if ((3 < (byte)LogVulkanRHI._0_1_) && (bFirstTimeLog != false)) {
          pcVar20 = string_VkPresentModeKHR(VVar36);
          local_3b8._padding_ = 0;
          if (pcVar20 == (char *)0x0) {
            local_3b8.Ptr = (wchar_t *)0x0;
            local_3b8.StringLength = 0;
          }
          else {
            sVar21 = strlen(pcVar20);
            TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                      (&local_3b8,pcVar20,(int)sVar21,Yes);
          }
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          if ((void *)local_3b8._padding_ != (void *)0x0) {
            FMemory::Free((void *)local_3b8._padding_);
          }
        }
        bFirstTimeLog = false;
        if (local_890.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_890.Data);
        }
        pFVar7 = local_848;
        VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR)
                           (local_848->Gpu,local_8a0,&local_750);
        if (VVar16 != VK_ERROR_SURFACE_LOST_KHR) {
          if ((int)VVar16 < 0) {
            VulkanRHI::VerifyVulkanResult
                      (VVar16,
                       "VulkanRHI::vkGetPhysicalDeviceSurfaceCapabilitiesKHR(Device.GetPhysicalHandle(), Surface, &SurfProperties)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                       ,0x1e7);
          }
          VVar16 = (*VulkanDynamicAPI::vkGetPhysicalDeviceSurfaceSupportKHR)
                             (pFVar7->Gpu,pFVar7->PresentQueue->FamilyIndex,local_8a0,local_840);
          if (VVar16 != VK_ERROR_SURFACE_LOST_KHR) {
            if ((int)VVar16 < 0) {
              VulkanRHI::VerifyVulkanResult
                        (VVar16,
                         "VulkanRHI::vkGetPhysicalDeviceSurfaceSupportKHR(Device.GetPhysicalHandle(), Device.GetPresentQueue()->GetFamilyIndex(), Surface, &bSupportsPresent)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                         ,0x1ea);
            }
            if ((local_840[0] == 0) &&
               (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_6316818237149412885>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                                    ,0x1eb,"bSupportsPresent"), bVar11)) {
              pcVar2 = (code *)swi(3);
              pFVar34 = (FVulkanSwapChain *)(*pcVar2)();
              return pFVar34;
            }
            EVar5 = GMaxRHIShaderPlatform;
            bVar11 = IsVulkanMobilePlatform((FStaticShaderPlatform)GMaxRHIShaderPlatform);
            pTVar4 = CVarVulkanPreTransform.Ref;
            if (((bVar11) || (EVar5 == SP_VULKAN_SM5_ANDROID)) &&
               (GVulkanDelayAcquireImage == DelayAcquire)) {
              bVar11 = IsInParallelGameThread();
              if (bVar11) {
LAB_145ba337d:
                pFVar34 = pFVar35;
              }
              else {
                bVar11 = IsInGameThread();
                pFVar34 = (FVulkanSwapChain *)&DAT_00000004;
                if (bVar11) goto LAB_145ba337d;
              }
              uVar31 = 1;
              if (*(int *)((longlong)&pFVar34->Instance + (longlong)pTVar4->ShadowedValue) < 1)
              goto LAB_145ba338a;
            }
            else {
LAB_145ba338a:
              uVar31 = uVar29;
            }
            VVar39 = VK_SURFACE_TRANSFORM_IDENTITY_BIT_KHR;
            if (uVar31 != 0) {
              VVar39 = local_750.currentTransform;
            }
            local_828.compositeAlpha = VK_COMPOSITE_ALPHA_OPAQUE_BIT_KHR;
            if (((byte)local_750.supportedCompositeAlpha & 1) == 0) {
              local_828.compositeAlpha = VK_COMPOSITE_ALPHA_INHERIT_BIT_KHR;
            }
            uVar29 = *local_7a0;
            if (local_750.maxImageCount != 0) {
              if (uVar29 < local_750.maxImageCount) {
                local_750.maxImageCount = uVar29;
              }
              uVar29 = local_750.minImageCount;
              if (local_750.minImageCount < local_750.maxImageCount) {
                uVar29 = local_750.maxImageCount;
              }
            }
            if (local_750.currentExtent.width == 0xffffffff) {
              local_750.currentExtent.width = local_870;
            }
            if (local_750.currentExtent.height == 0xffffffff) {
              local_750.currentExtent.height = local_86c;
            }
            local_828.sType = VK_STRUCTURE_TYPE_SWAPCHAIN_CREATE_INFO_KHR;
            local_828._20_4_ = 0;
            local_828.surface._0_4_ = SUB84(local_8a0,0);
            local_828.surface._4_4_ = (undefined4)((ulonglong)local_8a0 >> 0x20);
            local_828.imageColorSpace = local_8b8[2];
            local_828.imageFormat = (VkFormat)local_898;
            local_828.imageArrayLayers = 1;
            local_828.imageUsage = 0x16;
            local_828.imageSharingMode = VK_SHARING_MODE_EXCLUSIVE;
            local_828.queueFamilyIndexCount = 0;
            local_828.oldSwapchain._0_4_ = 0;
            local_828.oldSwapchain._4_4_ = 0;
            local_828._68_8_ = 0;
            local_828._76_8_ = (ulonglong)VVar39 << 0x20;
            local_828._4_4_ = 0;
            local_828.pNext._0_4_ = 0;
            local_828.pNext._4_4_ = 0;
            local_828.flags = 0;
            if (local_860 != (FVulkanSwapChainRecreateInfo *)0x0) {
              local_828.oldSwapchain._0_4_ = SUB84(local_860->SwapChain,0);
              local_828.oldSwapchain._4_4_ = (undefined4)((ulonglong)local_860->SwapChain >> 0x20);
            }
            local_828.clipped = 1;
            local_828.presentMode = VVar36;
            if (local_750.currentExtent.width == 0) {
              local_750.currentExtent.width = local_870;
            }
            if (local_750.currentExtent.height == 0) {
              local_750.currentExtent.height = local_86c;
            }
            local_828.imageExtent.height = local_750.currentExtent.height;
            local_828.imageExtent.width = local_750.currentExtent.width;
            local_828.minImageCount = uVar29;
            if ((bPrintSwapchainCreationInfo != false) && (4 < (byte)LogVulkanRHI._0_1_)) {
              if (local_8b8[2] < 0x3b9c6042) {
                if (local_8b8[2] == 0x3b9c6041) {
                  pcVar20 = "VK_COLOR_SPACE_DISPLAY_P3_NONLINEAR_EXT";
                }
                else {
                  if (local_8b8[2] != VK_PRESENT_MODE_IMMEDIATE_KHR) goto switchD_145ba34ff_default;
                  pcVar20 = "VK_COLOR_SPACE_SRGB_NONLINEAR_KHR";
                }
              }
              else if (local_8b8[2] < 0x3b9e0a09) {
                if (local_8b8[2] == 0x3b9e0a08) {
                  pcVar20 = "VK_COLOR_SPACE_DISPLAY_NATIVE_AMD";
                }
                else {
                  switch(local_8b8[2]) {
                  case 0x3b9c6042:
                    pcVar20 = "VK_COLOR_SPACE_EXTENDED_SRGB_LINEAR_EXT";
                    break;
                  case 0x3b9c6043:
                    pcVar20 = "VK_COLOR_SPACE_DISPLAY_P3_LINEAR_EXT";
                    break;
                  case 0x3b9c6044:
                    pcVar20 = "VK_COLOR_SPACE_DCI_P3_NONLINEAR_EXT";
                    break;
                  case 0x3b9c6045:
                    pcVar20 = "VK_COLOR_SPACE_BT709_LINEAR_EXT";
                    break;
                  case 0x3b9c6046:
                    pcVar20 = "VK_COLOR_SPACE_BT709_NONLINEAR_EXT";
                    break;
                  case 0x3b9c6047:
                    pcVar20 = "VK_COLOR_SPACE_BT2020_LINEAR_EXT";
                    break;
                  case 0x3b9c6048:
                    pcVar20 = "VK_COLOR_SPACE_HDR10_ST2084_EXT";
                    break;
                  case 0x3b9c6049:
                    pcVar20 = "VK_COLOR_SPACE_DOLBYVISION_EXT";
                    break;
                  case 0x3b9c604a:
                    pcVar20 = "VK_COLOR_SPACE_HDR10_HLG_EXT";
                    break;
                  case 0x3b9c604b:
                    pcVar20 = "VK_COLOR_SPACE_ADOBERGB_LINEAR_EXT";
                    break;
                  case 0x3b9c604c:
                    pcVar20 = "VK_COLOR_SPACE_ADOBERGB_NONLINEAR_EXT";
                    break;
                  case 0x3b9c604d:
                    pcVar20 = "VK_COLOR_SPACE_PASS_THROUGH_EXT";
                    break;
                  case 0x3b9c604e:
                    pcVar20 = "VK_COLOR_SPACE_EXTENDED_SRGB_NONLINEAR_EXT";
                    break;
                  default:
                    goto switchD_145ba34ff_default;
                  }
                }
              }
              else {
switchD_145ba34ff_default:
                pcVar20 = "Unhandled VkColorSpaceKHR";
              }
              local_718._padding_ = 0;
              sVar21 = strlen(pcVar20);
              TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                        (&local_718,pcVar20,(int)sVar21,Yes);
              pcVar20 = string_VkFormat(local_828.imageFormat);
              local_178._padding_ = 0;
              if (pcVar20 == (char *)0x0) {
                local_178.StringLength = 0;
                local_178.Ptr = (wchar_t *)0x0;
              }
              else {
                sVar21 = strlen(pcVar20);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_178,pcVar20,(int)sVar21,Yes);
              }
              pcVar20 = string_VkPresentModeKHR(local_828.presentMode);
              local_298._padding_ = 0;
              if (pcVar20 == (char *)0x0) {
                local_298.Ptr = (wchar_t *)0x0;
                local_298.StringLength = 0;
              }
              else {
                sVar21 = strlen(pcVar20);
                TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                          (&local_298,pcVar20,(int)sVar21,Yes);
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
              if ((void *)local_298._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_298._padding_);
              }
              if ((void *)local_178._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_178._padding_);
              }
              if ((void *)local_718._padding_ != (void *)0x0) {
                FMemory::Free((void *)local_718._padding_);
              }
            }
            pFVar8 = local_7b8;
            pFVar7 = local_848;
            local_784 = 0;
            local_798 = 0x3b9eae18;
            local_794 = 0;
            uStack_790 = 0;
            uStack_78c = 0;
            iStack_788 = 0;
            if ((*(uint *)&(local_848->OptionalDeviceExtensions).field0_0x0 >> 8 & 1) != 0) {
              iStack_788 = (param_6 ^ 1) + 1;
              uStack_790 = local_828.pNext._0_4_;
              uStack_78c = local_828.pNext._4_4_;
              local_828.pNext = &local_798;
            }
            if ((VVar39 == VK_SURFACE_TRANSFORM_ROTATE_90_BIT_KHR) ||
               (VVar39 == VK_SURFACE_TRANSFORM_ROTATE_270_BIT_KHR)) {
              bVar11 = true;
              uVar31 = local_828.imageExtent.height;
              local_828.imageExtent.height = local_828.imageExtent.width;
              local_828.imageExtent.width = uVar31;
            }
            else {
              bVar11 = false;
            }
            local_868 = (VkSwapchainKHR_T *)0x0;
            VVar16 = FVulkanGenericPlatform::CreateSwapchainKHR
                               (local_7b8,local_848->Gpu,local_848->Device,&local_828,
                                &VulkanRHI::GAllocationCallbacks,&local_868);
            if (bVar11) {
              uVar31 = local_828.imageExtent.height;
              local_828.imageExtent.height = local_828.imageExtent.width;
              local_828.imageExtent.width = uVar31;
            }
            if (((*(uint *)&(pFVar7->OptionalDeviceExtensions).field0_0x0 >> 8 & 1) != 0) &&
               (VVar16 == VK_ERROR_INITIALIZATION_FAILED)) {
              if (2 < (byte)LogVulkanRHI._0_1_) {
                UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
              }
              local_828.pNext._0_4_ = uStack_790;
              local_828.pNext._4_4_ = uStack_78c;
              VVar16 = FVulkanGenericPlatform::CreateSwapchainKHR
                                 (pFVar8,pFVar7->Gpu,pFVar7->Device,&local_828,
                                  &VulkanRHI::GAllocationCallbacks,&local_868);
            }
            if (VVar16 != VK_ERROR_SURFACE_LOST_KHR) {
              if ((int)VVar16 < 0) {
                VulkanRHI::VerifyVulkanResult
                          (VVar16,"Result",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                           ,0x24e);
              }
              uVar31 = local_828.imageExtent.width;
              if (local_870 < local_828.imageExtent.width) {
                uVar31 = local_870;
              }
              uVar30 = local_828.imageExtent.height;
              if (local_86c < local_828.imageExtent.height) {
                uVar30 = local_86c;
              }
              VVar16 = (*VulkanDynamicAPI::vkGetSwapchainImagesKHR)
                                 (pFVar7->Device,local_868,(uint *)(local_8b8 + 4),(VkImage_T **)0x0
                                 );
              if ((int)VVar16 < 0) {
                VulkanRHI::VerifyVulkanResult
                          (VVar16,
                           "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetHandle(), SwapChain, &NumSwapChainImages, nullptr)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                           ,0x254);
              }
              if (GVulkanSwapChainIgnoreExtraImages != 0) {
                local_8b8[4] = uVar29;
              }
              UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,local_8b8[4],&local_7a8->AllocatorInstance,&local_7a8->ArrayNum,
                         &local_7a8->ArrayMax);
              VVar16 = (*VulkanDynamicAPI::vkGetSwapchainImagesKHR)
                                 (pFVar7->Device,local_868,(uint *)(local_8b8 + 4),
                                  (VkImage_T **)(local_7a8->AllocatorInstance).Data);
              if ((int)VVar16 < 0) {
                VulkanRHI::VerifyVulkanResult
                          (VVar16,
                           "VulkanRHI::vkGetSwapchainImagesKHR(Device.GetHandle(), SwapChain, &NumSwapChainImages, OutImages.GetData())"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                           ,0x25c);
              }
              *local_7a0 = local_8b8[4];
              pFVar34 = ::operator_new(0x90);
              if (pFVar34 != (FVulkanSwapChain *)0x0) {
                pFVar22 = FVulkanSwapChain(pFVar34,local_7b0,pFVar7,local_8a0,local_868,VVar39,
                                           uVar31,uVar30,param_6,local_8b8[4],param_9,local_7b8);
              }
            }
          }
        }
      }
    }
  }
  if ((VkSurfaceFormatKHR *)local_8c0.Data != (VkSurfaceFormatKHR *)0x0) {
    FMemory::Free(local_8c0.Data);
  }
LAB_145ba3957:
  ScopeExitSupport::TScopeGuard<`FVulkanSwapChain::Create'::__l2::<lambda_1>_>::
  ~TScopeGuard<_FVulkanSwapChain::Create_::__l2::<lambda_1>_>(&local_768);
  return pFVar22;
}

// Destroy @ 145ba60e0

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
FVulkanSwapChain::Destroy(FVulkanSwapChain *this,FVulkanSwapChainRecreateInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  
  FVulkanDevice::WaitUntilIdle(this->Device);
  if ((param_1 == (FVulkanSwapChainRecreateInfo *)0x0) || (GVulkanKeepSwapChain == 0)) {
    bVar5 = false;
    FVulkanGenericPlatform::DestroySwapchainKHR
              (this->Device->Device,this->SwapChain,&VulkanRHI::GAllocationCallbacks);
  }
  else {
    bVar5 = true;
    param_1->SwapChain = this->SwapChain;
    param_1->Surface = this->Surface;
  }
  pFVar3 = this->Device;
  puVar11 = (undefined8 *)0x0;
  this->SwapChain = (VkSwapchainKHR_T *)0x0;
  puVar9 = puVar11;
  if (0 < (this->ImageAcquiredFences).ArrayNum) {
    do {
      uVar10 = (uint)puVar9;
      uVar7 = 0;
      if ((int)uVar10 < (this->ImageAcquiredFences).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FVulkanFenceManager::ReleaseFence
                (&pFVar3->FenceManager,
                 (FVulkanFence **)
                 ((this->ImageAcquiredFences).AllocatorInstance.Data + (longlong)(int)uVar10 * 8));
      puVar9 = (undefined8 *)(ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < (this->ImageAcquiredFences).ArrayNum);
  }
  puVar9 = puVar11;
  puVar8 = puVar11;
  if (0 < (this->ImageAcquiredSemaphore).ArrayNum) {
    do {
      uVar10 = (uint)puVar8;
      uVar7 = 0;
      if ((int)uVar10 < (this->ImageAcquiredSemaphore).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar8 = *(undefined8 **)
                ((longlong)puVar9 + (longlong)(this->ImageAcquiredSemaphore).AllocatorInstance.Data)
      ;
      piVar1 = (int *)(puVar8 + 1);
      LOCK();
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 == 1) {
        if (piVar1 == (int *)0x0) {
          puVar8 = puVar11;
        }
        if (puVar8 != (undefined8 *)0x0) {
          (**(code **)*puVar8)(puVar8,1);
        }
      }
      puVar9 = puVar9 + 1;
      puVar8 = (undefined8 *)(ulonglong)(uVar10 + 1);
    } while ((int)(uVar10 + 1) < (this->ImageAcquiredSemaphore).ArrayNum);
  }
  if (!bVar5) {
    (*VulkanDynamicAPI::vkDestroySurfaceKHR)
              (this->Instance,this->Surface,&VulkanRHI::GAllocationCallbacks);
  }
  this->Surface = (VkSurfaceKHR_T *)0x0;
  return;
}

// Present @ 145bb2880

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

EStatus __thiscall
FVulkanSwapChain::Present(FVulkanSwapChain *this,FVulkanQueue *param_1,FVulkanSemaphore *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  FVulkanDynamicRHI *this_00;
  bool bVar8;
  bool bVar9;
  EStatus EVar10;
  int iVar11;
  VkResult VVar12;
  FName *pFVar13;
  TStatId TVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanQueuePresent> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  uint uVar18;
  FColor_u_0 FVar19;
  FName FVar20;
  FNameEntryId FVar21;
  bool bVar22;
  FColor_u_0 local_res8;
  uint uStackX_c;
  VkSemaphore_T *local_res20;
  FName local_198;
  byte local_190;
  FScopeIdle local_188;
  int local_180;
  char local_17c;
  DWORD local_178;
  FScopeIdle local_170;
  int local_168;
  char local_164;
  DWORD local_160;
  FName local_158;
  FColor_u_0 local_148;
  uint local_144;
  LARGE_INTEGER local_140;
  LARGE_INTEGER local_138;
  LARGE_INTEGER local_130;
  LARGE_INTEGER local_128;
  LARGE_INTEGER local_120;
  LARGE_INTEGER local_118;
  LARGE_INTEGER local_110;
  FStatMessage local_108;
  FStatMessage local_f8;
  FSourceLocation local_e8;
  VkPresentInfoKHR local_c8;
  FName local_88;
  FName local_80;
  FName local_78 [8];
  
  if ((this->CurrentImageIndex == -1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentImageIndex != -1",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                         ,0x337,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    EVar10 = (*pcVar2)();
    return EVar10;
  }
  bVar8 = FVulkanDevice::UseMinimalSubmits(this->Device);
  this_00 = GVulkanRHI;
  if (bVar8) {
    if (GVulkanRHI->SubmissionThread == (FVulkanThread *)0x0) {
      lpCriticalSection = &GVulkanRHI->SubmissionCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      do {
        bVar8 = FVulkanDynamicRHI::ProcessSubmissionQueue(this_00);
      } while (bVar8);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      (**(code **)(GVulkanRHI->SubmissionThread->Event->_padding_ + 0x10))();
    }
  }
  local_c8.pImageIndices = (uint *)&this->CurrentImageIndex;
  local_c8.sType = VK_STRUCTURE_TYPE_PRESENT_INFO_KHR;
  FVar21.Value = 0;
  local_c8.pResults._0_4_ = 0;
  local_c8.pResults._4_4_ = 0;
  local_res20 = (VkSemaphore_T *)0x0;
  local_c8._4_8_ = 0;
  local_c8._12_8_ = 0;
  local_c8._20_4_ = 0;
  local_c8.pWaitSemaphores = (VkSemaphore_T **)0x0;
  local_c8._36_4_ = 0;
  if (param_2 != (FVulkanSemaphore *)0x0) {
    local_res20 = param_2->SemaphoreHandle;
    local_c8.pWaitSemaphores = &local_res20;
    local_c8._12_8_ = 0x100000000;
  }
  local_c8.pSwapchains = &this->SwapChain;
  local_c8.swapchainCount = 1;
  iVar11 = 0;
  if ((this->LockToVsync != '\0') || (GVulkanForcePacingWithoutVSync != 0)) {
    iVar11 = FGenericPlatformRHIFramePacer::GetFramePaceFromSyncInterval();
  }
  if ((GVulkanCPURHIFramePacer != 0) && (0 < iVar11)) {
    QueryPerformanceCounter(&local_140);
    dVar4 = __real_3ff0000000000000 / (double)iVar11;
    dVar5 = ((double)local_140.QuadPart * FGenericPlatformTime::SecondsPerCycle +
            __real_4170000000000000) - GStartTime;
    dVar3 = this->NextPresentTargetTime - dVar5;
    if (dVar3 <= 0.0) {
      if ((GPrintVulkanVsyncDebug != 0) && (4 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else {
      bVar8 = IsInRHIThread();
      UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_188,!bVar8);
      local_180 = 2;
      bVar8 = IsInRenderingThread();
      if (bVar8) {
        local_17c = '\x01';
        QueryPerformanceCounter(&local_138);
        local_178 = local_138.s.LowPart;
      }
      else {
        local_17c = '\0';
        local_178 = 0;
      }
      if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          if (StatPtr_STAT_StallForEmulatedSyncInterval ==
              (FThreadSafeStaticStat<_public:_enum_FVulkanSwapChain::EStatus___cdecl_FVulkanSwapChain::Present(FVulkanQueue_*,FVulkanSemaphore_*)_::_24_::FStat_STAT_StallForEmulatedSyncInterval>
               )0x0) {
            pFVar13 = ::FName::FName(&local_88,"STAT_StallForEmulatedSyncInterval");
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StallForEmulatedSyncInterval,
                       *pFVar13,L"STAT_StallForEmulatedSyncInterval","STATGROUP_Quick",
                       "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
          }
          _Init_thread_footer(&::_TSS0);
        }
      }
      TVar14.StatIdPtr = (TStatIdData *)StatPtr_STAT_StallForEmulatedSyncInterval;
      if (StatPtr_STAT_StallForEmulatedSyncInterval ==
          (FThreadSafeStaticStat<_public:_enum_FVulkanSwapChain::EStatus___cdecl_FVulkanSwapChain::Present(FVulkanQueue_*,FVulkanSemaphore_*)_::_24_::FStat_STAT_StallForEmulatedSyncInterval>
           )0x0) {
        pFVar13 = ::FName::FName(&local_80,"STAT_StallForEmulatedSyncInterval");
        TVar14.StatIdPtr =
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StallForEmulatedSyncInterval,
                        *pFVar13,L"STAT_StallForEmulatedSyncInterval","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      local_e8.Impl._Line = 0x35d;
      local_e8.Impl._Function =
           "enum FVulkanSwapChain::EStatus __cdecl FVulkanSwapChain::Present(class FVulkanQueue *,class FVulkanSemaphore *)"
      ;
      local_e8.Impl._Column = 5;
      local_e8.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_198,TVar14,CycleStat|ClearEveryFrame,false,&local_e8);
      FWindowsPlatformProcess::SleepNoStats((float)dVar3);
      if ((GPrintVulkanVsyncDebug != 0) && (4 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      if ((local_190 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_190 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_190 & 4) != 0) {
        FThreadStats::AddMessage(local_198,CycleScopeEnd);
      }
      local_190 = 0;
      if (local_17c != '\0') {
        QueryPerformanceCounter(&local_130);
        GRenderThreadIdle[local_180] =
             GRenderThreadIdle[local_180] + (local_130.s.LowPart - local_178);
      }
      UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_188);
    }
    dVar4 = dVar4 + this->NextPresentTargetTime;
    if (dVar4 <= dVar5) {
      dVar4 = dVar5;
    }
    this->NextPresentTargetTime = dVar4;
  }
  this->PresentID = this->PresentID + 1;
  FVar15 = StatPtr_STAT_VulkanQueuePresent;
  if (StatPtr_STAT_VulkanQueuePresent == (FThreadSafeStaticStat<FStat_STAT_VulkanQueuePresent>)0x0)
  {
    pFVar13 = ::FName::FName(local_78,"STAT_VulkanQueuePresent");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanQueuePresent>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanQueuePresent,*pFVar13,
                        L"Queue Present","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar15;
  bVar8 = false;
  bVar7 = false;
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  FVar19.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Bits == 0) && (uVar18 == 0)) {
LAB_145bb2db4:
    bVar6 = false;
    FVar20 = local_158;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_148.Bits = FVar19.Bits;
        local_144 = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_148._s_0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x371);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bb2db4;
    local_res8.Bits = FVar19.Bits;
    uStackX_c = uVar18;
    local_158 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar6 = true;
    FVar21.Value = local_158.ComparisonIndex.Value;
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Yellow,"VulkanQueuePresent");
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId882,"VulkanQueuePresent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
               ,0x372);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId882);
  }
  bVar9 = IsInRHIThread();
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_170,!bVar9);
  local_168 = 2;
  bVar9 = IsInRenderingThread();
  if (bVar9) {
    local_164 = '\x01';
    QueryPerformanceCounter(&local_128);
    local_160 = local_128.s.LowPart;
  }
  else {
    local_164 = '\0';
    local_160 = 0;
  }
  VVar12 = FVulkanGenericPlatform::Present(param_1->Queue,&local_c8);
  if (local_164 != '\0') {
    QueryPerformanceCounter(&local_120);
    GRenderThreadIdle[local_168] = GRenderThreadIdle[local_168] + (local_120.s.LowPart - local_160);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_170);
  EVar10 = OutOfDate;
  this->CurrentImageIndex = -1;
  if (GSimulateLostSurfaceInNextPresent == false) {
    if (GSimulateSuboptimalSurfaceInNextTick == false) {
      if (VVar12 == VK_ERROR_OUT_OF_DATE_KHR) goto LAB_145bb2ed9;
      if (VVar12 == VK_ERROR_SURFACE_LOST_KHR) goto LAB_145bb2ed3;
      if ((VVar12 != VK_SUCCESS) && (VVar12 != VK_SUBOPTIMAL_KHR)) {
        VulkanRHI::VerifyVulkanResult
                  (VVar12,"PresentResult",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x38c);
      }
    }
    else {
      GSimulateSuboptimalSurfaceInNextTick = false;
    }
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar6) && (FVar20 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_f8.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        local_f8.NameAndInfo.Index.Value = FVar21.Value;
        QueryPerformanceCounter(&local_110);
        local_f8.StatData.Pad[4] = '\0';
        local_f8.StatData.Pad[5] = '\0';
        local_f8.StatData.Pad[6] = '\0';
        local_f8.StatData.Pad[7] = '\0';
        local_f8.StatData.Pad[0] = local_110.s.LowPart._0_1_;
        local_f8.StatData.Pad[1] = local_110.s.LowPart._1_1_;
        local_f8.StatData.Pad[2] = local_110.s.LowPart._2_1_;
        local_f8.StatData.Pad[3] = local_110.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_f8);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
    this->NumPresentCalls = this->NumPresentCalls + 1;
    EVar10 = Healthy;
  }
  else {
    GSimulateLostSurfaceInNextPresent = false;
LAB_145bb2ed3:
    EVar10 = SurfaceLost;
LAB_145bb2ed9:
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    FGenericPlatformMisc::EndNamedEvent();
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar8) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar6) && (FVar20 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
        local_108.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
        local_108.NameAndInfo.Index.Value = FVar21.Value;
        QueryPerformanceCounter(&local_118);
        local_108.StatData.Pad[4] = '\0';
        local_108.StatData.Pad[5] = '\0';
        local_108.StatData.Pad[6] = '\0';
        local_108.StatData.Pad[7] = '\0';
        local_108.StatData.Pad[0] = local_118.s.LowPart._0_1_;
        local_108.StatData.Pad[1] = local_118.s.LowPart._1_1_;
        local_108.StatData.Pad[2] = local_118.s.LowPart._2_1_;
        local_108.StatData.Pad[3] = local_118.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar16,&local_108);
        piVar1 = &pFVar16->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar16,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar16,false,false);
        }
      }
    }
  }
  return EVar10;
}

// RenderThreadPacing @ 145bbba70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
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

void __thiscall FVulkanSwapChain::RenderThreadPacing(FVulkanSwapChain *this)

{
  int *piVar1;
  code *pcVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FVulkanSwapChain::RenderThreadPacing(void)_::_18_::FStat_STAT_StallForEmulatedSyncInterval>
  FVar11;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FColor_u_0 FVar12;
  FName FVar13;
  FNameEntryId FVar14;
  double dVar15;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_d8;
  LARGE_INTEGER local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FStatMessage local_a8;
  FScopeIdle local_98;
  int local_90;
  char local_8c;
  DWORD local_88;
  
  bVar8 = IsInRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                         ,0x308,L""), bVar8)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FVar14.Value = 0;
  if ((this->LockToVsync != '\0') || (uVar9 = FVar14.Value, GVulkanForcePacingWithoutVSync != 0)) {
    uVar9 = RHIGetSyncInterval();
  }
  if (GVulkanCPURenderThreadFramePacer == 0) {
    return;
  }
  if ((int)uVar9 < 1) {
    return;
  }
  QueryPerformanceCounter(&local_res18);
  dVar5 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  this->RTPacingSampleCount = this->RTPacingSampleCount + 1;
  dVar5 = dVar5 + __real_4170000000000000;
  dVar4 = (double)(int)uVar9 * ___real_4030aaaaaaaaaaab;
  dVar15 = dVar4 * __real_3fb999999999999a;
  dVar3 = (dVar5 - this->RTPacingPreviousFrameCPUTime) * __real_408f400000000000 +
          this->RTPacingSampledDeltaTimeMS;
  this->RTPacingSampledDeltaTimeMS = dVar3;
  dVar15 = dVar3 / (double)this->RTPacingSampleCount + dVar15;
  if (1000 < this->RTPacingSampleCount) {
    this->RTPacingSampledDeltaTimeMS = dVar15;
    this->RTPacingSampleCount = 1;
  }
  if (dVar4 <= dVar15) {
    if ((GPrintVulkanVsyncDebug != 0) && (4 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    goto LAB_145bbbed1;
  }
  bVar8 = IsInRHIThread();
  UE::Stats::FThreadIdleStats::FScopeIdle::FScopeIdle(&local_98,!bVar8);
  local_90 = 2;
  bVar8 = IsInRenderingThread();
  if (bVar8) {
    local_8c = '\x01';
    QueryPerformanceCounter(&local_res20);
    local_88 = local_res20.s.LowPart;
  }
  else {
    local_8c = '\0';
    local_88 = 0;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_StallForEmulatedSyncInterval ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FVulkanSwapChain::RenderThreadPacing(void)_::_18_::FStat_STAT_StallForEmulatedSyncInterval>
         )0x0) {
      pFVar10 = ::FName::FName(&local_c8,"STAT_StallForEmulatedSyncInterval");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StallForEmulatedSyncInterval,*pFVar10,
                 L"STAT_StallForEmulatedSyncInterval","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_StallForEmulatedSyncInterval;
  if (StatPtr_STAT_StallForEmulatedSyncInterval ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FVulkanSwapChain::RenderThreadPacing(void)_::_18_::FStat_STAT_StallForEmulatedSyncInterval>
       )0x0) {
    pFVar10 = ::FName::FName(&local_c0,"STAT_StallForEmulatedSyncInterval");
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FVulkanSwapChain::RenderThreadPacing(void)_::_18_::FStat_STAT_StallForEmulatedSyncInterval>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_StallForEmulatedSyncInterval,
                          *pFVar10,L"STAT_StallForEmulatedSyncInterval","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar11;
  bVar8 = false;
  bVar7 = false;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  FVar12.Bits = (uint)FVar13.ComparisonIndex.Value;
  uVar9 = FVar13.Number;
  if ((FVar12.Bits == 0) && (uVar9 == 0)) {
LAB_145bbbd39:
    bVar6 = false;
    FVar13 = local_b8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar8 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar12.Bits;
        local_res14 = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSwapChain.cpp"
                   ,0x322);
        bVar8 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145bbbd39;
    local_res8.Bits = FVar12.Bits;
    uStackX_c = uVar9;
    local_b8 = FVar13;
    FThreadStats::AddMessage(FVar13,CycleScopeStart);
    bVar6 = true;
    FVar14.Value = local_b8.ComparisonIndex.Value;
  }
  FWindowsPlatformProcess::SleepNoStats((float)((dVar4 - dVar15) * __real_3f50624de0000000));
  if ((GPrintVulkanVsyncDebug != 0) && (4 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_a8.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      local_a8.NameAndInfo.Index.Value = FVar14.Value;
      QueryPerformanceCounter(&local_d8);
      local_a8.StatData.Pad[4] = '\0';
      local_a8.StatData.Pad[5] = '\0';
      local_a8.StatData.Pad[6] = '\0';
      local_a8.StatData.Pad[7] = '\0';
      local_a8.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_a8.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_a8.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_a8.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_a8);
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
  if (local_8c != '\0') {
    QueryPerformanceCounter(&local_d0);
    GRenderThreadIdle[local_90] = GRenderThreadIdle[local_90] + (local_d0.s.LowPart - local_88);
  }
  UE::Stats::FThreadIdleStats::FScopeIdle::~FScopeIdle(&local_98);
LAB_145bbbed1:
  this->RTPacingPreviousFrameCPUTime = dVar5;
  return;
}

