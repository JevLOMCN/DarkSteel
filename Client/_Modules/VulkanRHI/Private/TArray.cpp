// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 48

// operator=<FRHITransitionInfo_const_,int> @ 145ad1d40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_>::operator=<FRHITransitionInfo_const_,int>
          (TArray<FRHITransitionInfo,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FRHITransitionInfo_const_,int> *param_1)

{
  int *piVar1;
  int iVar2;
  FRHITransitionInfo *pFVar3;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  pFVar3 = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x30,8,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  ConstructItems<FRHITransitionInfo,FRHITransitionInfo,int>
            ((this->AllocatorInstance).Data,pFVar3,iVar2);
  return this;
}

// Append<TArrayView<FVulkanSemaphore_*,int>_&> @ 145ad1dd0

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
TArray<FVulkanSemaphore_*,TSizedDefaultAllocator<32>_>::Append<TArrayView<FVulkanSemaphore_*,int>_&>
          (TArray<FVulkanSemaphore_*,TSizedDefaultAllocator<32>_> *this,
          TArrayView<FVulkanSemaphore_*,int> *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  iVar1 = param_1->ArrayNum;
  if (iVar1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(InCount >= 0) && ((sizeof(InCount) < sizeof(SizeType)) || (InCount <= static_cast<decltype(InCount)>(TNumericLimits<SizeType>::Max())))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x9a9,L"Invalid range size: %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (iVar1 == 0) {
    return;
  }
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memcpy((this->AllocatorInstance).Data + (longlong)iVar4 * 8,param_1->DataPtr,(longlong)iVar1 << 3)
  ;
  return;
}

// TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> @ 145ada6d0

TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>::
TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>
          (TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> @ 145adbe40

void __thiscall
TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>::
~TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>
          (TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddUniqueImpl<TRefCountPtr<FVulkanSyncPoint>_> @ 145af7740

int __thiscall
TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TRefCountPtr<FVulkanSyncPoint>_>
          (TArray<TRefCountPtr<FVulkanSyncPoint>,TSizedDefaultAllocator<32>_> *this,
          TRefCountPtr<FVulkanSyncPoint> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FVulkanSyncPoint **)&pFVar5->field_0x0 == param_1->Reference) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar4 * 8;
  *(undefined8 *)pFVar1 = 0;
  *(FVulkanSyncPoint **)pFVar1 = param_1->Reference;
  param_1->Reference = (FVulkanSyncPoint *)0x0;
  return iVar4;
}

// CopyToEmpty<char_const_*,int> @ 145af7850

void __thiscall
TArray<char_const_*,TSizedDefaultAllocator<32>_>::CopyToEmpty<char_const_*,int>
          (TArray<char_const_*,TSizedDefaultAllocator<32>_> *this,char **param_1,int param_2,
          int param_3)

{
  this->ArrayNum = param_2;
  if ((param_2 == 0) && (param_3 == 0)) {
    this->ArrayMax = 0;
    return;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,param_2,param_3,&this->AllocatorInstance,param_2,&this->ArrayMax);
  if (param_2 != 0) {
    memcpy((this->AllocatorInstance).Data,param_1,(longlong)param_2 << 3);
  }
  return;
}

// TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> @ 145b00000

TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>::
TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
          (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> @ 145b04740

void __thiscall
TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>::
~TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_>
          (TArray<VulkanRHI::FVulkanSubresourceAllocator_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddZeroed @ 145b0aab0

int __thiscall
TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<VkExtensionProperties,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x104,4,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 0x104,0,(longlong)param_1 * 0x104);
  return iVar1;
}

// Insert @ 145b264f0

int __thiscall
TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::Insert
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *this,FRange *param_1,int param_2)

{
  FRange *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (FRange *)(this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + this->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&this->AllocatorInstance,&this->ArrayMax);
  }
  pFVar5 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  pFVar5 = pFVar5 + (longlong)param_2 * 8;
  memmove(pFVar5 + 8,pFVar5,(longlong)(iVar4 - param_2) << 3);
  *(FRange *)((this->AllocatorInstance).Data + (longlong)param_2 * 8) = *param_1;
  return param_2;
}

// RemoveAt @ 145b319c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_>::RemoveAt
          (TArray<VulkanRHI::FRange,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 8;
  iVar4 = this->ArrayNum + ~param_1;
  if (iVar4 != 0) {
    memmove(_Dst,_Dst + 8,(longlong)iVar4 << 3);
  }
  iVar4 = this->ArrayNum + -1;
  this->ArrayNum = iVar4;
  if (param_2 == Default) {
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,&this->AllocatorInstance,iVar4,&this->ArrayMax);
  }
  return;
}

// RemoveAtImpl @ 145b31a90

void __thiscall
TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FLayerWithExtensions,TSizedDefaultAllocator<32>_> *this,int param_1,int param_2)

{
  int iVar1;
  FLayerWithExtensions *_Dst;
  
  _Dst = (FLayerWithExtensions *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x218);
  DestructItems<FLayerWithExtensions,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x218);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145b31b10

void __thiscall
TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FVulkanDescriptorSetsLayoutInfo::FSetLayout,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FSetLayout *_Dst;
  int iVar1;
  
  _Dst = (FSetLayout *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x18);
  DestructItems<FVulkanDescriptorSetsLayoutInfo::FSetLayout,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x18);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtImpl @ 145b31b90

void __thiscall
TArray<VulkanRHI::FMemoryManager::FUBPendingFree,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<VulkanRHI::FMemoryManager::FUBPendingFree,TSizedDefaultAllocator<32>_> *this,
          int param_1,int param_2)

{
  FUBPendingFree *_Dst;
  int iVar1;
  
  _Dst = (FUBPendingFree *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x28);
  DestructItems<VulkanRHI::FMemoryManager::FUBPendingFree,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x28);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// RemoveAtSwapImpl @ 145b31c10

void __thiscall
TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_>::RemoveAtSwapImpl
          (TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  FScriptContainerElement FVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *_Dst;
  
  pFVar2 = (this->AllocatorInstance).Data;
  _Dst = pFVar2 + (longlong)param_1 * 0x38;
  FVar1 = _Dst[0x2b];
  if ((((byte)FVar1 & 0x3f) != 0 & (byte)FVar1 >> 6) != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HasAllocation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0xebe,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = ~param_1 + this->ArrayNum;
  if (1 < iVar5) {
    iVar5 = 1;
  }
  if (iVar5 != 0) {
    memmove(_Dst,pFVar2 + (longlong)(this->ArrayNum - iVar5) * 0x38,(longlong)iVar5 * 0x38);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSwap @ 145b31cd0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<VulkanRHI::FDeviceMemoryAllocation_*,TSizedDefaultAllocator<32>_>::RemoveSwap
          (TArray<VulkanRHI::FDeviceMemoryAllocation_*,TSizedDefaultAllocator<32>_> *this,
          FDeviceMemoryAllocation **param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if ((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar5 = (*pcVar2)();
      return iVar5;
    }
  }
  iVar5 = this->ArrayNum;
  uVar9 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    bVar3 = false;
    iVar10 = iVar5;
    do {
      uVar8 = 0;
      if ((int)uVar9 < iVar10) {
        uVar8 = ~uVar9 >> 0x1f;
      }
      if (uVar8 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar5 = (*pcVar2)();
          return iVar5;
        }
      }
      uVar8 = uVar9;
      if (*(FDeviceMemoryAllocation **)((this->AllocatorInstance).Data + lVar7) == *param_1) {
        uVar8 = uVar9 - 1;
        lVar7 = lVar7 + -8;
        bVar3 = true;
        uVar6 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar6 = ~uVar9 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar5 = (*pcVar2)();
            return iVar5;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar10 = ~uVar9 + this->ArrayNum;
        if (1 < iVar10) {
          iVar10 = 1;
        }
        if (iVar10 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar10) * 8
                  ,(longlong)iVar10 << 3);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      iVar10 = this->ArrayNum;
      uVar9 = uVar8 + 1;
      lVar7 = lVar7 + 8;
    } while ((int)uVar9 < iVar10);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,&this->AllocatorInstance,iVar10,&this->ArrayMax);
    }
  }
  return iVar5 - this->ArrayNum;
}

// SetNum @ 145b323f0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_>::SetNum
          (TArray<VulkanRHI::FResourceHeapStats,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    DefaultConstructItems<VulkanRHI::FResourceHeapStats,int>
              ((this->AllocatorInstance).Data + (longlong)iVar4 * 0x48,param_1 - iVar5);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x48;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x48,(longlong)iVar5 * 0x48);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x48,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145b32540

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<unsigned_int> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<unsigned_int> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (4,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<unsigned_int>)0x0) {
      this = (TArray<unsigned_int,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 4),0,(longlong)(param_1 - iVar6) << 2);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<unsigned_int>)this;
        if (FVar2 != (ForElementType<unsigned_int>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 4);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 4),(longlong)iVar6 << 2);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                    (4,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<FVulkanUniformBuffer_const_*_const_&> @ 145b3a950

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
TArray<FVulkanUniformBuffer_const_*,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<FVulkanUniformBuffer_const_*_const_&>
          (TArray<FVulkanUniformBuffer_const_*,TSizedDefaultAllocator<32>_> *this,
          FVulkanUniformBuffer **param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FVulkanUniformBuffer **)pFVar5 == *param_1) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  pFVar1 = (this->AllocatorInstance).Data;
  this->ArrayNum = iVar4 + 1;
  *(FVulkanUniformBuffer **)(pFVar1 + (longlong)iVar4 * 8) = *param_1;
  return iVar4;
}

// AddUniqueImpl<TRefCountPtr<FRHIUniformBuffer>_> @ 145b3aa50

int __thiscall
TArray<TRefCountPtr<FRHIUniformBuffer>,TSizedDefaultAllocator<32>_>::
AddUniqueImpl<TRefCountPtr<FRHIUniformBuffer>_>
          (TArray<TRefCountPtr<FRHIUniformBuffer>,TSizedDefaultAllocator<32>_> *this,
          TRefCountPtr<FRHIUniformBuffer> *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar5 = pFVar1;
    do {
      if (*(FRHIUniformBuffer **)&pFVar5->field_0x0 == param_1->Reference) {
        iVar4 = (int)((longlong)pFVar5 - (longlong)pFVar1 >> 3);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pFVar5 = pFVar5 + 8;
    } while (pFVar5 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  if (((pFVar1 <= param_1) && (param_1 < pFVar1 + (longlong)this->ArrayMax * 8)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  iVar4 = this->ArrayNum;
  if (iVar4 == this->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->AllocatorInstance,&this->ArrayMax);
    this->ArrayNum = iVar4;
  }
  this->ArrayNum = iVar4 + 1;
  pFVar1 = (this->AllocatorInstance).Data + (longlong)iVar4 * 8;
  *(undefined8 *)pFVar1 = 0;
  *(FRHIUniformBuffer **)pFVar1 = param_1->Reference;
  param_1->Reference = (FRHIUniformBuffer *)0x0;
  return iVar4;
}

// TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> @ 145b43bb0

TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> * __thiscall
TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>::
TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>
          (TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> @ 145b43bd0

TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> * __thiscall
TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>::
TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>
          (TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> *this)

{
  (this->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this->ArrayNum = 0;
  this->ArrayMax = 0;
  return this;
}

// ~TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> @ 145b4c120

void __thiscall
TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>::
~TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_>
          (TArray<FVulkanCommandBufferPool_*,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// ~TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> @ 145b4c140

void __thiscall
TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>::
~TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>
          (TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// AddZeroed @ 145b56e60

int __thiscall
TArray<unsigned___int64,TSizedDefaultAllocator<32>_>::AddZeroed
          (TArray<unsigned___int64,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  
  iVar1 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,param_1,&this->AllocatorInstance,&this->ArrayNum,&this->ArrayMax);
  memset((this->AllocatorInstance).Data + (longlong)iVar1 * 8,0,(longlong)param_1 << 3);
  return iVar1;
}

// Empty @ 145b65750

void __thiscall
TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentDesc,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b657a0

void __thiscall
TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGfxPipelineDesc::FRenderTargets::FAttachmentRef,TSizedDefaultAllocator<32>_>
           *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b657f0

void __thiscall
TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b65840

void __thiscall
TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b65890

void __thiscall
TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b658e0

void __thiscall
TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145b65930

void __thiscall
TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
::Empty(TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        *this,int param_1)

{
  if (-1 < param_1) {
    DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
              ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
               (this->AllocatorInstance).Data,this->ArrayNum);
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtImpl @ 145b78e50

void __thiscall
TArray<FRHIBreadcrumbAllocatorArray,TSizedDefaultAllocator<32>_>::RemoveAtImpl
          (TArray<FRHIBreadcrumbAllocatorArray,TSizedDefaultAllocator<32>_> *this,int param_1,
          int param_2)

{
  int iVar1;
  FRHIBreadcrumbAllocatorArray *_Dst;
  
  _Dst = (FRHIBreadcrumbAllocatorArray *)((this->AllocatorInstance).Data + (longlong)param_1 * 0x30)
  ;
  DestructItems<FRHIBreadcrumbAllocatorArray,int>(_Dst,param_2);
  iVar1 = (this->ArrayNum - param_1) - param_2;
  if (iVar1 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar1 * 0x30);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNumZeroed @ 145b7b8d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x28,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x28,0,
           (longlong)(param_1 - iVar5) * 0x28);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x28;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x28,(longlong)iVar5 * 0x28);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x28,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145b7ba30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  ForElementType<VkRect2D> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  void *_Dst;
  int iVar6;
  ForElementType<VkRect2D> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
                      (0x10,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<VkRect2D>)0x0) {
      this = (TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)iVar5 * 0x10 + (longlong)this),0,(longlong)(param_1 - iVar6) << 4);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<VkRect2D>)this;
        if (FVar2 != (ForElementType<VkRect2D>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)param_1 * 0x10 + (longlong)FVar7);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)(int)uVar8 * 0x10 + (longlong)_Dst),(longlong)iVar6 << 4);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkRect2D>_>
                    (0x10,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// SetNumZeroed @ 145b7bba0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::SetNumZeroed
          (TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<VkViewport> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<VkViewport> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                      (0x18,4,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<VkViewport>)0x0) {
      this = (TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *)FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 0x18),0,(longlong)(param_1 - iVar6) * 0x18);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<VkViewport>)this;
        if (FVar2 != (ForElementType<VkViewport>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 0x18);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 0x18),(longlong)iVar6 * 0x18
                 );
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
                    (0x18,4,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// AddUniqueImpl<enum_VkFormat_const_&> @ 145b87980

/* WARNING: Enum "VkFormat": Some values do not have unique names */

int __thiscall
TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<enum_VkFormat_const_&>(void *this,VkFormat *param_1)

{
  VkFormat *pVVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  VkFormat *pVVar5;
  VkFormat *pVVar6;
  
  pVVar1 = *(VkFormat **)((longlong)this + 8);
  pVVar6 = this;
  if (pVVar1 != (VkFormat *)0x0) {
    pVVar6 = pVVar1;
  }
  if (pVVar6 != pVVar6 + *(int *)((longlong)this + 0x10)) {
    pVVar5 = pVVar6;
    do {
      if (*pVVar5 == *param_1) {
        iVar4 = (int)((longlong)pVVar5 - (longlong)pVVar6 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pVVar5 = pVVar5 + 1;
    } while (pVVar5 != pVVar6 + *(int *)((longlong)this + 0x10));
  }
  pVVar6 = this;
  if (pVVar1 != (VkFormat *)0x0) {
    pVVar6 = pVVar1;
  }
  if (pVVar6 <= param_1) {
    pVVar6 = this;
    if (pVVar1 != (VkFormat *)0x0) {
      pVVar6 = pVVar1;
    }
    if ((param_1 < pVVar6 + *(int *)((longlong)this + 0x14)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = *(int *)((longlong)this + 0x10);
  if (iVar4 == *(int *)((longlong)this + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_>
                      (0x404,this,(int *)((longlong)this + 0x14));
  }
  *(int *)((longlong)this + 0x10) = iVar4 + 1;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    this = *(void **)((longlong)this + 8);
  }
  *(VkFormat *)((longlong)this + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// AddUniqueImpl<enum_VkFormat> @ 145b87a90

/* WARNING: Enum "VkFormat": Some values do not have unique names */

int __thiscall
TArray<enum_VkFormat,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
AddUniqueImpl<enum_VkFormat>(void *this,VkFormat *param_1)

{
  VkFormat *pVVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  VkFormat *pVVar5;
  VkFormat *pVVar6;
  
  pVVar1 = *(VkFormat **)((longlong)this + 8);
  pVVar6 = this;
  if (pVVar1 != (VkFormat *)0x0) {
    pVVar6 = pVVar1;
  }
  if (pVVar6 != pVVar6 + *(int *)((longlong)this + 0x10)) {
    pVVar5 = pVVar6;
    do {
      if (*pVVar5 == *param_1) {
        iVar4 = (int)((longlong)pVVar5 - (longlong)pVVar6 >> 2);
        if (iVar4 != -1) {
          return iVar4;
        }
        break;
      }
      pVVar5 = pVVar5 + 1;
    } while (pVVar5 != pVVar6 + *(int *)((longlong)this + 0x10));
  }
  pVVar6 = this;
  if (pVVar1 != (VkFormat *)0x0) {
    pVVar6 = pVVar1;
  }
  if (pVVar6 <= param_1) {
    pVVar6 = this;
    if (pVVar1 != (VkFormat *)0x0) {
      pVVar6 = pVVar1;
    }
    if ((param_1 < pVVar6 + *(int *)((longlong)this + 0x14)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar3)) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = *(int *)((longlong)this + 0x10);
  if (iVar4 == *(int *)((longlong)this + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkFormat>_>
                      (0x404,this,(int *)((longlong)this + 0x14));
  }
  *(int *)((longlong)this + 0x10) = iVar4 + 1;
  if (*(void **)((longlong)this + 8) != (void *)0x0) {
    this = *(void **)((longlong)this + 8);
  }
  *(VkFormat *)((longlong)this + (longlong)iVar4 * 4) = *param_1;
  return iVar4;
}

// Empty @ 145ba7480

void __thiscall
TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FVulkanShaderHeader::FBindingInfo,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145ba74d0

void __thiscall
TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FVulkanShaderHeader::FGlobalSamplerInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145ba7520

void __thiscall
TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FVulkanShaderHeader::FInputAttachmentInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,1,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// Empty @ 145ba7570

void __thiscall
TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_>::Empty
          (TArray<FVulkanShaderHeader::FUniformBufferInfo,TSizedDefaultAllocator<32>_> *this,
          int param_1)

{
  if (-1 < param_1) {
    this->ArrayNum = 0;
    if (this->ArrayMax != param_1) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,param_1,&this->AllocatorInstance,0,&this->ArrayMax);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
}

// RemoveAtSwapImpl @ 145bbb8b0

void __thiscall
TArray<FRHILockTracker::FTextureLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
::RemoveAtSwapImpl(TArray<FRHILockTracker::FTextureLockParams,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
                   *this,int param_1)

{
  ForElementType<FRHILockTracker::FTextureLockParams> FVar1;
  int iVar2;
  ForElementType<FRHILockTracker::FTextureLockParams> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<FRHILockTracker::FTextureLockParams>)this;
  if (FVar1 != (ForElementType<FRHILockTracker::FTextureLockParams>)0x0) {
    FVar3 = FVar1;
  }
  iVar2 = ~param_1 + this->ArrayNum;
  if (1 < iVar2) {
    iVar2 = 1;
  }
  if (iVar2 != 0) {
    memmove((void *)((longlong)param_1 * 0x30 + (longlong)FVar3),
            (void *)((longlong)(this->ArrayNum - iVar2) * 0x30 + (longlong)FVar3),
            (longlong)iVar2 * 0x30);
  }
  this->ArrayNum = this->ArrayNum + -1;
  return;
}

// RemoveSingleSwap @ 145bbb930

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
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
TArray<FVulkanFence_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap
          (TArray<FVulkanFence_*,TSizedDefaultAllocator<32>_> *this,FVulkanFence **param_1,
          EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  
  pFVar1 = (this->AllocatorInstance).Data;
  if (pFVar1 != pFVar1 + (longlong)this->ArrayNum * 8) {
    pFVar7 = pFVar1;
    do {
      if (*(FVulkanFence **)pFVar7 == *param_1) {
        uVar6 = (uint)((longlong)pFVar7 - (longlong)pFVar1 >> 3);
        if (uVar6 == 0xffffffff) {
          return 0;
        }
        uVar5 = 0;
        if ((int)(uVar6 + 1) <= this->ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar3)) {
          pcVar2 = (code *)swi(3);
          iVar4 = (*pcVar2)();
          return iVar4;
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar4 = this->ArrayNum + ~uVar6;
        if (1 < iVar4) {
          iVar4 = 1;
        }
        if (iVar4 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar6 * 8,pFVar1 + (longlong)(this->ArrayNum - iVar4) * 8,
                  (longlong)iVar4 << 3);
        }
        iVar4 = this->ArrayNum + -1;
        this->ArrayNum = iVar4;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&this->AllocatorInstance,iVar4,&this->ArrayMax);
        }
        return 1;
      }
      pFVar7 = pFVar7 + 8;
    } while (pFVar7 != pFVar1 + (longlong)this->ArrayNum * 8);
  }
  return 0;
}

// SetNumZeroed @ 145bbd2d0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<VkDeviceFaultAddressInfoEXT,TSizedDefaultAllocator<32>_>::SetNumZeroed
          (TArray<VkDeviceFaultAddressInfoEXT,TSizedDefaultAllocator<32>_> *this,int param_1,
          EAllowShrinking param_2)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  piVar1 = &this->ArrayNum;
  iVar5 = *piVar1;
  if (iVar5 < param_1) {
    iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,param_1 - iVar5,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    memset((this->AllocatorInstance).Data + (longlong)iVar4 * 0x18,0,
           (longlong)(param_1 - iVar5) * 0x18);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar5) {
      uVar6 = iVar5 - param_1;
      if (((int)(uVar6 | param_1) < 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (uVar6 != 0) {
        _Dst = (this->AllocatorInstance).Data + (longlong)param_1 * 0x18;
        iVar5 = (*piVar1 - uVar6) - param_1;
        if (iVar5 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar6 * 0x18,(longlong)iVar5 * 0x18);
        }
        iVar5 = *piVar1;
        *piVar1 = iVar5 - uVar6;
        if (param_2 == Default) {
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,&this->AllocatorInstance,iVar5 - uVar6,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

// operator=<VkViewport,int> @ 145bc73b0

TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> * __thiscall
TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>::
operator=<VkViewport,int>
          (TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *this,
          TArrayView<VkViewport,int> *param_1)

{
  int *piVar1;
  int iVar2;
  VkViewport *_Src;
  ForElementType<VkViewport> FVar3;
  ForElementType<VkViewport> _Dst;
  
  iVar2 = param_1->ArrayNum;
  piVar1 = &this->ArrayMax;
  _Src = param_1->DataPtr;
  this->ArrayNum = iVar2;
  if ((iVar2 == 0) && (*piVar1 == 0)) {
    *piVar1 = 2;
    return this;
  }
  UE::Core::Private::
  ReallocForCopy<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<VkViewport>_>
            (0x18,4,iVar2,*piVar1,&this->AllocatorInstance,iVar2,piVar1);
  FVar3 = (this->AllocatorInstance).SecondaryData;
  _Dst = (ForElementType<VkViewport>)this;
  if (FVar3 != (ForElementType<VkViewport>)0x0) {
    _Dst = FVar3;
  }
  if (iVar2 != 0) {
    memcpy((void *)_Dst,_Src,(longlong)iVar2 * 0x18);
  }
  return this;
}

// RemoveAtImpl @ 145bd5200

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
TArray<TRefCountPtr<FVulkanTexture>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
RemoveAtImpl(TArray<TRefCountPtr<FVulkanTexture>,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
             *this,int param_1,int param_2)

{
  TRefCountPtr<FVulkanTexture> *_Dst;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar1;
  int iVar2;
  ForElementType<TRefCountPtr<FVulkanTexture>_> FVar3;
  
  FVar1 = (this->AllocatorInstance).SecondaryData;
  FVar3 = (ForElementType<TRefCountPtr<FVulkanTexture>_>)this;
  if (FVar1 != (ForElementType<TRefCountPtr<FVulkanTexture>_>)0x0) {
    FVar3 = FVar1;
  }
  _Dst = (TRefCountPtr<FVulkanTexture> *)((longlong)FVar3 + (longlong)param_1 * 8);
  DestructItems<TRefCountPtr<FVulkanTexture>,int>(_Dst,param_2);
  iVar2 = (this->ArrayNum - param_1) - param_2;
  if (iVar2 != 0) {
    memmove(_Dst,_Dst + param_2,(longlong)iVar2 << 3);
  }
  this->ArrayNum = this->ArrayNum - param_2;
  return;
}

// SetNum @ 145bd59b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
TArray<FVulkanSemaphore_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::SetNum
          (TArray<FVulkanSemaphore_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *this
          ,int param_1,EAllowShrinking param_2)

{
  int *piVar1;
  void *_Dst;
  ForElementType<FVulkanSemaphore_*> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  ForElementType<FVulkanSemaphore_*> FVar7;
  uint uVar8;
  
  piVar1 = &this->ArrayNum;
  iVar6 = *piVar1;
  if (iVar6 < param_1) {
    iVar5 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_>
                      (8,8,param_1 - iVar6,&this->AllocatorInstance,piVar1,&this->ArrayMax);
    FVar2 = (this->AllocatorInstance).SecondaryData;
    if (FVar2 != (ForElementType<FVulkanSemaphore_*>)0x0) {
      this = (TArray<FVulkanSemaphore_*,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
             FVar2;
    }
    memset((void *)((longlong)this + (longlong)iVar5 * 8),0,(longlong)(param_1 - iVar6) << 3);
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar6) {
      uVar8 = iVar6 - param_1;
      if (((int)(uVar8 | param_1) < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar8 != 0) {
        FVar2 = (this->AllocatorInstance).SecondaryData;
        FVar7 = (ForElementType<FVulkanSemaphore_*>)this;
        if (FVar2 != (ForElementType<FVulkanSemaphore_*>)0x0) {
          FVar7 = FVar2;
        }
        _Dst = (void *)((longlong)FVar7 + (longlong)param_1 * 8);
        iVar6 = (*piVar1 - uVar8) - param_1;
        if (iVar6 != 0) {
          memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar8 * 8),(longlong)iVar6 << 3);
        }
        iVar6 = *piVar1;
        *piVar1 = iVar6 - uVar8;
        if (param_2 == Default) {
          UE::Core::Private::
          ReallocShrink<2,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>::ForElementType<FVulkanSemaphore_*>_>
                    (8,8,&this->AllocatorInstance,iVar6 - uVar8,&this->ArrayMax);
        }
      }
    }
  }
  return;
}

