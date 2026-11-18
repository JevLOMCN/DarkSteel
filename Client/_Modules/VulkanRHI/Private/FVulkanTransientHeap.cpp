// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanTransientHeap @ 145b93fc0

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

FVulkanTransientHeap * __thiscall
FVulkanTransientHeap::FVulkanTransientHeap
          (FVulkanTransientHeap *this,FInitializer *param_1,FVulkanDevice *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  VkBuffer_T *pVVar4;
  EBufferUsageFlags EVar5;
  
  FRHITransientHeap::FRHITransientHeap((FRHITransientHeap *)this,param_1);
  this->Device = param_2;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&_vftable__for__FRHITransientHeap__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  this->VulkanBuffer = (VkBuffer_T *)0x0;
  this->HandleID = 0;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->InternalAllocation);
  uVar1 = (param_2->OptionalDeviceExtensions).field0_0x0.Packed;
  if (((uVar1 >> 10 & 1) == 0) ||
     (((((uint)uVar1 & 0x2800) != 0x2800 && ((uVar1 >> 0xc & 1) == 0)) ||
      (EVar5 = 0x29c388, (uVar1 & 0x17000004000) != 0x17000004000)))) {
    EVar5 = UniformBuffer|StructuredBuffer|IndexBuffer|VertexBuffer|KeepCPUAccessible|ShaderResource
            |DrawIndirect|UnorderedAccess;
  }
  uVar2 = FVulkanBuffer::UEToVKBufferUsageFlags(param_2,EVar5,false);
  pVVar4 = FVulkanDevice::CreateBuffer(param_2,param_1->Size,uVar2,0);
  this->VulkanBuffer = pVVar4;
  if ((int)GMaxRHIFeatureLevel < 2) {
    LOCK();
    UNLOCK();
    iVar3 = GVulkanBufferHandleIdCounter._0_4_;
    GVulkanBufferHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanBufferHandleIdCounter + 1);
    this->HandleID = iVar3 + 1;
  }
  uVar2 = VulkanRHI::FMemoryManager::CalculateBufferAlignment(param_2,EVar5,false);
  if (uVar2 < param_1->Alignment) {
    uVar2 = param_1->Alignment;
  }
  VulkanRHI::FMemoryManager::AllocateBufferMemory
            (&param_2->MemoryManager,&this->InternalAllocation,this->VulkanBuffer,AutoBind|Dedicated
             ,L"VulkanTransientHeap",uVar2);
  return this;
}

// ~FVulkanTransientHeap @ 145b969f0

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

void __thiscall FVulkanTransientHeap::~FVulkanTransientHeap(FVulkanTransientHeap *this)

{
  this->_padding_ = (longlong)&_vftable__for__FRHITransientHeap__;
  this->_padding_ = (longlong)&_vftable__for__FRefCountBase__;
  VulkanRHI::FMemoryManager::FreeVulkanAllocation
            (&this->Device->MemoryManager,&this->InternalAllocation,EVulkanFreeFlag_None);
  VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
            (&this->Device->DeferredDeletionQueue,Buffer,(ulong64)this->VulkanBuffer);
  this->VulkanBuffer = (VkBuffer_T *)0x0;
  this->HandleID = 0;
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->InternalAllocation);
  TRHITransientResourceCache<FRHITransientBuffer>::~TRHITransientResourceCache<FRHITransientBuffer>
            ((TRHITransientResourceCache<FRHITransientBuffer> *)&this->_padding_);
  TRHITransientResourceCache<FRHITransientTexture>::
  ~TRHITransientResourceCache<FRHITransientTexture>
            ((TRHITransientResourceCache<FRHITransientTexture> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// GetMemoryHandle @ 145babf90

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

VkDeviceMemory_T * __thiscall FVulkanTransientHeap::GetMemoryHandle(FVulkanTransientHeap *this)

{
  VkDeviceMemory_T *pVVar1;
  
  pVVar1 = VulkanRHI::FVulkanAllocation::GetDeviceMemoryHandle
                     (&this->InternalAllocation,this->Device);
  return pVVar1;
}

// GetVulkanAllocation @ 145bad8f0

FVulkanAllocation * __cdecl
FVulkanTransientHeap::GetVulkanAllocation
          (FVulkanAllocation *__return_storage_ptr__,FRHITransientHeapAllocation *param_1)

{
  uint uVar1;
  FRHITransientHeap *pFVar2;
  code *pcVar3;
  bool bVar4;
  FVulkanAllocation *pFVar5;
  
  pFVar2 = param_1->Heap;
  if (pFVar2 == (FRHITransientHeap *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Heap",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                       ,0x37,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVulkanAllocation *)(*pcVar3)();
      return pFVar5;
    }
  }
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(__return_storage_ptr__);
  VulkanRHI::FVulkanAllocation::Reference
            (__return_storage_ptr__,(FVulkanAllocation *)&pFVar2[1].Allocator.AllocationCount);
  __return_storage_ptr__->VulkanHandle = *(ulong64 *)&pFVar2[1].Initializer.TextureCacheSize;
  __return_storage_ptr__->HandleId = (uint)pFVar2[1].Allocator.GpuVirtualAddress;
  __return_storage_ptr__->Offset = __return_storage_ptr__->Offset + (int)param_1->Offset;
  uVar1 = (uint)param_1->Size;
  __return_storage_ptr__->bTransient = '\x01';
  __return_storage_ptr__->Size = uVar1;
  if (*(uint *)&pFVar2[1].Allocator.field_0x2c < uVar1 + __return_storage_ptr__->Offset) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(TransientAlloc.Offset + TransientAlloc.Size) <= Heap->InternalAllocation.Size"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTransientResourceAllocator.cpp"
                       ,0x40,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FVulkanAllocation *)(*pcVar3)();
      return pFVar5;
    }
  }
  return __return_storage_ptr__;
}

