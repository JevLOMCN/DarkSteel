// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// FVulkanRenderPass @ 145b91c80

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanRenderPass * __thiscall
FVulkanRenderPass::FVulkanRenderPass
          (FVulkanRenderPass *this,FVulkanDevice *param_1,FVulkanRenderTargetLayout *param_2)

{
  FName FVar1;
  VkImageLayout VVar2;
  uint uVar3;
  VkImageLayout VVar4;
  VkAttachmentReference VVar5;
  VkStructureType VVar6;
  undefined4 uVar7;
  FVulkanRenderTargetLayout *pFVar8;
  FVulkanRenderPass *pFVar9;
  FVulkanRenderTargetLayout *pFVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses> FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  VkRenderPass_T *pVVar13;
  FVulkanRenderPass *pFVar14;
  longlong lVar15;
  FName local_res8;
  FStatMessage local_28;
  
  lVar15 = 7;
  pFVar8 = param_2;
  pFVar9 = this;
  do {
    pFVar14 = pFVar9;
    pFVar10 = pFVar8;
    pFVar9 = (FVulkanRenderPass *)((pFVar14->Layout).ResolveReferences + 3);
    VVar5 = pFVar10->ColorReferences[1];
    (pFVar14->Layout).ColorReferences[0] = pFVar10->ColorReferences[0];
    (pFVar14->Layout).ColorReferences[1] = VVar5;
    VVar5 = pFVar10->ColorReferences[3];
    (pFVar14->Layout).ColorReferences[2] = pFVar10->ColorReferences[2];
    (pFVar14->Layout).ColorReferences[3] = VVar5;
    VVar5 = pFVar10->ColorReferences[5];
    (pFVar14->Layout).ColorReferences[4] = pFVar10->ColorReferences[4];
    (pFVar14->Layout).ColorReferences[5] = VVar5;
    VVar5 = pFVar10->ColorReferences[7];
    (pFVar14->Layout).ColorReferences[6] = pFVar10->ColorReferences[6];
    (pFVar14->Layout).ColorReferences[7] = VVar5;
    VVar6 = (pFVar10->StencilReference).sType;
    uVar7 = *(undefined4 *)&(pFVar10->StencilReference).field_0x4;
    (pFVar14->Layout).DepthReference = pFVar10->DepthReference;
    (pFVar14->Layout).StencilReference.sType = VVar6;
    *(undefined4 *)&(pFVar14->Layout).StencilReference.field_0x4 = uVar7;
    VVar2 = (pFVar10->StencilReference).stencilLayout;
    uVar7 = *(undefined4 *)&(pFVar10->StencilReference).field_0x14;
    (pFVar14->Layout).StencilReference.pNext = (pFVar10->StencilReference).pNext;
    (pFVar14->Layout).StencilReference.stencilLayout = VVar2;
    *(undefined4 *)&(pFVar14->Layout).StencilReference.field_0x14 = uVar7;
    VVar5 = pFVar10->ResolveReferences[0];
    (pFVar14->Layout).FragmentDensityReference = pFVar10->FragmentDensityReference;
    (pFVar14->Layout).ResolveReferences[0] = VVar5;
    VVar5 = pFVar10->ResolveReferences[2];
    (pFVar14->Layout).ResolveReferences[1] = pFVar10->ResolveReferences[1];
    (pFVar14->Layout).ResolveReferences[2] = VVar5;
    lVar15 = lVar15 + -1;
    pFVar8 = (FVulkanRenderTargetLayout *)(pFVar10->ResolveReferences + 3);
  } while (lVar15 != 0);
  VVar2 = pFVar10->ResolveReferences[3].layout;
  uVar3 = pFVar10->ResolveReferences[4].attachment;
  VVar4 = pFVar10->ResolveReferences[4].layout;
  (pFVar9->Layout).ColorReferences[0].attachment =
       ((FVulkanRenderTargetLayout *)(pFVar10->ResolveReferences + 3))->ColorReferences[0].
       attachment;
  (pFVar14->Layout).ResolveReferences[3].layout = VVar2;
  (pFVar14->Layout).ResolveReferences[4].attachment = uVar3;
  (pFVar14->Layout).ResolveReferences[4].layout = VVar4;
  VVar5 = pFVar10->ResolveReferences[6];
  (pFVar14->Layout).ResolveReferences[5] = pFVar10->ResolveReferences[5];
  (pFVar14->Layout).ResolveReferences[6] = VVar5;
  (pFVar14->Layout).ResolveReferences[7] = pFVar10->ResolveReferences[7];
  this->RenderPass = (VkRenderPass_T *)0x0;
  this->NumUsedClearValues = (uint)param_2->NumUsedClearValues;
  this->Device = param_1;
  FVar12 = StatPtr_STAT_VulkanNumRenderPasses;
  if (StatPtr_STAT_VulkanNumRenderPasses ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses>)0x0) {
    pFVar11 = ::FName::FName(&local_res8,"STAT_VulkanNumRenderPasses");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumRenderPasses,*pFVar11,
                        L"Num Render Passes","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar12;
  local_res8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
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
  pVVar13 = CreateVulkanRenderPass(param_1,param_2);
  this->RenderPass = pVVar13;
  return this;
}

// ~FVulkanRenderPass @ 145b95ab0

/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FVulkanRenderPass::~FVulkanRenderPass(FVulkanRenderPass *this)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses> FVar3;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  FVar3 = StatPtr_STAT_VulkanNumRenderPasses;
  if (StatPtr_STAT_VulkanNumRenderPasses ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses>)0x0) {
    pFVar2 = ::FName::FName(&local_res8,"STAT_VulkanNumRenderPasses");
    FVar3 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumRenderPasses>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumRenderPasses,*pFVar2,
                       L"Num Render Passes","STATGROUP_VulkanRHI","STATCAT_Advanced",L"Vulkan RHI",
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
    local_18.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
    local_18.StatData.Pad[0] = '\x01';
    local_18.StatData.Pad[1] = '\0';
    local_18.StatData.Pad[2] = '\0';
    local_18.StatData.Pad[3] = '\0';
    local_18.StatData.Pad[4] = '\0';
    local_18.StatData.Pad[5] = '\0';
    local_18.StatData.Pad[6] = '\0';
    local_18.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_18);
    FStatsTrace::Add(&local_res8,-1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&this->Device->DeferredDeletionQueue,RenderPass,(ulong64)this->RenderPass);
  this->RenderPass = (VkRenderPass_T *)0x0;
  return;
}

