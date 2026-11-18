// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 37

// FVulkanPipelineStateCacheManager @ 145b46a00

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

FVulkanPipelineStateCacheManager * __thiscall
FVulkanPipelineStateCacheManager::FVulkanPipelineStateCacheManager
          (FVulkanPipelineStateCacheManager *this,FVulkanDevice *param_1)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  this->VertexInputPipelineLibraryVS = (VkPipeline_T *)0x0;
  this->VertexInputPipelineLibraryMS = (VkPipeline_T *)0x0;
  this->EmptyFragmentStageLibrary = (VkPipeline_T *)0x0;
  *(undefined8 *)&this->FragmentOutputStatePipelineLibraries = 0;
  *(undefined8 *)&(this->FragmentOutputStatePipelineLibraries).field_0x8 = 0;
  *(undefined8 *)&(this->FragmentOutputStatePipelineLibraries).field_0x20 = 0;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x28 = 0;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x2c = 0x80;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x34 = 0;
  *(undefined8 *)&(this->FragmentOutputStatePipelineLibraries).field_0x40 = 0;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FragmentOutputStateCS,4000);
  (this->CompiledPSOCacheTopFolderPath).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->CompiledPSOCacheTopFolderPath).Data.ArrayNum = 0;
  (this->CompiledPSOCacheTopFolderPath).Data.ArrayMax = 0;
  (this->CompiledPSOCacheFolderName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CompiledPSOCacheFolderName).Data.ArrayNum = 0;
  (this->CompiledPSOCacheFolderName).Data.ArrayMax = 0;
  (this->OnShaderPipelineCacheOpenedDelegate).ID = 0;
  (this->OnShaderPipelineCachePrecompilationCompleteDelegate).ID = 0;
  this->Device = param_1;
  this->bEvictImmediately = false;
  (this->ComputePipelineLock).Mutex.Mutex.Ptr = (void *)0x0;
  *(undefined8 *)&this->ComputePipelineEntries = 0;
  *(undefined8 *)&(this->ComputePipelineEntries).field_0x8 = 0;
  *(undefined8 *)&(this->ComputePipelineEntries).field_0x20 = 0;
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x28 = 0;
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x2c = 0x80;
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x34 = 0;
  *(undefined8 *)&(this->ComputePipelineEntries).field_0x40 = 0;
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x48 = 0;
  (this->GlobalPSOCache).PipelineCache = (VkPipelineCache_T *)0x0;
  (this->GlobalPSOCache).PipelineCacheLock.Mutex.Mutex.Ptr = (void *)0x0;
  (this->CurrentPrecompilingPSOCache).PipelineCache = (VkPipelineCache_T *)0x0;
  (this->CurrentPrecompilingPSOCache).PipelineCacheLock.Mutex.Mutex.Ptr = (void *)0x0;
  this->bPrecompilingCacheLoadedFromFile = false;
  (this->CurrentPrecompilingPSOCacheGuid).A = 0;
  (this->CurrentPrecompilingPSOCacheGuid).B = 0;
  (this->CurrentPrecompilingPSOCacheGuid).C = 0;
  (this->CurrentPrecompilingPSOCacheGuid).D = 0;
  *(undefined8 *)&(this->CompiledPSOCaches).Elements = 0;
  *(undefined8 *)&(this->CompiledPSOCaches).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->CompiledPSOCaches).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->CompiledPSOCaches).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->CompiledPSOCaches).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->CompiledPSOCaches).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->CompiledPSOCaches).Elements.field_0x34 = 0;
  (this->CompiledPSOCaches).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->CompiledPSOCaches).HashSize = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LayoutMapCS,4000);
  *(undefined8 *)&this->LayoutMap = 0;
  *(undefined8 *)&(this->LayoutMap).field_0x8 = 0;
  *(undefined8 *)&(this->LayoutMap).field_0x20 = 0;
  *(undefined4 *)&(this->LayoutMap).field_0x28 = 0;
  *(undefined4 *)&(this->LayoutMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->LayoutMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LayoutMap).field_0x34 = 0;
  *(undefined8 *)&(this->LayoutMap).field_0x40 = 0;
  *(undefined4 *)&(this->LayoutMap).field_0x48 = 0;
  *(undefined8 *)&this->DSetLayoutMap = 0;
  *(undefined8 *)&(this->DSetLayoutMap).field_0x8 = 0;
  *(undefined8 *)&(this->DSetLayoutMap).field_0x20 = 0;
  *(undefined4 *)&(this->DSetLayoutMap).field_0x28 = 0;
  *(undefined4 *)&(this->DSetLayoutMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->DSetLayoutMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->DSetLayoutMap).field_0x34 = 0;
  *(undefined8 *)&(this->DSetLayoutMap).field_0x40 = 0;
  *(undefined4 *)&(this->DSetLayoutMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GraphicsPSOLockedCS,4000);
  *(undefined8 *)&this->GraphicsPSOLockedMap = 0;
  *(undefined8 *)&(this->GraphicsPSOLockedMap).field_0x8 = 0;
  *(undefined8 *)&(this->GraphicsPSOLockedMap).field_0x20 = 0;
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x28 = 0;
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x34 = 0;
  *(undefined8 *)&(this->GraphicsPSOLockedMap).field_0x40 = 0;
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x48 = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->LRUCS,4000);
  (this->LRU).HeadNode = (TDoubleLinkedListNode *)0x0;
  (this->LRU)._padding_ = (longlong)&___7__TDoubleLinkedList_PEAVFVulkanGraphicsPipelineState____6B_
  ;
  (this->LRU).TailNode = (TDoubleLinkedListNode *)0x0;
  (this->LRU).ListSize = 0;
  this->LRUUsedPipelineMax = 0;
  *(undefined8 *)&this->LRU2SizeList = 0;
  *(undefined8 *)&(this->LRU2SizeList).field_0x8 = 0;
  *(undefined8 *)&(this->LRU2SizeList).field_0x20 = 0;
  this->LRUUsedPipelineSize = 0;
  this->LRUUsedPipelineCount = 0;
  *(undefined4 *)&(this->LRU2SizeList).field_0x28 = 0;
  *(undefined4 *)&(this->LRU2SizeList).field_0x2c = 0x80;
  *(undefined4 *)&(this->LRU2SizeList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LRU2SizeList).field_0x34 = 0;
  *(undefined8 *)&(this->LRU2SizeList).field_0x40 = 0;
  *(undefined4 *)&(this->LRU2SizeList).field_0x48 = 0;
  this->bUseLRU = true;
  pTVar1 = CVarEnableLRU.Ref;
  bVar2 = IsInParallelGameThread();
  if (bVar2) {
LAB_145b46d02:
    lVar3 = 0;
  }
  else {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (bVar2) goto LAB_145b46d02;
  }
  this->bUseLRU = *(int *)((longlong)pTVar1->ShadowedValue + lVar3) != 0;
  pTVar1 = CVarLRUPipelineCapacity.Ref;
  bVar2 = IsInParallelGameThread();
  if (!bVar2) {
    bVar2 = IsInGameThread();
    lVar3 = 4;
    if (!bVar2) goto LAB_145b46d2e;
  }
  lVar3 = 0;
LAB_145b46d2e:
  this->LRUUsedPipelineMax = *(uint *)((longlong)pTVar1->ShadowedValue + lVar3);
  if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
      0x1e4000001000000) {
    bVar2 = FVulkanDevice::SupportsBindless(param_1);
    if (bVar2) {
      CreateVertexInputLibraries(this);
      CreateEmptyFragmentStageLibrary(this);
    }
  }
  return this;
}

// ~FVulkanPipelineStateCacheManager @ 145b4e470

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
FVulkanPipelineStateCacheManager::~FVulkanPipelineStateCacheManager
          (FVulkanPipelineStateCacheManager *this)

{
  TMap<unsigned_int,VkPipeline_T_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>_>
  *pTVar1;
  TMap<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>_>
  *pTVar2;
  ulonglong uVar3;
  int iVar4;
  FDelegateHandle FVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  VkPipelineCache_T *pVVar8;
  void *pvVar9;
  ForElementType<FSetElementId> FVar10;
  FScriptContainerElement *pFVar11;
  code *pcVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 uVar14;
  TMap<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>_>
  *pTVar15;
  bool bVar16;
  BOOLEAN BVar17;
  uint uVar18;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  uint *puVar25;
  undefined4 *puVar26;
  undefined1 *puVar27;
  uint uVar28;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  int local_res20;
  int local_1f8;
  uint uStack_1f4;
  int iStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1d0;
  undefined8 local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a8;
  TMap<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>_>
  *local_188;
  int iStack_180;
  uint uStack_17c;
  undefined1 *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  int iStack_160;
  undefined4 uStack_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  ulonglong local_148;
  TMap<unsigned_int,VkPipeline_T_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_138;
  TMap<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry,0>_>
  *local_118;
  int iStack_110;
  uint uStack_10c;
  undefined1 *local_108;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 uStack_ec;
  TMap<unsigned_int,VkPipeline_T_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>_>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  undefined8 uStack_c0;
  TMap<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>_>
  *local_b8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b0;
  undefined8 uStack_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_88;
  undefined4 local_4c;
  
  FVar5.ID = (this->OnShaderPipelineCacheOpenedDelegate).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FShaderPipelineCache::OnCachedOpened,FVar5);
  }
  FVar5.ID = (this->OnShaderPipelineCachePrecompilationCompleteDelegate).ID;
  if (FVar5.ID != 0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
               &FShaderPipelineCache::OnPrecompilationComplete,FVar5);
  }
  DestroyCache(this);
  if (this->VertexInputPipelineLibraryVS != (VkPipeline_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,this->VertexInputPipelineLibraryVS,
               &VulkanRHI::GAllocationCallbacks);
    this->VertexInputPipelineLibraryVS = (VkPipeline_T *)0x0;
  }
  if (this->VertexInputPipelineLibraryMS != (VkPipeline_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,this->VertexInputPipelineLibraryMS,
               &VulkanRHI::GAllocationCallbacks);
    this->VertexInputPipelineLibraryMS = (VkPipeline_T *)0x0;
  }
  if (this->EmptyFragmentStageLibrary != (VkPipeline_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,this->EmptyFragmentStageLibrary,&VulkanRHI::GAllocationCallbacks
              );
    this->EmptyFragmentStageLibrary = (VkPipeline_T *)0x0;
  }
  puVar27 = &(this->FragmentOutputStatePipelineLibraries).field_0x10;
  local_148 = 1;
  local_1a8._padding_._4_4_ = 1;
  local_1a8.UnvisitedBitMask = 0xffffffff;
  local_1a8._padding_._0_4_ = 0;
  local_1a8.CurrentBitIndex = 0;
  local_1a8.BaseBitIndex = 0;
  local_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar27;
  if (*(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x28 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a8);
  }
  TStack_1d0._padding_ = CONCAT44(local_1a8._padding_._4_4_,(undefined4)local_1a8._padding_);
  TStack_1d0.CurrentBitIndex = local_1a8.CurrentBitIndex;
  TStack_1d0.UnvisitedBitMask = local_1a8.UnvisitedBitMask;
  TStack_1d0._28_4_ = local_1a8._28_4_;
  TStack_1d0.BaseBitIndex = local_1a8.BaseBitIndex;
  TStack_1d0.Array = local_1a8.Array;
  local_1b0 = CONCAT44(local_1b0._4_4_,
                       *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x8 -
                       *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x34);
  TStack_e0.Array = local_1a8.Array;
  uStack_c0 = local_1b0;
  local_e8 = &this->FragmentOutputStatePipelineLibraries;
  TStack_e0._padding_ = TStack_1d0._padding_;
  TStack_e0._16_8_ = TStack_1d0._16_8_;
  TStack_e0._24_8_ = TStack_1d0._24_8_;
  pTVar19 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_88,(TBitArray<FDefaultBitArrayAllocator> *)puVar27,
                       *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x28);
  TStack_1d0._padding_ = pTVar19->_padding_;
  pTVar13 = pTVar19->Array;
  uVar14._0_4_ = pTVar19->UnvisitedBitMask;
  uVar14._4_4_ = pTVar19->CurrentBitIndex;
  TStack_1d0.BaseBitIndex = pTVar19->BaseBitIndex;
  TStack_1d0._28_4_ = *(undefined4 *)&pTVar19->field_0x1c;
  TStack_1d0.Array = pTVar13;
  TStack_1d0._16_8_ = uVar14;
  while( true ) {
    pTVar1 = local_e8;
    if (*(int *)&local_e8->field_0x8 - *(int *)&local_e8->field_0x34 != (int)uStack_c0) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,VkPipeline_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_e0.CurrentBitIndex == uVar14._4_4_) && (TStack_e0.Array == pTVar13)) &&
       (pTVar1 == &this->FragmentOutputStatePipelineLibraries)) break;
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (this->Device->Device,
               *(VkPipeline_T **)
                (*(longlong *)pTVar1 + 8 + (longlong)TStack_e0.CurrentBitIndex * 0x18),
               &VulkanRHI::GAllocationCallbacks);
    TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
  }
  uVar18 = 1;
  pTVar1 = &this->FragmentOutputStatePipelineLibraries;
  bVar16 = 1 < *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x48;
  if (!bVar16) {
    TSet<TTuple<unsigned_int,VkPipeline_T_*>,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned_int,VkPipeline_T_*>,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>,FDefaultSetAllocator>
                      *)pTVar1);
  }
  puVar27 = &(this->FragmentOutputStatePipelineLibraries).field_0xc;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x8 = 0;
  if (*(int *)puVar27 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)pTVar1,0,(int *)puVar27);
  }
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x34 = 0;
  iVar4 = *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x2c;
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x28 = 0;
  if ((iVar4 < 0) || (0x80 < iVar4)) {
    *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->FragmentOutputStatePipelineLibraries).field_0x10,0);
  }
  if (bVar16) {
    *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 = 1;
    if ((*(longlong *)&(this->FragmentOutputStatePipelineLibraries).field_0x40 != 0) &&
       (TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                  ((ForAnyElementType *)&(this->FragmentOutputStatePipelineLibraries).field_0x40,0,0
                   ,4), *(longlong *)&(this->FragmentOutputStatePipelineLibraries).field_0x40 != 0))
    {
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&(this->FragmentOutputStatePipelineLibraries).field_0x40,0,0,4
                );
    }
    puVar6 = *(undefined4 **)&(this->FragmentOutputStatePipelineLibraries).field_0x40;
    puVar26 = (undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x38;
    if (puVar6 != (undefined4 *)0x0) {
      puVar26 = puVar6;
    }
    *puVar26 = 0xffffffff;
    if (*(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 != 0) {
      iVar4 = *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x28;
      local_138.Array =
           (TBitArray<FDefaultBitArrayAllocator> *)
           &(this->FragmentOutputStatePipelineLibraries).field_0x10;
      uStack_1f4 = 1;
      local_1f8 = 0;
      iStack_1e4 = 0;
      iStack_1e0 = 0;
      if (iVar4 != 0) {
        puVar25 = *(uint **)&(this->FragmentOutputStatePipelineLibraries).field_0x20;
        if (puVar25 == (uint *)0x0) {
          puVar25 = (uint *)local_138.Array;
        }
        uVar24 = *puVar25;
        iStack_1e0 = 0;
        local_1f8 = 0;
        while (uVar24 == 0) {
          iStack_1e0 = iStack_1e0 + 0x20;
          lVar21 = (longlong)local_1f8;
          local_1f8 = local_1f8 + 1;
          if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1f8) goto LAB_145b4e7d2;
          uVar24 = puVar25[lVar21 + 1];
        }
        uStack_1f4 = -uVar24 & uVar24;
        uVar20 = (ulonglong)uStack_1f4 * 2 + 1;
        lVar21 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
          }
        }
        local_res20 = (int)lVar21;
        iStack_1e4 = iStack_1e0 + -1 + local_res20;
        if (iVar4 < iStack_1e4) {
LAB_145b4e7d2:
          iStack_1e4 = iVar4;
        }
      }
      local_138._padding_ = CONCAT44(uStack_1f4,local_1f8);
      local_138.CurrentBitIndex = iStack_1e4;
      local_138.UnvisitedBitMask = 0xffffffff;
      local_138._28_4_ = uStack_1dc;
      local_138.BaseBitIndex = iStack_1e0;
      local_140 = pTVar1;
      if (iStack_1e4 < iVar4) {
        do {
          uVar24 = *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 - 1U &
                   *(uint *)(*(longlong *)&local_140->field_0x0 + (longlong)iStack_1e4 * 0x18);
          lVar21 = *(longlong *)&local_140->field_0x0 + (longlong)iStack_1e4 * 0x18;
          *(uint *)(lVar21 + 0x14) = uVar24;
          puVar27 = *(undefined1 **)&(this->FragmentOutputStatePipelineLibraries).field_0x40;
          puVar22 = &(this->FragmentOutputStatePipelineLibraries).field_0x38;
          if (puVar27 != (undefined1 *)0x0) {
            puVar22 = puVar27;
          }
          uVar20 = (longlong)*(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 - 1U &
                   (longlong)(int)uVar24;
          *(undefined4 *)(lVar21 + 0x10) = *(undefined4 *)(puVar22 + uVar20 * 4);
          *(int *)(puVar22 + uVar20 * 4) = iStack_1e4;
          local_138.UnvisitedBitMask = local_138.UnvisitedBitMask & ~local_138._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_138);
          iStack_1e4 = local_138.CurrentBitIndex;
        } while (local_138.CurrentBitIndex < (local_138.Array)->NumBits);
      }
    }
  }
  local_178 = &(this->LayoutMap).field_0x10;
  iStack_180 = 0;
  iVar4 = *(int *)&(this->LayoutMap).field_0x28;
  local_188 = &this->LayoutMap;
  local_168 = 0;
  iStack_16c = 0;
  if (iVar4 != 0) {
    puVar25 = *(uint **)&(this->LayoutMap).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)local_178;
    }
    uVar18 = *puVar25;
    while (uVar18 == 0) {
      lVar21 = (longlong)iStack_180;
      local_168 = local_168 + 0x20;
      iStack_180 = iStack_180 + 1;
      uVar18 = 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_180) goto LAB_145b4e905;
      uVar18 = puVar25[lVar21 + 1];
    }
    uVar18 = -uVar18 & uVar18;
    uVar20 = (ulonglong)uVar18 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_158 = (int)lVar21;
    iStack_16c = local_158 + -1 + local_168;
    if (iVar4 < iStack_16c) {
LAB_145b4e905:
      iStack_16c = iVar4;
    }
  }
  puVar27 = &(this->LayoutMap).field_0x10;
  uVar24 = *(uint *)&(this->LayoutMap).field_0x28;
  uStack_164 = local_4c;
  iStack_160 = *(int *)&(this->LayoutMap).field_0x8 - *(int *)&(this->LayoutMap).field_0x34;
  uVar28 = uVar24 & 0xffffffe0;
  TStack_b0._padding_ = CONCAT44(uVar18,iStack_180);
  uStack_170 = 0xffffffff;
  TStack_b0.CurrentBitIndex = iStack_16c;
  TStack_b0.UnvisitedBitMask = 0xffffffff;
  iVar23 = (int)uVar24 >> 5;
  TStack_b0._28_4_ = local_4c;
  TStack_b0.BaseBitIndex = local_168;
  uStack_90 = CONCAT44(uStack_15c,iStack_160);
  uStack_17c = uVar18;
  local_b8 = local_188;
  TStack_b0.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_178;
  if ((((int)uVar24 < 0) || (iVar4 < (int)uVar24)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar20 = local_148;
  uVar18 = *(uint *)&(this->LayoutMap).field_0x28;
  if (uVar24 != uVar18) {
    puVar22 = *(undefined1 **)&(this->LayoutMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar27;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar23 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar23;
      uVar28 = uVar28 + 0x20;
      iVar23 = iVar23 + 1;
      uVar24 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_145b4ea10;
      uVar24 = *(uint *)(puVar22 + lVar21 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_154 = (int)lVar21;
    uVar24 = local_154 + -1 + uVar28;
    if ((int)uVar18 < (int)uVar24) {
      uVar24 = uVar18;
    }
  }
LAB_145b4ea10:
  uVar18 = (uint)local_148;
  while( true ) {
    pTVar15 = local_b8;
    if (*(int *)&local_b8->field_0x8 - *(int *)&local_b8->field_0x34 != (int)uStack_90) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_b0.CurrentBitIndex == uVar24) &&
        (TStack_b0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) &&
       (pTVar15 == &this->LayoutMap)) break;
    puVar7 = *(undefined8 **)
              ((longlong)TStack_b0.CurrentBitIndex * 0x140 + 0x130 + *(longlong *)pTVar15);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,uVar20 & 0xffffffff);
    }
    TStack_b0.UnvisitedBitMask = TStack_b0.UnvisitedBitMask & ~TStack_b0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b0);
  }
  TStack_1d0.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->DSetLayoutMap).field_0x10;
  iStack_110 = 0;
  iVar4 = *(int *)&(this->DSetLayoutMap).field_0x28;
  pTVar2 = &this->DSetLayoutMap;
  local_f8 = 0;
  iStack_fc = 0;
  if (iVar4 != 0) {
    puVar25 = *(uint **)&(this->DSetLayoutMap).field_0x20;
    if (puVar25 == (uint *)0x0) {
      puVar25 = (uint *)TStack_1d0.Array;
    }
    uVar24 = *puVar25;
    while (uVar24 == 0) {
      lVar21 = (longlong)iStack_110;
      local_f8 = local_f8 + 0x20;
      iStack_110 = iStack_110 + 1;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_110) goto LAB_145b4eb28;
      uVar24 = puVar25[lVar21 + 1];
    }
    uVar18 = -uVar24 & uVar24;
    uVar20 = (ulonglong)uVar18 * 2 + 1;
    lVar21 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_150 = (int)lVar21;
    iStack_fc = local_f8 + -1 + local_150;
    if (iVar4 < iStack_fc) {
LAB_145b4eb28:
      iStack_fc = iVar4;
    }
  }
  puVar27 = &(this->DSetLayoutMap).field_0x10;
  iStack_f4 = iStack_16c;
  iStack_f0 = *(int *)&(this->DSetLayoutMap).field_0x8 - *(int *)&(this->DSetLayoutMap).field_0x34;
  uVar24 = *(uint *)&(this->DSetLayoutMap).field_0x28;
  uStack_100 = 0xffffffff;
  TStack_1d0.CurrentBitIndex = iStack_fc;
  TStack_1d0.UnvisitedBitMask = 0xffffffff;
  uVar28 = uVar24 & 0xffffffe0;
  TStack_1d0._padding_ = CONCAT44(uVar18,iStack_110);
  iVar23 = (int)uVar24 >> 5;
  TStack_1d0._28_4_ = iStack_16c;
  TStack_1d0.BaseBitIndex = local_f8;
  local_1b0 = CONCAT44(uStack_ec,iStack_f0);
  local_118 = pTVar2;
  uStack_10c = uVar18;
  local_108 = (undefined1 *)TStack_1d0.Array;
  if ((((int)uVar24 < 0) || (iVar4 < (int)uVar24)) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  uVar18 = *(uint *)&(this->DSetLayoutMap).field_0x28;
  if (uVar24 != uVar18) {
    puVar22 = *(undefined1 **)&(this->DSetLayoutMap).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar27;
    }
    uVar24 = -1 << ((byte)uVar24 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar23 * 4);
    while (uVar24 == 0) {
      lVar21 = (longlong)iVar23;
      uVar28 = uVar28 + 0x20;
      iVar23 = iVar23 + 1;
      uVar24 = uVar18;
      if ((int)((uVar18 - 1) + ((int)(uVar18 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar23)
      goto LAB_145b4ec40;
      uVar24 = *(uint *)(puVar22 + lVar21 * 4 + 4);
    }
    uVar20 = (ulonglong)(-uVar24 & uVar24) * 2 + 1;
    lVar21 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar21 == 0; lVar21 = lVar21 + -1) {
      }
    }
    local_14c = (int)lVar21;
    uVar24 = (uVar28 - 1) + local_14c;
    if ((int)uVar18 < (int)uVar24) {
      uVar24 = uVar18;
    }
  }
LAB_145b4ec40:
  while( true ) {
    if (*(int *)&(this->DSetLayoutMap).field_0x8 - *(int *)&(this->DSetLayoutMap).field_0x34 !=
        (int)local_1b0) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_1d0.CurrentBitIndex == uVar24) &&
       (TStack_1d0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar27)) break;
    (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
              (this->Device->Device,
               *(VkDescriptorSetLayout_T **)
                (*(longlong *)pTVar2 + 0x18 + (longlong)TStack_1d0.CurrentBitIndex * 0x30),
               &VulkanRHI::GAllocationCallbacks);
    TStack_1d0.UnvisitedBitMask = TStack_1d0.UnvisitedBitMask & ~TStack_1d0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1d0);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  (*VulkanDynamicAPI::vkDestroyPipelineCache)
            (this->Device->Device,(this->GlobalPSOCache).PipelineCache,
             &VulkanRHI::GAllocationCallbacks);
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  pVVar8 = (this->CurrentPrecompilingPSOCache).PipelineCache;
  if (pVVar8 != (VkPipelineCache_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyPipelineCache)
              (this->Device->Device,pVVar8,&VulkanRHI::GAllocationCallbacks);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  *(undefined4 *)&(this->LRU2SizeList).field_0x48 = 0;
  pvVar9 = *(void **)&(this->LRU2SizeList).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanPipelineSize>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanPipelineSize>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanPipelineSize>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LRU2SizeList);
  TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::
  ~TDoubleLinkedList<FVulkanGraphicsPipelineState_*>(&this->LRU);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LRUCS);
  *(undefined4 *)&(this->GraphicsPSOLockedMap).field_0x48 = 0;
  pvVar9 = *(void **)&(this->GraphicsPSOLockedMap).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GraphicsPSOLockedMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GraphicsPSOLockedCS);
  *(undefined4 *)&(this->DSetLayoutMap).field_0x48 = 0;
  pvVar9 = *(void **)&(this->DSetLayoutMap).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo::FSetLayout,FVulkanDescriptorSetLayoutEntry>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->DSetLayoutMap);
  *(undefined4 *)&(this->LayoutMap).field_0x48 = 0;
  pvVar9 = *(void **)&(this->LayoutMap).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LayoutMap);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->LayoutMapCS);
  (this->CompiledPSOCaches).HashSize = 0;
  FVar10 = (this->CompiledPSOCaches).Hash.SecondaryData;
  if (FVar10 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar10);
  }
  TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FGuid>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->CompiledPSOCaches).Elements);
  BVar17 = TryAcquireSRWLockExclusive
                     ((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  if (BVar17 == '\0') {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  }
  BVar17 = TryAcquireSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  if (BVar17 == '\0') {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  }
  *(undefined4 *)&(this->ComputePipelineEntries).field_0x48 = 0;
  pvVar9 = *(void **)&(this->ComputePipelineEntries).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanComputePipeline_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanComputePipeline_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,FVulkanComputePipeline_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ComputePipelineEntries);
  BVar17 = TryAcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineLock);
  if (BVar17 == '\0') {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("!IsLocked()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                        ,0x48,L"Destroying a lock that is still held!");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineLock);
  }
  pFVar11 = (this->CompiledPSOCacheFolderName).Data.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  pFVar11 = (this->CompiledPSOCacheTopFolderPath).Data.AllocatorInstance.Data;
  if (pFVar11 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar11);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FragmentOutputStateCS);
  *(undefined4 *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 = 0;
  pvVar9 = *(void **)&(this->FragmentOutputStatePipelineLibraries).field_0x40;
  if (pvVar9 != (void *)0x0) {
    FMemory::Free(pvVar9);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,VkPipeline_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,VkPipeline_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,VkPipeline_T_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->FragmentOutputStatePipelineLibraries);
  return;
}

// operator() @ 145b54450

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkResult __thiscall
`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l5::<lambda_1>::operator()
          (void *this,FPSOCreateFuncParams<FVulkanGraphicsPipelineState> *param_1)

{
  EPSOOperation EVar1;
  undefined8 *puVar2;
  FPlatformRWLock *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  VkResult VVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
  FVar14;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
  FVar15;
  FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
  FVar16;
  FThreadStats *pFVar17;
  FThreadStatsPool *pFVar18;
  FColor_u_0 FVar19;
  FName FVar20;
  FName FVar21;
  int *piVar22;
  FNameEntryId FVar23;
  FColor_u_0 local_res18;
  uint uStackX_1c;
  FColor_u_0 local_res20 [2];
  FColor_u_0 local_1a8 [2];
  FName local_1a0;
  FName local_190;
  FName local_180;
  FName local_170;
  FColor_u_0 local_168;
  uint local_164;
  FColor_u_0 local_160;
  uint local_15c;
  VkPipeline_T **local_158;
  LARGE_INTEGER local_150;
  LARGE_INTEGER local_148;
  LARGE_INTEGER local_140;
  FStatMessage local_138;
  FStatMessage local_128;
  FStatMessage local_118;
  FName local_108;
  FName local_100;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  VkGraphicsPipelineCreateInfo local_d8;
  
  EVar1 = param_1->PSOOperation;
  local_158 = &param_1->PSO->VulkanPipeline;
  if ((*local_158 != (VkPipeline_T *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("PSO->VulkanPipeline == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0x780,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    VVar11 = (*pcVar4)();
    return VVar11;
  }
  if (EVar1 != CreateAndStorePSO) {
    if (EVar1 == CreateIfPresent) {
      if ((*(ulonglong *)(*(longlong *)(*(longlong *)this + 0x90) + 0x21e0) >> 0x34 & 1) == 0) {
        return VK_ERROR_PIPELINE_COMPILE_REQUIRED_EXT;
      }
      FVar23.Value = 0;
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
        if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate ==
            (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
             )0x0) {
          pFVar13 = ::FName::FName(&local_108,
                                   "STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate");
          FThreadSafeStaticStatBase::DoSetup
                    ((FThreadSafeStaticStatBase *)
                     &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate,*pFVar13,
                     L"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate","STATGROUP_Quick",
                     "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        }
        _Init_thread_footer(&::_TSS0);
      }
      FVar15 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate;
      if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate ==
          (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
           )0x0) {
        pFVar13 = ::FName::FName(&local_100,"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate")
        ;
        FVar15 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_22_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate>
                  )FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)
                              &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate,
                              *pFVar13,L"STAT_Vulkan_RHICreateGraphicsPipelineState_TestCreate",
                              "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                              false,MCR_Invalid);
      }
      FVar20 = *(FName *)FVar15;
      bVar10 = false;
      bVar8 = false;
      local_1a0.ComparisonIndex.Value = 0;
      local_1a0.Number = 0;
      if ((FVar20.ComparisonIndex.Value.Value != 0) || (FVar20.Number != 0)) {
        if (GCycleStatsShouldEmitNamedEvents != 0) {
          local_res18.Bits = 0;
          FGenericPlatformMisc::BeginNamedEvent
                    ((FColor *)&local_res18._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
          bVar10 = false;
          bVar8 = true;
          if (-1 < CpuChannel->Enabled) {
            local_170.ComparisonIndex.Value = FVar20.ComparisonIndex.Value.Value;
            local_170.Number = FVar20.Number;
            FCpuProfilerTrace::OutputBeginDynamicEventWithId
                      (&local_170,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x789);
            bVar10 = true;
            bVar8 = true;
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          local_1a0 = FVar20;
          FThreadStats::AddMessage(FVar20,CycleScopeStart);
          bVar5 = true;
          FVar23.Value = local_1a0.ComparisonIndex.Value;
          goto LAB_145b547e2;
        }
      }
      bVar5 = false;
      FVar20 = local_1a0;
LAB_145b547e2:
      pFVar3 = param_1->DestPipelineCacheLock;
      AcquireSRWLockShared((PSRWLOCK)pFVar3);
      puVar2 = *(undefined8 **)((longlong)this + 8);
      local_d8._0_8_ = *puVar2;
      local_d8.pNext = (void *)puVar2[1];
      local_d8.stageCount = *(uint *)((longlong)puVar2 + 0x14);
      local_d8.pStages._0_4_ = *(undefined4 *)(puVar2 + 3);
      local_d8.pStages._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x1c);
      local_d8.pVertexInputState = (VkPipelineVertexInputStateCreateInfo *)puVar2[4];
      local_d8.pInputAssemblyState = (VkPipelineInputAssemblyStateCreateInfo *)puVar2[5];
      local_d8.pTessellationState = (VkPipelineTessellationStateCreateInfo *)puVar2[6];
      local_d8.pViewportState = (VkPipelineViewportStateCreateInfo *)puVar2[7];
      local_d8.pRasterizationState = (VkPipelineRasterizationStateCreateInfo *)puVar2[8];
      local_d8.pMultisampleState = (VkPipelineMultisampleStateCreateInfo *)puVar2[9];
      local_d8.pDepthStencilState = (VkPipelineDepthStencilStateCreateInfo *)puVar2[10];
      local_d8.pColorBlendState = (VkPipelineColorBlendStateCreateInfo *)puVar2[0xb];
      local_d8.pDynamicState = (VkPipelineDynamicStateCreateInfo *)puVar2[0xc];
      local_d8.layout = (VkPipelineLayout_T *)puVar2[0xd];
      local_d8.renderPass._0_4_ = *(undefined4 *)(puVar2 + 0xe);
      local_d8.renderPass._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x74);
      local_d8.subpass = *(uint *)(puVar2 + 0xf);
      local_d8._124_4_ = *(undefined4 *)((longlong)puVar2 + 0x7c);
      local_d8.basePipelineHandle._0_4_ = *(undefined4 *)(puVar2 + 0x10);
      local_d8.basePipelineHandle._4_4_ = *(undefined4 *)((longlong)puVar2 + 0x84);
      local_d8.basePipelineIndex = *(int *)(puVar2 + 0x11);
      local_d8._140_4_ = *(undefined4 *)((longlong)puVar2 + 0x8c);
      local_d8.flags = *(uint *)(puVar2 + 2) | 0x100;
      VVar11 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                         (*(VkDevice_T **)(*(longlong *)(*(longlong *)this + 0x90) + 0x30),
                          param_1->DestPipelineCache,1,&local_d8,&VulkanRHI::GAllocationCallbacks,
                          local_158);
      ReleaseSRWLockShared((PSRWLOCK)pFVar3);
      if (bVar8) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar10) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (!bVar5) {
        return VVar11;
      }
      if (FVar20 == (FName)0x0) {
        return VVar11;
      }
      if (FThreadStats::bPrimaryDisableForever != false) {
        return VVar11;
      }
      if (FThreadStats::TlsSlot == 0xffffffff) {
        return VVar11;
      }
      pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar17 == (FThreadStats *)0x0) {
        pFVar18 = FThreadStatsPool::Get();
        pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
      }
      if (pFVar17->ScopeCount <= pFVar17->bWaitForExplicitFlush) {
        return VVar11;
      }
      local_138.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      local_138.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_150);
      local_138.StatData.Pad[4] = '\0';
      local_138.StatData.Pad[5] = '\0';
      local_138.StatData.Pad[6] = '\0';
      local_138.StatData.Pad[7] = '\0';
      local_138.StatData.Pad[0] = local_150.s.LowPart._0_1_;
      local_138.StatData.Pad[1] = local_150.s.LowPart._1_1_;
      local_138.StatData.Pad[2] = local_150.s.LowPart._2_1_;
      local_138.StatData.Pad[3] = local_150.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_138);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
        return VVar11;
      }
      if (FThreadStats::bIsRawStatsActive == false) {
        return VVar11;
      }
      FThreadStats::FlushRawStats(pFVar17,false,false);
      return VVar11;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("PSOOperation == FVulkanChunkedPipelineCacheManager::EPSOOperation::CreateAndStorePSO || PSOOperation == FVulkanChunkedPipelineCacheManager::EPSOOperation::CreateIfPresent"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x781,L"");
    if (bVar10) {
      pcVar4 = (code *)swi(3);
      VVar11 = (*pcVar4)();
      return VVar11;
    }
  }
  piVar22 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c);
  FVar23.Value = 0;
  if ((*piVar22 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    if (StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
         )0x0) {
      pFVar13 = ::FName::FName(&local_f8,"STAT_Vulkan_vkCreateGraphicsPipeline");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline,*pFVar13
                 ,L"STAT_Vulkan_vkCreateGraphicsPipeline","STATGROUP_Quick","STATCAT_Advanced",
                 L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS1);
  }
  FVar14 = StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline;
  if (StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
       )0x0) {
    pFVar13 = ::FName::FName(&local_f0,"STAT_Vulkan_vkCreateGraphicsPipeline");
    FVar14 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_2_::FStat_STAT_Vulkan_vkCreateGraphicsPipeline>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_vkCreateGraphicsPipeline
                          ,*pFVar13,L"STAT_Vulkan_vkCreateGraphicsPipeline","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar14;
  bVar10 = false;
  bVar8 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  FVar19.Bits = (uint)FVar20.ComparisonIndex.Value;
  uVar12 = FVar20.Number;
  if ((FVar19.Bits == 0) && (uVar12 == 0)) {
LAB_145b5498a:
    bVar5 = false;
    FVar20 = local_180;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_168.Bits = FVar19.Bits;
        local_164 = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_168._s_0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x797);
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b5498a;
    local_res18.Bits = FVar19.Bits;
    uStackX_1c = uVar12;
    local_180 = FVar20;
    FThreadStats::AddMessage(FVar20,CycleScopeStart);
    bVar5 = true;
  }
  if ((*piVar22 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
    if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate ==
        (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
         )0x0) {
      pFVar13 = ::FName::FName(&local_e8,"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate,*pFVar13,
                 L"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS2);
  }
  FVar16 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate;
  if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate ==
      (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
       )0x0) {
    pFVar13 = ::FName::FName(&local_e0,"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate");
    FVar16 = (FThreadSafeStaticStat<_public:___cdecl__private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::<lambda_1>::operator()(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)const_::_27_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate,*pFVar13,
                          L"STAT_Vulkan_RHICreateGraphicsPipelineState_vkCreate","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar16;
  bVar6 = false;
  bVar9 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  FVar19.Bits = (uint)FVar21.ComparisonIndex.Value;
  uVar12 = FVar21.Number;
  if ((FVar19.Bits != 0) || (uVar12 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1a8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1a8[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar6 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_160.Bits = FVar19.Bits;
        local_15c = uVar12;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_160._s_0,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x7a2);
        bVar6 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.Bits = FVar19.Bits;
      uStackX_1c = uVar12;
      local_190 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar7 = true;
      FVar23.Value = local_190.ComparisonIndex.Value;
      goto LAB_145b54abd;
    }
  }
  bVar7 = false;
  FVar21 = local_190;
LAB_145b54abd:
  pFVar3 = param_1->DestPipelineCacheLock;
  AcquireSRWLockShared((PSRWLOCK)pFVar3);
  VVar11 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                     (*(VkDevice_T **)(*(longlong *)(*(longlong *)this + 0x90) + 0x30),
                      param_1->DestPipelineCache,1,
                      *(VkGraphicsPipelineCreateInfo **)((longlong)this + 8),
                      &VulkanRHI::GAllocationCallbacks,local_158);
  ReleaseSRWLockShared((PSRWLOCK)pFVar3);
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar21 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_128.NameAndInfo.Number = FVar21.Number & 0xffff6fff | 0x6000;
      local_128.NameAndInfo.Index.Value = FVar23.Value;
      QueryPerformanceCounter(&local_148);
      local_128.StatData.Pad[4] = '\0';
      local_128.StatData.Pad[5] = '\0';
      local_128.StatData.Pad[6] = '\0';
      local_128.StatData.Pad[7] = '\0';
      local_128.StatData.Pad[0] = local_148.s.LowPart._0_1_;
      local_128.StatData.Pad[1] = local_148.s.LowPart._1_1_;
      local_128.StatData.Pad[2] = local_148.s.LowPart._2_1_;
      local_128.StatData.Pad[3] = local_148.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_128);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar5) && (FVar20 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    pFVar17 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar17 == (FThreadStats *)0x0) {
      pFVar18 = FThreadStatsPool::Get();
      pFVar17 = FThreadStatsPool::GetFromPool(pFVar18);
    }
    if (pFVar17->bWaitForExplicitFlush < pFVar17->ScopeCount) {
      local_118.NameAndInfo.Index.Value = local_180.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = FVar20.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_140);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_140.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_140.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_140.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_140.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(pFVar17,&local_118);
      piVar22 = &pFVar17->ScopeCount;
      *piVar22 = *piVar22 + -1;
      if (*piVar22 == 0) {
        FThreadStats::Flush(pFVar17,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar17,false,false);
      }
    }
  }
  return VVar11;
}

// CreateComputePipelineFromShader @ 145b5f450

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanComputePipeline * __thiscall
FVulkanPipelineStateCacheManager::CreateComputePipelineFromShader
          (FVulkanPipelineStateCacheManager *this,TVulkanBaseShader<FRHIComputeShader,5> *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  FVulkanDevice **ppFVar3;
  byte bVar4;
  FVulkanDevice *pFVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  VkResult VVar11;
  FVulkanComputePipeline *this_00;
  FVulkanComputePipeline *pFVar12;
  LARGE_INTEGER LVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<_private:_class_FVulkanComputePipeline_*___cdecl_FVulkanPipelineStateCacheManager::CreateComputePipelineFromShader(TVulkanBaseShader<FRHIComputeShader,5>_*)_::_16_::FStat_STAT_VulkanComputePSOCreate>
  FVar15;
  FThreadStats *pFVar16;
  FThreadStatsPool *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs> FVar18;
  uint uVar19;
  undefined1 *puVar20;
  longlong *plVar21;
  FNameEntryId FVar22;
  FName FVar23;
  longlong lVar24;
  undefined1 auStackY_2d8 [32];
  FName local_278;
  undefined1 local_270 [8];
  FStatNameAndInfo local_268;
  LARGE_INTEGER local_260;
  undefined1 local_258 [24];
  uint local_240;
  uint local_23c;
  undefined4 local_238;
  undefined8 local_234;
  longlong lStack_22c;
  undefined4 local_224;
  VkComputePipelineCreateInfo local_218;
  FUniformBufferGatherInfo local_1b8;
  undefined1 local_188 [264];
  undefined4 local_80;
  ForAnyElementType local_78;
  int local_70;
  char local_58 [24];
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_260 = (LARGE_INTEGER)this;
  this_00 = ::operator_new(0x58);
  pFVar12 = (FVulkanComputePipeline *)0x0;
  ppFVar3 = &this->Device;
  if (this_00 != (FVulkanComputePipeline *)0x0) {
    pFVar12 = FVulkanComputePipeline::FVulkanComputePipeline(this_00,*ppFVar3,param_1);
  }
  FVulkanDescriptorSetsLayoutInfo::FVulkanDescriptorSetsLayoutInfo
            ((FVulkanDescriptorSetsLayoutInfo *)local_188);
  local_1b8.CodeHeaders[0] = (FVulkanShaderHeader *)0x0;
  local_1b8.CodeHeaders[1] = (FVulkanShaderHeader *)0x0;
  local_1b8.CodeHeaders[2] = (FVulkanShaderHeader *)0x0;
  local_1b8.CodeHeaders[3] = (FVulkanShaderHeader *)0x0;
  local_1b8.CodeHeaders[4] = (FVulkanShaderHeader *)0x0;
  local_1b8.CodeHeaders[5] = (FVulkanShaderHeader *)0x0;
  FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
            ((FVulkanDescriptorSetsLayoutInfo *)local_188,VK_SHADER_STAGE_COMPUTE_BIT,Compute,
             (FVulkanShaderHeader *)&param_1->field_0x138,&local_1b8);
  local_270 = (undefined1  [8])0x0;
  local_268 = (FStatNameAndInfo)((ulonglong)(uint)local_268.Number << 0x20);
  FVulkanDescriptorSetsLayoutInfo::FinalizeBindings<1>
            ((FVulkanDescriptorSetsLayoutInfo *)local_188,*ppFVar3,&local_1b8,
             (TArrayView<FRHISamplerState_*,int> *)local_270,(bool)param_1->field_0x211);
  LVar13 = (LARGE_INTEGER)
           FindOrAddLayout(this,(FVulkanDescriptorSetsLayoutInfo *)local_188,false,
                           (bool)param_1->field_0x211);
  uVar19 = *(uint *)(LVar13.QuadPart + 0x130);
  local_258._8_8_ = LVar13;
  EnterCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
  if (*(int *)&param_1->field_0x1c8 != *(int *)&param_1->field_0x1f4) {
    puVar20 = *(undefined1 **)&param_1->field_0x200;
    if (*(undefined1 **)&param_1->field_0x200 == (undefined1 *)0x0) {
      puVar20 = &param_1->field_0x1f8;
    }
    iVar9 = *(int *)(puVar20 + (ulonglong)(*(int *)&param_1->field_0x208 - 1U & uVar19) * 4);
    if (iVar9 != -1) {
      do {
        lVar24 = *(longlong *)&param_1->field_0x1c0 + (longlong)iVar9 * 0x18;
        if (*(uint *)(*(longlong *)&param_1->field_0x1c0 + (longlong)iVar9 * 0x18) == uVar19) {
          plVar21 = (longlong *)(lVar24 + 8);
          if (lVar24 == 0) {
            plVar21 = (longlong *)0x0;
          }
          if (plVar21 != (longlong *)0x0) {
            local_258._0_8_ = *plVar21;
            if ((undefined8 *)local_258._0_8_ != (undefined8 *)0x0) {
              LOCK();
              *(int *)(local_258._0_8_ + 8) = *(int *)(local_258._0_8_ + 8) + 1;
              UNLOCK();
            }
            goto LAB_145b5f5be;
          }
          break;
        }
        iVar9 = *(int *)(lVar24 + 0x10);
      } while (iVar9 != -1);
    }
  }
  FVulkanShader::CreateHandle
            ((FVulkanShader *)&param_1->field_0x110,(FVulkanLayout *)local_258,LVar13.s.LowPart);
LAB_145b5f5be:
  LeaveCriticalSection((LPCRITICAL_SECTION)&FVulkanShader::VulkanShaderModulesMapCS);
  local_218._84_8_ = 0;
  local_218._92_4_ = 0;
  local_218.sType = VK_STRUCTURE_TYPE_COMPUTE_PIPELINE_CREATE_INFO;
  local_218.stage.pNext._4_4_ = 0;
  local_218.stage.flags = 0;
  local_218.stage.stage = VK_SHADER_STAGE_COMPUTE_BIT;
  local_218.stage._4_4_ = 0;
  local_218.stage.pNext._0_4_ = 0;
  local_218._20_4_ = 0;
  local_218.stage.sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
  local_218.stage.pName._0_4_ = 0;
  local_218.stage.pName._4_4_ = 0;
  local_218.stage.pSpecializationInfo._0_4_ = 0;
  local_218._4_8_ = 0;
  local_218._12_8_ = 0;
  local_218.stage.pSpecializationInfo._4_4_ = 0;
  local_218.layout._0_4_ = 0;
  local_218.layout._4_4_ = 0;
  local_218.basePipelineHandle._0_4_ = 0;
  local_218.stage.module._0_4_ = (undefined4)*(undefined8 *)(local_258._0_8_ + 0x10);
  local_218.stage.module._4_4_ =
       (undefined4)((ulonglong)*(undefined8 *)(local_258._0_8_ + 0x10) >> 0x20);
  TCString<char>::SnprintfImpl(local_58,0x18,"main_%0.8x_%0.8x");
  local_218.stage.pName = local_58;
  local_218.layout._0_4_ = SUB84(*(VkPipelineLayout_T **)(LVar13.QuadPart + 400),0);
  local_218.layout._4_4_ =
       (undefined4)((ulonglong)*(VkPipelineLayout_T **)(LVar13.QuadPart + 400) >> 0x20);
  if (param_1->field_0x211 != '\0') {
    local_218._12_8_ = local_218._12_8_ | 0x2000000000000000;
  }
  bVar4 = param_1->field_0x1a8;
  local_218.stage.pNext =
       (undefined4 *)CONCAT44(local_218.stage.pNext._4_4_,local_218.stage.pNext._0_4_);
  if ((((bVar4 != 0) &&
       (pFVar5 = *ppFVar3,
       local_218.stage.pNext =
            (undefined4 *)CONCAT44(local_218.stage.pNext._4_4_,local_218.stage.pNext._0_4_),
       ((pFVar5->OptionalDeviceExtensions).field0_0x0.Packed & 0x8000000000000) != 0)) &&
      (local_218.stage.pNext =
            (undefined4 *)CONCAT44(local_218.stage.pNext._4_4_,local_218.stage.pNext._0_4_),
      ((pFVar5->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.
       requiredSubgroupSizeStages & 0x20) != 0)) &&
     ((local_218.stage.pNext =
            (undefined4 *)CONCAT44(local_218.stage.pNext._4_4_,local_218.stage.pNext._0_4_),
      (pFVar5->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.minSubgroupSize <=
      (uint)bVar4 &&
      (local_218.stage.pNext =
            (undefined4 *)CONCAT44(local_218.stage.pNext._4_4_,local_218.stage.pNext._0_4_),
      (uint)bVar4 <=
      (pFVar5->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.maxSubgroupSize))))
  {
    local_238 = 0x3b9e38e9;
    local_224 = 0;
    local_218.stage.pNext = &local_238;
    local_234 = 0;
    lStack_22c = (ulonglong)bVar4 << 0x20;
  }
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_STAT_VulkanComputePSOCreate ==
          (FThreadSafeStaticStat<_private:_class_FVulkanComputePipeline_*___cdecl_FVulkanPipelineStateCacheManager::CreateComputePipelineFromShader(TVulkanBaseShader<FRHIComputeShader,5>_*)_::_16_::FStat_STAT_VulkanComputePSOCreate>
           )0x0) {
        pFVar14 = ::FName::FName(&local_278,"STAT_VulkanComputePSOCreate");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanComputePSOCreate,*pFVar14,
                   L"STAT_VulkanComputePSOCreate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                   ,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar15 = StatPtr_STAT_VulkanComputePSOCreate;
  if (StatPtr_STAT_VulkanComputePSOCreate ==
      (FThreadSafeStaticStat<_private:_class_FVulkanComputePipeline_*___cdecl_FVulkanPipelineStateCacheManager::CreateComputePipelineFromShader(TVulkanBaseShader<FRHIComputeShader,5>_*)_::_16_::FStat_STAT_VulkanComputePSOCreate>
       )0x0) {
    pFVar14 = ::FName::FName((FName *)(local_258 + 0x10),"STAT_VulkanComputePSOCreate");
    FVar15 = (FThreadSafeStaticStat<_private:_class_FVulkanComputePipeline_*___cdecl_FVulkanPipelineStateCacheManager::CreateComputePipelineFromShader(TVulkanBaseShader<FRHIComputeShader,5>_*)_::_16_::FStat_STAT_VulkanComputePSOCreate>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanComputePSOCreate,*pFVar14
                          ,L"STAT_VulkanComputePSOCreate","STATGROUP_Quick","STATCAT_Advanced",
                          L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar23 = *(FName *)FVar15;
  local_270._0_4_ = 0;
  local_270._4_4_ = 0;
  bVar6 = false;
  bVar8 = false;
  uVar19 = 0;
  FVar22 = FVar23.ComparisonIndex.Value;
  uVar10 = FVar23.Number;
  if ((FVar22.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_278.ComparisonIndex.Value = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_278,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar6 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_278.ComparisonIndex.Value = FVar22.Value;
        local_278.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_278,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0xae7);
        bVar6 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_278.ComparisonIndex.Value = FVar22.Value;
      local_278.Number = uVar10;
      local_270 = (undefined1  [8])FVar23;
      FThreadStats::AddMessage(FVar23,CycleScopeStart);
      bVar7 = true;
      uVar19 = local_270._0_4_;
      goto LAB_145b5f84a;
    }
  }
  bVar7 = false;
  FVar23 = (FName)local_270;
LAB_145b5f84a:
  LVar13 = local_260;
  AcquireSRWLockShared((PSRWLOCK)(local_260.QuadPart + 0x130));
  VVar11 = (*VulkanDynamicAPI::vkCreateComputePipelines)
                     ((*ppFVar3)->Device,
                      ((FPipelineCache *)(LVar13.QuadPart + 0x128))->PipelineCache,1,&local_218,
                      &VulkanRHI::GAllocationCallbacks,(VkPipeline_T **)&pFVar12->_padding_);
  ReleaseSRWLockShared((PSRWLOCK)(LVar13.QuadPart + 0x130));
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar23 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    if (pFVar16->bWaitForExplicitFlush < pFVar16->ScopeCount) {
      local_23c = FVar23.Number & 0xffff6fff | 0x6000;
      local_240 = uVar19;
      QueryPerformanceCounter(&local_260);
      local_258._16_8_ = local_260.QuadPart & 0xffffffff;
      FThreadStats::AddStatMessage(pFVar16,(FStatMessage *)(local_258 + 0x10));
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
  if (VVar11 != VK_SUCCESS) {
    local_270._0_4_ = 0;
    local_270._4_4_ = 0;
    local_268.Index.Value = 0;
    local_268.Number = 0;
    BytesToHex(&param_1->field_0xf0,0x14,(FString *)local_270);
    if (1 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    *(undefined1 *)&pFVar12->_padding_ = 0;
    if ((FName)local_270 != (FName)0x0) {
      FMemory::Free((void *)local_270);
    }
  }
  pFVar12->_padding_ = local_258._8_8_;
  FVar18 = StatPtr_STAT_VulkanNumPSOs;
  if (StatPtr_STAT_VulkanNumPSOs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)0x0) {
    pFVar14 = ::FName::FName((FName *)(local_258 + 0x10),"STAT_VulkanNumPSOs");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOs,*pFVar14,
                        L"Num PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
                        false,ST_int64,false,false,MCR_Invalid);
  }
  LVar13 = *(LARGE_INTEGER *)FVar18;
  local_260 = LVar13;
  if ((((FVulkanDevice *)LVar13.QuadPart != (FVulkanDevice *)0x0) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar16 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar16 == (FThreadStats *)0x0) {
      pFVar17 = FThreadStatsPool::Get();
      pFVar16 = FThreadStatsPool::GetFromPool(pFVar17);
    }
    local_270._0_4_ = 1;
    local_270._4_4_ = 0;
    local_268 = (FStatNameAndInfo)(LVar13.QuadPart & 0xffffafffffffffffU | 0xa00000000000);
    local_258._8_8_ = LVar13;
    FThreadStats::AddStatMessage(pFVar16,(FStatMessage *)local_270);
    FStatsTrace::Add((FName *)(local_258 + 8),1);
    if (pFVar16->ScopeCount == 0) {
      FThreadStats::Flush(pFVar16,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar16,false,false);
    }
  }
  if ((undefined8 *)local_258._0_8_ != (undefined8 *)0x0) {
    piVar1 = (int *)(local_258._0_8_ + 8);
    LOCK();
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (((iVar9 == 1) && (piVar1 != (int *)0x0)) &&
       ((undefined8 *)local_258._0_8_ != (undefined8 *)0x0)) {
      (*(code *)**(undefined8 **)local_258._0_8_)(local_258._0_8_,1);
    }
  }
  DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
            ((FSetLayout *)local_78.Data,local_70);
  if ((FSetLayout *)local_78.Data != (FSetLayout *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = 0;
  if ((void *)local_188._256_8_ != (void *)0x0) {
    FMemory::Free((void *)local_188._256_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (local_188 + 0xc0);
  puVar20 = local_188 + 0xc0;
  lVar24 = 6;
  do {
    puVar2 = (undefined8 *)(puVar20 + -0x20);
    puVar20 = puVar20 + -0x20;
    lVar24 = lVar24 + -1;
    if ((void *)*puVar2 != (void *)0x0) {
      FMemory::Free((void *)*puVar2);
    }
  } while (lVar24 != 0);
  return pFVar12;
}

// CreateEmptyFragmentStageLibrary @ 145b60e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

void __thiscall
FVulkanPipelineStateCacheManager::CreateEmptyFragmentStageLibrary
          (FVulkanPipelineStateCacheManager *this)

{
  FName FVar1;
  VkPipelineLayout_T *pVVar2;
  VkResult VVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined1 auStackY_258 [32];
  FName local_1f8;
  FStatMessage local_1f0;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined4 *puStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  VkPipelineDynamicStateCreateInfo local_1c8;
  undefined4 local_1a8;
  undefined8 local_1a4;
  undefined8 uStack_19c;
  undefined8 local_194;
  undefined8 uStack_18c;
  undefined4 local_184;
  VkPipelineMultisampleStateCreateInfo local_180;
  VkGraphicsPipelineCreateInfo local_148;
  VkPipelineDepthStencilStateCreateInfo local_b8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_258;
  FVar5 = StatPtr_STAT_VulkanNumPSLibs;
  if (StatPtr_STAT_VulkanNumPSLibs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)0x0) {
    pFVar4 = ::FName::FName(&local_1f8,"STAT_VulkanNumPSLibs");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSLibs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSLibs,*pFVar4,
                       L"Num PS Libraries","STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
                       L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  FVar1 = *(FName *)FVar5;
  local_1f8 = FVar1;
  if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_1f0.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_1f0.StatData.Pad[0] = '\x01';
    local_1f0.StatData.Pad[1] = '\0';
    local_1f0.StatData.Pad[2] = '\0';
    local_1f0.StatData.Pad[3] = '\0';
    local_1f0.StatData.Pad[4] = '\0';
    local_1f0.StatData.Pad[5] = '\0';
    local_1f0.StatData.Pad[6] = '\0';
    local_1f0.StatData.Pad[7] = '\0';
    local_1f8 = FVar1;
    local_1f0.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_1f0);
    FStatsTrace::Add(&local_1f8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  local_184 = 0;
  local_1dc = 0;
  local_1e0 = 0x3b9fac02;
  local_1a4 = 0;
  uStack_19c = 0;
  local_194 = 0;
  uStack_18c = 0;
  puStack_1d8 = &local_1a8;
  uStack_1d0 = 4;
  uStack_1cc = 0;
  local_1c8.pDynamicStates = (VkDynamicState *)&local_48;
  local_180._36_8_ = 0;
  local_180.alphaToOneEnable = 0;
  local_b8.maxDepthBounds = 0.0;
  local_148._132_8_ = 0;
  local_148._140_4_ = 0;
  local_148.pNext = &local_1e0;
  local_38 = ___xmm_3b9edcff3b9edd013b9edcfe3b9edd00;
  uStack_30 = _UNK_1510ccab8;
  local_1a8 = 0x3b9b75e2;
  local_28 = 0x3ba1bb5d;
  local_148._4_4_ = 0;
  local_148.flags = 0x20000800;
  if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
    local_148.flags = 0x20800800;
  }
  local_24 = 0x3ba1bb5f;
  local_148.pMultisampleState = &local_180;
  local_148.pRasterizationState._4_4_ = 0;
  local_148.pDepthStencilState = &local_b8;
  local_148.pColorBlendState._0_4_ = 0;
  local_148.pColorBlendState._4_4_ = 0;
  local_148.renderPass._0_4_ = 0;
  local_1c8.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  local_48 = ___xmm_3b9edd033b9edd020000000500000008;
  uStack_40 = _UNK_1510ccac8;
  local_1c8.dynamicStateCount = 10;
  local_180.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  local_1c8._4_8_ = 0;
  local_1c8._12_8_ = 0;
  local_b8.sType = VK_STRUCTURE_TYPE_PIPELINE_DEPTH_STENCIL_STATE_CREATE_INFO;
  local_180._4_8_ = 0;
  local_180._12_8_ = 0;
  local_148.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_180.rasterizationSamples = 0;
  local_180.sampleShadingEnable = 0;
  local_180._28_8_ = 0;
  local_b8._4_8_ = 0;
  local_b8._12_8_ = 0;
  local_b8.depthTestEnable = 0;
  local_b8.depthWriteEnable = 0;
  local_b8.depthCompareOp = VK_COMPARE_OP_NEVER;
  local_b8.depthBoundsTestEnable = 0;
  local_b8.stencilTestEnable = 0;
  local_b8.front.failOp = VK_STENCIL_OP_KEEP;
  local_b8.front.passOp = VK_STENCIL_OP_KEEP;
  local_b8.front.depthFailOp = VK_STENCIL_OP_KEEP;
  local_b8.front.compareOp = VK_COMPARE_OP_NEVER;
  local_b8.front.compareMask = 0;
  local_b8.front.writeMask = 0;
  local_b8.front.reference = 0;
  local_b8.back.failOp = VK_STENCIL_OP_KEEP;
  local_b8.back.passOp = VK_STENCIL_OP_KEEP;
  local_b8.back.depthFailOp = VK_STENCIL_OP_KEEP;
  local_b8.back.compareOp = VK_COMPARE_OP_NEVER;
  local_b8.back.compareMask = 0;
  local_b8.back.writeMask = 0;
  local_b8.back.reference = 0;
  local_b8.minDepthBounds = 0.0;
  local_148._20_8_ = 0;
  local_148._28_8_ = 0;
  local_148._36_8_ = 0;
  local_148._44_8_ = 0;
  local_148._52_8_ = 0;
  local_148._60_8_ = 0;
  local_148._116_8_ = 0;
  local_148._124_8_ = 0;
  pVVar2 = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
  local_148.pDynamicState = &local_1c8;
  local_148.layout._0_4_ = SUB84(pVVar2,0);
  local_148.layout._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  VVar3 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                    (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_148,
                     &VulkanRHI::GAllocationCallbacks,&this->EmptyFragmentStageLibrary);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,
               "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &EmptyFragmentStageLibrary)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x5cf);
  }
  return;
}

// CreateGfxEntry @ 145b611a0

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanPipelineStateCacheManager::CreateGfxEntry
          (FVulkanPipelineStateCacheManager *this,FGraphicsPipelineStateInitializer *param_1,
          FVulkanDescriptorSetsLayoutInfo *param_2,FGfxPipelineDesc *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  ESubpassHint EVar4;
  EPrimitiveType EVar5;
  FRHIPixelShader *pFVar6;
  FRHIMeshShader *pFVar7;
  FRHIAmplificationShader *pFVar8;
  FRHIGeometryShader *pFVar9;
  FRHIBlendState *pFVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FRHIRasterizerState *pFVar13;
  code *pcVar14;
  bool bVar15;
  uchar uVar16;
  EVRSShadingRate EVar17;
  longlong lVar18;
  FRHIVertexShader *pFVar19;
  FRHIVertexShader *pFVar20;
  FRHIVertexShader *pFVar21;
  FRHIVertexShader *pFVar22;
  FRHIVertexShader *pFVar23;
  FRHIVertexShader *pFVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  FScriptContainerElement *pFVar29;
  FRHIVertexShader *pFVar30;
  longlong lVar31;
  int iVar32;
  undefined1 *puVar33;
  uint uVar34;
  FRHIVertexShader *pFVar35;
  FRHIVertexShader *pFVar36;
  char cVar37;
  undefined1 auStackY_818 [32];
  uint local_7e0;
  longlong local_7a0;
  TArrayView<FRHISamplerState_*,int> local_780;
  FUniformBufferGatherInfo local_770;
  VkPipelineDepthStencilStateCreateInfo local_738;
  FVulkanVertexInputStateInfo local_6c8;
  FVulkanRenderTargetLayout local_408;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_818;
  pFVar20 = (param_1->BoundShaderState).VertexShaderRHI;
  pFVar35 = (FRHIVertexShader *)0x0;
  iVar25 = 0;
  pFVar6 = (param_1->BoundShaderState).PixelShaderRHI;
  pFVar19 = pFVar20 + 1;
  if (pFVar20 == (FRHIVertexShader *)0x0) {
    pFVar19 = pFVar35;
  }
  pFVar7 = (param_1->BoundShaderState).MeshShaderRHI;
  pFVar20 = (FRHIVertexShader *)(pFVar6 + 1);
  if (pFVar6 == (FRHIPixelShader *)0x0) {
    pFVar20 = pFVar35;
  }
  pFVar8 = (param_1->BoundShaderState).AmplificationShaderRHI;
  pFVar21 = (FRHIVertexShader *)(pFVar7 + 1);
  if (pFVar7 == (FRHIMeshShader *)0x0) {
    pFVar21 = pFVar35;
  }
  pFVar9 = (param_1->BoundShaderState).GeometryShaderRHI;
  pFVar22 = (FRHIVertexShader *)(pFVar8 + 1);
  if (pFVar8 == (FRHIAmplificationShader *)0x0) {
    pFVar22 = pFVar35;
  }
  pFVar23 = (FRHIVertexShader *)(pFVar9 + 1);
  if (pFVar9 == (FRHIGeometryShader *)0x0) {
    pFVar23 = pFVar35;
  }
  FVulkanVertexInputStateInfo::FVulkanVertexInputStateInfo(&local_6c8);
  local_770.CodeHeaders[0] = (FVulkanShaderHeader *)0x0;
  local_770.CodeHeaders[1] = (FVulkanShaderHeader *)0x0;
  local_770.CodeHeaders[2] = (FVulkanShaderHeader *)0x0;
  local_770.CodeHeaders[3] = (FVulkanShaderHeader *)0x0;
  local_770.CodeHeaders[4] = (FVulkanShaderHeader *)0x0;
  local_770.CodeHeaders[5] = (FVulkanShaderHeader *)0x0;
  if (pFVar19 != (FRHIVertexShader *)0x0) {
    FVulkanVertexInputStateInfo::Generate
              (&local_6c8,
               (FVulkanVertexDeclaration *)(param_1->BoundShaderState).VertexDeclarationRHI,
               *(uint *)&pFVar19->field_0x74);
  }
  if ((pFVar20 != (FRHIVertexShader *)0x0) && (*(int *)&pFVar20->field_0x50 != 0)) {
    if ((param_1->SubpassHint == None) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("PSOInitializer.SubpassHint != ESubpassHint::None",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                            ,0x8e0,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if ((param_1->SubpassIndex == '\0') &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("PSOInitializer.SubpassIndex != 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                            ,0x8e1,L""), bVar15)) {
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  iVar32 = 0;
  if (pFVar19 != (FRHIVertexShader *)0x0) {
    FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
              (param_2,VK_SHADER_STAGE_VERTEX_BIT,Compute,
               (FVulkanShaderHeader *)&pFVar19->field_0x28,&local_770);
    iVar25 = 0;
    iVar32 = 1;
    if (pFVar19->field_0x101 != '\0') {
      iVar25 = 1;
      iVar32 = 1;
    }
  }
  if (pFVar20 != (FRHIVertexShader *)0x0) {
    FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
              (param_2,VK_SHADER_STAGE_FRAGMENT_BIT,NumComputeStages,
               (FVulkanShaderHeader *)&pFVar20->field_0x28,&local_770);
    iVar32 = iVar32 + 1;
    if (pFVar20->field_0x101 != '\0') {
      iVar25 = iVar25 + 1;
    }
  }
  if (pFVar21 != (FRHIVertexShader *)0x0) {
    FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
              (param_2,VK_SHADER_STAGE_MESH_BIT_EXT,Mesh,(FVulkanShaderHeader *)&pFVar21->field_0x28
               ,&local_770);
    iVar32 = iVar32 + 1;
    if (pFVar21->field_0x101 != '\0') {
      iVar25 = iVar25 + 1;
    }
  }
  if (pFVar22 != (FRHIVertexShader *)0x0) {
    FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
              (param_2,VK_SHADER_STAGE_TASK_BIT_EXT,NumRayTracingStages,
               (FVulkanShaderHeader *)&pFVar22->field_0x28,&local_770);
    iVar32 = iVar32 + 1;
    if (pFVar22->field_0x101 != '\0') {
      iVar25 = iVar25 + 1;
    }
  }
  if (pFVar23 != (FRHIVertexShader *)0x0) {
    FVulkanDescriptorSetsLayoutInfo::ProcessBindingsForStage
              (param_2,VK_SHADER_STAGE_GEOMETRY_BIT,Geometry,
               (FVulkanShaderHeader *)&pFVar23->field_0x28,&local_770);
    iVar32 = iVar32 + 1;
    if (pFVar23->field_0x101 != '\0') {
      iVar25 = iVar25 + 1;
    }
  }
  if (((iVar25 != 0) && (iVar25 != iVar32)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(NumBindlessShaders == 0) || (NumBindlessShaders == NumActiveShaders)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0x8f0,L"All shaders must be bindless or non-bindless."), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  local_780.DataPtr = (FRHISamplerState **)&param_1->ImmutableSamplerState;
  local_780.ArrayNum = 2;
  FVulkanDescriptorSetsLayoutInfo::FinalizeBindings<0>
            (param_2,this->Device,&local_770,&local_780,iVar25 != 0);
  if (((param_1->SubpassIndex != '\0') && (param_1->SubpassHint == None)) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("PSOInitializer.SubpassIndex == 0 || PSOInitializer.SubpassHint != ESubpassHint::None"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0x8f8,L"Subpass hint must be set if subpass index > 0."), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  param_3->SubpassIndex = param_1->SubpassIndex;
  pFVar10 = param_1->BlendState;
  if ((param_1->NumSamples < 2) || (pFVar10[0xe].field_0x1 == '\0')) {
    uVar16 = '\0';
  }
  else {
    uVar16 = '\x01';
  }
  param_3->UseAlphaToCoverage = uVar16;
  param_3->RasterizationSamples = param_1->NumSamples;
  EVar5 = param_1->PrimitiveType;
  uVar26 = 3;
  if (EVar5 != PT_TriangleList) {
    if (EVar5 == PT_TriangleStrip) {
      uVar26 = 4;
    }
    else if (EVar5 == PT_LineList) {
      uVar26 = 1;
    }
    else {
      uVar26 = 0;
      if (EVar5 != PT_PointList) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                            ,0x8b2,L"Unsupported EPrimitiveType %d");
        if (bVar15) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        uVar26 = 0x7fffffff;
      }
    }
  }
  param_3->Topology = uVar26;
  iVar25 = 0;
  if (param_1->RenderTargetsEnabled != 0) {
    iVar32 = param_1->RenderTargetsEnabled - 1;
    lVar18 = (longlong)iVar32;
    iVar25 = -1;
    if (-1 < iVar32) {
      do {
        iVar25 = iVar32;
        if ((param_1->RenderTargetFormats).Elements[lVar18] != '\0') break;
        iVar32 = iVar32 + -1;
        lVar18 = lVar18 + -1;
        iVar25 = -1;
      } while (-1 < lVar18);
    }
    iVar25 = iVar25 + 1;
  }
  EVar4 = param_1->SubpassHint;
  if (EVar4 == DeferredShadingSubpass) {
    if (1 < param_1->SubpassIndex) {
      iVar25 = 1;
    }
  }
  else if (EVar4 == DepthReadSubpass) {
    if (param_1->SubpassIndex != '\0') {
      iVar25 = 1;
    }
  }
  else if ((EVar4 == CustomResolveSubpass) && (iVar25 = 1, 1 < param_1->SubpassIndex)) {
    param_3->RasterizationSamples = 1;
  }
  piVar1 = &(param_3->ColorAttachmentStates).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,1,iVar25,&(param_3->ColorAttachmentStates).AllocatorInstance,piVar1,
             &(param_3->ColorAttachmentStates).ArrayMax);
  if (0 < (param_3->ColorAttachmentStates).ArrayNum) {
    puVar33 = &pFVar10[1].field_0xc;
    pFVar24 = pFVar35;
    pFVar30 = pFVar35;
    do {
      uVar34 = (uint)pFVar30;
      uVar26 = 0;
      if ((int)uVar34 < *piVar1) {
        uVar26 = ~uVar34 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar29 = (param_3->ColorAttachmentStates).AllocatorInstance.Data;
      pFVar30 = (FRHIVertexShader *)(ulonglong)(uVar34 + 1);
      (&pFVar24->field_0x0)[(longlong)pFVar29] = *(int *)(puVar33 + -0xc) != 0;
      (&pFVar24->field_0x1)[(longlong)pFVar29] = *puVar33;
      (&pFVar24->field_0x2)[(longlong)pFVar29] = puVar33[-8];
      (&pFVar24->field_0x3)[(longlong)pFVar29] = puVar33[-4];
      (&pFVar24->field_0x4)[(longlong)pFVar29] = puVar33[0xc];
      (&pFVar24->field_0x5)[(longlong)pFVar29] = puVar33[4];
      (&pFVar24->field_0x6)[(longlong)pFVar29] = puVar33[8];
      puVar2 = puVar33 + 0x10;
      puVar33 = puVar33 + 0x20;
      (&pFVar24->field_0x7)[(longlong)pFVar29] = *puVar2;
      pFVar24 = (FRHIVertexShader *)&pFVar24->field_0x8;
    } while ((int)(uVar34 + 1) < (param_3->ColorAttachmentStates).ArrayNum);
  }
  piVar1 = &(param_3->VertexBindings).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,local_6c8.Info.vertexBindingDescriptionCount,
             &(param_3->VertexBindings).AllocatorInstance,piVar1,&(param_3->VertexBindings).ArrayMax
            );
  pFVar24 = pFVar35;
  if (local_6c8.Info.vertexBindingDescriptionCount != 0) {
    do {
      uVar34 = (uint)pFVar24;
      uVar26 = 0;
      if ((int)uVar34 < *piVar1) {
        uVar26 = ~uVar34 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar29 = (param_3->VertexBindings).AllocatorInstance.Data;
      lVar18 = (longlong)(int)uVar34;
      *(short *)(pFVar29 + lVar18 * 8 + 4) =
           (short)local_6c8.Info.pVertexBindingDescriptions[(longlong)pFVar24].binding;
      *(short *)(pFVar29 + lVar18 * 8 + 6) =
           (short)local_6c8.Info.pVertexBindingDescriptions[(longlong)pFVar24].inputRate;
      *(uint *)(pFVar29 + lVar18 * 8) =
           local_6c8.Info.pVertexBindingDescriptions[(longlong)pFVar24].stride;
      pFVar24 = (FRHIVertexShader *)(ulonglong)(uVar34 + 1);
    } while (uVar34 + 1 < local_6c8.Info.vertexBindingDescriptionCount);
  }
  piVar1 = &(param_3->VertexAttributes).ArrayNum;
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,4,local_6c8.Info.vertexAttributeDescriptionCount,
             &(param_3->VertexAttributes).AllocatorInstance,piVar1,
             &(param_3->VertexAttributes).ArrayMax);
  uVar26 = 0;
  pFVar24 = pFVar35;
  if (local_6c8.Info.vertexAttributeDescriptionCount != 0) {
    do {
      uVar27 = (uint)pFVar24;
      uVar34 = uVar26;
      if ((int)uVar27 < *piVar1) {
        uVar34 = ~uVar27 >> 0x1f;
      }
      if ((uVar34 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      pFVar29 = (param_3->VertexAttributes).AllocatorInstance.Data;
      lVar18 = (longlong)(int)uVar27;
      *(uint *)(pFVar29 + lVar18 * 0x10 + 4) =
           local_6c8.Info.pVertexAttributeDescriptions[(longlong)pFVar24].binding;
      *(VkFormat *)(pFVar29 + lVar18 * 0x10 + 8) =
           local_6c8.Info.pVertexAttributeDescriptions[(longlong)pFVar24].format;
      *(uint *)(pFVar29 + lVar18 * 0x10) =
           local_6c8.Info.pVertexAttributeDescriptions[(longlong)pFVar24].location;
      *(uint *)(pFVar29 + lVar18 * 0x10 + 0xc) =
           local_6c8.Info.pVertexAttributeDescriptions[(longlong)pFVar24].offset;
      pFVar24 = (FRHIVertexShader *)(ulonglong)(uVar27 + 1);
    } while (uVar27 + 1 < local_6c8.Info.vertexAttributeDescriptionCount);
  }
  pTVar3 = &param_3->DescriptorSetLayoutBindings;
  iVar25 = (param_2->SetLayouts).ArrayNum;
  iVar32 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,iVar25,&pTVar3->AllocatorInstance,
                      &(param_3->DescriptorSetLayoutBindings).ArrayNum,
                      &(param_3->DescriptorSetLayoutBindings).ArrayMax);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar32 * 0x10,0,(longlong)iVar25 << 4);
  local_7e0 = 0;
  if (0 < (param_2->SetLayouts).ArrayNum) {
    local_7a0 = 0;
    pFVar24 = pFVar35;
    do {
      lVar18 = (longlong)(int)(uint)pFVar24;
      uVar34 = ~(uint)pFVar24 >> 0x1f;
      pFVar30 = pFVar35;
      pFVar36 = pFVar35;
      while( true ) {
        iVar25 = (int)pFVar24;
        uVar28 = (uint)pFVar30;
        uVar27 = uVar26;
        if (iVar25 < (param_2->SetLayouts).ArrayNum) {
          uVar27 = uVar34;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        if (*(int *)((param_2->SetLayouts).AllocatorInstance.Data + local_7a0 + 8) <= (int)uVar28)
        break;
        uVar27 = uVar26;
        if (iVar25 < (param_3->DescriptorSetLayoutBindings).ArrayNum) {
          uVar27 = uVar34;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar29 = (pTVar3->AllocatorInstance).Data + lVar18 * 0x10;
        iVar32 = *(int *)(pFVar29 + 8);
        if (iVar32 == *(int *)(pFVar29 + 0xc)) {
          iVar32 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,(ForAnyElementType *)pFVar29,(int *)(pFVar29 + 0xc));
        }
                    /* WARNING: Load size is inaccurate */
        FVar11.Data = *pFVar29;
        *(int *)(pFVar29 + 8) = iVar32 + 1;
        lVar31 = (longlong)iVar32;
        uVar27 = uVar26;
        if (iVar25 < (param_2->SetLayouts).ArrayNum) {
          uVar27 = uVar34;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar29 = (param_2->SetLayouts).AllocatorInstance.Data;
        uVar27 = uVar26;
        if ((int)uVar28 < *(int *)(pFVar29 + lVar18 * 0x18 + 8)) {
          uVar27 = ~uVar28 >> 0x1f;
        }
        if ((uVar27 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        lVar12 = *(longlong *)(pFVar29 + lVar18 * 0x18);
        *(undefined4 *)(FVar11.Data + lVar31 * 8) = *(undefined4 *)(&pFVar36->field_0x0 + lVar12);
        if ((*(int *)(&pFVar36->field_0x8 + lVar12) != 1) &&
           (bVar15 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<4541913072113025785>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                                ,0x2f9,"InState.descriptorCount == 1"), bVar15)) {
          pcVar14 = (code *)swi(3);
          (*pcVar14)();
          return;
        }
        pFVar24 = (FRHIVertexShader *)(ulonglong)local_7e0;
        FVar11.Data[lVar31 * 8 + 4] = *(FScriptContainerElement *)(&pFVar36->field_0x4 + lVar12);
        FVar11.Data[lVar31 * 8 + 5] = *(FScriptContainerElement *)(&pFVar36->field_0xc + lVar12);
        pFVar30 = (FRHIVertexShader *)(ulonglong)(uVar28 + 1);
        pFVar36 = (FRHIVertexShader *)&pFVar36->field_0x18;
      }
      local_7e0 = iVar25 + 1;
      pFVar24 = (FRHIVertexShader *)(ulonglong)local_7e0;
      local_7a0 = local_7a0 + 0x18;
    } while ((int)local_7e0 < (param_2->SetLayouts).ArrayNum);
  }
  pFVar13 = param_1->RasterizerState;
  (param_3->Rasterizer).PolygonMode = pFVar13[2].field_0x4;
  (param_3->Rasterizer).CullMode = pFVar13[2].field_0x8;
  (param_3->Rasterizer).DepthBiasSlopeScale = *(float *)&pFVar13[3].field_0x4;
  (param_3->Rasterizer).DepthBiasConstantFactor = *(float *)&pFVar13[2].field_0x14;
  FVulkanDepthStencilState::SetupCreateInfo
            ((FVulkanDepthStencilState *)param_1->DepthStencilState,param_1,&local_738);
  (param_3->DepthStencil).DepthCompareOp = (undefined1)local_738.depthCompareOp;
  (param_3->DepthStencil).bDepthTestEnable = local_738.depthTestEnable != 0;
  (param_3->DepthStencil).bDepthWriteEnable = local_738.depthWriteEnable != 0;
  (param_3->DepthStencil).bDepthBoundsTestEnable = local_738.depthBoundsTestEnable != 0;
  (param_3->DepthStencil).bStencilTestEnable = local_738.stencilTestEnable != 0;
  (param_3->DepthStencil).FrontFailOp = (undefined1)local_738.front.failOp;
  (param_3->DepthStencil).FrontPassOp = (undefined1)local_738.front.passOp;
  (param_3->DepthStencil).FrontDepthFailOp = (undefined1)local_738.front.depthFailOp;
  (param_3->DepthStencil).FrontCompareOp = (undefined1)local_738.front.compareOp;
  (param_3->DepthStencil).FrontCompareMask = (uint)(byte)local_738.front.compareMask;
  (param_3->DepthStencil).FrontWriteMask = local_738.front.writeMask;
  (param_3->DepthStencil).FrontReference = local_738.front.reference;
  (param_3->DepthStencil).BackFailOp = (undefined1)local_738.back.failOp;
  (param_3->DepthStencil).BackPassOp = (undefined1)local_738.back.passOp;
  (param_3->DepthStencil).BackDepthFailOp = (undefined1)local_738.back.depthFailOp;
  (param_3->DepthStencil).BackCompareOp = (undefined1)local_738.back.compareOp;
  (param_3->DepthStencil).BackCompareMask = (uint)(byte)local_738.back.compareMask;
  (param_3->DepthStencil).BackWriteMask = local_738.back.writeMask;
  (param_3->DepthStencil).BackReference = local_738.back.reference;
  pFVar24 = pFVar35;
  if (pFVar19 != (FRHIVertexShader *)0x0) {
    pFVar24 = *(FRHIVertexShader **)&pFVar19->field_0x20;
  }
  cVar37 = pFVar19 != (FRHIVertexShader *)0x0;
  param_3->ShaderKeys[0] = (ulong64)pFVar24;
  pFVar19 = pFVar35;
  if (pFVar20 != (FRHIVertexShader *)0x0) {
    pFVar19 = *(FRHIVertexShader **)&pFVar20->field_0x20;
    cVar37 = cVar37 + '\x01';
  }
  param_3->ShaderKeys[1] = (ulong64)pFVar19;
  pFVar20 = pFVar35;
  if (pFVar23 != (FRHIVertexShader *)0x0) {
    pFVar20 = *(FRHIVertexShader **)&pFVar23->field_0x20;
    cVar37 = cVar37 + '\x01';
  }
  param_3->ShaderKeys[2] = (ulong64)pFVar20;
  pFVar23 = pFVar35;
  if (pFVar21 != (FRHIVertexShader *)0x0) {
    pFVar23 = *(FRHIVertexShader **)&pFVar21->field_0x20;
    cVar37 = cVar37 + '\x01';
  }
  param_3->ShaderKeys[3] = (ulong64)pFVar23;
  if (pFVar22 != (FRHIVertexShader *)0x0) {
    pFVar35 = *(FRHIVertexShader **)&pFVar22->field_0x20;
    cVar37 = cVar37 + '\x01';
  }
  param_3->ShaderKeys[4] = (ulong64)pFVar35;
  param_3->ShaderKeyShared =
       (longlong)pFVar35 * 0x72e24e9ab7279a7d +
       (longlong)pFVar24 * 0x5ef8f45a8c290d4f + (longlong)pFVar19 * 0x2af653f0a395f0db +
       (longlong)pFVar20 * 0x7263f0232f3525f7 + (longlong)pFVar23 * 0x68def9ca7a946a87;
  if ((cVar37 == '\0') &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumShaders > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0x96c,L""), bVar15)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  FVulkanRenderTargetLayout::FVulkanRenderTargetLayout(&local_408,param_1);
  FGfxPipelineDesc::FRenderTargets::ReadFrom(&param_3->RenderTargets,&local_408);
  if (param_1->bAllowVariableRateShading == false) {
    EVar17 = VRSSR_1x1;
  }
  else {
    EVar17 = param_1->ShadingRate;
  }
  param_3->ShadingRate = EVar17;
  param_3->Combiner = -(param_1->bAllowVariableRateShading != false) & VRSRB_Max;
  FVulkanVertexInputStateInfo::~FVulkanVertexInputStateInfo(&local_6c8);
  return;
}

// CreateGfxPipelineFromEntry @ 145b61d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVulkanPipelineStateCacheManager::CreateGfxPipelineFromEntry
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1,
          FVulkanShader **param_2,EPSOPrecacheCompileType param_3)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  FGfxPipelineDesc *pFVar3;
  float fVar4;
  byte bVar5;
  EVRSShadingRate EVar6;
  EVRSRateCombiner EVar7;
  undefined4 uVar8;
  VkPipelineLayout_T *pVVar9;
  longlong lVar10;
  FVulkanDevice *pFVar11;
  VkRenderPass_T *pVVar12;
  VkExtent2D VVar13;
  undefined8 *puVar14;
  code *pcVar15;
  double dVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  FVulkanGraphicsPipelineState *pFVar20;
  bool bVar21;
  undefined1 uVar22;
  VkResult VVar23;
  uint uVar24;
  FName *pFVar25;
  FThreadSafeStaticStat<FStat_STAT_VulkanRegPSOCompileCount> FVar26;
  FThreadStats *pFVar27;
  FThreadStatsPool *pFVar28;
  FThreadSafeStaticStat<FStat_STAT_VulkanLibPSOCompileCount> FVar29;
  ForElementType<VkVertexInputBindingDescription> FVar30;
  ForElementType<VkVertexInputAttributeDescription> FVar31;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs> FVar32;
  FVulkanShader *pFVar33;
  ulonglong uVar34;
  VkShaderStageFlagBits VVar35;
  VkBlendOp *pVVar36;
  FScriptContainerElement *pFVar37;
  FScriptContainerElement *pFVar38;
  uint uVar39;
  int iVar40;
  EVRSRateCombiner *pEVar41;
  longlong lVar42;
  FName FVar43;
  EVRSRateCombiner *pEVar44;
  undefined1 *puVar45;
  uint uVar46;
  undefined1 auStackY_bb8 [32];
  undefined1 local_b58;
  undefined1 local_b57;
  EPSOPrecacheCompileType local_b56;
  FName local_b50;
  FName local_b48;
  undefined1 local_b38 [36];
  undefined1 *local_b14;
  ulonglong uStack_b0c;
  float local_b04;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  FName local_af8;
  FVulkanGraphicsPipelineState *local_af0;
  LARGE_INTEGER local_ae8;
  LARGE_INTEGER local_ae0;
  FName local_ad8;
  TArray<VkDynamicState,TSizedDefaultAllocator<32>_> local_ad0;
  FStatMessage local_ac0;
  FStatMessage local_ab0;
  FString local_aa0;
  FStatMessage local_a90;
  VkGraphicsPipelineCreateInfo local_a78;
  undefined4 local_9e8;
  undefined8 local_9e4;
  undefined8 uStack_9dc;
  undefined4 local_9d4;
  undefined8 uStack_9d0;
  undefined1 local_9c8 [20];
  int local_9b4;
  undefined4 uStack_9b0;
  undefined4 local_9ac;
  VkPipelineVertexInputStateCreateInfo local_9a8;
  VkPipeline_T *local_978;
  VkPipeline_T *local_970;
  VkPipeline_T *local_968;
  VkPipeline_T *local_960;
  VkPipelineInputAssemblyStateCreateInfo local_958;
  VkPipelineRenderingCreateInfo local_938;
  VkPipelineMultisampleStateCreateInfo local_910;
  VkPipelineViewportStateCreateInfo local_8e0;
  FName local_8b0;
  FName local_8a8;
  FName local_8a0;
  VkGraphicsPipelineCreateInfo local_898;
  undefined1 local_808 [36];
  undefined8 local_7e4;
  undefined8 uStack_7dc;
  undefined8 local_7d4;
  int iStack_7cc;
  undefined8 uStack_7c8;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 local_7b4;
  undefined1 local_7a8 [20];
  undefined1 local_794 [16];
  undefined1 local_784 [16];
  uint local_774;
  uint uStack_770;
  uint uStack_76c;
  uint uStack_768;
  undefined1 local_764 [16];
  undefined1 local_754 [16];
  undefined4 local_744;
  ForElementType<VkVertexInputBindingDescription> local_738;
  uint local_5b0;
  uint local_5ac;
  TStaticArray<VkFormat,8,4294967295> local_5a8;
  ForElementType<VkVertexInputAttributeDescription> local_588;
  uint local_380;
  uint local_37c;
  TRefCountPtr<FVulkanShaderModule> local_378 [4];
  longlong local_358;
  undefined1 local_350 [8];
  undefined4 local_348;
  undefined8 uStack_344;
  uint auStack_338 [28];
  VkPipelineShaderStageCreateInfo local_2c8 [5];
  VkPipelineColorBlendAttachmentState local_1d8 [8];
  char local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_bb8;
  uVar46 = 0;
  local_b56 = param_3;
  local_b48 = (FName)param_2;
  local_af0 = param_1;
  uStack_9d0 = (VkPipeline_T **)CONCAT44(uStack_9d0._4_4_,(undefined4)uStack_9d0);
  local_898.pNext = (undefined4 *)CONCAT44(local_898.pNext._4_4_,local_898.pNext._0_4_);
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x1e4000001000000) ==
      0x1e4000001000000) {
    bVar21 = FVulkanDevice::SupportsBindless(this->Device);
    uStack_9d0 = (VkPipeline_T **)CONCAT44(uStack_9d0._4_4_,(undefined4)uStack_9d0);
    local_898.pNext = (undefined4 *)CONCAT44(local_898.pNext._4_4_,local_898.pNext._0_4_);
    if (((bVar21) &&
        (uStack_9d0 = (VkPipeline_T **)CONCAT44(uStack_9d0._4_4_,(undefined4)uStack_9d0),
        local_898.pNext = (undefined4 *)CONCAT44(local_898.pNext._4_4_,local_898.pNext._0_4_),
        param_2[4] == (FVulkanShader *)0x0)) &&
       (uStack_9d0 = (VkPipeline_T **)CONCAT44(uStack_9d0._4_4_,(undefined4)uStack_9d0),
       local_898.pNext = (undefined4 *)CONCAT44(local_898.pNext._4_4_,local_898.pNext._0_4_),
       param_2[2] == (FVulkanShader *)0x0)) {
      pFVar33 = param_2[3];
      if (pFVar33 == (FVulkanShader *)0x0) {
        local_978 = this->VertexInputPipelineLibraryVS;
        pFVar33 = *param_2;
      }
      else {
        local_978 = this->VertexInputPipelineLibraryMS;
      }
      local_970 = pFVar33->PipelineLibrary;
      if (param_2[1] == (FVulkanShader *)0x0) {
        local_968 = this->EmptyFragmentStageLibrary;
      }
      else {
        local_968 = param_2[1]->PipelineLibrary;
      }
      local_960 = FindOrCreateFragmentOutputStateLibrary(this,param_1);
      local_9e8 = 0x3b9f36d0;
      local_9d4 = 0;
      local_898._4_4_ = 0;
      local_898.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
      uStack_9d0 = &local_978;
      local_898._132_8_ = 0;
      local_898._140_4_ = 0;
      local_898.pNext = &local_9e8;
      if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
        uVar46 = 0x400;
      }
      local_898.flags = uVar46 | 0x20000000;
      local_9e4 = 0;
      uStack_9dc = 0x400000000;
      local_898.pDynamicState._4_4_ = 0;
      local_898.renderPass._0_4_ = 0;
      local_898._20_8_ = 0;
      local_898._28_8_ = 0;
      local_898._36_8_ = 0;
      local_898._44_8_ = 0;
      local_898._52_8_ = 0;
      local_898._60_8_ = 0;
      local_898._68_8_ = 0;
      local_898._76_8_ = 0;
      local_898._84_8_ = 0;
      local_898._92_8_ = 0;
      local_898._116_8_ = 0;
      local_898._124_8_ = 0;
      pVVar9 = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
      local_898.layout._0_4_ = SUB84(pVVar9,0);
      local_898.layout._4_4_ = (undefined4)((ulonglong)pVVar9 >> 0x20);
      VVar23 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                         (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_898,
                          &VulkanRHI::GAllocationCallbacks,&param_1->VulkanPipeline);
      if (VVar23 == VK_SUCCESS) {
        FVar29 = StatPtr_STAT_VulkanLibPSOCompileCount;
        if (StatPtr_STAT_VulkanLibPSOCompileCount ==
            (FThreadSafeStaticStat<FStat_STAT_VulkanLibPSOCompileCount>)0x0) {
          pFVar25 = ::FName::FName(&local_8b0,"STAT_VulkanLibPSOCompileCount");
          FVar29 = (FThreadSafeStaticStat<FStat_STAT_VulkanLibPSOCompileCount>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanLibPSOCompileCount,
                              *pFVar25,L"Library PSO Compile Count",
                              "STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
                              L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,
                              MCR_Invalid);
        }
        FVar43 = *(FName *)FVar29;
        if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          local_b48 = FVar43;
          pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar27 == (FThreadStats *)0x0) {
            pFVar28 = FThreadStatsPool::Get();
            pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
          }
          local_ac0.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
          local_ac0.StatData.Pad[0] = '\x01';
          local_ac0.StatData.Pad[1] = '\0';
          local_ac0.StatData.Pad[2] = '\0';
          local_ac0.StatData.Pad[3] = '\0';
          local_ac0.StatData.Pad[4] = '\0';
          local_ac0.StatData.Pad[5] = '\0';
          local_ac0.StatData.Pad[6] = '\0';
          local_ac0.StatData.Pad[7] = '\0';
          local_b50 = FVar43;
          local_ac0.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
          FThreadStats::AddStatMessage(pFVar27,&local_ac0);
          FStatsTrace::Add(&local_b50,1);
          if (pFVar27->ScopeCount == 0) {
            FThreadStats::Flush(pFVar27,false,false);
            return true;
          }
          if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar27,false,false);
          }
        }
        return true;
      }
      VulkanRHI::VerifyVulkanResult
                (VVar23,"Result",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x65b);
    }
  }
  FVar26 = StatPtr_STAT_VulkanRegPSOCompileCount;
  if (StatPtr_STAT_VulkanRegPSOCompileCount ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanRegPSOCompileCount>)0x0) {
    pFVar25 = ::FName::FName(&local_8a8,"STAT_VulkanRegPSOCompileCount");
    FVar26 = (FThreadSafeStaticStat<FStat_STAT_VulkanRegPSOCompileCount>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRegPSOCompileCount,*pFVar25
                        ,L"Regular PSO Compile Count","STATGROUP_VulkanGraphicPipelineLibs",
                        "STATCAT_Advanced",L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,
                        false,false,MCR_Invalid);
  }
  FVar43 = *(FName *)FVar26;
  local_b50 = FVar43;
  if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
    if (pFVar27 == (FThreadStats *)0x0) {
      pFVar28 = FThreadStatsPool::Get();
      pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
    }
    local_ab0.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
    local_ab0.StatData.Pad[0] = '\x01';
    local_ab0.StatData.Pad[1] = '\0';
    local_ab0.StatData.Pad[2] = '\0';
    local_ab0.StatData.Pad[3] = '\0';
    local_ab0.StatData.Pad[4] = '\0';
    local_ab0.StatData.Pad[5] = '\0';
    local_ab0.StatData.Pad[6] = '\0';
    local_ab0.StatData.Pad[7] = '\0';
    local_af8 = FVar43;
    local_ab0.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(pFVar27,&local_ab0);
    FStatsTrace::Add(&local_af8,1);
    if (pFVar27->ScopeCount == 0) {
      FThreadStats::Flush(pFVar27,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(pFVar27,false,false);
    }
  }
  local_358 = 0;
  local_378[0].Reference = (FVulkanShaderModule *)0x0;
  local_378[1].Reference = (FVulkanShaderModule *)0x0;
  local_378[2].Reference = (FVulkanShaderModule *)0x0;
  local_378[3].Reference = (FVulkanShaderModule *)0x0;
  FVulkanGraphicsPipelineState::GetOrCreateShaderModules
            (param_1,(TRefCountPtr<FVulkanShaderModule> (*) [5])local_378,param_2);
  iVar40 = (param_1->Desc).ColorAttachmentStates.ArrayNum;
  local_a78.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_a78._132_8_ = 0;
  local_a78._140_4_ = 0;
  local_a78.pDynamicState._4_4_ = 0;
  local_a78.renderPass._0_4_ = 0;
  local_a78._4_4_ = 0;
  local_a78.pNext._0_4_ = 0;
  local_a78.pNext._4_4_ = 0;
  local_a78.flags = 0;
  local_a78.stageCount = 0;
  local_a78.pStages._0_4_ = 0;
  local_a78.pStages._4_4_ = 0;
  local_a78.pVertexInputState._0_4_ = 0;
  local_a78.pVertexInputState._4_4_ = 0;
  local_a78.pInputAssemblyState._0_4_ = 0;
  local_a78.pInputAssemblyState._4_4_ = 0;
  local_a78.pTessellationState._0_4_ = 0;
  local_a78.pTessellationState._4_4_ = 0;
  local_a78.pViewportState._0_4_ = 0;
  local_a78.pViewportState._4_4_ = 0;
  local_a78.pRasterizationState._0_4_ = 0;
  local_a78.pRasterizationState._4_4_ = 0;
  local_a78.pMultisampleState._0_4_ = 0;
  local_a78.pMultisampleState._4_4_ = 0;
  local_a78.pDepthStencilState._0_4_ = 0;
  local_a78.pDepthStencilState._4_4_ = 0;
  local_a78.pColorBlendState._0_4_ = 0;
  local_a78.pColorBlendState._4_4_ = 0;
  local_a78.pDynamicState._0_4_ = 0;
  local_a78.renderPass._4_4_ = 0;
  local_a78.subpass = 0;
  local_a78._124_8_ = 0;
  pVVar9 = param_1->Layout->PipelineLayout;
  local_a78.layout._0_4_ = SUB84(pVVar9,0);
  local_a78.layout._4_4_ = (undefined4)((ulonglong)pVVar9 >> 0x20);
  local_7d4 = 0;
  uStack_7c8._0_4_ = 0;
  local_808._32_4_ = VK_FORMAT_R8G8B8_SSCALED;
  local_7e4 = 0;
  uStack_7dc = 0;
  local_7b4 = 0;
  uStack_7c8._4_4_ = 0;
  uStack_7c0 = 0;
  uStack_7bc = 0;
  uStack_7b8 = 0;
  iStack_7cc = iVar40;
  memset(local_1d8,0,0x100);
  uVar46 = 0xffffffff;
  if (*(FVulkanShader **)((longlong)local_b48 + 8) != (FVulkanShader *)0x0) {
    uVar46 = ((*(FVulkanShader **)((longlong)local_b48 + 8))->CodeHeader).InOutMask;
  }
  uVar39 = 0;
  if (0 < iVar40) {
    lVar42 = 0;
    pVVar36 = &local_1d8[0].colorBlendOp;
    do {
      uVar24 = 0;
      if ((int)uVar39 < (param_1->Desc).ColorAttachmentStates.ArrayNum) {
        uVar24 = ~uVar39 >> 0x1f;
      }
      if (uVar24 == 0) {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar21) {
          pcVar15 = (code *)swi(3);
          uVar22 = (*pcVar15)();
          return (bool)uVar22;
        }
      }
      pFVar38 = (param_1->Desc).ColorAttachmentStates.AllocatorInstance.Data;
      ((VkPipelineColorBlendAttachmentState *)(pVVar36 + -3))->blendEnable =
           (uint)(pFVar38[lVar42] != (FScriptContainerElement)0x0);
      *pVVar36 = (uint)(byte)pFVar38[lVar42 + 1];
      pVVar36[-2] = (uint)(byte)pFVar38[lVar42 + 2];
      pVVar36[-1] = (uint)(byte)pFVar38[lVar42 + 3];
      pVVar36[3] = (uint)(byte)pFVar38[lVar42 + 4];
      pVVar36[1] = (uint)(byte)pFVar38[lVar42 + 5];
      pVVar36[2] = (uint)(byte)pFVar38[lVar42 + 6];
      pVVar36[4] = (uint)(byte)pFVar38[lVar42 + 7];
      if ((uVar46 & 1) == 0) {
        pVVar36[4] = 0;
      }
      uVar46 = uVar46 >> 1;
      uVar39 = uVar39 + 1;
      lVar42 = lVar42 + 8;
      pVVar36 = pVVar36 + 8;
    } while ((int)uVar39 < (param_1->Desc).ColorAttachmentStates.ArrayNum);
  }
  uStack_7c8 = local_1d8;
  local_8e0.sType = VK_STRUCTURE_TYPE_PIPELINE_VIEWPORT_STATE_CREATE_INFO;
  local_8e0._36_8_ = 0;
  local_8e0.pScissors._4_4_ = 0;
  uStack_7c0 = (undefined4)___xmm_3f8000003f8000003f8000003f800000;
  uStack_7bc = (undefined4)((ulonglong)___xmm_3f8000003f8000003f8000003f800000 >> 0x20);
  uStack_7b8 = (undefined4)_UNK_15076b1f8;
  local_7b4 = (undefined4)((ulonglong)_UNK_15076b1f8 >> 0x20);
  local_8e0._4_8_ = 0;
  local_8e0._12_8_ = 0;
  local_8e0._20_8_ =
       (ulonglong)~(uint)((this->Device->OptionalDeviceExtensions).field0_0x0.Packed >> 0x35) &
       0xffffffff00000001;
  local_910.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  local_8e0._28_8_ =
       ((ulonglong)~(uint)((this->Device->OptionalDeviceExtensions).field0_0x0.Packed >> 0x35) & 1)
       << 0x20;
  local_910.alphaToOneEnable = 0;
  local_910.rasterizationSamples._0_2_ = (param_1->Desc).RasterizationSamples;
  local_910._28_8_ = 0;
  if ((undefined2)local_910.rasterizationSamples == 0) {
    local_910.rasterizationSamples._0_2_ = 1;
  }
  local_910._22_6_ = 0;
  local_910._36_8_ = (ulonglong)(param_1->Desc).UseAlphaToCoverage << 0x20;
  local_910._4_8_ = 0;
  local_910._12_8_ = 0;
  memset(local_2c8,0,0xf0);
  local_a78.pStages = local_2c8;
  uVar34 = 0;
  iVar40 = 0;
  local_a78.stageCount = 0;
  lVar42 = (longlong)local_378 - (longlong)local_b48;
  FVar43 = local_b48;
  do {
    if ((*(longlong *)(lVar42 + (longlong)FVar43) != 0) &&
       (*(FVulkanShader **)FVar43 != (FVulkanShader *)0x0)) {
      local_2c8[uVar34].sType = VK_STRUCTURE_TYPE_PIPELINE_SHADER_STAGE_CREATE_INFO;
      if (iVar40 == 0) {
        VVar35 = VK_SHADER_STAGE_VERTEX_BIT;
      }
      else if (iVar40 == 1) {
        VVar35 = VK_SHADER_STAGE_FRAGMENT_BIT;
      }
      else if (iVar40 == 2) {
        VVar35 = VK_SHADER_STAGE_GEOMETRY_BIT;
      }
      else if (iVar40 == 3) {
        VVar35 = VK_SHADER_STAGE_MESH_BIT_EXT;
      }
      else if (iVar40 == 4) {
        VVar35 = VK_SHADER_STAGE_TASK_BIT_EXT;
      }
      else {
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanCommon.h"
                            ,0x5e,L"Invalid graphic shader stage: %d");
        if (bVar21) {
          pcVar15 = (code *)swi(3);
          uVar22 = (*pcVar15)();
          return (bool)uVar22;
        }
        bVar21 = ::FDebug::CheckVerifyFailedImpl2
                           ("false",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                            ,0x45,L"Undefined shader stage %d");
        if (bVar21) {
          pcVar15 = (code *)swi(3);
          uVar22 = (*pcVar15)();
          return (bool)uVar22;
        }
        uVar34 = (ulonglong)local_a78.stageCount;
        VVar35 = VK_SHADER_STAGE_ALL;
      }
      lVar10 = *(longlong *)(lVar42 + (longlong)FVar43);
      local_2c8[uVar34].stage = VVar35;
      local_2c8[uVar34].module = *(VkShaderModule_T **)(lVar10 + 0x10);
      TCString<char>::SnprintfImpl(local_d8 + uVar34 * 0x18,0x18,"main_%0.8x_%0.8x");
      uVar34 = (ulonglong)local_a78.stageCount;
      local_2c8[uVar34].pName = local_d8 + uVar34 * 0x18;
      pFVar11 = this->Device;
      if (((pFVar11->OptionalDeviceExtensions).field0_0x0.Packed & 0x8000000000000) != 0) {
        pFVar33 = *(FVulkanShader **)FVar43;
        bVar5 = (pFVar33->CodeHeader).WaveSize;
        if (bVar5 != 0) {
          if (((uint)bVar5 <
               (pFVar11->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.
               minSubgroupSize) ||
             ((pFVar11->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.
              maxSubgroupSize < (uint)bVar5)) {
            bVar21 = false;
          }
          else {
            bVar21 = true;
          }
          if ((((pFVar11->OptionalDeviceExtensionProperties).SubgroupSizeControlProperties.
                requiredSubgroupSizeStages & VVar35) == VVar35) && (bVar21)) {
            (&local_348)[uVar34 * 6] = 0x3b9e38e9;
            (&uStack_344)[uVar34 * 3] = 0;
            *(undefined8 *)(&stack0xfffffffffffffcc4 + uVar34 * 0x18) = 0;
            auStack_338[uVar34 * 6 + 1] = 0;
            auStack_338[uVar34 * 6] = (uint)(pFVar33->CodeHeader).WaveSize;
            local_2c8[uVar34].pNext = &local_348 + uVar34 * 6;
          }
        }
      }
      local_a78.stageCount = local_a78.stageCount + 1;
      uVar34 = (ulonglong)local_a78.stageCount;
    }
    pFVar20 = local_af0;
    iVar40 = iVar40 + 1;
    FVar43 = (FName)((longlong)FVar43 + 8);
  } while (iVar40 < 5);
  pFVar3 = &local_af0->Desc;
  if ((int)uVar34 == 0) {
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("PipelineInfo.stageCount != 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                        ,0x6ce,L"");
    if (bVar21) {
      pcVar15 = (code *)swi(3);
      uVar22 = (*pcVar15)();
      return (bool)uVar22;
    }
  }
  pFVar37 = (pFVar20->Desc).VertexBindings.AllocatorInstance.Data;
  iVar40 = (pFVar20->Desc).VertexBindings.ArrayNum;
  local_9a8.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
  local_9a8._36_4_ = 0;
  local_9a8.pVertexAttributeDescriptions._0_4_ = 0;
  local_9a8._4_8_ = 0;
  local_9a8._12_8_ = 0;
  pFVar38 = pFVar37 + (longlong)iVar40 * 8;
  local_9a8.pVertexAttributeDescriptions._4_4_ = 0;
  local_9a8.vertexBindingDescriptionCount = 0;
  local_9a8.pVertexBindingDescriptions._0_4_ = 0;
  local_9a8.pVertexBindingDescriptions._4_4_ = 0;
  local_9a8.vertexAttributeDescriptionCount = 0;
  local_738.SecondaryData = (ForElementType<VkVertexInputBindingDescription>)0x0;
  local_5b0 = 0;
  local_5ac = 0x20;
  while( true ) {
    if ((pFVar20->Desc).VertexBindings.ArrayNum != iVar40) {
      local_b58 = 0;
      `TCheckedPointerIterator<FGfxPipelineDesc::FVertexBinding_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b58);
    }
    if (pFVar37 == pFVar38) break;
    if (local_5b0 == local_5ac) {
      local_5b0 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputBindingDescription>_>
                            (0x40c,&local_738,(int *)&local_5ac);
    }
    lVar42 = (longlong)(int)local_5b0;
    local_5b0 = local_5b0 + 1;
    FVar30 = (ForElementType<VkVertexInputBindingDescription>)&local_738;
    if (local_738.SecondaryData != (ForElementType<VkVertexInputBindingDescription>)0x0) {
      FVar30 = local_738.SecondaryData;
    }
    *(uint *)((longlong)FVar30 + lVar42 * 0xc) = (uint)*(ushort *)(pFVar37 + 4);
    *(uint *)((uchar *)((longlong)FVar30 + 8) + lVar42 * 0xc) = (uint)*(ushort *)(pFVar37 + 6);
    uVar8 = *(undefined4 *)pFVar37;
    pFVar37 = pFVar37 + 8;
    *(undefined4 *)((uchar *)((longlong)FVar30 + 4) + lVar42 * 0xc) = uVar8;
  }
  iVar40 = (pFVar20->Desc).VertexAttributes.ArrayNum;
  pFVar38 = (pFVar20->Desc).VertexAttributes.AllocatorInstance.Data;
  FVar30 = (ForElementType<VkVertexInputBindingDescription>)&local_738;
  if (local_738.SecondaryData != (ForElementType<VkVertexInputBindingDescription>)0x0) {
    FVar30 = local_738.SecondaryData;
  }
  local_37c = 0x20;
  local_9a8.pVertexBindingDescriptions._0_4_ = FVar30._0_4_;
  local_9a8.pVertexBindingDescriptions._4_4_ = FVar30._4_4_;
  local_380 = 0;
  pFVar37 = pFVar38 + (longlong)iVar40 * 0x10;
  local_588.SecondaryData = (ForElementType<VkVertexInputAttributeDescription>)0x0;
  local_9a8.vertexBindingDescriptionCount = local_5b0;
  while( true ) {
    if ((pFVar20->Desc).VertexAttributes.ArrayNum != iVar40) {
      local_b57 = 0;
      `TCheckedPointerIterator<FGfxPipelineDesc::FVertexAttribute_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_b57);
    }
    if (pFVar38 == pFVar37) break;
    if (local_380 == local_37c) {
      local_380 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkVertexInputAttributeDescription>_>
                            (0x410,&local_588,(int *)&local_37c);
    }
    FVar31 = (ForElementType<VkVertexInputAttributeDescription>)&local_588;
    if (local_588.SecondaryData != (ForElementType<VkVertexInputAttributeDescription>)0x0) {
      FVar31 = local_588.SecondaryData;
    }
    lVar42 = (longlong)(int)local_380;
    local_380 = local_380 + 1;
    *(undefined4 *)((uchar *)((longlong)FVar31 + 4) + lVar42 * 0x10) = *(undefined4 *)(pFVar38 + 4);
    *(undefined4 *)((uchar *)((longlong)FVar31 + 8) + lVar42 * 0x10) = *(undefined4 *)(pFVar38 + 8);
    *(undefined4 *)((longlong)FVar31 + lVar42 * 0x10) = *(undefined4 *)pFVar38;
    pFVar1 = pFVar38 + 0xc;
    pFVar38 = pFVar38 + 0x10;
    *(undefined4 *)((uchar *)((longlong)FVar31 + 0xc) + lVar42 * 0x10) = *(undefined4 *)pFVar1;
  }
  FVar31 = (ForElementType<VkVertexInputAttributeDescription>)&local_588;
  if (local_588.SecondaryData != (ForElementType<VkVertexInputAttributeDescription>)0x0) {
    FVar31 = local_588.SecondaryData;
  }
  local_9a8.pVertexAttributeDescriptions._0_4_ = FVar31._0_4_;
  local_9a8.pVertexAttributeDescriptions._4_4_ = FVar31._4_4_;
  local_a78.pVertexInputState = &local_9a8;
  local_a78.pColorBlendState = (VkPipelineColorBlendStateCreateInfo *)(local_808 + 0x20);
  local_a78.pMultisampleState = &local_910;
  local_a78.pViewportState = &local_8e0;
  local_9a8.vertexAttributeDescriptionCount = local_380;
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) == 0) {
    pVVar12 = pFVar20->RenderPass->RenderPass;
    local_a78.renderPass._0_4_ = SUB84(pVVar12,0);
    local_a78.renderPass._4_4_ = (undefined4)((ulonglong)pVVar12 >> 0x20);
  }
  else {
    local_938.sType = VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO;
    local_938.stencilAttachmentFormat = VK_FORMAT_UNDEFINED;
    local_938._4_4_ = 0;
    local_938.pNext._0_4_ = 0;
    local_938.pNext._4_4_ = 0;
    local_938.viewMask = 0;
    local_938._20_8_ = 0;
    local_938._28_8_ = 0;
    FillDynamicRenderingCreateInfo(&(pFVar20->Desc).RenderTargets,&local_938,&local_5a8);
    local_938.pNext._0_4_ = local_a78.pNext._0_4_;
    local_938.pNext._4_4_ = local_a78.pNext._4_4_;
    local_a78.pNext = &local_938;
  }
  fVar4 = (pFVar20->Desc).Rasterizer.DepthBiasConstantFactor;
  pEVar41 = (EVRSRateCombiner *)0x0;
  local_a78.subpass = (uint)(pFVar20->Desc).SubpassIndex;
  local_958._28_4_ = 0;
  local_958.primitiveRestartEnable = 0;
  local_958.topology = (pFVar20->Desc).Topology;
  local_a78.pInputAssemblyState = &local_958;
  local_958.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
  local_b38._0_4_ = 0x17;
  uStack_b00 = 0x3f800000;
  uStack_afc = 0;
  local_b38._29_3_ = 0;
  local_b38[0x1c] = (pFVar20->Desc).Rasterizer.PolygonMode;
  local_b38[0x20] = (pFVar20->Desc).Rasterizer.CullMode;
  local_b38._33_3_ = 0;
  local_b14 = &DAT_100000001;
  local_958._4_8_ = 0;
  local_958._12_8_ = 0;
  local_b38._4_8_ = 0;
  local_b38._12_8_ = 0;
  if (fVar4 == 0.0) {
    local_b14 = (undefined1 *)0x1;
  }
  local_b04 = (pFVar20->Desc).Rasterizer.DepthBiasSlopeScale;
  local_744 = 0;
  local_9c8._4_16_ = ZEXT416(0);
  local_794._1_3_ = 0;
  local_794[0] = (pFVar20->Desc).DepthStencil.bDepthTestEnable;
  local_794[4] = (pFVar20->Desc).DepthStencil.bDepthWriteEnable;
  local_794._5_3_ = 0;
  local_794[8] = (pFVar20->Desc).DepthStencil.DepthCompareOp;
  local_794._9_3_ = 0;
  local_794[0xc] = (pFVar20->Desc).DepthStencil.bDepthBoundsTestEnable;
  local_794._13_3_ = 0;
  local_784._1_3_ = 0;
  local_784[0] = (pFVar20->Desc).DepthStencil.bStencilTestEnable;
  local_784[4] = (pFVar20->Desc).DepthStencil.FrontFailOp;
  local_784._5_3_ = 0;
  local_784[8] = (pFVar20->Desc).DepthStencil.FrontPassOp;
  local_784._9_3_ = 0;
  local_784[0xc] = (pFVar20->Desc).DepthStencil.FrontDepthFailOp;
  local_784._13_3_ = 0;
  local_774._1_3_ = 0;
  local_774._0_1_ = (pFVar20->Desc).DepthStencil.FrontCompareOp;
  uStack_770 = (pFVar20->Desc).DepthStencil.FrontCompareMask;
  uStack_76c = (pFVar20->Desc).DepthStencil.FrontWriteMask;
  uStack_768 = (pFVar20->Desc).DepthStencil.FrontReference;
  local_764._1_3_ = 0;
  local_764[0] = (pFVar20->Desc).DepthStencil.BackFailOp;
  local_764[4] = (pFVar20->Desc).DepthStencil.BackPassOp;
  local_764._5_3_ = 0;
  local_764[8] = (pFVar20->Desc).DepthStencil.BackDepthFailOp;
  local_764._9_3_ = 0;
  local_764[0xc] = (pFVar20->Desc).DepthStencil.BackCompareOp;
  local_764._13_3_ = 0;
  uVar17 = (pFVar20->Desc).DepthStencil.BackCompareMask;
  uVar18 = (pFVar20->Desc).DepthStencil.BackWriteMask;
  uVar19 = (pFVar20->Desc).DepthStencil.BackReference;
  local_754._8_4_ = uVar19;
  local_754._4_4_ = uVar18;
  local_754._0_4_ = uVar17;
  local_754._12_4_ = 0;
  local_a78.pRasterizationState = (VkPipelineRasterizationStateCreateInfo *)local_b38;
  local_a78.pDepthStencilState = (VkPipelineDepthStencilStateCreateInfo *)local_7a8;
  local_9b4 = 0;
  uStack_9b0 = 0;
  local_9ac = 0;
  uStack_b0c = (ulonglong)(uint)fVar4;
  local_b38._20_8_ = 0;
  local_7a8._0_4_ = 0x19;
  local_9c8._0_4_ = 0x1b;
  local_7a8._4_16_ = local_9c8._4_16_;
  FillDynamicStates(&local_ad0,pFVar20->Device,pFVar3);
  EVar6 = (pFVar20->Desc).ShadingRate;
  uStack_9b0 = SUB84(local_ad0.AllocatorInstance.Data,0);
  local_9ac = (undefined4)((ulonglong)local_ad0.AllocatorInstance.Data >> 0x20);
  local_9b4 = local_ad0.ArrayNum;
  local_a78.pDynamicState = (VkPipelineDynamicStateCreateInfo *)local_9c8;
  if ((EVar6 == VRSSR_1x1) &&
     (((pFVar20->Desc).RenderTargets.bHasFragmentDensityAttachment == '\0' ||
      ((pFVar20->Desc).Combiner == VRSRB_Passthrough)))) {
    bVar21 = false;
  }
  else {
    bVar21 = true;
  }
  local_808._8_8_ = (VkPipelineRenderingCreateInfo *)CONCAT44(local_808._12_4_,local_808._8_4_);
  if (((GRHIGlobals.VariableRateShading.SupportsPipeline != false) &&
      (local_808._8_8_ = (VkPipelineRenderingCreateInfo *)CONCAT44(local_808._12_4_,local_808._8_4_)
      , GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette)) &&
     (local_808._8_8_ = (VkPipelineRenderingCreateInfo *)CONCAT44(local_808._12_4_,local_808._8_4_),
     bVar21)) {
    EVar7 = (pFVar20->Desc).Combiner;
    VVar13 = (this->Device->FragmentSizeMap).Elements[EVar6];
    pEVar44 = pEVar41;
    if (FragmentCombinerOpMap._8_4_ != FragmentCombinerOpMap._52_4_) {
      lVar42 = 0x15516a158;
      if (FragmentCombinerOpMap._64_8_ != 0) {
        lVar42 = FragmentCombinerOpMap._64_8_;
      }
      uVar8 = *(int *)(lVar42 + ((ulonglong)(FragmentCombinerOpMap._72_4_ - 1) & (ulonglong)EVar7) *
                                4);
      while (pEVar44 = pEVar41, uVar8 != 0xffffffff) {
        pEVar44 = (EVRSRateCombiner *)((longlong)(int)uVar8 * 0x10 + FragmentCombinerOpMap._0_8_);
        if (*pEVar44 == EVar7) {
          local_808._8_8_ = local_a78.pNext;
          if (pEVar44 != (EVRSRateCombiner *)0x0) goto LAB_145b62c93;
          break;
        }
        uVar8 = *(undefined4 *)(pEVar44 + 8);
      }
    }
    bVar21 = ::FDebug::CheckVerifyFailedImpl2
                       ("Pair != nullptr",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                        ,0x27b,L"");
    local_808._8_8_ = local_a78.pNext;
    if (bVar21) {
      pcVar15 = (code *)swi(3);
      uVar22 = (*pcVar15)();
      return (bool)uVar22;
    }
LAB_145b62c93:
    local_808._24_4_ = *(undefined4 *)(pEVar44 + 4);
    local_808._4_4_ = 0;
    local_a78.pNext = local_808;
    local_808._0_4_ = VK_STRUCTURE_TYPE_PIPELINE_FRAGMENT_SHADING_RATE_STATE_CREATE_INFO_KHR;
    local_808._16_4_ = VVar13.width;
    local_808._20_4_ = VVar13.height;
    local_808._28_4_ = 3;
  }
  if (pFVar20->bUsesBindless != false) {
    local_a78.flags = local_a78.flags | 0x20000000;
  }
  QueryPerformanceCounter(&local_ae8);
  FVar43 = local_b48;
  dVar16 = (double)local_ae8.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  VVar23 = CreateVKPipeline(this,pFVar20,(FVulkanShader **)local_b48,&local_a78,local_b56);
  if (VVar23 == VK_SUCCESS) {
    QueryPerformanceCounter(&local_ae0);
    if ((__real_3f50624dd2f1a9fc <
         (double)local_ae0.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar16) &&
       (5 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    FVar32 = StatPtr_STAT_VulkanNumPSOs;
    if (StatPtr_STAT_VulkanNumPSOs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)0x0) {
      pFVar25 = ::FName::FName(&local_8a0,"STAT_VulkanNumPSOs");
      FVar32 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOs,*pFVar25,
                          L"Num PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
                          false,ST_int64,false,false,MCR_Invalid);
    }
    FVar43 = *(FName *)FVar32;
    local_b50 = FVar43;
    if (((FVar43 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar27 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar27 == (FThreadStats *)0x0) {
        pFVar28 = FThreadStatsPool::Get();
        pFVar27 = FThreadStatsPool::GetFromPool(pFVar28);
      }
      local_a90.NameAndInfo.Number = FVar43.Number & 0xffffafff | 0xa000;
      local_a90.StatData.Pad[0] = '\x01';
      local_a90.StatData.Pad[1] = '\0';
      local_a90.StatData.Pad[2] = '\0';
      local_a90.StatData.Pad[3] = '\0';
      local_a90.StatData.Pad[4] = '\0';
      local_a90.StatData.Pad[5] = '\0';
      local_a90.StatData.Pad[6] = '\0';
      local_a90.StatData.Pad[7] = '\0';
      local_ad8 = FVar43;
      local_a90.NameAndInfo.Index.Value = FVar43.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar27,&local_a90);
      FStatsTrace::Add(&local_ad8,1);
      if (pFVar27->ScopeCount == 0) {
        FThreadStats::Flush(pFVar27,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar27,false,false);
      }
    }
    pEVar41 = &DAT_00000001;
  }
  else {
    GfxShaderHashesToString(&local_aa0,(FVulkanShader **)FVar43);
    if (1 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if (local_aa0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_aa0.Data.AllocatorInstance.Data);
    }
  }
  if (local_ad0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ad0.AllocatorInstance.Data);
  }
  if (local_588.SecondaryData != (ForElementType<VkVertexInputAttributeDescription>)0x0) {
    FMemory::Free((void *)local_588.SecondaryData);
  }
  if (local_738.SecondaryData != (ForElementType<VkVertexInputBindingDescription>)0x0) {
    FMemory::Free((void *)local_738.SecondaryData);
  }
  lVar42 = 5;
  puVar45 = local_350;
  do {
    puVar14 = *(undefined8 **)(puVar45 + -8);
    puVar45 = puVar45 + -8;
    lVar42 = lVar42 + -1;
    if (puVar14 != (undefined8 *)0x0) {
      piVar2 = (int *)(puVar14 + 1);
      LOCK();
      iVar40 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if ((iVar40 == 1) && (piVar2 != (int *)0x0)) {
        (**(code **)*puVar14)(puVar14,1);
      }
    }
  } while (lVar42 != 0);
  return (bool)(char)pEVar41;
}

// CreateGfxPipelineFromLibrary @ 145b62fe0

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

bool __thiscall
FVulkanPipelineStateCacheManager::CreateGfxPipelineFromLibrary
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1,
          FVulkanShader **param_2,EPSOPrecacheCompileType param_3)

{
  VkPipelineLayout_T *pVVar1;
  FVulkanShader *pFVar2;
  VkResult VVar3;
  FVulkanPipelineStateCacheManager *pFVar4;
  bool bVar5;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined8 uStack_cc;
  undefined4 local_c4;
  VkPipeline_T **ppVStack_c0;
  VkPipeline_T *local_b8;
  VkPipeline_T *local_b0;
  VkPipeline_T *local_a8;
  VkPipeline_T *local_a0;
  VkGraphicsPipelineCreateInfo local_98;
  
  if ((param_2[4] == (FVulkanShader *)0x0) && (param_2[2] == (FVulkanShader *)0x0)) {
    pFVar4 = (FVulkanPipelineStateCacheManager *)&this->VertexInputPipelineLibraryMS;
    pFVar2 = param_2[3];
    if (param_2[3] == (FVulkanShader *)0x0) {
      pFVar4 = this;
      pFVar2 = *param_2;
    }
    local_b8 = pFVar4->VertexInputPipelineLibraryVS;
    local_b0 = pFVar2->PipelineLibrary;
    if (param_2[1] == (FVulkanShader *)0x0) {
      local_a8 = this->EmptyFragmentStageLibrary;
    }
    else {
      local_a8 = param_2[1]->PipelineLibrary;
    }
    local_a0 = FindOrCreateFragmentOutputStateLibrary(this,param_1);
    local_d8 = 0x3b9f36d0;
    local_c4 = 0;
    local_98._4_4_ = 0;
    local_98.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
    ppVStack_c0 = &local_b8;
    local_98._132_8_ = 0;
    local_98._140_4_ = 0;
    local_98.pNext = &local_d8;
    local_98.flags = 0;
    local_d4 = 0;
    if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
      local_98.flags = 0x400;
    }
    uStack_cc = 0x400000000;
    local_98.flags = local_98.flags | 0x20000000;
    local_98.pDynamicState._4_4_ = 0;
    local_98.renderPass._0_4_ = 0;
    local_98._20_8_ = 0;
    local_98._28_8_ = 0;
    local_98._36_8_ = 0;
    local_98._44_8_ = 0;
    local_98._52_8_ = 0;
    local_98._60_8_ = 0;
    local_98._68_8_ = 0;
    local_98._76_8_ = 0;
    local_98._84_8_ = 0;
    local_98._92_8_ = 0;
    local_98._116_8_ = 0;
    local_98._124_8_ = 0;
    pVVar1 = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
    local_98.layout._0_4_ = SUB84(pVVar1,0);
    local_98.layout._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
    VVar3 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                      (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_98,
                       &VulkanRHI::GAllocationCallbacks,&param_1->VulkanPipeline);
    if (VVar3 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar3,"Result",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x65b);
    }
    bVar5 = VVar3 == VK_SUCCESS;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

// CreateRayTracingPipeline @ 145b632b0

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkRayTracingShaderGroupTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkResult __thiscall
FVulkanPipelineStateCacheManager::CreateRayTracingPipeline
          (FVulkanPipelineStateCacheManager *this,VkRayTracingPipelineCreateInfoKHR *param_1,
          bool param_2,VkPipeline_T **param_3)

{
  VkResult VVar1;
  FPlatformRWLock *SRWLock;
  VkPipelineCache_T *pVVar2;
  
  if (param_2) {
    SRWLock = &(this->CurrentPrecompilingPSOCache).PipelineCacheLock;
    AcquireSRWLockShared((PSRWLOCK)SRWLock);
    pVVar2 = (this->CurrentPrecompilingPSOCache).PipelineCache;
    if (pVVar2 != (VkPipelineCache_T *)0x0) goto LAB_145b6330e;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  }
  SRWLock = &(this->GlobalPSOCache).PipelineCacheLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  pVVar2 = (this->GlobalPSOCache).PipelineCache;
LAB_145b6330e:
  VVar1 = (*VulkanDynamicAPI::vkCreateRayTracingPipelinesKHR)
                    (this->Device->Device,(VkDeferredOperationKHR_T *)0x0,pVVar2,1,param_1,
                     &VulkanRHI::GAllocationCallbacks,param_3);
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  return VVar1;
}

// CreateVKPipeline @ 145b63370

/* WARNING: Removing unreachable block (ram,0x000145b637bf) */
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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

VkResult __thiscall
FVulkanPipelineStateCacheManager::CreateVKPipeline
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1,
          FVulkanShader **param_2,VkGraphicsPipelineCreateInfo *param_3,
          EPSOPrecacheCompileType param_4)

{
  int *piVar1;
  FWindowsRecursiveMutex *pFVar2;
  TAtomic<FMinimalName> TVar3;
  bool bVar4;
  bool bVar5;
  EPSOPrecacheCompileType EVar6;
  bool bVar7;
  VkResult VVar8;
  VkResult VVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE>
  FVar11;
  FVulkanChunkedPipelineCacheManager *this_00;
  FThreadStats *pFVar12;
  FThreadStatsPool *pFVar13;
  longlong lVar14;
  FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_8_::FStat_STAT_VulkanPSOLRUSizeLookup>
  FVar15;
  FVulkanPipelineSize *pFVar16;
  TStatId TVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanPSOVulkanCreationTime> FVar18;
  FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_92_::FStat_STAT_VulkanPSOCacheMerge>
  FVar19;
  LARGE_INTEGER LVar20;
  undefined4 uVar21;
  PSRWLOCK SRWLock;
  bool bVar22;
  undefined3 in_stack_00000029;
  LARGE_INTEGER local_c8;
  LARGE_INTEGER local_c0;
  LARGE_INTEGER local_b8;
  ulong64 *local_b0;
  LARGE_INTEGER local_a8;
  uint local_a0;
  uint local_9c;
  FName local_98;
  VkPipelineCache_T *local_90;
  ulong64 local_88 [2];
  undefined1 local_78 [28];
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined8 local_50;
  ulong64 local_48;
  uint local_40;
  
  EVar6 = param_4;
  bVar22 = param_4 != NotSet;
  bVar7 = FVulkanChunkedPipelineCacheManager::IsEnabled();
  if (bVar7) {
    uVar21 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE =
           (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE>
            )0x0;
      pFVar10 = ::FName::FName((FName *)&local_c0.s,
                               "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE,*pFVar10,
                 L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS0);
    }
    FVar11 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE;
    if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE ==
        (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_c8.s,
                               "STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE");
      FVar11 = (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_5_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE,
                            *pFVar10,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_VKPIPELINE"
                            ,"STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    LVar20 = *(LARGE_INTEGER *)FVar11;
    bVar7 = false;
    bVar5 = false;
    local_b8.s.LowPart = 0;
    local_b8.s.HighPart = 0;
    if ((LVar20.s.LowPart != 0) || (LVar20.s.HighPart != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        param_4 = NotSet;
        in_stack_00000029 = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&param_4,(char *)*(FName *)((longlong)FVar11 + 0x10));
        bVar7 = false;
        bVar5 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c0 = LVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_c0.s,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x774);
          bVar7 = true;
          bVar5 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        local_c0 = LVar20;
        local_b8 = LVar20;
        FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
        bVar4 = true;
        uVar21 = local_b8.s.LowPart;
        goto LAB_145b6358d;
      }
    }
    bVar4 = false;
    LVar20 = local_b8;
LAB_145b6358d:
    param_1->PipelineCacheSize = 0x5000;
    this_00 = FVulkanChunkedPipelineCacheManager::Get();
    local_50 = 0;
    local_78._16_4_ = 0x510cc928;
    local_78._20_4_ = 1;
    local_78._0_4_ = 0x45b5b360;
    local_78._4_4_ = 1;
    unique0x10001732 = this;
    local_58 = param_3;
    VVar8 = FVulkanChunkedPipelineCacheManager::CreatePSO<FVulkanGraphicsPipelineState>
                      (this_00,param_1,bVar22,
                       (TUniqueFunction<VkResult___cdecl(FVulkanChunkedPipelineCacheManager::FPSOCreateFuncParams<FVulkanGraphicsPipelineState>_&)>
                        *)local_78);
    if (bVar5) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_9c = LVar20.s.HighPart & 0xffff6fffU | 0x6000;
        local_a0 = uVar21;
        QueryPerformanceCounter(&local_c0);
        local_a8.QuadPart = local_c0.QuadPart & 0xffffffff;
        FThreadStats::AddStatMessage(pFVar12,(FStatMessage *)&local_a8.s);
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
    return VVar8;
  }
  lVar14 = 0x138;
  if (EVar6 == NotSet) {
    lVar14 = 0x128;
  }
  local_c0.QuadPart =
       (longlong)(this->FragmentOutputStateCS).CriticalSection.Opaque1 + lVar14 + -0x68;
  local_90 = (VkPipelineCache_T *)0x0;
  bVar7 = false;
  uVar21 = 0;
  local_98.ComparisonIndex.Value = 0;
  _param_4 = (uint)(uint3)in_stack_00000029 << 8;
  local_88[0] = 0;
  if (this->bUseLRU != false) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_VulkanPSOLRUSizeLookup =
           (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_8_::FStat_STAT_VulkanPSOLRUSizeLookup>
            )0x0;
      pFVar10 = ::FName::FName((FName *)&local_c8.s,"STAT_VulkanPSOLRUSizeLookup");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOLRUSizeLookup,*pFVar10,
                 L"STAT_VulkanPSOLRUSizeLookup","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                 true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    FVar15 = StatPtr_STAT_VulkanPSOLRUSizeLookup;
    if (StatPtr_STAT_VulkanPSOLRUSizeLookup ==
        (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_8_::FStat_STAT_VulkanPSOLRUSizeLookup>
         )0x0) {
      pFVar10 = ::FName::FName(&local_98,"STAT_VulkanPSOLRUSizeLookup");
      FVar15 = (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_8_::FStat_STAT_VulkanPSOLRUSizeLookup>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOLRUSizeLookup,
                            *pFVar10,L"STAT_VulkanPSOLRUSizeLookup","STATGROUP_Quick",
                            "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    LVar20 = *(LARGE_INTEGER *)FVar15;
    bVar5 = false;
    bVar22 = false;
    local_a8.s.LowPart = 0;
    local_a8.s.HighPart = 0;
    if ((LVar20.s.LowPart == 0) && (LVar20.s.HighPart == 0)) {
LAB_145b638de:
      bVar4 = false;
      LVar20 = local_a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        _param_4 = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&param_4,(char *)*(FName *)((longlong)FVar15 + 0x10));
        bVar5 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c8 = LVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x7b7);
          bVar5 = true;
          bVar22 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145b638de;
      local_c8 = LVar20;
      local_a8 = LVar20;
      FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
      bVar5 = false;
      bVar4 = true;
    }
    pFVar2 = &this->LRUCS;
    local_88[0] = (param_1->Desc).ShaderKeyShared;
    if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pFVar16 = TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
                      *)&this->LRU2SizeList,local_88[0]);
    bVar7 = pFVar16 == (FVulkanPipelineSize *)0x0;
    if (bVar7) {
      local_98.ComparisonIndex.Value = 0;
    }
    else {
      local_98.ComparisonIndex.Value = pFVar16->PipelineSize;
    }
    param_4 = bVar7;
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
    if (bVar22) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar5) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar4) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_b0 = (ulong64 *)(LVar20.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
        QueryPerformanceCounter(&local_c8);
        local_b8.QuadPart = local_c8.QuadPart & 0xffffffff;
        FThreadStats::AddStatMessage(pFVar12,(FStatMessage *)&local_b8.s);
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
  }
  if (bVar7) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      StatPtr_STAT_VulkanPSOCreationTimeLRU =
           (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_20_::FStat_STAT_VulkanPSOCreationTimeLRU>
            )0x0;
      pFVar10 = ::FName::FName((FName *)&local_c8.s,"STAT_VulkanPSOCreationTimeLRU");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCreationTimeLRU,*pFVar10,
                 L"STAT_VulkanPSOCreationTimeLRU","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true
                 ,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS2);
    }
    TVar17 = FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l20::FStat_STAT_VulkanPSOCreationTimeLRU,1>
             ::GetStatId(&StatPtr_STAT_VulkanPSOCreationTimeLRU);
    bVar7 = false;
    bVar22 = false;
    local_a8.s.LowPart = 0;
    local_a8.s.HighPart = 0;
    TVar3 = (TVar17.StatIdPtr)->Name;
    LVar20 = (LARGE_INTEGER)*(LARGE_INTEGER *)TVar3;
    if ((LVar20.s.LowPart == 0) && (LVar20.s.HighPart == 0)) {
LAB_145b63b8c:
      bVar5 = false;
      LVar20 = local_a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_c8.QuadPart = local_c8.QuadPart & 0xffffffff00000000;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_c8.s,(char *)*(FName *)((longlong)TVar3 + 0x10));
        bVar7 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c8 = LVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)TVar3 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x7f9);
          bVar7 = true;
          bVar22 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145b63b8c;
      local_c8 = LVar20;
      local_a8 = LVar20;
      FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
      bVar5 = true;
    }
    local_78._0_4_ = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
    local_58._4_4_ = 0;
    local_78._4_4_ = 0;
    local_78._8_4_ = 0;
    local_78._12_4_ = 0;
    local_78._16_4_ = 0;
    local_78._20_4_ = 0;
    local_78._24_4_ = 0;
    uStack_5c = 0;
    local_58._0_4_ = 0;
    VVar8 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                      (this->Device->Device,(VkPipelineCacheCreateInfo *)local_78,
                       &VulkanRHI::GAllocationCallbacks,&local_90);
    if (VVar8 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar8,
                 "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &LocalPipelineCache)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x7ff);
    }
    VVar8 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                      (this->Device->Device,local_90,1,param_3,&VulkanRHI::GAllocationCallbacks,
                       &param_1->VulkanPipeline);
    if (bVar22) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_b0 = (ulong64 *)(LVar20.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
        QueryPerformanceCounter(&local_c8);
        local_b8.QuadPart = local_c8.QuadPart & 0xffffffff;
        FThreadStats::AddStatMessage(pFVar12,(FStatMessage *)&local_b8.s);
        piVar1 = &pFVar12->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar12,false,false);
          SRWLock = (PSRWLOCK)(local_c0.QuadPart + 8);
          goto LAB_145b63f3e;
        }
        if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar12,false,false);
        }
      }
    }
    SRWLock = (PSRWLOCK)(local_c0.QuadPart + 8);
  }
  else {
    FVar18 = StatPtr_STAT_VulkanPSOVulkanCreationTime;
    if (StatPtr_STAT_VulkanPSOVulkanCreationTime ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanPSOVulkanCreationTime>)0x0) {
      pFVar10 = ::FName::FName((FName *)&local_b8.s,"STAT_VulkanPSOVulkanCreationTime");
      FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanPSOVulkanCreationTime>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOVulkanCreationTime,
                          *pFVar10,L"PSO Vulkan Creation time","STATGROUP_VulkanPSO",
                          "STATCAT_Advanced",L"Vulkan PSO",true,true,ST_int64,true,false,MCR_Invalid
                         );
    }
    LVar20 = *(LARGE_INTEGER *)FVar18;
    bVar22 = false;
    bVar7 = false;
    local_a8.s.LowPart = 0;
    local_a8.s.HighPart = 0;
    if ((LVar20.s.LowPart == 0) && (LVar20.s.HighPart == 0)) {
LAB_145b63e10:
      bVar5 = false;
      LVar20 = local_a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_c8.QuadPart = local_c8.QuadPart & 0xffffffff00000000;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_c8.s,(char *)*(FName *)((longlong)FVar18 + 0x10));
        bVar22 = false;
        bVar7 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c8 = LVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x80d);
          bVar22 = true;
          bVar7 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145b63e10;
      local_c8 = LVar20;
      local_a8 = LVar20;
      FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
      bVar22 = false;
      bVar5 = true;
    }
    SRWLock = (PSRWLOCK)(local_c0.QuadPart + 8);
    AcquireSRWLockShared(SRWLock);
    VVar8 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                      (this->Device->Device,*(VkPipelineCache_T **)local_c0,1,param_3,
                       &VulkanRHI::GAllocationCallbacks,&param_1->VulkanPipeline);
    ReleaseSRWLockShared(SRWLock);
    if (bVar7) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar22) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((bVar5) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_b0 = (ulong64 *)(LVar20.QuadPart & 0xffff6fffffffffffU | 0x600000000000);
        QueryPerformanceCounter(&local_c8);
        local_b8.QuadPart = local_c8.QuadPart & 0xffffffff;
        FThreadStats::AddStatMessage(pFVar12,(FStatMessage *)&local_b8.s);
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
  }
LAB_145b63f3e:
  if (local_90 == (VkPipelineCache_T *)0x0) goto LAB_145b64494;
  if (param_4 != NotSet) {
    pFVar2 = &this->LRUCS;
    if (pFVar2 == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar2);
    pFVar16 = TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
              ::Find((TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
                      *)&this->LRU2SizeList,local_88[0]);
    if (pFVar16 == (FVulkanPipelineSize *)0x0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
        StatPtr_STAT_Vulkan_Calc_LRU_Size =
             (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_63_::FStat_STAT_Vulkan_Calc_LRU_Size>
              )0x0;
        pFVar10 = ::FName::FName((FName *)&local_b8.s,"STAT_Vulkan_Calc_LRU_Size");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_Calc_LRU_Size,*pFVar10,
                   L"STAT_Vulkan_Calc_LRU_Size","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                   true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS3);
      }
      TVar17 = FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::CreateVKPipeline'::__l63::FStat_STAT_Vulkan_Calc_LRU_Size,1>
               ::GetStatId(&StatPtr_STAT_Vulkan_Calc_LRU_Size);
      local_78._0_4_ = 0x81b;
      local_78._8_4_ = 0x510c5f80;
      local_78._12_4_ = 1;
      local_78._4_4_ = 5;
      local_78._16_4_ = 0x510c7b00;
      local_78._20_4_ = 1;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_a8.s,*(TStatIdData **)&(TVar17.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,(FSourceLocation *)local_78);
      local_c8.s.LowPart = 0;
      local_c8.s.HighPart = 0;
      if (local_90 != (VkPipelineCache_T *)0x0) {
        (*VulkanDynamicAPI::vkGetPipelineCacheData)
                  (this->Device->Device,local_90,(ulong64 *)&local_c8.QuadPart,(void *)0x0);
      }
      if ((FName)local_c8.QuadPart == (FName)0x0) {
        if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        local_c8.s.LowPart = 0x5000;
        local_c8.s.HighPart = 0;
      }
      local_48 = local_88[0];
      local_b8.QuadPart = (LONGLONG)local_88;
      local_40 = local_c8.s.LowPart;
      local_b0 = &local_48;
      TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanPipelineSize_const_&>_>
                ((TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
                  *)&this->LRU2SizeList,
                 (TPairInitializer<unsigned___int64_const_&,FVulkanPipelineSize_const_&> *)&param_4,
                 (bool *)&local_b8);
      local_98.ComparisonIndex.Value = local_c8.s.LowPart;
      if ((local_a0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (((byte)local_a0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if (((byte)local_a0 & 4) != 0) {
        FThreadStats::AddMessage((FName)local_a8.s,CycleScopeEnd);
      }
    }
    else {
      local_98.ComparisonIndex.Value = pFVar16->PipelineSize;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar2);
  }
  AcquireSRWLockExclusive(SRWLock);
  if (*(longlong *)local_c0 != 0) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      StatPtr_STAT_VulkanPSOCacheMerge =
           (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_92_::FStat_STAT_VulkanPSOCacheMerge>
            )0x0;
      pFVar10 = ::FName::FName((FName *)&local_b8.s,"STAT_VulkanPSOCacheMerge");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCacheMerge,*pFVar10,
                 L"STAT_VulkanPSOCacheMerge","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS4);
    }
    FVar19 = StatPtr_STAT_VulkanPSOCacheMerge;
    if (StatPtr_STAT_VulkanPSOCacheMerge ==
        (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_92_::FStat_STAT_VulkanPSOCacheMerge>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_b8.s,"STAT_VulkanPSOCacheMerge");
      FVar19 = (FThreadSafeStaticStat<_private:_enum_VkResult___cdecl_FVulkanPipelineStateCacheManager::CreateVKPipeline(FVulkanGraphicsPipelineState_*,FVulkanShader_*_*_const,VkGraphicsPipelineCreateInfo_const_&,FGraphicsPipelineStateInitializer::EPSOPrecacheCompileType)_::_92_::FStat_STAT_VulkanPSOCacheMerge>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCacheMerge,*pFVar10,
                            L"STAT_VulkanPSOCacheMerge","STATGROUP_Quick","STATCAT_Advanced",
                            L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    LVar20 = *(LARGE_INTEGER *)FVar19;
    bVar7 = false;
    bVar22 = false;
    local_a8.s.LowPart = 0;
    local_a8.s.HighPart = 0;
    if ((LVar20.s.LowPart == 0) && (LVar20.s.HighPart == 0)) {
LAB_145b64358:
      bVar5 = false;
      LVar20 = local_a8;
    }
    else {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        _param_4 = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&param_4,(char *)*(FName *)((longlong)FVar19 + 0x10));
        bVar7 = false;
        bVar22 = true;
        if (-1 < CpuChannel->Enabled) {
          local_c8 = LVar20;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    ((FName *)&local_c8.s,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0x837);
          bVar7 = true;
          bVar22 = true;
        }
      }
      if (FThreadStats::bPrimaryEnable == false) goto LAB_145b64358;
      local_c8 = LVar20;
      local_a8 = LVar20;
      FThreadStats::AddMessage((FName)LVar20.s,CycleScopeStart);
      bVar5 = true;
      uVar21 = local_a8.s.LowPart;
    }
    VVar9 = (*VulkanDynamicAPI::vkMergePipelineCaches)
                      (this->Device->Device,*(VkPipelineCache_T **)local_c0,1,&local_90);
    if (VVar9 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar9,
                 "VulkanRHI::vkMergePipelineCaches(Device->GetHandle(), PipelineCacheExclusive.Get(), 1, &LocalPipelineCache)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x838);
    }
    if (bVar22) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar7) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((((bVar5) && ((FName)LVar20.QuadPart != (FName)0x0)) &&
        (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar12 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar12 == (FThreadStats *)0x0) {
        pFVar13 = FThreadStatsPool::Get();
        pFVar12 = FThreadStatsPool::GetFromPool(pFVar13);
      }
      if (pFVar12->bWaitForExplicitFlush < pFVar12->ScopeCount) {
        local_b0 = (ulong64 *)
                   (CONCAT44(LVar20.s.HighPart,uVar21) & 0xffff6fffffffffff | 0x600000000000);
        QueryPerformanceCounter(&local_c0);
        local_b8.QuadPart = local_c0.QuadPart & 0xffffffff;
        FThreadStats::AddStatMessage(pFVar12,(FStatMessage *)&local_b8.s);
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
  }
  (*VulkanDynamicAPI::vkDestroyPipelineCache)
            (this->Device->Device,local_90,&VulkanRHI::GAllocationCallbacks);
  ReleaseSRWLockExclusive(SRWLock);
LAB_145b64494:
  if (VVar8 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar8,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x83d);
  }
  param_1->PipelineCacheSize = local_98.ComparisonIndex.Value;
  return VVar8;
}

// CreateVertexInputLibraries @ 145b64500

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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

void __thiscall
FVulkanPipelineStateCacheManager::CreateVertexInputLibraries(FVulkanPipelineStateCacheManager *this)

{
  FName FVar1;
  VkPipelineLayout_T *pVVar2;
  VkResult VVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumVertexInputLibs> FVar5;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName local_res8;
  VkDynamicState local_res10 [2];
  VkPipelineDynamicStateCreateInfo local_148;
  FStatMessage local_128;
  undefined4 local_118;
  undefined8 local_114;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  VkPipelineInputAssemblyStateCreateInfo local_100;
  VkGraphicsPipelineCreateInfo local_d8;
  VkPipelineVertexInputStateCreateInfo local_48;
  
  FVar5 = StatPtr_STAT_VulkanNumVertexInputLibs;
  if (StatPtr_STAT_VulkanNumVertexInputLibs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumVertexInputLibs>)0x0) {
    pFVar4 = ::FName::FName(&local_res8,"STAT_VulkanNumVertexInputLibs");
    FVar5 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumVertexInputLibs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumVertexInputLibs,*pFVar4,
                       L"Num VertexInput Libraries","STATGROUP_VulkanGraphicPipelineLibs",
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
    local_128.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
    local_128.StatData.Pad[0] = '\x01';
    local_128.StatData.Pad[1] = '\0';
    local_128.StatData.Pad[2] = '\0';
    local_128.StatData.Pad[3] = '\0';
    local_128.StatData.Pad[4] = '\0';
    local_128.StatData.Pad[5] = '\0';
    local_128.StatData.Pad[6] = '\0';
    local_128.StatData.Pad[7] = '\0';
    local_res8 = FVar1;
    local_128.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
    FThreadStats::AddStatMessage(this_00,&local_128);
    FStatsTrace::Add(&local_res8,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  local_118 = 0x3b9fac02;
  local_48._36_8_ = 0;
  local_48.pVertexAttributeDescriptions._4_4_ = 0;
  local_100.topology = VK_PRIMITIVE_TOPOLOGY_POINT_LIST;
  local_100.primitiveRestartEnable = 0;
  local_100._28_4_ = 0;
  local_148.pDynamicStates = local_res10;
  local_d8._132_8_ = 0;
  local_d8._140_4_ = 0;
  local_d8.pNext = &local_118;
  local_d8._4_4_ = 0;
  local_d8.flags = 0x20000800;
  if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
    local_d8.flags = 0x20800800;
  }
  local_48.sType = VK_STRUCTURE_TYPE_PIPELINE_VERTEX_INPUT_STATE_CREATE_INFO;
  local_d8.pTessellationState._0_4_ = 0;
  local_100.sType = VK_STRUCTURE_TYPE_PIPELINE_INPUT_ASSEMBLY_STATE_CREATE_INFO;
  local_d8.renderPass._0_4_ = 0;
  local_res10[0] = VK_DYNAMIC_STATE_PRIMITIVE_TOPOLOGY;
  local_114 = 0;
  uStack_10c = 0;
  uStack_108 = 1;
  uStack_104 = 0;
  local_d8._20_8_ = 0;
  local_d8.pStages._4_4_ = 0;
  local_res10[1] = 0x3ba02900;
  local_d8._84_8_ = 0;
  local_d8.pColorBlendState._4_4_ = 0;
  local_148.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  local_48._4_8_ = 0;
  local_48._12_8_ = 0;
  local_148.dynamicStateCount = 2;
  local_48._20_8_ = 0;
  local_48._28_8_ = 0;
  local_d8.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_100._4_8_ = 0;
  local_100._12_8_ = 0;
  local_148._4_8_ = 0;
  local_148._12_8_ = 0;
  local_d8._52_8_ = 0;
  local_d8._60_8_ = 0;
  local_d8._68_8_ = 0;
  local_d8._76_8_ = 0;
  local_d8._116_8_ = 0;
  local_d8._124_8_ = 0;
  pVVar2 = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
  local_d8.pVertexInputState = &local_48;
  local_d8.pInputAssemblyState = &local_100;
  local_d8.pDynamicState = &local_148;
  local_d8.layout._0_4_ = SUB84(pVVar2,0);
  local_d8.layout._4_4_ = (undefined4)((ulonglong)pVVar2 >> 0x20);
  VVar3 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                    (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_d8,
                     &VulkanRHI::GAllocationCallbacks,&this->VertexInputPipelineLibraryVS);
  if (VVar3 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar3,
               "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &VertexInputPipelineLibraryVS)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x576);
  }
  if ((*(uint *)&(this->Device->OptionalDeviceExtensions).field0_0x0 >> 0x12 & 1) != 0) {
    local_148.dynamicStateCount = 0;
    local_148.pDynamicStates._0_4_ = 0;
    local_148.pDynamicStates._4_4_ = 0;
    VVar3 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                      (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_d8,
                       &VulkanRHI::GAllocationCallbacks,&this->VertexInputPipelineLibraryMS);
    if (VVar3 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar3,
                 "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &VertexInputPipelineLibraryMS)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x57e);
    }
  }
  return;
}

// DestroyCache @ 145b64c60

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

void __thiscall
FVulkanPipelineStateCacheManager::DestroyCache(FVulkanPipelineStateCacheManager *this)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *pTVar7;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *pTVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::DestroyCache(void)_::_2_::FStat_STAT_Vulkan_DestroyCache_PSOLock>
  FVar12;
  longlong lVar13;
  int iVar14;
  FName FVar15;
  int iVar16;
  int iVar17;
  undefined1 *puVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  undefined1 local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_f0;
  FName local_e8;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *local_d8;
  int iStack_d0;
  uint uStack_cc;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 uStack_ac;
  int local_a8;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *local_a0;
  LPCRITICAL_SECTION local_98;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *local_90;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  FName local_60;
  FName local_58 [3];
  
  iVar17 = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Vulkan_DestroyCache_PSOLock ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::DestroyCache(void)_::_2_::FStat_STAT_Vulkan_DestroyCache_PSOLock>
         )0x0) {
      pFVar11 = ::FName::FName(&local_60,"STAT_Vulkan_DestroyCache_PSOLock");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_DestroyCache_PSOLock,*pFVar11,
                 L"STAT_Vulkan_DestroyCache_PSOLock","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                 true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_Vulkan_DestroyCache_PSOLock;
  if (StatPtr_STAT_Vulkan_DestroyCache_PSOLock ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::DestroyCache(void)_::_2_::FStat_STAT_Vulkan_DestroyCache_PSOLock>
       )0x0) {
    pFVar11 = ::FName::FName(local_58,"STAT_Vulkan_DestroyCache_PSOLock");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::DestroyCache(void)_::_2_::FStat_STAT_Vulkan_DestroyCache_PSOLock>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_DestroyCache_PSOLock,
                          *pFVar11,L"STAT_Vulkan_DestroyCache_PSOLock","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar15 = *(FName *)FVar12;
  bVar6 = false;
  bVar5 = false;
  local_e8.ComparisonIndex.Value = 0;
  local_e8.Number = 0;
  bVar10 = false;
  bVar9 = false;
  if ((FVar15.ComparisonIndex.Value.Value != 0) || (FVar15.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar6 = false;
      bVar5 = true;
      bVar10 = false;
      bVar9 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f0.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_f0.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_f0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x865);
        bVar6 = true;
        bVar5 = true;
        bVar10 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar9 = true;
      goto LAB_145b64dd3;
    }
  }
  bVar6 = bVar10;
  bVar5 = bVar9;
  bVar9 = false;
  FVar15 = local_e8;
LAB_145b64dd3:
  local_98 = (LPCRITICAL_SECTION)&this->GraphicsPSOLockedCS;
  if (local_98 == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(local_98);
  puVar1 = &(this->GraphicsPSOLockedMap).field_0x10;
  iVar16 = *(int *)&(this->GraphicsPSOLockedMap).field_0x28;
  local_d8 = &this->GraphicsPSOLockedMap;
  uStack_cc = 1;
  iVar14 = 0;
  iStack_bc = iVar17;
  local_b8 = iVar17;
  if (iVar16 != 0) {
    puVar19 = *(uint **)&(this->GraphicsPSOLockedMap).field_0x20;
    if (puVar19 == (uint *)0x0) {
      puVar19 = (uint *)puVar1;
    }
    uVar21 = *puVar19;
    local_b8 = 0;
    iVar17 = 0;
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar17;
      local_b8 = local_b8 + 0x20;
      iVar17 = iVar17 + 1;
      if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar17) {
        iVar14 = *(int *)&(this->GraphicsPSOLockedMap).field_0x28;
        iStack_bc = iVar16;
        goto LAB_145b64e95;
      }
      uVar21 = puVar19[lVar13 + 1];
    }
    iVar14 = *(int *)&(this->GraphicsPSOLockedMap).field_0x28;
    uStack_cc = -uVar21 & uVar21;
    uVar2 = (ulonglong)uStack_cc * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_a8 = (int)lVar13;
    iStack_bc = local_a8 + -1 + local_b8;
    if (iVar14 < iStack_bc) {
      iStack_bc = iVar16;
    }
  }
LAB_145b64e95:
  iStack_b0 = *(int *)&(this->GraphicsPSOLockedMap).field_0x8 -
              *(int *)&(this->GraphicsPSOLockedMap).field_0x34;
  uVar21 = *(uint *)&(this->GraphicsPSOLockedMap).field_0x28;
  uStack_c0 = 0xffffffff;
  uVar20 = uVar21 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uStack_cc,iVar17);
  TStack_88.CurrentBitIndex = iStack_bc;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar21 >> 5;
  TStack_88._28_4_ = iStack_bc;
  TStack_88.BaseBitIndex = local_b8;
  uStack_68 = CONCAT44(uStack_ac,iStack_b0);
  iStack_d0 = iVar17;
  local_c8 = puVar1;
  iStack_b4 = iStack_bc;
  local_a0 = local_d8;
  local_90 = local_d8;
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar21 < 0) || (iVar14 < (int)uVar21)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar7 = local_a0;
  uVar3 = *(uint *)&(this->GraphicsPSOLockedMap).field_0x28;
  if (uVar21 != uVar3) {
    puVar18 = *(undefined1 **)&(this->GraphicsPSOLockedMap).field_0x20;
    if (puVar18 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar21 = -1 << ((byte)uVar21 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar16 * 4);
    while (uVar21 == 0) {
      lVar13 = (longlong)iVar16;
      uVar20 = uVar20 + 0x20;
      iVar16 = iVar16 + 1;
      uVar21 = uVar3;
      if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145b64fb0;
      uVar21 = *(uint *)(puVar18 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar21 = (int)lVar13 + -1 + uVar20;
    if ((int)uVar3 < (int)uVar21) {
      uVar21 = uVar3;
    }
  }
LAB_145b64fb0:
  while( true ) {
    pTVar8 = local_90;
    if (*(int *)&local_90->field_0x8 - *(int *)&local_90->field_0x34 != (int)uStack_68) {
      `TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if (((TStack_88.CurrentBitIndex == uVar21) &&
        (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar7))
    break;
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"Leaked PSO %05d: RefCount=%d Handle=0x%p\n");
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
           *)&this->LRU2SizeList);
  TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
           *)&this->ComputePipelineEntries);
  LeaveCriticalSection(local_98);
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  return;
}

// FindOrAddLayout @ 145b67870

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

FVulkanLayout * __thiscall
FVulkanPipelineStateCacheManager::FindOrAddLayout
          (FVulkanPipelineStateCacheManager *this,FVulkanDescriptorSetsLayoutInfo *param_1,
          bool param_2,bool param_3)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FVulkanLayout *pFVar4;
  FVulkanLayout *pFVar5;
  longlong lVar6;
  FVulkanLayout *local_48;
  FVulkanDescriptorSetsLayoutInfo *local_40;
  FVulkanLayout **local_38;
  
  lpCriticalSection = &this->LayoutMapCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar3 = TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FVulkanDescriptorSetsLayoutInfo>
                    ((TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
                      *)&this->LayoutMap,param_1->Hash,param_1);
  pFVar4 = (FVulkanLayout *)0x0;
  if (iVar3 != -1) {
    lVar6 = (longlong)iVar3 * 0x140 + *(longlong *)&this->LayoutMap;
    pFVar5 = (FVulkanLayout *)(lVar6 + 0x130);
    if (lVar6 == 0) {
      pFVar5 = pFVar4;
    }
    if (pFVar5 != (FVulkanLayout *)0x0) {
      if (param_2 != (bool)*(char *)(pFVar5->_padding_ + 0x198)) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bGfxLayout == (*FoundLayout)->IsGfxLayout()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0x899,L"");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FVulkanLayout *)(*pcVar1)();
          return pFVar4;
        }
      }
      pFVar4 = (FVulkanLayout *)pFVar5->_padding_;
      goto LAB_145b6799f;
    }
  }
  pFVar5 = ::operator_new(0x1a0);
  if (pFVar5 != (FVulkanLayout *)0x0) {
    pFVar4 = FVulkanLayout::FVulkanLayout(pFVar5,this->Device,param_2,param_3);
  }
  local_48 = pFVar4;
  FVulkanDescriptorSetsLayoutInfo::CopyFrom
            ((FVulkanDescriptorSetsLayoutInfo *)&pFVar4->DescriptorSetLayout,param_1);
  FVulkanLayout::Compile(local_48,&this->DSetLayoutMap);
  local_38 = &local_48;
  local_40 = param_1;
  TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&>_>
            ((TSet<TTuple<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*>,TDefaultMapHashableKeyFuncs<FVulkanDescriptorSetsLayoutInfo,FVulkanLayout_*,0>,FDefaultSetAllocator>
              *)&this->LayoutMap,
             (TPairInitializer<FVulkanDescriptorSetsLayoutInfo_const_&,FVulkanLayout_*_const_&> *)
             &stack0x00000008,(bool *)&local_40);
  pFVar4 = local_48;
LAB_145b6799f:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar4;
}

// FindOrCreateFragmentOutputStateLibrary @ 145b679e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "VkShaderStageFlagBits": Some values do not have unique names */
/* WARNING: Enum "VkDynamicState": Some values do not have unique names */

VkPipeline_T * __thiscall
FVulkanPipelineStateCacheManager::FindOrCreateFragmentOutputStateLibrary
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  uint *puVar2;
  VkPipelineLayout_T *pVVar3;
  uint uVar4;
  int iVar5;
  VkResult VVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumFragOutputStateLibs> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar9;
  undefined1 *puVar10;
  VkPipeline_T *pVVar11;
  undefined1 auStackY_268 [32];
  TPairInitializer<unsigned_int_const_&,VkPipeline_T_*_const_&> local_208;
  VkPipeline_T *local_1f8;
  FStatMessage local_1f0;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 uStack_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  VkPipelineRenderingCreateInfo local_1c8;
  VkPipelineDynamicStateCreateInfo local_1a0;
  VkPipelineMultisampleStateCreateInfo local_180;
  VkGraphicsPipelineCreateInfo local_148;
  VkPipelineColorBlendStateCreateInfo local_b8;
  TStaticArray<VkFormat,8,4294967295> local_80;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  local_1c8.sType = VK_STRUCTURE_TYPE_PIPELINE_RENDERING_CREATE_INFO;
  local_1c8.stencilAttachmentFormat = VK_FORMAT_UNDEFINED;
  local_1c8._4_8_ = 0;
  local_1c8._12_8_ = 0;
  local_1c8.colorAttachmentCount = 0;
  local_1c8.pColorAttachmentFormats._0_4_ = 0;
  local_1c8.pColorAttachmentFormats._4_4_ = 0;
  local_1c8.depthAttachmentFormat = VK_FORMAT_UNDEFINED;
  FillDynamicRenderingCreateInfo(&(param_1->Desc).RenderTargets,&local_1c8,&local_80);
  uVar4 = (*FCrc::MemCrc32Func)
                    ((void *)CONCAT44(local_1c8.pColorAttachmentFormats._4_4_,
                                      local_1c8.pColorAttachmentFormats._0_4_),
                     local_1c8.colorAttachmentCount * 4,0);
  uVar4 = (*FCrc::MemCrc32Func)(&local_1c8.depthAttachmentFormat,4,uVar4);
  local_208.Value._0_4_ = (*FCrc::MemCrc32Func)(&local_1c8.stencilAttachmentFormat,4,uVar4);
  lpCriticalSection = &this->FragmentOutputStateCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (*(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x8 !=
      *(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x34) {
    puVar10 = *(undefined1 **)&(this->FragmentOutputStatePipelineLibraries).field_0x40;
    if (puVar10 == (undefined1 *)0x0) {
      puVar10 = &(this->FragmentOutputStatePipelineLibraries).field_0x38;
    }
    iVar5 = *(int *)(puVar10 +
                    (ulonglong)
                    (*(int *)&(this->FragmentOutputStatePipelineLibraries).field_0x48 - 1U &
                    (uint)local_208.Value) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this->FragmentOutputStatePipelineLibraries + (longlong)iVar5 * 0x18;
        if (*(uint *)(*(longlong *)&this->FragmentOutputStatePipelineLibraries +
                     (longlong)iVar5 * 0x18) == (uint)local_208.Value) {
          puVar9 = (undefined8 *)(lVar1 + 8);
          if (lVar1 == 0) {
            puVar9 = (undefined8 *)0x0;
          }
          if (puVar9 != (undefined8 *)0x0) {
            pVVar11 = (VkPipeline_T *)*puVar9;
            goto LAB_145b67e2e;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  FVar8 = StatPtr_STAT_VulkanNumFragOutputStateLibs;
  if (StatPtr_STAT_VulkanNumFragOutputStateLibs ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanNumFragOutputStateLibs>)0x0) {
    pFVar7 = ::FName::FName((FName *)&local_208,"STAT_VulkanNumFragOutputStateLibs");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumFragOutputStateLibs>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumFragOutputStateLibs,
                       *pFVar7,L"Num FragmentOutputState Libraries",
                       "STATGROUP_VulkanGraphicPipelineLibs","STATCAT_Advanced",
                       L"Vulkan Graphic Pipeline Libraries",true,false,ST_int64,false,false,
                       MCR_Invalid);
  }
  puVar2 = *(uint **)FVar8;
  local_208.Key = puVar2;
  if (((puVar2 != (uint *)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    local_1f0.StatData.Pad[0] = '\x01';
    local_1f0.StatData.Pad[1] = '\0';
    local_1f0.StatData.Pad[2] = '\0';
    local_1f0.StatData.Pad[3] = '\0';
    local_1f0.StatData.Pad[4] = '\0';
    local_1f0.StatData.Pad[5] = '\0';
    local_1f0.StatData.Pad[6] = '\0';
    local_1f0.StatData.Pad[7] = '\0';
    local_1f0.NameAndInfo =
         (FStatNameAndInfo)((ulonglong)puVar2 & 0xffffafffffffffff | 0xa00000000000);
    local_208.Key = puVar2;
    FThreadStats::AddStatMessage(this_00,&local_1f0);
    FStatsTrace::Add((FName *)&local_208,1);
    if (this_00->ScopeCount == 0) {
      FThreadStats::Flush(this_00,false,false);
    }
    else if (FThreadStats::bIsRawStatsActive != false) {
      FThreadStats::FlushRawStats(this_00,false,false);
    }
  }
  uStack_1d8 = &local_1c8;
  local_1e0 = 0x3b9fac02;
  local_1dc = 0;
  uStack_1d0 = 8;
  uStack_1cc = 0;
  local_180._36_8_ = 0;
  local_180.alphaToOneEnable = 0;
  local_b8.pAttachments._4_4_ = 0;
  local_b8.sType = VK_STRUCTURE_TYPE_PIPELINE_COLOR_BLEND_STATE_CREATE_INFO;
  local_1a0.pDynamicStates = (VkDynamicState *)&local_60;
  local_148._132_8_ = 0;
  local_148._140_4_ = 0;
  local_148.pNext = &local_1e0;
  local_b8._4_8_ = 0;
  local_b8._12_8_ = 0;
  local_180.sType = VK_STRUCTURE_TYPE_PIPELINE_MULTISAMPLE_STATE_CREATE_INFO;
  local_b8.logicOpEnable = 0;
  local_b8.logicOp = VK_LOGIC_OP_CLEAR;
  local_b8._28_8_ = 0;
  local_50 = 0x3ba1bb63;
  local_b8.blendConstants[0] = (float)___xmm_3f8000003f8000003f8000003f800000;
  local_b8.blendConstants[1] = (float)((ulonglong)___xmm_3f8000003f8000003f8000003f800000 >> 0x20);
  local_b8.blendConstants[2] = (float)_UNK_15076b1f8;
  local_b8.blendConstants[3] = (float)((ulonglong)_UNK_15076b1f8 >> 0x20);
  local_1a0.sType = VK_STRUCTURE_TYPE_PIPELINE_DYNAMIC_STATE_CREATE_INFO;
  local_60 = ___xmm_3ba1bb643ba1bb623ba1bb5f3ba1bb5d;
  uStack_58 = _UNK_1510ccad8;
  local_1a0.dynamicStateCount = 5;
  local_148.sType = VK_STRUCTURE_TYPE_GRAPHICS_PIPELINE_CREATE_INFO;
  local_148._4_4_ = 0;
  local_148.flags = 0x20000800;
  if (GVulkanGraphicPipelineLibraryLinkingMode == 1) {
    local_148.flags = 0x20800800;
  }
  local_148.pDepthStencilState._4_4_ = 0;
  local_148.renderPass._0_4_ = 0;
  local_148.pRasterizationState._4_4_ = 0;
  local_148.pDepthStencilState._0_4_ = 0;
  local_180._4_8_ = 0;
  local_180._12_8_ = 0;
  local_180.rasterizationSamples = 0;
  local_180.sampleShadingEnable = 0;
  local_180._28_8_ = 0;
  local_1a0._4_8_ = 0;
  local_1a0._12_8_ = 0;
  local_148._20_8_ = 0;
  local_148._28_8_ = 0;
  local_148._36_8_ = 0;
  local_148._44_8_ = 0;
  local_148._52_8_ = 0;
  local_148._60_8_ = 0;
  local_148._116_8_ = 0;
  local_148._124_8_ = 0;
  pVVar3 = this->Device->BindlessDescriptorManager->BindlessPipelineLayout;
  local_148.pColorBlendState = &local_b8;
  local_148.pMultisampleState = &local_180;
  local_148.layout._0_4_ = SUB84(pVVar3,0);
  local_148.layout._4_4_ = (undefined4)((ulonglong)pVVar3 >> 0x20);
  local_148.pDynamicState = &local_1a0;
  local_1f8 = (VkPipeline_T *)0x0;
  VVar6 = (*VulkanDynamicAPI::vkCreateGraphicsPipelines)
                    (this->Device->Device,(VkPipelineCache_T *)0x0,1,&local_148,
                     &VulkanRHI::GAllocationCallbacks,&local_1f8);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,
               "VulkanRHI::vkCreateGraphicsPipelines(Device->GetHandle(), VK_NULL_HANDLE, 1, &GraphicsPipelineCreateInfo, VULKAN_CPU_ALLOCATOR, &FragmentOutputStatePipelineLibrary)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x632);
  }
  local_1f0.StatData.Pad = (uchar  [8])&local_208.Value;
  local_1f0.NameAndInfo = (FStatNameAndInfo)&local_1f8;
  TSet<TTuple<unsigned_int,VkPipeline_T_*>,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_const_&,VkPipeline_T_*_const_&>_>
            ((TSet<TTuple<unsigned_int,VkPipeline_T_*>,TDefaultMapHashableKeyFuncs<unsigned_int,VkPipeline_T_*,0>,FDefaultSetAllocator>
              *)&this->FragmentOutputStatePipelineLibraries,&local_208,(bool *)&local_1f0);
  pVVar11 = local_1f8;
LAB_145b67e2e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pVVar11;
}

// GetOrCreateComputePipeline @ 145b69f90

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
FVulkanPipelineStateCacheManager::GetOrCreateComputePipeline
          (FVulkanPipelineStateCacheManager *this,TVulkanBaseShader<FRHIComputeShader,5> *param_1)

{
  FPlatformRWLock *SRWLock;
  TMap<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
  *this_00;
  code *pcVar1;
  double dVar2;
  ulong64 uVar3;
  bool bVar4;
  int iVar5;
  FVulkanComputePipeline *pFVar6;
  FVulkanComputePipeline **ppFVar7;
  longlong lVar8;
  undefined1 *puVar9;
  uint uVar10;
  int local_res8 [2];
  ulong64 local_res10;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  ulong64 *local_48 [5];
  
  if ((param_1 == (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ComputeShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xa94,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    pFVar6 = (FVulkanComputePipeline *)(*pcVar1)();
    return pFVar6;
  }
  local_res10 = *(ulong64 *)&param_1->field_0x130;
  SRWLock = &this->ComputePipelineLock;
  AcquireSRWLockShared((PSRWLOCK)SRWLock);
  this_00 = &this->ComputePipelineEntries;
  ppFVar7 = TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
            ::Find((TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
                    *)this_00,local_res10);
  if (ppFVar7 != (FVulkanComputePipeline **)0x0) {
    pFVar6 = *ppFVar7;
    ReleaseSRWLockShared((PSRWLOCK)SRWLock);
    return pFVar6;
  }
  ReleaseSRWLockShared((PSRWLOCK)SRWLock);
  QueryPerformanceCounter(&local_res18);
  dVar2 = (double)local_res18.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  pFVar6 = CreateComputePipelineFromShader(this,param_1);
  QueryPerformanceCounter(&local_res20);
  if ((__real_3f50624dd2f1a9fc <
       (double)local_res20.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar2) &&
     (5 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  uVar3 = local_res10;
  ppFVar7 = TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
            ::Find((TMapBase<unsigned___int64,FVulkanComputePipeline_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>_>
                    *)this_00,local_res10);
  if (ppFVar7 == (FVulkanComputePipeline **)0x0) {
    uVar10 = (int)(uVar3 >> 0x20) * 0x17 + (int)uVar3;
    if (*(int *)&(this->ComputePipelineEntries).field_0x8 !=
        *(int *)&(this->ComputePipelineEntries).field_0x34) {
      puVar9 = *(undefined1 **)&(this->ComputePipelineEntries).field_0x40;
      if (puVar9 == (undefined1 *)0x0) {
        puVar9 = &(this->ComputePipelineEntries).field_0x38;
      }
      iVar5 = *(int *)(puVar9 + (ulonglong)
                                (*(int *)&(this->ComputePipelineEntries).field_0x48 - 1U & uVar10) *
                                4);
      if (iVar5 != -1) {
        do {
          lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
          if (*(ulong64 *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) == uVar3) {
            if (lVar8 != 0) goto LAB_145b6a17d;
            break;
          }
          iVar5 = *(int *)(lVar8 + 0x10);
        } while (iVar5 != -1);
      }
    }
    local_48[0] = &local_res10;
    TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<unsigned___int64_const_&>_>
              ((TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
                *)this_00,(uint)local_res8,
               (TKeyInitializer<unsigned___int64_const_&> *)(ulonglong)uVar10,(bool *)local_48);
    lVar8 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_145b6a17d:
    *(FVulkanComputePipeline **)(lVar8 + 8) = pFVar6;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return pFVar6;
}

// InitAndLoad @ 145b6b920

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

void __thiscall
FVulkanPipelineStateCacheManager::InitAndLoad
          (FVulkanPipelineStateCacheManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  TConsoleVariableData<int> *pTVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  VkResult VVar6;
  longlong lVar7;
  FString *pFVar8;
  wchar_t *pwVar9;
  FPlatformFileManager *this_00;
  IPlatformFile *pIVar10;
  FDelegateHandle FVar11;
  FString local_58;
  VkPipelineCacheCreateInfo local_48;
  
  pTVar3 = GEnablePipelineCacheLoadCvar.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar7 = 4;
    if (!bVar5) goto LAB_145b6b95e;
  }
  lVar7 = 0;
LAB_145b6b95e:
  pTVar4 = GPipelineCacheFromShaderPipelineCacheCvar.Ref;
  if (*(int *)((longlong)pTVar3->ShadowedValue + lVar7) == 0) {
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else {
    bVar5 = IsInParallelGameThread();
    if ((bVar5) || (bVar5 = IsInGameThread(), lVar7 = 4, bVar5)) {
      lVar7 = 0;
    }
    if (*(int *)((longlong)pTVar4->ShadowedValue + lVar7) == 0) {
      Load(this,param_1,&this->GlobalPSOCache);
    }
    else {
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      pFVar8 = FVulkanGenericPlatform::GetCompiledPSOCacheTopFolderPath(&local_58);
      pFVar1 = &this->CompiledPSOCacheTopFolderPath;
      if (pFVar1 != pFVar8) {
        pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
        if (pFVar2 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar2);
        }
        (pFVar1->Data).AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
        (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (this->CompiledPSOCacheTopFolderPath).Data.ArrayNum = (pFVar8->Data).ArrayNum;
        (this->CompiledPSOCacheTopFolderPath).Data.ArrayMax = (pFVar8->Data).ArrayMax;
        (pFVar8->Data).ArrayNum = 0;
        (pFVar8->Data).ArrayMax = 0;
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      pwVar9 = FCommandLine::Get();
      bVar5 = FParse::Param(pwVar9,L"ClearVulkanBinaryProgramCache");
      if (bVar5) {
        pwVar9 = L"";
        if (4 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        this_00 = FPlatformFileManager::Get();
        pIVar10 = FPlatformFileManager::GetPlatformFile(this_00);
        if ((this->CompiledPSOCacheTopFolderPath).Data.ArrayNum != 0) {
          pwVar9 = (wchar_t *)(this->CompiledPSOCacheTopFolderPath).Data.AllocatorInstance.Data;
        }
        (**(code **)((longlong)*pIVar10 + 0x1f8))(pIVar10,pwVar9);
      }
      FVar11 = TMulticastDelegateRegistration<void___cdecl(FString_const_&,enum_EShaderPlatform,unsigned_int,FGuid_const_&,FShaderPipelineCache::FShaderCachePrecompileContext_&),FDefaultDelegateUserPolicy>
               ::AddRaw<FVulkanPipelineStateCacheManager>
                         (&FShaderPipelineCache::OnCachedOpened,
                          (FVulkanPipelineStateCacheManager *)&stack0x00000008,(pmf_3d5a4d91)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnShaderPipelineCacheOpenedDelegate).ID = *FVar11.ID;
      FVar11 = TMulticastDelegateRegistration<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
               ::AddRaw<FVulkanPipelineStateCacheManager>
                         ((TMulticastDelegateRegistration<void___cdecl(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&),FDefaultDelegateUserPolicy>
                           *)&FShaderPipelineCache::OnPrecompilationComplete,
                          (FVulkanPipelineStateCacheManager *)&stack0x00000008,(pmf_ffe1c4f2)this);
                    /* WARNING: Load size is inaccurate */
      (this->OnShaderPipelineCachePrecompilationCompleteDelegate).ID = *FVar11.ID;
    }
  }
  AcquireSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  if ((this->GlobalPSOCache).PipelineCache == (VkPipelineCache_T *)0x0) {
    local_48.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
    local_48.pInitialData._4_4_ = 0;
    local_48._4_8_ = 0;
    local_48._12_8_ = 0;
    local_48._20_8_ = 0;
    local_48._28_8_ = 0;
    VVar6 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                      (this->Device->Device,&local_48,&VulkanRHI::GAllocationCallbacks,
                       &(this->GlobalPSOCache).PipelineCache);
    if (VVar6 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar6,
                 "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x201);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000145b6bb94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  return;
}

// LRUAdd @ 145b6c110

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

void __thiscall
FVulkanPipelineStateCacheManager::LRUAdd
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  FName FVar2;
  TDoubleLinkedListNode *pTVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  longlong lVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize> FVar9;
  FThreadStats *pFVar10;
  FThreadStatsPool *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU> FVar12;
  TDoubleLinkedListNode *pTVar13;
  uchar auVar14 [8];
  uchar auVar15 [8];
  FName local_res18;
  FName local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_58;
  FStatMessage local_48;
  
  if (this->bUseLRU != false) {
    lpCriticalSection = &this->LRUCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((param_1->LRUNode != (TDoubleLinkedListNode *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PSO->LRUNode == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbd1,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((param_1->VulkanPipeline == (VkPipeline_T *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PSO->GetVulkanPipeline()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbd2,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar5 = CVarLRUMaxPipelineSize.Ref;
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar7 = 0;
    }
    else {
      lVar7 = 4;
    }
    uVar1 = *(uint *)((longlong)pTVar5->ShadowedValue + lVar7);
    this->LRUUsedPipelineSize = this->LRUUsedPipelineSize + param_1->PipelineCacheSize;
    this->LRUUsedPipelineCount = this->LRUUsedPipelineCount + 1;
    FVar9 = StatPtr_STAT_VulkanNumPSOLRUSize;
    if (StatPtr_STAT_VulkanNumPSOLRUSize ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize>)0x0) {
      pFVar8 = ::FName::FName(&local_68,"STAT_VulkanNumPSOLRUSize");
      FVar9 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRUSize,*pFVar8,
                         L"PSO LRU Size","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true
                         ,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar9;
    auVar14[4] = '\0';
    auVar14[5] = '\0';
    auVar14[6] = '\0';
    auVar14[7] = '\0';
    auVar14._0_4_ = this->LRUUsedPipelineSize;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_58.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res18 = FVar2;
      local_58.StatData.Pad = auVar14;
      local_58.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_58);
      FStatsTrace::Set(&local_res18,(long64)auVar14);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
    FVar12 = StatPtr_STAT_VulkanNumPSOLRU;
    if (StatPtr_STAT_VulkanNumPSOLRU == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU>)0x0) {
      pFVar8 = ::FName::FName(&local_60,"STAT_VulkanNumPSOLRU");
      FVar12 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRU,*pFVar8,
                          L"PSO LRU Elements","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO"
                          ,true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar12;
    auVar15[4] = '\0';
    auVar15[5] = '\0';
    auVar15[6] = '\0';
    auVar15[7] = '\0';
    auVar15._0_4_ = this->LRUUsedPipelineCount;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar10 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar10 == (FThreadStats *)0x0) {
        pFVar11 = FThreadStatsPool::Get();
        pFVar10 = FThreadStatsPool::GetFromPool(pFVar11);
      }
      local_48.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_res20 = FVar2;
      local_48.StatData.Pad = auVar15;
      local_48.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar10,&local_48);
      FStatsTrace::Set(&local_res20,(long64)auVar15);
      if (pFVar10->ScopeCount == 0) {
        FThreadStats::Flush(pFVar10,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar10,false,false);
      }
    }
    if ((uVar1 < this->LRUUsedPipelineSize) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("LRUUsedPipelineSize <= MaxSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbdc,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pTVar13 = ::operator_new(0x18);
    if (pTVar13 != (TDoubleLinkedListNode *)0x0) {
      pTVar13->Value = param_1;
      pTVar13->NextNode = (TDoubleLinkedListNode *)0x0;
      pTVar13->PrevNode = (TDoubleLinkedListNode *)0x0;
      pTVar3 = (this->LRU).HeadNode;
      if (pTVar3 == (TDoubleLinkedListNode *)0x0) {
        (this->LRU).TailNode = pTVar13;
      }
      else {
        pTVar13->NextNode = pTVar3;
        ((this->LRU).HeadNode)->PrevNode = pTVar13;
      }
      (this->LRU).HeadNode = pTVar13;
      (**(code **)((this->LRU)._padding_ + 8))(&this->LRU,(this->LRU).ListSize + 1);
    }
    param_1->LRUNode = (this->LRU).HeadNode;
    param_1->LRUFrame = GFrameNumberRenderThread;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LRUCheckNotInside @ 145b6c590

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
FVulkanPipelineStateCacheManager::LRUCheckNotInside
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TDoubleLinkedListNode *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  lpCriticalSection = &this->LRUCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  for (pTVar1 = (this->LRU).HeadNode; pTVar1 != (TDoubleLinkedListNode *)0x0;
      pTVar1 = pTVar1->NextNode) {
    if (pTVar1->Value == param_1) {
      if ((pTVar1->Value->LRUNode != (TDoubleLinkedListNode *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("0 == foo->LRUNode",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                             ,0xc3b,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("foo != PSO",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc3e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  if ((param_1->LRUNode != (TDoubleLinkedListNode *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == PSO->LRUNode",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc41,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000145b6c679. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LRUDebugEvictAll @ 145b6c690

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
FVulkanPipelineStateCacheManager::LRUDebugEvictAll(FVulkanPipelineStateCacheManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  
  if (this->bUseLRU == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseLRU",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0xbc0,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  lpCriticalSection = &this->LRUCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    bVar2 = LRUEvictOne(this,true);
    if (bVar2) {
      do {
        bVar2 = LRUEvictOne(this,true);
      } while (bVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x000145b6c70b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// LRUDump @ 145b6c720

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

void __thiscall FVulkanPipelineStateCacheManager::LRUDump(FVulkanPipelineStateCacheManager *this)

{
  TDoubleLinkedListNode *pTVar1;
  
  GetCurrentThreadId();
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"//***** LRU DUMP *****\\\\\n");
  for (pTVar1 = (this->LRU).HeadNode; pTVar1 != (TDoubleLinkedListNode *)0x0;
      pTVar1 = pTVar1->NextNode) {
    FGenericPlatformMisc::LowLevelOutputDebugStringf(L"\t%08x PSO %p :: %d  :: %06d \\ %06d\n");
  }
  FGenericPlatformMisc::LowLevelOutputDebugStringf(L"\\\\***** LRU DUMP *****//\n");
  return;
}

// LRUEvictImmediately @ 145b6c7c0

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

bool __thiscall
FVulkanPipelineStateCacheManager::LRUEvictImmediately(FVulkanPipelineStateCacheManager *this)

{
  TConsoleVariableData<int> *pTVar1;
  bool bVar2;
  longlong lVar3;
  
  pTVar1 = CVarEnableLRU.Ref;
  if (this->bEvictImmediately == false) {
    return false;
  }
  bVar2 = IsInParallelGameThread();
  if ((bVar2) || (bVar2 = IsInGameThread(), bVar2)) {
    lVar3 = 0;
  }
  else {
    lVar3 = 4;
  }
  if (*(int *)((longlong)pTVar1->ShadowedValue + lVar3) == 0) {
    return false;
  }
  return true;
}

// LRUEvictOne @ 145b6c820

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

bool __thiscall
FVulkanPipelineStateCacheManager::LRUEvictOne(FVulkanPipelineStateCacheManager *this,bool param_1)

{
  TDoubleLinkedListNode *pTVar1;
  FVulkanGraphicsPipelineState *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  
  if (this->bUseLRU == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("bUseLRU",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0xc66,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  GetCurrentThreadId();
  pTVar1 = (this->LRU).TailNode;
  if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Node != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0xc69,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  this_00 = pTVar1->Value;
  if (this_00 != (FVulkanGraphicsPipelineState *)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  if ((param_1) && (GFrameNumberRenderThread <= this_00->LRUFrame + 3)) {
    bVar3 = false;
  }
  else {
    if (this_00->LRUFrame == GFrameNumberRenderThread) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PSO->LRUFrame != GFrameNumberRenderThread",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc71,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
    }
    LRURemove(this,this_00);
    bVar3 = true;
  }
  FRHIResource::Release((FRHIResource *)this_00);
  return bVar3;
}

// LRURemove @ 145b6c930

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

void __thiscall
FVulkanPipelineStateCacheManager::LRURemove
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1)

{
  TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *this_00;
  TDoubleLinkedListNode *pTVar1;
  TDoubleLinkedListNode *pTVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize> FVar7;
  FThreadStats *pFVar8;
  FThreadStatsPool *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU> FVar10;
  uchar auVar11 [8];
  uchar auVar12 [8];
  FName local_res8;
  FName local_res10;
  FName local_res18;
  FName local_res20;
  FStatMessage local_68;
  FStatMessage local_58;
  
  if ((this->bUseLRU == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("bUseLRU",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xc46,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar1 = param_1->LRUNode;
  if (pTVar1 == (TDoubleLinkedListNode *)0x0) {
    if ((param_1->VulkanPipeline != (VkPipeline_T *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("0 == PSO->GetVulkanPipeline()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xc60,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    bVar5 = param_1->LRUFrame + 3 < GFrameNumberRenderThread;
    this_00 = &this->LRU;
    if ((this->LRU).ListSize == 1) {
      TDoubleLinkedList<FVulkanGraphicsPipelineState_*>::Empty(this_00);
    }
    else {
      pTVar2 = (this->LRU).HeadNode;
      if (pTVar1 == pTVar2) {
        pTVar2 = pTVar2->NextNode;
        (this->LRU).HeadNode = pTVar2;
        pTVar2->PrevNode = (TDoubleLinkedListNode *)0x0;
      }
      else {
        pTVar2 = (this->LRU).TailNode;
        if (pTVar1 == pTVar2) {
          pTVar2 = pTVar2->PrevNode;
          (this->LRU).TailNode = pTVar2;
          pTVar2->NextNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar1->NextNode->PrevNode = pTVar1->PrevNode;
          pTVar1->PrevNode->NextNode = pTVar1->NextNode;
        }
      }
      ::operator_delete(pTVar1,0x18);
      (**(code **)(this_00->_padding_ + 8))(this_00,(this->LRU).ListSize + -1);
    }
    param_1->LRUNode = (TDoubleLinkedListNode *)0x0;
    this->LRUUsedPipelineSize = this->LRUUsedPipelineSize - param_1->PipelineCacheSize;
    this->LRUUsedPipelineCount = this->LRUUsedPipelineCount - 1;
    FVulkanGraphicsPipelineState::DeleteVkPipeline(param_1,bVar5);
    if (GVulkanReleaseShaderModuleWhenEvictingPSO != 0) {
      if (param_1->VulkanShaders[0] != (FVulkanShader *)0x0) {
        FVulkanShader::PurgeShaderModules(param_1->VulkanShaders[0]);
      }
      if (param_1->VulkanShaders[1] != (FVulkanShader *)0x0) {
        FVulkanShader::PurgeShaderModules(param_1->VulkanShaders[1]);
      }
      if (param_1->VulkanShaders[2] != (FVulkanShader *)0x0) {
        FVulkanShader::PurgeShaderModules(param_1->VulkanShaders[2]);
      }
      if (param_1->VulkanShaders[3] != (FVulkanShader *)0x0) {
        FVulkanShader::PurgeShaderModules(param_1->VulkanShaders[3]);
      }
      if (param_1->VulkanShaders[4] != (FVulkanShader *)0x0) {
        FVulkanShader::PurgeShaderModules(param_1->VulkanShaders[4]);
      }
    }
    FVar7 = StatPtr_STAT_VulkanNumPSOLRUSize;
    if (StatPtr_STAT_VulkanNumPSOLRUSize ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize>)0x0) {
      pFVar6 = ::FName::FName(&local_res18,"STAT_VulkanNumPSOLRUSize");
      FVar7 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRUSize>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRUSize,*pFVar6,
                         L"PSO LRU Size","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true
                         ,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar7;
    auVar12[4] = '\0';
    auVar12[5] = '\0';
    auVar12[6] = '\0';
    auVar12[7] = '\0';
    auVar12._0_4_ = this->LRUUsedPipelineSize;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_68.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_res8 = FVar3;
      local_68.StatData.Pad = auVar12;
      local_68.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_68);
      FStatsTrace::Set(&local_res8,(long64)auVar12);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
    FVar10 = StatPtr_STAT_VulkanNumPSOLRU;
    if (StatPtr_STAT_VulkanNumPSOLRU == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU>)0x0) {
      pFVar6 = ::FName::FName(&local_res20,"STAT_VulkanNumPSOLRU");
      FVar10 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOLRU>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOLRU,*pFVar6,
                          L"PSO LRU Elements","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO"
                          ,true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar10;
    auVar11[4] = '\0';
    auVar11[5] = '\0';
    auVar11[6] = '\0';
    auVar11[7] = '\0';
    auVar11._0_4_ = this->LRUUsedPipelineCount;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar3;
      pFVar8 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar8 == (FThreadStats *)0x0) {
        pFVar9 = FThreadStatsPool::Get();
        pFVar8 = FThreadStatsPool::GetFromPool(pFVar9);
      }
      local_58.NameAndInfo.Number = FVar3.Number & 0xffff8fff | 0x8000;
      local_res10 = FVar3;
      local_58.StatData.Pad = auVar11;
      local_58.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar8,&local_58);
      FStatsTrace::Set(&local_res10,(long64)auVar11);
      if (pFVar8->ScopeCount == 0) {
        FThreadStats::Flush(pFVar8,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar8,false,false);
      }
    }
  }
  return;
}

// LRURemoveAll @ 145b6cdc0

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
FVulkanPipelineStateCacheManager::LRURemoveAll(FVulkanPipelineStateCacheManager *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bUseLRU != false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0xc7d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// LRUTouch @ 145b6ce00

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
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanPipelineStateCacheManager::LRUTouch
          (FVulkanPipelineStateCacheManager *this,FVulkanGraphicsPipelineState *param_1)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TDoubleLinkedList<FVulkanGraphicsPipelineState_*> *pTVar2;
  TDoubleLinkedListNode *pTVar3;
  TDoubleLinkedListNode *pTVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::LRUTouch(FVulkanGraphicsPipelineState_*)_::_30_::FStat_STAT_Vulkan_LRUMiss>
  FVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar13;
  int iVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 auStackY_128 [32];
  FColor_u_0 local_c8 [2];
  FName local_c0;
  uint local_b8;
  uint uStack_b4;
  FName local_b0;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  FVulkanShader *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_128;
  if (this->bUseLRU == false) {
    return;
  }
  lpCriticalSection = &this->LRUCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((param_1->VulkanPipeline == (VkPipeline_T *)0x0) !=
       (param_1->LRUNode == (TDoubleLinkedListNode *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PSO->GetVulkanPipeline() == 0) == (PSO->LRUNode == 0)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0xbeb,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (param_1->LRUNode != (TDoubleLinkedListNode *)0x0) {
    if ((param_1->VulkanPipeline == (VkPipeline_T *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("PSO->GetVulkanPipeline()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0xbef,L""), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar3 = param_1->LRUNode;
    if (pTVar3 != (this->LRU).HeadNode) {
      pTVar2 = &this->LRU;
      if (pTVar3 != (TDoubleLinkedListNode *)0x0) {
        if ((this->LRU).ListSize == 1) {
          pTVar3->PrevNode = (TDoubleLinkedListNode *)0x0;
          pTVar3->NextNode = (TDoubleLinkedListNode *)0x0;
          iVar14 = 0;
          (this->LRU).TailNode = (TDoubleLinkedListNode *)0x0;
          (this->LRU).HeadNode = (TDoubleLinkedListNode *)0x0;
        }
        else {
          pTVar4 = (this->LRU).TailNode;
          if (pTVar3 == pTVar4) {
            pTVar4 = pTVar4->PrevNode;
            (this->LRU).TailNode = pTVar4;
            pTVar4->NextNode = (TDoubleLinkedListNode *)0x0;
          }
          else {
            pTVar3->NextNode->PrevNode = pTVar3->PrevNode;
            pTVar3->PrevNode->NextNode = pTVar3->NextNode;
          }
          pTVar3->PrevNode = (TDoubleLinkedListNode *)0x0;
          pTVar3->NextNode = (TDoubleLinkedListNode *)0x0;
          iVar14 = (this->LRU).ListSize + -1;
        }
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,iVar14);
      }
      pTVar3 = param_1->LRUNode;
      if (pTVar3 != (TDoubleLinkedListNode *)0x0) {
        pTVar4 = (this->LRU).HeadNode;
        if (pTVar4 == (TDoubleLinkedListNode *)0x0) {
          (this->LRU).TailNode = pTVar3;
        }
        else {
          pTVar3->NextNode = pTVar4;
          ((this->LRU).HeadNode)->PrevNode = pTVar3;
        }
        (this->LRU).HeadNode = pTVar3;
        (**(code **)(pTVar2->_padding_ + 8))(pTVar2,(this->LRU).ListSize + 1);
      }
    }
    param_1->LRUFrame = GFrameNumberRenderThread;
    goto LAB_145b6d365;
  }
  param_1->LRUFrame = GFrameNumberRenderThread;
  if (param_1->VulkanPipeline != (VkPipeline_T *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("PSO->LRUNode",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0xc17,L"");
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    goto LAB_145b6d365;
  }
  QueryPerformanceCounter(&local_a0);
  local_48 = 0;
  dVar6 = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle;
  local_68 = (FVulkanShader *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  FVulkanShaderFactory::LookupGfxShaders(&this->Device->ShaderFactory,param_1->ShaderKeys,&local_68)
  ;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Vulkan_LRUMiss ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::LRUTouch(FVulkanGraphicsPipelineState_*)_::_30_::FStat_STAT_Vulkan_LRUMiss>
         )0x0) {
      pFVar11 = ::FName::FName(&local_78,"STAT_Vulkan_LRUMiss");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_LRUMiss,*pFVar11,
                 L"STAT_Vulkan_LRUMiss","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar12 = StatPtr_STAT_Vulkan_LRUMiss;
  if (StatPtr_STAT_Vulkan_LRUMiss ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::LRUTouch(FVulkanGraphicsPipelineState_*)_::_30_::FStat_STAT_Vulkan_LRUMiss>
       )0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_Vulkan_LRUMiss");
    FVar12 = (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::LRUTouch(FVulkanGraphicsPipelineState_*)_::_30_::FStat_STAT_Vulkan_LRUMiss>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_LRUMiss,*pFVar11,
                          L"STAT_Vulkan_LRUMiss","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,
                          true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar12;
  bVar9 = false;
  bVar8 = false;
  local_b0.ComparisonIndex.Value = 0;
  local_b0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_145b6d178:
    bVar7 = false;
    FVar16 = local_b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_c8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_c8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar9 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_c0.ComparisonIndex.Value = FVar15.Value;
        local_c0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_c0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0xc02);
        bVar9 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b6d178;
    local_b8 = FVar15.Value;
    uStack_b4 = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
  }
  bVar10 = CreateGfxPipelineFromEntry(this,param_1,&local_68,NotSet);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                          ,0xc06,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  QueryPerformanceCounter(&local_98);
  if ((__real_3f50624dd2f1a9fc <
       (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar6) &&
     (5 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  if (this->bUseLRU != false) {
    LRUTrim(this,param_1->PipelineCacheSize);
    LRUAdd(this,param_1);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
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
LAB_145b6d365:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LRUTrim @ 145b6d450

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
FVulkanPipelineStateCacheManager::LRUTrim(FVulkanPipelineStateCacheManager *this,uint param_1)

{
  uint uVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  longlong lVar4;
  
  if (this->bUseLRU != false) {
    GetCurrentThreadId();
    pTVar2 = CVarLRUMaxPipelineSize.Ref;
    bVar3 = IsInParallelGameThread();
    if ((bVar3) || (bVar3 = IsInGameThread(), bVar3)) {
      lVar4 = 0;
    }
    else {
      lVar4 = 4;
    }
    uVar1 = *(uint *)((longlong)pTVar2->ShadowedValue + lVar4);
    while ((uVar1 < this->LRUUsedPipelineSize + param_1 ||
           (this->LRUUsedPipelineMax < this->LRUUsedPipelineCount))) {
      LRUEvictOne(this,false);
    }
  }
  return;
}

// Load @ 145b6d8c0

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

bool __thiscall
FVulkanPipelineStateCacheManager::Load
          (FVulkanPipelineStateCacheManager *this,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_1,FPipelineCache *param_2)

{
  void *pvVar1;
  VkDevice_T *pVVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  undefined1 uVar6;
  VkResult VVar7;
  uint uVar8;
  ulonglong uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FVulkanDevice **ppFVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  int iVar15;
  FScriptContainerElement *pFVar16;
  bool local_res20;
  undefined1 local_218;
  undefined1 local_217 [7];
  FString local_210;
  FString local_200;
  FVulkanLRUCacheFile local_1f0;
  uint local_1d8;
  FVulkanDevice **local_1d0;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  FString local_1a8;
  VkPipelineCache_T *local_198;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_190;
  TPairInitializer<unsigned___int64_const_&,FVulkanPipelineSize_const_&> local_180;
  LARGE_INTEGER local_170;
  FScriptContainerElement *local_168;
  VkPipelineCacheCreateInfo local_160;
  FScriptContainerElement *local_138;
  FScriptContainerElement *local_130;
  LARGE_INTEGER local_128;
  VkPipelineCacheCreateInfo local_120;
  FArchiveState local_f8;
  undefined8 local_68;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_60;
  undefined8 local_58;
  
  AcquireSRWLockExclusive((PSRWLOCK)&param_2->PipelineCacheLock);
  iVar15 = param_1->ArrayNum;
  pFVar13 = (param_1->AllocatorInstance).Data;
  pFVar16 = pFVar13 + (longlong)iVar15 * 0x10;
  local_res20 = false;
  while( true ) {
    if (param_1->ArrayNum != iVar15) {
      local_218 = 0;
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_218);
    }
    pTVar4 = CVarEnableLRU.Ref;
    if (pFVar13 == pFVar16) break;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_180.Value);
    pvVar1 = *(void **)pFVar13;
    local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1b8.Data.ArrayNum = *(int *)(pFVar13 + 8);
    lVar11 = (longlong)local_1b8.Data.ArrayNum;
    if (local_1b8.Data.ArrayNum == 0) {
      local_1b8.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,
                 local_1b8.Data.ArrayNum,&local_1b8.Data.ArrayMax);
      memcpy(local_1b8.Data.AllocatorInstance.Data,pvVar1,lVar11 * 2);
    }
    FVulkanGenericPlatform::CreatePSOBinaryCacheFilename(&local_200,this->Device,&local_1b8);
    local_1c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FVar10.Data = (FScriptContainerElement *)L"";
    if (local_200.Data.ArrayNum != 0) {
      FVar10.Data = local_200.Data.AllocatorInstance.Data;
    }
    local_1c8.ArrayNum = 0;
    local_1c8.ArrayMax = 0;
    bVar5 = FFileHelper::LoadFileToArray(&local_1c8,(wchar_t *)FVar10.Data,2);
    if (bVar5) {
      bVar5 = FVulkanGenericPlatform::PSOBinaryCacheMatches(this->Device,&local_1c8);
      if (bVar5) {
        local_160.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
        local_160._20_4_ = 0;
        local_160.initialDataSize._0_4_ = local_1c8.ArrayNum;
        local_160.initialDataSize._4_4_ = local_1c8.ArrayNum >> 0x1f;
        local_160.pInitialData._0_4_ = SUB84(local_1c8.AllocatorInstance.Data,0);
        local_160.pInitialData._4_4_ =
             (undefined4)((ulonglong)local_1c8.AllocatorInstance.Data >> 0x20);
        local_160._4_8_ = 0;
        local_160._12_8_ = 0;
        pVVar2 = this->Device->Device;
        if (param_2->PipelineCache == (VkPipelineCache_T *)0x0) {
          VVar7 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                            (pVVar2,&local_160,&VulkanRHI::GAllocationCallbacks,
                             &param_2->PipelineCache);
          if (VVar7 != VK_SUCCESS) {
            VulkanRHI::VerifyVulkanResult
                      (VVar7,
                       "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x192);
          }
        }
        else {
          VVar7 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                            (pVVar2,&local_160,&VulkanRHI::GAllocationCallbacks,&local_198);
          if (VVar7 != VK_SUCCESS) {
            VulkanRHI::VerifyVulkanResult
                      (VVar7,
                       "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &TempPipelineCache)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x199);
          }
          VVar7 = (*VulkanDynamicAPI::vkMergePipelineCaches)
                            (this->Device->Device,param_2->PipelineCache,1,&local_198);
          if (VVar7 != VK_SUCCESS) {
            VulkanRHI::VerifyVulkanResult
                      (VVar7,
                       "VulkanRHI::vkMergePipelineCaches(Device->GetHandle(), PipelineCacheExclusive.Get(), 1, &TempPipelineCache)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x19a);
          }
          (*VulkanDynamicAPI::vkDestroyPipelineCache)
                    (this->Device->Device,local_198,&VulkanRHI::GAllocationCallbacks);
        }
        QueryPerformanceCounter(&local_170);
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        local_res20 = true;
      }
      else if (1 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.AllocatorInstance.Data);
    }
    if (local_200.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.Data.AllocatorInstance.Data);
    }
    pFVar13 = pFVar13 + 0x10;
  }
  bVar5 = IsInParallelGameThread();
  if ((bVar5) || (bVar5 = IsInGameThread(), bVar5)) {
    lVar11 = 0;
  }
  else {
    lVar11 = 4;
  }
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar11) == 0) {
    ppFVar12 = &this->Device;
  }
  else {
    local_1d8 = param_1->ArrayNum;
    uVar9 = (ulonglong)(int)local_1d8;
    local_1d0 = &this->Device;
    pFVar13 = (param_1->AllocatorInstance).Data;
    local_168 = pFVar13 + uVar9 * 0x10;
    while( true ) {
      pFVar16 = local_168;
      uVar14 = 0;
      if (param_1->ArrayNum != (int)uVar9) {
        local_217[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_217);
        local_1d0 = &this->Device;
      }
      ppFVar12 = local_1d0;
      if (pFVar13 == pFVar16) break;
      QueryPerformanceCounter(&local_128);
      local_1a8.Data.ArrayNum = *(int *)(pFVar13 + 8);
      lVar11 = (longlong)local_1a8.Data.ArrayNum;
      pvVar1 = *(void **)pFVar13;
      local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_1a8.Data.ArrayNum == 0) {
        local_1a8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_1a8.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                   local_1a8.Data.ArrayNum,&local_1a8.Data.ArrayMax);
        memcpy(local_1a8.Data.AllocatorInstance.Data,pvVar1,lVar11 * 2);
      }
      local_1d0 = &this->Device;
      FVulkanGenericPlatform::CreatePSOBinaryCacheFilename(&local_210,*local_1d0,&local_1a8);
      ::FString::AppendChars(&local_210,L".lru",4);
      ::FString::ReplaceInline(&local_210,L"TempScanVulkanPSO_",L"VulkanPSO_",IgnoreCase);
      local_190.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar10.Data = (FScriptContainerElement *)L"";
      if (local_210.Data.ArrayNum != 0) {
        FVar10.Data = local_210.Data.AllocatorInstance.Data;
      }
      local_190.ArrayNum = 0;
      local_190.ArrayMax = 0;
      bVar5 = FFileHelper::LoadFileToArray(&local_190,(wchar_t *)FVar10.Data,2);
      if (bVar5) {
        local_f8._padding_ = 0;
        local_f8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
        local_f8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
        local_f8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
        local_f8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
        local_f8._40_8_ = 0;
        local_f8.ArSerializingDefaults = 0;
        local_f8.ArPortFlags = 0;
        local_f8.ArMaxSerializeSize = 0;
        local_f8.ArUEVer.FileVersionUE4 = 0;
        local_f8.ArUEVer.FileVersionUE5 = 0;
        local_f8.ArLicenseeUEVer = 0;
        local_f8.ArEngineVer.Major = 0;
        local_f8.ArEngineVer.Minor = 0;
        local_f8.ArEngineVer.Patch = 0;
        local_f8.ArEngineVer._6_2_ = 0;
        local_f8.ArEngineVer.Changelist = 0;
        local_f8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
        local_f8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
        local_f8.SavePackageData = (FArchiveSavePackageData *)0x0;
        local_f8.SerializedProperty = (FProperty *)0x0;
        local_f8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
        local_f8.bCustomVersionsAreReset = false;
        local_f8._129_7_ = 0;
        local_f8.NextProxy = (FArchiveState *)0x0;
        FArchiveState::FArchiveState(&local_f8);
        local_60 = &local_190;
        local_68 = 0;
        local_f8._padding_ = (longlong)&___7FMemoryReader__6B_;
        local_58 = 0x7fffffffffffffff;
        FArchiveState::SetIsLoading(&local_f8,true);
        (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
        local_1f0.Header.Version = -1;
        local_1f0.Header.SizeOfPipelineSizes = -1;
        local_1f0.PipelineSizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1f0.PipelineSizes.ArrayNum = 0;
        local_1f0.PipelineSizes.ArrayMax = 0;
        bVar5 = FVulkanLRUCacheFile::Load(&local_1f0,(FArchive *)&local_f8);
        if (!bVar5) {
          if (2 < (byte)LogVulkanRHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
          }
          local_res20 = false;
        }
        if (0 < local_1f0.PipelineSizes.ArrayNum) {
          do {
            uVar8 = 0;
            if ((int)uVar14 < local_1f0.PipelineSizes.ArrayNum) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            iVar15 = local_1f0.PipelineSizes.ArrayNum;
            if (uVar8 == 0) {
              bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar5) {
                pcVar3 = (code *)swi(3);
                uVar6 = (*pcVar3)();
                return (bool)uVar6;
              }
              iVar15 = local_1f0.PipelineSizes.ArrayNum;
            }
            pFVar16 = local_1f0.PipelineSizes.AllocatorInstance.Data + (longlong)(int)uVar14 * 0x10;
            uVar8 = 0;
            if ((int)uVar14 < iVar15) {
              uVar8 = ~uVar14 >> 0x1f;
            }
            if ((uVar8 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              uVar6 = (*pcVar3)();
              return (bool)uVar6;
            }
            local_138 = local_1f0.PipelineSizes.AllocatorInstance.Data +
                        (longlong)(int)uVar14 * 0x10;
            local_130 = pFVar16;
            TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
            ::Emplace<TPairInitializer<unsigned___int64_const_&,FVulkanPipelineSize_const_&>_>
                      ((TSet<TTuple<unsigned___int64,FVulkanPipelineSize>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>,FDefaultSetAllocator>
                        *)&this->LRU2SizeList,&local_180,(bool *)&local_138);
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < local_1f0.PipelineSizes.ArrayNum);
        }
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
        if (local_1f0.PipelineSizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f0.PipelineSizes.AllocatorInstance.Data);
        }
        FArchive::~FArchive((FArchive *)&local_f8);
      }
      else {
        if (2 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)&PTR_u_Unable_to_load__1510c6308,
                     (FLogCategoryBase *)&LogVulkanRHI);
        }
        local_res20 = false;
      }
      if (local_190.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_190.AllocatorInstance.Data);
      }
      if (local_210.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_210.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 0x10;
      uVar9 = (ulonglong)local_1d8;
    }
  }
  if (param_2->PipelineCache == (VkPipelineCache_T *)0x0) {
    local_120.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
    local_120._4_8_ = 0;
    local_120._12_8_ = 0;
    local_120.pInitialData._4_4_ = 0;
    local_120._20_8_ = 0;
    local_120._28_8_ = 0;
    VVar7 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                      ((*ppFVar12)->Device,&local_120,&VulkanRHI::GAllocationCallbacks,
                       &param_2->PipelineCache);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,
                 "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x1d7);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&param_2->PipelineCacheLock);
  return local_res20;
}

// NotifyDeletedComputePipeline @ 145b6e2d0

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
FVulkanPipelineStateCacheManager::NotifyDeletedComputePipeline
          (FVulkanPipelineStateCacheManager *this,FVulkanComputePipeline *param_1)

{
  ulong64 uVar1;
  ulong64 local_res10;
  
  if (param_1->_padding_ != 0) {
    uVar1 = *(ulong64 *)(param_1->_padding_ + 0x130);
    AcquireSRWLockExclusive((PSRWLOCK)&this->ComputePipelineLock);
    local_res10 = uVar1;
    if (*(int *)&(this->ComputePipelineEntries).field_0x8 !=
        *(int *)&(this->ComputePipelineEntries).field_0x34) {
      TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,FVulkanComputePipeline_*>,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanComputePipeline_*,0>,FDefaultSetAllocator>
                  *)&this->ComputePipelineEntries,(int)(uVar1 >> 0x20) * 0x17 + (int)uVar1,
                 &local_res10);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&this->ComputePipelineLock);
  }
  return;
}

// NotifyDeletedGraphicsPSO @ 145b6e350

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

void __thiscall
FVulkanPipelineStateCacheManager::NotifyDeletedGraphicsPSO
          (FVulkanPipelineStateCacheManager *this,FRHIGraphicsPipelineState *param_1)

{
  FExclusiveDepthStencil *pFVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  longlong *plVar9;
  longlong *plVar10;
  uchar auVar11 [8];
  FName local_res8;
  FName local_res10;
  FStatMessage local_48;
  
  FVulkanDevice::NotifyDeletedGfxPipeline(this->Device,(FVulkanGraphicsPipelineState *)param_1);
  pFVar1 = &param_1[0x1e].DSMode;
  plVar10 = (longlong *)0x0;
  auVar11 = (uchar  [8])(longlong)*(int *)(param_1[0x1f]._padding_ + 8);
  if (auVar11 != (uchar  [8])0x0) {
    FVar8 = StatPtr_STAT_VulkanPSOKeyMemory;
    if (StatPtr_STAT_VulkanPSOKeyMemory == (FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory>)0x0
       ) {
      pFVar7 = ::FName::FName(&local_res10,"STAT_VulkanPSOKeyMemory");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanPSOKeyMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOKeyMemory,*pFVar7,
                         L"VulkanPSOKey Memory","STATGROUP_VulkanPSO","STATCAT_Advanced",
                         L"Vulkan PSO",true,false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar8;
    local_res8 = FVar3;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      local_48.NameAndInfo.Number = FVar3.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar3;
      local_48.StatData.Pad = auVar11;
      local_48.NameAndInfo.Index.Value = FVar3.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this_00,&local_48);
      FStatsTrace::Add(&local_res8,-(longlong)auVar11);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  lpCriticalSection = &this->GraphicsPSOLockedCS;
  if (*(char *)((longlong)&param_1[1]._padding_ + 1) == '\0') {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) goto LAB_145b6e6ae;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar6 = TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
            ::FindIndexByHash<FVulkanPSOKey>
                      ((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                        *)&this->GraphicsPSOLockedMap,pFVar1->Value,(FVulkanPSOKey *)pFVar1);
    if (iVar6 != -1) {
      lVar2 = *(longlong *)&this->GraphicsPSOLockedMap + (longlong)iVar6 * 0x28;
      plVar9 = (longlong *)(lVar2 + 0x18);
      if (lVar2 == 0) {
        plVar9 = plVar10;
      }
      if (((plVar9 != (longlong *)0x0) && ((FRHIGraphicsPipelineState *)*plVar9 == param_1)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                             ,0x9d1,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FVulkanGraphicsPipelineState::DeleteVkPipeline((FVulkanGraphicsPipelineState *)param_1,true);
    goto LAB_145b6e698;
  }
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_145b6e6ae:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar6 = TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FVulkanPSOKey>
                    ((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                      *)&this->GraphicsPSOLockedMap,pFVar1->Value,(FVulkanPSOKey *)pFVar1);
  plVar9 = plVar10;
  if (iVar6 == -1) {
LAB_145b6e553:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Contained && *Contained == PSO",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                       ,0x9bd,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    lVar2 = *(longlong *)&this->GraphicsPSOLockedMap + (longlong)iVar6 * 0x28;
    plVar9 = (longlong *)(lVar2 + 0x18);
    if (lVar2 == 0) {
      plVar9 = plVar10;
    }
    if ((plVar9 == (longlong *)0x0) || ((FRHIGraphicsPipelineState *)*plVar9 != param_1))
    goto LAB_145b6e553;
  }
  *(undefined1 *)((longlong)&param_1[1]._padding_ + 1) = 0;
  if (this->bUseLRU == false) {
    FVulkanGraphicsPipelineState::DeleteVkPipeline((FVulkanGraphicsPipelineState *)*plVar9,true);
    if ((param_1[2]._padding_ != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("VkPSO->GetVulkanPipeline() == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0x9c7,L""), bVar5)) goto code_r0x000145b6e5f8;
  }
  else {
    LRURemove(this,(FVulkanGraphicsPipelineState *)*plVar9);
    if ((*(longlong *)(*plVar9 + 0x4b8) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(*Contained)->LRUNode == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                           ,0x9c2,L""), bVar5)) {
code_r0x000145b6e5f8:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (*(int *)&(this->GraphicsPSOLockedMap).field_0x8 !=
      *(int *)&(this->GraphicsPSOLockedMap).field_0x34) {
    TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::RemoveImpl<FVulkanPSOKey>
              ((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                *)&this->GraphicsPSOLockedMap,pFVar1->Value,(FVulkanPSOKey *)pFVar1);
  }
LAB_145b6e698:
                    /* WARNING: Could not recover jumptable at 0x000145b6e6a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// OnShaderPipelineCacheOpened @ 145b6ea20

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVulkanPipelineStateCacheManager::OnShaderPipelineCacheOpened
          (FVulkanPipelineStateCacheManager *this,FString *param_1,EShaderPlatform param_2,
          uint param_3,FGuid *param_4,FShaderCachePrecompileContext *param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  TConsoleVariableData<int> *pTVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  VkResult VVar10;
  int iVar11;
  ulong64 uVar12;
  FPlatformFileManager *pFVar13;
  IPlatformFile *pIVar14;
  FString *pFVar15;
  FString *pFVar16;
  longlong lVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  wchar_t *pwVar20;
  TArray<FString,TSizedDefaultAllocator<32>_> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  VkPipelineCacheCreateInfo local_58;
  
  uVar12 = CityHash64((char *)param_4,0x10);
  iVar9 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->CompiledPSOCaches,(uint)uVar12,param_4);
  if (iVar9 != -1) {
    if ((byte)LogVulkanRHI._0_1_ < 5) {
      return;
    }
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayNum = 0;
    local_e8.Data.ArrayMax = 0;
    FGuid::AppendString(param_4,&local_e8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    local_a8.Data.AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
    goto LAB_145b6efcf;
  }
  uVar3 = param_4->B;
  uVar4 = param_4->C;
  uVar5 = param_4->D;
  pwVar19 = L"";
  (this->CurrentPrecompilingPSOCacheGuid).A = param_4->A;
  (this->CurrentPrecompilingPSOCacheGuid).B = uVar3;
  (this->CurrentPrecompilingPSOCacheGuid).C = uVar4;
  (this->CurrentPrecompilingPSOCacheGuid).D = uVar5;
  if (4 < (byte)LogVulkanRHI._0_1_) {
    local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_f8.Data.ArrayNum = 0;
    local_f8.Data.ArrayMax = 0;
    FGuid::AppendString(param_4,&local_f8,Digits);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data.AllocatorInstance.Data);
    }
  }
  pFVar13 = FPlatformFileManager::Get();
  pIVar14 = FPlatformFileManager::GetPlatformFile(pFVar13);
  ::FString::PrintfImpl(&local_a8,L".%x.%x");
  local_c8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.Data.ArrayNum = 0;
  local_c8.Data.ArrayMax = 0;
  FGuid::AppendString(param_4,&local_c8,Digits);
  pFVar15 = ::operator/(&local_78,&this->CompiledPSOCacheTopFolderPath,L"VulkanPSO_");
  ::FString::ConcatFF(&local_98,pFVar15,&local_c8);
  ::FString::ConcatFF(&local_d8,&local_98,&local_a8);
  pFVar15 = &this->CompiledPSOCacheFolderName;
  if (pFVar15 != &local_d8) {
    pFVar1 = (pFVar15->Data).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar15->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
    (this->CompiledPSOCacheFolderName).Data.ArrayNum = local_d8.Data.ArrayNum;
    (this->CompiledPSOCacheFolderName).Data.ArrayMax = local_d8.Data.ArrayMax;
    local_d8.Data.ArrayNum = 0;
    local_d8.Data.ArrayMax = 0;
    local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.Data.AllocatorInstance.Data);
  }
  local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8.Data.ArrayNum = 0;
  local_b8.Data.ArrayMax = 0;
  FGuid::AppendString(param_4,&local_b8,Digits);
  pFVar16 = ::operator/(&local_68,&this->CompiledPSOCacheTopFolderPath,L"TempScanVulkanPSO_");
  ::FString::ConcatFF(&local_88,pFVar16,&local_b8);
  ::FString::ConcatFF(&local_108,&local_88,&local_a8);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  AcquireSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  if (((this->CurrentPrecompilingPSOCache).PipelineCache != (VkPipelineCache_T *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("PipelineCacheExclusive.Get() == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                         ,0x231,L"Trying to open more than one shader pipeline cache"), bVar7)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  local_58.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
  local_58.pInitialData._4_4_ = 0;
  local_58._4_8_ = 0;
  local_58._12_8_ = 0;
  local_58._20_8_ = 0;
  local_58._28_8_ = 0;
  VVar10 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                     (this->Device->Device,&local_58,&VulkanRHI::GAllocationCallbacks,
                      &(this->CurrentPrecompilingPSOCache).PipelineCache);
  if (VVar10 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar10,
               "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x235);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  if ((this->CompiledPSOCacheFolderName).Data.ArrayNum == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
  }
  cVar8 = (**(code **)((longlong)*pIVar14 + 0x78))(pIVar14,pwVar20);
  if (cVar8 == '\0') {
    if (4 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
  }
  else {
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar18.Data = local_108.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar14 + 0x88))(pIVar14,FVar18.Data);
    if ((this->CompiledPSOCacheFolderName).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar18.Data = local_108.Data.AllocatorInstance.Data;
    }
    (**(code **)((longlong)*pIVar14 + 0xa0))(pIVar14,FVar18.Data,pwVar20);
    local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.ArrayNum = 0;
    local_118.ArrayMax = 0;
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&local_118.AllocatorInstance,&local_118.ArrayMax);
    iVar9 = local_108.Data.ArrayNum;
    local_118.ArrayNum = iVar11 + 1;
    local_e8.Data.AllocatorInstance.Data =
         local_118.AllocatorInstance.Data + (longlong)iVar11 * 0x10;
    *(FScriptContainerElement **)local_e8.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    local_f8.Data.AllocatorInstance.Data = local_108.Data.AllocatorInstance.Data;
    *(int *)(local_e8.Data.AllocatorInstance.Data + 8) = local_108.Data.ArrayNum;
    if (local_108.Data.ArrayNum == 0) {
      *(int *)(local_e8.Data.AllocatorInstance.Data + 0xc) = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,
                 (ForAnyElementType *)local_e8.Data.AllocatorInstance.Data,local_108.Data.ArrayNum,
                 (int *)(local_e8.Data.AllocatorInstance.Data + 0xc));
                    /* WARNING: Load size is inaccurate */
      memcpy(*local_e8.Data.AllocatorInstance.Data,local_f8.Data.AllocatorInstance.Data,
             (longlong)iVar9 * 2);
    }
    bVar7 = Load(this,&local_118,&this->CurrentPrecompilingPSOCache);
    if (bVar7) {
      this->bPrecompilingCacheLoadedFromFile = true;
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar18.Data = local_108.Data.AllocatorInstance.Data;
      }
      if ((this->CompiledPSOCacheFolderName).Data.ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar14 + 0xa0))(pIVar14,pwVar19,FVar18.Data);
      pTVar6 = CVarPipelineLRUCacheEvictBinary.Ref;
      bVar7 = IsInParallelGameThread();
      if (bVar7) {
LAB_145b6eecd:
        lVar17 = 0;
      }
      else {
        bVar7 = IsInGameThread();
        lVar17 = 4;
        if (bVar7) goto LAB_145b6eecd;
      }
      if (*(int *)((longlong)pTVar6->ShadowedValue + lVar17) != 0) {
        this->bEvictImmediately = true;
      }
    }
    else {
      if (4 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      pFVar13 = FPlatformFileManager::Get();
      pIVar14 = FPlatformFileManager::GetPlatformFile(pFVar13);
      if ((this->CompiledPSOCacheFolderName).Data.ArrayNum != 0) {
        pwVar19 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
      }
      (**(code **)((longlong)*pIVar14 + 0x88))(pIVar14,pwVar19);
    }
    DestructItems<FString,int>((FString *)local_118.AllocatorInstance.Data,local_118.ArrayNum);
    if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.AllocatorInstance.Data);
    }
  }
  pTVar6 = CVarPipelineLRUCacheEvictBinaryPreloadScreen.Ref;
  if (this->bPrecompilingCacheLoadedFromFile == false) {
LAB_145b6efaa:
    param_5->bSlowPrecompileTask = true;
  }
  else if (this->bEvictImmediately != false) {
    bVar7 = IsInParallelGameThread();
    if ((bVar7) || (bVar7 = IsInGameThread(), lVar17 = 4, bVar7)) {
      lVar17 = 0;
    }
    if (*(int *)((longlong)pTVar6->ShadowedValue + lVar17) != 0) goto LAB_145b6efaa;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
LAB_145b6efcf:
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  return;
}

// OnShaderPipelineCachePrecompilationComplete @ 145b6f000

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

void __thiscall
FVulkanPipelineStateCacheManager::OnShaderPipelineCachePrecompilationComplete
          (FVulkanPipelineStateCacheManager *this,uint param_1,double param_2,
          FShaderCachePrecompileContext *param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  VkResult VVar6;
  ulong64 uVar7;
  FName *pFVar8;
  FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_26_::FStat_STAT_VulkanPSOCacheMerge>
  FVar9;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar10;
  FNameEntryId FVar11;
  FName FVar12;
  FNameEntryId FVar13;
  LARGE_INTEGER local_res8;
  FStatMessage local_48;
  FName local_38;
  
  if (4 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  this->bEvictImmediately = false;
  if (this->bPrecompilingCacheLoadedFromFile == false) {
    SavePSOCache(this,&this->CompiledPSOCacheFolderName,&this->CurrentPrecompilingPSOCache);
  }
  uVar7 = CityHash64((char *)&this->CurrentPrecompilingPSOCacheGuid,0x10);
  iVar5 = TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::FindIndexByHash<FGuid>
                    (&this->CompiledPSOCaches,(uint)uVar7,&this->CurrentPrecompilingPSOCacheGuid);
  if (iVar5 != -1) goto LAB_145b6f3c6;
  TSet<FGuid,DefaultKeyFuncs<FGuid,0>,FDefaultSetAllocator>::Emplace<FGuid_const_&>
            (&this->CompiledPSOCaches,(FGuid *)&local_res8.s,
             (bool *)&this->CurrentPrecompilingPSOCacheGuid);
  FVar13.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_VulkanPSOCacheMerge ==
        (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_26_::FStat_STAT_VulkanPSOCacheMerge>
         )0x0) {
      pFVar8 = ::FName::FName((FName *)&local_res8.s,"STAT_VulkanPSOCacheMerge");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCacheMerge,*pFVar8,
                 L"STAT_VulkanPSOCacheMerge","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar9 = StatPtr_STAT_VulkanPSOCacheMerge;
  if (StatPtr_STAT_VulkanPSOCacheMerge ==
      (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_26_::FStat_STAT_VulkanPSOCacheMerge>
       )0x0) {
    pFVar8 = ::FName::FName((FName *)&local_48,"STAT_VulkanPSOCacheMerge");
    FVar9 = (FThreadSafeStaticStat<_private:_void___cdecl_FVulkanPipelineStateCacheManager::OnShaderPipelineCachePrecompilationComplete(unsigned_int,double,FShaderPipelineCache::FShaderCachePrecompileContext_const_&)_::_26_::FStat_STAT_VulkanPSOCacheMerge>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCacheMerge,*pFVar8,
                         L"STAT_VulkanPSOCacheMerge","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar12 = *(FName *)FVar9;
  bVar2 = false;
  bVar4 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar11 = FVar12.ComparisonIndex.Value;
  uVar10 = FVar12.Number;
  if ((FVar11.Value == 0) && (uVar10 == 0)) {
LAB_145b6f22b:
    bVar3 = false;
    FVar12 = local_38;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar9 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar11.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar9 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x27c);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b6f22b;
    local_res8.s.LowPart = FVar11.Value;
    local_res8.s.HighPart = uVar10;
    local_38 = FVar12;
    FThreadStats::AddMessage(FVar12,CycleScopeStart);
    bVar3 = true;
    FVar13.Value = local_38.ComparisonIndex.Value;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  AcquireSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  VVar6 = (*VulkanDynamicAPI::vkMergePipelineCaches)
                    (this->Device->Device,(this->GlobalPSOCache).PipelineCache,1,
                     &(this->CurrentPrecompilingPSOCache).PipelineCache);
  if (VVar6 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar6,
               "VulkanRHI::vkMergePipelineCaches(Device->GetHandle(), GlobalPipelineCacheExclusive.Get(), 1, &CurrentPipelineCacheExclusive.Get())"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x27f);
  }
  (*VulkanDynamicAPI::vkDestroyPipelineCache)
            (this->Device->Device,(this->CurrentPrecompilingPSOCache).PipelineCache,
             &VulkanRHI::GAllocationCallbacks);
  (this->CurrentPrecompilingPSOCache).PipelineCache = (VkPipelineCache_T *)0x0;
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->CurrentPrecompilingPSOCache).PipelineCacheLock);
  ReleaseSRWLockExclusive((PSRWLOCK)&(this->GlobalPSOCache).PipelineCacheLock);
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar12 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = FVar12.Number & 0xffff6fff | 0x6000;
      local_48.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_48);
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
LAB_145b6f3c6:
  this->bPrecompilingCacheLoadedFromFile = false;
  (this->CurrentPrecompilingPSOCacheGuid).A = 0;
  (this->CurrentPrecompilingPSOCacheGuid).B = 0;
  (this->CurrentPrecompilingPSOCacheGuid).C = 0;
  (this->CurrentPrecompilingPSOCacheGuid).D = 0;
  return;
}

// RHICreateComputePipelineState @ 145b720a0

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

FVulkanComputePipeline * __thiscall
FVulkanPipelineStateCacheManager::RHICreateComputePipelineState
          (FVulkanPipelineStateCacheManager *this,FRHIComputeShader *param_1)

{
  FVulkanComputePipeline *pFVar1;
  
  pFVar1 = GetOrCreateComputePipeline
                     (this->Device->PipelineStateCache,
                      (TVulkanBaseShader<FRHIComputeShader,5> *)param_1);
  return pFVar1;
}

// RHICreateGraphicsPipelineState @ 145b72430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145b731c1) */
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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

TRefCountPtr<FRHIGraphicsPipelineState> __thiscall
FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState
          (FVulkanPipelineStateCacheManager *this,FGraphicsPipelineStateInitializer *param_1)

{
  int *piVar1;
  TMap<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>_>
  *this_00;
  FWindowsRecursiveMutex *lpCriticalSection;
  void *pvVar2;
  FRHIResource *this_01;
  FVulkanCommandListContextImmediate *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  TConsoleVariableData<int> *pTVar9;
  FVulkanPipelineStateCacheManager *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW>
  FVar17;
  TStatId TVar18;
  LPCRITICAL_SECTION p_Var19;
  TRefCountPtr<FRHIGraphicsPipelineState> TVar20;
  FVulkanGraphicsPipelineState *pFVar21;
  FVulkanGraphicsPipelineState *pFVar22;
  FVulkanLayout *pFVar23;
  FVulkanRenderPass *pFVar24;
  FRHIGeometryShader *pFVar25;
  longlong lVar26;
  FRHIAmplificationShader *pFVar27;
  FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_39_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0>
  FVar28;
  FThreadStats *pFVar29;
  FThreadStatsPool *pFVar30;
  ushort uVar31;
  FRHIMeshShader *pFVar32;
  FRHIMeshShader *pFVar33;
  FRHIAmplificationShader *pFVar34;
  FRHIAmplificationShader *pFVar35;
  FRHIMeshShader *pFVar36;
  ForElementType<FSetElementId> FVar37;
  longlong *plVar38;
  longlong lVar39;
  FName FVar40;
  LPCRITICAL_SECTION p_Var41;
  undefined1 *puVar42;
  FName lpCriticalSection_00;
  LPCRITICAL_SECTION p_Var43;
  FGraphicsPipelineStateInitializer *in_R8;
  FName FVar44;
  longlong lVar45;
  FGraphicsPipelineStateInitializer *pFVar46;
  FName FVar47;
  FRHIAmplificationShader *pFVar48;
  undefined8 *puVar49;
  undefined1 auStackY_9d8 [32];
  FVulkanGraphicsPipelineState *local_970;
  FName local_968;
  uint local_960;
  FName local_958;
  byte local_950;
  FName local_948;
  byte local_940;
  FName local_938;
  undefined1 local_930 [16];
  LPCRITICAL_SECTION local_920;
  FVulkanPipelineStateCacheManager *local_918;
  FGraphicsPipelineStateInitializer *local_910;
  FColor_u_0 local_908;
  FColor_u_0 local_904 [3];
  FName local_8f8;
  byte local_8f0;
  FName local_8e8;
  byte local_8e0;
  undefined8 local_8d8;
  FName local_8d0;
  FName local_8c8;
  FName local_8c0;
  FName local_8b0;
  TPairInitializer<FVulkanPSOKey_&&,FVulkanGraphicsPipelineState_*_const_&> local_8a0;
  LARGE_INTEGER local_890;
  LARGE_INTEGER local_888;
  LARGE_INTEGER local_880;
  FStatMessage local_878;
  FStatMessage local_868;
  FSourceLocation local_858;
  FSourceLocation local_838;
  FSourceLocation local_818;
  FSourceLocation local_7f8;
  undefined4 *local_7d8;
  FVulkanGraphicsPipelineState **local_7d0;
  FName local_7c0;
  FName local_7b8;
  FName local_7b0;
  FName local_7a8 [2];
  FName local_798;
  FName local_790;
  FName local_788;
  FName local_780;
  FArchiveState local_778;
  undefined8 local_6e8;
  LPCRITICAL_SECTION local_6e0;
  undefined8 local_6d8;
  FGfxPipelineDesc local_6a8;
  undefined1 local_558 [264];
  undefined4 local_450;
  ForAnyElementType local_448;
  int local_440;
  FVulkanRenderTargetLayout local_428;
  FVulkanShader *local_78 [5];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_9d8;
  p_Var41 = (LPCRITICAL_SECTION)0x0;
  local_918 = this;
  local_910 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW =
         (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW>
          )0x0;
    pFVar16 = ::FName::FName(&local_780,"STAT_Vulkan_RHICreateGraphicsPipelineState_NEW");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW,
               *pFVar16,L"STAT_Vulkan_RHICreateGraphicsPipelineState_NEW","STATGROUP_Quick",
               "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&::_TSS0);
  }
  FVar17 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW;
  if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW ==
      (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW>
       )0x0) {
    pFVar16 = ::FName::FName(&local_7b8,"STAT_Vulkan_RHICreateGraphicsPipelineState_NEW");
    FVar17 = (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_2_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_NEW,*pFVar16,
                          L"STAT_Vulkan_RHICreateGraphicsPipelineState_NEW","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar47 = *(FName *)FVar17;
  bVar12 = false;
  bVar7 = false;
  local_8b0.ComparisonIndex.Value = 0;
  local_8b0.Number = 0;
  bVar11 = false;
  bVar8 = false;
  if ((FVar47.ComparisonIndex.Value.Value == 0) && (FVar47.Number == 0)) {
LAB_145b72658:
    bVar6 = false;
    FVar47 = local_8b0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_908.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_908._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar12 = false;
      bVar7 = true;
      bVar11 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_8d0.ComparisonIndex.Value = FVar47.ComparisonIndex.Value.Value;
        local_8d0.Number = FVar47.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_8d0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x9dc);
        bVar12 = true;
        bVar7 = true;
        bVar11 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145b72658;
    local_968 = FVar47;
    FThreadStats::AddMessage(FVar47,CycleScopeStart);
    bVar6 = true;
    bVar11 = bVar12;
    bVar8 = bVar7;
  }
  uVar31 = (in_R8->field25_0xd2).Flags & 0x1800;
  local_960 = (uint)uVar31;
  if (GVulkanPSOForceSingleThreaded == 1) {
LAB_145b7268a:
    EnterCriticalSection((LPCRITICAL_SECTION)&CreateGraphicsPSOMutex);
    p_Var43 = (LPCRITICAL_SECTION)&CreateGraphicsPSOMutex;
  }
  else {
    p_Var43 = p_Var41;
    if (GVulkanPSOForceSingleThreaded == 2) {
      if (uVar31 != 0) goto LAB_145b7268a;
    }
    else if ((GVulkanPSOForceSingleThreaded == 3) && (uVar31 == 0)) goto LAB_145b7268a;
  }
  local_920 = (LPCRITICAL_SECTION)0x0;
  local_6a8.ColorAttachmentStates.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.ColorAttachmentStates.ArrayNum = 0;
  local_6a8.ColorAttachmentStates.ArrayMax = 0;
  local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.DescriptorSetLayoutBindings.ArrayNum = 0;
  local_6a8.DescriptorSetLayoutBindings.ArrayMax = 0;
  local_6a8.VertexBindings.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.VertexBindings.ArrayNum = 0;
  local_6a8.VertexBindings.ArrayMax = 0;
  local_6a8.VertexAttributes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.VertexAttributes.ArrayNum = 0;
  local_6a8.VertexAttributes.ArrayMax = 0;
  local_6a8.RenderTargets.ColorAttachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.RenderTargets.ColorAttachments.ArrayNum = 0;
  local_6a8.RenderTargets.ColorAttachments.ArrayMax = 0;
  local_6a8.RenderTargets.ResolveAttachments.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  local_6a8.RenderTargets.ResolveAttachments.ArrayNum = 0;
  local_6a8.RenderTargets.ResolveAttachments.ArrayMax = 0;
  local_6a8.RenderTargets.Descriptions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_6a8.RenderTargets.Descriptions.ArrayNum = 0;
  local_6a8.RenderTargets.Descriptions.ArrayMax = 0;
  local_6a8.ShadingRate = VRSSR_1x1;
  local_6a8.Combiner = VRSRB_Passthrough;
  FVulkanDescriptorSetsLayoutInfo::FVulkanDescriptorSetsLayoutInfo
            ((FVulkanDescriptorSetsLayoutInfo *)local_558);
  TVar18.StatIdPtr = (TStatIdData *)StatPtr_STAT_VulkanPSOHeaderInitTime;
  if (StatPtr_STAT_VulkanPSOHeaderInitTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanPSOHeaderInitTime>)0x0) {
    pFVar16 = ::FName::FName(&local_7c0,"STAT_VulkanPSOHeaderInitTime");
    TVar18.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOHeaderInitTime,*pFVar16,
                    L"PSO HeaderInit time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",
                    true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_838.Impl._Line = 0x9ef;
  local_838.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
  ;
  local_838.Impl._Column = 3;
  local_838.Impl._Function =
       "class TRefCountPtr<class FRHIGraphicsPipelineState> __cdecl FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(const class FGraphicsPipelineStateInitializer &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_8f8,TVar18,CycleStat|ClearEveryFrame,false,&local_838);
  CreateGfxEntry(this,in_R8,(FVulkanDescriptorSetsLayoutInfo *)local_558,&local_6a8);
  p_Var19 = ::operator_new(0x10);
  if (p_Var19 != (LPCRITICAL_SECTION)0x0) {
    p_Var19->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
    p_Var19->LockCount = 0;
    p_Var19->RecursionCount = 0;
    p_Var41 = p_Var19;
  }
  local_8d8 = 0;
  local_778._padding_ = 0;
  local_778.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_778.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_778.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_778.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_778._40_8_ = 0;
  local_778.ArSerializingDefaults = 0;
  local_778.ArPortFlags = 0;
  local_778.ArMaxSerializeSize = 0;
  local_778.ArUEVer.FileVersionUE4 = 0;
  local_778.ArUEVer.FileVersionUE5 = 0;
  local_778.ArLicenseeUEVer = 0;
  local_778.ArEngineVer.Major = 0;
  local_778.ArEngineVer.Minor = 0;
  local_778.ArEngineVer.Patch = 0;
  local_778.ArEngineVer._6_2_ = 0;
  local_778.ArEngineVer.Changelist = 0;
  local_778.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_778.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_778.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_778.SerializedProperty = (FProperty *)0x0;
  local_778.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_778.bCustomVersionsAreReset = false;
  local_778._129_7_ = 0;
  local_778.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_778);
  local_6e8 = 0;
  local_778._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_6d8 = local_8d8;
  local_6e0 = p_Var41;
  FArchiveState::SetIsSaving(&local_778,true);
  (**(code **)(local_778._padding_ + 0x108))(&local_778);
  local_778._padding_ = (longlong)&___7FMemoryWriter__6B_;
  p_Var41->LockCount = 0;
  if (p_Var41->RecursionCount < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,(ForAnyElementType *)p_Var41,0,&p_Var41->RecursionCount);
  }
  ::operator<<((FArchive *)&local_778,&local_6a8);
  uVar13 = (*FCrc::MemCrc32Func)(p_Var41->DebugInfo,p_Var41->LockCount,0);
  FArchive::~FArchive((FArchive *)&local_778);
  p_Var19 = local_920;
  local_930._0_4_ = uVar13;
  local_930._8_8_ = p_Var41;
  if (local_920 != (LPCRITICAL_SECTION)0x0) {
    pvVar2 = local_920->DebugInfo;
    local_920 = p_Var41;
    if (pvVar2 != (void *)0x0) {
      FMemory::Free(pvVar2);
    }
    ::operator_delete(p_Var19,0x10);
    p_Var41 = local_920;
  }
  local_920 = p_Var41;
  if ((local_8f0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_8f0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_8f0 & 4) != 0) {
    FThreadStats::AddMessage(local_8f8,CycleScopeEnd);
  }
  local_8f0 = 0;
  TVar18.StatIdPtr = (TStatIdData *)StatPtr_STAT_VulkanPSOLookupTime;
  if (StatPtr_STAT_VulkanPSOLookupTime == (FThreadSafeStaticStat<FStat_STAT_VulkanPSOLookupTime>)0x0
     ) {
    pFVar16 = ::FName::FName(&local_790,"STAT_VulkanPSOLookupTime");
    TVar18.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOLookupTime,*pFVar16,
                    L"PSO Lookup time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
                    true,ST_int64,true,false,MCR_Invalid);
  }
  local_818.Impl._Line = 0x9f7;
  local_818.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
  ;
  local_818.Impl._Column = 3;
  local_818.Impl._Function =
       "class TRefCountPtr<class FRHIGraphicsPipelineState> __cdecl FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(const class FGraphicsPipelineStateInitializer &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_958,TVar18,CycleStat|ClearEveryFrame,false,&local_818);
  pFVar10 = local_918;
  lpCriticalSection_00 = (FName)&local_918->GraphicsPSOLockedCS;
  local_938 = lpCriticalSection_00;
  if (lpCriticalSection_00 == (FName)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  this_00 = &pFVar10->GraphicsPSOLockedMap;
  local_968 = (FName)this_00;
  iVar14 = TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
           ::FindIndexByHash<FVulkanPSOKey>
                     ((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                       *)this_00,local_930._0_4_,(FVulkanPSOKey *)local_930);
  if (iVar14 != -1) {
    lVar39 = *(longlong *)&this_00->field_0x0 + (longlong)iVar14 * 0x28;
    plVar38 = (longlong *)(lVar39 + 0x18);
    if (lVar39 == 0) {
      plVar38 = (longlong *)0x0;
    }
    if (plVar38 != (longlong *)0x0) {
      if ((*plVar38 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("*PSO",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                              ,0x9fd,L""), bVar11)) {
        pcVar4 = (code *)swi(3);
        TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
        return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
      }
      if ((short)local_960 == 0) {
        LRUTouch(pFVar10,(FVulkanGraphicsPipelineState *)*plVar38);
      }
      pFVar46 = local_910;
      this_01 = (FRHIResource *)*plVar38;
      (local_910->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)this_01;
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_01);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      if ((local_950 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_950 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_950 & 4) != 0) {
        FThreadStats::AddMessage(local_958,CycleScopeEnd);
      }
      local_950 = 0;
      FVulkanDescriptorSetsLayoutInfo::~FVulkanDescriptorSetsLayoutInfo
                ((FVulkanDescriptorSetsLayoutInfo *)local_558);
      if (local_6a8.RenderTargets.Descriptions.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.RenderTargets.Descriptions.AllocatorInstance.Data);
      }
      if (local_6a8.RenderTargets.ResolveAttachments.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.RenderTargets.ResolveAttachments.AllocatorInstance.Data);
      }
      if (local_6a8.RenderTargets.ColorAttachments.AllocatorInstance.Data !=
          (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.RenderTargets.ColorAttachments.AllocatorInstance.Data);
      }
      if (local_6a8.VertexAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.VertexAttributes.AllocatorInstance.Data);
      }
      if (local_6a8.VertexBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_6a8.VertexBindings.AllocatorInstance.Data);
      }
      DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
                ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
                 local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data,
                 local_6a8.DescriptorSetLayoutBindings.ArrayNum);
      if ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
          local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data !=
          (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)0x0) {
        FMemory::Free(local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data);
      }
      if (local_6a8.ColorAttachmentStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
      {
        FMemory::Free(local_6a8.ColorAttachmentStates.AllocatorInstance.Data);
      }
      p_Var41 = local_920;
      if (local_920 != (LPCRITICAL_SECTION)0x0) {
        if (local_920->DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
          FMemory::Free(local_920->DebugInfo);
        }
        ::operator_delete(p_Var41,0x10);
      }
      if (p_Var43 != (LPCRITICAL_SECTION)0x0) {
        LeaveCriticalSection(p_Var43);
      }
      if (bVar7) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (bVar12) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      goto LAB_145b73b10;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  if ((local_950 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_950 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_950 & 4) != 0) {
    FThreadStats::AddMessage(local_958,CycleScopeEnd);
  }
  local_950 = 0;
  TVar18.StatIdPtr = (TStatIdData *)StatPtr_STAT_VulkanPSOCreationTime;
  if (StatPtr_STAT_VulkanPSOCreationTime ==
      (FThreadSafeStaticStat<FStat_STAT_VulkanPSOCreationTime>)0x0) {
    pFVar16 = ::FName::FName(&local_798,"STAT_VulkanPSOCreationTime");
    TVar18.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanPSOCreationTime,*pFVar16,
                    L"PSO Creation time","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true
                    ,true,ST_int64,true,false,MCR_Invalid);
  }
  pFVar22 = (FVulkanGraphicsPipelineState *)0x0;
  local_7f8.Impl._Line = 0xa13;
  local_7f8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
  ;
  local_7f8.Impl._Column = 3;
  local_7f8.Impl._Function =
       "class TRefCountPtr<class FRHIGraphicsPipelineState> __cdecl FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(const class FGraphicsPipelineStateInitializer &)"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_948,TVar18,CycleStat|ClearEveryFrame,false,&local_7f8);
  pFVar21 = ::operator_new(0x4f0);
  if (pFVar21 != (FVulkanGraphicsPipelineState *)0x0) {
    pFVar22 = FVulkanGraphicsPipelineState::FVulkanGraphicsPipelineState
                        (pFVar21,pFVar10->Device,in_R8,&local_6a8,(FVulkanPSOKey *)local_930);
  }
  local_970 = pFVar22;
  pFVar23 = FindOrAddLayout(pFVar10,(FVulkanDescriptorSetsLayoutInfo *)local_558,true,
                            pFVar22->bUsesBindless);
  local_970->Layout = pFVar23;
  uVar13 = FVulkanDescriptorSetsLayoutInfo::GetTypesUsed
                     ((FVulkanDescriptorSetsLayoutInfo *)&pFVar23->DescriptorSetLayout,
                      VK_DESCRIPTOR_TYPE_INPUT_ATTACHMENT);
  local_970->bHasInputAttachments = uVar13 != 0;
  if (((pFVar10->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x4000000000000) == 0) {
    pFVar3 = pFVar10->Device->ImmediateContext;
    FVulkanRenderTargetLayout::FVulkanRenderTargetLayout(&local_428,in_R8);
    pFVar24 = FVulkanRenderPassManager::GetOrCreateRenderPass
                        (*(FVulkanRenderPassManager **)(*(longlong *)&pFVar3->field_0x8 + 0x708),
                         &local_428);
    local_970->RenderPass = pFVar24;
  }
  iVar14 = 0;
  lVar45 = 0x30;
  lVar39 = 0x30;
LAB_145b72e24:
  do {
    for (; pFVar36 = (FRHIMeshShader *)0x0, iVar14 == 0; iVar14 = iVar14 + 1) {
      pFVar25 = (FRHIGeometryShader *)(in_R8->BoundShaderState).VertexShaderRHI;
LAB_145b72ecf:
      pFVar33 = (FRHIMeshShader *)(pFVar25 + 1);
      if (pFVar25 == (FRHIGeometryShader *)0x0) {
        pFVar33 = pFVar36;
      }
      if (pFVar33 != (FRHIMeshShader *)0x0) {
        pFVar36 = *(FRHIMeshShader **)&pFVar33->field_0x20;
      }
      *(FRHIMeshShader **)((longlong)local_970->ShaderKeys + lVar39 + -0x30) = pFVar36;
      lVar39 = lVar39 + 8;
    }
    if (iVar14 == 1) {
      pFVar25 = (FRHIGeometryShader *)(in_R8->BoundShaderState).PixelShaderRHI;
      goto LAB_145b72ecf;
    }
    if (iVar14 == 2) {
      pFVar25 = (in_R8->BoundShaderState).GeometryShaderRHI;
      goto LAB_145b72ecf;
    }
    if (iVar14 == 3) {
      pFVar33 = (in_R8->BoundShaderState).MeshShaderRHI;
      pFVar32 = pFVar33 + 1;
      if (pFVar33 == (FRHIMeshShader *)0x0) {
        pFVar32 = pFVar36;
      }
      if (pFVar32 != (FRHIMeshShader *)0x0) {
        pFVar36 = *(FRHIMeshShader **)&pFVar32->field_0x20;
      }
      iVar14 = 4;
      *(FRHIMeshShader **)((longlong)local_970->ShaderKeys + lVar39 + -0x30) = pFVar36;
      lVar39 = lVar39 + 8;
      goto LAB_145b72e24;
    }
    if (iVar14 == 4) {
      pFVar34 = (in_R8->BoundShaderState).AmplificationShaderRHI;
      pFVar33 = (FRHIMeshShader *)(pFVar34 + 1);
      if (pFVar34 == (FRHIAmplificationShader *)0x0) {
        pFVar33 = pFVar36;
      }
      if (pFVar33 != (FRHIMeshShader *)0x0) {
        pFVar36 = *(FRHIMeshShader **)&pFVar33->field_0x20;
      }
      *(FRHIMeshShader **)((longlong)local_970->ShaderKeys + lVar39 + -0x30) = pFVar36;
      break;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.h"
                        ,0x32,L"");
    if (bVar12) {
      pcVar4 = (code *)swi(3);
      TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
      return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
    }
    iVar14 = iVar14 + 1;
    *(undefined8 *)((longlong)local_970->ShaderKeys + lVar39 + -0x30) = 0;
    lVar39 = lVar39 + 8;
  } while (iVar14 < 5);
  if ((in_R8->BoundShaderState).VertexDeclarationRHI != (FRHIVertexDeclaration *)0x0) {
    if (((in_R8->BoundShaderState).VertexShaderRHI == (FRHIVertexShader *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BSI.VertexShaderRHI",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                            ,0xa29,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
      return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
    }
    FVulkanVertexInputStateInfo::Generate
              (&local_970->VertexInputState,
               (FVulkanVertexDeclaration *)(in_R8->BoundShaderState).VertexDeclarationRHI,
               *(uint *)&(in_R8->BoundShaderState).VertexShaderRHI[1].field_0x74);
  }
  pTVar9 = CVarEnableLRU.Ref;
  lVar39 = 4;
  if (((short)local_960 == 0) || (local_918->bEvictImmediately == false)) {
LAB_145b72fbc:
    pTVar9 = CVarPipelineDebugForceEvictImmediately.Ref;
    bVar12 = IsInParallelGameThread();
    if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
      lVar39 = 0;
    }
    if (*(int *)((longlong)pTVar9->ShadowedValue + lVar39) != 0) goto LAB_145b73604;
    QueryPerformanceCounter((LARGE_INTEGER *)&local_8a0.Value);
    dVar5 = (double)(longlong)local_8a0.Value * FGenericPlatformTime::SecondsPerCycle;
    GetVulkanGfxShaders(&in_R8->BoundShaderState,local_78);
    pFVar48 = (FRHIAmplificationShader *)0x0;
    pFVar34 = pFVar48;
    do {
      iVar14 = (int)pFVar34;
      pFVar34 = pFVar48;
      if (iVar14 == 0) {
        pFVar27 = (FRHIAmplificationShader *)(in_R8->BoundShaderState).VertexShaderRHI;
LAB_145b731a1:
        pFVar35 = pFVar27 + 1;
        if (pFVar27 == (FRHIAmplificationShader *)0x0) {
          pFVar35 = pFVar48;
        }
        if (pFVar35 != (FRHIAmplificationShader *)0x0) {
          pFVar34 = *(FRHIAmplificationShader **)&pFVar35->field_0x20;
        }
      }
      else {
        if (iVar14 == 1) {
          pFVar27 = (FRHIAmplificationShader *)(in_R8->BoundShaderState).PixelShaderRHI;
          goto LAB_145b731a1;
        }
        if (iVar14 == 2) {
          pFVar27 = (FRHIAmplificationShader *)(in_R8->BoundShaderState).GeometryShaderRHI;
          goto LAB_145b731a1;
        }
        if (iVar14 == 3) {
          pFVar27 = (FRHIAmplificationShader *)(in_R8->BoundShaderState).MeshShaderRHI;
          goto LAB_145b731a1;
        }
        if (iVar14 == 4) {
          pFVar27 = (in_R8->BoundShaderState).AmplificationShaderRHI;
          goto LAB_145b731a1;
        }
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.h"
                            ,0x32,L"");
        if (bVar12) {
          pcVar4 = (code *)swi(3);
          TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
          return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
        }
      }
      if ((pFVar34 !=
           *(FRHIAmplificationShader **)((longlong)local_970->ShaderKeys + lVar45 + -0x30)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("key == NewPSO->ShaderKeys[StageIdx]",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                              ,0xa3e,L""), bVar12)) {
        pcVar4 = (code *)swi(3);
        TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
        return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
      }
      lpCriticalSection_00 = local_938;
      pFVar34 = (FRHIAmplificationShader *)(ulonglong)(iVar14 + 1U);
      lVar45 = lVar45 + 8;
    } while ((int)(iVar14 + 1U) < 5);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0 =
           (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_39_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0>
            )0x0;
      pFVar16 = ::FName::FName(&local_788,"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0,*pFVar16,
                 L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&::_TSS1);
    }
    FVar28 = StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0;
    if (StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0 ==
        (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_39_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0>
         )0x0) {
      pFVar16 = ::FName::FName(&local_7b0,"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0")
      ;
      FVar28 = (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_39_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0>
                )FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)
                            &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0,
                            *pFVar16,L"STAT_Vulkan_RHICreateGraphicsPipelineState_CREATE_PART0",
                            "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,
                            false,MCR_Invalid);
    }
    FVar44 = *(FName *)FVar28;
    local_8c0.ComparisonIndex.Value = 0;
    local_8c0.Number = 0;
    if ((FVar44.ComparisonIndex.Value.Value != 0) || (FVar40 = local_8c0, FVar44.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_904[0].Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_904[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
        pFVar48 = (FRHIAmplificationShader *)&DAT_00000001;
        if (-1 < CpuChannel->Enabled) {
          local_8c8.ComparisonIndex.Value = FVar44.ComparisonIndex.Value.Value;
          local_8c8.Number = FVar44.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_8c8,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                     ,0xa42);
          pFVar48 = (FRHIAmplificationShader *)&DAT_00000003;
        }
      }
      FVar40 = local_8c0;
      if (FThreadStats::bPrimaryEnable != false) {
        local_938 = FVar44;
        FThreadStats::AddMessage(FVar44,CycleScopeStart);
        pFVar48 = (FRHIAmplificationShader *)(ulonglong)(byte)((byte)pFVar48 | 4);
        FVar40 = FVar44;
      }
    }
    bVar12 = CreateGfxPipelineFromEntry
                       (local_918,local_970,local_78,
                        (EPSOPrecacheCompileType)((in_R8->field25_0xd2).Flags >> 0xd));
    pFVar21 = local_970;
    if (bVar12) {
      QueryPerformanceCounter(&local_888);
      if ((__real_3f50624dd2f1a9fc <
           (double)local_888.QuadPart * FGenericPlatformTime::SecondsPerCycle - dVar5) &&
         (5 < (byte)LogVulkanRHI._0_1_)) {
        UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      if (((ulonglong)pFVar48 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if (((ulonglong)pFVar48 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((((((ulonglong)pFVar48 & 4) != 0) && (FVar40 != (FName)0x0)) &&
          (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff))
      {
        pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar29 == (FThreadStats *)0x0) {
          pFVar30 = FThreadStatsPool::Get();
          pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
        }
        if (pFVar29->bWaitForExplicitFlush < pFVar29->ScopeCount) {
          local_868.NameAndInfo.Number = FVar40.Number & 0xffff6fff | 0x6000;
          local_868.NameAndInfo.Index.Value = FVar40.ComparisonIndex.Value.Value;
          QueryPerformanceCounter(&local_880);
          local_868.StatData.Pad[4] = '\0';
          local_868.StatData.Pad[5] = '\0';
          local_868.StatData.Pad[6] = '\0';
          local_868.StatData.Pad[7] = '\0';
          local_868.StatData.Pad[0] = local_880.s.LowPart._0_1_;
          local_868.StatData.Pad[1] = local_880.s.LowPart._1_1_;
          local_868.StatData.Pad[2] = local_880.s.LowPart._2_1_;
          local_868.StatData.Pad[3] = local_880.s.LowPart._3_1_;
          FThreadStats::AddStatMessage(pFVar29,&local_868);
          piVar1 = &pFVar29->ScopeCount;
          *piVar1 = *piVar1 + -1;
          if (*piVar1 == 0) {
            FThreadStats::Flush(pFVar29,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar29,false,false);
          }
        }
      }
      goto LAB_145b73604;
    }
    FRHIResource::AddRef((FRHIResource *)local_970);
    uVar13 = FRHIResource::Release((FRHIResource *)pFVar21);
    if ((uVar13 != 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RefCount == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                            ,0xa10,L""), bVar12)) {
      pcVar4 = (code *)swi(3);
      TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
      return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
    }
    pFVar46 = local_910;
    (local_910->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    if (((ulonglong)pFVar48 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (((ulonglong)pFVar48 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (((((ulonglong)pFVar48 & 4) != 0) && (FVar40 != (FName)0x0)) &&
       ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
      pFVar29 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar29 == (FThreadStats *)0x0) {
        pFVar30 = FThreadStatsPool::Get();
        pFVar29 = FThreadStatsPool::GetFromPool(pFVar30);
      }
      if (pFVar29->bWaitForExplicitFlush < pFVar29->ScopeCount) {
        local_878.NameAndInfo.Number = FVar40.Number & 0xffff6fff | 0x6000;
        local_878.NameAndInfo.Index.Value = FVar40.ComparisonIndex.Value.Value;
        QueryPerformanceCounter(&local_890);
        local_878.StatData.Pad[4] = '\0';
        local_878.StatData.Pad[5] = '\0';
        local_878.StatData.Pad[6] = '\0';
        local_878.StatData.Pad[7] = '\0';
        local_878.StatData.Pad[0] = local_890.s.LowPart._0_1_;
        local_878.StatData.Pad[1] = local_890.s.LowPart._1_1_;
        local_878.StatData.Pad[2] = local_890.s.LowPart._2_1_;
        local_878.StatData.Pad[3] = local_890.s.LowPart._3_1_;
        FThreadStats::AddStatMessage(pFVar29,&local_878);
        piVar1 = &pFVar29->ScopeCount;
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FThreadStats::Flush(pFVar29,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar29,false,false);
        }
      }
    }
    if ((local_940 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_940 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_940 & 4) != 0) {
      FThreadStats::AddMessage(local_948,CycleScopeEnd);
    }
    local_940 = 0;
    DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
              ((FSetLayout *)local_448.Data,local_440);
    if ((FSetLayout *)local_448.Data != (FSetLayout *)0x0) {
      FMemory::Free(local_448.Data);
    }
    local_450 = 0;
    if ((void *)local_558._256_8_ != (void *)0x0) {
      FMemory::Free((void *)local_558._256_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_558 + 0xc0);
    puVar42 = local_558 + 0xc0;
    lVar39 = 6;
    do {
      puVar49 = (undefined8 *)(puVar42 + -0x20);
      puVar42 = puVar42 + -0x20;
      lVar39 = lVar39 + -1;
      if ((void *)*puVar49 != (void *)0x0) {
        FMemory::Free((void *)*puVar49);
      }
    } while (lVar39 != 0);
  }
  else {
    bVar12 = IsInParallelGameThread();
    if ((bVar12) || (bVar12 = IsInGameThread(), bVar12)) {
      lVar26 = 0;
    }
    else {
      lVar26 = 4;
    }
    if (*(int *)((longlong)pTVar9->ShadowedValue + lVar26) == 0) goto LAB_145b72fbc;
LAB_145b73604:
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if (*(int *)&((TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_968)->field_0x8 !=
        *(int *)&((TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_968)->field_0x34) {
      FVar37 = ((ForElementType<FSetElementId> *)((longlong)local_968 + 0x38))->SecondaryData;
      if (FVar37 == (ForElementType<FSetElementId>)0x0) {
        FVar37 = (ForElementType<FSetElementId>)((longlong)local_968 + 0x38);
      }
      iVar14 = *(int *)((longlong)FVar37 +
                       (ulonglong)(*(int *)((longlong)local_968 + 0x48) - 1U & local_930._0_4_) * 4)
      ;
      FVar44 = local_968;
      p_Var41 = (LPCRITICAL_SECTION)local_930._8_8_;
      while (iVar14 != -1) {
        lVar39 = *(longlong *)
                  &((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                     *)FVar44)->Elements;
        lVar45 = (longlong)iVar14;
        if (*(uint *)(lVar39 + lVar45 * 0x28) == local_930._0_4_) {
          if (((*(longlong *)(lVar39 + 8 + lVar45 * 0x28) == 0) ||
              (p_Var41 == (LPCRITICAL_SECTION)0x0)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Data && Other.Data",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Public\\VulkanUtil.h"
                                  ,0x88,L""), p_Var41 = (LPCRITICAL_SECTION)local_930._8_8_,
             FVar44 = local_968, bVar12)) {
            pcVar4 = (code *)swi(3);
            TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
            return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
          }
          puVar49 = *(undefined8 **)(lVar39 + 8 + lVar45 * 0x28);
          iVar15 = *(int *)(puVar49 + 1);
          if ((iVar15 == p_Var41->LockCount) &&
             (iVar15 = memcmp((void *)*puVar49,p_Var41->DebugInfo,(longlong)iVar15),
             pFVar21 = local_970, FVar44 = local_968, iVar15 == 0)) {
            if (iVar14 != -1) {
              lVar39 = *(longlong *)
                        (TSparseArray<TSparseSetElement<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         *)local_968 + lVar45 * 0x28;
              puVar49 = (undefined8 *)(lVar39 + 0x18);
              if (lVar39 == 0) {
                puVar49 = (undefined8 *)0x0;
              }
              if (puVar49 != (undefined8 *)0x0) {
                FRHIResource::AddRef((FRHIResource *)local_970);
                uVar13 = FRHIResource::Release((FRHIResource *)pFVar21);
                if ((uVar13 != 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("RefCount == 0",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                                        ,0xa10,L""), bVar12)) {
                  pcVar4 = (code *)swi(3);
                  TVar20.Reference = (FRHIGraphicsPipelineState *)(*pcVar4)();
                  return (TRefCountPtr<FRHIGraphicsPipelineState>)TVar20.Reference;
                }
                local_970 = (FVulkanGraphicsPipelineState *)*puVar49;
                goto LAB_145b73978;
              }
            }
            break;
          }
        }
        iVar14 = *(int *)(*(longlong *)
                           &((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                              *)FVar44)->Elements + 0x20 + lVar45 * 0x28);
      }
    }
    local_7d8 = (undefined4 *)local_930;
    local_7d0 = &local_970;
    TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FVulkanPSOKey_&&,FVulkanGraphicsPipelineState_*_const_&>_>
              ((TSet<TTuple<FVulkanPSOKey,FVulkanGraphicsPipelineState_*>,TDefaultMapHashableKeyFuncs<FVulkanPSOKey,FVulkanGraphicsPipelineState_*,0>,FDefaultSetAllocator>
                *)local_968,&local_8a0,(bool *)&local_7d8);
    pFVar10 = local_918;
    if ((local_918->bUseLRU == false) || (local_970->VulkanPipeline == (VkPipeline_T *)0x0)) {
      local_970->bIsRegistered = true;
    }
    else {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x9d4c) < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
        StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock =
             (FThreadSafeStaticStat<_private:_class_TRefCountPtr<FRHIGraphicsPipelineState>___cdecl_FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(FGraphicsPipelineStateInitializer_const_&)_::_80_::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock>
              )0x0;
        pFVar16 = ::FName::FName(local_7a8,"STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock")
        ;
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock,*pFVar16,
                   L"STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
        _Init_thread_footer(&::_TSS2);
      }
      TVar18 = FThreadSafeStaticStatInner<`FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState'::__l80::FStat_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock,1>
               ::GetStatId(&StatPtr_STAT_Vulkan_RHICreateGraphicsPipelineState_LRU_PSOLock);
      local_858.Impl._Line = 0xa5d;
      local_858.Impl._File =
           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
      ;
      local_858.Impl._Column = 6;
      local_858.Impl._Function =
           "class TRefCountPtr<class FRHIGraphicsPipelineState> __cdecl FVulkanPipelineStateCacheManager::RHICreateGraphicsPipelineState(const class FGraphicsPipelineStateInitializer &)"
      ;
      FScopeCycleCounter::FScopeCycleCounter
                ((FScopeCycleCounter *)&local_8e8,*(TStatIdData **)&(TVar18.StatIdPtr)->Name,
                 CycleStat|ClearEveryFrame,false,&local_858);
      lpCriticalSection = &pFVar10->LRUCS;
      if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::ReportNotNullPtr();
      }
      EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      local_970->bIsRegistered = true;
      LRUTrim(pFVar10,local_970->PipelineCacheSize);
      LRUAdd(pFVar10,local_970);
      if ((short)local_960 != 0) {
        LRURemove(pFVar10,local_970);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((local_8e0 & 1) != 0) {
        FGenericPlatformMisc::EndNamedEvent();
      }
      if ((local_8e0 & 2) != 0) {
        FCpuProfilerTrace::OutputEndEvent();
      }
      if ((local_8e0 & 4) != 0) {
        FThreadStats::AddMessage(local_8e8,CycleScopeEnd);
      }
    }
LAB_145b73978:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
    if ((local_940 & 1) != 0) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if ((local_940 & 2) != 0) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if ((local_940 & 4) != 0) {
      FThreadStats::AddMessage(local_948,CycleScopeEnd);
    }
    pFVar46 = local_910;
    (local_910->BoundShaderState).VertexDeclarationRHI = (FRHIVertexDeclaration *)local_970;
    if (local_970 != (FVulkanGraphicsPipelineState *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_970);
    }
    DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>
              ((FSetLayout *)local_448.Data,local_440);
    if ((FSetLayout *)local_448.Data != (FSetLayout *)0x0) {
      FMemory::Free(local_448.Data);
    }
    local_450 = 0;
    if ((void *)local_558._256_8_ != (void *)0x0) {
      FMemory::Free((void *)local_558._256_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<enum_VkDescriptorType,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (local_558 + 0xc0);
    puVar42 = local_558 + 0xc0;
    lVar39 = 6;
    do {
      puVar49 = (undefined8 *)(puVar42 + -0x20);
      puVar42 = puVar42 + -0x20;
      lVar39 = lVar39 + -1;
      if ((void *)*puVar49 != (void *)0x0) {
        FMemory::Free((void *)*puVar49);
      }
    } while (lVar39 != 0);
  }
  if (local_6a8.RenderTargets.Descriptions.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_6a8.RenderTargets.Descriptions.AllocatorInstance.Data);
  }
  if (local_6a8.RenderTargets.ResolveAttachments.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.RenderTargets.ResolveAttachments.AllocatorInstance.Data);
  }
  if (local_6a8.RenderTargets.ColorAttachments.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.RenderTargets.ColorAttachments.AllocatorInstance.Data);
  }
  if (local_6a8.VertexAttributes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.VertexAttributes.AllocatorInstance.Data);
  }
  if (local_6a8.VertexBindings.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.VertexBindings.AllocatorInstance.Data);
  }
  DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
             local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data,
             local_6a8.DescriptorSetLayoutBindings.ArrayNum);
  if ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
      local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data !=
      (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_6a8.DescriptorSetLayoutBindings.AllocatorInstance.Data);
  }
  if (local_6a8.ColorAttachmentStates.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_6a8.ColorAttachmentStates.AllocatorInstance.Data);
  }
  p_Var41 = local_920;
  if (local_920 != (LPCRITICAL_SECTION)0x0) {
    if (local_920->DebugInfo != (PRTL_CRITICAL_SECTION_DEBUG)0x0) {
      FMemory::Free(local_920->DebugInfo);
    }
    ::operator_delete(p_Var41,0x10);
  }
  if (p_Var43 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(p_Var43);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_145b73b10:
  if (bVar6) {
    FThreadStats::AddMessage(FVar47,CycleScopeEnd);
  }
  return (TRefCountPtr<FRHIGraphicsPipelineState>)(FRHIGraphicsPipelineState *)pFVar46;
}

// RebuildCache @ 145b76cc0

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
FVulkanPipelineStateCacheManager::RebuildCache(FVulkanPipelineStateCacheManager *this)

{
  bool bVar1;
  
  bVar1 = IsInGameThread();
  if (bVar1) {
    FlushRenderingCommands();
  }
  DestroyCache(this);
  return;
}

// Save @ 145b7aab0

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
FVulkanPipelineStateCacheManager::Save(FVulkanPipelineStateCacheManager *this,FString *param_1)

{
  SavePSOCache(this,param_1,&this->GlobalPSOCache);
  return;
}

// SavePSOCache @ 145b7aad0

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

void __thiscall
FVulkanPipelineStateCacheManager::SavePSOCache
          (FVulkanPipelineStateCacheManager *this,FString *param_1,FPipelineCache *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  VkResult VVar4;
  FString *pFVar5;
  IFileManager *pIVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  ulong64 local_res8;
  FString *local_res10;
  undefined8 local_res18;
  LPCRITICAL_SECTION local_res20;
  ForAnyElementType local_1c8;
  int local_1c0 [4];
  TArray<FVulkanPipelineSize,TSizedDefaultAllocator<32>_> local_1b0;
  FString local_1a0;
  uchar *local_190;
  undefined8 local_188;
  FString local_180;
  FPlatformRWLock *local_170;
  TArrayView<unsigned_char_const_,__int64> local_168;
  TArrayView<unsigned_char_const_,__int64> local_158;
  FArchiveState local_148;
  undefined8 local_b8;
  uchar **local_b0;
  undefined8 local_a8;
  VkPipelineCacheCreateInfo local_98;
  FString local_70;
  FString local_60 [2];
  
  local_170 = &param_2->PipelineCacheLock;
  local_res10 = param_1;
  AcquireSRWLockExclusive((PSRWLOCK)local_170);
  lpCriticalSection = &this->GraphicsPSOLockedCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_145b7b113:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_res20 = (LPCRITICAL_SECTION)&this->LRUCS;
  if (local_res20 == (LPCRITICAL_SECTION)0x0) goto LAB_145b7b113;
  EnterCriticalSection(local_res20);
  local_res8 = 0;
  VVar4 = (*VulkanDynamicAPI::vkGetPipelineCacheData)
                    (this->Device->Device,param_2->PipelineCache,&local_res8,(void *)0x0);
  if (VVar4 != VK_SUCCESS) {
    VulkanRHI::VerifyVulkanResult
              (VVar4,
               "VulkanRHI::vkGetPipelineCacheData(Device->GetHandle(), PipelineCacheExclusive.Get(), &Size, nullptr)"
               ,
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
               ,0x292);
  }
  if (0x1f < local_res8) {
    local_1c8.Data = (FScriptContainerElement *)0x0;
    local_1c0[0] = 0;
    local_1c0[1] = 0;
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,(int)local_res8,&local_1c8,local_1c0,local_1c0 + 1);
    VVar4 = (*VulkanDynamicAPI::vkGetPipelineCacheData)
                      (this->Device->Device,param_2->PipelineCache,&local_res8,local_1c8.Data);
    if (VVar4 == VK_SUCCESS) {
      pFVar5 = ::FString::FString(&local_70,param_1);
      FVulkanGenericPlatform::CreatePSOBinaryCacheFilename(&local_180,this->Device,pFVar5);
      pIVar6 = IFileManager::Get();
      local_168.DataPtr = (uchar *)local_1c8.Data;
      local_168.ArrayNum = (long64)local_1c0[0];
      FVar8.Data = (FScriptContainerElement *)L"";
      if (local_180.Data.ArrayNum != 0) {
        FVar8.Data = local_180.Data.AllocatorInstance.Data;
      }
      if ((local_1c0[0] < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      bVar3 = FFileHelper::SaveArrayToFile(&local_168,(wchar_t *)FVar8.Data,pIVar6,0);
      if (bVar3) {
        if (3 < (byte)LogVulkanRHI._0_1_) {
          UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        }
      }
      else if (1 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      param_1 = local_res10;
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
        param_1 = local_res10;
      }
    }
    else if ((VVar4 == VK_INCOMPLETE) || (VVar4 == VK_ERROR_OUT_OF_HOST_MEMORY)) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      (*VulkanDynamicAPI::vkDestroyPipelineCache)
                (this->Device->Device,param_2->PipelineCache,&VulkanRHI::GAllocationCallbacks);
      local_98.sType = VK_STRUCTURE_TYPE_PIPELINE_CACHE_CREATE_INFO;
      local_98.pInitialData._4_4_ = 0;
      local_98._4_8_ = 0;
      local_98._12_8_ = 0;
      local_98._20_8_ = 0;
      local_98._28_8_ = 0;
      VVar4 = (*VulkanDynamicAPI::vkCreatePipelineCache)
                        (this->Device->Device,&local_98,&VulkanRHI::GAllocationCallbacks,
                         &param_2->PipelineCache);
      if (VVar4 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar4,
                   "VulkanRHI::vkCreatePipelineCache(Device->GetHandle(), &PipelineCacheInfo, VULKAN_CPU_ALLOCATOR, &PipelineCacheExclusive.Get())"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                   ,0x2ae);
      }
    }
    else {
      VulkanRHI::VerifyVulkanResult
                (VVar4,"Result",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipeline.cpp"
                 ,0x2b2);
    }
    if (local_1c8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1c8.Data);
    }
  }
  pTVar2 = CVarEnableLRU.Ref;
  bVar3 = IsInParallelGameThread();
  if (!bVar3) {
    bVar3 = IsInGameThread();
    lVar7 = 4;
    if (!bVar3) goto LAB_145b7ad40;
  }
  lVar7 = 0;
LAB_145b7ad40:
  if (*(int *)((longlong)pTVar2->ShadowedValue + lVar7) != 0) {
    local_190 = (uchar *)0x0;
    local_188 = 0;
    local_148._padding_ = 0;
    local_148.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_res18 = 0;
    local_148.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_148.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_148.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_148._40_8_ = 0;
    local_148.ArSerializingDefaults = 0;
    local_148.ArPortFlags = 0;
    local_148.ArMaxSerializeSize = 0;
    local_148.ArUEVer.FileVersionUE4 = 0;
    local_148.ArUEVer.FileVersionUE5 = 0;
    local_148.ArLicenseeUEVer = 0;
    local_148.ArEngineVer.Major = 0;
    local_148.ArEngineVer.Minor = 0;
    local_148.ArEngineVer.Patch = 0;
    local_148.ArEngineVer._6_2_ = 0;
    local_148.ArEngineVer.Changelist = 0;
    local_148.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_148.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_148.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_148.SerializedProperty = (FProperty *)0x0;
    local_148.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_148.bCustomVersionsAreReset = false;
    local_148._129_7_ = 0;
    local_148.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_148);
    local_b8 = 0;
    local_148._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
    local_b0 = &local_190;
    local_a8 = local_res18;
    FArchiveState::SetIsSaving(&local_148,true);
    (**(code **)(local_148._padding_ + 0x108))(&local_148,0);
    local_1b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_148._padding_ = (longlong)&___7FMemoryWriter__6B_;
    local_1b0.ArrayNum = 0;
    local_1b0.ArrayMax = 0;
    local_1c0[2] = 2;
    local_1c0[3] = 0x10;
    TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
    ::GenerateValueArray<TSizedDefaultAllocator<32>_>
              ((TMapBase<unsigned___int64,FVulkanPipelineSize,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FVulkanPipelineSize,0>_>
                *)&this->LRU2SizeList,&local_1b0);
    if ((local_148.ActiveFPLB)->EndFastPathLoadBuffer <
        (local_148.ActiveFPLB)->StartFastPathLoadBuffer + 4) {
      if (local_148.ArForceByteSwapping == 0) {
        (**(code **)(local_148._padding_ + 0x188))(&local_148,local_1c0 + 2,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_148,(uint *)(local_1c0 + 2));
      }
    }
    else {
      local_1c0[2] = *(int *)(local_148.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_148.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_148.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    if ((local_148.ActiveFPLB)->EndFastPathLoadBuffer <
        (local_148.ActiveFPLB)->StartFastPathLoadBuffer + 4) {
      if (local_148.ArForceByteSwapping == 0) {
        (**(code **)(local_148._padding_ + 0x188))(&local_148,local_1c0 + 3,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped((FArchive *)&local_148,(uint *)(local_1c0 + 3));
      }
    }
    else {
      local_1c0[3] = *(int *)(local_148.ActiveFPLB)->StartFastPathLoadBuffer;
      (local_148.ActiveFPLB)->StartFastPathLoadBuffer =
           (local_148.ActiveFPLB)->StartFastPathLoadBuffer + 4;
    }
    SerializeArray<FVulkanPipelineSize>((FArchive *)&local_148,&local_1b0);
    pFVar5 = ::FString::FString(local_60,param_1);
    FVulkanGenericPlatform::CreatePSOBinaryCacheFilename(&local_1a0,this->Device,pFVar5);
    ::FString::AppendChars(&local_1a0,L".lru",4);
    pIVar6 = IFileManager::Get();
    local_158.DataPtr = local_190;
    local_158.ArrayNum = (long64)(int)local_188;
    FVar8.Data = (FScriptContainerElement *)L"";
    if (local_1a0.Data.ArrayNum != 0) {
      FVar8.Data = local_1a0.Data.AllocatorInstance.Data;
    }
    if (((int)local_188 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    bVar3 = FFileHelper::SaveArrayToFile(&local_158,(wchar_t *)FVar8.Data,pIVar6,0);
    if (bVar3) {
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
    }
    else if (1 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if (local_1a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a0.Data.AllocatorInstance.Data);
    }
    if (local_1b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b0.AllocatorInstance.Data);
    }
    FArchive::~FArchive((FArchive *)&local_148);
    if (local_190 != (uchar *)0x0) {
      FMemory::Free(local_190);
    }
  }
  LeaveCriticalSection(local_res20);
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  ReleaseSRWLockExclusive((PSRWLOCK)local_170);
  return;
}

// TickLRU @ 145b7f7f0

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

void __thiscall FVulkanPipelineStateCacheManager::TickLRU(FVulkanPipelineStateCacheManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TDoubleLinkedListNode *pTVar1;
  FVulkanGraphicsPipelineState *this_00;
  bool bVar2;
  FVulkanChunkedPipelineCacheManager *this_01;
  int iVar3;
  
  bVar2 = FVulkanChunkedPipelineCacheManager::IsEnabled();
  if (bVar2) {
    this_01 = FVulkanChunkedPipelineCacheManager::Get();
    FVulkanChunkedPipelineCacheManager::Tick(this_01);
  }
  if ((this->bUseLRU != false) && (GVulkanPSOLRUEvictAfterUnusedFrames != 0)) {
    lpCriticalSection = &this->LRUCS;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    iVar3 = 0;
    do {
      pTVar1 = (this->LRU).TailNode;
      if (pTVar1 == (TDoubleLinkedListNode *)0x0) break;
      this_00 = pTVar1->Value;
      if (this_00 != (FVulkanGraphicsPipelineState *)0x0) {
        FRHIResource::AddRef((FRHIResource *)this_00);
      }
      if (GFrameNumberRenderThread <= this_00->LRUFrame + GVulkanPSOLRUEvictAfterUnusedFrames) {
        FRHIResource::Release((FRHIResource *)this_00);
        break;
      }
      LRURemove(this,this_00);
      FRHIResource::Release((FRHIResource *)this_00);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 5);
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

