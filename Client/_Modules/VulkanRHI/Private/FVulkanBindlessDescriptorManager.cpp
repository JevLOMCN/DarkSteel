// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 26

// BindlessSetState @ 145ada6f0

BindlessSetState * __thiscall
FVulkanBindlessDescriptorManager::BindlessSetState::BindlessSetState(BindlessSetState *this)

{
  (this->DescriptorTypes).AllocatorInstance.SecondaryData = (ForElementType<VkDescriptorType>)0x0;
  (this->DescriptorTypes).ArrayNum = 0;
  (this->DescriptorTypes).ArrayMax = 2;
  this->Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->DescriptorCapacity = 0;
  this->DescriptorSize = 0;
  this->BufferHandle = (VkBuffer_T *)0x0;
  this->MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->MappedPointer = (uchar *)0x0;
  this->CPUDescriptorMemory = (uchar *)0x0;
  return this;
}

// FVulkanBindlessDescriptorManager @ 145ada750

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

FVulkanBindlessDescriptorManager * __thiscall
FVulkanBindlessDescriptorManager::FVulkanBindlessDescriptorManager
          (FVulkanBindlessDescriptorManager *this,FVulkanDevice *param_1)

{
  bool bVar1;
  ERHIBindlessConfiguration EVar2;
  int iVar3;
  FStaticBasicLogRecord *pFVar4;
  uint uVar5;
  
  this->Device = param_1;
  EVar2 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
  if (EVar2 != Disabled) {
    if ((int)EVar2 < 2) {
      if (2 < (byte)LogRHI._0_1_) {
        pFVar4 = &::LOG_Static;
LAB_145ada8b7:
        UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogRHI);
      }
    }
    else if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x11000010000) ==
             0x11000010000) {
      if ((((8 < (param_1->GpuProps).limits.maxBoundDescriptorSets) &&
           (8 < (param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                maxDescriptorBufferBindings)) &&
          (7 < (param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
               maxResourceDescriptorBufferBindings)) &&
         ((param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
          maxSamplerDescriptorBufferBindings != 0)) {
        if ((param_1->DeviceMemoryManager).bHasUnifiedMemory == false) {
          bVar1 = FVulkanWindowsPlatform::SupportsDeviceLocalHostVisibleWithNoPenalty
                            (param_1->VendorId);
          if (bVar1) {
            bVar1 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType
                              (&param_1->DeviceMemoryManager,7);
            if (bVar1) goto LAB_145ada80e;
          }
          uVar5 = 6;
        }
        else {
LAB_145ada80e:
          uVar5 = 7;
        }
        bVar1 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType
                          (&param_1->DeviceMemoryManager,uVar5);
        if (bVar1) {
          iVar3 = (**(code **)(*(longlong *)GDynamicGlobalUBs._padding_ + 200))();
          if ((iVar3 != 0) && (2 < (byte)LogRHI._0_1_)) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          if (GVulkanEnableDefrag != 0) {
            if (2 < (byte)LogRHI._0_1_) {
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
            }
            GVulkanEnableDefrag = 0;
          }
          bVar1 = true;
          goto LAB_145ada8c5;
        }
      }
      if (2 < (byte)LogRHI._0_1_) {
        pFVar4 = &::LOG_Static;
        goto LAB_145ada8b7;
      }
    }
    else if (2 < (byte)LogRHI._0_1_) {
      pFVar4 = &::LOG_Static;
      goto LAB_145ada8b7;
    }
  }
  bVar1 = false;
LAB_145ada8c5:
  this->bIsSupported = bVar1;
  this->EmptyDescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[0].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[0].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[0].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[0].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[0].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[0].DescriptorCapacity = 0;
  this->BindlessSetStates[0].DescriptorSize = 0;
  this->BindlessSetStates[0].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[0].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[0].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[0].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[1].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[1].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[1].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[1].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[1].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[1].DescriptorCapacity = 0;
  this->BindlessSetStates[1].DescriptorSize = 0;
  this->BindlessSetStates[1].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[1].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[1].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[1].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[2].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[2].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[2].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[2].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[2].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[2].DescriptorCapacity = 0;
  this->BindlessSetStates[2].DescriptorSize = 0;
  this->BindlessSetStates[2].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[2].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[2].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[2].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[3].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[3].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[3].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[3].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[3].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[3].DescriptorCapacity = 0;
  this->BindlessSetStates[3].DescriptorSize = 0;
  this->BindlessSetStates[3].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[3].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[3].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[3].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[4].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[4].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[4].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[4].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[4].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[4].DescriptorCapacity = 0;
  this->BindlessSetStates[4].DescriptorSize = 0;
  this->BindlessSetStates[4].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[4].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[4].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[4].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[5].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[5].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[5].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[5].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[5].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[5].DescriptorCapacity = 0;
  this->BindlessSetStates[5].DescriptorSize = 0;
  this->BindlessSetStates[5].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[5].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[5].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[5].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[6].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[6].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[6].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[6].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[6].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[6].DescriptorCapacity = 0;
  this->BindlessSetStates[6].DescriptorSize = 0;
  this->BindlessSetStates[6].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[6].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[6].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[6].CPUDescriptorMemory = (uchar *)0x0;
  this->BindlessSetStates[7].DescriptorTypes.AllocatorInstance.SecondaryData =
       (ForElementType<VkDescriptorType>)0x0;
  this->BindlessSetStates[7].DescriptorTypes.ArrayNum = 0;
  this->BindlessSetStates[7].DescriptorTypes.ArrayMax = 2;
  this->BindlessSetStates[7].Allocator = (FRHIHeapDescriptorAllocator *)0x0;
  this->BindlessSetStates[7].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->BindlessSetStates[7].DescriptorCapacity = 0;
  this->BindlessSetStates[7].DescriptorSize = 0;
  this->BindlessSetStates[7].BufferHandle = (VkBuffer_T *)0x0;
  this->BindlessSetStates[7].MemoryHandle = (VkDeviceMemory_T *)0x0;
  this->BindlessSetStates[7].MappedPointer = (uchar *)0x0;
  this->BindlessSetStates[7].CPUDescriptorMemory = (uchar *)0x0;
  this->SingleUseUBDescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
  this->SingleUseUBAllocator = (FTempBlockAllocator *)0x0;
  this->BindlessPipelineLayout = (VkPipelineLayout_T *)0x0;
  memset(this->BufferBindingInfo,0,0x100);
  this->BufferIndices[0] = 0;
  this->BufferIndices[1] = 1;
  this->BufferIndices[2] = 2;
  this->BufferIndices[3] = 3;
  this->BufferIndices[4] = 4;
  this->BufferIndices[5] = 5;
  this->BufferIndices[6] = 6;
  this->BufferIndices[7] = 7;
  this->BufferIndices[8] = 8;
  return this;
}

// ~BindlessSetState @ 145adc0e0

void __thiscall
FVulkanBindlessDescriptorManager::BindlessSetState::~BindlessSetState(BindlessSetState *this)

{
  ForElementType<VkDescriptorType> FVar1;
  
  if (this->CPUDescriptorMemory != (uchar *)0x0) {
    FMemory::Free(this->CPUDescriptorMemory);
  }
  FVar1 = (this->DescriptorTypes).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar1);
    return;
  }
  return;
}

// ~FVulkanBindlessDescriptorManager @ 145adc1b0

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
FVulkanBindlessDescriptorManager::~FVulkanBindlessDescriptorManager
          (FVulkanBindlessDescriptorManager *this)

{
  uchar *puVar1;
  ForElementType<VkDescriptorType> FVar2;
  code *pcVar3;
  bool bVar4;
  
  if (this->BindlessPipelineLayout != (VkPipelineLayout_T *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BindlessPipelineLayout == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0x145,L"DeInit() was not called on FVulkanBindlessDescriptorManager!");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  puVar1 = this->BindlessSetStates[7].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[7].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[6].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[6].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[5].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[5].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[4].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[4].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[3].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[3].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[2].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[2].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[1].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[1].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  puVar1 = this->BindlessSetStates[0].CPUDescriptorMemory;
  if (puVar1 != (uchar *)0x0) {
    FMemory::Free(puVar1);
  }
  FVar2 = this->BindlessSetStates[0].DescriptorTypes.AllocatorInstance.SecondaryData;
  if (FVar2 != (ForElementType<VkDescriptorType>)0x0) {
    FMemory::Free((void *)FVar2);
    return;
  }
  return;
}

// operator() @ 145add2e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
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
`FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
          (void *this,VkDescriptorType param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ForElementType<VkDescriptorType> FVar6;
  char *pcVar7;
  size_t sVar8;
  ForElementType<VkDescriptorType> FVar9;
  ForElementType<VkDescriptorType> FVar10;
  undefined1 auStack_2b8 [32];
  wchar_t *local_298;
  ForElementType<VkDescriptorType> local_290;
  longlong local_288;
  longlong local_280;
  undefined8 local_278;
  VkDescriptorType local_268 [4];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_258;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_2b8;
  local_268[0] = param_1;
  FVar6 = (ForElementType<VkDescriptorType>)
          FVulkanBindlessDescriptorManager::GetBindlessState
                    (*(FVulkanBindlessDescriptorManager **)this,param_1);
  FVar10 = *(ForElementType<VkDescriptorType> *)((longlong)FVar6 + 8);
  FVar9 = FVar6;
  if (FVar10 != (ForElementType<VkDescriptorType>)0x0) {
    FVar9 = FVar10;
  }
  if ((ulonglong)FVar9 <= local_268) {
    FVar9 = FVar6;
    if (FVar10 != (ForElementType<VkDescriptorType>)0x0) {
      FVar9 = FVar10;
    }
    if (local_268 <
        (VkDescriptorType *)((longlong)FVar9 + (longlong)*(int *)((longlong)FVar6 + 0x14) * 4)) {
      local_280 = (longlong)*(int *)((longlong)FVar6 + 0x10);
      local_278 = 4;
      local_290 = FVar6;
      if (FVar10 != (ForElementType<VkDescriptorType>)0x0) {
        local_290 = FVar10;
      }
      local_298 = (wchar_t *)local_268;
      local_288 = (longlong)*(int *)((longlong)FVar6 + 0x14);
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  iVar4 = *(int *)((longlong)FVar6 + 0x10);
  if (iVar4 == *(int *)((longlong)FVar6 + 0x14)) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>_>
                      (0x404,(ForElementType<VkDescriptorType> *)FVar6,
                       (int *)((longlong)FVar6 + 0x14));
  }
  *(int *)((longlong)FVar6 + 0x10) = iVar4 + 1;
  FVar10 = FVar6;
  if (*(ForElementType<VkDescriptorType> *)((longlong)FVar6 + 8) !=
      (ForElementType<VkDescriptorType>)0x0) {
    FVar10 = *(ForElementType<VkDescriptorType> *)((longlong)FVar6 + 8);
  }
  *(VkDescriptorType *)((longlong)FVar10 + (longlong)iVar4 * 4) = local_268[0];
  uVar5 = GetDescriptorTypeSize((FVulkanDevice *)**(undefined8 **)this,local_268[0]);
  if (uVar5 < *(uint *)((longlong)FVar6 + 0x2c)) {
    uVar5 = *(uint *)((longlong)FVar6 + 0x2c);
  }
  *(uint *)((longlong)FVar6 + 0x2c) = uVar5;
  if (uVar5 == 0) {
    pcVar7 = string_VkDescriptorType(local_268[0]);
    local_258._padding_ = 0;
    if (pcVar7 == (char *)0x0) {
      local_258.StringLength = 0;
      local_258.Ptr = (wchar_t *)0x0;
    }
    else {
      sVar8 = strlen(pcVar7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_258,pcVar7,(int)sVar8,Yes);
    }
    local_298 = local_258.Ptr;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OutState.DescriptorSize > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,399,L"Descriptor Type [%s] returned an invalid descriptor size!");
    if ((void *)local_258._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_258._padding_);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((int)local_268[0] < 0x3b9d13f1) {
    iVar4 = GVulkanBindlessMaxAccelerationStructureDescriptorCount;
    if (local_268[0] == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) goto LAB_145add527;
    switch(local_268[0]) {
    case VK_DESCRIPTOR_TYPE_SAMPLER:
      iVar4 = GVulkanBindlessMaxSamplerDescriptorCount;
      break;
    default:
      goto switchD_145add4bd_caseD_1;
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
      iVar4 = GVulkanBindlessMaxSampledImageDescriptorCount;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
      iVar4 = GVulkanBindlessMaxStorageImageDescriptorCount;
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
      iVar4 = GVulkanBindlessMaxUniformTexelBufferDescriptorCount;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
      iVar4 = GVulkanBindlessMaxStorageTexelBufferDescriptorCount;
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
      iVar4 = GVulkanBindlessMaxUniformBufferDescriptorCount;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
      iVar4 = GVulkanBindlessMaxStorageBufferDescriptorCount;
    }
  }
  else {
switchD_145add4bd_caseD_1:
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0xd7,L"");
    iVar4 = 0;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_145add527:
  piVar1 = (int *)((longlong)FVar6 + 0x28);
  *piVar1 = *piVar1 + iVar4;
  if (*piVar1 == 0) {
    pcVar7 = string_VkDescriptorType(local_268[0]);
    local_138._padding_ = 0;
    if (pcVar7 == (char *)0x0) {
      local_138.Ptr = (wchar_t *)0x0;
      local_138.StringLength = 0;
    }
    else {
      sVar8 = strlen(pcVar7);
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init(&local_138,pcVar7,(int)sVar8,Yes);
    }
    local_298 = local_138.Ptr;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(OutState.DescriptorCapacity > 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0x192,L"Descriptor Type [%s] returned an invalid descriptor count!");
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// operator() @ 145addcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
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
`FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_3>::operator()
          (void *this,BindlessSetState *param_1,VkDescriptorBufferBindingInfoEXT *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ForElementType<VkDescriptorType> FVar4;
  code *pcVar5;
  undefined8 *puVar6;
  VkDescriptorBufferBindingInfoEXT *pVVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  VkResult VVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_VulkanBindlessDescriptorsAllocated> FVar13;
  longlong lVar14;
  FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated> FVar15;
  FRHIHeapDescriptorAllocator *pFVar16;
  void *pvVar17;
  VkBuffer_T *pVVar18;
  ulong64 uVar19;
  ForElementType<TStatId> FVar20;
  FThreadSafeStaticStat<FStat_STAT_BindlessSamplerDescriptorsAllocated> *this_00;
  ForElementType<VkDescriptorType> FVar21;
  TStatIdData *pTVar22;
  ulonglong uVar23;
  ERHIDescriptorTypeMask EVar24;
  uint uVar25;
  wchar_t *pwVar26;
  undefined1 auStackY_1e8 [32];
  undefined1 local_188 [8];
  int *local_180;
  ulong64 local_178;
  VkMemoryAllocateInfo local_170;
  ForElementType<VkDescriptorType> local_150;
  undefined8 *local_148;
  VkDescriptorBufferBindingInfoEXT *local_140;
  undefined4 local_138;
  undefined8 local_134;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  VkBufferDeviceAddressInfo local_120;
  ForElementType<TStatId> local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FName local_f8;
  FName local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8;
  FName local_b0;
  FName local_a8 [2];
  TArrayView<TStatId_const_,int> local_98;
  ForElementType<TStatId> local_88;
  int local_68;
  int local_64;
  VkMemoryRequirements local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  piVar1 = &(param_1->DescriptorTypes).ArrayNum;
  if ((param_1->DescriptorTypes).ArrayNum == 0) {
    uVar10 = 0;
  }
  else {
    EVar24 = None;
    local_88.SecondaryData = (ForElementType<TStatId>)0x0;
    local_68 = 0;
    local_64 = 3;
    local_150 = (ForElementType<VkDescriptorType>)param_1;
    local_148 = this;
    local_140 = param_2;
    if (StatPtr_STAT_VulkanBindlessDescriptorsAllocated ==
        (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessDescriptorsAllocated>)0x0) {
      pFVar12 = ::FName::FName(&local_f8,"STAT_VulkanBindlessDescriptorsAllocated");
      FVar13 = (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessDescriptorsAllocated>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_VulkanBindlessDescriptorsAllocated,*pFVar12,
                          L"Descriptors Allocated","STATGROUP_VulkanBindless","STATCAT_Advanced",
                          L"Vulkan Bindless",true,false,ST_int64,false,false,MCR_Invalid);
      if (local_68 == local_64) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>_>
                             (0x808,&local_88,&local_64);
      }
    }
    else {
      local_68 = 0;
      FVar13 = StatPtr_STAT_VulkanBindlessDescriptorsAllocated;
    }
    FVar20 = (ForElementType<TStatId>)&local_88;
    if (local_88.SecondaryData != (ForElementType<TStatId>)0x0) {
      FVar20 = local_88.SecondaryData;
    }
    lVar14 = (longlong)local_68;
    local_68 = local_68 + 1;
    *(FThreadSafeStaticStat<FStat_STAT_VulkanBindlessDescriptorsAllocated> *)
     ((longlong)FVar20 + lVar14 * 8) = FVar13;
    FVar4 = (param_1->DescriptorTypes).AllocatorInstance.SecondaryData;
    iVar2 = *piVar1;
    if (FVar4 != (ForElementType<VkDescriptorType>)0x0) {
      param_1 = (BindlessSetState *)FVar4;
    }
    FVar4 = (ForElementType<VkDescriptorType>)((longlong)param_1 + (longlong)iVar2 * 4);
    local_180 = piVar1;
    while( true ) {
      if (*piVar1 != iVar2) {
        local_188[0] = 0;
        `TCheckedPointerIterator<enum_VkDescriptorType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_188);
      }
      if ((ForElementType<VkDescriptorType>)param_1 == FVar4) break;
      iVar3 = *(int *)param_1;
      if (iVar3 < 0x3b9d13f1) {
        if (iVar3 == 0x3b9d13f0) {
          EVar24 = EVar24 | AccelerationStructure;
        }
        else {
          switch(iVar3) {
          case 0:
            EVar24 = EVar24 | Sampler;
            break;
          default:
            goto switchD_145addee3_caseD_1;
          case 2:
            EVar24 = EVar24 | TextureSRV;
            break;
          case 3:
            EVar24 = EVar24 | TextureUAV;
            break;
          case 4:
            EVar24 = EVar24 | TypedBufferSRV;
            break;
          case 5:
            EVar24 = EVar24 | TypedBufferUAV;
            break;
          case 6:
            EVar24 = EVar24 | BufferSRV;
            break;
          case 7:
            EVar24 = EVar24 | BufferUAV;
          }
        }
LAB_145addf61:
        if (iVar3 == 0x3b9d13f0) {
          pTVar22 = (TStatIdData *)
                    StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated;
          if (StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated>
               )0x0) {
            pFVar12 = ::FName::FName(&local_b8,
                                     "STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated")
            ;
            pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                ((FThreadSafeStaticStatBase *)
                                 &
                                 StatPtr_STAT_VulkanBindlessAccelerationStructureDescriptorsAllocated
                                 ,*pFVar12,L"AccelerationStructure Descriptors Allocated",
                                 "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                 true,false,ST_int64,false,false,MCR_Invalid);
          }
        }
        else {
          switch(iVar3) {
          case 0:
            pTVar22 = (TStatIdData *)StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessSamplerDescriptorsAllocated>)0x0) {
              pFVar12 = ::FName::FName(&local_f0,"STAT_VulkanBindlessSamplerDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_VulkanBindlessSamplerDescriptorsAllocated,*pFVar12,
                                   L"Sampler Descriptors Allocated","STATGROUP_VulkanBindless",
                                   "STATCAT_Advanced",L"Vulkan Bindless",true,false,ST_int64,false,
                                   false,MCR_Invalid);
            }
            break;
          default:
            goto switchD_145addf87_caseD_1;
          case 2:
            pTVar22 = (TStatIdData *)StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessSampledImageDescriptorsAllocated>)
                0x0) {
              pFVar12 = ::FName::FName(&local_e8,
                                       "STAT_VulkanBindlessSampledImageDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_VulkanBindlessSampledImageDescriptorsAllocated,
                                   *pFVar12,L"SampledImage Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
            break;
          case 3:
            pTVar22 = (TStatIdData *)StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageImageDescriptorsAllocated>)
                0x0) {
              pFVar12 = ::FName::FName(&local_e0,
                                       "STAT_VulkanBindlessStorageImageDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_VulkanBindlessStorageImageDescriptorsAllocated,
                                   *pFVar12,L"StorageImage Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
            break;
          case 4:
            pTVar22 = (TStatIdData *)
                      StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated>
                 )0x0) {
              pFVar12 = ::FName::FName(&local_d8,
                                       "STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &
                                   StatPtr_STAT_VulkanBindlessUniformTexelBufferDescriptorsAllocated
                                   ,*pFVar12,L"UniformTexelBuffer Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
            break;
          case 5:
            pTVar22 = (TStatIdData *)
                      StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated>
                 )0x0) {
              pFVar12 = ::FName::FName(&local_d0,
                                       "STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &
                                   StatPtr_STAT_VulkanBindlessStorageTexelBufferDescriptorsAllocated
                                   ,*pFVar12,L"StorageTexelBuffer Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
            break;
          case 6:
            pTVar22 = (TStatIdData *)StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessStorageBufferDescriptorsAllocated>)
                0x0) {
              pFVar12 = ::FName::FName(&local_c0,
                                       "STAT_VulkanBindlessStorageBufferDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_VulkanBindlessStorageBufferDescriptorsAllocated,
                                   *pFVar12,L"StorageBuffer Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
            break;
          case 7:
            pTVar22 = (TStatIdData *)StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated;
            if (StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated ==
                (FThreadSafeStaticStat<FStat_STAT_VulkanBindlessUniformBufferDescriptorsAllocated>)
                0x0) {
              pFVar12 = ::FName::FName(&local_c8,
                                       "STAT_VulkanBindlessUniformBufferDescriptorsAllocated");
              pTVar22 = FThreadSafeStaticStatBase::DoSetup
                                  ((FThreadSafeStaticStatBase *)
                                   &StatPtr_STAT_VulkanBindlessUniformBufferDescriptorsAllocated,
                                   *pFVar12,L"UniformBuffer Descriptors Allocated",
                                   "STATGROUP_VulkanBindless","STATCAT_Advanced",L"Vulkan Bindless",
                                   true,false,ST_int64,false,false,MCR_Invalid);
            }
          }
        }
      }
      else {
switchD_145addee3_caseD_1:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0xa3,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return uVar9;
        }
        if (iVar3 < 0x3b9d13f1) goto LAB_145addf61;
switchD_145addf87_caseD_1:
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x6c,L"");
        if (bVar8) {
          pcVar5 = (code *)swi(3);
          uVar9 = (*pcVar5)();
          return uVar9;
        }
        pTVar22 = &TStatId::TStatId_NAME_None;
      }
      if (local_68 == local_64) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>_>
                             (0x808,&local_88,&local_64);
      }
      lVar14 = (longlong)local_68;
      FVar20 = (ForElementType<TStatId>)&local_88;
      if (local_88.SecondaryData != (ForElementType<TStatId>)0x0) {
        FVar20 = local_88.SecondaryData;
      }
      local_68 = local_68 + 1;
      *(TStatIdData **)((longlong)FVar20 + lVar14 * 8) = pTVar22;
      if (iVar3 == 0) {
        FVar15 = (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)
                 StatPtr_STAT_BindlessSamplerDescriptorsAllocated;
        if (StatPtr_STAT_BindlessSamplerDescriptorsAllocated ==
            (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerDescriptorsAllocated>)0x0) {
          pFVar12 = ::FName::FName(&local_b0,"STAT_BindlessSamplerDescriptorsAllocated");
          pwVar26 = L"Bindless Sampler Descriptors Allocated";
          this_00 = &StatPtr_STAT_BindlessSamplerDescriptorsAllocated;
LAB_145ade48c:
          FVar15 = (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)
                   FThreadSafeStaticStatBase::DoSetup
                             ((FThreadSafeStaticStatBase *)this_00,*pFVar12,pwVar26,"STATGROUP_RHI",
                              "STATCAT_Advanced",L"RHI",true,false,ST_int64,false,false,MCR_Invalid)
          ;
        }
      }
      else {
        FVar15 = StatPtr_STAT_BindlessResourceDescriptorsAllocated;
        if (StatPtr_STAT_BindlessResourceDescriptorsAllocated ==
            (FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated>)0x0) {
          pFVar12 = ::FName::FName(local_a8,"STAT_BindlessResourceDescriptorsAllocated");
          pwVar26 = L"Bindless Resource Descriptors Allocated";
          this_00 = (FThreadSafeStaticStat<FStat_STAT_BindlessSamplerDescriptorsAllocated> *)
                    &StatPtr_STAT_BindlessResourceDescriptorsAllocated;
          goto LAB_145ade48c;
        }
      }
      if (local_68 == local_64) {
        local_68 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<3,32,TSizedDefaultAllocator<32>_>::ForElementType<TStatId>_>
                             (0x808,&local_88,&local_64);
      }
      lVar14 = (longlong)local_68;
      FVar20 = (ForElementType<TStatId>)&local_88;
      if (local_88.SecondaryData != (ForElementType<TStatId>)0x0) {
        FVar20 = local_88.SecondaryData;
      }
      param_1 = (BindlessSetState *)((longlong)param_1 + 4);
      local_68 = local_68 + 1;
      *(FThreadSafeStaticStat<FStat_STAT_BindlessResourceDescriptorsAllocated> *)
       ((longlong)FVar20 + lVar14 * 8) = FVar15;
    }
    pFVar16 = ::operator_new(0x58);
    iVar2 = local_68;
    FVar4 = local_150;
    if (pFVar16 == (FRHIHeapDescriptorAllocator *)0x0) {
      pFVar16 = (FRHIHeapDescriptorAllocator *)0x0;
    }
    else {
      local_108 = (ForElementType<TStatId>)&local_88;
      if (local_88.SecondaryData != (ForElementType<TStatId>)0x0) {
        local_108 = local_88.SecondaryData;
      }
      if ((local_68 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar5 = (code *)swi(3);
        uVar9 = (*pcVar5)();
        return uVar9;
      }
      iStack_100 = iVar2;
      local_98._12_4_ = uStack_fc;
      local_98.ArrayNum = iVar2;
      local_98.DataPtr = (TStatId *)local_108;
      pFVar16 = FRHIHeapDescriptorAllocator::FRHIHeapDescriptorAllocator
                          (pFVar16,EVar24,*(uint *)((longlong)FVar4 + 0x28),&local_98);
    }
    puVar6 = local_148;
    *(FRHIHeapDescriptorAllocator **)((longlong)FVar4 + 0x18) = pFVar16;
    if ((*(int *)((longlong)FVar4 + 0x10) < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    FVar21 = FVar4;
    if (*(ForElementType<VkDescriptorType> *)((longlong)FVar4 + 8) !=
        (ForElementType<VkDescriptorType>)0x0) {
      FVar21 = *(ForElementType<VkDescriptorType> *)((longlong)FVar4 + 8);
    }
    iVar2 = *(int *)FVar21;
    uVar9 = 0x420003;
    if (iVar2 == 0) {
      uVar9 = 0x220003;
    }
    uVar10 = *(int *)((longlong)FVar4 + 0x2c) * *(int *)((longlong)FVar4 + 0x28);
    uVar23 = (ulonglong)uVar10;
    pvVar17 = FMemory::MallocZeroed((ulonglong)uVar10,0);
    *(void **)((longlong)FVar4 + 0x48) = pvVar17;
    local_178 = 0;
    (*VulkanDynamicAPI::vkGetDescriptorSetLayoutSizeEXT)
              (*(VkDevice_T **)*puVar6,*(VkDescriptorSetLayout_T **)((longlong)FVar4 + 0x20),
               &local_178);
    if ((local_178 != uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayoutSizeInBytes == DescriptorBufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x211,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    if (((iVar2 == 0) && (*(ulonglong *)(puVar6[1] + 0xe8) <= uVar23)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DescriptorBufferSize < DescriptorBufferProperties.samplerDescriptorBufferAddressSpaceSize"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x217,L"Sampler descriptor buffer size [%u] exceeded maximum [%llu]."),
       bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    pVVar18 = FVulkanDevice::CreateBuffer(*(FVulkanDevice **)puVar6[2],uVar23,uVar9,0);
    *(VkBuffer_T **)((longlong)FVar4 + 0x30) = pVVar18;
    local_60.memoryTypeBits = 0;
    local_60._20_4_ = 0;
    local_60.size = 0;
    local_60.alignment = 0;
    (*VulkanDynamicAPI::vkGetBufferMemoryRequirements)(*(VkDevice_T **)*puVar6,pVVar18,&local_60);
    if ((local_60.size < uVar23) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("BufferMemoryReqs.size >= DescriptorBufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x224,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      uVar9 = (*pcVar5)();
      return uVar9;
    }
    local_180 = (int *)((ulonglong)local_180 & 0xffffffff00000000);
    uVar25 = 7;
    lVar14 = *(longlong *)puVar6[2];
    if ((*(char *)(lVar14 + 0x3c0) == '\0') &&
       ((bVar8 = FVulkanWindowsPlatform::SupportsDeviceLocalHostVisibleWithNoPenalty
                           (*(EGpuVendorId *)(lVar14 + 0x1b98)), !bVar8 ||
        (bVar8 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType
                           ((FDeviceMemoryManager *)(lVar14 + 0x38),7), !bVar8)))) {
      uVar25 = 6;
    }
    VVar11 = VulkanRHI::FDeviceMemoryManager::GetMemoryTypeFromProperties
                       ((FDeviceMemoryManager *)(lVar14 + 0x38),local_60.memoryTypeBits,uVar25,
                        (uint *)&local_180);
    if (VVar11 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "Device.GetDeviceMemoryManager().GetMemoryTypeFromProperties(BufferMemoryReqs.memoryTypeBits, GetDescriptorBufferMemoryType(Device), &MemoryTypeIndex)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x227);
    }
    local_138 = 0x3b9bb460;
    local_170._28_4_ = 0;
    local_170._4_4_ = 0;
    local_170.allocationSize._0_4_ = (undefined4)local_60.size;
    local_170.allocationSize._4_4_ = (undefined4)(local_60.size >> 0x20);
    local_170.memoryTypeIndex = (uint)local_180;
    local_170.pNext = &local_138;
    local_134 = 0;
    uStack_12c = 0;
    uStack_128 = 2;
    uStack_124 = 0;
    local_170.sType = VK_STRUCTURE_TYPE_MEMORY_ALLOCATE_INFO;
    VVar11 = (*VulkanDynamicAPI::vkAllocateMemory)
                       (*(VkDevice_T **)*puVar6,&local_170,&VulkanRHI::GAllocationCallbacks,
                        (VkDeviceMemory_T **)((longlong)FVar4 + 0x38));
    if (VVar11 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "VulkanRHI::vkAllocateMemory(DeviceHandle, &AllocateInfo, VULKAN_CPU_ALLOCATOR, &InOutState.MemoryHandle)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x233);
    }
    VVar11 = (*VulkanDynamicAPI::vkBindBufferMemory)
                       (*(VkDevice_T **)*puVar6,*(VkBuffer_T **)((longlong)FVar4 + 0x30),
                        *(VkDeviceMemory_T **)((longlong)FVar4 + 0x38),0);
    if (VVar11 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "VulkanRHI::vkBindBufferMemory(DeviceHandle, InOutState.BufferHandle, InOutState.MemoryHandle, 0)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x234);
    }
    VVar11 = (*VulkanDynamicAPI::vkMapMemory)
                       (*(VkDevice_T **)*puVar6,*(VkDeviceMemory_T **)((longlong)FVar4 + 0x38),0,
                        0xffffffffffffffff,0,(void **)((longlong)FVar4 + 0x40));
    if (VVar11 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar11,
                 "VulkanRHI::vkMapMemory(DeviceHandle, InOutState.MemoryHandle, 0, VK_WHOLE_SIZE, 0, (void**)&InOutState.MappedPointer)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x235);
    }
    memset(*(void **)((longlong)FVar4 + 0x40),0,
           CONCAT44(local_170.allocationSize._4_4_,(undefined4)local_170.allocationSize));
    pVVar7 = local_140;
    local_120._4_8_ = 0;
    local_120.pNext._4_4_ = 0;
    local_120.buffer._0_4_ = (undefined4)*(undefined8 *)((longlong)FVar4 + 0x30);
    local_120.buffer._4_4_ =
         (undefined4)((ulonglong)*(undefined8 *)((longlong)FVar4 + 0x30) >> 0x20);
    local_120.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_140->sType = VK_STRUCTURE_TYPE_DESCRIPTOR_BUFFER_BINDING_INFO_EXT;
    *(undefined8 *)&local_140->field_0x4 = 0;
    *(undefined8 *)((longlong)&local_140->pNext + 4) = 0;
    *(undefined8 *)((longlong)&local_140->address + 4) = 0;
    *(undefined4 *)&local_140->field_0x1c = 0;
    uVar19 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(*(VkDevice_T **)*puVar6,&local_120);
    pVVar7->address = uVar19;
    pVVar7->usage = uVar9;
    if (iVar2 == 0) {
      uVar10 = 0;
    }
    if (local_88.SecondaryData != (ForElementType<TStatId>)0x0) {
      FMemory::Free((void *)local_88.SecondaryData);
    }
  }
  return uVar10;
}

// AllocateDescriptor @ 145adfcc0

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

FRHIDescriptorHandle __thiscall
FVulkanBindlessDescriptorManager::AllocateDescriptor
          (FVulkanBindlessDescriptorManager *this,VkSampler_T *param_1)

{
  FRHIDescriptorHandle local_res8;
  undefined1 local_res20 [8];
  FVulkanContextArray local_18;
  
  if (this->bIsSupported != false) {
    FRHIHeapDescriptorAllocator::Allocate
              (this->BindlessSetStates[0].Allocator,(ERHIDescriptorType)&local_res8);
    local_18._0_8_ = 0;
    local_18._8_8_ = 0;
    if (this->bIsSupported != false) {
      UpdateDescriptor(this,&local_18,local_res8,VK_DESCRIPTOR_TYPE_SAMPLER,
                       (VkDescriptorDataEXT)local_res20,true);
    }
    *(FRHIDescriptorHandle *)param_1 = local_res8;
    return (FRHIDescriptorHandle)param_1;
  }
  *(undefined8 *)param_1 = 0;
  *(undefined4 *)param_1 = 0xffffffff;
  param_1[4] = (VkSampler_T)0x9;
  return (FRHIDescriptorHandle)param_1;
}

// AllocateDescriptor @ 145adfd70

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

FRHIDescriptorHandle __thiscall
FVulkanBindlessDescriptorManager::AllocateDescriptor
          (FVulkanBindlessDescriptorManager *this,VkDescriptorType param_1)

{
  BindlessSetState *pBVar1;
  undefined4 in_register_00000014;
  FRHIDescriptorHandle FVar2;
  VkDescriptorType in_R8D;
  
  FVar2._4_4_ = in_register_00000014;
  FVar2.Index = param_1;
  if (this->bIsSupported != false) {
    GetUEDescriptorTypeFromVkDescriptorType(in_R8D);
    pBVar1 = GetBindlessState(this,in_R8D);
    FRHIHeapDescriptorAllocator::Allocate(pBVar1->Allocator,(ERHIDescriptorType)param_1);
    return FVar2;
  }
  *(undefined8 *)FVar2 = 0;
  *(undefined4 *)FVar2 = 0xffffffff;
  *(undefined1 *)((longlong)FVar2 + 4) = 9;
  return FVar2;
}

// AllocateDescriptor @ 145adfe00

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

FRHIDescriptorHandle __thiscall
FVulkanBindlessDescriptorManager::AllocateDescriptor
          (FVulkanBindlessDescriptorManager *this,VkDescriptorType param_1,FVulkanBuffer *param_2,
          uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  FRHIDescriptorHandle FVar5;
  bool bVar6;
  BindlessSetState *pBVar7;
  FRHIDescriptorHandle FVar8;
  ulong64 uVar9;
  undefined4 in_register_00000014;
  VkDescriptorType VVar10;
  undefined4 in_register_0000008c;
  longlong lVar11;
  FRHIDescriptorHandle local_res8;
  uint in_stack_00000028;
  FVulkanContextArray local_58;
  VkBufferDeviceAddressInfo local_48;
  
  lVar11 = CONCAT44(in_register_0000008c,param_3);
  FVar8._4_4_ = in_register_00000014;
  FVar8.Index = param_1;
  VVar10 = (VkDescriptorType)param_2;
  if (this->bIsSupported == false) {
    *(undefined8 *)FVar8 = 0;
    *(undefined4 *)FVar8 = 0xffffffff;
    *(undefined1 *)((longlong)FVar8 + 4) = 9;
    return FVar8;
  }
  GetUEDescriptorTypeFromVkDescriptorType(VVar10);
  pBVar7 = GetBindlessState(this,VVar10);
  FRHIHeapDescriptorAllocator::Allocate(pBVar7->Allocator,(ERHIDescriptorType)&local_res8);
  FVar5 = local_res8;
  uVar1 = *(uint *)(lVar11 + 0x114);
  iVar2 = *(int *)(lVar11 + 0x118);
  uVar3 = *(undefined8 *)(lVar11 + 0x108);
  local_58._0_8_ = 0;
  local_58._8_8_ = 0;
  if (this->bIsSupported != false) {
    if (1 < VVar10 - VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || (DescriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x37f,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        FVar8 = (FRHIDescriptorHandle)(*pcVar4)();
        return FVar8;
      }
    }
    local_48._4_8_ = 0;
    local_48.pNext._4_4_ = 0;
    local_48.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_48.buffer._0_4_ = (undefined4)uVar3;
    local_48.buffer._4_4_ = (undefined4)((ulonglong)uVar3 >> 0x20);
    uVar9 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_48);
    UpdateBuffer(this,&local_58,FVar5,VVar10,uVar9 + (iVar2 + in_stack_00000028),
                 (ulonglong)uVar1 - (ulonglong)in_stack_00000028,true);
  }
  *(FRHIDescriptorHandle *)FVar8 = local_res8;
  return FVar8;
}

// AllocateDescriptor @ 145adff70

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

FRHIDescriptorHandle __thiscall
FVulkanBindlessDescriptorManager::AllocateDescriptor
          (FVulkanBindlessDescriptorManager *this,VkDescriptorType param_1,ulong64 param_2,
          ulong64 param_3)

{
  BindlessSetState *pBVar1;
  undefined4 in_register_00000014;
  FRHIDescriptorHandle FVar2;
  VkDescriptorType VVar3;
  FRHIDescriptorHandle local_res8;
  ulong64 in_stack_00000028;
  FVulkanContextArray local_28;
  
  FVar2._4_4_ = in_register_00000014;
  FVar2.Index = param_1;
  VVar3 = (VkDescriptorType)param_2;
  if (this->bIsSupported == false) {
    *(undefined8 *)FVar2 = 0;
    *(undefined4 *)FVar2 = 0xffffffff;
    *(undefined1 *)((longlong)FVar2 + 4) = 9;
  }
  else {
    GetUEDescriptorTypeFromVkDescriptorType(VVar3);
    pBVar1 = GetBindlessState(this,VVar3);
    FRHIHeapDescriptorAllocator::Allocate(pBVar1->Allocator,(ERHIDescriptorType)&local_res8);
    local_28._0_8_ = 0;
    local_28._8_8_ = 0;
    UpdateBuffer(this,&local_28,local_res8,VVar3,param_3,in_stack_00000028,true);
    *(FRHIDescriptorHandle *)FVar2 = local_res8;
  }
  return FVar2;
}

// BindDescriptorBuffers @ 145ae0c40

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
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanBindlessDescriptorManager::BindDescriptorBuffers
          (FVulkanBindlessDescriptorManager *this,VkCommandBuffer_T *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStackY_98 [32];
  ulong64 local_58 [8];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (this->bIsSupported == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bIsSupported",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0x293,L"Trying to BindDescriptorBuffers but bindless is not supported!");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdBindDescriptorBuffersEXT)(param_1,8,this->BufferBindingInfo);
  local_58[0] = 0;
  local_58[1] = 0;
  local_58[2] = 0;
  local_58[3] = 0;
  local_58[4] = 0;
  local_58[5] = 0;
  local_58[6] = 0;
  local_58[7] = 0;
  if ((char)param_2 < '\0') {
    (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
              (param_1,VK_PIPELINE_BIND_POINT_GRAPHICS,this->BindlessPipelineLayout,0,8,
               this->BufferIndices,local_58);
  }
  if ((param_2 >> 0xb & 1) != 0) {
    (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
              (param_1,VK_PIPELINE_BIND_POINT_COMPUTE,this->BindlessPipelineLayout,0,8,
               this->BufferIndices,local_58);
  }
  if ((param_2 >> 0x15 & 1) != 0) {
    (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
              (param_1,VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,this->BindlessPipelineLayout,0,8,
               this->BufferIndices,local_58);
  }
  return;
}

// Deinit @ 145ae2c00

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

void __thiscall FVulkanBindlessDescriptorManager::Deinit(FVulkanBindlessDescriptorManager *this)

{
  VkDevice_T *pVVar1;
  FTempBlockAllocator *pFVar2;
  
  if (this->bIsSupported != false) {
    pVVar1 = this->Device->Device;
    (*VulkanDynamicAPI::vkDestroyPipelineLayout)
              (pVVar1,this->BindlessPipelineLayout,&VulkanRHI::GAllocationCallbacks);
    this->BindlessPipelineLayout = (VkPipelineLayout_T *)0x0;
    if (this->BindlessSetStates[0].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[0].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[0].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[0].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[0].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[0].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[0].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[0].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[1].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[1].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[1].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[1].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[1].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[1].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[1].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[1].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[2].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[2].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[2].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[2].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[2].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[2].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[2].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[2].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[3].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[3].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[3].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[3].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[3].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[3].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[3].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[3].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[4].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[4].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[4].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[4].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[4].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[4].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[4].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[4].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[5].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[5].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[5].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[5].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[5].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[5].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[5].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[5].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[6].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[6].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[6].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[6].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[6].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[6].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[6].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[6].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    if (this->BindlessSetStates[7].DescriptorTypes.ArrayNum != 0) {
      (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
                (pVVar1,this->BindlessSetStates[7].DescriptorSetLayout,
                 &VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[7].DescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
      (*VulkanDynamicAPI::vkDestroyBuffer)
                (pVVar1,this->BindlessSetStates[7].BufferHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[7].BufferHandle = (VkBuffer_T *)0x0;
      (*VulkanDynamicAPI::vkUnmapMemory)(pVVar1,this->BindlessSetStates[7].MemoryHandle);
      (*VulkanDynamicAPI::vkFreeMemory)
                (pVVar1,this->BindlessSetStates[7].MemoryHandle,&VulkanRHI::GAllocationCallbacks);
      this->BindlessSetStates[7].MemoryHandle = (VkDeviceMemory_T *)0x0;
    }
    (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
              (pVVar1,this->SingleUseUBDescriptorSetLayout,&VulkanRHI::GAllocationCallbacks);
    this->SingleUseUBDescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
    (*VulkanDynamicAPI::vkDestroyDescriptorSetLayout)
              (pVVar1,this->EmptyDescriptorSetLayout,&VulkanRHI::GAllocationCallbacks);
    pFVar2 = this->SingleUseUBAllocator;
    this->EmptyDescriptorSetLayout = (VkDescriptorSetLayout_T *)0x0;
    if (pFVar2 != (FTempBlockAllocator *)0x0) {
      (**(code **)pFVar2->_padding_)(pFVar2,1);
    }
    this->SingleUseUBAllocator = (FTempBlockAllocator *)0x0;
  }
  return;
}

// FreeDescriptor @ 145ae56e0

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
FVulkanBindlessDescriptorManager::FreeDescriptor
          (FVulkanBindlessDescriptorManager *this,FRHIDescriptorHandle param_1)

{
  BindlessSetState *pBVar1;
  
  if ((param_1.Index != 0xffffffff) && (param_1.Type != Invalid)) {
    pBVar1 = GetBindlessState(this,param_1.Type);
    FRHIHeapDescriptorAllocator::Free(pBVar1->Allocator,param_1);
    memset(pBVar1->CPUDescriptorMemory + pBVar1->DescriptorSize * param_1.Index,0,
           (ulonglong)pBVar1->DescriptorSize);
  }
  return;
}

// GetBindlessState @ 145ae5f30

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

BindlessSetState * __thiscall
FVulkanBindlessDescriptorManager::GetBindlessState
          (FVulkanBindlessDescriptorManager *this,ERHIDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  BindlessSetState *pBVar3;
  longlong lVar4;
  
  switch(param_1) {
  case BufferSRV:
    lVar4 = 2;
    break;
  case BufferUAV:
    lVar4 = 1;
    break;
  case TypedBufferSRV:
    lVar4 = 6;
    break;
  case TypedBufferUAV:
    lVar4 = 5;
    break;
  case TextureSRV:
    lVar4 = 4;
    break;
  case TextureUAV:
    lVar4 = 3;
    break;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0x90,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pBVar3 = (BindlessSetState *)(*pcVar1)();
      return pBVar3;
    }
    lVar4 = 9;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetIndex < VulkanBindless::NumBindlessSets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0xeb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pBVar3 = (BindlessSetState *)(*pcVar1)();
      return pBVar3;
    }
    break;
  case Sampler:
    lVar4 = 0;
    break;
  case AccelerationStructure:
    lVar4 = 7;
  }
  return this->BindlessSetStates + lVar4;
}

// GetBindlessState @ 145ae6030

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

BindlessSetState * __thiscall
FVulkanBindlessDescriptorManager::GetBindlessState
          (FVulkanBindlessDescriptorManager *this,VkDescriptorType param_1)

{
  code *pcVar1;
  bool bVar2;
  BindlessSetState *pBVar3;
  longlong lVar4;
  
  if ((int)param_1 < 0x3b9d13f1) {
    if (param_1 == VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR) {
      lVar4 = 7;
      goto LAB_145ae60eb;
    }
    switch(param_1) {
    case VK_DESCRIPTOR_TYPE_SAMPLER:
      lVar4 = 0;
      break;
    default:
      goto switchD_145ae6060_caseD_1;
    case VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE:
      lVar4 = 4;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_IMAGE:
      lVar4 = 3;
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER:
      lVar4 = 6;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER:
      lVar4 = 5;
      break;
    case VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER:
      lVar4 = 2;
      break;
    case VK_DESCRIPTOR_TYPE_STORAGE_BUFFER:
      lVar4 = 1;
    }
  }
  else {
switchD_145ae6060_caseD_1:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0x7e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pBVar3 = (BindlessSetState *)(*pcVar1)();
      return pBVar3;
    }
    lVar4 = 9;
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SetIndex < VulkanBindless::NumBindlessSets",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                       ,0xf2,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pBVar3 = (BindlessSetState *)(*pcVar1)();
      return pBVar3;
    }
  }
LAB_145ae60eb:
  return this->BindlessSetStates + lVar4;
}

// Init @ 145ae83b0

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FVulkanBindlessDescriptorManager::Init(FVulkanBindlessDescriptorManager *this)

{
  int *piVar1;
  FVulkanDevice *pFVar2;
  FVulkanDevice *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  VkResult VVar7;
  uint uVar8;
  int iVar9;
  FTempBlockAllocator *this_00;
  FTempBlockAllocator *pFVar10;
  longlong lVar11;
  ForElementType<VkDescriptorType> FVar12;
  ForElementType<VkDescriptorType> FVar13;
  ForElementType<VkDescriptorType> *pFVar14;
  ulonglong uVar15;
  longlong lVar16;
  VkDescriptorBufferBindingInfoEXT *pVVar17;
  ForAnyElementType FVar18;
  undefined1 auStackY_248 [32];
  undefined4 local_1f8 [2];
  FVulkanBindlessDescriptorManager *local_1f0;
  ForAnyElementType local_1e8;
  int local_1e0 [2];
  VkDevice_T *local_1d8;
  undefined4 local_1d0 [2];
  ForElementType<VkDescriptorType> local_1c8;
  VkDescriptorSetLayoutCreateInfo local_1c0;
  VkDescriptorSetLayoutBinding local_1a0;
  VkDescriptorSetLayoutCreateInfo local_188;
  FString local_168;
  undefined4 local_158;
  undefined8 local_154;
  undefined8 uStack_14c;
  undefined4 local_144;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 uStack_130;
  undefined4 uStack_128;
  undefined4 local_124;
  undefined8 uStack_120;
  VkPipelineLayoutCreateInfo local_118;
  int local_e8 [2];
  ForElementType<VkDescriptorType> local_e0;
  VkDescriptorSetLayoutCreateInfo local_d8;
  VkDevice_T **local_b8;
  VkPhysicalDeviceDescriptorBufferPropertiesEXT *local_b0;
  FVulkanBindlessDescriptorManager *local_a8;
  VkPushConstantRange local_a0 [2];
  VkDescriptorSetLayout_T *local_88;
  VkDescriptorSetLayout_T *local_80;
  VkDescriptorSetLayout_T *local_78;
  VkDescriptorSetLayout_T *local_70;
  VkDescriptorSetLayout_T *local_68;
  VkDescriptorSetLayout_T *local_60;
  VkDescriptorSetLayout_T *local_58;
  VkDescriptorSetLayout_T *local_50;
  VkDescriptorSetLayout_T *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (this->bIsSupported != false) {
    pFVar2 = this->Device;
    local_1d8 = pFVar2->Device;
    this_00 = ::operator_new(0x50);
    pFVar10 = (FTempBlockAllocator *)0x0;
    if (this_00 != (FTempBlockAllocator *)0x0) {
      pFVar10 = VulkanRHI::FTempBlockAllocator::FTempBlockAllocator
                          (this_00,this->Device,GVulkanBindlessBlockSize,
                           (uint)(pFVar2->OptionalDeviceExtensionProperties).DescriptorBufferProps.
                                 descriptorBufferOffsetAlignment,0x420000);
    }
    this->SingleUseUBAllocator = pFVar10;
    local_d8.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    local_d8._20_8_ = 0;
    local_d8.pBindings._4_4_ = 0;
    local_d8._4_8_ = 0;
    local_d8._12_8_ = 0x1000000000;
    VVar7 = (*VulkanDynamicAPI::vkCreateDescriptorSetLayout)
                      (local_1d8,&local_d8,&VulkanRHI::GAllocationCallbacks,
                       &this->EmptyDescriptorSetLayout);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,
                 "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &EmptyDescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &EmptyDescriptorSetLayout)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x184);
    }
    local_1f0 = this;
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_SAMPLER);
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE);
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_STORAGE_IMAGE);
    lVar16 = 4;
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER);
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER);
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_STORAGE_BUFFER);
    `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
              (&local_1f0,VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER);
    uVar15 = (this->Device->OptionalDeviceExtensions).field0_0x0.Packed;
    if (((uVar15 >> 10 & 1) == 0) ||
       (((((uint)uVar15 & 0x2800) != 0x2800 && ((uVar15 >> 0xc & 1) == 0)) ||
        ((uVar15 & 0x17000004000) != 0x17000004000)))) {
      FVar13 = this->BindlessSetStates[7].DescriptorTypes.AllocatorInstance.SecondaryData;
      FVar12 = (ForElementType<VkDescriptorType>)(this->BindlessSetStates + 7);
      local_1f8[0] = 7;
      if (FVar13 == (ForElementType<VkDescriptorType>)0x0) {
        FVar13 = FVar12;
      }
      if ((((ulonglong)FVar13 <= local_1f8) &&
          (local_1f8 <
           (undefined4 *)
           ((longlong)FVar13 + (longlong)this->BindlessSetStates[7].DescriptorTypes.ArrayMax * 4)))
         && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar9 = this->BindlessSetStates[7].DescriptorTypes.ArrayNum;
      piVar1 = &this->BindlessSetStates[7].DescriptorTypes.ArrayMax;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<enum_VkDescriptorType>_>
                          (0x404,(ForElementType<VkDescriptorType> *)FVar12,piVar1);
      }
      this->BindlessSetStates[7].DescriptorTypes.ArrayNum = iVar9 + 1;
      FVar13 = this->BindlessSetStates[7].DescriptorTypes.AllocatorInstance.SecondaryData;
      if (FVar13 == (ForElementType<VkDescriptorType>)0x0) {
        FVar13 = FVar12;
      }
      *(undefined4 *)((longlong)FVar13 + (longlong)iVar9 * 4) = local_1f8[0];
      pTVar5 = GCVarRobustBufferAccess.Ref;
      pFVar3 = this->Device;
      bVar6 = IsInParallelGameThread();
      if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
        lVar16 = 0;
      }
      lVar11 = 0x24f0;
      if (*(int *)((longlong)pTVar5->ShadowedValue + lVar16) < 1) {
        lVar11 = 0x24e8;
      }
      this->BindlessSetStates[7].DescriptorSize =
           *(uint *)((longlong)(pFVar3->GlobalSamplers).Elements + lVar11);
      this->BindlessSetStates[7].DescriptorCapacity = 0x10;
    }
    else {
      `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_1>::operator()
                (&local_1f0,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR);
    }
    local_b8 = &local_1d8;
    uVar15 = 0;
    pVVar17 = this->BufferBindingInfo;
    lVar16 = 8;
    pFVar14 = &this->BindlessSetStates[0].DescriptorTypes.AllocatorInstance.SecondaryData;
    local_b0 = &(pFVar2->OptionalDeviceExtensionProperties).DescriptorBufferProps;
    local_a8 = this;
    do {
      iVar9 = *(int *)(pFVar14 + 1);
      if (iVar9 == 0) {
        FVar12 = (ForElementType<VkDescriptorType>)this->EmptyDescriptorSetLayout;
      }
      else {
        local_1a0.descriptorCount = *(uint *)(pFVar14 + 4);
        FVar12 = *pFVar14;
        local_144 = 0;
        uStack_140 = local_1d0;
        local_1c0.pBindings = &local_1a0;
        local_1c0.pNext = &local_158;
        local_1a0.binding = 0;
        local_1a0.stageFlags = 0x7fffffff;
        local_1a0.pImmutableSamplers = (VkSampler_T **)0x0;
        local_1d0[0] = 0;
        local_158 = 0x3b9d3ee8;
        local_1c0.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
        local_1c0.bindingCount = 1;
        local_1c0._4_4_ = 0;
        local_1c0.flags = 0x10;
        local_154 = 0;
        uStack_14c = 0x100000000;
        if (iVar9 == 1) {
          if (FVar12 == (ForElementType<VkDescriptorType>)0x0) {
            FVar12 = (ForElementType<VkDescriptorType>)(pFVar14 + -1);
          }
          local_1a0.descriptorType = *(VkDescriptorType *)FVar12;
        }
        else {
          local_1a0.descriptorType = VK_DESCRIPTOR_TYPE_MUTABLE_EXT;
          local_134 = 0;
          local_e0 = FVar12;
          if (FVar12 == (ForElementType<VkDescriptorType>)0x0) {
            local_e0 = (ForElementType<VkDescriptorType>)(pFVar14 + -1);
          }
          local_124 = 0;
          uStack_120 = local_e8;
          uStack_130 = &local_158;
          local_1c0.pNext = &local_138;
          local_138 = 0x3ba0251a;
          uStack_128 = 1;
          local_e8[0] = iVar9;
        }
        local_1c8 = (ForElementType<VkDescriptorType>)0x0;
        VVar7 = (*VulkanDynamicAPI::vkCreateDescriptorSetLayout)
                          (local_1d8,&local_1c0,&VulkanRHI::GAllocationCallbacks,
                           (VkDescriptorSetLayout_T **)&local_1c8);
        FVar12 = local_1c8;
        if (VVar7 != VK_SUCCESS) {
          VulkanRHI::VerifyVulkanResult
                    (VVar7,
                     "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &DescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &DescriptorSetLayout)"
                     ,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                     ,0x1e0);
          FVar12 = local_1c8;
        }
      }
      pFVar14[3] = FVar12;
      uVar8 = `FVulkanBindlessDescriptorManager::Init'::__l11::<lambda_3>::operator()
                        (&local_b8,(BindlessSetState *)(pFVar14 + -1),pVVar17);
      uVar15 = (ulonglong)((int)uVar15 + uVar8);
      pFVar14 = pFVar14 + 10;
      pVVar17 = pVVar17 + 1;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    uVar8 = 0;
    local_1e8.Data = (FScriptContainerElement *)0x0;
    local_1e0[0] = 0;
    local_1e0[1] = 0;
    iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x18,8,0x60,&local_1e8,local_1e0,local_1e0 + 1);
    memset(local_1e8.Data + (longlong)iVar9 * 0x18,0,0x900);
    do {
      if (local_1e0[0] <= (int)uVar8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      lVar16 = (longlong)(int)uVar8 * 0x18;
      *(uint *)(local_1e8.Data + lVar16) = uVar8;
      if (local_1e0[0] <= (int)uVar8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)(local_1e8.Data + lVar16 + 4) = 6;
      if (local_1e0[0] <= (int)uVar8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      *(undefined4 *)(local_1e8.Data + lVar16 + 8) = 1;
      if (local_1e0[0] <= (int)uVar8) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar8 = uVar8 + 1;
      *(undefined4 *)(local_1e8.Data + lVar16 + 0xc) = 0x7fffffff;
    } while (uVar8 < 0x60);
    local_188.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_SET_LAYOUT_CREATE_INFO;
    local_188.pBindings._0_4_ = SUB84(local_1e8.Data,0);
    local_188.pBindings._4_4_ = (undefined4)((ulonglong)local_1e8.Data >> 0x20);
    local_188._4_4_ = 0;
    local_188.bindingCount = 0x60;
    local_188.flags = 0x10;
    local_188.pNext._0_4_ = 0;
    local_188.pNext._4_4_ = 0;
    VVar7 = (*VulkanDynamicAPI::vkCreateDescriptorSetLayout)
                      (local_1d8,&local_188,&VulkanRHI::GAllocationCallbacks,
                       &this->SingleUseUBDescriptorSetLayout);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,
                 "VulkanRHI::vkCreateDescriptorSetLayout(DeviceHandle, &DescriptorSetLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &SingleUseUBDescriptorSetLayout)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x268);
    }
    if (local_1e8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e8.Data);
    }
    if ((pFVar2->OptionalDeviceExtensionProperties).DescriptorBufferProps.
        resourceDescriptorBufferAddressSpaceSize <= uVar15) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("TotalResourceDescriptorBufferSize < DescriptorBufferProperties.resourceDescriptorBufferAddressSpaceSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x26d,
                         L"Combined resource descriptor buffer size of [%u] exceeded maximum [%llu]."
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    local_88 = this->BindlessSetStates[0].DescriptorSetLayout;
    uVar15 = (ulonglong)GMaxRHIShaderPlatform;
    local_80 = this->BindlessSetStates[1].DescriptorSetLayout;
    local_78 = this->BindlessSetStates[2].DescriptorSetLayout;
    local_70 = this->BindlessSetStates[3].DescriptorSetLayout;
    local_68 = this->BindlessSetStates[4].DescriptorSetLayout;
    local_60 = this->BindlessSetStates[5].DescriptorSetLayout;
    local_58 = this->BindlessSetStates[6].DescriptorSetLayout;
    local_50 = this->BindlessSetStates[7].DescriptorSetLayout;
    local_48 = this->SingleUseUBDescriptorSetLayout;
    local_118.pushConstantRangeCount = 0;
    local_118._36_4_ = 0;
    local_118.pPushConstantRanges._0_4_ = 0;
    local_118.pPushConstantRanges._4_4_ = 0;
    local_118.pSetLayouts = &local_88;
    local_118.sType = VK_STRUCTURE_TYPE_PIPELINE_LAYOUT_CREATE_INFO;
    local_118._4_8_ = 0;
    local_118._12_8_ = 0;
    local_118.setLayoutCount = 9;
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid(Platform)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                         ,0x2fa,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].StaticShaderBindingLayoutSupport != 0) {
      uVar15 = (ulonglong)GMaxRHIShaderPlatform;
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].bContainsValidPlatformInfo == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2fa,L"");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (FGenericDataDrivenShaderPlatformInfo::Infos[uVar15].StaticShaderBindingLayoutSupport != 1)
      {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("RHIGetStaticShaderBindingLayoutSupport(GMaxRHIShaderPlatform) == ERHIStaticShaderBindingLayoutSupport::RayTracingOnly"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x284,
                           L"StaticShaderBindingLayoutSupport is currently only supported for ray gen shaders in Vulkan."
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      local_118.pPushConstantRanges = local_a0;
      local_a0[0].offset = 0;
      local_a0[0].size = 0x20;
      local_a0[0].stageFlags = 0x100;
      local_118.pushConstantRangeCount = 1;
    }
    VVar7 = (*VulkanDynamicAPI::vkCreatePipelineLayout)
                      (local_1d8,&local_118,&VulkanRHI::GAllocationCallbacks,
                       &this->BindlessPipelineLayout);
    if (VVar7 != VK_SUCCESS) {
      VulkanRHI::VerifyVulkanResult
                (VVar7,
                 "VulkanRHI::vkCreatePipelineLayout(DeviceHandle, &PipelineLayoutCreateInfo, VULKAN_CPU_ALLOCATOR, &BindlessPipelineLayout)"
                 ,
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                 ,0x28c);
    }
    pFVar2 = this->Device;
    ::FString::PrintfImpl(&local_168,L"BindlessPipelineLayout(SetCount=%d)");
    FVar18.Data = (FScriptContainerElement *)L"";
    if (local_168.Data.ArrayNum != 0) {
      FVar18.Data = local_168.Data.AllocatorInstance.Data;
    }
    FVulkanDevice::VulkanSetObjectName
              (pFVar2,VK_OBJECT_TYPE_PIPELINE_LAYOUT,(ulong64)this->BindlessPipelineLayout,
               (wchar_t *)FVar18.Data);
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RegisterUniformBuffers @ 145af2650

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
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanBindlessDescriptorManager::RegisterUniformBuffers
          (FVulkanBindlessDescriptorManager *this,FVulkanCommandListContext *param_1,
          VkPipelineBindPoint param_2,
          TStaticArray<TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_>,6,4294967295>
          *param_3)

{
  uint uVar1;
  FVulkanDevice *pFVar2;
  VkCommandBuffer_T *pVVar3;
  code *pcVar4;
  void *pvVar5;
  ulong64 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  VkStructureType VVar9;
  TConsoleVariableData<int> *pTVar10;
  bool bVar11;
  uint uVar12;
  longlong lVar13;
  VkDescriptorBufferBindingInfoEXT *pVVar14;
  uchar *puVar15;
  FVulkanCommandBuffer *pFVar16;
  longlong lVar17;
  VkDescriptorBufferBindingInfoEXT *pVVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  undefined1 auStackY_238 [32];
  VkDescriptorGetInfoEXT local_1e8;
  ulong64 local_1c8 [10];
  VkDescriptorBufferBindingInfoEXT local_178 [8];
  VkDescriptorBufferBindingInfoEXT local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_238;
  if ((this->bIsSupported == false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("bIsSupported",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                          ,0x2a9,L"Trying to RegisterUniformBuffers but bindless is not supported!")
     , bVar11)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar10 = GCVarRobustBufferAccess.Ref;
  pFVar2 = this->Device;
  bVar11 = IsInParallelGameThread();
  if ((bVar11) || (bVar11 = IsInGameThread(), bVar11)) {
    lVar17 = 0;
  }
  else {
    lVar17 = 4;
  }
  lVar13 = 0x24e0;
  if (*(int *)((longlong)pTVar10->ShadowedValue + lVar17) < 1) {
    lVar13 = 0x24d8;
  }
  lVar17 = 2;
  uVar1 = *(uint *)((longlong)(pFVar2->GlobalSamplers).Elements + lVar13);
  pVVar14 = local_178;
  pVVar18 = this->BufferBindingInfo;
  do {
    uVar7 = *(undefined4 *)&pVVar18->field_0x4;
    pvVar5 = pVVar18->pNext;
    uVar6 = pVVar18->address;
    uVar19 = pVVar18->usage;
    uVar8 = *(undefined4 *)&pVVar18->field_0x1c;
    pVVar14->sType = pVVar18->sType;
    *(undefined4 *)&pVVar14->field_0x4 = uVar7;
    pVVar14->pNext = pvVar5;
    VVar9 = pVVar18[1].sType;
    uVar7 = *(undefined4 *)&pVVar18[1].field_0x4;
    pvVar5 = pVVar18[1].pNext;
    pVVar14->address = uVar6;
    pVVar14->usage = uVar19;
    *(undefined4 *)&pVVar14->field_0x1c = uVar8;
    uVar6 = pVVar18[1].address;
    uVar19 = pVVar18[1].usage;
    uVar8 = *(undefined4 *)&pVVar18[1].field_0x1c;
    pVVar14[1].sType = VVar9;
    *(undefined4 *)&pVVar14[1].field_0x4 = uVar7;
    pVVar14[1].pNext = pvVar5;
    VVar9 = pVVar18[2].sType;
    uVar7 = *(undefined4 *)&pVVar18[2].field_0x4;
    pvVar5 = pVVar18[2].pNext;
    pVVar14[1].address = uVar6;
    pVVar14[1].usage = uVar19;
    *(undefined4 *)&pVVar14[1].field_0x1c = uVar8;
    uVar6 = pVVar18[2].address;
    uVar19 = pVVar18[2].usage;
    uVar8 = *(undefined4 *)&pVVar18[2].field_0x1c;
    pVVar14[2].sType = VVar9;
    *(undefined4 *)&pVVar14[2].field_0x4 = uVar7;
    pVVar14[2].pNext = pvVar5;
    VVar9 = pVVar18[3].sType;
    uVar7 = *(undefined4 *)&pVVar18[3].field_0x4;
    pvVar5 = pVVar18[3].pNext;
    pVVar14[2].address = uVar6;
    pVVar14[2].usage = uVar19;
    *(undefined4 *)&pVVar14[2].field_0x1c = uVar8;
    uVar6 = pVVar18[3].address;
    uVar19 = pVVar18[3].usage;
    uVar8 = *(undefined4 *)&pVVar18[3].field_0x1c;
    pVVar14[3].sType = VVar9;
    *(undefined4 *)&pVVar14[3].field_0x4 = uVar7;
    pVVar14[3].pNext = pvVar5;
    pVVar14[3].address = uVar6;
    pVVar14[3].usage = uVar19;
    *(undefined4 *)&pVVar14[3].field_0x1c = uVar8;
    lVar17 = lVar17 + -1;
    pVVar14 = pVVar14 + 4;
    pVVar18 = pVVar18 + 4;
  } while (lVar17 != 0);
  local_1c8[8] = 0;
  local_1c8[0] = 0;
  local_1c8[1] = 0;
  local_1c8[2] = 0;
  local_1c8[3] = 0;
  local_1c8[4] = 0;
  local_1c8[5] = 0;
  local_1c8[6] = 0;
  local_1c8[7] = 0;
  puVar15 = VulkanRHI::FTempBlockAllocator::Alloc
                      (this->SingleUseUBAllocator,uVar1 * 0x60,(FVulkanContextCommon *)param_1,
                       &local_78,local_1c8 + 8);
  piVar22 = &param_3->Elements[0].ArrayNum;
  iVar21 = 0;
  do {
    if (*piVar22 != 0) {
      if (0x10 < (uint)*piVar22) {
        bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("DescriptorAddressInfos.Num() <= VulkanBindless::MaxUniformBuffersPerStage"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                            ,0x2c0,L"");
        if (bVar11) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar19 = *piVar22;
      uVar20 = 0;
      if (0 < (int)uVar19) {
        do {
          uVar12 = 0;
          if ((int)uVar20 < (int)uVar19) {
            uVar12 = ~uVar20 >> 0x1f;
          }
          if (uVar12 == 0) {
            bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar11) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          local_1e8.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT;
          local_1e8._20_4_ = 0;
          local_1e8._4_8_ = 0;
          local_1e8._12_8_ = 0x600000000;
          local_1e8.data.pSampler =
               (VkSampler_T **)
               ((((TArray<VkDescriptorAddressInfoEXT,TSizedDefaultAllocator<32>_> *)(piVar22 + -2))
                ->AllocatorInstance).Data + (longlong)(int)uVar20 * 0x28);
          (*VulkanDynamicAPI::vkGetDescriptorEXT)
                    (this->Device->Device,&local_1e8,(ulonglong)uVar1,
                     puVar15 + (uVar20 + iVar21 * 0x10) * uVar1);
          uVar19 = *piVar22;
          uVar20 = uVar20 + 1;
        } while ((int)uVar20 < (int)uVar19);
      }
    }
    iVar21 = iVar21 + 1;
    piVar22 = piVar22 + 4;
  } while (iVar21 < 6);
  pFVar16 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  pVVar3 = pFVar16->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdBindDescriptorBuffersEXT)(pVVar3,9,local_178);
  (*VulkanDynamicAPI::vkCmdSetDescriptorBufferOffsetsEXT)
            (pVVar3,param_2,this->BindlessPipelineLayout,0,9,this->BufferIndices,local_1c8);
  return;
}

// UpdateAccelerationStructure @ 145af6300

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateAccelerationStructure
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkAccelerationStructureKHR_T *param_3,bool param_4)

{
  VkDescriptorDataEXT VVar1;
  VkAccelerationStructureDeviceAddressInfoKHR local_28;
  
  if (this->bIsSupported != false) {
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.sType = VK_STRUCTURE_TYPE_ACCELERATION_STRUCTURE_DEVICE_ADDRESS_INFO_KHR;
    local_28.accelerationStructure = param_3;
    VVar1.pSampler =
         (VkSampler_T **)
         (*VulkanDynamicAPI::vkGetAccelerationStructureDeviceAddressKHR)
                   (this->Device->Device,&local_28);
    UpdateDescriptor(this,param_1,param_2,VK_DESCRIPTOR_TYPE_ACCELERATION_STRUCTURE_KHR,VVar1,
                     param_4);
  }
  return;
}

// UpdateBuffer @ 145af6390

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateBuffer
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkDescriptorType param_3,VkBuffer_T *param_4,ulong64 param_5,
          ulong64 param_6,bool param_7)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  VkBufferDeviceAddressInfo local_28;
  
  if (this->bIsSupported != false) {
    if (1 < param_3 - VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || (DescriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x37f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_28.buffer = param_4;
    uVar3 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_28);
    UpdateBuffer(this,param_1,param_2,param_3,param_5 + uVar3,param_6,param_7);
  }
  return;
}

// UpdateBuffer @ 145af6480

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateBuffer
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkDescriptorType param_3,ulong64 param_4,ulong64 param_5,
          bool param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined4 local_38;
  undefined8 local_34;
  undefined4 uStack_2c;
  ulong64 uStack_28;
  ulong64 uStack_20;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (this->bIsSupported != false) {
    if (1 < param_3 - VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) || (DescriptorType == VK_DESCRIPTOR_TYPE_STORAGE_BUFFER)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x38e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_38 = 0x3b9f9c63;
    local_14 = 0;
    uStack_18 = 0;
    local_34 = 0;
    uStack_2c = 0;
    uStack_28 = param_4;
    uStack_20 = param_5;
    UpdateDescriptor(this,param_1,param_2,param_3,(VkDescriptorDataEXT)&local_38,param_6);
  }
  return;
}

// UpdateDescriptor @ 145af6560

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
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */

void __thiscall
FVulkanBindlessDescriptorManager::UpdateDescriptor
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkDescriptorType param_3,VkDescriptorDataEXT param_4,
          bool param_5)

{
  uint uVar1;
  FVulkanContextCommon *this_00;
  VkBuffer_T *pVVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var4;
  bool bVar5;
  BindlessSetState *pBVar6;
  FVulkanCommandBuffer *pFVar7;
  void *_Dst;
  VkBuffer_T *pVVar8;
  ulonglong uVar9;
  uchar *_Src;
  undefined1 auStackY_138 [32];
  FStagingBuffer *local_108;
  VkMemoryBarrier2 local_100;
  VkDescriptorGetInfoEXT local_d0;
  VkDependencyInfo local_a8;
  VkBufferCopy local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_138;
  if (((param_2.Index == 0xffffffff) || (param_2.Type == Invalid)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("DescriptorHandle.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x31e,L"Attemping to update invalid descriptor handle!"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pBVar6 = GetBindlessState(this,param_2.Type);
  local_d0._20_4_ = 0;
  local_d0._4_8_ = 0;
  local_d0.sType = VK_STRUCTURE_TYPE_DESCRIPTOR_GET_INFO_EXT;
  local_d0._12_8_ = (ulonglong)param_3 << 0x20;
  local_d0.data.accelerationStructure._0_4_ = (undefined4)param_4.accelerationStructure;
  local_d0.data.accelerationStructure._4_4_ = (undefined4)((ulonglong)param_4 >> 0x20);
  uVar9 = (ulonglong)(param_2.Index * pBVar6->DescriptorSize);
  _Src = pBVar6->CPUDescriptorMemory + uVar9;
  (*VulkanDynamicAPI::vkGetDescriptorEXT)
            (this->Device->Device,&local_d0,(ulonglong)pBVar6->DescriptorSize,_Src);
  if (!param_5) {
    this_00 = *(FVulkanContextCommon **)param_1;
    if (this_00 == (FVulkanContextCommon *)0x0) {
      return;
    }
    pFVar7 = FVulkanContextCommon::GetCommandBuffer(this_00);
    if (pFVar7->State != IsInsideRenderPass) {
      local_108 = VulkanRHI::FStagingManager::AcquireBuffer
                            (&this->Device->StagingManager,pBVar6->DescriptorSize,1,
                             VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
      uVar1 = pBVar6->DescriptorSize;
      _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer(local_108);
      memcpy(_Dst,_Src,(ulonglong)uVar1);
      local_100.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER_2;
      local_a8.sType = VK_STRUCTURE_TYPE_DEPENDENCY_INFO;
      local_100.srcAccessMask._0_4_ = 0x18000;
      local_100.srcAccessMask._4_4_ = 0x200;
      local_a8.bufferMemoryBarrierCount = 0;
      local_a8._52_8_ = 0;
      local_a8.pImageMemoryBarriers._4_4_ = 0;
      local_a8.pMemoryBarriers = &local_100;
      local_100._4_8_ = 0;
      local_100.pNext._4_4_ = 0;
      local_100.srcStageMask._0_4_ = 0x10000;
      local_100.srcStageMask._4_4_ = 0;
      local_100.dstStageMask._0_4_ = 0x1000;
      local_100.dstStageMask._4_4_ = 0;
      local_100.dstAccessMask._0_4_ = 0x1800;
      local_100.dstAccessMask._4_4_ = 0;
      local_a8._4_8_ = 0;
      local_a8._12_8_ = 0;
      local_a8.memoryBarrierCount = 1;
      local_a8._36_8_ = 0;
      local_a8._44_8_ = 0;
      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pFVar7->CommandBufferHandle,&local_a8);
      p_Var4 = VulkanDynamicAPI::vkCmdCopyBuffer;
      local_68.size = (ulong64)pBVar6->DescriptorSize;
      pVVar2 = pBVar6->BufferHandle;
      local_68.srcOffset = 0;
      local_68.dstOffset = uVar9;
      pVVar8 = VulkanRHI::FStagingBuffer::GetHandle(local_108);
      (*p_Var4)(pFVar7->CommandBufferHandle,pVVar8,pVVar2,1,&local_68);
      local_100.srcStageMask._0_4_ = 0x1000;
      local_100.srcStageMask._4_4_ = 0;
      local_100.dstAccessMask._0_4_ = 0;
      local_100.dstAccessMask._4_4_ = 0x200;
      local_100.srcAccessMask._0_4_ = 0x1800;
      local_100.srcAccessMask._4_4_ = 0;
      local_100.dstStageMask._0_4_ = 0x10000;
      local_100.dstStageMask._4_4_ = 0;
      (*VulkanDynamicAPI::vkCmdPipelineBarrier2KHR)(pFVar7->CommandBufferHandle,&local_a8);
      VulkanRHI::FStagingManager::ReleaseBuffer(&this->Device->StagingManager,this_00,&local_108);
      return;
    }
  }
  memcpy(pBVar6->MappedPointer + uVar9,_Src,(ulonglong)pBVar6->DescriptorSize);
  return;
}

// UpdateImage @ 145af67e0

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateImage
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkDescriptorType param_3,VkImageView_T *param_4,bool param_5,
          bool param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 local_28;
  VkImageView_T *local_20;
  undefined4 local_18;
  
  if (this->bIsSupported != false) {
    if ((1 < param_3 - VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(DescriptorType == VK_DESCRIPTOR_TYPE_SAMPLED_IMAGE) || (DescriptorType == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                           ,0x36d,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_28 = 0;
    if (param_3 == VK_DESCRIPTOR_TYPE_STORAGE_IMAGE) {
      local_18 = 1;
    }
    else {
      local_18 = 5;
      if (param_5) {
        local_18 = 0x3b9f9490;
      }
    }
    local_20 = param_4;
    UpdateDescriptor(this,param_1,param_2,param_3,(VkDescriptorDataEXT)&local_28,param_6);
  }
  return;
}

// UpdateSampler @ 145af6970

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateSampler
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkSampler_T *param_3)

{
  VkSampler_T *local_res20;
  
  if (this->bIsSupported != false) {
    local_res20 = param_3;
    UpdateDescriptor(this,param_1,param_2,VK_DESCRIPTOR_TYPE_SAMPLER,
                     (VkDescriptorDataEXT)&local_res20,true);
  }
  return;
}

// UpdateTexelBuffer @ 145af69b0

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

void __thiscall
FVulkanBindlessDescriptorManager::UpdateTexelBuffer
          (FVulkanBindlessDescriptorManager *this,FVulkanContextArray *param_1,
          FRHIDescriptorHandle param_2,VkDescriptorType param_3,VkBufferViewCreateInfo *param_4,
          bool param_5)

{
  code *pcVar1;
  bool bVar2;
  ulong64 uVar3;
  VkBufferDeviceAddressInfo local_48;
  undefined4 local_30;
  undefined8 local_2c;
  undefined4 uStack_24;
  longlong lStack_20;
  undefined4 uStack_18;
  undefined4 uStack_14;
  VkFormat VStack_10;
  undefined4 local_c;
  
  if (this->bIsSupported != false) {
    if (1 < param_3 - VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_TEXEL_BUFFER) || (DescriptorType == VK_DESCRIPTOR_TYPE_STORAGE_TEXEL_BUFFER)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanBindlessDescriptorManager.cpp"
                         ,0x39f,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    local_48._4_8_ = 0;
    local_48.pNext._4_4_ = 0;
    local_48.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
    local_48.buffer._0_4_ = SUB84(param_4->buffer,0);
    local_48.buffer._4_4_ = (undefined4)((ulonglong)param_4->buffer >> 0x20);
    uVar3 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_48);
    lStack_20 = uVar3 + param_4->offset;
    local_30 = 0x3b9f9c63;
    local_2c = 0;
    uStack_24 = 0;
    uStack_18 = (undefined4)param_4->range;
    uStack_14 = (undefined4)(param_4->range >> 0x20);
    VStack_10 = param_4->format;
    local_c = 0;
    UpdateDescriptor(this,param_1,param_2,param_3,(VkDescriptorDataEXT)&local_30,param_5);
  }
  return;
}

// UpdateUBAllocator @ 145af6ad0

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
FVulkanBindlessDescriptorManager::UpdateUBAllocator(FVulkanBindlessDescriptorManager *this)

{
  int *piVar1;
  longlong *plVar2;
  FTempBlockAllocator *pFVar3;
  longlong lVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  FPlatformRWLock *SRWLock;
  longlong *plVar12;
  longlong lVar13;
  uint uVar14;
  undefined1 auStackX_8 [8];
  uint uStackX_10;
  uint uStackX_18;
  longlong lStackX_20;
  longlong lStack_58;
  FPlatformRWLock *pFStack_50;
  
  if ((this->bIsSupported == false) ||
     (pFVar3 = this->SingleUseUBAllocator, pFVar3 == (FTempBlockAllocator *)0x0)) {
    return;
  }
  SRWLock = &pFVar3->RWLock;
  pFStack_50 = SRWLock;
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  uVar14 = (pFVar3->BusyBlocks).ArrayNum - 1;
  if (-1 < (int)uVar14) {
    lVar11 = (longlong)(int)uVar14;
    lVar13 = lVar11 * 8;
    do {
      uStackX_18 = ~uVar14;
      uStackX_10 = uStackX_18 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar14 < (pFVar3->BusyBlocks).ArrayNum) {
        uVar8 = uStackX_10;
      }
      lStackX_20 = lVar13;
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar13 = *(longlong *)((pFVar3->BusyBlocks).AllocatorInstance.Data + lVar13);
      plVar12 = *(longlong **)(lVar13 + 0x38);
      iVar10 = *(int *)(lVar13 + 0x40);
      plVar2 = plVar12 + iVar10;
      lStack_58 = lVar13;
      while( true ) {
        if (*(int *)(lVar13 + 0x40) != iVar10) {
          auStackX_8[0] = 0;
          `TCheckedPointerIterator<TRefCountPtr<FVulkanSyncPoint>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(auStackX_8);
        }
        lVar4 = lStack_58;
        if (plVar12 == plVar2) break;
        lVar4 = *plVar12;
        if ((*(longlong *)(lVar4 + 0x10) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GraphEvent",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanSubmission.h"
                               ,0x55,
                               L"This sync point was not created with a CPU event. Cannot check completion on the CPU."
                              ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (*(char *)(*(longlong *)(lVar4 + 0x10) + 0xd0) == '\0') goto LAB_145b379a9;
        plVar12 = plVar12 + 1;
      }
      DestructItems<TRefCountPtr<FVulkanSyncPoint>,int>
                (*(TRefCountPtr<FVulkanSyncPoint> **)(lStack_58 + 0x38),*(int *)(lStack_58 + 0x40));
      *(undefined4 *)(lVar4 + 0x40) = 0;
      if (*(int *)(lVar4 + 0x44) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)(lVar4 + 0x38),0,(int *)(lVar4 + 0x44));
      }
      LOCK();
      *(undefined4 *)(lStack_58 + 0x48) = 0;
      UNLOCK();
      uVar8 = 0;
      if ((int)uVar14 < (pFVar3->BusyBlocks).ArrayNum) {
        uVar8 = uStackX_10;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pFVar3->BusyBlocks).ArrayNum;
      iVar9 = uStackX_18 + iVar10;
      pFVar5 = (pFVar3->BusyBlocks).AllocatorInstance.Data;
      if (1 < iVar9) {
        iVar9 = 1;
      }
      if (iVar9 != 0) {
        memmove(pFVar5 + lVar11 * 8,pFVar5 + (longlong)(iVar10 - iVar9) * 8,(longlong)iVar9 << 3);
      }
      piVar1 = &(pFVar3->BusyBlocks).ArrayNum;
      *piVar1 = *piVar1 + -1;
      pFVar5 = (pFVar3->AvailableBlocks).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)&lStack_58) &&
          ((FScriptContainerElement *)&lStack_58 <
           pFVar5 + (longlong)(pFVar3->AvailableBlocks).ArrayMax * 8)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar10 = (pFVar3->AvailableBlocks).ArrayNum;
      piVar1 = &(pFVar3->AvailableBlocks).ArrayMax;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&(pFVar3->AvailableBlocks).AllocatorInstance,piVar1);
      }
      (pFVar3->AvailableBlocks).ArrayNum = iVar10 + 1;
      *(longlong *)((pFVar3->AvailableBlocks).AllocatorInstance.Data + (longlong)iVar10 * 8) =
           lStack_58;
LAB_145b379a9:
      lVar11 = lVar11 + -1;
      lVar13 = lStackX_20 + -8;
      uVar14 = uVar14 - 1;
      SRWLock = pFStack_50;
      lStackX_20 = lVar13;
    } while (-1 < (int)uVar14);
  }
                    /* WARNING: Could not recover jumptable at 0x000145b379fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  return;
}

// VerifySupport @ 145af6b80

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl FVulkanBindlessDescriptorManager::VerifySupport(FVulkanDevice *param_1)

{
  bool bVar1;
  ERHIBindlessConfiguration EVar2;
  int iVar3;
  FStaticBasicLogRecord *pFVar4;
  uint uVar5;
  
  EVar2 = RHIGetRuntimeBindlessConfiguration(GMaxRHIShaderPlatform);
  if (EVar2 == Disabled) {
    return false;
  }
  if ((int)EVar2 < 2) {
    if ((byte)LogRHI._0_1_ < 3) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  else if (((param_1->OptionalDeviceExtensions).field0_0x0.Packed & 0x11000010000) == 0x11000010000)
  {
    if ((((8 < (param_1->GpuProps).limits.maxBoundDescriptorSets) &&
         (8 < (param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
              maxDescriptorBufferBindings)) &&
        (7 < (param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
             maxResourceDescriptorBufferBindings)) &&
       ((param_1->OptionalDeviceExtensionProperties).DescriptorBufferProps.
        maxSamplerDescriptorBufferBindings != 0)) {
      uVar5 = 7;
      if (((param_1->DeviceMemoryManager).bHasUnifiedMemory == false) &&
         ((bVar1 = FVulkanWindowsPlatform::SupportsDeviceLocalHostVisibleWithNoPenalty
                             (param_1->VendorId), !bVar1 ||
          (bVar1 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType
                             (&param_1->DeviceMemoryManager,7), !bVar1)))) {
        uVar5 = 6;
      }
      bVar1 = VulkanRHI::FDeviceMemoryManager::SupportsMemoryType
                        (&param_1->DeviceMemoryManager,uVar5);
      if (bVar1) {
        iVar3 = (**(code **)(*(longlong *)GDynamicGlobalUBs._padding_ + 200))();
        if ((iVar3 != 0) && (2 < (byte)LogRHI._0_1_)) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
        }
        if (GVulkanEnableDefrag != 0) {
          if (2 < (byte)LogRHI._0_1_) {
            UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
          }
          GVulkanEnableDefrag = 0;
        }
        return true;
      }
    }
    if ((byte)LogRHI._0_1_ < 3) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  else {
    if ((byte)LogRHI._0_1_ < 3) {
      return false;
    }
    pFVar4 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar4,(FLogCategoryBase *)&LogRHI);
  return false;
}

