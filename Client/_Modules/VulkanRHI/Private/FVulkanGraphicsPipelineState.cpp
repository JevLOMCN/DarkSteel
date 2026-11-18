// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FVulkanGraphicsPipelineState @ 145b46480

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVulkanGraphicsPipelineState * __thiscall
FVulkanGraphicsPipelineState::FVulkanGraphicsPipelineState
          (FVulkanGraphicsPipelineState *this,FVulkanDevice *param_1,
          FGraphicsPipelineStateInitializer *param_2,FGfxPipelineDesc *param_3,
          FVulkanPSOKey *param_4)

{
  FVulkanPSOKey *pFVar1;
  FRHIVertexShader *pFVar2;
  FRHIMeshShader *pFVar3;
  FRHIAmplificationShader *pFVar4;
  FRHIGeometryShader *pFVar5;
  FRHIPixelShader *pFVar6;
  FName FVar7;
  code *pcVar8;
  bool bVar9;
  uint uVar10;
  FVulkanShader *pFVar11;
  FVulkanGraphicsPipelineState *pFVar12;
  ulong64 uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory> FVar18;
  int iVar19;
  FNameEntryId FVar20;
  int iVar21;
  FVulkanShader *pFVar22;
  FVulkanShader *pFVar23;
  uchar auVar24 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_68;
  FStatMessage local_60;
  FStatMessage local_50;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_GraphicsPipelineState);
  pFVar23 = (FVulkanShader *)0x0;
  iVar21 = 0;
  iVar19 = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->bUsesBindless = false;
  this->_padding_ = (longlong)&___7FVulkanGraphicsPipelineState__6B_;
  this->_padding_ = 0;
  this->bHasInputAttachments = false;
  this->bIsRegistered = false;
  (this->PrimitiveType).Value = (char)param_2->PrimitiveType;
  this->VulkanPipeline = (VkPipeline_T *)0x0;
  FVulkanVertexInputStateInfo::FVulkanVertexInputStateInfo(&this->VertexInputState);
  this->Device = param_1;
  FGfxPipelineDesc::FGfxPipelineDesc(&this->Desc,param_3);
  pFVar1 = &this->VulkanKey;
  *(undefined4 *)&pFVar1->field_0x0 = 0;
  this->LRUNode = (TDoubleLinkedListNode *)0x0;
  this->LRUFrame = 0xffffffff;
  this->PipelineCacheSize = 0xffffffff;
  *(undefined8 *)&(this->VulkanKey).field_0x8 = 0;
  *(undefined8 *)&(this->VulkanKey).field_0x10 = 0;
  *(undefined4 *)&pFVar1->field_0x0 = *(undefined4 *)param_4;
  TDataKeyBase<1>::CopyDataDeep((TDataKeyBase<1> *)param_4,(TDataKeyBase<1> *)pFVar1);
  (this->FrameCounter).LastUsedFrame = (atomic<unsigned_int>)0x0;
  LOCK();
  SGraphicsRHICount = (TAtomic<unsigned___int64>)((longlong)SGraphicsRHICount + 1);
  UNLOCK();
  this->VulkanShaders[0] = (FVulkanShader *)0x0;
  this->VulkanShaders[1] = (FVulkanShader *)0x0;
  this->VulkanShaders[2] = (FVulkanShader *)0x0;
  this->VulkanShaders[3] = (FVulkanShader *)0x0;
  this->VulkanShaders[4] = (FVulkanShader *)0x0;
  pFVar2 = (param_2->BoundShaderState).VertexShaderRHI;
  pFVar22 = (FVulkanShader *)(pFVar2 + 1);
  if (pFVar2 == (FRHIVertexShader *)0x0) {
    pFVar22 = pFVar23;
  }
  this->VulkanShaders[0] = pFVar22;
  pFVar3 = (param_2->BoundShaderState).MeshShaderRHI;
  pFVar11 = (FVulkanShader *)(pFVar3 + 1);
  if (pFVar3 == (FRHIMeshShader *)0x0) {
    pFVar11 = pFVar23;
  }
  this->VulkanShaders[3] = pFVar11;
  pFVar4 = (param_2->BoundShaderState).AmplificationShaderRHI;
  pFVar11 = (FVulkanShader *)(pFVar4 + 1);
  if (pFVar4 == (FRHIAmplificationShader *)0x0) {
    pFVar11 = pFVar23;
  }
  this->VulkanShaders[4] = pFVar11;
  pFVar5 = (param_2->BoundShaderState).GeometryShaderRHI;
  pFVar11 = (FVulkanShader *)(pFVar5 + 1);
  if (pFVar5 == (FRHIGeometryShader *)0x0) {
    pFVar11 = pFVar23;
  }
  this->VulkanShaders[2] = pFVar11;
  pFVar6 = (param_2->BoundShaderState).PixelShaderRHI;
  pFVar11 = (FVulkanShader *)(pFVar6 + 1);
  if (pFVar6 == (FRHIPixelShader *)0x0) {
    pFVar11 = pFVar23;
  }
  this->VulkanShaders[1] = pFVar11;
  if (pFVar22 != (FVulkanShader *)0x0) {
    (**(code **)(pFVar22->_padding_ + 8))(pFVar22,&param_4);
    iVar21 = 1;
    iVar19 = 0;
    if (this->VulkanShaders[0]->bUsesBindless != false) {
      iVar19 = 1;
    }
  }
  pFVar22 = this->VulkanShaders[1];
  if (pFVar22 != (FVulkanShader *)0x0) {
    (**(code **)(pFVar22->_padding_ + 8))(pFVar22,&param_4);
    iVar21 = iVar21 + 1;
    if (this->VulkanShaders[1]->bUsesBindless != false) {
      iVar19 = iVar19 + 1;
    }
  }
  pFVar22 = this->VulkanShaders[2];
  if (pFVar22 != (FVulkanShader *)0x0) {
    (**(code **)(pFVar22->_padding_ + 8))(pFVar22,&param_4);
    iVar21 = iVar21 + 1;
    if (this->VulkanShaders[2]->bUsesBindless != false) {
      iVar19 = iVar19 + 1;
    }
  }
  pFVar22 = this->VulkanShaders[3];
  if (pFVar22 != (FVulkanShader *)0x0) {
    (**(code **)(pFVar22->_padding_ + 8))(pFVar22,&param_4);
    iVar21 = iVar21 + 1;
    if (this->VulkanShaders[3]->bUsesBindless != false) {
      iVar19 = iVar19 + 1;
    }
  }
  pFVar22 = this->VulkanShaders[4];
  if (pFVar22 != (FVulkanShader *)0x0) {
    (**(code **)(pFVar22->_padding_ + 8))(pFVar22,&param_4);
    iVar21 = iVar21 + 1;
    if (this->VulkanShaders[4]->bUsesBindless != false) {
      iVar19 = iVar19 + 1;
    }
  }
  if ((iVar19 != 0) && (iVar21 != iVar19)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(BindlessShaderCount == 0) || (ActiveShaderCount == BindlessShaderCount)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x9a0,
                       L"Pipelines can\'t be created with mix of bindless and non-bindless shaders."
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      pFVar12 = (FVulkanGraphicsPipelineState *)(*pcVar8)();
      return pFVar12;
    }
  }
  this->bUsesBindless = iVar19 != 0;
  uVar13 = (**(code **)(GDynamicRHI->_padding_ + 0x2d8))(GDynamicRHI,param_2);
  this->PrecacheKey = uVar13;
  FVar15 = StatPtr_STAT_VulkanNumGraphicsPSOs;
  if (StatPtr_STAT_VulkanNumGraphicsPSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs>)0x0) {
    pFVar14 = ::FName::FName(&local_res18,"STAT_VulkanNumGraphicsPSOs");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumGraphicsPSOs,*pFVar14,
                        L"Num Graphics PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
                        true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar7 = *(FName *)FVar15;
  FVar20 = FVar7.ComparisonIndex.Value;
  uVar10 = FVar7.Number;
  param_4._0_4_ = FVar20.Value;
  param_4._4_4_ = uVar10;
  if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_60.NameAndInfo.Number = uVar10 & 0xffffafff | 0xa000;
    local_60.StatData.Pad[0] = '\x01';
    local_60.StatData.Pad[1] = '\0';
    local_60.StatData.Pad[2] = '\0';
    local_60.StatData.Pad[3] = '\0';
    local_60.StatData.Pad[4] = '\0';
    local_60.StatData.Pad[5] = '\0';
    local_60.StatData.Pad[6] = '\0';
    local_60.StatData.Pad[7] = '\0';
    local_res8 = FVar7;
    local_60.NameAndInfo.Index.Value = FVar20.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_60);
    FStatsTrace::Add(&local_res8,1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar16,false,false);
    }
  }
  auVar24 = (uchar  [8])(longlong)*(int *)(*(longlong *)&(this->VulkanKey).field_0x8 + 8);
  if (auVar24 != (uchar  [8])0x0) {
    FVar18 = StatPtr_STAT_VulkanPSOKeyMemory;
    if (StatPtr_STAT_VulkanPSOKeyMemory == (FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory>)0x0
       ) {
      pFVar14 = ::FName::FName(&local_68,"STAT_VulkanPSOKeyMemory");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOKeyMemory,*pFVar14,
                          L"VulkanPSOKey Memory","STATGROUP_VulkanPSO","STATCAT_Advanced",
                          L"Vulkan PSO",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar7 = *(FName *)FVar18;
    if (((FVar7 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      param_4._0_4_ = FVar7.ComparisonIndex.Value.Value;
      param_4._4_4_ = FVar7.Number;
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_50.NameAndInfo.Number = FVar7.Number & 0xffffafff | 0xa000;
      local_res10 = FVar7;
      local_50.StatData.Pad = auVar24;
      local_50.NameAndInfo.Index.Value = FVar7.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_50);
      FStatsTrace::Add(&local_res10,(long64)auVar24);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  return this;
}

// ~FVulkanGraphicsPipelineState @ 145b4dca0

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

void __thiscall
FVulkanGraphicsPipelineState::~FVulkanGraphicsPipelineState(FVulkanGraphicsPipelineState *this)

{
  FName FVar1;
  undefined8 *puVar2;
  FName *pFVar3;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs> FVar4;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  FStatMessage local_18;
  
  this->_padding_ = (longlong)&___7FVulkanGraphicsPipelineState__6B_;
  LOCK();
  SGraphicsRHICount = (TAtomic<unsigned___int64>)((longlong)SGraphicsRHICount + -1);
  UNLOCK();
  FVar4 = StatPtr_STAT_VulkanNumGraphicsPSOs;
  if (StatPtr_STAT_VulkanNumGraphicsPSOs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs>)0x0) {
    pFVar3 = ::FName::FName(&local_res8,"STAT_VulkanNumGraphicsPSOs");
    FVar4 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumGraphicsPSOs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumGraphicsPSOs,*pFVar3,
                       L"Num Graphics PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
                       true,false,ST_int64,false,false,MCR_Invalid);
  }
  FVar1 = *(FName *)FVar4;
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
  FVulkanPipelineStateCacheManager::NotifyDeletedGraphicsPSO
            (this->Device->PipelineStateCache,(FRHIGraphicsPipelineState *)this);
  if (this->VulkanShaders[0] != (FVulkanShader *)0x0) {
    (**(code **)(this->VulkanShaders[0]->_padding_ + 0x10))();
  }
  if (this->VulkanShaders[1] != (FVulkanShader *)0x0) {
    (**(code **)(this->VulkanShaders[1]->_padding_ + 0x10))();
  }
  if (this->VulkanShaders[2] != (FVulkanShader *)0x0) {
    (**(code **)(this->VulkanShaders[2]->_padding_ + 0x10))();
  }
  if (this->VulkanShaders[3] != (FVulkanShader *)0x0) {
    (**(code **)(this->VulkanShaders[3]->_padding_ + 0x10))();
  }
  if (this->VulkanShaders[4] != (FVulkanShader *)0x0) {
    (**(code **)(this->VulkanShaders[4]->_padding_ + 0x10))();
  }
  puVar2 = *(undefined8 **)&(this->VulkanKey).field_0x10;
  if (puVar2 != (undefined8 *)0x0) {
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
    ::operator_delete(puVar2,0x10);
  }
  FGfxPipelineDesc::~FGfxPipelineDesc(&this->Desc);
  FVulkanVertexInputStateInfo::~FVulkanVertexInputStateInfo(&this->VertexInputState);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// DeleteVkPipeline @ 145b64a10

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

void __thiscall
FVulkanGraphicsPipelineState::DeleteVkPipeline(FVulkanGraphicsPipelineState *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  VkPipeline_T *pVVar1;
  FVulkanPipelineStateCacheManager *pFVar2;
  TDoubleLinkedListNode *pTVar3;
  code *pcVar4;
  bool bVar5;
  
  pVVar1 = this->VulkanPipeline;
  if (pVVar1 != (VkPipeline_T *)0x0) {
    if (param_1) {
      (*VulkanDynamicAPI::vkDestroyPipeline)
                (this->Device->Device,pVVar1,&VulkanRHI::GAllocationCallbacks);
    }
    else {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,Pipeline,(ulong64)pVVar1);
    }
    this->VulkanPipeline = (VkPipeline_T *)0x0;
  }
  pFVar2 = this->Device->PipelineStateCache;
  lpCriticalSection = &pFVar2->LRUCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  for (pTVar3 = (pFVar2->LRU).HeadNode; pTVar3 != (TDoubleLinkedListNode *)0x0;
      pTVar3 = pTVar3->NextNode) {
    if (pTVar3->Value == this) {
      if ((pTVar3->Value->LRUNode != (TDoubleLinkedListNode *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("0 == foo->LRUNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                             ,0xc3b,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("foo != PSO",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc3e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if ((this->LRUNode != (TDoubleLinkedListNode *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == PSO->LRUNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc41,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145b64b49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetOrCreateShaderModules @ 145b6a7b0

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

void __thiscall
FVulkanGraphicsPipelineState::GetOrCreateShaderModules
          (FVulkanGraphicsPipelineState *this,TRefCountPtr<FVulkanShaderModule> (*param_1) [5],
          FVulkanShader **param_2)

{
  longlong lVar1;
  FVulkanShader *this_00;
  FVulkanLayout *pFVar2;
  undefined1 *puVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FVulkanShaderModule *pFVar8;
  TRefCountPtr<FVulkanShaderModule> TVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  TRefCountPtr<FVulkanShaderModule> local_38;
  
  lVar14 = (longlong)param_2 - (longlong)param_1;
  lVar15 = 5;
  do {
    if (((TRefCountPtr<FVulkanShaderModule> *)&(*param_1)[0].Reference)->Reference !=
        (FVulkanShaderModule *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderModulesOUT[Index].IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0x113,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    this_00 = *(FVulkanShader **)(lVar14 + (longlong)param_1);
    if (this_00 != (FVulkanShader *)0x0) {
      pFVar2 = this->Layout;
      uVar12 = (uint)(pFVar2->DescriptorSetLayout)._padding_;
      EnterCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
      bVar5 = FVulkanShader::NeedsSpirvInputAttachmentPatching(this_00,&this->Desc);
      if (bVar5) {
        uVar13 = (uVar12 - 1) * 0x100 ^ 0x9e3779b9 - uVar12;
        uVar7 = (2 - uVar13) - uVar12 ^ uVar13 >> 0xd;
        uVar12 = ((uVar12 - uVar7) - uVar13) - 1 ^ uVar7 >> 0xc;
        uVar13 = (uVar13 - uVar12) - uVar7 ^ uVar12 << 0x10;
        uVar7 = (uVar7 - uVar13) - uVar12 ^ uVar13 >> 5;
        uVar12 = (uVar12 - uVar7) - uVar13 ^ uVar7 >> 3;
        uVar13 = (uVar13 - uVar12) - uVar7 ^ uVar12 << 10;
        uVar12 = (uVar7 - uVar13) - uVar12 ^ uVar13 >> 0xf;
      }
      if (*(int *)&(this_00->ShaderModules).field_0x8 !=
          *(int *)&(this_00->ShaderModules).field_0x34) {
        puVar3 = *(undefined1 **)&(this_00->ShaderModules).field_0x40;
        puVar11 = &(this_00->ShaderModules).field_0x38;
        if (puVar3 != (undefined1 *)0x0) {
          puVar11 = puVar3;
        }
        iVar6 = *(int *)(puVar11 +
                        (ulonglong)(*(int *)&(this_00->ShaderModules).field_0x48 - 1U & uVar12) * 4)
        ;
        if (iVar6 != -1) {
          do {
            lVar1 = *(longlong *)&this_00->ShaderModules + (longlong)iVar6 * 0x18;
            if (*(uint *)(*(longlong *)&this_00->ShaderModules + (longlong)iVar6 * 0x18) == uVar12)
            {
              plVar10 = (longlong *)(lVar1 + 8);
              if (lVar1 == 0) {
                plVar10 = (longlong *)0x0;
              }
              if (plVar10 != (longlong *)0x0) {
                local_38.Reference = (FVulkanShaderModule *)*plVar10;
                if (local_38.Reference != (FVulkanShaderModule *)0x0) {
                  LOCK();
                  *(int *)&(local_38.Reference)->_padding_ =
                       (int)(local_38.Reference)->_padding_ + 1;
                  UNLOCK();
                }
                LeaveCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
                goto LAB_145b6a945;
              }
              break;
            }
            iVar6 = *(int *)(lVar1 + 0x10);
          } while (iVar6 != -1);
        }
      }
      FVulkanShader::CreateHandle
                (this_00,(FGfxPipelineDesc *)&stack0xffffffffffffffc8,(FVulkanLayout *)&this->Desc,
                 (uint)pFVar2);
      LeaveCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
LAB_145b6a945:
      if (*param_1 != &stack0xffffffffffffffc8) {
        pFVar8 = ((TRefCountPtr<FVulkanShaderModule> *)&(*param_1)[0].Reference)->Reference;
        ((TRefCountPtr<FVulkanShaderModule> *)&(*param_1)[0].Reference)->Reference =
             local_38.Reference;
        local_38.Reference = (FVulkanShaderModule *)0x0;
        if (pFVar8 == (FVulkanShaderModule *)0x0) goto LAB_145b6a9c2;
        plVar10 = &pFVar8->_padding_;
        LOCK();
        lVar1 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          if (plVar10 == (longlong *)0x0) {
            pFVar8 = (FVulkanShaderModule *)0x0;
          }
          if (pFVar8 != (FVulkanShaderModule *)0x0) {
            (**(code **)pFVar8->_padding_)(pFVar8,1);
          }
        }
      }
      if (local_38.Reference != (FVulkanShaderModule *)0x0) {
        plVar10 = &(local_38.Reference)->_padding_;
        LOCK();
        lVar1 = *plVar10;
        *(int *)plVar10 = (int)*plVar10 + -1;
        UNLOCK();
        if ((int)lVar1 == 1) {
          TVar9.Reference = local_38.Reference;
          if (plVar10 == (longlong *)0x0) {
            TVar9.Reference = (FVulkanShaderModule *)0x0;
          }
          if (TVar9.Reference != (FVulkanShaderModule *)0x0) {
            (**(code **)(TVar9.Reference)->_padding_)(TVar9.Reference,1);
          }
        }
      }
    }
LAB_145b6a9c2:
    param_1 = (TRefCountPtr<FVulkanShaderModule> (*) [5])((longlong)param_1 + 8);
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      return;
    }
  } while( true );
}

// GetPatchedSpirvCode @ 145b6aa40

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

FSpirvCode * __thiscall
FVulkanGraphicsPipelineState::GetPatchedSpirvCode
          (FVulkanGraphicsPipelineState *this,FSpirvCode *__return_storage_ptr__,
          FVulkanShader *param_1)

{
  code *pcVar1;
  bool bVar2;
  FSpirvCode *pFVar3;
  
  if (param_1 == (FVulkanShader *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x11e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSpirvCode *)(*pcVar1)();
      return pFVar3;
    }
  }
  FVulkanShader::GetPatchedSpirvCode(param_1,__return_storage_ptr__,&this->Desc,this->Layout);
  return __return_storage_ptr__;
}

// GetShader @ 145b6aba0

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

FRHIGraphicsShader * __thiscall
FVulkanGraphicsPipelineState::GetShader(FVulkanGraphicsPipelineState *this,EShaderFrequency param_1)

{
  FRHIGraphicsShader *pFVar1;
  
  if (param_1 == SF_Vertex) {
    pFVar1 = (FRHIGraphicsShader *)&this->VulkanShaders[0][-1].CodeHeader;
    if (this->VulkanShaders[0] == (FVulkanShader *)0x0) {
      pFVar1 = (FRHIGraphicsShader *)0x0;
    }
    return pFVar1;
  }
  if (param_1 == SF_Mesh) {
    pFVar1 = (FRHIGraphicsShader *)&this->VulkanShaders[3][-1].CodeHeader;
    if (this->VulkanShaders[3] == (FVulkanShader *)0x0) {
      pFVar1 = (FRHIGraphicsShader *)0x0;
    }
    return pFVar1;
  }
  if (param_1 == SF_Amplification) {
    pFVar1 = (FRHIGraphicsShader *)&this->VulkanShaders[4][-1].CodeHeader;
    if (this->VulkanShaders[4] == (FVulkanShader *)0x0) {
      pFVar1 = (FRHIGraphicsShader *)0x0;
    }
    return pFVar1;
  }
  if (param_1 != SF_Pixel) {
    if (param_1 != SF_Geometry) {
      return (FRHIGraphicsShader *)0x0;
    }
    pFVar1 = (FRHIGraphicsShader *)&this->VulkanShaders[2][-1].CodeHeader;
    if (this->VulkanShaders[2] == (FVulkanShader *)0x0) {
      pFVar1 = (FRHIGraphicsShader *)0x0;
    }
    return pFVar1;
  }
  pFVar1 = (FRHIGraphicsShader *)&this->VulkanShaders[1][-1].CodeHeader;
  if (this->VulkanShaders[1] == (FVulkanShader *)0x0) {
    pFVar1 = (FRHIGraphicsShader *)0x0;
  }
  return pFVar1;
}

// PurgeShaderModules @ 145b6fc70

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

void __thiscall
FVulkanGraphicsPipelineState::PurgeShaderModules
          (FVulkanGraphicsPipelineState *this,FVulkanShader **param_1)

{
  if (*param_1 != (FVulkanShader *)0x0) {
    FVulkanShader::PurgeShaderModules(*param_1);
  }
  if (param_1[1] != (FVulkanShader *)0x0) {
    FVulkanShader::PurgeShaderModules(param_1[1]);
  }
  if (param_1[2] != (FVulkanShader *)0x0) {
    FVulkanShader::PurgeShaderModules(param_1[2]);
  }
  if (param_1[3] != (FVulkanShader *)0x0) {
    FVulkanShader::PurgeShaderModules(param_1[3]);
  }
  if (param_1[4] != (FVulkanShader *)0x0) {
    FVulkanShader::PurgeShaderModules(param_1[4]);
    return;
  }
  return;
}

