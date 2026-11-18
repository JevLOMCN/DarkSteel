// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FDeferredDeletionQueue2 @ 145b00060

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

FDeferredDeletionQueue2 * __thiscall
VulkanRHI::FDeferredDeletionQueue2::FDeferredDeletionQueue2
          (FDeferredDeletionQueue2 *this,FVulkanDevice *param_1)

{
  this->Device = param_1;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->CS,4000);
  (this->Entries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Entries).ArrayNum = 0;
  (this->Entries).ArrayMax = 0;
  return this;
}

// ~FDeferredDeletionQueue2 @ 145b04db0

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
VulkanRHI::FDeferredDeletionQueue2::~FDeferredDeletionQueue2(FDeferredDeletionQueue2 *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->Entries).ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Entries.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x11b6,L"There are %d entries remaining in the Deferred Deletion Queue!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>
            ((FEntry *)(this->Entries).AllocatorInstance.Data,(this->Entries).ArrayNum);
  pFVar1 = (this->Entries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b04e0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->CS);
  return;
}

// EnqueueDeviceAllocation @ 145b18440

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
VulkanRHI::FDeferredDeletionQueue2::EnqueueDeviceAllocation
          (FDeferredDeletionQueue2 *this,FDeviceMemoryAllocation *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  longlong lVar7;
  undefined4 local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  FDeviceMemoryAllocation *local_18;
  
  if (param_1 == (FDeviceMemoryAllocation *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("DeviceMemoryAllocation",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x11d1,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lpCriticalSection = &this->CS;
  local_48 = 0xe;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  uStack_44 = GVulkanRHIDeletionFrameNumber;
  uStack_40 = 0;
  local_18 = param_1;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar2 = (this->Entries).AllocatorInstance.Data;
    if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
       ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)(this->Entries).ArrayMax * 0x38))
    {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (this->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Entries).AllocatorInstance,piVar1);
    }
    (this->Entries).ArrayNum = iVar6 + 1;
    lVar7 = (longlong)iVar6 * 0x38;
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    *(ulonglong *)(pFVar3 + lVar7) = CONCAT44(uStack_44,local_48);
    *(undefined8 *)(pFVar3 + lVar7 + 8) = uStack_40;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10) = local_38;
    *(undefined8 *)(pFVar3 + lVar7 + 0x10 + 8) = uStack_30;
    pFVar2 = pFVar3 + lVar7 + 0x20;
    *(undefined4 *)pFVar2 = (undefined4)local_28;
    *(undefined4 *)(pFVar2 + 4) = local_28._4_4_;
    *(uint *)(pFVar2 + 8) = uStack_20;
    *(undefined4 *)(pFVar2 + 0xc) = uStack_1c;
    *(FDeviceMemoryAllocation **)(pFVar3 + lVar7 + 0x30) = local_18;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((uStack_20 & 0x3f000000) != 0 & uStack_20._3_1_ >> 6) != 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xebe,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// EnqueueGenericResource @ 145b18600

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
VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
          (FDeferredDeletionQueue2 *this,EType param_1,ulong64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  EType local_48;
  uint uStack_44;
  ulong64 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  lpCriticalSection = &this->CS;
  uStack_20 = 0;
  uStack_44 = GVulkanRHIDeletionFrameNumber;
  local_18 = 0;
  local_48 = param_1;
  uStack_40 = param_2;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar5 = (this->Entries).AllocatorInstance.Data;
  pFVar7 = pFVar5 + (longlong)(this->Entries).ArrayNum * 0x38;
  do {
    if (pFVar5 == pFVar7) {
LAB_145b186c5:
      pFVar5 = (this->Entries).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&local_48) &&
          ((FScriptContainerElement *)&local_48 < pFVar5 + (longlong)(this->Entries).ArrayMax * 0x38
          )) && (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar4 = (this->Entries).ArrayNum;
      piVar1 = &(this->Entries).ArrayMax;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x838,&(this->Entries).AllocatorInstance,piVar1);
      }
      (this->Entries).ArrayNum = iVar4 + 1;
      lVar6 = (longlong)iVar4 * 0x38;
      pFVar7 = (this->Entries).AllocatorInstance.Data;
      *(ulonglong *)(pFVar7 + lVar6) = CONCAT44(uStack_44,local_48);
      *(ulong64 *)(pFVar7 + lVar6 + 8) = uStack_40;
      *(undefined8 *)(pFVar7 + lVar6 + 0x10) = local_38;
      *(undefined8 *)(pFVar7 + lVar6 + 0x10 + 8) = uStack_30;
      pFVar5 = pFVar7 + lVar6 + 0x20;
      *(undefined4 *)pFVar5 = (undefined4)local_28;
      *(undefined4 *)(pFVar5 + 4) = local_28._4_4_;
      *(uint *)(pFVar5 + 8) = uStack_20;
      *(undefined4 *)(pFVar5 + 0xc) = uStack_1c;
      *(undefined8 *)(pFVar7 + lVar6 + 0x30) = local_18;
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      if ((((uStack_20 & 0x3f000000) != 0 & uStack_20._3_1_ >> 6) != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("!HasAllocation()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                             ,0xebe,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      return;
    }
    if ((*(ulong64 *)(pFVar5 + 8) == uStack_40) && (*(EType *)pFVar5 == local_48)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExistingEntry == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x11c8,
                         L"Attempt to double-delete resource, FDeferredDeletionQueue2::EType: %d, Handle: %llu"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      goto LAB_145b186c5;
    }
    pFVar5 = pFVar5 + 0x38;
  } while( true );
}

// EnqueueResourceAllocation @ 145b18800

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
VulkanRHI::FDeferredDeletionQueue2::EnqueueResourceAllocation
          (FDeferredDeletionQueue2 *this,FVulkanAllocation *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  undefined1 uVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  undefined4 local_48;
  uint uStack_44;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  
  uVar2 = param_1->field_0x1b;
  if ((param_1->Type != 0) && (param_1->bHasOwnership != '\0')) {
    local_48 = 0xd;
    param_1->field_0x1b = uVar2 & 0xbf;
    local_38 = (undefined4)param_1->VulkanHandle;
    uStack_34 = *(undefined4 *)((longlong)&param_1->VulkanHandle + 4);
    uStack_30 = param_1->HandleId;
    uStack_2c = param_1->Size;
    uStack_44 = GVulkanRHIDeletionFrameNumber;
    local_28 = param_1->Offset;
    uStack_24 = param_1->AllocationIndex;
    uStack_20._0_2_ = param_1->AllocatorIndex;
    uStack_20._2_1_ = param_1->MetaType;
    uStack_20._3_1_ = param_1->field_0x1b;
    uStack_1c = *(undefined4 *)&param_1->field_0x1c;
    uStack_40 = 0;
    lpCriticalSection = &this->CS;
    local_18 = 0;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pFVar3 = (this->Entries).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 < pFVar3 + (longlong)(this->Entries).ArrayMax * 0x38))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar7 = (this->Entries).ArrayNum;
    piVar1 = &(this->Entries).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x838,&(this->Entries).AllocatorInstance,piVar1);
    }
    (this->Entries).ArrayNum = iVar7 + 1;
    lVar8 = (longlong)iVar7 * 0x38;
    pFVar4 = (this->Entries).AllocatorInstance.Data;
    *(ulonglong *)(pFVar4 + lVar8) = CONCAT44(uStack_44,local_48);
    *(undefined8 *)(pFVar4 + lVar8 + 8) = uStack_40;
    *(ulonglong *)(pFVar4 + lVar8 + 0x10) = CONCAT44(uStack_34,local_38);
    *(ulonglong *)(pFVar4 + lVar8 + 0x10 + 8) = CONCAT44(uStack_2c,uStack_30);
    pFVar3 = pFVar4 + lVar8 + 0x20;
    *(uint *)pFVar3 = local_28;
    *(uint *)(pFVar3 + 4) = uStack_24;
    *(uint *)(pFVar3 + 8) = uStack_20;
    *(undefined4 *)(pFVar3 + 0xc) = uStack_1c;
    *(undefined8 *)(pFVar4 + lVar8 + 0x30) = local_18;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((param_1->Type != 0 & (byte)param_1->field_0x1b >> 6) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Allocation.HasAllocation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x11f4,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((((uStack_20 & 0x3f000000) != 0 & uStack_20._3_1_ >> 6) != 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("!HasAllocation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xebe,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ReleaseResources @ 145b30ca0

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
VulkanRHI::FDeferredDeletionQueue2::ReleaseResources(FDeferredDeletionQueue2 *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FVulkanDevice *pFVar4;
  code *pcVar5;
  ulong64 uVar6;
  undefined8 uVar7;
  ForAnyElementType FVar8;
  int iVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  FVulkanDynamicRHI *this_00;
  longlong lVar13;
  longlong lVar14;
  FEntry *pFVar15;
  TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_> local_a8;
  code *local_98 [5];
  undefined8 *local_70;
  TUniqueFunction<void___cdecl(FVulkanPayload_&)> local_68;
  
  lpCriticalSection = &this->CS;
  if (param_1) {
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    pTVar1 = &this->Entries;
    ReleaseResourcesImmediately(this,pTVar1);
    piVar2 = &(this->Entries).ArrayMax;
    pFVar15 = (FEntry *)(pTVar1->AllocatorInstance).Data;
    iVar3 = (this->Entries).ArrayNum;
    if ((this->Entries).ArrayMax < 0) {
      DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>(pFVar15,iVar3);
      (this->Entries).ArrayNum = 0;
      if (*piVar2 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x38,8,0,&pTVar1->AllocatorInstance,0,piVar2);
      }
                    /* WARNING: Could not recover jumptable at 0x000145b30d5e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
      return;
    }
    DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>(pFVar15,iVar3);
    (this->Entries).ArrayNum = 0;
                    /* WARNING: Could not recover jumptable at 0x000145b30d17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
  local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a8.ArrayNum = 0;
  local_a8.ArrayMax = 0;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->Entries;
  if (GVulkanNumFramesToWaitForResourceDelete == 0) {
    if (&local_a8 != pTVar1) {
      DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>
                ((FEntry *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
      if ((FEntry *)local_a8.AllocatorInstance.Data != (FEntry *)0x0) {
        FMemory::Free(local_a8.AllocatorInstance.Data);
      }
      local_a8.AllocatorInstance.Data = (pTVar1->AllocatorInstance).Data;
      (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      local_a8.ArrayNum = (this->Entries).ArrayNum;
      local_a8.ArrayMax = (this->Entries).ArrayMax;
      (this->Entries).ArrayNum = 0;
      (this->Entries).ArrayMax = 0;
    }
  }
  else {
    uVar11 = (this->Entries).ArrayNum / 2;
    if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
    }
    if (local_a8.ArrayMax < (int)uVar11) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar11,&local_a8.AllocatorInstance,local_a8.ArrayNum,&local_a8.ArrayMax);
    }
    uVar11 = (this->Entries).ArrayNum - 1;
    if (-1 < (int)uVar11) {
      lVar14 = (longlong)(int)uVar11 * 0x38;
      do {
        uVar12 = 0;
        if ((int)uVar11 < (this->Entries).ArrayNum) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar15 = (FEntry *)((pTVar1->AllocatorInstance).Data + lVar14);
        if (pFVar15->FrameNumber + GVulkanNumFramesToWaitForResourceDelete <
            GVulkanRHIDeletionFrameNumber) {
          if (((local_a8.AllocatorInstance.Data <= pFVar15) &&
              (pFVar15 < (FEntry *)
                         (local_a8.AllocatorInstance.Data + (longlong)local_a8.ArrayMax * 0x38))) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          if (local_a8.ArrayNum == local_a8.ArrayMax) {
            local_a8.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x838,&local_a8.AllocatorInstance,&local_a8.ArrayMax);
          }
          iVar3 = local_a8.ArrayNum + 1;
          uVar6 = pFVar15->Handle;
          lVar13 = (longlong)local_a8.ArrayNum * 0x38;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar13) = *(undefined8 *)pFVar15;
          *(ulong64 *)(local_a8.AllocatorInstance.Data + lVar13 + 8) = uVar6;
          uVar7 = *(undefined8 *)&(pFVar15->Allocation).HandleId;
          *(ulong64 *)(local_a8.AllocatorInstance.Data + lVar13 + 0x10) =
               (pFVar15->Allocation).VulkanHandle;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar13 + 0x10 + 8) = uVar7;
          uVar7 = *(undefined8 *)&(pFVar15->Allocation).AllocatorIndex;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar13 + 0x20) =
               *(undefined8 *)&(pFVar15->Allocation).Offset;
          *(undefined8 *)(local_a8.AllocatorInstance.Data + lVar13 + 0x20 + 8) = uVar7;
          *(FDeviceMemoryAllocation **)(local_a8.AllocatorInstance.Data + lVar13 + 0x30) =
               pFVar15->DeviceMemoryAllocation;
          uVar12 = 0;
          if ((int)uVar11 < (this->Entries).ArrayNum) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          local_a8.ArrayNum = iVar3;
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(pTVar1,uVar11);
        }
        lVar14 = lVar14 + -0x38;
        uVar11 = uVar11 - 1;
      } while (-1 < (int)uVar11);
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (local_a8.ArrayNum != 0) {
    this_00 = (FVulkanDynamicRHI *)(**(code **)(GDynamicRHI->_padding_ + 0x30))();
    iVar9 = local_a8.ArrayMax;
    iVar3 = local_a8.ArrayNum;
    FVar8.Data = local_a8.AllocatorInstance.Data;
    pFVar4 = this->Device;
    local_a8.ArrayNum = 0;
    local_a8.ArrayMax = 0;
    local_68._0_8_ = 0;
    local_68._40_8_ = 0;
    local_a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98[0] = (code *)0x0;
    local_70 = FMemory::Malloc(0x20,8);
    local_70[1] = pFVar4;
    local_70[2] = FVar8.Data;
    *local_70 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::`21'::<lambda_1>,1,1>
                 ::_vftable_;
    *(int *)(local_70 + 3) = iVar3;
    *(int *)((longlong)local_70 + 0x1c) = iVar9;
    if (local_70 != (undefined8 *)&DAT_fffffffffffffff8) {
      local_98[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`VulkanRHI::FDeferredDeletionQueue2::ReleaseResources'::__l21::<lambda_1>,void>
                    ::Call;
    }
    FVulkanDynamicRHI::EnqueueEndOfPipeTask
              (this_00,(TUniqueFunction<void___cdecl(void)> *)local_98,&local_68);
    DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>((FEntry *)0x0,0);
  }
  DestructItems<VulkanRHI::FDeferredDeletionQueue2::FEntry,int>
            ((FEntry *)local_a8.AllocatorInstance.Data,local_a8.ArrayNum);
  if ((FEntry *)local_a8.AllocatorInstance.Data != (FEntry *)0x0) {
    FMemory::Free(local_a8.AllocatorInstance.Data);
  }
  return;
}

// ReleaseResourcesImmediately @ 145b310c0

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
VulkanRHI::FDeferredDeletionQueue2::ReleaseResourcesImmediately
          (FDeferredDeletionQueue2 *this,
          TArray<VulkanRHI::FDeferredDeletionQueue2::FEntry,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  VkDevice_T *pVVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  undefined8 *puVar9;
  FNameEntryId FVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res10 [8];
  FLLMScope local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  FMemScope local_98;
  FName local_90;
  FDeviceMemoryAllocation *local_88;
  FName local_80;
  undefined8 local_78;
  uint uStack_70;
  uint uStack_6c;
  FVulkanAllocation local_68;
  
  iVar1 = param_1->ArrayNum;
  pFVar11 = (param_1->AllocatorInstance).Data;
  pVVar2 = this->Device->Device;
  pFVar12 = pFVar11 + (longlong)iVar1 * 0x38;
LAB_145b31101:
  if (param_1->ArrayNum != iVar1) {
    local_res10[0] = 0;
    `TCheckedPointerIterator<VulkanRHI::FDeferredDeletionQueue2::FEntry_const_,int,0>::operator!='::
    __l2::<lambda_1>::operator()(local_res10);
  }
  if (pFVar11 == pFVar12) {
    return;
  }
  switch(*(undefined4 *)pFVar11) {
  case 0:
    (*VulkanDynamicAPI::vkDestroyRenderPass)
              (pVVar2,*(VkRenderPass_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 1:
    (*VulkanDynamicAPI::vkDestroyBuffer)(pVVar2,*(VkBuffer_T **)(pFVar11 + 8),&GAllocationCallbacks)
    ;
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 2:
    (*VulkanDynamicAPI::vkDestroyBufferView)
              (pVVar2,*(VkBufferView_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 3:
    (*VulkanDynamicAPI::vkDestroyImage)(pVVar2,*(VkImage_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 4:
    (*VulkanDynamicAPI::vkDestroyImageView)
              (pVVar2,*(VkImageView_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 5:
    FVar8 = StatPtr_STAT_VulkanNumPSOs;
    if (StatPtr_STAT_VulkanNumPSOs == (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)0x0) {
      pFVar7 = ::FName::FName(&local_80,"STAT_VulkanNumPSOs");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_VulkanNumPSOs>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanNumPSOs,*pFVar7,
                         L"Num PSOs","STATGROUP_VulkanPSO","STATCAT_Advanced",L"Vulkan PSO",true,
                         false,ST_int64,false,false,MCR_Invalid);
    }
    FVar3 = *(FName *)FVar8;
    FVar10 = FVar3.ComparisonIndex.Value;
    uVar6 = FVar3.Number;
    local_res20 = FVar10.Value;
    uStackX_24 = uVar6;
    if (((FVar3 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this_00 = TlsGetValue(FThreadStats::TlsSlot);
      if (this_00 == (FThreadStats *)0x0) {
        this_01 = FThreadStatsPool::Get();
        this_00 = FThreadStatsPool::GetFromPool(this_01);
      }
      uStack_6c = uVar6 & 0xffffbfff | 0xb000;
      local_78 = 1;
      local_90 = FVar3;
      uStack_70 = FVar10.Value;
      FLLMScope::FLLMScope(local_res18,Stats,false,None,Default,true);
      FMemScope::FMemScope(&local_98,Stats,true);
      this_00->MemoryMessageScope = this_00->MemoryMessageScope + 1;
      puVar9 = operator_new<FStatMessage,65536,TSizedDefaultAllocator<32>_>
                         (0x10,&(this_00->Packet).StatMessages);
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = local_78;
        puVar9[1] = CONCAT44(uStack_6c,uStack_70);
      }
      this_00->MemoryMessageScope = this_00->MemoryMessageScope + -1;
      FMemScope::~FMemScope(&local_98);
      FLLMScope::~FLLMScope(local_res18);
      FStatsTrace::Add(&local_90,-1);
      if (this_00->ScopeCount == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
    (*VulkanDynamicAPI::vkDestroyPipeline)
              (pVVar2,*(VkPipeline_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 6:
    (*VulkanDynamicAPI::vkDestroyPipelineLayout)
              (pVVar2,*(VkPipelineLayout_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 7:
    (*VulkanDynamicAPI::vkDestroyFramebuffer)
              (pVVar2,*(VkFramebuffer_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 8:
    (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
              (pVVar2,*(VkDescriptorSetLayout_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 9:
    (*VulkanDynamicAPI::vkDestroySampler)
              (pVVar2,*(VkSampler_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 10:
    (*VulkanDynamicAPI::vkDestroySemaphore)
              (pVVar2,*(VkSemaphore_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 0xb:
    (*VulkanDynamicAPI::vkDestroyShaderModule)
              (pVVar2,*(VkShaderModule_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 0xc:
    (*VulkanDynamicAPI::vkDestroyEvent)(pVVar2,*(VkEvent_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 0xd:
    local_68.VulkanHandle = *(ulong64 *)(pFVar11 + 0x10);
    local_68._8_8_ = *(undefined8 *)(pFVar11 + 0x18);
    local_68._16_8_ = *(undefined8 *)(pFVar11 + 0x20);
    local_68._24_8_ = *(undefined8 *)(pFVar11 + 0x28);
    if (((*(ulonglong *)(pFVar11 + 0x28) >> 0x18 & 0x40) != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bHasOwnership",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0xeff,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_68.bHasOwnership = '\x01';
    FMemoryManager::FreeVulkanAllocation
              (&this->Device->MemoryManager,&local_68,EVulkanFreeFlag_DontDefer);
    if ((local_68.Type != 0) && (local_68.bHasOwnership != 0)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasAllocation()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0xebe,L"");
      if (bVar5) {
code_r0x000145b3160e:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar11 = pFVar11 + 0x38;
      goto LAB_145b31101;
    }
    break;
  case 0xe:
    if ((*(longlong *)(pFVar11 + 0x30) == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Entry.DeviceMemoryAllocation",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                           ,0x1247,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_88 = *(FDeviceMemoryAllocation **)(pFVar11 + 0x30);
    FDeviceMemoryManager::Free(&this->Device->DeviceMemoryManager,&local_88);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  default:
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                       ,0x125a,L"");
    if (bVar5) goto code_r0x000145b3160e;
    break;
  case 0x10:
    (*VulkanDynamicAPI::vkDestroyAccelerationStructureKHR)
              (pVVar2,*(VkAccelerationStructureKHR_T **)(pFVar11 + 8),&GAllocationCallbacks);
    pFVar11 = pFVar11 + 0x38;
    goto LAB_145b31101;
  case 0x11:
    goto switchD_145b31149_caseD_11;
  }
  pFVar11 = pFVar11 + 0x38;
  goto LAB_145b31101;
switchD_145b31149_caseD_11:
  if ((this->Device->BindlessDescriptorManager->bIsSupported == false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Device.SupportsBindless()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanMemory.cpp"
                         ,0x1253,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FVulkanBindlessDescriptorManager::FreeDescriptor
            (this->Device->BindlessDescriptorManager,*(FRHIDescriptorHandle *)(pFVar11 + 8));
  pFVar11 = pFVar11 + 0x38;
  goto LAB_145b31101;
}

