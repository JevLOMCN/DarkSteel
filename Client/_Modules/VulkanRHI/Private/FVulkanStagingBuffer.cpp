// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// ~FVulkanStagingBuffer @ 145b964f0

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

void __thiscall FVulkanStagingBuffer::~FVulkanStagingBuffer(FVulkanStagingBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  this->_padding_ = (longlong)&___7FVulkanStagingBuffer__6B_;
  if (this->StagingBuffer != (FStagingBuffer *)0x0) {
    if (this->Device == (FVulkanDevice *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                         ,0x247,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    VulkanRHI::FStagingManager::ReleaseBuffer
              (&this->Device->StagingManager,(FVulkanContextCommon *)0x0,&this->StagingBuffer);
  }
  this->_padding_ = (longlong)&___7FRHIStagingBuffer__6B_;
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetGPUSizeBytes @ 145babcc0

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

ulong64 __thiscall FVulkanStagingBuffer::GetGPUSizeBytes(FVulkanStagingBuffer *this)

{
  uint uVar1;
  
  if (this->StagingBuffer != (FStagingBuffer *)0x0) {
    uVar1 = VulkanRHI::FStagingBuffer::GetSize(this->StagingBuffer);
    return (ulonglong)uVar1;
  }
  return 0;
}

// Lock @ 145bb1500

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

void * __thiscall FVulkanStagingBuffer::Lock(FVulkanStagingBuffer *this,uint param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  void *pvVar3;
  
  if ((char)this->_padding_ != '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!bIsLocked",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x24e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  *(undefined1 *)&this->_padding_ = 1;
  if (this->QueuedNumBytes < param_1 + param_2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("EndOffset <= QueuedNumBytes",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                       ,0x251,
                       L"Lock at Offset (%u) and NumBytes (%u) reads beyond the allocated size of the staging buffer (%u)"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pvVar3 = (void *)(*pcVar1)();
      return pvVar3;
    }
  }
  VulkanRHI::FStagingBuffer::InvalidateMappedMemory(this->StagingBuffer);
  pvVar3 = VulkanRHI::FStagingBuffer::GetMappedPointer(this->StagingBuffer);
  return (void *)((longlong)pvVar3 + (ulonglong)param_1);
}

// Unlock @ 145bbffd0

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

void __thiscall FVulkanStagingBuffer::Unlock(FVulkanStagingBuffer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((char)this->_padding_ != '\0') {
    *(undefined1 *)&this->_padding_ = 0;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("bIsLocked",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUtil.cpp"
                     ,0x259,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  *(undefined1 *)&this->_padding_ = 0;
  return;
}

