// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanRayTracingScene @ 145b48e20

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanRayTracingScene * __thiscall
FVulkanRayTracingScene::FVulkanRayTracingScene
          (FVulkanRayTracingScene *this,FRayTracingSceneInitializer *param_1,FVulkanDevice *param_2)

{
  longlong lVar1;
  FName FVar2;
  uint uVar3;
  ERayTracingSceneLifetime EVar4;
  ERayTracingAccelerationStructureFlags EVar5;
  longlong lVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar9;
  FName local_res8;
  FStatMessage local_38 [2];
  
  FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure
            ((FRHIRayTracingAccelerationStructure *)this);
  this->Device = param_2;
  this->_padding_ = (longlong)&___7FVulkanRayTracingScene__6B_;
  uVar3 = param_1->NumTotalSegments;
  EVar4 = param_1->Lifetime;
  EVar5 = param_1->BuildFlags;
  (this->Initializer).MaxNumInstances = param_1->MaxNumInstances;
  (this->Initializer).NumTotalSegments = uVar3;
  (this->Initializer).Lifetime = EVar4;
  (this->Initializer).BuildFlags = EVar5;
  (this->Initializer).DebugName = param_1->DebugName;
  (this->ReferencedGeometries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedGeometries).ArrayNum = 0;
  (this->ReferencedGeometries).ArrayMax = 0;
  (this->View).Ptr = (FVulkanView *)0x0;
  (this->AccelerationStructureBuffer).Reference = (FVulkanBuffer *)0x0;
  this->NumInstances = 0;
  this->bBuilt = false;
  this->Mutex = (atomic<unsigned_char>)0x0;
  FVar8 = StatPtr_STAT_VulkanRayTracingAllocatedTLAS;
  if (StatPtr_STAT_VulkanRayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)0x0) {
    pFVar7 = ::FName::FName(&local_res8,"STAT_VulkanRayTracingAllocatedTLAS");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedTLAS,
                       *pFVar7,L"Allocated top level acceleration structures",
                       "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar8;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_38[0].NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
    local_38[0].StatData.Pad[0] = '\x01';
    local_38[0].StatData.Pad[1] = '\0';
    local_38[0].StatData.Pad[2] = '\0';
    local_38[0].StatData.Pad[3] = '\0';
    local_38[0].StatData.Pad[4] = '\0';
    local_38[0].StatData.Pad[5] = '\0';
    local_38[0].StatData.Pad[6] = '\0';
    local_38[0].StatData.Pad[7] = '\0';
    local_res8 = FVar2;
    local_38[0].NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,local_38);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  plVar9 = (longlong *)
           (**(code **)(GDynamicRHI->_padding_ + 0x470))(GDynamicRHI,local_38,&this->Initializer);
  lVar6 = plVar9[1];
  lVar1 = plVar9[2];
  this->_padding_ = *plVar9;
  this->_padding_ = lVar6;
  this->_padding_ = lVar1;
  return this;
}

// ~FVulkanRayTracingScene @ 145b500e0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FVulkanRayTracingScene::~FVulkanRayTracingScene(FVulkanRayTracingScene *this)

{
  uint uVar1;
  FVulkanBuffer *pFVar2;
  FName FVar3;
  FVulkanView *this_00;
  FScriptContainerElement *pFVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory> FVar6;
  FThreadStats *pFVar7;
  FThreadStatsPool *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory> FVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS> FVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  FName local_res8;
  FStatMessage local_38;
  
  this->_padding_ = (longlong)&___7FVulkanRayTracingScene__6B_;
  pFVar2 = (this->AccelerationStructureBuffer).Reference;
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    uVar1 = (uint)pFVar2->_padding_;
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11[0] = (char)uVar1;
    auVar11[1] = (char)(uVar1 >> 8);
    auVar11[2] = (char)(uVar1 >> 0x10);
    auVar11[3] = (char)(uVar1 >> 0x18);
    if (auVar11 != (uchar  [8])0x0) {
      FVar6 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
      if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_VulkanRayTracingUsedVideoMemory");
        FVar6 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)
                           &StatPtr_STAT_VulkanRayTracingUsedVideoMemory,*pFVar5,
                           L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                           "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false
                           ,MCR_Physical);
      }
      FVar3 = *(FName *)FVar6;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar3;
        local_38.StatData.Pad = auVar11;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar11);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
    uVar1 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar12[4] = '\0';
    auVar12[5] = '\0';
    auVar12[6] = '\0';
    auVar12[7] = '\0';
    auVar12[0] = (char)uVar1;
    auVar12[1] = (char)(uVar1 >> 8);
    auVar12[2] = (char)(uVar1 >> 0x10);
    auVar12[3] = (char)(uVar1 >> 0x18);
    if (auVar12 != (uchar  [8])0x0) {
      FVar9 = StatPtr_STAT_VulkanRayTracingTLASMemory;
      if (StatPtr_STAT_VulkanRayTracingTLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)0x0) {
        pFVar5 = ::FName::FName(&local_res8,"STAT_VulkanRayTracingTLASMemory");
        FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTLASMemory,
                           *pFVar5,L"TL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                           L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar3 = *(FName *)FVar9;
      local_res8 = FVar3;
      if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar7 == (FThreadStats *)0x0) {
          pFVar8 = FThreadStatsPool::Get();
          pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
        }
        local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
        local_res8 = FVar3;
        local_38.StatData.Pad = auVar12;
        local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar7,&local_38);
        FStatsTrace::Add(&local_res8,-(longlong)auVar12);
        if (pFVar7->ScopeCount == 0) {
          FThreadStats::Flush(pFVar7,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar7,false,false);
        }
      }
    }
  }
  FVar10 = StatPtr_STAT_VulkanRayTracingAllocatedTLAS;
  if (StatPtr_STAT_VulkanRayTracingAllocatedTLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)0x0) {
    pFVar5 = ::FName::FName(&local_res8,"STAT_VulkanRayTracingAllocatedTLAS");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedTLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedTLAS,
                        *pFVar5,L"Allocated top level acceleration structures",
                        "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  FVar3 = *(FName *)FVar10;
  local_res8 = FVar3;
  if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar7 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar7 == (FThreadStats *)0x0) {
      pFVar8 = FThreadStatsPool::Get();
      pFVar7 = FThreadStatsPool::GetFromPool(pFVar8);
    }
    local_38.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
    local_38.StatData.Pad[0] = '\x01';
    local_38.StatData.Pad[1] = '\0';
    local_38.StatData.Pad[2] = '\0';
    local_38.StatData.Pad[3] = '\0';
    local_38.StatData.Pad[4] = '\0';
    local_38.StatData.Pad[5] = '\0';
    local_38.StatData.Pad[6] = '\0';
    local_38.StatData.Pad[7] = '\0';
    local_res8 = FVar3;
    local_38.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar7,&local_38);
    FStatsTrace::Add(&local_res8,-1);
    if (pFVar7->ScopeCount == 0) {
      FThreadStats::Flush(pFVar7,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar7,false,false);
    }
  }
  pFVar2 = (this->AccelerationStructureBuffer).Reference;
  if (pFVar2 != (FVulkanBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  this_00 = (this->View).Ptr;
  if (this_00 != (FVulkanView *)0x0) {
    FVulkanView::~FVulkanView(this_00);
    ::operator_delete(this_00,0x38);
  }
  DestructItems<TRefCountPtr<FRHIRayTracingGeometry>,int>
            ((TRefCountPtr<FRHIRayTracingGeometry> *)
             (this->ReferencedGeometries).AllocatorInstance.Data,
             (this->ReferencedGeometries).ArrayNum);
  pFVar4 = (this->ReferencedGeometries).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// BindBuffer @ 145b578a0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanRayTracingScene::BindBuffer(FVulkanRayTracingScene *this,FRHIBuffer *param_1,uint param_2)

{
  TUniquePtr<FVulkanView,TDefaultDelete<FVulkanView>_> *pTVar1;
  uint uVar2;
  FVulkanBuffer *pFVar3;
  FName FVar4;
  FVulkanDevice *pFVar5;
  FVulkanView *this_00;
  ulong64 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory> FVar12;
  FThreadStats *pFVar13;
  FThreadStatsPool *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory> FVar15;
  FVulkanView *pFVar16;
  FString *pFVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  uchar auVar21 [8];
  ForAnyElementType FVar22;
  FName local_res20;
  FString local_118;
  FString local_108;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FStatMessage local_e0;
  FStatMessage local_d0;
  FStatMessage local_c0;
  FStatMessage local_b0;
  FString local_a0;
  FName local_90;
  FName local_88;
  FName local_80;
  FName local_78;
  longlong local_70;
  FVulkanContextArray local_68;
  FString local_58;
  
  bVar9 = IsInRHIThread();
  if (((!bVar9) && (GIsRunningRHIInSeparateThread_InternalUseOnly != false)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRHIThread() || !IsRunningRHIInSeparateThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x2cd,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((ulonglong)(param_1->Desc).Size < (ulonglong)param_2 + this->_padding_) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SizeInfo.ResultSize + InBufferOffset <= InBuffer->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x2cf,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = (this->AccelerationStructureBuffer).Reference;
  bVar8 = true;
  bVar9 = false;
  if (pFVar3 != (FVulkanBuffer *)0x0) {
    uVar2 = (uint)pFVar3->_padding_;
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18[0] = (char)uVar2;
    auVar18[1] = (char)(uVar2 >> 8);
    auVar18[2] = (char)(uVar2 >> 0x10);
    auVar18[3] = (char)(uVar2 >> 0x18);
    if (auVar18 != (uchar  [8])0x0) {
      FVar12 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
      if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
        pFVar11 = ::FName::FName(&local_90,"STAT_VulkanRayTracingUsedVideoMemory");
        FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingUsedVideoMemory,*pFVar11,
                            L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                            "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar12;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_e0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_res20 = FVar4;
        local_e0.StatData.Pad = auVar18;
        local_e0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_e0);
        FStatsTrace::Add(&local_res20,-(longlong)auVar18);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
    uVar2 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar19[4] = '\0';
    auVar19[5] = '\0';
    auVar19[6] = '\0';
    auVar19[7] = '\0';
    auVar19[0] = (char)uVar2;
    auVar19[1] = (char)(uVar2 >> 8);
    auVar19[2] = (char)(uVar2 >> 0x10);
    auVar19[3] = (char)(uVar2 >> 0x18);
    if (auVar19 != (uchar  [8])0x0) {
      FVar15 = StatPtr_STAT_VulkanRayTracingTLASMemory;
      if (StatPtr_STAT_VulkanRayTracingTLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)0x0) {
        pFVar11 = ::FName::FName(&local_88,"STAT_VulkanRayTracingTLASMemory");
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTLASMemory,
                            *pFVar11,L"TL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced"
                            ,L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar4 = *(FName *)FVar15;
      if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar13 == (FThreadStats *)0x0) {
          pFVar14 = FThreadStatsPool::Get();
          pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
        }
        local_d0.NameAndInfo.Number = FVar4.Number & 0xffffbfff | 0xb000;
        local_f8 = FVar4;
        local_d0.StatData.Pad = auVar19;
        local_d0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar13,&local_d0);
        FStatsTrace::Add(&local_f8,-(longlong)auVar19);
        if (pFVar13->ScopeCount == 0) {
          FThreadStats::Flush(pFVar13,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar13,false,false);
        }
      }
    }
  }
  pFVar3 = (this->AccelerationStructureBuffer).Reference;
  if (pFVar3 != (FVulkanBuffer *)param_1) {
    (this->AccelerationStructureBuffer).Reference = (FVulkanBuffer *)param_1;
    FRHIResource::AddRef((FRHIResource *)param_1);
    if (pFVar3 != (FVulkanBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar3);
    }
  }
  uVar2 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
  auVar20[4] = '\0';
  auVar20[5] = '\0';
  auVar20[6] = '\0';
  auVar20[7] = '\0';
  auVar20[0] = (char)uVar2;
  auVar20[1] = (char)(uVar2 >> 8);
  auVar20[2] = (char)(uVar2 >> 0x10);
  auVar20[3] = (char)(uVar2 >> 0x18);
  if (auVar20 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
    if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_80,"STAT_VulkanRayTracingUsedVideoMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUsedVideoMemory
                          ,*pFVar11,L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar4 = *(FName *)FVar12;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_c0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_f0 = FVar4;
      local_c0.StatData.Pad = auVar20;
      local_c0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_c0);
      FStatsTrace::Add(&local_f0,(long64)auVar20);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  uVar2 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
  auVar21[4] = '\0';
  auVar21[5] = '\0';
  auVar21[6] = '\0';
  auVar21[7] = '\0';
  auVar21[0] = (char)uVar2;
  auVar21[1] = (char)(uVar2 >> 8);
  auVar21[2] = (char)(uVar2 >> 0x10);
  auVar21[3] = (char)(uVar2 >> 0x18);
  if (auVar21 != (uchar  [8])0x0) {
    FVar15 = StatPtr_STAT_VulkanRayTracingTLASMemory;
    if (StatPtr_STAT_VulkanRayTracingTLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_VulkanRayTracingTLASMemory");
      FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTLASMemory,
                          *pFVar11,L"TL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                          L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar4 = *(FName *)FVar15;
    if (((FVar4 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar13 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar13 == (FThreadStats *)0x0) {
        pFVar14 = FThreadStatsPool::Get();
        pFVar13 = FThreadStatsPool::GetFromPool(pFVar14);
      }
      local_b0.NameAndInfo.Number = FVar4.Number & 0xffffafff | 0xa000;
      local_e8 = FVar4;
      local_b0.StatData.Pad = auVar21;
      local_b0.NameAndInfo.Index.Value = FVar4.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar13,&local_b0);
      FStatsTrace::Add(&local_e8,(long64)auVar21);
      if (pFVar13->ScopeCount == 0) {
        FThreadStats::Flush(pFVar13,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar13,false,false);
      }
    }
  }
  pTVar1 = &this->View;
  if ((pTVar1->Ptr != (FVulkanView *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!View.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x2dd,L"Binding multiple buffers is not currently supported."), bVar10))
  {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((param_2 % GRHIGlobals.RayTracing.AccelerationStructureAlignment != 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InBufferOffset % GRHIGlobals.RayTracing.AccelerationStructureAlignment == 0"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x2df,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = this->Device;
  pFVar16 = ::operator_new(0x38);
  if (pFVar16 == (FVulkanView *)0x0) {
    pFVar16 = (FVulkanView *)0x0;
  }
  else {
    pFVar16 = FVulkanView::FVulkanView(pFVar16,pFVar5,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR)
    ;
  }
  if (pTVar1 == (TUniquePtr<FVulkanView,TDefaultDelete<FVulkanView>_> *)&local_70) {
    if (pFVar16 != (FVulkanView *)0x0) {
      FVulkanView::~FVulkanView(pFVar16);
      goto LAB_145b57f79;
    }
  }
  else {
    this_00 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar16;
    if (this_00 != (FVulkanView *)0x0) {
      FVulkanView::~FVulkanView(this_00);
      pFVar16 = this_00;
LAB_145b57f79:
      ::operator_delete(pFVar16,0x38);
    }
  }
  local_68._0_8_ = 0;
  local_68._8_8_ = 0;
  FVulkanView::InitAsAccelerationStructureView
            (pTVar1->Ptr,&local_68,(this->AccelerationStructureBuffer).Reference,param_2,
             (param_1->Desc).Size - param_2);
  pFVar16 = pTVar1->Ptr;
  if (((pFVar16->Storage).TypeIndex != '\x04') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Index == TypeIndex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                          ,0x97,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar6 = (pFVar16->Storage)._padding_;
  ::FName::ToString(&(this->Initializer).DebugName,&local_118);
  FVar22.Data = local_118.Data.AllocatorInstance.Data;
  if (local_118.Data.ArrayNum < 2) {
    pFVar17 = ::FString::FString(&local_58,L"TLAS");
    if (&local_118 != pFVar17) goto LAB_145b5807e;
  }
  else {
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_108.Data.ArrayNum = local_118.Data.ArrayNum;
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_118.Data.ArrayNum,0,(ForAnyElementType *)&local_108,local_118.Data.ArrayNum
               ,&local_108.Data.ArrayMax);
    memcpy(local_108.Data.AllocatorInstance.Data,FVar22.Data,(longlong)local_118.Data.ArrayNum * 2);
    pFVar17 = &local_108;
    bVar8 = false;
    bVar9 = true;
LAB_145b5807e:
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    local_118.Data.AllocatorInstance.Data = (pFVar17->Data).AllocatorInstance.Data;
    (pFVar17->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Data.ArrayNum = (pFVar17->Data).ArrayNum;
    local_118.Data.ArrayMax = (pFVar17->Data).ArrayMax;
    (pFVar17->Data).ArrayNum = 0;
    (pFVar17->Data).ArrayMax = 0;
    if ((bVar9) && (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (!bVar8) goto LAB_145b580db;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
LAB_145b580db:
  pFVar5 = this->Device;
  ::FString::PrintfImpl(&local_a0,L"%s");
  FVar22.Data = (FScriptContainerElement *)L"";
  if (local_a0.Data.ArrayNum != 0) {
    FVar22.Data = local_a0.Data.AllocatorInstance.Data;
  }
  FVulkanDevice::VulkanSetObjectName
            (pFVar5,VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR,uVar6,(wchar_t *)FVar22.Data);
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.Data.AllocatorInstance.Data);
  }
  return;
}

// GetInitializer @ 145b69900

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

FRayTracingSceneInitializer * __thiscall
FVulkanRayTracingScene::GetInitializer(FVulkanRayTracingScene *this)

{
  return &this->Initializer;
}

