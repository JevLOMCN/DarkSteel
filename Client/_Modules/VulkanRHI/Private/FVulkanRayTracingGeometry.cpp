// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 11

// FVulkanRayTracingGeometry @ 145b473d0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

FVulkanRayTracingGeometry * __thiscall
FVulkanRayTracingGeometry::FVulkanRayTracingGeometry
          (FVulkanRayTracingGeometry *this,FRHICommandListBase *param_1,
          FRayTracingGeometryInitializer *param_2,FVulkanDevice *param_3)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  uint uVar4;
  FRHIBuffer *this_00;
  FRayTracingGeometrySegment *pFVar5;
  FName FVar6;
  longlong lVar7;
  FVulkanBuffer *pFVar8;
  FVulkanBuffer *this_01;
  VkDevice_T *pVVar9;
  FVulkanDevice *this_02;
  code *pcVar10;
  longlong lVar11;
  bool bVar12;
  VkResult VVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS> FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FDebugName *pFVar18;
  FVulkanRayTracingGeometry *pFVar19;
  longlong *plVar20;
  TRefCountPtr<FRHIBuffer> TVar21;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory> FVar22;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory> FVar23;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory> FVar24;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory> FVar25;
  ulong64 uVar26;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS> FVar27;
  ForAnyElementType FVar28;
  uchar auVar29 [8];
  FRHIResource *local_res8;
  FRHICommandListBase *local_res10;
  FName local_res18;
  FName local_res20;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  FDebugName local_1e0;
  FStatMessage local_1d0;
  FString local_1c0;
  FStatMessage local_1b0;
  FStatMessage local_1a0;
  FStatMessage local_190;
  FStatMessage local_180;
  FStatMessage local_170;
  FString local_160;
  VkAccelerationStructureDeviceAddressInfoKHR local_150;
  VkAccelerationStructureCreateInfoKHR local_138;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FString local_c0;
  ulonglong local_b0;
  undefined8 uStack_a8;
  FScriptContainerElement *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  FDebugName local_78;
  undefined1 local_68 [40];
  
  local_res10 = param_1;
  local_res20 = (FName)param_3;
  FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure
            ((FRHIRayTracingAccelerationStructure *)this);
  this->_padding_ = (longlong)&___7FRHIRayTracingGeometry__6B_;
  this->_padding_ = 0;
  this_00 = (param_2->IndexBuffer).Reference;
  this->_padding_ = (longlong)this_00;
  if (this_00 != (FRHIBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  plVar2 = &this->_padding_;
  *(uint *)&this->_padding_ = param_2->IndexBufferOffset;
  *(ERayTracingGeometryType *)((longlong)&this->_padding_ + 4) = param_2->GeometryType;
  *(uint *)&this->_padding_ = param_2->TotalPrimitiveCount;
  *(bool *)((longlong)&this->_padding_ + 4) = param_2->bFastBuild;
  *(bool *)((longlong)&this->_padding_ + 5) = param_2->bAllowUpdate;
  *(bool *)((longlong)&this->_padding_ + 6) = param_2->bAllowCompaction;
  *(bool *)((longlong)&this->_padding_ + 7) = param_2->bTemplate;
  *(ERayTracingGeometryInitializerType *)&this->_padding_ = param_2->Type;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  *plVar2 = 0;
  iVar3 = (param_2->Segments).ArrayNum;
  pFVar5 = (FRayTracingGeometrySegment *)(param_2->Segments).AllocatorInstance.Data;
  *(int *)&this->_padding_ = iVar3;
  if (iVar3 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,iVar3,0,(ForAnyElementType *)plVar2,iVar3,piVar1);
    ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
              ((void *)*plVar2,pFVar5,iVar3);
  }
  plVar2 = &this->_padding_;
  this->_padding_ = (longlong)param_2->OfflineData;
  lVar7 = *(longlong *)((param_2->OfflineDataHeader).Reserved + 2);
  this->_padding_ = *(longlong *)(param_2->OfflineDataHeader).Reserved;
  this->_padding_ = lVar7;
  this->_padding_ = *(longlong *)((param_2->OfflineDataHeader).Reserved + 4);
  this->_padding_ = (longlong)param_2->SourceGeometry;
  *plVar2 = (longlong)(param_2->DebugName).Name;
  *(uint *)&this->_padding_ = (param_2->DebugName).Number;
  *(FName *)((longlong)&this->_padding_ + 4) = param_2->OwnerName;
  this->_padding_ = (longlong)&___7FVulkanRayTracingGeometry__6B_;
  this->Handle = (VkAccelerationStructureKHR_T *)0x0;
  this->Address = 0;
  (this->AccelerationStructureBuffer).Reference = (FVulkanBuffer *)0x0;
  this->Device = (FVulkanDevice *)local_res20;
  (this->HitGroupSystemParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupSystemParameters).ArrayNum = 0;
  (this->HitGroupSystemParameters).ArrayMax = 0;
  (this->HitGroupSystemVertexViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupSystemVertexViews).ArrayNum = 0;
  (this->HitGroupSystemVertexViews).ArrayMax = 0;
  (this->HitGroupSystemIndexView).Index = 0xffffffff;
  (this->HitGroupSystemIndexView).Type = Invalid;
  this->bHasPendingCompactionRequests = false;
  this->AccelerationStructureCompactedSize = 0;
  FDebugName::FDebugName(&this->DebugName);
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  FVar15 = StatPtr_STAT_VulkanRayTracingAllocatedBLAS;
  if (StatPtr_STAT_VulkanRayTracingAllocatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS>)0x0) {
    pFVar14 = ::FName::FName(&local_f8,"STAT_VulkanRayTracingAllocatedBLAS");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedBLAS,
                        *pFVar14,L"Allocated bottom level acceleration structures",
                        "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  FVar6 = *(FName *)FVar15;
  local_res20 = FVar6;
  if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_1d0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_1d0.StatData.Pad[0] = '\x01';
    local_1d0.StatData.Pad[1] = '\0';
    local_1d0.StatData.Pad[2] = '\0';
    local_1d0.StatData.Pad[3] = '\0';
    local_1d0.StatData.Pad[4] = '\0';
    local_1d0.StatData.Pad[5] = '\0';
    local_1d0.StatData.Pad[6] = '\0';
    local_1d0.StatData.Pad[7] = '\0';
    local_res20 = FVar6;
    local_1d0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_1d0);
    FStatsTrace::Add(&local_res20,1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar16,false,false);
    }
  }
  if ((*plVar2 == 0) && ((int)this->_padding_ == 0)) {
    pFVar14 = ::FName::FName(&local_f0,L"BLAS");
    pFVar18 = FDebugName::FDebugName(&local_78,*pFVar14);
  }
  else {
    local_1e0.Number = (uint)this->_padding_;
    pFVar18 = &local_1e0;
    local_1e0.Name = (FName)*plVar2;
  }
  (this->DebugName).Name = pFVar18->Name;
  (this->DebugName).Number = pFVar18->Number;
  this->OwnerName = *(FName *)((longlong)&this->_padding_ + 4);
  lVar7 = this->_padding_;
  if (((lVar7 != 0) && (*(int *)(lVar7 + 0xd8) != 0)) &&
     ((*(int *)(lVar7 + 0xdc) != 2 &&
      ((*(int *)(lVar7 + 0xdc) != 4 &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!Initializer.IndexBuffer || (IndexBufferStride == 2 || IndexBufferStride == 4)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x184,L"Index buffer must be 16 or 32 bit if in use."), bVar12)))))) {
    pcVar10 = (code *)swi(3);
    pFVar19 = (FVulkanRayTracingGeometry *)(*pcVar10)();
    return pFVar19;
  }
  plVar20 = (longlong *)
            (**(code **)(GDynamicRHI->_padding_ + 0x478))(GDynamicRHI,local_68,&this->_padding_);
  lVar11 = plVar20[1];
  lVar7 = plVar20[2];
  this->_padding_ = *plVar20;
  this->_padding_ = lVar11;
  this->_padding_ = lVar7;
  if ((char)this->_padding_ == '\x01') {
    return this;
  }
  FDebugName::ToString((FDebugName *)plVar2,&local_160);
  local_a0 = (FScriptContainerElement *)L"";
  if (local_160.Data.ArrayNum != 0) {
    local_a0 = local_160.Data.AllocatorInstance.Data;
  }
  local_b0 = (ulonglong)(uint)this->_padding_;
  uStack_a8 = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x2000);
  local_90 = 0x20000;
  uStack_88 = 0;
  uStack_98 = 0;
  local_80 = 0;
  TVar21 = FRHICommandListBase::CreateBuffer(local_res10,(FRHIBufferCreateDesc *)&local_res8);
  pFVar8 = (this->AccelerationStructureBuffer).Reference;
  this_01 = (FVulkanBuffer *)(TVar21.Reference)->_padding_;
  if (pFVar8 != this_01) {
    (this->AccelerationStructureBuffer).Reference = this_01;
    if (this_01 != (FVulkanBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_01);
    }
    if (pFVar8 != (FVulkanBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)pFVar8);
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  pFVar8 = (this->AccelerationStructureBuffer).Reference;
  pVVar9 = this->Device->Device;
  local_138._52_8_ = 0;
  local_138.deviceAddress._4_4_ = 0;
  local_138._20_4_ = 0;
  local_138.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
  local_138._4_8_ = 0;
  local_138._12_8_ = 0;
  uVar26 = (pFVar8->CurrentBufferAlloc).Alloc.VulkanHandle;
  local_138.buffer._0_4_ = (undefined4)uVar26;
  local_138.buffer._4_4_ = (undefined4)(uVar26 >> 0x20);
  local_138.offset._0_4_ = (pFVar8->CurrentBufferAlloc).Alloc.Offset;
  local_138.offset._4_4_ = 0;
  local_138.size._0_4_ = (undefined4)this->_padding_;
  local_138.size._4_4_ = (undefined4)((ulonglong)this->_padding_ >> 0x20);
  local_138.type = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR;
  VVar13 = (*VulkanDynamicAPI::vkCreateAccelerationStructureKHR)
                     (pVVar9,&local_138,&VulkanRHI::GAllocationCallbacks,&this->Handle);
  if (VVar13 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar13,
               "VulkanDynamicAPI::vkCreateAccelerationStructureKHR(NativeDevice, &CreateInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
               ,0x1a0);
  }
  this_02 = this->Device;
  FDebugName::ToString(&this->DebugName,&local_c0);
  ::FString::PrintfImpl(&local_1c0,L"%s");
  FVar28.Data = (FScriptContainerElement *)L"";
  if (local_1c0.Data.ArrayNum != 0) {
    FVar28.Data = local_1c0.Data.AllocatorInstance.Data;
  }
  FVulkanDevice::VulkanSetObjectName
            (this_02,VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR,(ulong64)this->Handle,
             (wchar_t *)FVar28.Data);
  if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
  }
  if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data.AllocatorInstance.Data);
  }
  auVar29 = (uchar  [8])this->_padding_;
  if (auVar29 != (uchar  [8])0x0) {
    FVar22 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
    if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_e8,"STAT_VulkanRayTracingUsedVideoMemory");
      FVar22 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUsedVideoMemory
                          ,*pFVar14,L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar6 = *(FName *)FVar22;
    local_res20 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_1b0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_res18 = FVar6;
      local_1b0.StatData.Pad = auVar29;
      local_1b0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_1b0);
      FStatsTrace::Add(&local_res18,(long64)auVar29);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  auVar29 = (uchar  [8])this->_padding_;
  if (auVar29 != (uchar  [8])0x0) {
    FVar23 = StatPtr_STAT_VulkanRayTracingBLASMemory;
    if (StatPtr_STAT_VulkanRayTracingBLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_e0,"STAT_VulkanRayTracingBLASMemory");
      FVar23 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBLASMemory,
                          *pFVar14,L"Total BL AS Memory","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar6 = *(FName *)FVar23;
    local_res20 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_1a0.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_200 = FVar6;
      local_1a0.StatData.Pad = auVar29;
      local_1a0.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_1a0);
      FStatsTrace::Add(&local_200,(long64)auVar29);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  auVar29 = (uchar  [8])this->_padding_;
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    if (auVar29 == (uchar  [8])0x0) goto LAB_145b47efe;
    FVar25 = StatPtr_STAT_VulkanRayTracingStaticBLASMemory;
    if (StatPtr_STAT_VulkanRayTracingStaticBLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_d0,"STAT_VulkanRayTracingStaticBLASMemory");
      FVar25 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_VulkanRayTracingStaticBLASMemory,*pFVar14,
                          L"Static BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                          L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar25;
    local_res20 = FVar6;
    if (((FVar6 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145b47efe;
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_180.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_1f0 = FVar6;
    local_180.StatData.Pad = auVar29;
    local_180.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_180);
    pFVar14 = &local_1f0;
  }
  else {
    if (auVar29 == (uchar  [8])0x0) goto LAB_145b47efe;
    FVar24 = StatPtr_STAT_VulkanRayTracingDynamicBLASMemory;
    if (StatPtr_STAT_VulkanRayTracingDynamicBLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory>)0x0) {
      pFVar14 = ::FName::FName(&local_d8,"STAT_VulkanRayTracingDynamicBLASMemory");
      FVar24 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_VulkanRayTracingDynamicBLASMemory,*pFVar14,
                          L"Dynamic BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                          L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar6 = *(FName *)FVar24;
    local_res20 = FVar6;
    if (((FVar6 == (FName)0x0) || (FThreadStats::bPrimaryDisableForever != false)) ||
       (FThreadStats::TlsSlot == 0xffffffff)) goto LAB_145b47efe;
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_190.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
    local_1f8 = FVar6;
    local_190.StatData.Pad = auVar29;
    local_190.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar16,&local_190);
    pFVar14 = &local_1f8;
  }
  FStatsTrace::Add(pFVar14,(long64)auVar29);
  if (pFVar16->ScopeCount == 0) {
    FThreadStats::Flush(pFVar16,false,false);
  }
  else if (FThreadStats::bIsRawStatsActive != false) {
    FThreadStats::FlushRawStats(pFVar16,false,false);
  }
LAB_145b47efe:
  local_150.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
  local_150._4_8_ = 0;
  local_150.pNext._4_4_ = 0;
  local_150.accelerationStructure._0_4_ = SUB84(this->Handle,0);
  local_150.accelerationStructure._4_4_ = (undefined4)((ulonglong)this->Handle >> 0x20);
  uVar26 = (*VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR)(pVVar9,&local_150);
  uVar4 = (uint)this->_padding_;
  auVar29[4] = '\0';
  auVar29[5] = '\0';
  auVar29[6] = '\0';
  auVar29[7] = '\0';
  auVar29[0] = (char)uVar4;
  auVar29[1] = (char)(uVar4 >> 8);
  auVar29[2] = (char)(uVar4 >> 0x10);
  auVar29[3] = (char)(uVar4 >> 0x18);
  this->Address = uVar26;
  if (auVar29 != (uchar  [8])0x0) {
    FVar27 = StatPtr_STAT_VulkanRayTracingTrianglesBLAS;
    if (StatPtr_STAT_VulkanRayTracingTrianglesBLAS ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS>)0x0) {
      pFVar14 = ::FName::FName(&local_c8,"STAT_VulkanRayTracingTrianglesBLAS");
      FVar27 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTrianglesBLAS,
                          *pFVar14,L"Triangles in all BL acceleration structures",
                          "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar6 = *(FName *)FVar27;
    local_res20 = FVar6;
    if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar16 == (FThreadStats *)0x0) {
        pFVar17 = FThreadStatsPool::Get();
        pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
      }
      local_170.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
      local_1e8 = FVar6;
      local_170.StatData.Pad = auVar29;
      local_170.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar16,&local_170);
      FStatsTrace::Add(&local_1e8,(long64)auVar29);
      if (pFVar16->ScopeCount == 0) {
        FThreadStats::Flush(pFVar16,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar16,false,false);
      }
    }
  }
  if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_160.Data.AllocatorInstance.Data);
  }
  return this;
}

// FVulkanRayTracingGeometry @ 145b480a0

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

FVulkanRayTracingGeometry * __thiscall
FVulkanRayTracingGeometry::FVulkanRayTracingGeometry
          (FVulkanRayTracingGeometry *this,ENoInit param_1)

{
  FRHIRayTracingAccelerationStructure::FRHIRayTracingAccelerationStructure
            ((FRHIRayTracingAccelerationStructure *)this);
  this->_padding_ = (longlong)&___7FRHIRayTracingGeometry__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x10000;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = -1;
  this->_padding_ = 0;
  FDebugName::FDebugName((FDebugName *)&this->_padding_);
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7FVulkanRayTracingGeometry__6B_;
  this->Handle = (VkAccelerationStructureKHR_T *)0x0;
  this->Address = 0;
  (this->AccelerationStructureBuffer).Reference = (FVulkanBuffer *)0x0;
  this->bHasPendingCompactionRequests = false;
  this->AccelerationStructureCompactedSize = 0;
  this->Device = (FVulkanDevice *)0x0;
  (this->HitGroupSystemParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupSystemParameters).ArrayNum = 0;
  (this->HitGroupSystemParameters).ArrayMax = 0;
  (this->HitGroupSystemVertexViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HitGroupSystemVertexViews).ArrayNum = 0;
  (this->HitGroupSystemVertexViews).ArrayMax = 0;
  (this->HitGroupSystemIndexView).Index = 0xffffffff;
  (this->HitGroupSystemIndexView).Type = Invalid;
  FDebugName::FDebugName(&this->DebugName);
  (this->OwnerName).ComparisonIndex = 0;
  (this->OwnerName).Number = 0;
  return this;
}

// ~FVulkanRayTracingGeometry @ 145b4f3f0

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
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FVulkanRayTracingGeometry::~FVulkanRayTracingGeometry(FVulkanRayTracingGeometry *this)

{
  uint uVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  FVulkanBuffer *this_00;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS> FVar10;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory> FVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory> FVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory> FVar14;
  uchar auVar15 [8];
  uchar auVar16 [8];
  uchar auVar17 [8];
  uchar auVar18 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FName local_e8;
  FName local_e0;
  FStatMessage local_d8;
  FStatMessage local_c8;
  FStatMessage local_b8;
  FStatMessage local_a8;
  FStatMessage local_98;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FName local_68;
  FName local_60;
  FName local_58;
  FName local_50 [2];
  
  this->_padding_ = (longlong)&___7FVulkanRayTracingGeometry__6B_;
  ReleaseBindlessHandles(this);
  FVar7 = StatPtr_STAT_VulkanRayTracingAllocatedBLAS;
  if (StatPtr_STAT_VulkanRayTracingAllocatedBLAS ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS>)0x0) {
    pFVar6 = ::FName::FName(&local_78,"STAT_VulkanRayTracingAllocatedBLAS");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingAllocatedBLAS>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingAllocatedBLAS,
                       *pFVar6,L"Allocated bottom level acceleration structures",
                       "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",true,
                       false,ST_int64,false,false,MCR_Invalid);
  }
  FVar2 = *(FName *)FVar7;
  local_res8 = FVar2;
  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar8 == (FThreadStats *)0x0) {
      pFVar9 = FThreadStatsPool::Get();
      pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
    }
    local_d8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
    local_d8.StatData.Pad[0] = '\x01';
    local_d8.StatData.Pad[1] = '\0';
    local_d8.StatData.Pad[2] = '\0';
    local_d8.StatData.Pad[3] = '\0';
    local_d8.StatData.Pad[4] = '\0';
    local_d8.StatData.Pad[5] = '\0';
    local_d8.StatData.Pad[6] = '\0';
    local_d8.StatData.Pad[7] = '\0';
    local_res10 = FVar2;
    local_d8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar8,&local_d8);
    FStatsTrace::Add(&local_res10,-1);
    if (pFVar8->ScopeCount == 0) {
      FThreadStats::Flush(pFVar8,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar8,false,false);
    }
  }
  uVar1 = (uint)this->_padding_;
  auVar15[4] = '\0';
  auVar15[5] = '\0';
  auVar15[6] = '\0';
  auVar15[7] = '\0';
  auVar15[0] = (char)uVar1;
  auVar15[1] = (char)(uVar1 >> 8);
  auVar15[2] = (char)(uVar1 >> 0x10);
  auVar15[3] = (char)(uVar1 >> 0x18);
  if (auVar15 != (uchar  [8])0x0) {
    FVar10 = StatPtr_STAT_VulkanRayTracingTrianglesBLAS;
    if (StatPtr_STAT_VulkanRayTracingTrianglesBLAS ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS>)0x0) {
      pFVar6 = ::FName::FName(&local_70,"STAT_VulkanRayTracingTrianglesBLAS");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingTrianglesBLAS>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingTrianglesBLAS,
                          *pFVar6,L"Triangles in all BL acceleration structures",
                          "STATGROUP_VulkanRayTracing","STATCAT_Advanced",L"Vulkan: Ray Tracing",
                          true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar10;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_c8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res18 = FVar2;
      local_c8.StatData.Pad = auVar15;
      local_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_c8);
      FStatsTrace::Add(&local_res18,-(longlong)auVar15);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  if (this->Handle == (VkAccelerationStructureKHR_T *)0x0) goto LAB_145b4fbac;
  uVar1 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
  auVar16[4] = '\0';
  auVar16[5] = '\0';
  auVar16[6] = '\0';
  auVar16[7] = '\0';
  auVar16[0] = (char)uVar1;
  auVar16[1] = (char)(uVar1 >> 8);
  auVar16[2] = (char)(uVar1 >> 0x10);
  auVar16[3] = (char)(uVar1 >> 0x18);
  if (auVar16 != (uchar  [8])0x0) {
    FVar11 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
    if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_68,"STAT_VulkanRayTracingUsedVideoMemory");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingUsedVideoMemory
                          ,*pFVar6,L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar11;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_b8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res20 = FVar2;
      local_b8.StatData.Pad = auVar16;
      local_b8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_b8);
      FStatsTrace::Add(&local_res20,-(longlong)auVar16);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar1 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
  auVar17[4] = '\0';
  auVar17[5] = '\0';
  auVar17[6] = '\0';
  auVar17[7] = '\0';
  auVar17[0] = (char)uVar1;
  auVar17[1] = (char)(uVar1 >> 8);
  auVar17[2] = (char)(uVar1 >> 0x10);
  auVar17[3] = (char)(uVar1 >> 0x18);
  if (auVar17 != (uchar  [8])0x0) {
    FVar12 = StatPtr_STAT_VulkanRayTracingBLASMemory;
    if (StatPtr_STAT_VulkanRayTracingBLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_60,"STAT_VulkanRayTracingBLASMemory");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBLASMemory,
                          *pFVar6,L"Total BL AS Memory","STATGROUP_VulkanRayTracing",
                          "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,
                          MCR_Physical);
    }
    FVar2 = *(FName *)FVar12;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_a8.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_e8 = FVar2;
      local_a8.StatData.Pad = auVar17;
      local_a8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_a8);
      FStatsTrace::Add(&local_e8,-(longlong)auVar17);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  uVar1 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
  auVar18[4] = '\0';
  auVar18[5] = '\0';
  auVar18[6] = '\0';
  auVar18[7] = '\0';
  auVar18[0] = (char)uVar1;
  auVar18[1] = (char)(uVar1 >> 8);
  auVar18[2] = (char)(uVar1 >> 0x10);
  auVar18[3] = (char)(uVar1 >> 0x18);
  if (*(char *)((longlong)&this->_padding_ + 5) == '\0') {
    if (auVar18 != (uchar  [8])0x0) {
      FVar14 = StatPtr_STAT_VulkanRayTracingStaticBLASMemory;
      if (StatPtr_STAT_VulkanRayTracingStaticBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)0x0) {
        pFVar6 = ::FName::FName(local_50,"STAT_VulkanRayTracingStaticBLASMemory");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingStaticBLASMemory,*pFVar6,
                            L"Static BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                            L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar2 = *(FName *)FVar14;
      local_res8 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar8 == (FThreadStats *)0x0) {
          pFVar9 = FThreadStatsPool::Get();
          pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
        }
        local_88.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
        local_e0 = FVar2;
        local_88.StatData.Pad = auVar18;
        local_88.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar8,&local_88);
        pFVar6 = &local_e0;
        goto LAB_145b4fb4b;
      }
    }
  }
  else if (auVar18 != (uchar  [8])0x0) {
    FVar13 = StatPtr_STAT_VulkanRayTracingDynamicBLASMemory;
    if (StatPtr_STAT_VulkanRayTracingDynamicBLASMemory ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory>)0x0) {
      pFVar6 = ::FName::FName(&local_58,"STAT_VulkanRayTracingDynamicBLASMemory");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingDynamicBLASMemory>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_VulkanRayTracingDynamicBLASMemory,*pFVar6,
                          L"Dynamic BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                          L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar2 = *(FName *)FVar13;
    local_res8 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_98.NameAndInfo.Number = FVar2.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar2;
      local_98.StatData.Pad = auVar18;
      local_98.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_98);
      pFVar6 = &local_res8;
LAB_145b4fb4b:
      FStatsTrace::Add(pFVar6,-(longlong)auVar18);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&this->Device->DeferredDeletionQueue,AccelerationStructure,(ulong64)this->Handle);
LAB_145b4fbac:
  if (this->bHasPendingCompactionRequests != false) {
    if (((this->AccelerationStructureBuffer).Reference == (FVulkanBuffer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("AccelerationStructureBuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                           ,0x1e2,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    bVar5 = FVulkanRayTracingCompactionRequestHandler::ReleaseRequest
                      (this->Device->RayTracingCompactionRequestHandler,this);
    if ((!bVar5) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("bRequestFound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                           ,0x1e4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this->bHasPendingCompactionRequests = false;
  }
  pFVar3 = (this->HitGroupSystemVertexViews).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->HitGroupSystemParameters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this_00 = (this->AccelerationStructureBuffer).Reference;
  if (this_00 != (FVulkanBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  DestructItems<FRayTracingGeometrySegment,int>
            ((FRayTracingGeometrySegment *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  RHIValidation::FResource::~FResource((FResource *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// CompactAccelerationStructure @ 145b5b8b0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkCopyAccelerationStructureModeKHR": Some values do not have unique names */

void __thiscall
FVulkanRayTracingGeometry::CompactAccelerationStructure
          (FVulkanRayTracingGeometry *this,FVulkanCommandBuffer *param_1,ulong64 param_2)

{
  FName FVar1;
  FVulkanBuffer *this_00;
  VkDevice_T *pVVar2;
  FVulkanDevice *this_01;
  code *pcVar3;
  FVulkanCommandBuffer *pFVar4;
  ulong64 uVar5;
  bool bVar6;
  uint uVar7;
  VkResult VVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory> FVar10;
  FThreadStats *pFVar11;
  FThreadStatsPool *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory> FVar13;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory> FVar14;
  FVulkanBuffer *pFVar15;
  FVulkanBuffer *this_02;
  ulong64 uVar16;
  uchar auVar17 [8];
  uchar auVar18 [8];
  uchar auVar19 [8];
  uchar auVar20 [8];
  uchar auVar21 [8];
  uchar auVar22 [8];
  FNameEntryId FVar23;
  ForAnyElementType FVar24;
  uint local_res8;
  uint uStackX_c;
  FVulkanCommandBuffer *local_res10;
  ulong64 local_res18;
  FName local_res20;
  FName local_1f0;
  FName local_1e8;
  FName local_1e0;
  FName local_1d8;
  FName local_1d0;
  FStatMessage local_1c8;
  FStatMessage local_1b8;
  FStatMessage local_1a8;
  FStatMessage local_198;
  FStatMessage local_188;
  FStatMessage local_178;
  FString local_168;
  FString local_158;
  VkAccelerationStructureDeviceAddressInfoKHR local_148;
  undefined1 local_130 [20];
  uint uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  VkCopyAccelerationStructureModeKHR VStack_110;
  undefined4 uStack_10c;
  VkAccelerationStructureCreateInfoKHR local_108;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8;
  FName local_a0;
  FString local_98;
  FRHIBufferCreateDesc local_88;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((this->bHasPendingCompactionRequests == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("bHasPendingCompactionRequests",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x1eb,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->bHasPendingCompactionRequests = false;
  if (param_2 == 0) {
    `FVulkanRayTracingGeometry::CompactAccelerationStructure'::__l2::<lambda_1>::operator()
              (&local_res8);
  }
  else {
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar20[4] = '\0';
    auVar20[5] = '\0';
    auVar20[6] = '\0';
    auVar20[7] = '\0';
    auVar20[0] = (char)uVar7;
    auVar20[1] = (char)(uVar7 >> 8);
    auVar20[2] = (char)(uVar7 >> 0x10);
    auVar20[3] = (char)(uVar7 >> 0x18);
    if (auVar20 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
      if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_c8,"STAT_VulkanRayTracingUsedVideoMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingUsedVideoMemory,*pFVar9,
                            L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                            "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_1c8.NameAndInfo.Number = uVar7 & 0xffffbfff | 0xb000;
        local_res20 = FVar1;
        local_1c8.StatData.Pad = auVar20;
        local_1c8.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_1c8);
        FStatsTrace::Add(&local_res20,-(longlong)auVar20);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar21[4] = '\0';
    auVar21[5] = '\0';
    auVar21[6] = '\0';
    auVar21[7] = '\0';
    auVar21[0] = (char)uVar7;
    auVar21[1] = (char)(uVar7 >> 8);
    auVar21[2] = (char)(uVar7 >> 0x10);
    auVar21[3] = (char)(uVar7 >> 0x18);
    if (auVar21 != (uchar  [8])0x0) {
      FVar13 = StatPtr_STAT_VulkanRayTracingBLASMemory;
      if (StatPtr_STAT_VulkanRayTracingBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_c0,"STAT_VulkanRayTracingBLASMemory");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBLASMemory,
                            *pFVar9,L"Total BL AS Memory","STATGROUP_VulkanRayTracing",
                            "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar13;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_1b8.NameAndInfo.Number = uVar7 & 0xffffbfff | 0xb000;
        local_1f0 = FVar1;
        local_1b8.StatData.Pad = auVar21;
        local_1b8.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_1b8);
        FStatsTrace::Add(&local_1f0,-(longlong)auVar21);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar22[4] = '\0';
    auVar22[5] = '\0';
    auVar22[6] = '\0';
    auVar22[7] = '\0';
    auVar22[0] = (char)uVar7;
    auVar22[1] = (char)(uVar7 >> 8);
    auVar22[2] = (char)(uVar7 >> 0x10);
    auVar22[3] = (char)(uVar7 >> 0x18);
    if (auVar22 != (uchar  [8])0x0) {
      FVar14 = StatPtr_STAT_VulkanRayTracingStaticBLASMemory;
      if (StatPtr_STAT_VulkanRayTracingStaticBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_b8,"STAT_VulkanRayTracingStaticBLASMemory");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingStaticBLASMemory,*pFVar9,
                            L"Static BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                            L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar14;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_1a8.NameAndInfo.Number = uVar7 & 0xffffbfff | 0xb000;
        local_1e8 = FVar1;
        local_1a8.StatData.Pad = auVar22;
        local_1a8.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_1a8);
        FStatsTrace::Add(&local_1e8,-(longlong)auVar22);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    this_00 = (this->AccelerationStructureBuffer).Reference;
    if (this_00 != (FVulkanBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    local_res20 = (FName)this->Handle;
    FDebugName::ToString((FDebugName *)&this->_padding_,&local_158);
    local_88.DebugName = L"";
    if (local_158.Data.ArrayNum != 0) {
      local_88.DebugName = (wchar_t *)local_158.Data.AllocatorInstance.Data;
    }
    this_02 = (FVulkanBuffer *)0x0;
    local_88._padding_ = local_res18 & 0xffffffff;
    local_88._padding_ = CONCAT44((1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1,0x2000);
    local_88.InitialState = BVHWrite;
    local_88.InitAction = Default;
    local_88.ClassName.ComparisonIndex.Value = 0;
    local_88.ClassName.Number = 0;
    local_88.InitialData = (FResourceArrayUploadInterface *)0x0;
    local_88.OwnerName.ComparisonIndex.Value = 0;
    local_88.OwnerName.Number = 0;
    pFVar15 = ::operator_new(0x148);
    if (pFVar15 != (FVulkanBuffer *)0x0) {
      this_02 = FVulkanBuffer::FVulkanBuffer
                          (pFVar15,this->Device,&local_88,(FRHITransientHeapAllocation *)0x0);
    }
    pFVar15 = (this->AccelerationStructureBuffer).Reference;
    if (pFVar15 != this_02) {
      (this->AccelerationStructureBuffer).Reference = this_02;
      if (this_02 != (FVulkanBuffer *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_02);
      }
      if (pFVar15 != (FVulkanBuffer *)0x0) {
        FRHIResource::Release((FRHIResource *)pFVar15);
      }
    }
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar17[4] = '\0';
    auVar17[5] = '\0';
    auVar17[6] = '\0';
    auVar17[7] = '\0';
    auVar17[0] = (char)uVar7;
    auVar17[1] = (char)(uVar7 >> 8);
    auVar17[2] = (char)(uVar7 >> 0x10);
    auVar17[3] = (char)(uVar7 >> 0x18);
    if (auVar17 != (uchar  [8])0x0) {
      FVar10 = StatPtr_STAT_VulkanRayTracingUsedVideoMemory;
      if (StatPtr_STAT_VulkanRayTracingUsedVideoMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_b0,"STAT_VulkanRayTracingUsedVideoMemory");
        FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUsedVideoMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingUsedVideoMemory,*pFVar9,
                            L"Total Used Video Memory","STATGROUP_VulkanRayTracing",
                            "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar10;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_198.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
        local_1e0 = FVar1;
        local_198.StatData.Pad = auVar17;
        local_198.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_198);
        FStatsTrace::Add(&local_1e0,(long64)auVar17);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar18[4] = '\0';
    auVar18[5] = '\0';
    auVar18[6] = '\0';
    auVar18[7] = '\0';
    auVar18[0] = (char)uVar7;
    auVar18[1] = (char)(uVar7 >> 8);
    auVar18[2] = (char)(uVar7 >> 0x10);
    auVar18[3] = (char)(uVar7 >> 0x18);
    if (auVar18 != (uchar  [8])0x0) {
      FVar13 = StatPtr_STAT_VulkanRayTracingBLASMemory;
      if (StatPtr_STAT_VulkanRayTracingBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_a8,"STAT_VulkanRayTracingBLASMemory");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBLASMemory,
                            *pFVar9,L"Total BL AS Memory","STATGROUP_VulkanRayTracing",
                            "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,false,ST_int64,false,
                            false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar13;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_188.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
        local_1d8 = FVar1;
        local_188.StatData.Pad = auVar18;
        local_188.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_188);
        FStatsTrace::Add(&local_1d8,(long64)auVar18);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    uVar7 = (uint)((this->AccelerationStructureBuffer).Reference)->_padding_;
    auVar19[4] = '\0';
    auVar19[5] = '\0';
    auVar19[6] = '\0';
    auVar19[7] = '\0';
    auVar19[0] = (char)uVar7;
    auVar19[1] = (char)(uVar7 >> 8);
    auVar19[2] = (char)(uVar7 >> 0x10);
    auVar19[3] = (char)(uVar7 >> 0x18);
    if (auVar19 != (uchar  [8])0x0) {
      FVar14 = StatPtr_STAT_VulkanRayTracingStaticBLASMemory;
      if (StatPtr_STAT_VulkanRayTracingStaticBLASMemory ==
          (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)0x0) {
        pFVar9 = ::FName::FName(&local_a0,"STAT_VulkanRayTracingStaticBLASMemory");
        FVar14 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingStaticBLASMemory>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_VulkanRayTracingStaticBLASMemory,*pFVar9,
                            L"Static BL AS Memory","STATGROUP_VulkanRayTracing","STATCAT_Advanced",
                            L"Vulkan: Ray Tracing",true,false,ST_int64,false,false,MCR_Physical);
      }
      FVar1 = *(FName *)FVar14;
      FVar23 = FVar1.ComparisonIndex.Value;
      uVar7 = FVar1.Number;
      local_res8 = FVar23.Value;
      uStackX_c = uVar7;
      if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar11 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar11 == (FThreadStats *)0x0) {
          pFVar12 = FThreadStatsPool::Get();
          pFVar11 = FThreadStatsPool::GetFromPool(pFVar12);
        }
        local_178.NameAndInfo.Number = uVar7 & 0xffffafff | 0xa000;
        local_1d0 = FVar1;
        local_178.StatData.Pad = auVar19;
        local_178.NameAndInfo.Index.Value = FVar23.Value;
        FThreadStats::AddStatMessage(pFVar11,&local_178);
        FStatsTrace::Add(&local_1d0,(long64)auVar19);
        if (pFVar11->ScopeCount == 0) {
          FThreadStats::Flush(pFVar11,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar11,false,false);
        }
      }
    }
    uVar5 = local_res18;
    pFVar15 = (this->AccelerationStructureBuffer).Reference;
    pVVar2 = this->Device->Device;
    local_108._52_8_ = 0;
    local_108._20_4_ = 0;
    local_108.deviceAddress._4_4_ = 0;
    local_108.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_CREATE_INFO_KHR;
    local_108._4_8_ = 0;
    local_108._12_8_ = 0;
    uVar16 = (pFVar15->CurrentBufferAlloc).Alloc.VulkanHandle;
    local_108.buffer._0_4_ = (undefined4)uVar16;
    local_108.buffer._4_4_ = (undefined4)(uVar16 >> 0x20);
    local_108.offset._0_4_ = (pFVar15->CurrentBufferAlloc).Alloc.Offset;
    local_108.offset._4_4_ = 0;
    local_108.size._0_4_ = (undefined4)local_res18;
    local_108.size._4_4_ = (undefined4)(local_res18 >> 0x20);
    local_108.type = VK_ACCELERATION_STRUCTURE_TYPE_BOTTOM_LEVEL_KHR;
    VVar8 = (*VulkanDynamicAPI::vkCreateAccelerationStructureKHR)
                      (pVVar2,&local_108,&VulkanRHI::GAllocationCallbacks,&this->Handle);
    if (VVar8 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar8,
                 "VulkanDynamicAPI::vkCreateAccelerationStructureKHR(NativeDevice, &CreateInfo, VULKAN_CPU_ALLOCATOR, &Handle)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                 ,0x20f);
    }
    this_01 = this->Device;
    FDebugName::ToString(&this->DebugName,&local_98);
    ::FString::PrintfImpl(&local_168,L"%s (compact)");
    FVar24.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar24.Data = local_168.Data.AllocatorInstance.Data;
    }
    FVulkanDevice::VulkanSetObjectName
              (this_01,VK_OBJECT_TYPE_ACCELERATION_STRUCTURE_KHR,(ulong64)this->Handle,
               (wchar_t *)FVar24.Data);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_148.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
    local_148._4_8_ = 0;
    local_148.pNext._4_4_ = 0;
    local_148.accelerationStructure._0_4_ = SUB84(this->Handle,0);
    local_148.accelerationStructure._4_4_ = (undefined4)((ulonglong)this->Handle >> 0x20);
    uVar16 = (*VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR)(pVVar2,&local_148);
    pFVar4 = local_res10;
    this->Address = uVar16;
    AddAccelerationStructureBuildBarrier(local_res10->CommandBufferHandle);
    FVar1 = local_res20;
    VStack_110 = VK_COPY_ACCELERATION_STRUCTURE_MODE_COMPACT_KHR;
    uStack_10c = 0;
    local_130._4_8_ = 0;
    local_130._12_4_ = 0;
    local_130._16_4_ = local_res20.ComparisonIndex.Value;
    uStack_11c = local_res20.Number;
    uStack_118 = SUB84(this->Handle,0);
    uStack_114 = (undefined4)((ulonglong)this->Handle >> 0x20);
    local_130._0_4_ = VK_STRUCTURE_TYPE_COPY_ACCELERATION_STRUCTURE_INFO_KHR;
    (*VulkanDynamicAPI::vkCmdCopyAccelerationStructureKHR)
              (pFVar4->CommandBufferHandle,(VkCopyAccelerationStructureInfoKHR *)local_130);
    this->AccelerationStructureCompactedSize = uVar5;
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&this->Device->DeferredDeletionQueue,AccelerationStructure,(ulong64)FVar1);
    if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_158.Data.AllocatorInstance.Data);
    }
    if (this_00 != (FVulkanBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  return;
}

// GetAccelerationStructureAddress @ 145b684c0

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

ulong64 __thiscall
FVulkanRayTracingGeometry::GetAccelerationStructureAddress
          (FVulkanRayTracingGeometry *this,ulong64 param_1)

{
  return this->Address;
}

// ReleaseBindlessHandles @ 145b785c0

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

void __thiscall FVulkanRayTracingGeometry::ReleaseBindlessHandles(FVulkanRayTracingGeometry *this)

{
  FRHIDescriptorHandle *pFVar1;
  int iVar2;
  uint uVar3;
  FVulkanBindlessDescriptorManager *this_00;
  FRHIDescriptorHandle *pFVar4;
  undefined1 local_res8 [8];
  
  pFVar4 = (FRHIDescriptorHandle *)(this->HitGroupSystemVertexViews).AllocatorInstance.Data;
  iVar2 = (this->HitGroupSystemVertexViews).ArrayNum;
  this_00 = this->Device->BindlessDescriptorManager;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((this->HitGroupSystemVertexViews).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRHIDescriptorHandle,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    FVulkanBindlessDescriptorManager::FreeDescriptor(this_00,*pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  uVar3 = (uint)this->_padding_;
  if (-1 < (int)uVar3) {
    (this->HitGroupSystemVertexViews).ArrayNum = 0;
    if ((this->HitGroupSystemVertexViews).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar3,&(this->HitGroupSystemVertexViews).AllocatorInstance,0,
                 &(this->HitGroupSystemVertexViews).ArrayMax);
    }
    if (((this->HitGroupSystemIndexView).Index != 0xffffffff) &&
       ((this->HitGroupSystemIndexView).Type != Invalid)) {
      FVulkanBindlessDescriptorManager::FreeDescriptor(this_00,this->HitGroupSystemIndexView);
      (this->HitGroupSystemIndexView).Index = 0xffffffff;
      (this->HitGroupSystemIndexView).Type = Invalid;
      *(undefined3 *)&(this->HitGroupSystemIndexView).field_0x5 = 0;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// RemoveCompactionRequest @ 145b78fe0

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

void __thiscall FVulkanRayTracingGeometry::RemoveCompactionRequest(FVulkanRayTracingGeometry *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bHasPendingCompactionRequests != false) {
    if ((this->AccelerationStructureBuffer).Reference == (FVulkanBuffer *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("AccelerationStructureBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x1e2,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    bVar2 = FVulkanRayTracingCompactionRequestHandler::ReleaseRequest
                      (this->Device->RayTracingCompactionRequestHandler,this);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("bRequestFound",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                         ,0x1e4,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this->bHasPendingCompactionRequests = false;
  }
  return;
}

// SetupHitGroupSystemParameters @ 145b7d550

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

void __thiscall
FVulkanRayTracingGeometry::SetupHitGroupSystemParameters(FVulkanRayTracingGeometry *this)

{
  int *piVar1;
  int *piVar2;
  TArray<FVulkanHitGroupSystemParameters,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRHIDescriptorHandle,TSizedDefaultAllocator<32>_> *pTVar4;
  FVulkanBindlessDescriptorManager *this_00;
  longlong lVar5;
  code *pcVar6;
  longlong *plVar7;
  bool bVar8;
  int iVar9;
  ulonglong uVar10;
  FScriptContainerElement *pFVar11;
  longlong *plVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  int local_res10;
  uint local_res18;
  FRHIDescriptorHandle local_res20;
  undefined8 local_58;
  longlong *local_50;
  
  local_res10 = *(int *)((longlong)&this->_padding_ + 4);
  this_00 = this->Device->BindlessDescriptorManager;
  ReleaseBindlessHandles(this);
  uVar13 = (uint)this->_padding_;
  pTVar3 = &this->HitGroupSystemParameters;
  if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
  }
  piVar1 = &(this->HitGroupSystemParameters).ArrayMax;
  (this->HitGroupSystemParameters).ArrayNum = 0;
  if ((this->HitGroupSystemParameters).ArrayMax < (int)uVar13) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x98,4,uVar13,&pTVar3->AllocatorInstance,0,piVar1);
  }
  lVar5 = this->_padding_;
  uVar13 = 0;
  if (lVar5 == 0) {
    local_res20.Index = 0xffffffff;
    local_res20.Type = Invalid;
    local_res20._5_3_ = 0;
  }
  else {
    uVar13 = *(uint *)(lVar5 + 0xdc);
    FVulkanBindlessDescriptorManager::AllocateDescriptor
              (this_00,(VkDescriptorType)&local_res20,(FVulkanBuffer *)&DAT_00000007,(uint)lVar5);
  }
  this->HitGroupSystemIndexView = local_res20;
  local_res18 = (uint)this->_padding_;
  uVar10 = (ulonglong)(int)local_res18;
  plVar12 = (longlong *)this->_padding_;
  local_50 = plVar12 + uVar10 * 5;
  while( true ) {
    plVar7 = local_50;
    if ((int)this->_padding_ != (int)uVar10) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRayTracingGeometrySegment,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (plVar12 == plVar7) break;
    if (*plVar12 == 0) {
      local_58 = 0x9ffffffff;
    }
    else {
      FVulkanBindlessDescriptorManager::AllocateDescriptor
                (this_00,(VkDescriptorType)&local_58,(FVulkanBuffer *)&DAT_00000007,(uint)*plVar12);
    }
    pTVar4 = &this->HitGroupSystemVertexViews;
    pFVar11 = (pTVar4->AllocatorInstance).Data;
    if ((pFVar11 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar11 + (longlong)(this->HitGroupSystemVertexViews).ArrayMax * 8)) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar8) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    iVar9 = (this->HitGroupSystemVertexViews).ArrayNum;
    piVar2 = &(this->HitGroupSystemVertexViews).ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x408,&pTVar4->AllocatorInstance,piVar2);
    }
    (this->HitGroupSystemVertexViews).ArrayNum = iVar9 + 1;
    *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 8) = local_58;
    iVar9 = (this->HitGroupSystemParameters).ArrayNum;
    if (iVar9 == *piVar1) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x498,&pTVar3->AllocatorInstance,piVar1);
    }
    (this->HitGroupSystemParameters).ArrayNum = iVar9 + 1;
    pFVar11 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x98;
    *(undefined8 *)pFVar11 = 0;
    *(undefined8 *)(pFVar11 + 8) = 0;
    *(undefined8 *)(pFVar11 + 0x10) = 0;
    *(undefined8 *)(pFVar11 + 0x18) = 0;
    *(undefined8 *)(pFVar11 + 0x20) = 0;
    *(undefined8 *)(pFVar11 + 0x28) = 0;
    *(undefined8 *)(pFVar11 + 0x30) = 0;
    *(undefined8 *)(pFVar11 + 0x38) = 0;
    *(undefined8 *)(pFVar11 + 0x40) = 0;
    *(undefined8 *)(pFVar11 + 0x48) = 0;
    *(undefined8 *)(pFVar11 + 0x50) = 0;
    *(undefined8 *)(pFVar11 + 0x58) = 0;
    *(undefined8 *)(pFVar11 + 0x60) = 0;
    *(undefined8 *)(pFVar11 + 0x68) = 0;
    *(undefined8 *)(pFVar11 + 0x70) = 0;
    *(undefined8 *)(pFVar11 + 0x78) = 0;
    *(undefined8 *)(pFVar11 + 0x80) = 0;
    *(undefined8 *)(pFVar11 + 0x88) = 0;
    *(undefined8 *)(pFVar11 + 0x90) = 0;
    *(uint *)pFVar11 = (uint)*(byte *)(plVar12 + 2) << 8 | uVar13 & 0xff;
    *(uint *)(pFVar11 + 0x14) = (uint)local_58;
    if ((local_res10 == 0) && (lVar5 != 0)) {
      *(uint *)(pFVar11 + 0x10) = (this->HitGroupSystemIndexView).Index;
      *(uint *)(pFVar11 + 4) = uVar13 * (int)plVar12[3] * 3 + (int)this->_padding_;
      *(uint *)(pFVar11 + 8) = *(uint *)(plVar12 + 3);
    }
    uVar10 = (ulonglong)local_res18;
    plVar12 = plVar12 + 5;
  }
  return;
}

// SetupInlineGeometryParameters @ 145b7d860

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
FVulkanRayTracingGeometry::SetupInlineGeometryParameters
          (FVulkanRayTracingGeometry *this,uint param_1,FVulkanRayTracingGeometryParameters *param_2
          )

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ulong64 uVar8;
  
  lVar1 = this->_padding_;
  lVar4 = this->_padding_;
  if (lVar1 == 0) {
    iVar7 = 0;
    uVar8 = 0;
  }
  else {
    iVar7 = *(int *)(lVar1 + 0xdc);
    uVar8 = *(ulong64 *)(lVar1 + 0x130);
  }
  uVar6 = 0;
  if ((int)param_1 < (int)this->_padding_) {
    uVar6 = ~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(this->_padding_ + (longlong)(int)param_1 * 0x28);
  lVar1 = this->_padding_ + (longlong)(int)param_1 * 0x28;
  if (lVar2 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("VertexBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x26d,L"All ray tracing geometry segments must have a valid vertex buffer");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar2 = *(longlong *)(lVar2 + 0x130);
  (param_2->field0_0x0).Config.IndexStride = (byte)iVar7;
  (param_2->field0_0x0).Config.VertexStride = *(byte *)(lVar1 + 0x10);
  if (iVar7 == 0) {
    uVar8 = 0;
  }
  else {
    param_2->IndexBufferOffsetInBytes = (int)lVar4 + iVar7 * *(int *)(lVar1 + 0x18) * 3;
  }
  param_2->IndexBuffer = uVar8;
  param_2->VertexBuffer = (ulonglong)*(uint *)(lVar1 + 0xc) + lVar2;
  return;
}

// Swap @ 145b7f5c0

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
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FVulkanRayTracingGeometry::Swap(FVulkanRayTracingGeometry *this,FVulkanRayTracingGeometry *param_1)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  VkAccelerationStructureKHR_T *pVVar5;
  ulong64 uVar6;
  FVulkanBuffer *this_00;
  FVulkanBuffer *this_01;
  FRHIResource *this_02;
  FRHIResource *this_03;
  FRayTracingGeometrySegment *pFVar7;
  longlong lVar8;
  
  pVVar5 = this->Handle;
  this->Handle = param_1->Handle;
  param_1->Handle = pVVar5;
  uVar6 = this->Address;
  this->Address = param_1->Address;
  param_1->Address = uVar6;
  uVar6 = this->AccelerationStructureCompactedSize;
  this->AccelerationStructureCompactedSize = param_1->AccelerationStructureCompactedSize;
  param_1->AccelerationStructureCompactedSize = uVar6;
  this_00 = (param_1->AccelerationStructureBuffer).Reference;
  this_01 = (this->AccelerationStructureBuffer).Reference;
  if (this_01 != this_00) {
    (this->AccelerationStructureBuffer).Reference = this_00;
    if (this_00 != (FVulkanBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (FVulkanBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  this_02 = (FRHIResource *)param_1->_padding_;
  this_03 = (FRHIResource *)this->_padding_;
  if (this_03 != this_02) {
    this->_padding_ = (longlong)this_02;
    if (this_02 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(this_02);
    }
    if (this_03 != (FRHIResource *)0x0) {
      FRHIResource::Release(this_03);
    }
  }
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  plVar2 = &this->_padding_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) =
       *(undefined4 *)((longlong)&param_1->_padding_ + 4);
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined1 *)((longlong)&this->_padding_ + 4) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 4);
  *(undefined1 *)((longlong)&this->_padding_ + 5) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 5);
  *(undefined1 *)((longlong)&this->_padding_ + 6) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 6);
  *(undefined1 *)((longlong)&this->_padding_ + 7) =
       *(undefined1 *)((longlong)&param_1->_padding_ + 7);
  *(char *)&this->_padding_ = (char)param_1->_padding_;
  if (plVar2 != &param_1->_padding_) {
    DestructItems<FRayTracingGeometrySegment,int>
              ((FRayTracingGeometrySegment *)*plVar2,(int)this->_padding_);
    iVar3 = (int)param_1->_padding_;
    piVar1 = (int *)((longlong)&this->_padding_ + 4);
    pFVar7 = (FRayTracingGeometrySegment *)param_1->_padding_;
    iVar4 = *piVar1;
    *(int *)&this->_padding_ = iVar3;
    if ((iVar3 == 0) && (iVar4 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,iVar3,iVar4,(ForAnyElementType *)plVar2,iVar3,piVar1);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                ((void *)*plVar2,pFVar7,iVar3);
    }
  }
  this->_padding_ = param_1->_padding_;
  lVar8 = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = lVar8;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  this->_padding_ = param_1->_padding_;
  *(int *)&this->_padding_ = (int)param_1->_padding_;
  *(undefined8 *)((longlong)&this->_padding_ + 4) =
       *(undefined8 *)((longlong)&param_1->_padding_ + 4);
  return;
}

// operator() @ 1504d8e30

bool __thiscall
`FVulkanRayTracingGeometry::CompactAccelerationStructure'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1248720982072361454>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1248720982072361454>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

