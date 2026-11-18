// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 1

// ~FVulkanShaderModule @ 145b96300

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

void __thiscall FVulkanShaderModule::~FVulkanShaderModule(FVulkanShaderModule *this)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FName local_res10;
  FStatMessage local_28;
  
  this->_padding_ = (longlong)&___7FVulkanShaderModule__6B_;
  FVar5 = StatPtr_STAT_VulkanNumShaderModule;
  if (StatPtr_STAT_VulkanNumShaderModule ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)0x0) {
    pFVar4 = ::FName::FName(&local_res10,"STAT_VulkanNumShaderModule");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumShaderModule>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumShaderModule,*pFVar4,
                       L"Num Shader Modules","STATGROUP_VulkanGraphicPipelineLibs",
                       "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,
                       false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
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
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&Device->DeferredDeletionQueue,ShaderModule,(ulong64)this->ActualShaderModule);
  this->_padding_ = (longlong)&___7FThreadSafeRefCountedObject__6B_;
  if (((int)this->_padding_ != 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Super::GetRefCount() == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\RefCounting.h"
                         ,0x124,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  return;
}

