// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// ~FVulkanRayTracingPipelineLibraryCache @ 145b4fcd0

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
FVulkanRayTracingPipelineLibraryCache::~FVulkanRayTracingPipelineLibraryCache
          (FVulkanRayTracingPipelineLibraryCache *this)

{
  undefined1 *puVar1;
  TMap<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>_>
  *this_00;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  undefined1 *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined1 local_res8 [8];
  int local_res10;
  undefined4 uStack_6c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar3 = *(int *)&(this->PipelineLibraryMap).field_0x28;
  puVar1 = &(this->PipelineLibraryMap).field_0x10;
  iVar12 = 0;
  this_00 = &this->PipelineLibraryMap;
  iVar14 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar3 != 0) {
    puVar15 = *(uint **)&(this->PipelineLibraryMap).field_0x20;
    if (puVar15 == (uint *)0x0) {
      puVar15 = (uint *)puVar1;
    }
    uVar11 = *puVar15;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar9 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145b4fd6d;
      uVar11 = puVar15[lVar10 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res10 = (int)lVar10;
    iVar9 = local_res10 + -1 + iVar14;
    if (iVar3 < iVar9) {
      iVar9 = iVar3;
    }
  }
LAB_145b4fd6d:
  uVar11 = *(uint *)&(this->PipelineLibraryMap).field_0x28;
  uVar16 = uVar11 & 0xffffffe0;
  TStack_60._padding_ = CONCAT44(uVar8,iVar12);
  TStack_60.CurrentBitIndex = iVar9;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_60._28_4_ = iVar9;
  TStack_60.BaseBitIndex = iVar14;
  uStack_40 = CONCAT44(uStack_6c,
                       *(int *)&(this->PipelineLibraryMap).field_0x8 -
                       *(int *)&(this->PipelineLibraryMap).field_0x34);
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->PipelineLibraryMap).field_0x28;
  if (uVar11 != uVar8) {
    puVar13 = *(undefined1 **)&(this->PipelineLibraryMap).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar16 = uVar16 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_145b4fe70;
      uVar11 = *(uint *)(puVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar11) {
      uVar11 = uVar8;
    }
  }
LAB_145b4fe70:
  while( true ) {
    if (*(int *)&(this->PipelineLibraryMap).field_0x8 -
        *(int *)&(this->PipelineLibraryMap).field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar10 = (longlong)TStack_60.CurrentBitIndex;
    if ((TStack_60.CurrentBitIndex == uVar11) &&
       (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar4 = *(longlong *)&this_00->field_0x0;
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,(VkPipeline_T *)**(undefined8 **)(lVar4 + 0x18 + lVar10 * 0x28),
               &VulkanRHI::GAllocationCallbacks);
    **(undefined8 **)(lVar4 + lVar10 * 0x28 + 0x18) = 0;
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  }
  bVar7 = 1 < *(int *)&(this->PipelineLibraryMap).field_0x48;
  if (!bVar7) {
    TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
                      *)this_00);
  }
  puVar1 = &(this->PipelineLibraryMap).field_0xc;
  *(undefined4 *)&(this->PipelineLibraryMap).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->PipelineLibraryMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->PipelineLibraryMap).field_0x34 = 0;
  iVar3 = *(int *)&(this->PipelineLibraryMap).field_0x2c;
  *(undefined4 *)&(this->PipelineLibraryMap).field_0x28 = 0;
  if ((iVar3 < 0) || (0x80 < iVar3)) {
    *(undefined4 *)&(this->PipelineLibraryMap).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->PipelineLibraryMap).field_0x10,0);
  }
  if (bVar7) {
    *(undefined4 *)&(this->PipelineLibraryMap).field_0x48 = 1;
    TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
              *)this_00);
  }
  *(undefined4 *)&(this->PipelineLibraryMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->PipelineLibraryMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this_00);
                    /* WARNING: Could not recover jumptable at 0x000145b4ff93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PipelineLibraryMapCS);
  return;
}

// operator() @ 145b535e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

void __thiscall
`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  FVulkanRayTracingShader *pFVar2;
  undefined8 uVar3;
  VkResult VVar4;
  TRefCountPtr<FVulkanShaderModule> TVar5;
  int *piVar6;
  uint uVar7;
  longlong lVar8;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined8 *local_188;
  VkRayTracingShaderGroupCreateInfoKHR local_180;
  VkRayTracingPipelineInterfaceCreateInfoKHR local_150;
  VkRayTracingPipelineCreateInfoKHR local_138;
  VkPipelineShaderStageCreateInfo local_c8;
  VkStructureType local_98;
  undefined8 local_94 [2];
  VkShaderStageFlagBits local_84;
  undefined1 auStack_80 [8];
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c [13];
  char local_38 [24];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStack_1b8;
  local_198 = *(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0x1ac);
  TCString<char>::SnprintfImpl(local_38,0x18,"main_%0.8x_%0.8x");
  local_c8.pName._4_4_ = 0;
  local_c8.pSpecializationInfo._0_4_ = 0;
  local_c8.pSpecializationInfo._4_4_ = 0;
  local_c8.stage = 0;
  local_c8.pName._0_4_ = 0;
  local_c8.module._0_4_ = (undefined4)*(undefined8 *)((longlong)this + 0x20);
  local_c8.module._4_4_ = (undefined4)((ulonglong)*(undefined8 *)((longlong)this + 0x20) >> 0x20);
  local_c8.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  local_c8._4_8_ = 0;
  local_c8._12_8_ = 0;
  local_c8.stage =
       UEFrequencyToVKStageBit(*(EShaderFrequency *)(*(longlong *)((longlong)this + 0x10) + 0x104));
  pFVar2 = *(FVulkanRayTracingShader **)((longlong)this + 0x10);
  lVar8 = 1;
  local_c8.pName = local_38;
  local_180.sType = VK_STRUCTURE_TYPE_RAY_TRACING_SHADER_GROUP_CREATE_INFO_KHR;
  local_180._36_8_ = 0;
  local_180.pShaderGroupCaptureReplayHandle._4_4_ = 0;
  local_180._4_8_ = 0;
  local_180.pNext._4_4_ = 0;
  local_180.anyHitShader = 0;
  local_180.intersectionShader = 0;
  if (*(char *)((longlong)&pFVar2->_padding_ + 4) == '\b') {
    local_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_TRIANGLES_HIT_GROUP_KHR;
    local_180.generalShader = 0xffffffff;
    local_180.closestHitShader = 0;
    if (*(char *)((longlong)&pFVar2->_padding_ + 1) == '\0') {
      local_180.anyHitShader = 0xffffffff;
    }
    else {
      local_98 = 0x12;
      uStack_74 = 0;
      uStack_70 = 0;
      local_94[0] = 0;
      local_94[1] = 0;
      local_6c[0] = 0;
      local_84 = 0;
      auStack_80._0_4_ = 0;
      auStack_80._4_4_ = 0;
      uStack_78 = 0;
      TVar5 = FVulkanRayTracingShader::GetOrCreateHandle(pFVar2,(uint)&local_188);
      uVar3 = *(undefined8 *)((TVar5.Reference)->_padding_ + 0x10);
      auStack_80._0_4_ = (undefined4)uVar3;
      auStack_80._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (local_188 != (undefined8 *)0x0) {
        piVar6 = (int *)(local_188 + 1);
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (((iVar1 == 1) && (piVar6 != (int *)0x0)) && (local_188 != (undefined8 *)0x0)) {
          (**(code **)*local_188)(local_188,1);
        }
      }
      local_180.anyHitShader = 1;
      lVar8 = 2;
      local_84 = 0x200;
      uStack_78 = 0x510ca7a0;
      uStack_74 = 1;
    }
    uVar7 = (uint)lVar8;
    pFVar2 = *(FVulkanRayTracingShader **)((longlong)this + 0x10);
    if (*(char *)((longlong)&pFVar2->_padding_ + 2) == '\0') {
      local_180.intersectionShader = 0xffffffff;
      local_138.stageCount = uVar7;
    }
    else {
      (&local_c8)[lVar8].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
      *(undefined8 *)&(&local_c8)[lVar8].field_0x4 = 0;
      *(undefined8 *)((longlong)&(&local_c8)[lVar8].pNext + 4) = 0;
      *(undefined8 *)&(&local_c8)[lVar8].stage = 0;
      *(undefined8 *)((longlong)&(&local_c8)[lVar8].module + 4) = 0;
      *(undefined8 *)((longlong)&(&local_c8)[lVar8].pName + 4) = 0;
      *(undefined4 *)((longlong)&(&local_c8)[lVar8].pSpecializationInfo + 4) = 0;
      TVar5 = FVulkanRayTracingShader::GetOrCreateHandle(pFVar2,(uint)&local_188);
      (&local_c8)[lVar8].module = *(VkShaderModule_T **)((TVar5.Reference)->_padding_ + 0x10);
      if (local_188 != (undefined8 *)0x0) {
        piVar6 = (int *)(local_188 + 1);
        LOCK();
        iVar1 = *piVar6;
        *piVar6 = *piVar6 + -1;
        UNLOCK();
        if (((iVar1 == 1) && (piVar6 != (int *)0x0)) && (local_188 != (undefined8 *)0x0)) {
          (**(code **)*local_188)(local_188,1);
        }
      }
      (&local_c8)[lVar8].stage = VK_SHADER_STAGE_INTERSECTION_BIT_KHR;
      (&local_c8)[lVar8].pName = "main_00000000_00000000";
      local_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_PROCEDURAL_HIT_GROUP_KHR;
      local_138.stageCount = uVar7 + 1;
      local_180.intersectionShader = uVar7;
    }
  }
  else {
    local_180.type = VK_RAY_TRACING_SHADER_GROUP_TYPE_GENERAL_KHR;
    local_180.generalShader = 0;
    local_180.closestHitShader = 0xffffffff;
    local_180.anyHitShader = 0xffffffff;
    local_180.intersectionShader = 0xffffffff;
    local_138.stageCount = 1;
  }
  local_150.maxPipelineRayHitAttributeSize = *(uint *)((longlong)this + 0x28);
  local_150.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_INTERFACE_CREATE_INFO_KHR;
  local_138.pDynamicState._0_4_ = 0;
  local_138.pDynamicState._4_4_ = 0;
  local_138.sType = VK_STRUCTURE_TYPE_RAY_TRACING_PIPELINE_CREATE_INFO_KHR;
  local_138._36_4_ = 0;
  local_150._4_8_ = 0;
  local_150._12_8_ = (ulonglong)*(uint *)((longlong)this + 0x2c) << 0x20;
  local_138._100_4_ = 0;
  local_138.pLibraryInterface = &local_150;
  local_138._52_8_ = 0;
  local_138.pLibraryInfo._4_4_ = 0;
  local_138.pStages = &local_c8;
  local_138.pGroups = &local_180;
  local_138._4_8_ = 0;
  local_138.basePipelineHandle._0_4_ = 0;
  local_138._92_8_ = 0;
  local_138.groupCount = 1;
  local_138.maxPipelineRayRecursionDepth = 1;
  uVar3 = *(undefined8 *)(*(longlong *)(**(longlong **)this + 0x728) + 0x3d0);
  local_138.layout._0_4_ = (undefined4)uVar3;
  local_138.layout._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_138._12_8_ = 0x2000080000000000;
  VVar4 = FVulkanPipelineStateCacheManager::CreateRayTracingPipeline
                    (*(FVulkanPipelineStateCacheManager **)(**(longlong **)this + 0x2738),&local_138
                     ,*(bool *)((longlong)this + 0x30),*(VkPipeline_T ***)((longlong)this + 8));
  if ((*(char *)((longlong)this + 0x30) == '\0') && ((int)VVar4 < 0)) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
               ,0x5c6);
  }
  return;
}

// GetOrAddLibrary @ 145b69ad0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

FPipelineLibrary * __thiscall
FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary
          (FVulkanRayTracingPipelineLibraryCache *this,FVulkanRayTracingShader *param_1,
          FRayTracingPipelineStateInitializer *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  longlong lVar3;
  atomic<unsigned_int> aVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FTaskBase *pFVar8;
  TRefCountPtr<FVulkanShaderModule> TVar9;
  FPipelineLibrary *pFVar10;
  FPipelineLibrary *pFVar11;
  FName *pFVar12;
  TStatIdData *pTVar13;
  FTaskBase *this_00;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  undefined8 *puVar15;
  longlong *plVar16;
  undefined1 *puVar17;
  int iVar18;
  TPairInitializer<FVulkanRayTracingPipelineLibraryCache::FKey_const_&,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*_const_&>
  local_res8;
  ETaskPriority local_res20 [8];
  FPipelineLibrary *local_d8;
  longlong local_d0;
  longlong lStack_c8;
  int local_c0;
  int iStack_bc;
  code *local_b8;
  longlong local_a8;
  undefined8 uStack_a0;
  FPipe *local_98;
  longlong *local_90;
  longlong *local_88;
  FPipelineLibrary **local_80;
  FVulkanRayTracingPipelineLibraryCache *local_78;
  FPipelineLibrary *pFStack_70;
  FVulkanRayTracingShader *local_68;
  longlong lStack_60;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined7 uStack_47;
  longlong local_40;
  
  lpCriticalSection = &this->PipelineLibraryMapCS;
  local_res8.Value = (FPipelineLibrary **)param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_d0 = param_1->_padding_;
  iVar5 = *(int *)((longlong)&param_2->_padding_ + 4);
  iVar6 = (int)param_2->_padding_;
  TVar9 = FVulkanRayTracingShader::GetOrCreateHandle(param_1,(uint)&local_res8);
  puVar15 = (undefined8 *)CONCAT71(local_res8.Key._1_7_,(EExtendedTaskPriority)local_res8.Key);
  lStack_c8 = *(longlong *)((TVar9.Reference)->_padding_ + 0x10);
  if (puVar15 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar15 + 1);
    LOCK();
    iVar18 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar18 == 1) {
      if (piVar1 == (int *)0x0) {
        puVar15 = (undefined8 *)0x0;
      }
      if (puVar15 != (undefined8 *)0x0) {
        (**(code **)*puVar15)(puVar15,1);
      }
    }
  }
  local_c0 = iVar6;
  iStack_bc = iVar5;
  if (*(int *)&(this->PipelineLibraryMap).field_0x8 !=
      *(int *)&(this->PipelineLibraryMap).field_0x34) {
    puVar17 = *(undefined1 **)&(this->PipelineLibraryMap).field_0x40;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = &(this->PipelineLibraryMap).field_0x38;
    }
    iVar18 = *(int *)(puVar17 +
                     (ulonglong)
                     (*(int *)&(this->PipelineLibraryMap).field_0x48 - 1U & (uint)local_d0) * 4);
    if (iVar18 != -1) {
      lVar7 = *(longlong *)&(this->PipelineLibraryMap).field_0x0;
      do {
        lVar3 = lVar7 + (longlong)iVar18 * 0x28;
        if ((((*(longlong *)(lVar7 + (longlong)iVar18 * 0x28) == local_d0) &&
             (*(longlong *)(lVar3 + 8) == lStack_c8)) && (*(int *)(lVar3 + 0x10) == iVar6)) &&
           (*(int *)(lVar3 + 0x14) == iVar5)) {
          if (iVar18 != -1) {
            puVar15 = (undefined8 *)(lVar3 + 0x18);
            if (lVar3 == 0) {
              puVar15 = (undefined8 *)0x0;
            }
            if (puVar15 != (undefined8 *)0x0) {
              pFVar11 = (FPipelineLibrary *)*puVar15;
              goto LAB_145b69eb9;
            }
          }
          break;
        }
        iVar18 = *(int *)(lVar3 + 0x20);
      } while (iVar18 != -1);
    }
  }
  pFVar11 = (FPipelineLibrary *)0x0;
  pFVar10 = ::operator_new(0x10);
  if (pFVar10 != (FPipelineLibrary *)0x0) {
    pFVar10->PipelineHandle = (VkPipeline_T *)0x0;
    (pFVar10->GraphEvent).Reference = (FBaseGraphTask *)0x0;
    pFVar11 = pFVar10;
  }
  uStack_50 = CONCAT44(iStack_bc,local_c0);
  local_68 = (FVulkanRayTracingShader *)local_res8.Value;
  local_48 = param_2->bPartial;
  lStack_60 = local_d0;
  lStack_58 = lStack_c8;
  local_d8 = pFVar11;
  local_78 = this;
  pFStack_70 = pFVar11;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_FExecuteRHIThreadTask = (TStatIdData *)0x0;
    pFVar12 = ::FName::FName((FName *)&local_res8,"FExecuteRHIThreadTask");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                ::__l2::StatPtr_FExecuteRHIThreadTask,*pFVar12,L"FExecuteRHIThreadTask",
               "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true,ST_int64,
               true,false,MCR_Invalid);
    _Init_thread_footer(&`public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar13 = _StatPtr_FExecuteRHIThreadTask;
  if (_StatPtr_FExecuteRHIThreadTask == (TStatIdData *)0x0) {
    pFVar12 = ::FName::FName((FName *)&local_res8,"FExecuteRHIThreadTask");
    pTVar13 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`public:___cdecl_`public:_struct_FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary*___ptr64___cdecl_FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary(FVulkanRayTracingShader*___ptr64,FRayTracingPipelineStateInitializer_const&___ptr64)___ptr64'::`2'::<lambda_2>::operator()(void)const___ptr64'
                          ::__l2::StatPtr_FExecuteRHIThreadTask,*pFVar12,L"FExecuteRHIThreadTask",
                         "STATGROUP_TaskGraphTasks","STATCAT_Advanced",L"Task Graph Tasks",true,true
                         ,ST_int64,true,false,MCR_Invalid);
  }
  local_b8 = (code *)0x0;
  local_90 = FMemory::Malloc(0x40,8);
  *local_90 = (longlong)
              &
              ___7__TFunction_OwnedObject_V<lambda_1>__1__GetOrAddLibrary_FVulkanRayTracingPipelineLibraryCache__QEAAPEAUFPipelineLibrary_3_PEAVFVulkanRayTracingShader__AEBVFRayTracingPipelineStateInitializer___Z__00_00_Function_Private_Core_UE__6B_
  ;
  local_90[1] = (longlong)local_78;
  local_90[2] = (longlong)pFStack_70;
  local_90[3] = (longlong)local_68;
  local_90[4] = lStack_60;
  local_90[5] = lStack_58;
  local_90[6] = uStack_50;
  local_90[7] = CONCAT71(uStack_47,local_48);
  if (local_90 + 1 != (undefined8 *)0x0) {
    local_b8 = UE::Core::Private::Function::
               TFunctionRefCaller<`FVulkanRayTracingPipelineLibraryCache::GetOrAddLibrary'::__l2::<lambda_1>,void>
               ::Call;
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,0x10);
  if (this_00 == (FTaskBase *)0x0) {
    this_00 = (FTaskBase *)0x0;
  }
  else {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)this_00,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    this_00->_padding_ = (longlong)&___7__TGraphTask_V__TFunctionGraphTaskImpl___A6AXXZ_0A_____6B_;
  }
  this_00[1]._padding_ = (longlong)pTVar13;
  this_00[1]._padding_ = (longlong)local_b8;
  *(longlong **)&this_00[1].StateChangeEvent = local_90;
  local_90 = (longlong *)0x0;
  this_00[1]._padding_ = local_a8;
  this_00[1].RefCount = (atomic<unsigned_int>)(undefined4)uStack_a0;
  this_00[1].NumLocks = (atomic<unsigned_int>)uStack_a0._4_4_;
  this_00[1].Pipe = local_98;
  if (this_00[1]._padding_ != 0) {
    local_b8 = (code *)0x0;
  }
  this_00[1].ExecutingThreadId = (atomic<unsigned_int>)0xff;
  UE::Tasks::Private::TranslatePriority
            (AnyNormalThreadNormalTask,local_res20,(EExtendedTaskPriority *)&local_res8);
  FBaseGraphTask::Init
            ((FBaseGraphTask *)this_00,L"GraphTask",local_res20[0],
             (EExtendedTaskPriority)local_res8.Key,None);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x130);
  if (local_b8 != (code *)0x0) {
    plVar16 = &local_a8;
    if (local_90 != (longlong *)0x0) {
      plVar16 = local_90;
    }
    (**(code **)(*plVar16 + 0x10))();
  }
  pTVar14 = &local_d8->GraphEvent;
  if (pTVar14 == (TRefCountPtr<FBaseGraphTask> *)&local_40) {
    if (this_00 == (FTaskBase *)0x0) goto LAB_145b69e8f;
    LOCK();
    paVar2 = &this_00->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_145b69e8f;
    puVar15 = (undefined8 *)this_00->_padding_;
  }
  else {
    pFVar8 = (FTaskBase *)pTVar14->Reference;
    pTVar14->Reference = (FBaseGraphTask *)this_00;
    if (pFVar8 == (FTaskBase *)0x0) goto LAB_145b69e8f;
    LOCK();
    paVar2 = &pFVar8->RefCount;
    aVar4 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if (aVar4 != (atomic<unsigned_int>)0x1) goto LAB_145b69e8f;
    puVar15 = (undefined8 *)pFVar8->_padding_;
    this_00 = pFVar8;
  }
  (*(code *)*puVar15)(this_00,1);
LAB_145b69e8f:
  local_88 = &local_d0;
  local_80 = &local_d8;
  TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FVulkanRayTracingPipelineLibraryCache::FKey_const_&,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*_const_&>_>
            ((TSet<TTuple<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*>,TDefaultMapHashableKeyFuncs<FVulkanRayTracingPipelineLibraryCache::FKey,FVulkanRayTracingPipelineLibraryCache::FPipelineLibrary_*,0>,FDefaultSetAllocator>
              *)&this->PipelineLibraryMap,&local_res8,(bool *)&local_88);
  pFVar11 = local_d8;
LAB_145b69eb9:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar11;
}

