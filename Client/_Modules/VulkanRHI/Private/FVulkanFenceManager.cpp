// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 11

// ~FVulkanFenceManager @ 145b95800

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

void __thiscall FVulkanFenceManager::~FVulkanFenceManager(FVulkanFenceManager *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((this->UsedFences).ArrayNum != 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1090762521696010267>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                       ,0x1b,"UsedFences.Num() == 0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->UsedFences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeFences).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b95861. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->FenceLock);
  return;
}

// AllocateFence @ 145b9ef70

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

FVulkanFence * __thiscall FVulkanFenceManager::AllocateFence(FVulkanFenceManager *this,bool param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FVulkanDevice *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  VkResult VVar8;
  FVulkanFence *pFVar9;
  FVulkanFence *local_38;
  FVulkanFence *local_30;
  VkFenceCreateInfo local_28;
  
  lpCriticalSection = &this->FenceLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  iVar7 = (this->FreeFences).ArrayNum;
  if (iVar7 == 0) {
    pFVar9 = ::operator_new(0x18);
    if (pFVar9 == (FVulkanFence *)0x0) {
      pFVar9 = (FVulkanFence *)0x0;
    }
    else {
      pFVar4 = this->Device;
      pFVar9->Owner = this;
      pFVar9->State = (uint)param_1;
      local_28.sType = VK_STRUCTURE_TYPE_FENCE_CREATE_INFO;
      local_28._4_8_ = 0;
      local_28._20_4_ = 0;
      local_28._12_8_ = (ulonglong)param_1 << 0x20;
      VVar8 = (*VulkanDynamicAPI::vkCreateFence)
                        (pFVar4->Device,&local_28,&VulkanRHI::GAllocationCallbacks,&pFVar9->Handle);
      if (VVar8 != VK_SUCCESS) {
        VulkanRHI::VerifyVulkanResult
                  (VVar8,
                   "VulkanRHI::vkCreateFence(InDevice.GetHandle(), &Info, VULKAN_CPU_ALLOCATOR, &Handle)"
                   ,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                   ,0xf);
      }
    }
    pFVar3 = (this->UsedFences).AllocatorInstance.Data;
    local_30 = pFVar9;
    if (((pFVar3 <= (FScriptContainerElement *)&local_30) &&
        ((FScriptContainerElement *)&local_30 < pFVar3 + (longlong)(this->UsedFences).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FVulkanFence *)(*pcVar5)();
      return pFVar9;
    }
    iVar7 = (this->UsedFences).ArrayNum;
    piVar1 = &(this->UsedFences).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->UsedFences).AllocatorInstance,piVar1);
    }
    (this->UsedFences).ArrayNum = iVar7 + 1;
    *(FVulkanFence **)((this->UsedFences).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_30;
    pFVar9 = local_30;
  }
  else {
    if ((iVar7 < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FVulkanFence *)(*pcVar5)();
      return pFVar9;
    }
    local_38 = *(FVulkanFence **)(this->FreeFences).AllocatorInstance.Data;
    if (((this->FreeFences).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FVulkanFence *)(*pcVar5)();
      return pFVar9;
    }
    iVar2 = (this->FreeFences).ArrayNum;
    pFVar3 = (this->FreeFences).AllocatorInstance.Data;
    iVar7 = iVar2 + -1;
    if (1 < iVar7) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      memmove(pFVar3,pFVar3 + (longlong)(iVar2 - iVar7) * 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->FreeFences).ArrayNum;
    *piVar1 = *piVar1 + -1;
    pFVar3 = (this->UsedFences).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)&local_38) &&
        ((FScriptContainerElement *)&local_38 < pFVar3 + (longlong)(this->UsedFences).ArrayMax * 8))
       && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FVulkanFence *)(*pcVar5)();
      return pFVar9;
    }
    iVar7 = (this->UsedFences).ArrayNum;
    piVar1 = &(this->UsedFences).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->UsedFences).AllocatorInstance,piVar1);
    }
    (this->UsedFences).ArrayNum = iVar7 + 1;
    *(FVulkanFence **)((this->UsedFences).AllocatorInstance.Data + (longlong)iVar7 * 8) = local_38;
    pFVar9 = local_38;
    if (param_1) {
      local_38->State = Signaled;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pFVar9;
}

// CheckFenceState @ 145ba0010

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
FVulkanFenceManager::CheckFenceState(FVulkanFenceManager *this,FVulkanFence *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  VkResult VVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (this->UsedFences).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->UsedFences).ArrayNum * 8;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
    if (*(FVulkanFence **)pFVar6 == param_1) goto LAB_145ba0065;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UsedFences.Contains(Fence)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                     ,99,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_145ba0065:
  if ((param_1->State != NotReady) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fence->State == FVulkanFence::EState::NotReady",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                         ,100,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  VVar5 = (*VulkanDynamicAPI::vkGetFenceStatus)(this->Device->Device,param_1->Handle);
  if (VVar5 == VK_SUCCESS) {
    param_1->State = Signaled;
    return true;
  }
  if ((VVar5 != VK_NOT_READY) && (VVar5 != VK_SUCCESS)) {
    VulkanRHI::VerifyVulkanResult
              (VVar5,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
               ,0x70);
  }
  return false;
}

// Deinit @ 145ba5ed0

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

void __thiscall FVulkanFenceManager::Deinit(FVulkanFenceManager *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar1;
  int iVar2;
  undefined8 *puVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  lpCriticalSection = &this->FenceLock;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if ((this->UsedFences).ArrayNum != 0) {
      `FVulkanFenceManager::Deinit'::__l2::<lambda_1>::operator()(local_res8);
    }
    pFVar4 = (this->FreeFences).AllocatorInstance.Data;
    iVar2 = (this->FreeFences).ArrayNum;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if ((this->FreeFences).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FVulkanFence_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      puVar3 = *(undefined8 **)pFVar4;
      (*VulkanDynamicAPI::vkDestroyFence)
                (this->Device->Device,(VkFence_T *)*puVar3,&VulkanRHI::GAllocationCallbacks);
      *puVar3 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        ::operator_delete(puVar3,0x18);
      }
      pFVar4 = pFVar4 + 8;
    }
                    /* WARNING: Could not recover jumptable at 0x000145ba5f9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// DestroyFence @ 145ba65a0

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

void __thiscall FVulkanFenceManager::DestroyFence(FVulkanFenceManager *this,FVulkanFence *param_1)

{
  (*VulkanDynamicAPI::vkDestroyFence)
            (this->Device->Device,param_1->Handle,&VulkanRHI::GAllocationCallbacks);
  param_1->Handle = (VkFence_T *)0x0;
  ::operator_delete(param_1,0x18);
  return;
}

// ReleaseFence @ 145bbb760

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

void __thiscall FVulkanFenceManager::ReleaseFence(FVulkanFenceManager *this,FVulkanFence **param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FVulkanFence *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  
  lpCriticalSection = &this->FenceLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar2 = *param_1;
  if (pFVar2->State != NotReady) {
    VVar6 = (*VulkanDynamicAPI::vkResetFences)(this->Device->Device,1,&pFVar2->Handle);
    if (VVar6 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar6,"VulkanRHI::vkResetFences(Device.GetHandle(), 1, &Fence->Handle)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                 ,0xb3);
    }
    pFVar2->State = NotReady;
  }
  TArray<FVulkanFence_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap(&this->UsedFences,param_1,No)
  ;
  pFVar3 = (this->FreeFences).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->FreeFences).ArrayMax * 8)) {
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
  iVar7 = (this->FreeFences).ArrayNum;
  piVar1 = &(this->FreeFences).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FreeFences).AllocatorInstance,piVar1);
  }
  (this->FreeFences).ArrayNum = iVar7 + 1;
  *(FVulkanFence **)((this->FreeFences).AllocatorInstance.Data + (longlong)iVar7 * 8) = *param_1;
  *param_1 = (FVulkanFence *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145bbb88f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ResetFence @ 145bbc090

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

void __thiscall FVulkanFenceManager::ResetFence(FVulkanFenceManager *this,FVulkanFence *param_1)

{
  VkResult VVar1;
  
  if (param_1->State != NotReady) {
    VVar1 = (*VulkanDynamicAPI::vkResetFences)(this->Device->Device,1,&param_1->Handle);
    if (VVar1 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar1,"VulkanRHI::vkResetFences(Device.GetHandle(), 1, &Fence->Handle)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                 ,0xb3);
    }
    param_1->State = NotReady;
  }
  return;
}

// WaitAndReleaseFence @ 145bc2b80

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

void __thiscall
FVulkanFenceManager::WaitAndReleaseFence
          (FVulkanFenceManager *this,FVulkanFence **param_1,ulong64 param_2)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FVulkanFence *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  VkResult VVar6;
  int iVar7;
  
  lpCriticalSection = &this->FenceLock;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((*param_1)->State != Signaled) {
    WaitForFence(this,*param_1,param_2);
  }
  pFVar2 = *param_1;
  if (pFVar2->State != NotReady) {
    VVar6 = (*VulkanDynamicAPI::vkResetFences)(this->Device->Device,1,&pFVar2->Handle);
    if (VVar6 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar6,"VulkanRHI::vkResetFences(Device.GetHandle(), 1, &Fence->Handle)",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                 ,0xb3);
    }
    pFVar2->State = NotReady;
  }
  TArray<FVulkanFence_*,TSizedDefaultAllocator<32>_>::RemoveSingleSwap(&this->UsedFences,param_1,No)
  ;
  pFVar3 = (this->FreeFences).AllocatorInstance.Data;
  if ((pFVar3 <= param_1) && (param_1 < pFVar3 + (longlong)(this->FreeFences).ArrayMax * 8)) {
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
  iVar7 = (this->FreeFences).ArrayNum;
  piVar1 = &(this->FreeFences).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->FreeFences).AllocatorInstance,piVar1);
  }
  (this->FreeFences).ArrayNum = iVar7 + 1;
  *(FVulkanFence **)((this->FreeFences).AllocatorInstance.Data + (longlong)iVar7 * 8) = *param_1;
  *param_1 = (FVulkanFence *)0x0;
                    /* WARNING: Could not recover jumptable at 0x000145bc2cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// WaitForAnyFence @ 145bc2ce0

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

bool __thiscall
FVulkanFenceManager::WaitForAnyFence
          (FVulkanFenceManager *this,TArrayView<FVulkanFence_*,int> *param_1,ulong64 param_2)

{
  FVulkanFence **ppFVar1;
  FScriptContainerElement *pFVar2;
  FVulkanFence *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  VkResult VVar7;
  FScriptContainerElement *pFVar8;
  ForElementType<VkFence_T_*> FVar9;
  longlong lVar10;
  FVulkanFence **ppFVar11;
  ForElementType<VkFence_T_*> FVar12;
  undefined1 auStackY_c8 [32];
  VkFence_T *local_78;
  ForElementType<VkFence_T_*> local_70;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  FVar12 = (ForElementType<VkFence_T_*>)0x0;
  ppFVar11 = param_1->DataPtr;
  ppFVar1 = ppFVar11 + param_1->ArrayNum;
  local_70.SecondaryData = (ForElementType<VkFence_T_*>)0x0;
  local_50 = 0;
  local_4c = 3;
  do {
    if (ppFVar11 == ppFVar1) {
      FVar9 = (ForElementType<VkFence_T_*>)&local_70;
      if (FVar12 != (ForElementType<VkFence_T_*>)0x0) {
        FVar9 = FVar12;
      }
      VVar7 = (*VulkanDynamicAPI::vkWaitForFences)
                        (this->Device->Device,local_50,(VkFence_T **)FVar9,0,param_2);
      if (VVar7 == VK_SUCCESS) {
        if (param_1->ArrayNum == 1) {
          (*param_1->DataPtr)->State = Signaled;
        }
        bVar5 = true;
      }
      else {
        if (VVar7 != VK_TIMEOUT) {
          VulkanRHI::VerifyVulkanResult
                    (VVar7,"Result",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                     ,0xa8);
        }
        bVar5 = false;
      }
      if (local_70.SecondaryData != (ForElementType<VkFence_T_*>)0x0) {
        FMemory::Free((void *)local_70.SecondaryData);
      }
      return bVar5;
    }
    pFVar3 = *ppFVar11;
    if ((pFVar3 != (FVulkanFence *)0x0) && (pFVar3->State != Signaled)) {
      pFVar8 = (this->UsedFences).AllocatorInstance.Data;
      pFVar2 = pFVar8 + (longlong)(this->UsedFences).ArrayNum * 8;
      for (; pFVar8 != pFVar2; pFVar8 = pFVar8 + 8) {
        if (*(FVulkanFence **)pFVar8 == pFVar3) goto LAB_145bc2da0;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedFences.Contains(Fence)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                         ,0x97,L"");
      FVar12 = local_70.SecondaryData;
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
LAB_145bc2da0:
      local_78 = pFVar3->Handle;
      FVar9 = (ForElementType<VkFence_T_*>)&local_70;
      if (FVar12 != (ForElementType<VkFence_T_*>)0x0) {
        FVar9 = FVar12;
      }
      if ((ulonglong)FVar9 <= &local_78) {
        FVar9 = (ForElementType<VkFence_T_*>)&local_70;
        if (FVar12 != (ForElementType<VkFence_T_*>)0x0) {
          FVar9 = FVar12;
        }
        if ((&local_78 < (VkFence_T **)((longlong)FVar9 + (longlong)(int)local_4c * 8)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), FVar12 = local_70.SecondaryData, bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<VkFence_T_*>_>
                             (0x808,&local_70,(int *)&local_4c);
        FVar12 = local_70.SecondaryData;
      }
      lVar10 = (longlong)(int)local_50;
      FVar9 = (ForElementType<VkFence_T_*>)&local_70;
      if (FVar12 != (ForElementType<VkFence_T_*>)0x0) {
        FVar9 = FVar12;
      }
      local_50 = local_50 + 1;
      *(VkFence_T **)((longlong)FVar9 + lVar10 * 8) = local_78;
      FVar12 = local_70.SecondaryData;
    }
    ppFVar11 = ppFVar11 + 1;
  } while( true );
}

// WaitForFence @ 145bc2f40

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
FVulkanFenceManager::WaitForFence(FVulkanFenceManager *this,FVulkanFence *param_1,ulong64 param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  VkResult VVar5;
  FScriptContainerElement *pFVar6;
  
  pFVar6 = (this->UsedFences).AllocatorInstance.Data;
  pFVar1 = pFVar6 + (longlong)(this->UsedFences).ArrayNum * 8;
  for (; pFVar6 != pFVar1; pFVar6 = pFVar6 + 8) {
    if (*(FVulkanFence **)pFVar6 == param_1) goto LAB_145bc2fa4;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("UsedFences.Contains(Fence)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                     ,0x7d,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_145bc2fa4:
  if ((param_1->State != NotReady) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Fence->State == FVulkanFence::EState::NotReady",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
                         ,0x7e,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  VVar5 = (*VulkanDynamicAPI::vkWaitForFences)(this->Device->Device,1,&param_1->Handle,1,param_2);
  if (VVar5 == VK_SUCCESS) {
    param_1->State = Signaled;
    return true;
  }
  if (VVar5 != VK_TIMEOUT) {
    VulkanRHI::VerifyVulkanResult
              (VVar5,"Result",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSynchronization.cpp"
               ,0x88);
  }
  return false;
}

// operator() @ 1504d9380

bool __thiscall `FVulkanFenceManager::Deinit'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1090762521696010281>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1090762521696010281>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

