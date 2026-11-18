// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 14

// FVulkanResourceHeap @ 145b04030

/* WARNING: Type propagation algorithm not settling */
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

FVulkanResourceHeap * __thiscall
VulkanRHI::FVulkanResourceHeap::FVulkanResourceHeap
          (FVulkanResourceHeap *this,FMemoryManager *param_1,uint param_2,uint param_3)

{
  this->Owner = param_1;
  (this->PageSizeBuckets).ArrayNum = 0;
  (this->PageSizeBuckets).ArrayMax = 5;
  this->MemoryTypeIndex = (ushort)param_2;
  this->HeapIndex =
       (ushort)((VkPhysicalDeviceMemoryProperties *)
               (&(param_1->Device->DeviceMemoryManager).MemoryBudget + 1))->memoryTypes[param_2].
               heapIndex;
  this->bIsHostCachedSupported = false;
  this->bIsLazilyAllocatedSupported = false;
  this->DefragCountDown = '\0';
  this->OverridePageSize = param_3;
  this->PeakPageSize = 0;
  this->UsedMemory = 0;
  this->PageIDCounter = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PagesLock,4000);
  this->ActivePages[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActivePages[0].ArrayNum = 0;
  this->ActivePages[0].ArrayMax = 0;
  this->ActivePages[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActivePages[1].ArrayNum = 0;
  this->ActivePages[1].ArrayMax = 0;
  this->ActivePages[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActivePages[2].ArrayNum = 0;
  this->ActivePages[2].ArrayMax = 0;
  this->ActivePages[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActivePages[3].ArrayNum = 0;
  this->ActivePages[3].ArrayMax = 0;
  this->ActivePages[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->ActivePages[4].ArrayNum = 0;
  this->ActivePages[4].ArrayMax = 0;
  (this->UsedDedicatedImagePages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UsedDedicatedImagePages).ArrayNum = 0;
  (this->UsedDedicatedImagePages).ArrayMax = 0;
  return this;
}

// ~FVulkanResourceHeap @ 145b058c0

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

void __thiscall VulkanRHI::FVulkanResourceHeap::~FVulkanResourceHeap(FVulkanResourceHeap *this)

{
  int *piVar1;
  FVulkanSubresourceAllocator *this_00;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  FOutputDeviceRedirector *this_01;
  uint uVar7;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar8;
  longlong lVar9;
  int *piVar10;
  
  bVar4 = false;
  if (this->ActivePages != &this->UsedDedicatedImagePages) {
    piVar10 = &this->ActivePages[0].ArrayNum;
    do {
      if (bVar4) {
LAB_145b05a09:
        bVar4 = true;
      }
      else {
        bVar4 = false;
        uVar7 = *piVar10 - 1;
        if (-1 < (int)uVar7) {
          lVar9 = (longlong)(int)uVar7 * 8;
          do {
            uVar6 = 0;
            if ((int)uVar7 < *piVar10) {
              uVar6 = ~uVar7 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_00 = *(FVulkanSubresourceAllocator **)
                       ((((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
                           *)(piVar10 + -2))->AllocatorInstance).Data + lVar9);
            bVar5 = FVulkanSubresourceAllocator::JoinFreeBlocks(this_00);
            bVar4 = (bool)(bVar4 | !bVar5);
            FDeviceMemoryManager::Free
                      (&this->Owner->Device->DeviceMemoryManager,&this_00->MemoryAllocation);
            if (this_00 != (FVulkanSubresourceAllocator *)0x0) {
              FVulkanSubresourceAllocator::~FVulkanSubresourceAllocator(this_00);
              ::operator_delete(this_00,0xf0);
            }
            lVar9 = lVar9 + -8;
            uVar7 = uVar7 - 1;
          } while (-1 < (int)uVar7);
        }
        *piVar10 = 0;
        if (piVar10[1] < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,(ForAnyElementType *)(piVar10 + -2),0,piVar10 + 1);
        }
        if (bVar4) goto LAB_145b05a09;
        bVar4 = false;
      }
      piVar1 = piVar10 + 2;
      piVar10 = piVar10 + 4;
    } while ((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)piVar1
             != &this->UsedDedicatedImagePages);
    if (bVar4) {
      FMemoryManager::DumpMemory(&this->Owner->Device->MemoryManager,true);
      this_01 = GetGlobalLogSingleton();
                    /* WARNING: Subroutine does not return */
      FOutputDeviceRedirector::Flush(this_01);
    }
  }
  pTVar8 = &this->UsedDedicatedImagePages;
  pFVar2 = (pTVar8->AllocatorInstance).Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  lVar9 = 5;
  do {
    pFVar2 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar9 = lVar9 + -1;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
  } while (lVar9 != 0);
                    /* WARNING: Could not recover jumptable at 0x000145b05ab1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PagesLock);
  return;
}

// operator() @ 145b06540

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
`VulkanRHI::FVulkanResourceHeap::DumpMemory'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *param_1,
          wchar_t *param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  
  uVar4 = 0;
  if (0 < param_1->ArrayNum) {
    lVar6 = 0;
    do {
      uVar5 = ~uVar4 >> 0x1f;
      *(longlong *)(*(longlong *)this + 0x28) = *(longlong *)(*(longlong *)this + 0x28) + 1;
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      *(longlong *)(*(longlong *)this + 0x20) =
           *(longlong *)(*(longlong *)this + 0x20) +
           (ulonglong)*(uint *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 0x48);
      if (param_3) {
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(longlong *)(*(longlong *)this + 0x10) =
             *(longlong *)(*(longlong *)this + 0x10) +
             *(longlong *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 0x58);
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(longlong *)(*(longlong *)this + 8) =
             *(longlong *)(*(longlong *)this + 8) +
             (ulonglong)*(uint *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 0x84);
        *(longlong *)(*(longlong *)this + 0x30) = *(longlong *)(*(longlong *)this + 0x30) + 1;
      }
      else {
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        *(longlong *)(*(longlong *)this + 0x18) =
             *(longlong *)(*(longlong *)this + 0x18) +
             *(longlong *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 0x58);
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        **(longlong **)this =
             **(longlong **)this +
             (ulonglong)*(uint *)(*(longlong *)((param_1->AllocatorInstance).Data + lVar6) + 0x84);
        *(longlong *)(*(longlong *)this + 0x38) = *(longlong *)(*(longlong *)this + 0x38) + 1;
      }
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar3 = 0;
      if ((int)uVar4 < param_1->ArrayNum) {
        uVar3 = uVar5;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (3 < (byte)LogVulkanRHI._0_1_) {
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar3 = 0;
        if ((int)uVar4 < param_1->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      uVar4 = uVar4 + 1;
      lVar6 = lVar6 + 8;
    } while ((int)uVar4 < param_1->ArrayNum);
  }
  return;
}

// AllocateDedicatedImage @ 145b0df80

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
VulkanRHI::FVulkanResourceHeap::AllocateDedicatedImage
          (FVulkanResourceHeap *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          VkImage_T *param_3,uint param_4,uint param_5,EVulkanAllocationMetaType param_6,
          bool param_7,char *param_8,uint param_9)

{
  int *piVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FDeviceMemoryAllocation *pFVar8;
  FVulkanSubresourceAllocator *this_00;
  FVulkanSubresourceAllocator *pFVar9;
  uint uVar10;
  FVulkanSubresourceAllocator *local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 uStack_44;
  VkImage_T *pVStack_40;
  undefined4 uStack_38;
  undefined4 local_34;
  
  lpCriticalSection = &this->PagesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_3 == (VkImage_T *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Image != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x7fc,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  uStack_38 = 0;
  local_34 = 0;
  local_4c = 0;
  uStack_44 = 0;
  local_50 = 0x3b9cba19;
  pVStack_40 = param_3;
  pFVar8 = FDeviceMemoryManager::Alloc
                     (&this->Owner->Device->DeviceMemoryManager,true,(ulonglong)param_4,
                      (uint)this->MemoryTypeIndex,&local_50,__real_3f800000,param_7,param_8,param_9)
  ;
  if (pFVar8 == (FDeviceMemoryAllocation *)0x0) {
    bVar5 = false;
  }
  else {
    pFVar9 = (FVulkanSubresourceAllocator *)0x0;
    uVar10 = 0;
    if ((int)GMaxRHIFeatureLevel < 2) {
      LOCK();
      UNLOCK();
      uVar10 = GVulkanBufferHandleIdCounter._0_4_ + 1;
      GVulkanBufferHandleIdCounter =
           (TAtomic<unsigned___int64>)((longlong)GVulkanBufferHandleIdCounter + 1);
    }
    this->PageIDCounter = this->PageIDCounter + 1;
    this_00 = ::operator_new(0xf0);
    if (this_00 != (FVulkanSubresourceAllocator *)0x0) {
      pFVar9 = FVulkanSubresourceAllocator::FVulkanSubresourceAllocator
                         (this_00,EVulkanAllocationImageDedicated,this->Owner,'\0',pFVar8,
                          (uint)this->MemoryTypeIndex,uVar10);
    }
    local_58 = pFVar9;
    FMemoryManager::RegisterSubresourceAllocator(this->Owner,pFVar9);
    pTVar2 = &this->UsedDedicatedImagePages;
    local_58->BucketId = 0xff;
    pFVar3 = (pTVar2->AllocatorInstance).Data;
    if ((pFVar3 <= (FScriptContainerElement *)&local_58) &&
       ((FScriptContainerElement *)&local_58 <
        pFVar3 + (longlong)(this->UsedDedicatedImagePages).ArrayMax * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
    }
    iVar7 = (this->UsedDedicatedImagePages).ArrayNum;
    piVar1 = &(this->UsedDedicatedImagePages).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->UsedDedicatedImagePages).ArrayNum = iVar7 + 1;
    *(FVulkanSubresourceAllocator **)((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 8) =
         local_58;
    this->UsedMemory = this->UsedMemory + (ulonglong)param_4;
    uVar10 = param_4;
    if (param_4 < this->PeakPageSize) {
      uVar10 = this->PeakPageSize;
    }
    this->PeakPageSize = uVar10;
    bVar5 = FVulkanSubresourceAllocator::TryAllocate2
                      (local_58,param_1,param_2,param_4,param_5,param_6,param_8,param_9);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return bVar5;
}

// AllocateResource @ 145b0eee0

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

bool __thiscall
VulkanRHI::FVulkanResourceHeap::AllocateResource
          (FVulkanResourceHeap *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          EType param_3,uint param_4,uint param_5,bool param_6,bool param_7,
          EVulkanAllocationMetaType param_8,bool param_9,char *param_10,uint param_11)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FVulkanDevice *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  FVulkanAllocation *pFVar5;
  byte bVar6;
  byte bVar7;
  bool bVar8;
  undefined1 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  FDeviceMemoryAllocation *this_00;
  FVulkanSubresourceAllocator *this_01;
  FVulkanSubresourceAllocator *pFVar13;
  ulonglong uVar14;
  uint uVar15;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar16;
  ulonglong uVar17;
  FDeviceMemoryManager *this_02;
  bool bVar18;
  undefined1 auStackY_d8 [32];
  FVulkanSubresourceAllocator *local_80;
  uint local_78;
  uint local_74;
  FVulkanAllocation *local_70;
  FDeviceMemoryManager *local_68;
  FVulkanEvictable *local_60;
  FVulkanPageSizeBucket local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  local_70 = param_1;
  local_60 = param_2;
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FResourceHeap_AllocateResource");
  bVar18 = -1 < CpuChannel->Enabled;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1945,"FResourceHeap_AllocateResource",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x799);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1945);
  }
  lpCriticalSection = &this->PagesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((param_7) || (GVulkanSingleAllocationPerResource != 0)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  pFVar1 = this->Owner->Device;
  this_02 = &pFVar1->DeviceMemoryManager;
  local_68 = this_02;
  uVar10 = GetPageSizeBucket(this,&local_58,param_3,param_4,bVar8);
  if (((pFVar1->DeviceMemoryManager).bHasUnifiedMemory == false) &&
     (param_8 == EVulkanAllocationMetaImageOther)) {
    bVar6 = 2;
  }
  else {
    bVar6 = 0;
  }
  bVar7 = bVar6 | 1;
  if (!param_6) {
    bVar7 = bVar6;
  }
  local_78 = (uint)bVar7;
  uVar14 = 0;
  uVar11 = param_4;
  local_74 = uVar10;
  if (bVar8 == false) {
    if ((param_4 < local_58.PageSize) &&
       (iVar12 = this->ActivePages[uVar10].ArrayNum, uVar17 = uVar14, 0 < iVar12)) {
      do {
        uVar15 = (uint)uVar14;
        uVar11 = 0;
        if ((int)uVar15 < iVar12) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar3 = (code *)swi(3);
          uVar9 = (*pcVar3)();
          return (bool)uVar9;
        }
        pFVar13 = *(FVulkanSubresourceAllocator **)
                   (this->ActivePages[uVar10].AllocatorInstance.Data + uVar17);
        if (pFVar13->SubresourceAllocatorFlags == (uchar)local_78) {
          if (((pFVar13->MemoryAllocation->MappedPointer != (void *)0x0) != param_6) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Page->MemoryAllocation->IsMapped() == bMapAllocation",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                 ,0x7b7,L""), bVar8)) {
            pcVar3 = (code *)swi(3);
            uVar9 = (*pcVar3)();
            return (bool)uVar9;
          }
          bVar8 = FVulkanSubresourceAllocator::TryAllocate2
                            (pFVar13,local_70,local_60,param_4,param_5,param_8,param_10,param_11);
          if (bVar8) {
            IncMetaStats(param_8,local_70->Size);
            bVar8 = true;
            goto LAB_145b0f475;
          }
        }
        iVar12 = this->ActivePages[uVar10].ArrayNum;
        uVar14 = (ulonglong)(uVar15 + 1);
        uVar17 = uVar17 + 8;
        this_02 = local_68;
      } while ((int)(uVar15 + 1) < iVar12);
    }
    uVar11 = local_58.PageSize;
    if (local_58.PageSize < param_4) {
      uVar11 = param_4;
    }
  }
  fVar4 = __real_3f800000;
  this_00 = FDeviceMemoryManager::Alloc
                      (this_02,true,(ulonglong)uVar11,(uint)this->MemoryTypeIndex,(void *)0x0,
                       __real_3f800000,param_9,param_10,param_11);
  if (this_00 == (FDeviceMemoryAllocation *)0x0) {
    if (param_4 == uVar11) {
      if (2 < (byte)LogVulkanRHI._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
      }
      bVar8 = false;
      goto LAB_145b0f475;
    }
    this_00 = FDeviceMemoryManager::Alloc
                        (local_68,true,(ulonglong)param_4,(uint)this->MemoryTypeIndex,(void *)0x0,
                         fVar4,param_9,param_10,param_11);
    if (this_00 == (FDeviceMemoryAllocation *)0x0) {
      bVar8 = false;
      goto LAB_145b0f475;
    }
  }
  pFVar13 = (FVulkanSubresourceAllocator *)0x0;
  if (param_6) {
    FDeviceMemoryAllocation::Map(this_00,(ulonglong)uVar11,0);
  }
  uVar10 = 0;
  if ((int)GMaxRHIFeatureLevel < 2) {
    LOCK();
    UNLOCK();
    uVar10 = GVulkanBufferHandleIdCounter._0_4_ + 1;
    GVulkanBufferHandleIdCounter =
         (TAtomic<unsigned___int64>)((longlong)GVulkanBufferHandleIdCounter + 1);
  }
  this->PageIDCounter = this->PageIDCounter + 1;
  this_01 = ::operator_new(0xf0);
  if (this_01 != (FVulkanSubresourceAllocator *)0x0) {
    pFVar13 = FVulkanSubresourceAllocator::FVulkanSubresourceAllocator
                        (this_01,(param_3 == Image) + EVulkanAllocationBuffer,this->Owner,
                         (uchar)local_78,this_00,(uint)this->MemoryTypeIndex,uVar10);
  }
  local_80 = pFVar13;
  FMemoryManager::RegisterSubresourceAllocator(this->Owner,pFVar13);
  pTVar16 = this->ActivePages + local_74;
  local_80->BucketId = (uchar)local_74;
  pFVar2 = (pTVar16->AllocatorInstance).Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_80) &&
      ((FScriptContainerElement *)&local_80 < pFVar2 + (longlong)pTVar16->ArrayMax * 8)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar3 = (code *)swi(3);
    uVar9 = (*pcVar3)();
    return (bool)uVar9;
  }
  iVar12 = pTVar16->ArrayNum;
  if (iVar12 == pTVar16->ArrayMax) {
    iVar12 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&pTVar16->AllocatorInstance,&pTVar16->ArrayMax);
  }
  pFVar5 = local_70;
  pTVar16->ArrayNum = iVar12 + 1;
  *(FVulkanSubresourceAllocator **)((pTVar16->AllocatorInstance).Data + (longlong)iVar12 * 8) =
       local_80;
  this->UsedMemory = this->UsedMemory + (ulonglong)uVar11;
  if (uVar11 < this->PeakPageSize) {
    uVar11 = this->PeakPageSize;
  }
  this->PeakPageSize = uVar11;
  bVar8 = FVulkanSubresourceAllocator::TryAllocate2
                    (local_80,local_70,local_60,param_4,param_5,param_8,param_10,param_11);
  if (bVar8) {
    IncMetaStats(param_8,pFVar5->Size);
  }
LAB_145b0f475:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return bVar8;
}

// DefragTick @ 145b12e90

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
VulkanRHI::FVulkanResourceHeap::DefragTick
          (FVulkanResourceHeap *this,FVulkanDevice *param_1,FVulkanContextArray *param_2,
          uint param_3)

{
  uchar *puVar1;
  FVulkanSubresourceAllocator *pFVar2;
  longlong lVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  FVulkanSubresourceAllocator *pFVar15;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar16;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar17;
  longlong lVar18;
  FScriptContainerElement *pFVar19;
  bool bVar20;
  float fVar21;
  FIdentityFunctor local_res8;
  undefined1 local_b7 [3];
  uint local_b4;
  ForAnyElementType local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [4];
  uint local_9c;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *local_98;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *local_90;
  FVulkanSubresourceAllocator *local_88;
  FPotentialDefragMove local_80;
  LPCRITICAL_SECTION local_70;
  
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Cyan,"FVulkanSubresourceAllocator_DefragTick");
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1745,"FVulkanSubresourceAllocator_DefragTick",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
               ,0x6d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1745);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)&this->PagesLock;
  local_70 = lpCriticalSection;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  pTVar16 = this->ActivePages;
  pFVar15 = (FVulkanSubresourceAllocator *)0x0;
  pTVar10 = &this->UsedDedicatedImagePages;
  local_88 = (FVulkanSubresourceAllocator *)0x0;
  pTVar17 = pTVar16;
  local_98 = pTVar10;
  local_90 = pTVar16;
  if (pTVar16 != pTVar10) {
    do {
      iVar9 = pTVar17->ArrayNum;
      uVar12 = 0;
      pFVar2 = local_88;
      if (0 < iVar9) {
        lVar18 = 0;
        do {
          uVar13 = 0;
          if ((int)uVar12 < iVar9) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar9 = pTVar17->ArrayNum;
          pFVar2 = *(FVulkanSubresourceAllocator **)((pTVar17->AllocatorInstance).Data + lVar18);
          if (pFVar2->bIsDefragging != false) {
            pFVar15 = pFVar2;
          }
          uVar12 = uVar12 + 1;
          lVar18 = lVar18 + 8;
          pTVar10 = local_98;
          pFVar2 = pFVar15;
        } while ((int)uVar12 < iVar9);
      }
      local_88 = pFVar2;
      pTVar17 = pTVar17 + 1;
    } while (pTVar17 != pTVar10);
  }
  fVar6 = __real_477fff00;
  fVar5 = __real_3f800000;
  if (GVulkanDefragPaused == 0) {
    if (pFVar15 == (FVulkanSubresourceAllocator *)0x0) {
      if ((GVulkanDefragSizeFactor <= 0.0) && (GVulkanDefragOnce != 1)) goto LAB_145b134b2;
      local_9c = GFrameNumberRenderThread;
      local_b0.Data = (FScriptContainerElement *)0x0;
      local_a8 = 0;
      if (pTVar16 != pTVar10) {
        do {
          iVar9 = pTVar16->ArrayNum;
          uVar12 = 0;
          uVar13 = 0;
          local_b4 = 0;
          if (0 < iVar9) {
            lVar18 = 0;
            do {
              uVar11 = 0;
              if ((int)uVar13 < iVar9) {
                uVar11 = ~uVar13 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 uVar12 = local_b4, bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              lVar3 = *(longlong *)((pTVar16->AllocatorInstance).Data + lVar18);
              if ((*(byte *)(lVar3 + 0x7c) & 2) == 0) {
                local_b4 = uVar12 + (*(int *)(lVar3 + 0x48) - *(int *)(lVar3 + 0x58));
                uVar12 = local_b4;
              }
              iVar9 = pTVar16->ArrayNum;
              uVar13 = uVar13 + 1;
              lVar18 = lVar18 + 8;
              pTVar10 = local_98;
            } while ((int)uVar13 < iVar9);
          }
          pTVar16 = local_90;
          uVar12 = 0;
          if (0 < iVar9) {
            lVar18 = 0;
            do {
              uVar13 = 0;
              if ((int)uVar12 < iVar9) {
                uVar13 = ~uVar12 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pFVar15 = *(FVulkanSubresourceAllocator **)
                         ((pTVar16->AllocatorInstance).Data + lVar18);
              if ((pFVar15->SubresourceAllocatorFlags & 2) == 0) {
                iVar9 = (pFVar15->InternalData).ArrayNum;
                pFVar14 = (pFVar15->InternalData).AllocatorInstance.Data;
                pFVar19 = pFVar14 + (longlong)iVar9 * 0x40;
                while( true ) {
                  if ((pFVar15->InternalData).ArrayNum != iVar9) {
                    local_b7[0] = 0;
                    `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::
                    operator!='::__l2::<lambda_1>::operator()(local_b7);
                  }
                  if (pFVar14 == pFVar19) break;
                  if ((*(int *)pFVar14 == 1) &&
                     ((*(undefined8 **)(pFVar14 + 0x18) == (undefined8 *)0x0 ||
                      (cVar8 = (**(code **)**(undefined8 **)(pFVar14 + 0x18))(), cVar8 == '\0'))))
                  goto LAB_145b1331c;
                  pFVar14 = pFVar14 + 0x40;
                }
                uVar11 = local_9c - pFVar15->LastDefragFrame;
                uVar13 = (uint)pFVar15->UsedSize;
                if ((((uVar13 < local_b4) &&
                     (fVar21 = (float)uVar13,
                     fVar21 * GVulkanDefragSizeFactor < (float)(local_b4 - uVar13))) &&
                    (fVar21 < (float)pFVar15->MaxSize * GVulkanDefragSizeFraction)) &&
                   ((uint)GVulkanDefragAgeDelay < uVar11)) {
                  local_80.Key = CONCAT44(uVar11,(int)((fVar5 - fVar21 / (float)pFVar15->MaxSize) *
                                                      fVar6)) & 0xffffffff0000ffff;
                  local_80.Allocator = pFVar15;
                  if (((local_b0.Data <= &local_80) &&
                      (&local_80 <
                       (FPotentialDefragMove *)(local_b0.Data + (longlong)local_a8._4_4_ * 0x10)))
                     && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar7)) {
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  iVar9 = (int)local_a8;
                  if ((int)local_a8 == local_a8._4_4_) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x810,&local_b0,(int *)((longlong)&local_a8 + 4));
                  }
                  local_a8 = CONCAT44(local_a8._4_4_,iVar9 + 1);
                  *(ulong64 *)&local_b0.Data[(longlong)iVar9 * 0x10].field_0x0 = local_80.Key;
                  *(FVulkanSubresourceAllocator **)(local_b0.Data + (longlong)iVar9 * 0x10 + 8) =
                       local_80.Allocator;
                }
              }
LAB_145b1331c:
              iVar9 = pTVar16->ArrayNum;
              uVar12 = uVar12 + 1;
              lVar18 = lVar18 + 8;
              pTVar10 = local_98;
            } while ((int)uVar12 < iVar9);
          }
          pTVar16 = local_90 + 1;
          lpCriticalSection = local_70;
          pFVar15 = local_88;
          local_90 = pTVar16;
        } while (pTVar16 != pTVar10);
      }
      if ((int)local_a8 != 0) {
        local_res8 = SUB81(this,0);
        AlgoImpl::
        IntroSortInternal<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,int,FIdentityFunctor,TDereferenceWrapper<_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l14::FPotentialDefragMove,_VulkanRHI::FVulkanResourceHeap::DefragTick_::__l34::<lambda_1>_>_>
                  ((FPotentialDefragMove *)local_b0.Data,(int)local_a8,local_res8,
                   (<lambda_1> *)local_a0);
        if (((int)local_a8 < 1) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar15 = *(FVulkanSubresourceAllocator **)(local_b0.Data + 8);
        SetDefragging(this,pFVar15);
        this->DefragCountDown = '\x03';
      }
      if ((FPotentialDefragMove *)local_b0.Data != (FPotentialDefragMove *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      goto LAB_145b133ee;
    }
  }
  else {
LAB_145b133ee:
    if (pFVar15 == (FVulkanSubresourceAllocator *)0x0) goto LAB_145b134b2;
  }
  if ((GVulkanLogDefrag != 0) && (3 < (byte)LogVulkanRHI._0_1_)) {
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogVulkanRHI);
  }
  iVar9 = FVulkanSubresourceAllocator::DefragTick(pFVar15,param_1,param_2,this,param_3);
  if (iVar9 < 1) {
    puVar1 = &this->DefragCountDown;
    *puVar1 = *puVar1 + 0xff;
    if (*puVar1 == '\0') {
      if (GVulkanDefragAutoPause != 0) {
        GVulkanDefragPaused = 1;
      }
      pFVar15->bIsDefragging = false;
    }
  }
  else {
    this->DefragCountDown = '\x03';
  }
LAB_145b134b2:
  LeaveCriticalSection(lpCriticalSection);
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// DumpMemory @ 145b18370

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
VulkanRHI::FVulkanResourceHeap::DumpMemory(FVulkanResourceHeap *this,FResourceHeapStats *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar5;
  FResourceHeapStats *local_res8;
  
  pTVar5 = this->ActivePages;
  iVar3 = 0;
  if (pTVar5 != &this->UsedDedicatedImagePages) {
    puVar4 = (this->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad + 0xc;
    local_res8 = param_1;
    do {
      if (iVar3 < (this->PageSizeBuckets).ArrayNum) {
        if ((iVar3 < 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if ((*puVar4 & 1) == 0) goto LAB_145b183f4;
        bVar2 = true;
      }
      else {
LAB_145b183f4:
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 0x10;
      `VulkanRHI::FVulkanResourceHeap::DumpMemory'::__l2::<lambda_1>::operator()
                (&local_res8,pTVar5,L"ActivePages",bVar2);
      pTVar5 = pTVar5 + 1;
    } while (pTVar5 != &this->UsedDedicatedImagePages);
  }
  return;
}

// EvictOne @ 145b19b90

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
VulkanRHI::FVulkanResourceHeap::EvictOne
          (FVulkanResourceHeap *this,FVulkanDevice *param_1,FVulkanContextArray *param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  FVulkanDevice *pFVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  ulong64 uVar8;
  int iVar9;
  uint uVar10;
  int *piVar12;
  longlong lVar13;
  ulong64 uVar14;
  int *piVar15;
  undefined1 local_res8 [8];
  FVulkanDevice *local_res10;
  ulonglong uVar11;
  
  lpCriticalSection = &this->PagesLock;
  local_res10 = param_1;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
LAB_145b19d48:
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  piVar12 = &this->ActivePages[3].ArrayNum;
  lVar13 = 3;
  uVar8 = 0;
  do {
    iVar9 = *piVar12;
    uVar11 = uVar8;
    uVar14 = uVar8;
    if (0 < iVar9) {
      do {
        uVar10 = (uint)uVar11;
        uVar7 = 0;
        if ((int)uVar10 < iVar9) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar8 = (*pcVar3)();
          return uVar8;
        }
        lVar1 = *(longlong *)
                 ((((TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *)
                   (piVar12 + -2))->AllocatorInstance).Data + uVar14);
        if ((*(char *)(lVar1 + 0x7e) == '\0') && ((*(byte *)(lVar1 + 0x7c) & 2) != 0)) {
          if ((LPCRITICAL_SECTION)(lVar1 + 200) != (LPCRITICAL_SECTION)0x0) {
            EnterCriticalSection((LPCRITICAL_SECTION)(lVar1 + 200));
            pFVar4 = local_res10;
            *(undefined1 *)(lVar1 + 0x7e) = 1;
            iVar9 = *(int *)(lVar1 + 0xb8);
            piVar12 = *(int **)(lVar1 + 0xb0);
            piVar15 = piVar12 + (longlong)iVar9 * 0x10;
            while( true ) {
              if (*(int *)(lVar1 + 0xb8) != iVar9) {
                local_res8[0] = 0;
                `TCheckedPointerIterator<VulkanRHI::FVulkanAllocationInternal,int,0>::operator!='::
                __l2::<lambda_1>::operator()(local_res8);
              }
              if (piVar12 == piVar15) break;
              if (*piVar12 == 1) {
                if (*(char *)((longlong)piVar12 + 5) == '\x06') {
                  plVar2 = *(longlong **)(piVar12 + 6);
                  cVar6 = (**(code **)(*plVar2 + 8))(plVar2);
                  if (cVar6 != '\0') {
                    (**(code **)(*plVar2 + 0x10))(plVar2,pFVar4,param_2);
                  }
                }
                else {
                  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("!\"Enclosing block should never be called\"",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                                     ,0x1093,L"");
                  if (bVar5) {
                    pcVar3 = (code *)swi(3);
                    uVar8 = (*pcVar3)();
                    return uVar8;
                  }
                }
              }
              piVar12 = piVar12 + 0x10;
            }
            uVar8 = **(ulong64 **)(lVar1 + 0x40);
            LeaveCriticalSection((LPCRITICAL_SECTION)(lVar1 + 200));
            goto LAB_145b19d24;
          }
          goto LAB_145b19d48;
        }
        iVar9 = *piVar12;
        uVar11 = (ulonglong)(uVar10 + 1);
        uVar14 = uVar14 + 8;
      } while ((int)(uVar10 + 1) < iVar9);
    }
    piVar12 = piVar12 + -4;
    lVar13 = lVar13 + -1;
    if (lVar13 < 0) {
LAB_145b19d24:
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return uVar8;
    }
  } while( true );
}

// FreePage @ 145b1bd00

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
VulkanRHI::FVulkanResourceHeap::FreePage
          (FVulkanResourceHeap *this,FVulkanSubresourceAllocator *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar10;
  
  lpCriticalSection = &this->PagesLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  bVar5 = FVulkanSubresourceAllocator::JoinFreeBlocks(param_1);
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InPage->JoinFreeBlocks()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x673,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  param_1->FrameFreed = GFrameNumberRenderThread;
  if (param_1->Type == EVulkanAllocationImageDedicated) {
    pFVar3 = (this->UsedDedicatedImagePages).AllocatorInstance.Data;
    iVar6 = (this->UsedDedicatedImagePages).ArrayNum;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)iVar6 * 8; pFVar9 = pFVar9 + 8) {
      if (*(FVulkanSubresourceAllocator **)pFVar9 == param_1) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (uVar8 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar8 < iVar6) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar2 = (this->UsedDedicatedImagePages).ArrayNum;
          pFVar3 = (this->UsedDedicatedImagePages).AllocatorInstance.Data;
          iVar6 = iVar2 + ~uVar8;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar6) * 8,
                    (longlong)iVar6 << 3);
          }
          piVar1 = &(this->UsedDedicatedImagePages).ArrayNum;
          *piVar1 = *piVar1 + -1;
          goto LAB_145b1bfc7;
        }
        break;
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x680,L"");
    if (bVar5) {
code_r0x000145b1bfc6:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    pTVar10 = this->ActivePages + param_1->BucketId;
    pFVar3 = (pTVar10->AllocatorInstance).Data;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)pTVar10->ArrayNum * 8; pFVar9 = pFVar9 + 8) {
      if (*(FVulkanSubresourceAllocator **)pFVar9 == param_1) {
        uVar8 = (uint)((longlong)pFVar9 - (longlong)pFVar3 >> 3);
        if (uVar8 != 0xffffffff) {
          uVar7 = 0;
          if ((int)uVar8 < pTVar10->ArrayNum) {
            uVar7 = ~uVar8 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pFVar3 = (pTVar10->AllocatorInstance).Data;
          iVar6 = pTVar10->ArrayNum + ~uVar8;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove(pFVar3 + (longlong)(int)uVar8 * 8,
                    pFVar3 + (longlong)(pTVar10->ArrayNum - iVar6) * 8,(longlong)iVar6 << 3);
          }
          pTVar10->ArrayNum = pTVar10->ArrayNum + -1;
          goto LAB_145b1bec4;
        }
        break;
      }
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x68e,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_145b1bec4:
    pFVar3 = (pTVar10->AllocatorInstance).Data;
    for (pFVar9 = pFVar3; pFVar9 != pFVar3 + (longlong)pTVar10->ArrayNum * 8; pFVar9 = pFVar9 + 8) {
      if (*(FVulkanSubresourceAllocator **)pFVar9 == param_1) {
        if (((int)((longlong)pFVar9 - (longlong)pFVar3 >> 3) != -1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Pages.Find(InPage, Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                               ,0x690,L""), bVar5)) goto code_r0x000145b1bfc6;
        break;
      }
    }
  }
LAB_145b1bfc7:
  ReleasePage(this,param_1);
                    /* WARNING: Could not recover jumptable at 0x000145b1bfe6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// GetIsDefragging @ 145b1df20

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
VulkanRHI::FVulkanResourceHeap::GetIsDefragging
          (FVulkanResourceHeap *this,FVulkanSubresourceAllocator *param_1)

{
  return param_1->bIsDefragging;
}

// GetPageSizeBucket @ 145b1edd0

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
VulkanRHI::FVulkanResourceHeap::GetPageSizeBucket
          (FVulkanResourceHeap *this,FVulkanPageSizeBucket *param_1,EType param_2,uint param_3,
          bool param_4)

{
  TTypeCompatibleBytes<VulkanRHI::FVulkanPageSizeBucket> *pTVar1;
  int iVar2;
  code *pcVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FVulkanResourceHeap *pFVar8;
  
  uVar6 = 0;
  if (!param_4) {
    iVar2 = (this->PageSizeBuckets).ArrayNum;
    if (param_2 == Buffer) {
      uVar6 = 2;
    }
    uVar6 = uVar6 | param_2 == Image;
    pFVar8 = this;
    while( true ) {
      if ((this->PageSizeBuckets).ArrayNum != iVar2) {
        param_4 = false;
        `TCheckedPointerIterator<VulkanRHI::FVulkanPageSizeBucket,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_4);
      }
      if (pFVar8 == (FVulkanResourceHeap *)
                    ((this->PageSizeBuckets).AllocatorInstance.InlineData + iVar2)) break;
      if ((uVar6 == (*(uint *)((pFVar8->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad + 0xc)
                    & uVar6)) &&
         ((ulonglong)param_3 <=
          *(ulonglong *)(pFVar8->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad)) {
        uVar4 = *(undefined8 *)((pFVar8->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad + 8);
        param_1->AllocationMax =
             *(ulong64 *)(pFVar8->PageSizeBuckets).AllocatorInstance.InlineData[0].Pad;
        param_1->PageSize = (int)uVar4;
        param_1->BucketMask = (int)((ulonglong)uVar4 >> 0x20);
        if (((this->PageSizeBuckets).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          uVar6 = (*pcVar3)();
          return uVar6;
        }
        return (uint)((longlong)pFVar8 - (longlong)this >> 4);
      }
      pFVar8 = (FVulkanResourceHeap *)((pFVar8->PageSizeBuckets).AllocatorInstance.InlineData + 1);
    }
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x633,L"");
    if (!bVar5) {
      return 0xffffffff;
    }
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  iVar2 = (this->PageSizeBuckets).ArrayNum;
  uVar7 = iVar2 - 1;
  if ((int)uVar7 < iVar2) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar3 = (code *)swi(3);
    uVar6 = (*pcVar3)();
    return uVar6;
  }
  pTVar1 = (this->PageSizeBuckets).AllocatorInstance.InlineData + (int)uVar7;
  uVar4 = *(undefined8 *)(pTVar1->Pad + 8);
  param_1->AllocationMax = *(ulong64 *)pTVar1->Pad;
  param_1->PageSize = (int)uVar4;
  param_1->BucketMask = (int)((ulonglong)uVar4 >> 0x20);
  return uVar7;
}

// ReleasePage @ 145b30b40

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
VulkanRHI::FVulkanResourceHeap::ReleasePage
          (FVulkanResourceHeap *this,FVulkanSubresourceAllocator *param_1)

{
  uint uVar1;
  FMemoryManager *pFVar2;
  long64 lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FDeviceMemoryAllocation *local_res8;
  
  pFVar2 = this->Owner;
  if (param_1->bIsEvicting != false) {
    pFVar2->PendingEvictBytes = pFVar2->PendingEvictBytes - param_1->MemoryAllocation->Size;
  }
  AcquireSRWLockExclusive((PSRWLOCK)&pFVar2->AllBufferAllocationsLock);
  uVar1 = param_1->AllocatorIndex;
  if (uVar1 == 0xffffffff) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Index != 0xffffffff",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xb33,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = pFVar2->AllBufferAllocationsFreeListHead;
  uVar6 = 0;
  if ((int)uVar1 < (pFVar2->AllBufferAllocations).ArrayNum) {
    uVar6 = ~uVar1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  *(long64 *)((pFVar2->AllBufferAllocations).AllocatorInstance.Data + (longlong)(int)uVar1 * 8) =
       lVar3;
  pFVar2->AllBufferAllocationsFreeListHead = (ulonglong)uVar1;
  ReleaseSRWLockExclusive((PSRWLOCK)&pFVar2->AllBufferAllocationsLock);
  local_res8 = param_1->MemoryAllocation;
  param_1->MemoryAllocation = (FDeviceMemoryAllocation *)0x0;
  FDeviceMemoryManager::Free(&this->Owner->Device->DeviceMemoryManager,&local_res8);
  this->UsedMemory = this->UsedMemory - (ulonglong)param_1->MaxSize;
  FVulkanSubresourceAllocator::~FVulkanSubresourceAllocator(param_1);
  ::operator_delete(param_1,0xf0);
  return;
}

// SetDefragging @ 145b320b0

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
VulkanRHI::FVulkanResourceHeap::SetDefragging
          (FVulkanResourceHeap *this,FVulkanSubresourceAllocator *param_1)

{
  uchar uVar1;
  FVulkanSubresourceAllocator *pFVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *pTVar12;
  
  uVar1 = param_1->SubresourceAllocatorFlags;
  uVar10 = 0xffffffff;
  uVar9 = 0xffffffff;
  pTVar12 = this->ActivePages + param_1->BucketId;
  uVar8 = 0;
  iVar7 = pTVar12->ArrayNum;
  if (0 < iVar7) {
    lVar11 = 0;
    uVar10 = 0xffffffff;
    uVar9 = 0xffffffff;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar2 = *(FVulkanSubresourceAllocator **)((pTVar12->AllocatorInstance).Data + lVar11);
      if (uVar1 == param_1->SubresourceAllocatorFlags) {
        if (pFVar2 == param_1) {
          pFVar2->bIsDefragging = true;
          uVar10 = uVar8;
        }
        else {
          pFVar2->bIsDefragging = false;
          uVar9 = uVar8;
        }
      }
      iVar7 = pTVar12->ArrayNum;
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 8;
    } while ((int)uVar8 < iVar7);
    if (uVar10 != 0xffffffff) goto LAB_145b321ad;
  }
  bVar5 = ::FDebug::CheckVerifyFailedImpl2
                    ("CurrentIndex != -1",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                     ,0x6c0,L"");
  if (bVar5) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
LAB_145b321ad:
  if ((int)uVar10 < (int)uVar9) {
    uVar8 = 0;
    if ((int)uVar9 < pTVar12->ArrayNum) {
      uVar8 = ~uVar9 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar3 = *(undefined8 *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar9 * 8);
    uVar8 = 0;
    if ((int)uVar10 < pTVar12->ArrayNum) {
      uVar8 = ~uVar10 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(undefined8 *)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar10 * 8) = uVar3;
    uVar10 = 0;
    if ((int)uVar9 < pTVar12->ArrayNum) {
      uVar10 = ~uVar9 >> 0x1f;
    }
    if (uVar10 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *(FVulkanSubresourceAllocator **)((pTVar12->AllocatorInstance).Data + (longlong)(int)uVar9 * 8)
         = param_1;
  }
  return;
}

// TryRealloc @ 145b36d90

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
VulkanRHI::FVulkanResourceHeap::TryRealloc
          (FVulkanResourceHeap *this,FVulkanAllocation *param_1,FVulkanEvictable *param_2,
          EType param_3,uint param_4,uint param_5,EVulkanAllocationMetaType param_6)

{
  FVulkanDevice *pFVar1;
  FVulkanSubresourceAllocator *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uchar uVar9;
  longlong lVar10;
  FVulkanPageSizeBucket local_38;
  
  pFVar1 = this->Owner->Device;
  uVar5 = GetPageSizeBucket(this,&local_38,param_3,param_4,false);
  if (((pFVar1->DeviceMemoryManager).bHasUnifiedMemory == false) &&
     (param_6 == EVulkanAllocationMetaImageOther)) {
    uVar9 = '\x02';
  }
  else {
    uVar9 = '\0';
  }
  if ((local_38.AllocationMax < param_4) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Size <= MemoryBucket.AllocationMax",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x780,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar7 = this->ActivePages[uVar5].ArrayNum;
  uVar8 = 0;
  if (0 < iVar7) {
    lVar10 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < iVar7) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      this_00 = *(FVulkanSubresourceAllocator **)
                 (this->ActivePages[uVar5].AllocatorInstance.Data + lVar10);
      if (((this_00->bLocked == false) && (this_00->SubresourceAllocatorFlags == uVar9)) &&
         (bVar3 = FVulkanSubresourceAllocator::TryAllocate2
                            (this_00,param_1,param_2,param_4,param_5,param_6,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0x78a), bVar3)) {
        IncMetaStats(param_6,param_1->Size);
        return true;
      }
      iVar7 = this->ActivePages[uVar5].ArrayNum;
      uVar8 = uVar8 + 1;
      lVar10 = lVar10 + 8;
    } while ((int)uVar8 < iVar7);
  }
  return false;
}

