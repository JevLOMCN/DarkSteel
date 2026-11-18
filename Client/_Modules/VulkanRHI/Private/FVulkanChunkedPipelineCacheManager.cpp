// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 6

// CreatePSO<FVulkanGraphicsPipelineState> @ 145ad2f20

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

VkResult __thiscall
FVulkanChunkedPipelineCacheManager::CreatePSO<FVulkanGraphicsPipelineState>
          (FVulkanChunkedPipelineCacheManager *this,FVulkanGraphicsPipelineState *param_1,
          bool param_2,
          TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
          *param_3)

{
  FVulkanChunkedPipelineCacheManagerImpl *this_00;
  code *pcVar1;
  bool bVar2;
  VkResult VVar3;
  longlong *plVar4;
  TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
  local_58;
  
  if (UE::Vulkan::GUseChunkedPSOCache == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Vulkan::GUseChunkedPSOCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                       ,0x4d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      VVar3 = (*pcVar1)();
      return VVar3;
    }
  }
  local_58._40_8_ = *(undefined8 *)&param_3->field_0x28;
  local_58._0_8_ = *(undefined8 *)param_3;
  this_00 = (this->VulkanPipelineCacheManagerImpl).Ptr;
  *(undefined8 *)&param_3->field_0x28 = 0;
  local_58._32_8_ = *(undefined8 *)&param_3->field_0x20;
  local_58._16_8_ = *(undefined8 *)&param_3->field_0x10;
  local_58._24_8_ = *(undefined8 *)&param_3->field_0x18;
  if (local_58._0_8_ != 0) {
    *(undefined8 *)param_3 = 0;
  }
  VVar3 = FVulkanChunkedPipelineCacheManagerImpl::CreatePSO<FVulkanGraphicsPipelineState>
                    (this_00,param_1,param_2,&local_58);
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return VVar3;
}

// Get @ 145ae5d00

FVulkanChunkedPipelineCacheManager * __cdecl FVulkanChunkedPipelineCacheManager::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FVulkanChunkedPipelineCacheManager *pFVar3;
  
  if (UE::Vulkan::GUseChunkedPSOCache == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UE::Vulkan::GUseChunkedPSOCache",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                       ,0x4cd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVulkanChunkedPipelineCacheManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  if (VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr ==
      (FVulkanChunkedPipelineCacheManagerImpl *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                       ,0x4ce,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVulkanChunkedPipelineCacheManager *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &VulkanPipelineCacheManager;
}

// Init @ 145ae8c80

void __cdecl FVulkanChunkedPipelineCacheManager::Init(void)

{
  code *pcVar1;
  FVulkanChunkedPipelineCacheManager this;
  bool bVar2;
  FVulkanChunkedPipelineCacheManagerImpl *this_00;
  TUniquePtr<FVulkanChunkedPipelineCacheManagerImpl,TDefaultDelete<FVulkanChunkedPipelineCacheManagerImpl>_>
  TVar3;
  
  if (UE::Vulkan::GUseChunkedPSOCache != 0) {
    if ((VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr !=
         (FVulkanChunkedPipelineCacheManagerImpl *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanChunkedPipelineCache.cpp"
                           ,0x4ba,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = ::operator_new(0x100);
    TVar3.Ptr = (FVulkanChunkedPipelineCacheManagerImpl *)0x0;
    if (this_00 != (FVulkanChunkedPipelineCacheManagerImpl *)0x0) {
      TVar3.Ptr = FVulkanChunkedPipelineCacheManagerImpl::FVulkanChunkedPipelineCacheManagerImpl
                            (this_00);
    }
    this.VulkanPipelineCacheManagerImpl.Ptr =
         VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr;
    bVar2 = VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr !=
            (FVulkanChunkedPipelineCacheManagerImpl *)0x0;
    VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr =
         (TUniquePtr<FVulkanChunkedPipelineCacheManagerImpl,TDefaultDelete<FVulkanChunkedPipelineCacheManagerImpl>_>
          )(TUniquePtr<FVulkanChunkedPipelineCacheManagerImpl,TDefaultDelete<FVulkanChunkedPipelineCacheManagerImpl>_>
            )TVar3.Ptr;
    if (bVar2) {
      FVulkanChunkedPipelineCacheManagerImpl::~FVulkanChunkedPipelineCacheManagerImpl
                ((FVulkanChunkedPipelineCacheManagerImpl *)this.VulkanPipelineCacheManagerImpl.Ptr);
      ::operator_delete((void *)this.VulkanPipelineCacheManagerImpl.Ptr,0x100);
      return;
    }
  }
  return;
}

// IsEnabled @ 145ae9440

bool __cdecl FVulkanChunkedPipelineCacheManager::IsEnabled(void)

{
  return UE::Vulkan::GUseChunkedPSOCache != 0;
}

// Shutdown @ 145af4c30

void __cdecl FVulkanChunkedPipelineCacheManager::Shutdown(void)

{
  FVulkanChunkedPipelineCacheManager this;
  
  this.VulkanPipelineCacheManagerImpl.Ptr =
       VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr;
  if ((UE::Vulkan::GUseChunkedPSOCache != 0) &&
     (VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr !=
      (FVulkanChunkedPipelineCacheManagerImpl *)0x0)) {
    VulkanPipelineCacheManager.VulkanPipelineCacheManagerImpl.Ptr =
         (TUniquePtr<FVulkanChunkedPipelineCacheManagerImpl,TDefaultDelete<FVulkanChunkedPipelineCacheManagerImpl>_>
          )(FVulkanChunkedPipelineCacheManagerImpl *)0x0;
    FVulkanChunkedPipelineCacheManagerImpl::~FVulkanChunkedPipelineCacheManagerImpl
              ((FVulkanChunkedPipelineCacheManagerImpl *)this.VulkanPipelineCacheManagerImpl.Ptr);
    ::operator_delete((void *)this.VulkanPipelineCacheManagerImpl.Ptr,0x100);
    return;
  }
  return;
}

// Tick @ 145af4df0

void __thiscall FVulkanChunkedPipelineCacheManager::Tick(FVulkanChunkedPipelineCacheManager *this)

{
  if ((UE::Vulkan::GUseChunkedPSOCache != 0) && (UE::Vulkan::GTargetResidentCacheSizeMb != 0)) {
    FVulkanChunkedPipelineCacheManagerImpl::TryUnloadCacheChunks
              ((this->VulkanPipelineCacheManagerImpl).Ptr);
    return;
  }
  return;
}

