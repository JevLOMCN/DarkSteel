// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 18

// FVulkanSubresourceAllocator @ 145b042a0

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

FVulkanSubresourceAllocator * __thiscall
VulkanRHI::FVulkanSubresourceAllocator::FVulkanSubresourceAllocator
          (FVulkanSubresourceAllocator *this,EVulkanAllocationType param_1,FMemoryManager *param_2,
          uchar param_3,FDeviceMemoryAllocation *param_4,uint param_5,uint param_6)

{
  TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  uint uVar7;
  FVulkanSubresourceAllocator *pFVar8;
  ulong64 uVar9;
  char *pcVar10;
  byte bVar11;
  undefined4 local_28;
  uint uStack_24;
  
  pTVar1 = &this->FreeList;
  this->SubresourceAllocatorFlags = param_3;
  this->MemoryTypeIndex = param_5;
  this->Type = param_1;
  this->BufferId = param_6;
  this->Owner = param_2;
  this->MemoryPropertyFlags = 0;
  this->MemoryAllocation = param_4;
  this->Alignment = 0;
  this->FrameFreed = 0;
  this->LastDefragFrame = 0;
  this->UsedSize = 0;
  this->BufferUsageFlags = 0;
  this->Buffer = (VkBuffer_T *)0x0;
  this->PoolSizeIndex = 0x7fffffff;
  this->AllocatorIndex = 0xffffffff;
  this->bIsEvicting = false;
  this->bLocked = false;
  this->bIsDefragging = false;
  this->NumSubAllocations = 0;
  this->AllocCalls = 0;
  this->FreeCalls = 0;
  (this->Track).Data = (void *)0x0;
  (this->Track).SizeOrLine = 0;
  (this->InternalData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalData).ArrayNum = 0;
  (this->InternalData).ArrayMax = 0;
  this->InternalFreeList = -1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubresourceAllocatorCS,4000);
  this->MemoryUsed[0] = 0;
  this->MemoryUsed[1] = 0;
  this->MemoryUsed[2] = 0;
  this->MemoryUsed[3] = 0;
  this->MemoryUsed[4] = 0;
  this->MemoryUsed[5] = 0;
  this->MemoryUsed[6] = 0;
  this->MemoryUsed[7] = 0;
  this->MemoryUsed[8] = 0;
  this->MemoryUsed[9] = 0;
  uStack_24 = (uint)param_4->Size;
  this->MaxSize = uStack_24;
  bVar11 = this->SubresourceAllocatorFlags | 1;
  if (param_4->MappedPointer == (void *)0x0) {
    bVar11 = this->SubresourceAllocatorFlags & 0xfe;
  }
  this->SubresourceAllocatorFlags = bVar11;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_28 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanSubresourceAllocator *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar6 = (this->FreeList).ArrayNum;
  if (iVar6 == (this->FreeList).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->FreeList).ArrayMax);
  }
  (this->FreeList).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       CONCAT44(uStack_24,local_28);
  if (GVulkanMemoryBackTrace < 1) {
    iVar6 = 0xa1c;
    pcVar10 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp";
  }
  else {
    pcVar10 = (this->Track).Data;
    if (((ulong64 *)pcVar10 == (ulong64 *)0x0) || (-1 < (this->Track).SizeOrLine)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)GVulkanMemoryBackTrace;
      uVar9 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pcVar10 = operator_new__(uVar9);
    }
    uVar7 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                      ((ulong64 *)pcVar10,GVulkanMemoryBackTrace,(void *)0x0);
    iVar6 = -uVar7;
  }
  (this->Track).Data = pcVar10;
  (this->Track).SizeOrLine = iVar6;
  return this;
}

// FVulkanSubresourceAllocator @ 145b044d0

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

FVulkanSubresourceAllocator * __thiscall
VulkanRHI::FVulkanSubresourceAllocator::FVulkanSubresourceAllocator
          (FVulkanSubresourceAllocator *this,EVulkanAllocationType param_1,FMemoryManager *param_2,
          uchar param_3,FDeviceMemoryAllocation *param_4,uint param_5,uint param_6,uint param_7,
          VkBuffer_T *param_8,uint param_9,uint param_10,uint param_11,int param_12)

{
  TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  bool bVar5;
  int iVar6;
  uint uVar7;
  FVulkanSubresourceAllocator *pFVar8;
  ulong64 uVar9;
  char *pcVar10;
  byte bVar11;
  undefined4 local_28;
  uint uStack_24;
  
  pTVar1 = &this->FreeList;
  this->MemoryTypeIndex = param_5;
  this->MemoryPropertyFlags = param_6;
  this->MaxSize = param_9;
  this->SubresourceAllocatorFlags = param_3;
  this->Alignment = param_7;
  this->BufferUsageFlags = param_11;
  this->Buffer = param_8;
  this->BufferId = param_10;
  this->Type = param_1;
  this->PoolSizeIndex = param_12;
  this->Owner = param_2;
  this->MemoryAllocation = param_4;
  this->FrameFreed = 0;
  this->LastDefragFrame = 0;
  this->UsedSize = 0;
  this->AllocatorIndex = 0xffffffff;
  this->bIsEvicting = false;
  this->bLocked = false;
  this->bIsDefragging = false;
  this->NumSubAllocations = 0;
  this->AllocCalls = 0;
  this->FreeCalls = 0;
  (this->Track).Data = (void *)0x0;
  (this->Track).SizeOrLine = 0;
  (this->InternalData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalData).ArrayNum = 0;
  (this->InternalData).ArrayMax = 0;
  this->InternalFreeList = -1;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->FreeList).ArrayNum = 0;
  (this->FreeList).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->SubresourceAllocatorCS,4000);
  this->MemoryUsed[0] = 0;
  this->MemoryUsed[1] = 0;
  this->MemoryUsed[2] = 0;
  this->MemoryUsed[3] = 0;
  this->MemoryUsed[4] = 0;
  this->MemoryUsed[5] = 0;
  this->MemoryUsed[6] = 0;
  this->MemoryUsed[7] = 0;
  this->MemoryUsed[8] = 0;
  this->MemoryUsed[9] = 0;
  bVar11 = this->SubresourceAllocatorFlags | 1;
  if (param_4->MappedPointer == (void *)0x0) {
    bVar11 = this->SubresourceAllocatorFlags & 0xfe;
  }
  this->SubresourceAllocatorFlags = bVar11;
  uStack_24 = this->MaxSize;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  local_28 = 0;
  if ((pFVar2 <= (FScriptContainerElement *)&local_28) &&
     ((FScriptContainerElement *)&local_28 < pFVar2 + (longlong)(this->FreeList).ArrayMax * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FVulkanSubresourceAllocator *)(*pcVar3)();
      return pFVar8;
    }
  }
  iVar6 = (this->FreeList).ArrayNum;
  if (iVar6 == (this->FreeList).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar1->AllocatorInstance,&(this->FreeList).ArrayMax);
  }
  (this->FreeList).ArrayNum = iVar6 + 1;
  *(ulonglong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) =
       CONCAT44(uStack_24,local_28);
  if (GVulkanMemoryBackTrace < 1) {
    iVar6 = 0x9f6;
    pcVar10 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp";
  }
  else {
    pcVar10 = (this->Track).Data;
    if (((ulong64 *)pcVar10 == (ulong64 *)0x0) || (-1 < (this->Track).SizeOrLine)) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (longlong)GVulkanMemoryBackTrace;
      uVar9 = SUB168(ZEXT816(8) * auVar4,0);
      if (SUB168(ZEXT816(8) * auVar4,8) != 0) {
        uVar9 = 0xffffffffffffffff;
      }
      pcVar10 = operator_new__(uVar9);
    }
    uVar7 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                      ((ulong64 *)pcVar10,GVulkanMemoryBackTrace,(void *)0x0);
    iVar6 = -uVar7;
  }
  (this->Track).Data = pcVar10;
  (this->Track).SizeOrLine = iVar6;
  return this;
}

// ~FVulkanSubresourceAllocator @ 145b05ac0

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
VulkanRHI::FVulkanSubresourceAllocator::~FVulkanSubresourceAllocator
          (FVulkanSubresourceAllocator *this)

{
  EVulkanAllocationType EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  FString local_38;
  FString local_28;
  
  bVar4 = JoinFreeBlocks(this);
  if (!bVar4) {
    if (2 < (byte)LogVulkanRHI._0_1_) {
      VulkanTrackGetString(&local_38,&this->Track);
      EVar1 = this->Type;
      if (((((EVar1 != EVulkanAllocationEmpty) && (EVar1 != EVulkanAllocationPooledBuffer)) &&
           (EVar1 != EVulkanAllocationBuffer)) &&
          ((EVar1 != EVulkanAllocationImage && (EVar1 != EVulkanAllocationImageDedicated)))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("!\"Enclosing block should never be called\"",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x1b9,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
    }
    iVar2 = (this->InternalData).ArrayNum;
    pFVar5 = (this->InternalData).AllocatorInstance.Data;
    pFVar6 = pFVar5 + (longlong)iVar2 * 0x40;
    while( true ) {
      if ((this->InternalData).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar5 == pFVar6) break;
      if ((*(int *)pFVar5 == 1) && (2 < (byte)LogVulkanRHI._0_1_)) {
        VulkanTrackGetString(&local_28,(FVulkanTrackInfo *)(pFVar5 + 0x28));
        VulkanAllocationMetaTypeToString((EVulkanAllocationMetaType)pFVar5[5]);
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      pFVar5 = pFVar5 + 0x40;
    }
  }
  if ((this->MemoryAllocation != (FDeviceMemoryAllocation *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0 == MemoryAllocation",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xa2d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->Track).SizeOrLine < 0) {
    operator_delete__((this->Track).Data);
  }
  (this->Track).Data = (void *)0x0;
  (this->Track).SizeOrLine = 0;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->SubresourceAllocatorCS);
  pFVar5 = (this->InternalData).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->FreeList).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
    return;
  }
  return;
}

// AllocateInternalData @ 145b0ed30

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

int __thiscall
VulkanRHI::FVulkanSubresourceAllocator::AllocateInternalData(FVulkanSubresourceAllocator *this)

{
  int *piVar1;
  TArray<VulkanRHI::FVulkanAllocationInternal,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  
  uVar6 = this->InternalFreeList;
  pTVar2 = &this->InternalData;
  piVar1 = &(this->InternalData).ArrayNum;
  if ((int)uVar6 < 0) {
    uVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40,8,1,&pTVar2->AllocatorInstance,piVar1,&(this->InternalData).ArrayMax);
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    lVar8 = (longlong)(int)uVar6 * 0x40;
    *(undefined8 *)(pFVar3 + lVar8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x10) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x10 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x20) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x30) = 0;
    *(undefined8 *)(pFVar3 + lVar8 + 0x30 + 8) = 0;
    uVar9 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + lVar8 + 0x24) = 0xffffffff;
  }
  else {
    uVar9 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    this->InternalFreeList =
         *(int *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x40 + 0x24);
    uVar9 = 0;
    if ((int)uVar6 < *piVar1) {
      uVar9 = ~uVar6 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
    }
    *(undefined4 *)((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x40 + 0x24) =
         0xffffffff;
  }
  return uVar6;
}

// CanDefrag @ 145b0fae0

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

bool __thiscall VulkanRHI::FVulkanSubresourceAllocator::CanDefrag(FVulkanSubresourceAllocator *this)

{
  int iVar1;
  char cVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar1 = (this->InternalData).ArrayNum;
  pFVar3 = (this->InternalData).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->InternalData).ArrayNum != iVar1) {
      `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if ((*(int *)pFVar3 == 1) &&
       ((*(undefined8 **)(pFVar3 + 0x18) == (undefined8 *)0x0 ||
        (cVar2 = (**(code **)**(undefined8 **)(pFVar3 + 0x18))(), cVar2 == '\0')))) {
      return false;
    }
    pFVar3 = pFVar3 + 0x40;
  }
  return true;
}

// DefragTick @ 145b13510

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

int __thiscall
VulkanRHI::FVulkanSubresourceAllocator::DefragTick
          (FVulkanSubresourceAllocator *this,FVulkanDevice *param_1,FVulkanContextArray *param_2,
          FVulkanResourceHeap *param_3,uint param_4)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement FVar1;
  uint uVar2;
  FVulkanDevice *pFVar3;
  FVulkanSubresourceAllocator *this_00;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  FVulkanResourceHeap *pFVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  uchar uVar15;
  ulonglong uVar16;
  char *pcVar17;
  undefined1 local_a7;
  undefined1 local_a6 [2];
  int local_a4;
  FVulkanAllocation local_a0;
  FScriptContainerElement *local_80;
  FScriptContainerElement *local_78;
  uint local_70;
  uint local_6c;
  FVulkanEvictable *local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 uStack_50;
  
  lpCriticalSection = &this->SubresourceAllocatorCS;
  this->LastDefragFrame = GFrameNumberRenderThread;
  local_a4 = 0;
  this->bLocked = true;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  local_6c = (this->InternalData).ArrayNum;
  uVar8 = (ulonglong)(int)local_6c;
  pFVar13 = (this->InternalData).AllocatorInstance.Data;
  pFVar14 = pFVar13 + uVar8 * 0x40;
  local_80 = pFVar14;
LAB_145b135a3:
  local_78 = pFVar13;
  if ((this->InternalData).ArrayNum != (int)uVar8) {
    local_a7 = 0;
    `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::__l2::
    <lambda_1>::operator()(&local_a7);
  }
  if (pFVar13 == pFVar14) {
LAB_145b13a11:
    this->bLocked = false;
LAB_145b13a15:
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return local_a4;
  }
  if (*(int *)pFVar13 != 1) goto LAB_145b13a05;
  local_68 = *(FVulkanEvictable **)(pFVar13 + 0x18);
  if (pFVar13[5] == (FScriptContainerElement)0x5) {
    local_60 = (**(code **)((longlong)*local_68 + 0x20))();
    if (local_60 == 0) goto LAB_145b139f9;
    FVar1 = pFVar13[5];
    iVar6 = (param_3->PageSizeBuckets).ArrayNum;
    uVar2 = *(uint *)(pFVar13 + 8);
    local_70 = *(uint *)(pFVar13 + 0x20);
    local_a0.VulkanHandle = 0;
    local_a0.HandleId = 0;
    local_a0.Size = 0;
    local_a0.Offset = 0;
    local_a0.AllocationIndex = 0;
    local_a0.AllocatorIndex = 0;
    local_a0.MetaType = EVulkanAllocationMetaUnknown;
    local_a0._27_1_ = 0;
    pFVar3 = param_3->Owner->Device;
    pFVar12 = param_3;
    while( true ) {
      if ((param_3->PageSizeBuckets).ArrayNum != iVar6) {
        local_a6[0] = 0;
        `TCheckedPointerIterator<VulkanRHI::FVulkanPageSizeBucket,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_a6);
      }
      if (pFVar12 ==
          (FVulkanResourceHeap *)((param_3->PageSizeBuckets).AllocatorInstance.InlineData + iVar6))
      {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x633,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar10 = 0xffffffff;
        goto LAB_145b1370a;
      }
      if ((((pFVar12->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad[0xc] & 1) != 0) &&
         ((ulonglong)uVar2 <=
          *(ulonglong *)(pFVar12->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad)) break;
      pFVar12 = (FVulkanResourceHeap *)((pFVar12->PageSizeBuckets).AllocatorInstance.InlineData + 1)
      ;
    }
    local_58 = *(ulonglong *)(pFVar12->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad;
    uStack_50 = *(undefined8 *)((pFVar12->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad + 8);
    if (((param_3->PageSizeBuckets).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    uVar10 = (uint)((longlong)pFVar12 - (longlong)param_3 >> 4);
LAB_145b1370a:
    if (((pFVar3->DeviceMemoryManager).bHasUnifiedMemory == false) &&
       (FVar1 == (FScriptContainerElement)0x6)) {
      uVar15 = '\x02';
    }
    else {
      uVar15 = '\0';
    }
    if ((local_58 < uVar2) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Size <= MemoryBucket.AllocationMax",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x780,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    iVar6 = param_3->ActivePages[uVar10].ArrayNum;
    uVar11 = 0;
    if (0 < iVar6) {
      lVar9 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar11 < iVar6) {
          uVar7 = ~uVar11 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        this_00 = *(FVulkanSubresourceAllocator **)
                   (param_3->ActivePages[uVar10].AllocatorInstance.Data + lVar9);
        if ((this_00->bLocked == false) && (this_00->SubresourceAllocatorFlags == uVar15)) {
          pcVar17 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
          ;
          uVar16 = (ulonglong)(byte)FVar1;
          uVar8 = (ulonglong)local_70;
          bVar5 = TryAllocate2(this_00,&local_a0,local_68,uVar2,local_70,
                               (EVulkanAllocationMetaType)FVar1,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                               ,0x78a);
          if (bVar5) goto LAB_145b13891;
        }
        iVar6 = param_3->ActivePages[uVar10].ArrayNum;
        uVar11 = uVar11 + 1;
        lVar9 = lVar9 + 8;
        if (iVar6 <= (int)uVar11) break;
      } while( true );
    }
    if ((local_a0.Type != 0) && (local_a0.bHasOwnership != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Allocation.HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x106a,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    this->bLocked = false;
    if ((((local_a0._27_1_ & 0x3f) != 0) && ((local_a0._27_1_ & 0x40) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAllocation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xebe,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    goto LAB_145b13a15;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x1072,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
LAB_145b139f9:
  param_4 = param_4 - 1;
  if ((int)param_4 < 1) goto LAB_145b13a11;
LAB_145b13a05:
  uVar8 = (ulonglong)local_6c;
  pFVar13 = pFVar13 + 0x40;
  goto LAB_145b135a3;
LAB_145b13891:
  IncMetaStats((EVulkanAllocationMetaType)FVar1,local_a0.Size);
  if (((local_a0.Type == 0) || (local_a0.bHasOwnership == 0)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Allocation.HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x1054,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar13 = local_78;
  if ((GVulkanLogDefrag != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
    pcVar17 = (char *)(local_a0._16_8_ & 0xffffffff);
    uVar16 = (ulonglong)(uint)local_a0._24_4_ & 0xffffffff0000ffff;
    uVar8 = (ulonglong)*(uint *)(local_78 + 0x10);
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  (**(code **)(*(longlong *)(local_60 + 0x138) + 0x18))
            ((longlong *)(local_60 + 0x138),param_1,param_2,&local_a0,uVar8,uVar16,pcVar17);
  local_a4 = local_a4 + 1;
  FMemoryManager::FreeVulkanAllocation(&param_1->MemoryManager,&local_a0,EVulkanFreeFlag_None);
  if ((*(int *)pFVar13 == 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Alloc.State != FVulkanAllocationInternal::EALLOCATED",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x1065,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  pFVar14 = local_80;
  if (local_a0.Type != 0) {
    if (local_a0.bHasOwnership != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Allocation.HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x1066,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
    }
    pFVar14 = local_80;
    if ((((local_a0._27_1_ & 0x3f) != 0) && ((local_a0._27_1_ & 0x40) != 0)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAllocation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xebe,L""), pFVar14 = local_80, bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
  }
  goto LAB_145b139f9;
}

// Destroy @ 145b14470

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
VulkanRHI::FVulkanSubresourceAllocator::Destroy
          (FVulkanSubresourceAllocator *this,FVulkanDevice *param_1)

{
  if (this->Buffer != (VkBuffer_T *)0x0) {
    (*VulkanDynamicAPI::vkDestroyBuffer)(param_1->Device,this->Buffer,&GAllocationCallbacks);
    this->Buffer = (VkBuffer_T *)0x0;
  }
  return;
}

// DumpFullHeap @ 145b14ae0

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
VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap(FVulkanSubresourceAllocator *this)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  FString *pFVar7;
  longlong lVar8;
  ulonglong uVar9;
  FScriptContainerElement *pFVar10;
  SDumpHeapEntry *pSVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FName local_b8;
  ForAnyElementType local_b0;
  uint local_a8;
  uint uStack_a4;
  SDumpHeapEntry local_a0;
  SDumpHeapEntry local_90;
  FString local_80;
  FString local_70 [3];
  
  iVar1 = (this->InternalData).ArrayNum;
  pFVar13 = (this->InternalData).AllocatorInstance.Data;
  pFVar10 = pFVar13 + (longlong)iVar1 * 0x40;
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  uStack_a4 = 0;
  while( true ) {
    if ((this->InternalData).ArrayNum != iVar1) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar13 == pFVar10) break;
    if (*(int *)pFVar13 != 0) {
      if (((this->InternalData).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_a0.Offset = *(uint *)(pFVar13 + 0x10);
      local_a0.Size = *(uint *)(pFVar13 + 0xc);
      local_a0.InternalIndex =
           (int)((longlong)pFVar13 - (longlong)(this->InternalData).AllocatorInstance.Data >> 6);
      local_a0.FreeListIndex = -1;
      if (((local_b0.Data <= &local_a0) &&
          (&local_a0 < (SDumpHeapEntry *)(local_b0.Data + (longlong)(int)uStack_a4 * 0x10))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_a8 == uStack_a4) {
        local_a8 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x410,&local_b0,(int *)&uStack_a4);
      }
      lVar8 = (longlong)(int)local_a8;
      local_a8 = local_a8 + 1;
      *(ulonglong *)(local_b0.Data + lVar8 * 0x10) = CONCAT44(local_a0.Size,local_a0.Offset);
      *(ulonglong *)(local_b0.Data + lVar8 * 0x10 + 8) =
           CONCAT44(local_a0.InternalIndex,local_a0.FreeListIndex);
    }
    pFVar13 = pFVar13 + 0x40;
  }
  pFVar10 = (this->FreeList).AllocatorInstance.Data;
  iVar1 = (this->FreeList).ArrayNum;
  pFVar13 = pFVar10 + (longlong)iVar1 * 8;
  while( true ) {
    if ((this->FreeList).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<VulkanRHI::FRange,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (pFVar10 == pFVar13) break;
    if (((this->FreeList).ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    local_90.Offset = *(uint *)pFVar10;
    local_90.Size = *(uint *)(pFVar10 + 4);
    local_90.FreeListIndex =
         (int)((longlong)pFVar10 - (longlong)(this->FreeList).AllocatorInstance.Data >> 3);
    local_90.InternalIndex = -1;
    if (((local_b0.Data <= &local_90) &&
        (&local_90 < (SDumpHeapEntry *)(local_b0.Data + (longlong)(int)uStack_a4 * 0x10))) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (local_a8 == uStack_a4) {
      local_a8 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x410,&local_b0,(int *)&uStack_a4);
    }
    lVar8 = (longlong)(int)local_a8;
    local_a8 = local_a8 + 1;
    pFVar10 = pFVar10 + 8;
    *(ulonglong *)(local_b0.Data + lVar8 * 0x10) = CONCAT44(local_90.Size,local_90.Offset);
    *(ulonglong *)(local_b0.Data + lVar8 * 0x10 + 8) =
         CONCAT44(local_90.InternalIndex,local_90.FreeListIndex);
  }
  AlgoImpl::
  IntroSortInternal<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,int,FIdentityFunctor,TDereferenceWrapper<VulkanRHI::_anonymous_namespace_::SDumpHeapEntry,_VulkanRHI::FVulkanSubresourceAllocator::DumpFullHeap_::__l2::<lambda_1>_>_>
            ((SDumpHeapEntry *)local_b0.Data,local_a8,local_res8[0],(<lambda_1> *)local_res20);
  uVar4 = local_a8;
  uVar9 = (ulonglong)(int)local_a8;
  pSVar11 = (SDumpHeapEntry *)(local_b0.Data + uVar9 * 0x10);
  pFVar13 = local_b0.Data + 4;
  do {
    while( true ) {
      if (local_a8 != (uint)uVar9) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<VulkanRHI::`anonymous_namespace'::SDumpHeapEntry,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_res18);
      }
      if ((SDumpHeapEntry *)(pFVar13 + -4) == pSVar11) {
        if ((SDumpHeapEntry *)local_b0.Data != (SDumpHeapEntry *)0x0) {
          FMemory::Free(local_b0.Data);
        }
        return;
      }
      if (*(int *)(pFVar13 + 4) < 0) break;
      if ((byte)LogVulkanRHI._0_1_ < 4) {
LAB_145b15032:
        uVar9 = (ulonglong)uVar4;
        pFVar13 = pFVar13 + 0x10;
      }
      else {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
        uVar9 = (ulonglong)uVar4;
        pFVar13 = pFVar13 + 0x10;
      }
    }
    if ((*(int *)(pFVar13 + 8) < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry.InternalIndex >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xfee,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    uVar2 = *(uint *)(pFVar13 + 8);
    uVar6 = 0;
    if ((int)uVar2 < (this->InternalData).ArrayNum) {
      uVar6 = ~uVar2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = (this->InternalData).AllocatorInstance.Data;
    lVar8 = (longlong)(int)uVar2 * 0x40;
    if (*(int *)(pFVar10 + lVar8) != 1) {
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      goto LAB_145b15032;
    }
    VulkanAllocationMetaTypeToString((EVulkanAllocationMetaType)pFVar10[lVar8 + 5]);
    pFVar12 = (FScriptContainerElement *)0x0;
    if ((pFVar10[lVar8 + 5] == (FScriptContainerElement)0x5) &&
       (lVar8 = (**(code **)(**(longlong **)(pFVar10 + lVar8 + 0x18) + 0x20))(), lVar8 != 0)) {
      local_b8 = *(FName *)(lVar8 + 0x18);
      pFVar7 = ::FName::ToString(&local_b8,&local_80);
      if (local_70 != pFVar7) {
        pFVar12 = (pFVar7->Data).AllocatorInstance.Data;
        (pFVar7->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (pFVar7->Data).ArrayNum = 0;
        (pFVar7->Data).ArrayMax = 0;
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
    }
    if (3 < (byte)LogVulkanRHI._0_1_) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    if (pFVar12 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar12);
    }
    uVar9 = (ulonglong)uVar4;
    pFVar13 = pFVar13 + 0x10;
  } while( true );
}

// EvictToHost @ 145b19d60

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
VulkanRHI::FVulkanSubresourceAllocator::EvictToHost
          (FVulkanSubresourceAllocator *this,FVulkanDevice *param_1,FVulkanContextArray *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  char cVar5;
  ulong64 uVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->SubresourceAllocatorCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  this->bIsEvicting = true;
  iVar1 = (this->InternalData).ArrayNum;
  pFVar7 = (this->InternalData).AllocatorInstance.Data;
  pFVar8 = pFVar7 + (longlong)iVar1 * 0x40;
  while( true ) {
    if ((this->InternalData).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(int *)pFVar7 == 1) {
      if (pFVar7[5] == (FScriptContainerElement)0x6) {
        plVar2 = *(longlong **)(pFVar7 + 0x18);
        cVar5 = (**(code **)(*plVar2 + 8))(plVar2);
        if (cVar5 != '\0') {
          (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2);
        }
      }
      else {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x1093,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
      }
    }
    pFVar7 = pFVar7 + 0x40;
  }
  uVar6 = this->MemoryAllocation->Size;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return uVar6;
}

// Flush @ 145b1a1c0

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
VulkanRHI::FVulkanSubresourceAllocator::Flush
          (FVulkanSubresourceAllocator *this,ulong64 param_1,ulong64 param_2)

{
  FDeviceMemoryAllocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  VkResult VVar4;
  ulong64 uVar5;
  VkMappedMemoryRange local_38;
  
  pFVar1 = this->MemoryAllocation;
  if (((pFVar1->bIsCoherent == 0) || (GForceCoherent != 0)) &&
     ((uVar5 = AdjustToNonCoherentAtomSize
                         (param_1,param_2,pFVar1->Size,
                          (this->Owner->Device->GpuProps).limits.nonCoherentAtomSize),
      pFVar1->bIsCoherent == 0 || (GForceCoherent != 0)))) {
    if ((pFVar1->MappedPointer == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsMapped()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x53c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar1->Size < uVar5 + param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOffset + InSize <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x53d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.memory._0_4_ = SUB84(pFVar1->Handle,0);
    local_38.memory._4_4_ = (undefined4)((ulonglong)pFVar1->Handle >> 0x20);
    local_38.size._0_4_ = (undefined4)uVar5;
    local_38.size._4_4_ = (undefined4)(uVar5 >> 0x20);
    local_38.offset = param_1;
    VVar4 = (*VulkanDynamicAPI::vkFlushMappedMemoryRanges)(pFVar1->DeviceHandle,1,&local_38);
    if (VVar4 != VK_SUCCESS) {
      VerifyVulkanResult(VVar4,"VulkanRHI::vkFlushMappedMemoryRanges(DeviceHandle, 1, &Range)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x543);
    }
  }
  return;
}

// Free @ 145b1b360

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
VulkanRHI::FVulkanSubresourceAllocator::Free
          (FVulkanSubresourceAllocator *this,FVulkanAllocation *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FLowLevelMemTracker *this_00;
  FScriptContainerElement *pFVar6;
  FRange local_res8;
  FLLMPauseScope local_38;
  
  if (param_1->Type != this->Type) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocation.Type == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x973,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((uint)param_1->AllocatorIndex != this->AllocatorIndex) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocation.AllocatorIndex == GetAllocatorIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x974,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lpCriticalSection = &this->SubresourceAllocatorCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    this->FreeCalls = this->FreeCalls + 1;
    uVar1 = param_1->AllocationIndex;
    uVar5 = 0;
    if ((int)uVar1 < (this->InternalData).ArrayNum) {
      uVar5 = ~uVar1 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar6 = (this->InternalData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40;
    iVar2 = *(int *)pFVar6;
    if ((iVar2 != 1) && (1 < iVar2 - 3U)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Data.State == FVulkanAllocationInternal::EALLOCATED || Data.State == FVulkanAllocationInternal::EFREEPENDING || Data.State == FVulkanAllocationInternal::EFREEDISCARDED"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x97e,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar1 = *(uint *)(pFVar6 + 0x10);
    uVar5 = *(uint *)(pFVar6 + 0xc);
    if (iVar2 == 4) {
      *(int *)pFVar6 = 2;
      FreeInternalData(this,param_1->AllocationIndex);
      param_1->AllocationIndex = 0xffffffff;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
    else {
      this->MemoryUsed[param_1->MetaType] = this->MemoryUsed[param_1->MetaType] - uVar5;
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,*(void **)(pFVar6 + 0x38),None,true);
      FLLMPauseScope::FLLMPauseScope
                (&local_38,VideoRecording|ProgramSize,false,(ulonglong)param_1->Size,Default,None);
      FLLMPauseScope::~FLLMPauseScope(&local_38);
      if (*(int *)(pFVar6 + 0x30) < 0) {
        operator_delete__(*(void **)(pFVar6 + 0x28));
      }
      *(undefined8 *)(pFVar6 + 0x28) = 0;
      *(int *)(pFVar6 + 0x30) = 0;
      *(int *)pFVar6 = 2;
      FreeInternalData(this,param_1->AllocationIndex);
      param_1->AllocationIndex = 0xffffffff;
      local_res8.Offset = uVar1;
      local_res8.Size = uVar5;
      if (this->MaxSize < uVar1) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewFree.Offset <= GetMaxSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x994,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (this->MaxSize < local_res8.Size + local_res8.Offset) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewFree.Offset + NewFree.Size <= GetMaxSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x995,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FRange::Add(&this->FreeList,&local_res8);
      this->NumSubAllocations = this->NumSubAllocations - 1;
      this->UsedSize = this->UsedSize - (ulonglong)uVar5;
      if (this->UsedSize < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("UsedSize >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x999,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      bVar4 = JoinFreeBlocks(this);
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if (bVar4) {
        FMemoryManager::ReleaseSubresourceAllocator(this->Owner,this);
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// FreeInternalData @ 145b1bac0

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
VulkanRHI::FVulkanSubresourceAllocator::FreeInternalData
          (FVulkanSubresourceAllocator *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar5 = (uint)~param_1 >> 0x1f;
  uVar4 = 0;
  if (param_1 < (this->InternalData).ArrayNum) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lVar6 = (longlong)param_1 * 0x40;
  if (*(int *)((this->InternalData).AllocatorInstance.Data + lVar6) != 0) {
    uVar4 = 0;
    if (param_1 < (this->InternalData).ArrayNum) {
      uVar4 = uVar5;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (*(int *)((this->InternalData).AllocatorInstance.Data + lVar6) != 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InternalData[Index].State == FVulkanAllocationInternal::EUNUSED || InternalData[Index].State ==FVulkanAllocationInternal::EFREED"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xf50,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  uVar4 = 0;
  if (param_1 < (this->InternalData).ArrayNum) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(int *)((this->InternalData).AllocatorInstance.Data + lVar6 + 0x24) != -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InternalData[Index].NextFree == -1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xf51,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = this->InternalFreeList;
  uVar4 = 0;
  if (param_1 < (this->InternalData).ArrayNum) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(int *)((this->InternalData).AllocatorInstance.Data + lVar6 + 0x24) = iVar1;
  this->InternalFreeList = param_1;
  uVar4 = 0;
  if (param_1 < (this->InternalData).ArrayNum) {
    uVar4 = uVar5;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)((this->InternalData).AllocatorInstance.Data + lVar6) = 0;
  return;
}

// GetMemoryUsed @ 145b1e960

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

TArrayView<unsigned_int,int> * __thiscall
VulkanRHI::FVulkanSubresourceAllocator::GetMemoryUsed
          (FVulkanSubresourceAllocator *this,TArrayView<unsigned_int,int> *__return_storage_ptr__)

{
  __return_storage_ptr__->DataPtr = this->MemoryUsed;
  __return_storage_ptr__->ArrayNum = 10;
  return __return_storage_ptr__;
}

// GetNumSubAllocations @ 145b1e980

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

uint __thiscall
VulkanRHI::FVulkanSubresourceAllocator::GetNumSubAllocations(FVulkanSubresourceAllocator *this)

{
  return this->NumSubAllocations;
}

// Invalidate @ 145b26b60

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
VulkanRHI::FVulkanSubresourceAllocator::Invalidate
          (FVulkanSubresourceAllocator *this,ulong64 param_1,ulong64 param_2)

{
  FDeviceMemoryAllocation *pFVar1;
  code *pcVar2;
  bool bVar3;
  VkResult VVar4;
  ulong64 uVar5;
  VkMappedMemoryRange local_38;
  
  pFVar1 = this->MemoryAllocation;
  if (((pFVar1->bIsCoherent == 0) || (GForceCoherent != 0)) &&
     ((uVar5 = AdjustToNonCoherentAtomSize
                         (param_1,param_2,pFVar1->Size,
                          (this->Owner->Device->GpuProps).limits.nonCoherentAtomSize),
      pFVar1->bIsCoherent == 0 || (GForceCoherent != 0)))) {
    if ((pFVar1->MappedPointer == (void *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsMapped()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x54b,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((pFVar1->Size < uVar5 + param_1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOffset + InSize <= Size",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x54c,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_38.sType = VK_STRUCTURE_TYPE_MAPPED_MEMORY_RANGE;
    local_38._4_8_ = 0;
    local_38.pNext._4_4_ = 0;
    local_38.memory._0_4_ = SUB84(pFVar1->Handle,0);
    local_38.memory._4_4_ = (undefined4)((ulonglong)pFVar1->Handle >> 0x20);
    local_38.size._0_4_ = (undefined4)uVar5;
    local_38.size._4_4_ = (undefined4)(uVar5 >> 0x20);
    local_38.offset = param_1;
    VVar4 = (*VulkanDynamicAPI::vkInvalidateMappedMemoryRanges)(pFVar1->DeviceHandle,1,&local_38);
    if (VVar4 != VK_SUCCESS) {
      VerifyVulkanResult(VVar4,"VulkanRHI::vkInvalidateMappedMemoryRanges(DeviceHandle, 1, &Range)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x552);
    }
  }
  return;
}

// JoinFreeBlocks @ 145b271d0

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
VulkanRHI::FVulkanSubresourceAllocator::JoinFreeBlocks(FVulkanSubresourceAllocator *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  lpCriticalSection = &this->SubresourceAllocatorCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (((this->FreeList).ArrayNum != 1) || (this->NumSubAllocations != 0)) {
    bVar2 = false;
    goto LAB_145b273af;
  }
  if (this->UsedSize != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("UsedSize == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xeaf,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if ((this->FreeList).ArrayNum < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  if (*(int *)(this->FreeList).AllocatorInstance.Data == 0) {
    if ((this->FreeList).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(uint *)((this->FreeList).AllocatorInstance.Data + 4) != this->MaxSize) goto LAB_145b272d8;
  }
  else {
LAB_145b272d8:
    if ((this->FreeList).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if ((this->FreeList).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FreeList[0].Offset == 0 && FreeList[0].Size == MaxSize",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xeb0,
                       L"Resource Suballocation leak, should have %d free, only have %d; missing %d bytes"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  bVar2 = true;
LAB_145b273af:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar2;
}

// SetFreePending @ 145b322d0

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
VulkanRHI::FVulkanSubresourceAllocator::SetFreePending
          (FVulkanSubresourceAllocator *this,FVulkanAllocation *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (param_1->Type != this->Type) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocation.GetType() == Type",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x966,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((uint)param_1->AllocatorIndex != this->AllocatorIndex) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Allocation.AllocatorIndex == GetAllocatorIndex()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x967,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  lpCriticalSection = &this->SubresourceAllocatorCS;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    uVar1 = param_1->AllocationIndex;
    uVar4 = 0;
    if ((int)uVar1 < (this->InternalData).ArrayNum) {
      uVar4 = ~uVar1 >> 0x1f;
    }
    if (uVar4 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *(undefined4 *)((this->InternalData).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x40) = 3;
                    /* WARNING: Could not recover jumptable at 0x000145b323d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// TryAllocate2 @ 145b36790

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
VulkanRHI::FVulkanSubresourceAllocator::TryAllocate2
          (FVulkanSubresourceAllocator *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          uint param_3,uint param_4,EVulkanAllocationMetaType param_5,char *param_6,uint param_7)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  EVulkanAllocationType EVar1;
  int iVar2;
  VkBuffer_T *pVVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  bool bVar6;
  undefined1 uVar7;
  EVulkanAllocationType EVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulong64 uVar12;
  FLowLevelMemTracker *this_00;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FLLMPauseScope local_58 [2];
  
  lpCriticalSection = &this->SubresourceAllocatorCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->bIsEvicting == false) && (this->bLocked == false)) {
    uVar11 = this->Alignment;
    if (this->Alignment < param_4) {
      uVar11 = param_4;
    }
    uVar13 = 0;
    if (0 < (this->FreeList).ArrayNum) {
      lVar17 = 0;
      do {
        uVar15 = 0;
        if ((int)uVar13 < (this->FreeList).ArrayNum) {
          uVar15 = ~uVar13 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          uVar7 = (*pcVar4)();
          return (bool)uVar7;
        }
        pFVar14 = (this->FreeList).AllocatorInstance.Data;
        iVar2 = *(int *)(pFVar14 + lVar17);
        uVar15 = (uVar11 - 1) + iVar2 & -uVar11;
        uVar16 = (uVar15 - iVar2) + param_3;
        if (uVar16 <= *(uint *)(pFVar14 + lVar17 + 4)) {
          uVar9 = 0;
          if ((int)uVar13 < (this->FreeList).ArrayNum) {
            uVar9 = ~uVar13 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar14 = (this->FreeList).AllocatorInstance.Data;
          lVar17 = (longlong)(int)uVar13;
          uVar9 = *(uint *)(pFVar14 + lVar17 * 8 + 4);
          if (uVar16 < uVar9) {
            *(uint *)(pFVar14 + lVar17 * 8) = *(int *)(pFVar14 + lVar17 * 8) + uVar16;
            *(uint *)(pFVar14 + lVar17 * 8 + 4) = uVar9 - uVar16;
          }
          else {
            TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::RemoveAt
                      (&this->FreeList,uVar13,No);
          }
          this->UsedSize = this->UsedSize + (ulonglong)uVar16;
          uVar10 = AllocateInternalData(this);
          uVar13 = this->BufferId;
          uVar9 = this->AllocatorIndex;
          EVar1 = this->Type;
          pVVar3 = this->Buffer;
          if (((param_1->Type != 0 & (byte)param_1->field_0x1b >> 6) != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("!HasAllocation()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                 ,0xed2,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          EVar8 = param_1->field_0x1b | 0x40;
          param_1->Offset = uVar15;
          param_1->field_0x1b = (EVar1 ^ EVar8) & 0x3f ^ EVar8;
          param_1->MetaType = param_5;
          param_1->Size = param_3;
          if ((0xfffe < uVar9) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InAllocatorIndex < (uint32)((uint16) 0xffff)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                 ,0xed8,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          param_1->VulkanHandle = (ulong64)pVVar3;
          param_1->AllocatorIndex = (ushort)uVar9;
          param_1->AllocationIndex = uVar10;
          param_1->HandleId = uVar13;
          if ((((int)GMaxRHIFeatureLevel < 2) && (uVar13 == 0)) &&
             (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_2475541483520782626>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                 ,0xede,"!UseVulkanDescriptorCache() || HandleId != 0"), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          this->MemoryUsed[param_5] = this->MemoryUsed[param_5] + uVar16;
          UIDCounter = UIDCounter + 1;
          uVar15 = ~uVar10 >> 0x1f;
          uVar13 = 0;
          if ((int)uVar10 < (this->InternalData).ArrayNum) {
            uVar13 = uVar15;
          }
          if ((uVar13 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          lVar17 = (longlong)(int)uVar10 * 0x40;
          pFVar14 = (this->InternalData).AllocatorInstance.Data + lVar17;
          if ((*(int *)pFVar14 != 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("State == EUNUSED",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                 ,0xec4,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          *(int *)pFVar14 = 1;
          pFVar14[4] = param_1->Type;
          pFVar14[5] = (FScriptContainerElement)param_1->MetaType;
          *(uint *)(pFVar14 + 8) = param_1->Size;
          *(int *)(pFVar14 + 0x10) = iVar2;
          *(FVulkanEvictable **)(pFVar14 + 0x18) = param_2;
          *(uint *)(pFVar14 + 0x20) = uVar11;
          *(uint *)(pFVar14 + 0xc) = uVar16;
          uVar11 = 0;
          if ((int)uVar10 < (this->InternalData).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          pFVar14 = (this->InternalData).AllocatorInstance.Data;
          if (0 < GVulkanMemoryBackTrace) {
            param_6 = *(char **)(pFVar14 + lVar17 + 0x28);
            if (((ulong64 *)param_6 == (ulong64 *)0x0) || (-1 < *(int *)(pFVar14 + lVar17 + 0x30)))
            {
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (longlong)GVulkanMemoryBackTrace;
              uVar12 = SUB168(ZEXT816(8) * auVar5,0);
              if (SUB168(ZEXT816(8) * auVar5,8) != 0) {
                uVar12 = 0xffffffffffffffff;
              }
              param_6 = operator_new__(uVar12);
            }
            uVar11 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                               ((ulong64 *)param_6,GVulkanMemoryBackTrace,(void *)0x0);
            param_7 = -uVar11;
          }
          *(char **)(pFVar14 + lVar17 + 0x28) = param_6;
          *(uint *)(pFVar14 + lVar17 + 0x30) = param_7;
          this->AllocCalls = this->AllocCalls + 1;
          this->NumSubAllocations = this->NumSubAllocations + 1;
          uVar11 = 0;
          if ((int)uVar10 < (this->InternalData).ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          GVulkanLLMAllocationID = GVulkanLLMAllocationID + 1;
          *(ulong64 *)((this->InternalData).AllocatorInstance.Data + lVar17 + 0x38) =
               GVulkanLLMAllocationID * 0x10000 | 0xdead;
          this_00 = FLowLevelMemTracker::TrackerInstance;
          if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
            this_00 = FLowLevelMemTracker::Construct();
          }
          uVar11 = 0;
          if ((int)uVar10 < (this->InternalData).ArrayNum) {
            uVar11 = uVar15;
          }
          uVar13 = param_1->Size;
          if ((uVar11 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            uVar7 = (*pcVar4)();
            return (bool)uVar7;
          }
          FLowLevelMemTracker::OnLowLevelAlloc
                    (this_00,Default,
                     *(void **)((this->InternalData).AllocatorInstance.Data + lVar17 + 0x38),
                     (ulonglong)uVar13,PlatformTagStart,None,true);
          FLLMPauseScope::FLLMPauseScope
                    (local_58,VideoRecording|ProgramSize,false,-(ulonglong)param_1->Size,Default,
                     None);
          FLLMPauseScope::~FLLMPauseScope(local_58);
          this->bIsDefragging = false;
          bVar6 = true;
          goto LAB_145b368ce;
        }
        uVar13 = uVar13 + 1;
        lVar17 = lVar17 + 8;
      } while ((int)uVar13 < (this->FreeList).ArrayNum);
    }
  }
  bVar6 = false;
LAB_145b368ce:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar6;
}

