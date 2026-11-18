// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 2

// operator() @ 145b06e80

TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> * __thiscall
`FVulkanEXTValidationFeaturesExtension::PreCreateInstance'::__l2::<lambda_1>::operator()
          (void *this,
          TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *pTVar8;
  wchar_t *pwVar9;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  pTVar3 = GGPUValidationCvar.Ref;
  __return_storage_ptr__->ArrayMax = 0;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar7 = 4;
    if (!bVar4) goto LAB_145b06ec1;
  }
  lVar7 = 0;
LAB_145b06ec1:
  iVar6 = *(int *)((longlong)pTVar3->ShadowedValue + lVar7);
  if (0 < iVar6) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_18 = 0;
    if ((pFVar1 <= (FScriptContainerElement *)&local_18) &&
       ((FScriptContainerElement *)&local_18 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar5 = __return_storage_ptr__->ArrayNum;
    if (iVar5 == __return_storage_ptr__->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar5 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar5 * 4) =
         local_18;
    if (1 < iVar6) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      local_14 = 1;
      if ((pFVar1 <= (FScriptContainerElement *)&local_14) &&
         ((FScriptContainerElement *)&local_14 <
          pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          pTVar8 = (TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
          return pTVar8;
        }
      }
      iVar6 = __return_storage_ptr__->ArrayNum;
      if (iVar6 == __return_storage_ptr__->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&__return_storage_ptr__->AllocatorInstance,
                           &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar6 + 1;
      *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
           local_14;
    }
  }
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"vulkanbestpractices");
  if (bVar4) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_10 = 2;
    if ((pFVar1 <= (FScriptContainerElement *)&local_10) &&
       ((FScriptContainerElement *)&local_10 <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
         local_10;
  }
  pwVar9 = FCommandLine::Get();
  bVar4 = FParse::Param(pwVar9,L"vulkandebugsync");
  if (bVar4) {
    pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
    local_c = 4;
    if ((pFVar1 <= (FScriptContainerElement *)&local_c) &&
       ((FScriptContainerElement *)&local_c <
        pFVar1 + (longlong)__return_storage_ptr__->ArrayMax * 4)) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pTVar8 = (TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *)(*pcVar2)();
        return pTVar8;
      }
    }
    iVar6 = __return_storage_ptr__->ArrayNum;
    if (iVar6 == __return_storage_ptr__->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&__return_storage_ptr__->AllocatorInstance,
                         &__return_storage_ptr__->ArrayMax);
    }
    __return_storage_ptr__->ArrayNum = iVar6 + 1;
    *(undefined4 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar6 * 4) =
         local_c;
  }
  return __return_storage_ptr__;
}

// PreCreateInstance @ 145b2ce20

/* WARNING: Enum "VkStructureType": Some values do not have unique names */

void __thiscall
FVulkanEXTValidationFeaturesExtension::PreCreateInstance
          (FVulkanEXTValidationFeaturesExtension *this,VkInstanceCreateInfo *param_1,
          FOptionalVulkanInstanceExtensions *param_2)

{
  TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  TConsoleVariableData<int> *pTVar4;
  bool bVar5;
  longlong lVar6;
  TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> *pTVar7;
  undefined1 local_res8 [8];
  TArray<VkValidationFeatureEnableEXT,TSizedDefaultAllocator<32>_> local_28;
  
  pTVar4 = GValidationCvar.Ref;
  bVar5 = IsInParallelGameThread();
  if (!bVar5) {
    bVar5 = IsInGameThread();
    lVar6 = 4;
    if (!bVar5) goto LAB_145b2ce5c;
  }
  lVar6 = 0;
LAB_145b2ce5c:
  if (*(int *)((longlong)pTVar4->ShadowedValue + lVar6) < 1) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GValidationCvar.GetValueOnAnyThread() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanExtensions.cpp"
                       ,0x96e,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pTVar7 = `FVulkanEXTValidationFeaturesExtension::PreCreateInstance'::__l2::<lambda_1>::operator()
                     (local_res8,&local_28);
  pTVar1 = &this->ValidationFeaturesEnabled;
  if (pTVar1 != pTVar7) {
    pFVar2 = (pTVar1->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pTVar1->AllocatorInstance).Data = (pTVar7->AllocatorInstance).Data;
    (pTVar7->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    (this->ValidationFeaturesEnabled).ArrayNum = pTVar7->ArrayNum;
    (this->ValidationFeaturesEnabled).ArrayMax = pTVar7->ArrayMax;
    pTVar7->ArrayNum = 0;
    pTVar7->ArrayMax = 0;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((this->ValidationFeaturesEnabled).ArrayNum != 0) {
    (this->ValidationFeatures).sType = VK_STRUCTURE_TYPE_VALIDATION_FEATURES_EXT;
    *(undefined8 *)&(this->ValidationFeatures).field_0x4 = 0;
    *(undefined4 *)((longlong)&(this->ValidationFeatures).pNext + 4) = 0;
    *(undefined4 *)&(this->ValidationFeatures).field_0x14 = 0;
    *(undefined8 *)&(this->ValidationFeatures).disabledValidationFeatureCount = 0;
    (this->ValidationFeatures).pDisabledValidationFeatures = (VkValidationFeatureDisableEXT *)0x0;
    (this->ValidationFeatures).enabledValidationFeatureCount =
         (this->ValidationFeaturesEnabled).ArrayNum;
    (this->ValidationFeatures).pEnabledValidationFeatures =
         (VkValidationFeatureEnableEXT *)(pTVar1->AllocatorInstance).Data;
    (this->ValidationFeatures).pNext = param_1->pNext;
    param_1->pNext = &this->ValidationFeatures;
  }
  return;
}

