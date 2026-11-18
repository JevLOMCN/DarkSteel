// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FVulkanTransientHeapCache @ 145b94120

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

FVulkanTransientHeapCache * __thiscall
FVulkanTransientHeapCache::FVulkanTransientHeapCache
          (FVulkanTransientHeapCache *this,FInitializer *param_1,FVulkanDevice *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong64 uVar4;
  
  this->_padding_ = (longlong)&___7FRHITransientHeapCache__6B_;
  uVar4 = param_1->MinimumHeapSize;
  this->_padding_ = param_1->MinimumFirstHeapSize;
  this->_padding_ = uVar4;
  uVar1 = param_1->GarbageCollectLatency;
  uVar2 = param_1->TextureCacheSize;
  uVar3 = param_1->BufferCacheSize;
  *(uint *)&this->_padding_ = param_1->HeapAlignment;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar1;
  *(uint *)&this->_padding_ = uVar2;
  *(uint *)((longlong)&this->_padding_ + 4) = uVar3;
  this->_padding_ = *(longlong *)&param_1->bSupportsAllHeapFlags;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->_padding_,4000);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FVulkanTransientHeapCache__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->Device = param_2;
  return this;
}

// Create @ 145ba3aa0

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

FVulkanTransientHeapCache * __cdecl FVulkanTransientHeapCache::Create(FVulkanDevice *param_1)

{
  undefined1 uVar1;
  undefined6 uVar3;
  uint uVar4;
  ulong64 uVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  FInitializer *pFVar11;
  FVulkanTransientHeapCache *pFVar12;
  FVulkanTransientHeapCache *pFVar13;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  FInitializer local_30;
  undefined7 uVar2;
  
  pFVar11 = FRHITransientHeapCache::FInitializer::CreateDefault(&local_30);
  uVar4 = (uint)(param_1->GpuProps).limits.bufferImageGranularity;
  uVar5 = pFVar11->MinimumFirstHeapSize;
  uVar6 = pFVar11->MinimumHeapSize;
  uVar1 = pFVar11->bSupportsVirtualMapping;
  uVar3 = *(undefined6 *)&pFVar11->field_0x22;
  uVar2 = CONCAT61(uVar3,uVar1);
  uVar7 = pFVar11->GarbageCollectLatency;
  uVar8 = pFVar11->TextureCacheSize;
  uVar9 = pFVar11->BufferCacheSize;
  uVar10 = 0x100;
  if (0x100 < uVar4) {
    uVar10 = uVar4;
  }
  local_38 = CONCAT71(uVar2,1);
  pFVar12 = ::operator_new(200);
  pFVar13 = (FVulkanTransientHeapCache *)0x0;
  if (pFVar12 != (FVulkanTransientHeapCache *)0x0) {
    pFVar12->_padding_ = uVar5;
    pFVar12->_padding_ = uVar6;
    pFVar12->_padding_ = (longlong)&___7FRHITransientHeapCache__6B_;
    *(uint *)&pFVar12->_padding_ = uVar10;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = uVar7;
    *(undefined4 *)&pFVar12->_padding_ = uVar8;
    *(undefined4 *)((longlong)&pFVar12->_padding_ + 4) = uVar9;
    pFVar12->_padding_ = local_38;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    *(undefined4 *)&pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    *(undefined4 *)&pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pFVar12->_padding_,4000);
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = (longlong)&___7FVulkanTransientHeapCache__6B_;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->_padding_ = 0;
    pFVar12->Device = param_1;
    pFVar13 = pFVar12;
  }
  return pFVar13;
}

// CreateHeap @ 145ba40e0

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

FRHITransientHeap * __thiscall
FVulkanTransientHeapCache::CreateHeap(FVulkanTransientHeapCache *this,FInitializer *param_1)

{
  FVulkanDevice *this_00;
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  FRHITransientHeap *this_01;
  VkBuffer_T *pVVar4;
  EBufferUsageFlags EVar5;
  
  this_01 = ::operator_new(0x1a0);
  if (this_01 != (FRHITransientHeap *)0x0) {
    this_00 = this->Device;
    FRHITransientHeap::FRHITransientHeap(this_01,param_1);
    *(FVulkanDevice **)&this_01[1].Initializer.Alignment = this_00;
    *(undefined4 *)&this_01[1].Initializer.Size = 0;
    this_01->_padding_ = (longlong)&FVulkanTransientHeap::_vftable__for__FRHITransientHeap__;
    this_01[1]._padding_ = (longlong)&FVulkanTransientHeap::_vftable__for__FRefCountBase__;
    this_01[1].Initializer.TextureCacheSize = 0;
    this_01[1].Initializer.BufferCacheSize = 0;
    *(undefined4 *)&this_01[1].Allocator.GpuVirtualAddress = 0;
    VulkanRHI::FVulkanAllocation::FVulkanAllocation
              ((FVulkanAllocation *)&this_01[1].Allocator.AllocationCount);
    uVar1 = (this_00->OptionalDeviceExtensions).field0_0x0.Packed;
    if (((uVar1 >> 10 & 1) == 0) ||
       (((((uint)uVar1 & 0x2800) != 0x2800 && ((uVar1 >> 0xc & 1) == 0)) ||
        (EVar5 = 0x29c388, (uVar1 & 0x17000004000) != 0x17000004000)))) {
      EVar5 = UniformBuffer|StructuredBuffer|IndexBuffer|VertexBuffer|KeepCPUAccessible|
              ShaderResource|DrawIndirect|UnorderedAccess;
    }
    uVar2 = FVulkanBuffer::UEToVKBufferUsageFlags(this_00,EVar5,false);
    pVVar4 = FVulkanDevice::CreateBuffer(this_00,param_1->Size,uVar2,0);
    *(VkBuffer_T **)&this_01[1].Initializer.TextureCacheSize = pVVar4;
    if ((int)GMaxRHIFeatureLevel < 2) {
      LOCK();
      UNLOCK();
      iVar3 = GVulkanBufferHandleIdCounter._0_4_;
      GVulkanBufferHandleIdCounter =
           (TAtomic<unsigned___int64>)((longlong)GVulkanBufferHandleIdCounter + 1);
      *(int *)&this_01[1].Allocator.GpuVirtualAddress = iVar3 + 1;
    }
    uVar2 = VulkanRHI::FMemoryManager::CalculateBufferAlignment(this_00,EVar5,false);
    if (uVar2 < param_1->Alignment) {
      uVar2 = param_1->Alignment;
    }
    VulkanRHI::FMemoryManager::AllocateBufferMemory
              (&this_00->MemoryManager,(FVulkanAllocation *)&this_01[1].Allocator.AllocationCount,
               *(VkBuffer_T **)&this_01[1].Initializer.TextureCacheSize,AutoBind|Dedicated,
               L"VulkanTransientHeap",uVar2);
    return this_01;
  }
  return (FRHITransientHeap *)0x0;
}

