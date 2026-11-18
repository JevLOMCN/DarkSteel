// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanComputePipeline @ 145b44830

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

FVulkanComputePipeline * __thiscall
FVulkanComputePipeline::FVulkanComputePipeline
          (FVulkanComputePipeline *this,FVulkanDevice *param_1,
          TVulkanBaseShader<FRHIComputeShader,5> *param_2)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanComputePipeline *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanPipeline__6B_;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  LOCK();
  SPipelineCount = (TAtomic<unsigned___int64>)((longlong)SPipelineCount + 1);
  UNLOCK();
  FRHIResource::FRHIResource((FRHIResource *)&this->_padding_,RRT_ComputePipelineState);
  this->_padding_ = (longlong)&___7FRHIComputePipelineState__6B_;
  this->_padding_ = (longlong)param_2;
  if (param_2 == (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
    *(undefined2 *)&this->_padding_ = 1;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                       ,0x43c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVulkanComputePipeline *)(*pcVar2)();
      return pFVar4;
    }
  }
  else {
    FRHIResource::AddRef((FRHIResource *)param_2);
    *(undefined2 *)&this->_padding_ = 1;
  }
  this->_padding_ = (longlong)&_vftable__for__FVulkanPipeline__;
  this->_padding_ = (longlong)&_vftable__for__FRHIComputePipelineState__;
  this->bUsesBindless = (bool)param_2->field_0x211;
  FVar6 = StatPtr_STAT_VulkanNumComputePSOs;
  if (StatPtr_STAT_VulkanNumComputePSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs>)0x0) {
    pFVar5 = ::FName::FName(&local_res10,"STAT_VulkanNumComputePSOs");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumComputePSOs,*pFVar5,
                       L"Num Compute  PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar6;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    local_res8 = FVar1;
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  return this;
}

// ~FVulkanComputePipeline @ 145b4ce20

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

void __thiscall FVulkanComputePipeline::~FVulkanComputePipeline(FVulkanComputePipeline *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&_vftable__for__FVulkanPipeline__;
  this->_padding_ = (longlong)&_vftable__for__FRHIComputePipelineState__;
  FVulkanDevice::NotifyDeletedComputePipeline((FVulkanDevice *)this->_padding_,this);
  FVar3 = StatPtr_STAT_VulkanNumComputePSOs;
  if (StatPtr_STAT_VulkanNumComputePSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumComputePSOs");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumComputePSOs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumComputePSOs,*pFVar2,
                       L"Num Compute  PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar3;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_28.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_28.StatData.Pad[0] = '\x01';
    local_28.StatData.Pad[1] = '\0';
    local_28.StatData.Pad[2] = '\0';
    local_28.StatData.Pad[3] = '\0';
    local_28.StatData.Pad[4] = '\0';
    local_28.StatData.Pad[5] = '\0';
    local_28.StatData.Pad[6] = '\0';
    local_28.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_28.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_28);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)&this->_padding_);
  this->_padding_ = (longlong)&___7FVulkanPipeline__6B_;
  LOCK();
  SPipelineCount = (TAtomic<unsigned___int64>)((longlong)SPipelineCount + -1);
  UNLOCK();
  if (this->_padding_ != 0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              ((FDeferredDeletionQueue2 *)(this->_padding_ + 0x5c0),Pipeline,this->_padding_);
    this->_padding_ = 0;
  }
  return;
}

