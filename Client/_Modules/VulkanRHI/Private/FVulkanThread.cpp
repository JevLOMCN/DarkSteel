// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// ~FVulkanThread @ 145b96970

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

void __thiscall FVulkanThread::~FVulkanThread(FVulkanThread *this)

{
  FRunnableThread *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanThread__6B_;
  LOCK();
  this->bExit = (atomic<bool>)0x1;
  UNLOCK();
  (**(code **)(this->Event->_padding_ + 0x10))();
  (**(code **)(this->Thread->_padding_ + 0x20))();
  pFVar1 = this->Thread;
  if (pFVar1 != (FRunnableThread *)0x0) {
    (**(code **)(pFVar1->_padding_ + 0x30))(pFVar1,1);
  }
  this->Thread = (FRunnableThread *)0x0;
  FGenericPlatformProcess::ReturnSynchEventToPool(this->Event);
  this->Event = (FEvent *)0x0;
  this->_padding_ = (longlong)&___7FRunnable__6B_;
  return;
}

// Run @ 145bbc460

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

uint __thiscall FVulkanThread::Run(FVulkanThread *this)

{
  atomic<bool> aVar1;
  char cVar2;
  
  aVar1 = this->bExit;
  while (aVar1 == (atomic<bool>)0x0) {
    do {
      cVar2 = (*(code *)this->Func)(this->RHI);
    } while (cVar2 != '\0');
    (**(code **)(this->Event->_padding_ + 0x20))(this->Event,0xffffffff,0);
    aVar1 = this->bExit;
  }
  return 0;
}

