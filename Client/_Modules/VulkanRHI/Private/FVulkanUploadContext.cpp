// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 4

// FVulkanUploadContext @ 145adbc90

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

FVulkanUploadContext * __thiscall
FVulkanUploadContext::FVulkanUploadContext
          (FVulkanUploadContext *this,FVulkanDevice *param_1,FVulkanQueue *param_2)

{
  FVulkanCommandBufferPool *pFVar1;
  
  *(FVulkanDevice **)&this->field_0x8 = param_1;
  *(undefined ***)this = &___7FVulkanContextCommon__6B_;
  *(FVulkanQueue **)&this->field_0x10 = param_2;
  pFVar1 = FVulkanQueue::AcquireCommandBufferPool(param_2,Primary);
  *(FVulkanCommandBufferPool **)&this->field_0x18 = pFVar1;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined ***)this = &___7FVulkanUploadContext__6B_;
  return this;
}

// ~FVulkanUploadContext @ 145adcb70

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

void __thiscall FVulkanUploadContext::~FVulkanUploadContext(FVulkanUploadContext *this)

{
  *(undefined ***)this = &___7FVulkanUploadContext__6B_;
  FVulkanContextCommon::~FVulkanContextCommon((FVulkanContextCommon *)this);
  return;
}

// DestroyPool @ 145ae3140

void __cdecl FVulkanUploadContext::DestroyPool(void)

{
  atomic<void_*> aVar1;
  uint uVar2;
  
  while( true ) {
    uVar2 = FLockFreePointerListLIFORoot<64,1>::Pop((FLockFreePointerListLIFORoot<64,1> *)&Pool);
    if (uVar2 == 0) {
      return;
    }
    aVar1 = FLockFreeLinkPolicy::LinkAllocator.Pages[uVar2 >> 0xe][uVar2 & 0x3fff].Payload;
    FLockFreeLinkPolicy::FreeLockFreeLink(uVar2);
    if (aVar1 == (atomic<void_*>)0x0) break;
    (*(code *)**(undefined8 **)aVar1)(aVar1,1);
  }
  return;
}

// Get @ 145ae5eb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVulkanUploadContext * __cdecl FVulkanUploadContext::Get(FRHICommandListBase *param_1)

{
  IRHIUploadContext *pIVar1;
  FVulkanUploadContext *pFVar2;
  
  pIVar1 = param_1->UploadContext;
  if (pIVar1 == (IRHIUploadContext *)0x0) {
    pIVar1 = (IRHIUploadContext *)(**(code **)(GDynamicRHI->_padding_ + 0x3d0))();
    param_1->UploadContext = pIVar1;
  }
  pFVar2 = (FVulkanUploadContext *)(pIVar1 + -0x50);
  if (pIVar1 == (IRHIUploadContext *)0x0) {
    pFVar2 = (FVulkanUploadContext *)0x0;
  }
  return pFVar2;
}

