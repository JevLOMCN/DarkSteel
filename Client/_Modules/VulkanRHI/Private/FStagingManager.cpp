// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 9

// FStagingManager @ 145b003d0

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

FStagingManager * __thiscall VulkanRHI::FStagingManager::FStagingManager(FStagingManager *this)

{
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)this,4000);
  (this->UsedStagingBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedStagingBuffers).ArrayNum = 0;
  (this->UsedStagingBuffers).ArrayMax = 0;
  *(undefined8 *)&this->PendingFreeStagingBuffers = 0;
  *(undefined8 *)&(this->PendingFreeStagingBuffers).field_0x8 = 0;
  *(undefined8 *)&(this->PendingFreeStagingBuffers).field_0x20 = 0;
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x28 = 0;
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x2c = 0x80;
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x34 = 0;
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->PendingFreeStagingBuffers).field_0x40 = 0;
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x48 = 0;
  (this->FreeStagingBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeStagingBuffers).ArrayNum = 0;
  (this->FreeStagingBuffers).ArrayMax = 0;
  this->PeakUsedMemory = 0;
  this->UsedMemory = 0;
  this->Device = (FVulkanDevice *)0x0;
  return this;
}

// ~FStagingManager @ 145b05130

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

void __thiscall VulkanRHI::FStagingManager::~FStagingManager(FStagingManager *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  pFVar1 = (this->FreeStagingBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->PendingFreeStagingBuffers).field_0x48 = 0;
  pvVar2 = *(void **)&(this->PendingFreeStagingBuffers).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->PendingFreeStagingBuffers);
  pFVar1 = (this->UsedStagingBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b0518a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

// AcquireBuffer @ 145b095f0

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

FStagingBuffer * __thiscall
VulkanRHI::FStagingManager::AcquireBuffer
          (FStagingManager *this,uint param_1,uint param_2,VkMemoryPropertyFlagBits param_3)

{
  int *piVar1;
  int iVar2;
  FVulkanDevice *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  bool bVar8;
  int iVar9;
  FStagingBuffer *pFVar10;
  FStagingBuffer *pFVar11;
  VkBuffer_T *pVVar12;
  ulonglong uVar13;
  ulong64 uVar14;
  char *pcVar15;
  uint uVar16;
  uint uVar17;
  FStagingBuffer *pFVar18;
  uint uVar19;
  FMemScope local_res8;
  FLLMScope local_res18 [2];
  uint local_res20;
  FStagingBuffer *local_48;
  FStagingBuffer *local_40;
  
  uVar14 = (ulong64)param_1;
  FLLMScope::FLLMScope
            (local_res18,VideoRecording|GenericPlatformMallocCrash,false,None,Default,true);
  FMemScope::FMemScope(&local_res8,VideoRecording|GenericPlatformMallocCrash,true);
  if (param_3 == VK_MEMORY_PROPERTY_HOST_CACHED_BIT) {
    uVar17 = (uint)(this->Device->GpuProps).limits.nonCoherentAtomSize;
    uVar14 = (ulong64)((int)(((uVar14 - 1) + (ulonglong)uVar17) / (ulonglong)uVar17) * uVar17);
  }
  uVar17 = param_2 | 3;
  if ((param_2 & 3) == 0) {
    uVar17 = param_2;
  }
  uVar19 = uVar17 | 0x20000;
  if (((this->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x1000000000) == 0) {
    uVar19 = uVar17;
  }
  local_res20 = uVar19;
  if (this == (FStagingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar10 = (FStagingBuffer *)0x0;
  pFVar11 = pFVar10;
  pFVar18 = pFVar10;
  if (0 < (this->FreeStagingBuffers).ArrayNum) {
    do {
      uVar16 = (uint)pFVar11;
      uVar19 = ~uVar16 >> 0x1f;
      uVar17 = 0;
      if ((int)uVar16 < (this->FreeStagingBuffers).ArrayNum) {
        uVar17 = uVar19;
      }
      if ((uVar17 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar5 = (code *)swi(3);
        pFVar10 = (FStagingBuffer *)(*pcVar5)();
        return pFVar10;
      }
      pFVar11 = *(FStagingBuffer **)
                 ((longlong)&pFVar18->_padding_ +
                 (longlong)(this->FreeStagingBuffers).AllocatorInstance.Data);
      if ((pFVar11->BufferSize == (uint)uVar14) && (pFVar11->MemoryReadFlags == param_3)) {
        uVar17 = 0;
        if ((int)uVar16 < (this->FreeStagingBuffers).ArrayNum) {
          uVar17 = uVar19;
        }
        local_40 = pFVar11;
        if ((uVar17 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FStagingBuffer *)(*pcVar5)();
          return pFVar10;
        }
        iVar2 = (this->FreeStagingBuffers).ArrayNum;
        pFVar4 = (this->FreeStagingBuffers).AllocatorInstance.Data;
        iVar9 = ~uVar16 + iVar2;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar16 * 0x10,pFVar4 + (longlong)(iVar2 - iVar9) * 0x10,
                  (longlong)iVar9 << 4);
        }
        piVar1 = &(this->FreeStagingBuffers).ArrayNum;
        *piVar1 = *piVar1 + -1;
        pFVar4 = (this->UsedStagingBuffers).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)&local_40) &&
            ((FScriptContainerElement *)&local_40 <
             pFVar4 + (longlong)(this->UsedStagingBuffers).ArrayMax * 8)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FStagingBuffer *)(*pcVar5)();
          return pFVar10;
        }
        iVar9 = (this->UsedStagingBuffers).ArrayNum;
        piVar1 = &(this->UsedStagingBuffers).ArrayMax;
        if (iVar9 == *piVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&(this->UsedStagingBuffers).AllocatorInstance,piVar1);
        }
        pFVar10 = local_40;
        (this->UsedStagingBuffers).ArrayNum = iVar9 + 1;
        *(FStagingBuffer **)
         ((this->UsedStagingBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8) = local_40;
        if (GVulkanMemoryBackTrace < 1) {
          iVar9 = 0x1108;
          pcVar15 = 
          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
          ;
        }
        else {
          pcVar15 = (local_40->Track).Data;
          if (((ulong64 *)pcVar15 == (ulong64 *)0x0) || (-1 < (local_40->Track).SizeOrLine)) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (longlong)GVulkanMemoryBackTrace;
            uVar14 = SUB168(ZEXT816(8) * auVar6,0);
            if (SUB168(ZEXT816(8) * auVar6,8) != 0) {
              uVar14 = 0xffffffffffffffff;
            }
            pcVar15 = operator_new__(uVar14);
          }
          uVar17 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                             ((ulong64 *)pcVar15,GVulkanMemoryBackTrace,(void *)0x0);
          iVar9 = -uVar17;
        }
        (pFVar10->Track).Data = pcVar15;
        (pFVar10->Track).SizeOrLine = iVar9;
        if ((local_40->Buffer == (VkBuffer_T *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer->GetHandle()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                               ,0x1109,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FStagingBuffer *)(*pcVar5)();
          return pFVar10;
        }
        pFVar10 = local_40;
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
        goto LAB_145b09b87;
      }
      pFVar11 = (FStagingBuffer *)(ulonglong)(uVar16 + 1);
      pFVar18 = (FStagingBuffer *)&pFVar18->Track;
      uVar19 = local_res20;
    } while ((int)(uVar16 + 1) < (this->FreeStagingBuffers).ArrayNum);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  pFVar11 = ::operator_new(0x58);
  if (pFVar11 != (FStagingBuffer *)0x0) {
    pFVar3 = this->Device;
    pFVar11->_padding_ = (longlong)&___7FStagingBuffer_VulkanRHI__6B_;
    pFVar11->Device = pFVar3;
    *(undefined4 *)&pFVar11->_padding_ = 0;
    (pFVar11->Track).Data = (void *)0x0;
    (pFVar11->Track).SizeOrLine = 0;
    (pFVar11->Allocation).VulkanHandle = 0;
    (pFVar11->Allocation).HandleId = 0;
    (pFVar11->Allocation).Size = 0;
    (pFVar11->Allocation).Offset = 0;
    (pFVar11->Allocation).AllocationIndex = 0;
    (pFVar11->Allocation).AllocatorIndex = 0;
    (pFVar11->Allocation).MetaType = EVulkanAllocationMetaUnknown;
    (pFVar11->Allocation).field_0x1b = 0;
    pFVar11->Buffer = (VkBuffer_T *)0x0;
    pFVar11->BufferSize = 0;
    pFVar10 = pFVar11;
  }
  pFVar10->MemoryReadFlags = param_3;
  pFVar10->BufferSize = (uint)uVar14;
  local_48 = pFVar10;
  pVVar12 = FVulkanDevice::CreateBuffer(this->Device,uVar14,uVar19,0);
  uVar17 = 0x10;
  local_48->Buffer = pVVar12;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    bIsAmd = (this->Device->GpuProps).vendorID == 0x1002;
    _Init_thread_footer(&::_TSS0);
  }
  if ((param_3 == VK_MEMORY_PROPERTY_HOST_CACHED_BIT) || (bIsAmd != false)) {
    uVar17 = (uint)(this->Device->GpuProps).limits.nonCoherentAtomSize;
    uVar17 = (int)(((ulonglong)uVar17 + 0xf) / (ulonglong)uVar17) * uVar17;
  }
  FMemoryManager::AllocateBufferMemory
            (&this->Device->MemoryManager,&local_48->Allocation,local_48->Buffer,
             (param_3 == VK_MEMORY_PROPERTY_HOST_CACHED_BIT) + (AutoBind|HostVisible),
             L"StagingBuffer",uVar17);
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar4 = (this->UsedStagingBuffers).AllocatorInstance.Data;
  if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       pFVar4 + (longlong)(this->UsedStagingBuffers).ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar5 = (code *)swi(3);
    pFVar10 = (FStagingBuffer *)(*pcVar5)();
    return pFVar10;
  }
  iVar9 = (this->UsedStagingBuffers).ArrayNum;
  piVar1 = &(this->UsedStagingBuffers).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->UsedStagingBuffers).AllocatorInstance,piVar1);
  }
  (this->UsedStagingBuffers).ArrayNum = iVar9 + 1;
  *(FStagingBuffer **)((this->UsedStagingBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8) =
       local_48;
  this->UsedMemory = this->UsedMemory + (ulonglong)local_48->BufferSize;
  uVar13 = this->PeakUsedMemory;
  if (this->PeakUsedMemory < this->UsedMemory) {
    uVar13 = this->UsedMemory;
  }
  this->PeakUsedMemory = uVar13;
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  pFVar10 = local_48;
  if (GVulkanMemoryBackTrace < 1) {
    iVar9 = 0x1128;
    pcVar15 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp";
  }
  else {
    pcVar15 = (local_48->Track).Data;
    if (((ulong64 *)pcVar15 == (ulong64 *)0x0) || (-1 < (local_48->Track).SizeOrLine)) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (longlong)GVulkanMemoryBackTrace;
      uVar14 = SUB168(ZEXT816(8) * auVar7,0);
      if (SUB168(ZEXT816(8) * auVar7,8) != 0) {
        uVar14 = 0xffffffffffffffff;
      }
      pcVar15 = operator_new__(uVar14);
    }
    uVar17 = FWindowsPlatformStackWalk::CaptureStackBackTrace
                       ((ulong64 *)pcVar15,GVulkanMemoryBackTrace,(void *)0x0);
    iVar9 = -uVar17;
  }
  (pFVar10->Track).Data = pcVar15;
  (pFVar10->Track).SizeOrLine = iVar9;
  pFVar10 = local_48;
LAB_145b09b87:
  FMemScope::~FMemScope(&local_res8);
  FLLMScope::~FLLMScope(local_res18);
  return pFVar10;
}

// Deinit @ 145b13d50

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

void __thiscall VulkanRHI::FStagingManager::Deinit(FStagingManager *this)

{
  if (this != (FStagingManager *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    ProcessPendingFreeNoLock(this,true,true);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    if (((((this->UsedStagingBuffers).ArrayNum != 0) ||
         (*(int *)&(this->PendingFreeStagingBuffers).field_0x8 !=
          *(int *)&(this->PendingFreeStagingBuffers).field_0x34)) ||
        ((this->FreeStagingBuffers).ArrayNum != 0)) && (2 < (byte)LogVulkanRHI._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DumpMemory @ 145b17eb0

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

void __thiscall VulkanRHI::FStagingManager::DumpMemory(FStagingManager *this)

{
  ulonglong uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  int *piVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_9c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_90;
  undefined8 uStack_70;
  undefined4 local_4c;
  
  if ((3 < (byte)LogVulkanRHI._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI),
     3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  piVar10 = &(this->UsedStagingBuffers).ArrayNum;
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar8 = 0;
  if (0 < *piVar10) {
    do {
      uVar11 = 0;
      if ((int)uVar8 < (this->UsedStagingBuffers).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < *piVar10);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar2 = *(int *)&(this->PendingFreeStagingBuffers).field_0x28;
  TStack_90.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingFreeStagingBuffers).field_0x10;
  iVar13 = 0;
  iVar15 = 0;
  uVar8 = 1;
  iVar6 = 0;
  if (iVar2 != 0) {
    puVar16 = *(uint **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar16 == (uint *)0x0) {
      puVar16 = (uint *)TStack_90.Array;
    }
    uVar11 = *puVar16;
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar13;
      iVar15 = iVar15 + 0x20;
      iVar13 = iVar13 + 1;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_145b18092;
      uVar11 = puVar16[lVar7 + 1];
    }
    uVar8 = -uVar11 & uVar11;
    uVar1 = (ulonglong)uVar8 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    iVar6 = iVar15 + -1 + (int)lVar7;
    if (iVar2 < iVar6) {
LAB_145b18092:
      iVar6 = iVar2;
    }
  }
  puVar17 = &(this->PendingFreeStagingBuffers).field_0x10;
  uVar11 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  uVar18 = uVar11 & 0xffffffe0;
  TStack_90.CurrentBitIndex = iVar6;
  TStack_90.UnvisitedBitMask = 0xffffffff;
  TStack_90._padding_ = CONCAT44(uVar8,iVar13);
  iVar13 = (int)uVar11 >> 5;
  TStack_90._28_4_ = local_4c;
  TStack_90.BaseBitIndex = iVar15;
  uStack_70 = CONCAT44(uStack_9c,
                       *(int *)&(this->PendingFreeStagingBuffers).field_0x8 -
                       *(int *)&(this->PendingFreeStagingBuffers).field_0x34);
  local_res20 = uVar11;
  if ((((int)uVar11 < 0) || (iVar2 < (int)uVar11)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar8 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  uVar4 = local_res20;
  if (uVar11 != uVar8) {
    puVar14 = *(undefined1 **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar14 == (undefined1 *)0x0) {
      puVar14 = puVar17;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)(puVar14 + (longlong)iVar13 * 4);
    while (uVar11 == 0) {
      lVar7 = (longlong)iVar13;
      uVar18 = uVar18 + 0x20;
      iVar13 = iVar13 + 1;
      local_res20 = uVar8;
      uVar4 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_145b181b0;
      uVar11 = *(uint *)(puVar14 + lVar7 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res20 = (int)lVar7 + -1 + uVar18;
    uVar4 = local_res20;
    if ((int)uVar8 < (int)local_res20) {
      local_res20 = uVar8;
      uVar4 = uVar8;
    }
  }
LAB_145b181b0:
  while( true ) {
    if (*(int *)&(this->PendingFreeStagingBuffers).field_0x8 -
        *(int *)&(this->PendingFreeStagingBuffers).field_0x34 != (int)uStack_70) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if ((TStack_90.CurrentBitIndex == uVar4) &&
       (TStack_90.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar17)) break;
    lVar12 = (longlong)TStack_90.CurrentBitIndex * 0x20 +
             *(longlong *)&this->PendingFreeStagingBuffers;
    lVar9 = *(longlong *)(lVar12 + 8);
    iVar2 = *(int *)(lVar12 + 0x10);
    lVar7 = lVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (*(int *)(lVar12 + 0x10) != iVar2) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<VulkanRHI::FStagingBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (lVar9 == lVar7) break;
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      lVar9 = lVar9 + 8;
    }
    TStack_90.UnvisitedBitMask = TStack_90.UnvisitedBitMask & ~TStack_90._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_90);
  }
  if (3 < (byte)LogVulkanRHI._0_1_) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  uVar8 = 0;
  if (0 < (this->FreeStagingBuffers).ArrayNum) {
    do {
      uVar11 = 0;
      if ((int)uVar8 < (this->FreeStagingBuffers).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<4>
                  ((FStaticBasicLogRecord *)&PTR_u__6d_0x_016llx_0_1510c1850,
                   (FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (this->FreeStagingBuffers).ArrayNum);
  }
  return;
}

// GetMemoryDump @ 145b1e500

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
VulkanRHI::FStagingManager::GetMemoryDump(FStagingManager *this,FResourceHeapStats *param_1)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined4 uStack_94;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_88;
  undefined8 uStack_68;
  undefined4 local_44;
  
  uVar12 = 0;
  if (0 < (this->UsedStagingBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->UsedStagingBuffers).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar12 = uVar12 + 1;
      lVar5 = *(longlong *)((this->UsedStagingBuffers).AllocatorInstance.Data + lVar11);
      lVar11 = lVar11 + 8;
      param_1->BufferAllocations = param_1->BufferAllocations + 1;
      param_1->UsedBufferMemory = param_1->UsedBufferMemory + (ulonglong)*(uint *)(lVar5 + 0x54);
      param_1->TotalMemory = param_1->TotalMemory + (ulonglong)*(uint *)(lVar5 + 0x54);
      param_1->MemoryFlags = param_1->MemoryFlags | *(uint *)(lVar5 + 0x50) | 2;
    } while ((int)uVar12 < (this->UsedStagingBuffers).ArrayNum);
  }
  iVar4 = *(int *)&(this->PendingFreeStagingBuffers).field_0x28;
  puVar1 = &(this->PendingFreeStagingBuffers).field_0x10;
  iVar14 = 0;
  iVar16 = 0;
  uVar12 = 1;
  iVar9 = 0;
  if (iVar4 != 0) {
    puVar17 = *(uint **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar17 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar10 = *puVar17;
    while (uVar10 == 0) {
      lVar11 = (longlong)iVar14;
      iVar16 = iVar16 + 0x20;
      iVar14 = iVar14 + 1;
      iVar9 = iVar4;
      if ((int)(iVar4 + -1 + (iVar4 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_145b1e62e;
      uVar10 = puVar17[lVar11 + 1];
    }
    uVar12 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uVar12 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar9 = (int)lVar11 + -1 + iVar16;
    if (iVar4 < iVar9) {
      iVar9 = iVar4;
    }
  }
LAB_145b1e62e:
  uVar10 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  uVar18 = uVar10 & 0xffffffe0;
  TStack_88._padding_ = CONCAT44(uVar12,iVar14);
  TStack_88.CurrentBitIndex = iVar9;
  TStack_88.UnvisitedBitMask = 0xffffffff;
  iVar14 = (int)uVar10 >> 5;
  TStack_88._28_4_ = local_44;
  TStack_88.BaseBitIndex = iVar16;
  uStack_68 = CONCAT44(uStack_94,
                       *(int *)&(this->PendingFreeStagingBuffers).field_0x8 -
                       *(int *)&(this->PendingFreeStagingBuffers).field_0x34);
  TStack_88.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || (iVar4 < (int)uVar10)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar12 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  if (uVar10 != uVar12) {
    puVar15 = *(undefined1 **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar15 == (undefined1 *)0x0) {
      puVar15 = puVar1;
    }
    uVar10 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar15 + (longlong)iVar14 * 4);
    while (uVar10 == 0) {
      lVar11 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar10 = uVar12;
      if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_145b1e740;
      uVar10 = *(uint *)(puVar15 + lVar11 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar10 & uVar10) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    uVar10 = (int)lVar11 + -1 + uVar18;
    if ((int)uVar12 < (int)uVar10) {
      uVar10 = uVar12;
    }
  }
LAB_145b1e740:
  while( true ) {
    if (*(int *)&(this->PendingFreeStagingBuffers).field_0x8 -
        *(int *)&(this->PendingFreeStagingBuffers).field_0x34 != (int)uStack_68) {
      local_res18[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_88.CurrentBitIndex == uVar10) &&
       (TStack_88.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) break;
    lVar11 = (longlong)TStack_88.CurrentBitIndex * 0x20 +
             *(longlong *)&this->PendingFreeStagingBuffers;
    plVar13 = *(longlong **)(lVar11 + 8);
    iVar4 = *(int *)(lVar11 + 0x10);
    plVar2 = plVar13 + iVar4;
    while( true ) {
      if (*(int *)(lVar11 + 0x10) != iVar4) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<VulkanRHI::FStagingBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res20);
      }
      if (plVar13 == plVar2) break;
      lVar5 = *plVar13;
      param_1->BufferAllocations = param_1->BufferAllocations + 1;
      param_1->UsedBufferMemory = param_1->UsedBufferMemory + (ulonglong)*(uint *)(lVar5 + 0x54);
      param_1->TotalMemory = param_1->TotalMemory + (ulonglong)*(uint *)(lVar5 + 0x54);
      param_1->MemoryFlags = param_1->MemoryFlags | *(uint *)(lVar5 + 0x50) | 2;
      plVar13 = plVar13 + 1;
    }
    TStack_88.UnvisitedBitMask = TStack_88.UnvisitedBitMask & ~TStack_88._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_88);
  }
  uVar12 = 0;
  if (0 < (this->FreeStagingBuffers).ArrayNum) {
    lVar11 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < (this->FreeStagingBuffers).ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->FreeStagingBuffers).AllocatorInstance.Data;
      uVar12 = uVar12 + 1;
      param_1->BufferAllocations = param_1->BufferAllocations + 1;
      param_1->TotalMemory =
           param_1->TotalMemory + (ulonglong)*(uint *)(*(longlong *)(pFVar6 + lVar11) + 0x54);
      pFVar6 = pFVar6 + lVar11;
      lVar11 = lVar11 + 0x10;
      param_1->MemoryFlags = param_1->MemoryFlags | *(uint *)(*(longlong *)pFVar6 + 0x50) | 2;
    } while ((int)uVar12 < (this->FreeStagingBuffers).ArrayNum);
  }
  return;
}

// ProcessPendingFree @ 145b2e4c0

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
VulkanRHI::FStagingManager::ProcessPendingFree(FStagingManager *this,bool param_1,bool param_2)

{
  if (this != (FStagingManager *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)this);
    ProcessPendingFreeNoLock(this,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000145b2e506. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// ProcessPendingFreeNoLock @ 145b2e520

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
VulkanRHI::FStagingManager::ProcessPendingFreeNoLock
          (FStagingManager *this,bool param_1,bool param_2)

{
  undefined1 *puVar1;
  TMap<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  int *piVar2;
  longlong *plVar3;
  TArray<VulkanRHI::FStagingManager::FFreeEntry,TSizedDefaultAllocator<32>_> *pTVar4;
  ulonglong uVar5;
  uint uVar6;
  FVulkanSyncPoint *pFVar7;
  longlong lVar8;
  undefined8 *puVar9;
  code *pcVar10;
  TMap<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
  *pTVar11;
  bool bVar12;
  int iVar13;
  longlong lVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  ulonglong *puVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  uint *puVar23;
  FScriptContainerElement *pFVar24;
  undefined1 local_res8 [8];
  char local_res10;
  char local_res18;
  undefined1 local_res20 [8];
  undefined1 local_f8 [8];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  uint local_e0;
  ulonglong local_d8;
  int local_d0;
  undefined8 local_c8;
  uint uStack_c0;
  undefined4 uStack_bc;
  TMap<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_b8;
  int iStack_b0;
  uint uStack_ac;
  undefined1 *local_a8;
  undefined4 uStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  undefined4 uStack_8c;
  int local_88;
  int local_84;
  TRefCountPtr<FVulkanSyncPoint> local_80;
  TMap<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  local_d0 = (this->FreeStagingBuffers).ArrayNum;
  puVar1 = &(this->PendingFreeStagingBuffers).field_0x10;
  this_00 = &this->PendingFreeStagingBuffers;
  iStack_b0 = 0;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  uStack_ac = 1;
  iVar13 = *(int *)&(this->PendingFreeStagingBuffers).field_0x28;
  iStack_9c = iStack_b0;
  local_98 = iStack_b0;
  if (iVar13 != 0) {
    puVar23 = *(uint **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar20 = *puVar23;
    while (uVar20 == 0) {
      lVar14 = (longlong)iStack_b0;
      local_98 = local_98 + 0x20;
      iStack_b0 = iStack_b0 + 1;
      iStack_9c = iVar13;
      if ((int)(iVar13 + -1 + (iVar13 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_b0) goto LAB_145b2e5de;
      uVar20 = puVar23[lVar14 + 1];
    }
    uStack_ac = ~(uVar20 - 1) & uVar20;
    uVar5 = (ulonglong)uStack_ac * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_88 = (int)lVar14;
    iStack_9c = local_98 + -1 + local_88;
    if (iVar13 < iStack_9c) {
      iStack_9c = iVar13;
    }
  }
LAB_145b2e5de:
  uVar20 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  uVar17 = uVar20 & 0xffffffe0;
  iStack_90 = *(int *)&(this->PendingFreeStagingBuffers).field_0x8 -
              *(int *)&(this->PendingFreeStagingBuffers).field_0x34;
  uStack_a0 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_ac,iStack_b0);
  TStack_70.CurrentBitIndex = iStack_9c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar16 = (int)uVar20 >> 5;
  TStack_70._28_4_ = iStack_9c;
  TStack_70.BaseBitIndex = local_98;
  uStack_50 = CONCAT44(uStack_8c,iStack_90);
  local_res10 = param_1;
  local_res18 = param_2;
  local_e0 = uVar20;
  local_b8 = this_00;
  local_a8 = puVar1;
  iStack_94 = iStack_9c;
  local_78 = this_00;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar20 < 0) || (iVar13 < (int)uVar20)) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  uVar6 = *(uint *)&(this->PendingFreeStagingBuffers).field_0x28;
  if (uVar20 != uVar6) {
    puVar22 = *(undefined1 **)&(this->PendingFreeStagingBuffers).field_0x20;
    if (puVar22 == (undefined1 *)0x0) {
      puVar22 = puVar1;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar16 * 4);
    while (uVar20 == 0) {
      lVar14 = (longlong)iVar16;
      uVar17 = uVar17 + 0x20;
      iVar16 = iVar16 + 1;
      uVar20 = uVar6;
      local_e0 = uVar6;
      if ((int)((uVar6 - 1) + ((int)(uVar6 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar16) goto LAB_145b2e6f0;
      uVar20 = *(uint *)(puVar22 + lVar14 * 4 + 4);
    }
    uVar5 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar5 != 0) {
      for (; uVar5 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_84 = (int)lVar14;
    uVar20 = local_84 + -1 + uVar17;
    local_e0 = uVar20;
    if ((int)uVar6 < (int)uVar20) {
      uVar20 = uVar6;
      local_e0 = uVar6;
    }
  }
LAB_145b2e6f0:
  do {
    pTVar11 = local_78;
    if (*(int *)(&local_78->field_0x0 + 8) - *(int *)(&local_78->field_0x0 + 0x34) != (int)uStack_50
       ) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar20) &&
        (TStack_70.Array ==
         (TBitArray<FDefaultBitArrayAllocator> *)&(this->PendingFreeStagingBuffers).field_0x10)) &&
       (pTVar11 == this_00)) {
      iVar13 = (int)local_e8;
      pFVar24 = local_f0.Data + (longlong)(int)local_e8 * 8;
      FVar19.Data = local_f0.Data;
      while( true ) {
        if ((int)local_e8 != iVar13) {
          local_f8[0] = 0;
          `TCheckedPointerIterator<FVulkanSyncPoint_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f8);
        }
        if (FVar19.Data == pFVar24) break;
        pFVar7 = *(FVulkanSyncPoint **)FVar19.Data;
        plVar3 = &pFVar7->_padding_;
        if (pFVar7 != (FVulkanSyncPoint *)0x0) {
          LOCK();
          *(int *)plVar3 = (int)*plVar3 + 1;
          UNLOCK();
        }
        local_80.Reference = pFVar7;
        if (*(int *)&(this->PendingFreeStagingBuffers).field_0x8 !=
            *(int *)&(this->PendingFreeStagingBuffers).field_0x34) {
          uVar20 = ((uint)((ulonglong)pFVar7 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar7 >> 4)) *
                   -0x7a143595;
          uVar20 = (uVar20 >> 0xd ^ uVar20) * -0x3d4d51cb;
          TSet<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TRefCountPtr<FVulkanSyncPoint>_>
                    ((TSet<TTuple<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      *)this_00,uVar20 >> 0x10 ^ uVar20,&local_80);
        }
        if (pFVar7 != (FVulkanSyncPoint *)0x0) {
          LOCK();
          lVar14 = *plVar3;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if (((int)lVar14 == 1) && (plVar3 != (longlong *)0x0)) {
            (**(code **)pFVar7->_padding_)(pFVar7,1);
          }
        }
        FVar19.Data = FVar19.Data + 8;
      }
      if (local_res18 != '\0') {
        iVar13 = local_d0;
        if (local_res10 != '\0') {
          iVar13 = (this->FreeStagingBuffers).ArrayNum;
        }
        uVar20 = iVar13 - 1;
        if (-1 < (int)uVar20) {
          lVar14 = (longlong)(int)uVar20 << 4;
          cVar15 = local_res10;
          do {
            uVar17 = 0;
            if ((int)uVar20 < (this->FreeStagingBuffers).ArrayNum) {
              uVar17 = ~uVar20 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            pFVar24 = (this->FreeStagingBuffers).AllocatorInstance.Data + lVar14;
            if ((cVar15 != '\0') || (*(int *)(pFVar24 + 8) + 3U < GFrameNumberRenderThread)) {
              this->UsedMemory =
                   this->UsedMemory - (ulonglong)*(uint *)(*(longlong *)pFVar24 + 0x54);
              lVar8 = *(longlong *)pFVar24;
              (*VulkanDynamicAPI::vkDestroyBuffer)
                        (*(VkDevice_T **)(*(longlong *)(lVar8 + 0x20) + 0x30),
                         *(VkBuffer_T **)(lVar8 + 0x48),&GAllocationCallbacks);
              *(undefined8 *)(lVar8 + 0x48) = 0;
              FMemoryManager::FreeVulkanAllocation
                        ((FMemoryManager *)(*(longlong *)(lVar8 + 0x20) + 0x408),
                         (FVulkanAllocation *)(lVar8 + 0x28),EVulkanFreeFlag_None);
              puVar9 = *(undefined8 **)pFVar24;
              if (puVar9 != (undefined8 *)0x0) {
                (**(code **)*puVar9)(puVar9,1);
              }
              uVar17 = 0;
              if ((int)uVar20 < (this->FreeStagingBuffers).ArrayNum) {
                uVar17 = ~uVar20 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              iVar13 = (this->FreeStagingBuffers).ArrayNum;
              pFVar24 = (this->FreeStagingBuffers).AllocatorInstance.Data;
              iVar16 = ~uVar20 + iVar13;
              if (1 < iVar16) {
                iVar16 = 1;
              }
              if (iVar16 != 0) {
                memmove(pFVar24 + lVar14,pFVar24 + (longlong)(iVar13 - iVar16) * 0x10,
                        (longlong)iVar16 << 4);
              }
              piVar2 = &(this->FreeStagingBuffers).ArrayNum;
              *piVar2 = *piVar2 + -1;
              cVar15 = local_res10;
            }
            lVar14 = lVar14 + -0x10;
            uVar20 = uVar20 - 1;
          } while (-1 < (int)uVar20);
        }
      }
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      return;
    }
    puVar18 = (ulonglong *)
              ((longlong)TStack_70.CurrentBitIndex * 0x20 + *(longlong *)&pTVar11->field_0x0);
    if (local_res10 == '\0') {
      uVar5 = *puVar18;
      if ((*(longlong *)(uVar5 + 0x10) == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("GraphEvent",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                              ,0x55,
                              L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (*(char *)(*(longlong *)(uVar5 + 0x10) + 0xd0) != '\0') goto LAB_145b2e778;
    }
    else {
LAB_145b2e778:
      puVar21 = (undefined8 *)puVar18[1];
      uVar5 = puVar18[2];
      puVar9 = puVar21 + (int)uVar5;
      while( true ) {
        if ((int)puVar18[2] != (int)uVar5) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<VulkanRHI::FStagingBuffer_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res20);
        }
        if (puVar21 == puVar9) break;
        local_c8 = *puVar21;
        pTVar4 = &this->FreeStagingBuffers;
        pFVar24 = (pTVar4->AllocatorInstance).Data;
        uStack_c0 = GFrameNumberRenderThread;
        if (((pFVar24 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 <
             pFVar24 + (longlong)(this->FreeStagingBuffers).ArrayMax * 0x10)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar13 = (this->FreeStagingBuffers).ArrayNum;
        piVar2 = &(this->FreeStagingBuffers).ArrayMax;
        if (iVar13 == *piVar2) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar4->AllocatorInstance,piVar2);
        }
        (this->FreeStagingBuffers).ArrayNum = iVar13 + 1;
        puVar21 = puVar21 + 1;
        pFVar24 = (pTVar4->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
        *(undefined8 *)pFVar24 = local_c8;
        *(ulonglong *)(pFVar24 + 8) = CONCAT44(uStack_bc,uStack_c0);
      }
      local_d8 = *puVar18;
      if (((local_f0.Data <= (FScriptContainerElement *)&local_d8) &&
          ((FScriptContainerElement *)&local_d8 < local_f0.Data + (longlong)local_e8._4_4_ * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      iVar13 = (int)local_e8;
      if ((int)local_e8 == local_e8._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_f0,(int *)((longlong)&local_e8 + 4));
      }
      local_e8 = CONCAT44(local_e8._4_4_,iVar13 + 1);
      *(ulonglong *)(local_f0.Data + (longlong)iVar13 * 8) = local_d8;
      uVar20 = local_e0;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  } while( true );
}

// ReleaseBuffer @ 145b30140

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
VulkanRHI::FStagingManager::ReleaseBuffer
          (FStagingManager *this,FVulkanContextCommon *param_1,FStagingBuffer **param_2)

{
  int *piVar1;
  TArray<VulkanRHI::FStagingManager::FFreeEntry,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TRefCountPtr<FVulkanSyncPoint> TVar9;
  TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *local_res8;
  undefined8 local_38;
  uint uStack_30;
  undefined4 uStack_2c;
  
  if (this == (FStagingManager *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  pFVar4 = (this->UsedStagingBuffers).AllocatorInstance.Data;
  iVar8 = (this->UsedStagingBuffers).ArrayNum;
  if (pFVar4 != pFVar4 + (longlong)iVar8 * 8) {
    pFVar12 = pFVar4;
    do {
      if (*(FStagingBuffer **)pFVar12 == *param_2) {
        uVar11 = (uint)((longlong)pFVar12 - (longlong)pFVar4 >> 3);
        if (uVar11 != 0xffffffff) {
          uVar7 = 0;
          if ((int)(uVar11 + 1) <= iVar8) {
            uVar7 = ~uVar11 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar3 = (this->UsedStagingBuffers).ArrayNum;
          pFVar4 = (this->UsedStagingBuffers).AllocatorInstance.Data;
          iVar8 = iVar3 + ~uVar11;
          if (1 < iVar8) {
            iVar8 = 1;
          }
          if (iVar8 != 0) {
            memmove(pFVar4 + (longlong)(int)uVar11 * 8,pFVar4 + (longlong)(iVar3 - iVar8) * 8,
                    (longlong)iVar8 << 3);
          }
          piVar1 = &(this->UsedStagingBuffers).ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        break;
      }
      pFVar12 = pFVar12 + 8;
    } while (pFVar12 != pFVar4 + (longlong)iVar8 * 8);
  }
  if (param_1 == (FVulkanContextCommon *)0x0) {
    local_38 = *param_2;
    pTVar2 = &this->FreeStagingBuffers;
    pFVar4 = (pTVar2->AllocatorInstance).Data;
    uStack_30 = GFrameNumberRenderThread;
    if (((pFVar4 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 <
         pFVar4 + (longlong)(this->FreeStagingBuffers).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = (this->FreeStagingBuffers).ArrayNum;
    piVar1 = &(this->FreeStagingBuffers).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->FreeStagingBuffers).ArrayNum = iVar8 + 1;
    pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
    *(undefined4 *)pFVar4 = (undefined4)local_38;
    *(undefined4 *)(pFVar4 + 4) = local_38._4_4_;
    *(uint *)(pFVar4 + 8) = uStack_30;
    *(undefined4 *)(pFVar4 + 0xc) = uStack_2c;
  }
  else {
    TVar9 = FVulkanContextCommon::GetContextSyncPoint(param_1);
    uVar11 = ((uint)((ulonglong)(TVar9.Reference)->_padding_ >> 0x14) & 0xffff ^
             (uint)((ulonglong)(TVar9.Reference)->_padding_ >> 4)) * -0x7a143595;
    uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
    pTVar10 = TMapBase<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
              ::FindOrAddImpl<TRefCountPtr<FVulkanSyncPoint>_>
                        ((TMapBase<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TRefCountPtr<FVulkanSyncPoint>,TArray<VulkanRHI::FStagingBuffer_*,TSizedDefaultAllocator<32>_>,0>_>
                          *)&this->PendingFreeStagingBuffers,uVar11 >> 0x10 ^ uVar11,
                         (TRefCountPtr<FVulkanSyncPoint> *)TVar9.Reference);
    if (local_res8 != (undefined8 *)0x0) {
      piVar1 = (int *)(local_res8 + 1);
      LOCK();
      iVar8 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar8 == 1) {
        if (piVar1 == (int *)0x0) {
          local_res8 = (undefined8 *)0x0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          (**(code **)*local_res8)(local_res8,1);
        }
      }
    }
    pFVar4 = (pTVar10->AllocatorInstance).Data;
    if (((pFVar4 <= param_2) && (param_2 < pFVar4 + (longlong)pTVar10->ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar8 = pTVar10->ArrayNum;
    if (iVar8 == pTVar10->ArrayMax) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar10->AllocatorInstance,&pTVar10->ArrayMax);
    }
    pTVar10->ArrayNum = iVar8 + 1;
    *(FStagingBuffer **)((pTVar10->AllocatorInstance).Data + (longlong)iVar8 * 8) = *param_2;
  }
  *param_2 = (FStagingBuffer *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145b30441. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  return;
}

