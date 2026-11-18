// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 13

// FVulkanRayTracingShaderTable @ 145b49040

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FVulkanRayTracingShaderTable * __thiscall
FVulkanRayTracingShaderTable::FVulkanRayTracingShaderTable
          (FVulkanRayTracingShaderTable *this,FRHICommandListBase *param_1,FVulkanDevice *param_2,
          FRayTracingShaderBindingTableInitializer *param_3)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  FVulkanShaderTableAllocation *pFVar6;
  longlong lVar7;
  FVulkanDevice *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  FVulkanRayTracingShaderTable *pFVar14;
  ulonglong uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  ulonglong uVar19;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_RayTracingShaderBindingTable);
  RHIValidation::FShaderBindingTable::FShaderBindingTable
            ((FShaderBindingTable *)&this->_padding_,param_3);
  uVar19 = 0;
  this->_padding_ = (longlong)&___7FRHIShaderBindingTable__6B_;
  piVar4 = &(this->Miss).HostBuffer.ArrayNum;
  lVar7 = *(longlong *)&param_3->NumShaderSlotsPerGeometrySegment;
  this->_padding_ = *(longlong *)param_3;
  this->_padding_ = lVar7;
  lVar7 = *(longlong *)&param_3->NumMissShaderSlots;
  this->_padding_ = (longlong)&___7FVulkanRayTracingShaderTable__6B_;
  this->_padding_ = lVar7;
  this->Device = param_2;
  this->ShaderBindingMode = param_3->ShaderBindingMode;
  this->HitGroupIndexingMode = param_3->HitGroupIndexingMode;
  piVar5 = &(this->Miss).HostBuffer.ArrayMax;
  *piVar5 = 0;
  (this->Miss).HandleCount = 0;
  (this->Miss).bUseLocalRecord = false;
  (this->Miss).HostBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar4 = 0;
  (this->Miss).LocalBuffer = (VkBuffer_T *)0x0;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&(this->Miss).LocalAllocation);
  (this->Miss).bIsDirty = true;
  pFVar6 = &this->HitGroup;
  (this->Miss).Region.deviceAddress = 0;
  (this->Miss).Region.stride = 0;
  (this->Miss).Region.size = 0;
  (this->HitGroup).bUseLocalRecord = false;
  pTVar1 = &(this->HitGroup).HostBuffer;
  piVar2 = &(this->HitGroup).HostBuffer.ArrayNum;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar12 = &(this->HitGroup).HostBuffer.ArrayMax;
  pFVar6->HandleCount = 0;
  *piVar2 = 0;
  *piVar12 = 0;
  (this->HitGroup).LocalBuffer = (VkBuffer_T *)0x0;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&(this->HitGroup).LocalAllocation);
  (this->HitGroup).bIsDirty = true;
  (this->HitGroup).Region.deviceAddress = 0;
  (this->HitGroup).Region.stride = 0;
  (this->HitGroup).Region.size = 0;
  (this->Callable).bUseLocalRecord = false;
  piVar3 = &(this->Callable).HostBuffer.ArrayNum;
  (this->Callable).HostBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar13 = &(this->Callable).HostBuffer.ArrayMax;
  (this->Callable).HandleCount = 0;
  *piVar3 = 0;
  (this->Callable).LocalBuffer = (VkBuffer_T *)0x0;
  *piVar13 = 0;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&(this->Callable).LocalAllocation);
  (this->Callable).bIsDirty = true;
  (this->Callable).Region.deviceAddress = 0;
  (this->Callable).Region.stride = 0;
  (this->Callable).Region.size = 0;
  pFVar8 = this->Device;
  (this->InlineGeometryParameterData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InlineGeometryParameterData).ArrayNum = 0;
  (this->InlineGeometryParameterData).ArrayMax = 0;
  (this->ReferencedUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ReferencedUniformBuffers).ArrayNum = 0;
  (this->ReferencedUniformBuffers).ArrayMax = 0;
  uVar16 = (pFVar8->OptionalDeviceExtensionProperties).RayTracingPipelineProps.shaderGroupHandleSize
  ;
  this->HandleSize = uVar16;
  uVar18 = (pFVar8->OptionalDeviceExtensionProperties).RayTracingPipelineProps.
           shaderGroupHandleAlignment;
  this->HandleSizeAligned = (uVar16 - 1) + uVar18 & -uVar18;
  if ((this->ShaderBindingMode == Disabled) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ShaderBindingMode != ERayTracingShaderBindingMode::Disabled",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x35e,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    pFVar14 = (FVulkanRayTracingShaderTable *)(*pcVar9)();
    return pFVar14;
  }
  if ((this->ShaderBindingMode & RTPSO) != Disabled) {
    uVar16 = (uint)this->_padding_;
    (this->Miss).HandleCount = uVar16;
    (this->Miss).bUseLocalRecord = true;
    if (uVar16 != 0) {
      uVar15 = uVar19;
      if (1 < uVar16) {
        uVar15 = (ulonglong)(uint)GVulkanRayTracingMaxShaderGroupStride;
      }
      (this->Miss).Region.stride = uVar15;
      uVar16 = uVar16 * GVulkanRayTracingMaxShaderGroupStride;
      (this->Miss).Region.size = (ulonglong)uVar16;
      iVar11 = *piVar4;
      if (iVar11 < (int)uVar16) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar16 - iVar11,&(this->Miss).HostBuffer.AllocatorInstance,piVar4,
                   &(this->Miss).HostBuffer.ArrayMax);
      }
      else {
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if ((int)uVar16 < iVar11) {
          uVar18 = iVar11 - uVar16;
          if (((int)(uVar16 | uVar18) < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FVulkanRayTracingShaderTable *)(*pcVar9)();
            return pFVar14;
          }
          if (uVar18 != 0) {
            pFVar17 = (this->Miss).HostBuffer.AllocatorInstance.Data + (int)uVar16;
            iVar11 = (*piVar4 - uVar18) - uVar16;
            if (iVar11 != 0) {
              memmove(pFVar17,pFVar17 + (int)uVar18,(longlong)iVar11);
            }
            *piVar4 = *piVar4 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&(this->Miss).HostBuffer.AllocatorInstance,*piVar4,piVar5);
          }
        }
      }
    }
    uVar16 = *(uint *)((longlong)&this->_padding_ + 4);
    (this->Callable).HandleCount = uVar16;
    (this->Callable).bUseLocalRecord = true;
    if (uVar16 != 0) {
      uVar15 = uVar19;
      if (1 < uVar16) {
        uVar15 = (ulonglong)(uint)GVulkanRayTracingMaxShaderGroupStride;
      }
      (this->Callable).Region.stride = uVar15;
      uVar16 = uVar16 * GVulkanRayTracingMaxShaderGroupStride;
      (this->Callable).Region.size = (ulonglong)uVar16;
      iVar11 = *piVar3;
      if (iVar11 < (int)uVar16) {
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,uVar16 - iVar11,&(this->Callable).HostBuffer.AllocatorInstance,piVar3,piVar13
                  );
      }
      else {
        if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
        }
        if ((int)uVar16 < iVar11) {
          uVar18 = iVar11 - uVar16;
          if (((int)(uVar16 | uVar18) < 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            pFVar14 = (FVulkanRayTracingShaderTable *)(*pcVar9)();
            return pFVar14;
          }
          if (uVar18 != 0) {
            pFVar17 = (this->Callable).HostBuffer.AllocatorInstance.Data + (int)uVar16;
            iVar11 = (*piVar3 - uVar18) - uVar16;
            if (iVar11 != 0) {
              memmove(pFVar17,pFVar17 + (int)uVar18,(longlong)iVar11);
            }
            *piVar3 = *piVar3 - uVar18;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,&(this->Callable).HostBuffer.AllocatorInstance,*piVar3,
                       &(this->Callable).HostBuffer.ArrayMax);
          }
        }
      }
    }
    if (this->HitGroupIndexingMode == Allow) {
      uVar16 = *(int *)((longlong)&this->_padding_ + 4) * (int)this->_padding_;
      (this->HitGroup).bUseLocalRecord = true;
      pFVar6->HandleCount = uVar16;
      if (uVar16 == 0) goto LAB_145b495b2;
    }
    else {
      uVar16 = 1;
      pFVar6->HandleCount = 1;
      (this->HitGroup).bUseLocalRecord = true;
    }
    if (1 < uVar16) {
      uVar19 = (ulonglong)(uint)GVulkanRayTracingMaxShaderGroupStride;
    }
    (this->HitGroup).Region.stride = uVar19;
    uVar16 = GVulkanRayTracingMaxShaderGroupStride * uVar16;
    (this->HitGroup).Region.size = (ulonglong)uVar16;
    iVar11 = *piVar2;
    if (iVar11 < (int)uVar16) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,uVar16 - iVar11,&pTVar1->AllocatorInstance,piVar2,piVar12);
    }
    else {
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
      }
      if ((int)uVar16 < iVar11) {
        uVar18 = iVar11 - uVar16;
        if (((int)(uVar16 | uVar18) < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x458,
                                L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          pFVar14 = (FVulkanRayTracingShaderTable *)(*pcVar9)();
          return pFVar14;
        }
        if (uVar18 != 0) {
          pFVar17 = (pTVar1->AllocatorInstance).Data + (int)uVar16;
          iVar11 = (*piVar2 - uVar18) - uVar16;
          if (iVar11 != 0) {
            memmove(pFVar17,pFVar17 + (int)uVar18,(longlong)iVar11);
          }
          *piVar2 = *piVar2 - uVar18;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,&pTVar1->AllocatorInstance,*piVar2,&(this->HitGroup).HostBuffer.ArrayMax);
        }
      }
    }
  }
LAB_145b495b2:
  if (((this->ShaderBindingMode & Inline) != Disabled) &&
     (*(int *)((longlong)&this->_padding_ + 4) != 0)) {
    if ((this->HitGroupIndexingMode != Allow) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("HitGroupIndexingMode == ERayTracingHitGroupIndexingMode::Allow",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                            ,0x37b,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      pFVar14 = (FVulkanRayTracingShaderTable *)(*pcVar9)();
      return pFVar14;
    }
    TArray<unsigned_char,TSizedDefaultAllocator<32>_>::SetNumUninitialized
              (&this->InlineGeometryParameterData,*(int *)((longlong)&this->_padding_ + 4) * 0x18,
               Default);
  }
  return this;
}

// ~FVulkanRayTracingShaderTable @ 145b505b0

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
FVulkanRayTracingShaderTable::~FVulkanRayTracingShaderTable(FVulkanRayTracingShaderTable *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FVulkanRayTracingShaderTable__6B_;
  ReleaseLocalBuffer(this->Device,&this->Miss);
  ReleaseLocalBuffer(this->Device,&this->HitGroup);
  ReleaseLocalBuffer(this->Device,&this->Callable);
  DestructItems<TRefCountPtr<FRHIUniformBuffer>,int>
            ((TRefCountPtr<FRHIUniformBuffer> *)
             (this->ReferencedUniformBuffers).AllocatorInstance.Data,
             (this->ReferencedUniformBuffers).ArrayNum);
  pFVar1 = (this->ReferencedUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->InlineGeometryParameterData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->Callable).LocalAllocation);
  pFVar1 = (this->Callable).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->HitGroup).LocalAllocation);
  pFVar1 = (this->HitGroup).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&(this->Miss).LocalAllocation);
  pFVar1 = (this->Miss).HostBuffer.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  RHIValidation::FShaderBindingTable::~FShaderBindingTable((FShaderBindingTable *)&this->_padding_);
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// operator() @ 145b53420

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

void __thiscall
`FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()
          (void *this,FVulkanShaderTableAllocation *param_1)

{
  longlong lVar1;
  VkDevice_T *pVVar2;
  size_t _Size;
  FScriptContainerElement *_Src;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var3;
  void *_Dst;
  VkBuffer_T *pVVar4;
  ulong64 uVar5;
  VkBuffer_T *pVVar6;
  FVulkanCommandBuffer *pFVar7;
  undefined1 auStackY_98 [32];
  FStagingBuffer *local_68;
  VkBufferDeviceAddressInfo local_60;
  VkBufferCopy local_48;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_98;
  if (param_1->bIsDirty != false) {
    if ((param_1->HostBuffer).ArrayNum != 0) {
      FVulkanRayTracingShaderTable::ReleaseLocalBuffer(*(FVulkanDevice **)this,param_1);
      lVar1 = *(longlong *)this;
      pVVar2 = *(VkDevice_T **)(lVar1 + 0x30);
      local_68 = VulkanRHI::FStagingManager::AcquireBuffer
                           ((FStagingManager *)(lVar1 + 0x600),(uint)(param_1->Region).size,1,
                            VK_MEMORY_PROPERTY_HOST_COHERENT_BIT);
      _Size = (param_1->Region).size;
      _Src = (param_1->HostBuffer).AllocatorInstance.Data;
      _Dst = VulkanRHI::FStagingBuffer::GetMappedPointer(local_68);
      memcpy(_Dst,_Src,_Size);
      pVVar4 = FVulkanDevice::CreateBuffer(*(FVulkanDevice **)this,(param_1->Region).size,0x20402,0)
      ;
      param_1->LocalBuffer = pVVar4;
      VulkanRHI::FMemoryManager::AllocateBufferMemory
                ((FMemoryManager *)(*(longlong *)this + 0x408),&param_1->LocalAllocation,pVVar4,
                 AutoBind|Dedicated,L"LocalShaderTableAllocation",*(uint *)(lVar1 + 0x25ac));
      local_60.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
      local_60._4_8_ = 0;
      local_60.pNext._4_4_ = 0;
      local_60.buffer._0_4_ = SUB84(param_1->LocalBuffer,0);
      local_60.buffer._4_4_ = (undefined4)((ulonglong)param_1->LocalBuffer >> 0x20);
      uVar5 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(pVVar2,&local_60);
      pVVar4 = param_1->LocalBuffer;
      (param_1->Region).deviceAddress = uVar5;
      p_Var3 = VulkanDynamicAPI::vkCmdCopyBuffer;
      local_48.srcOffset = 0;
      local_48.dstOffset = 0;
      local_48.size = (param_1->Region).size;
      pVVar6 = VulkanRHI::FStagingBuffer::GetHandle(local_68);
      pFVar7 = FVulkanContextCommon::GetCommandBuffer
                         (*(FVulkanContextCommon **)((longlong)this + 8));
      (*p_Var3)(pFVar7->CommandBufferHandle,pVVar6,pVVar4,1,&local_48);
      VulkanRHI::FStagingManager::ReleaseBuffer
                ((FStagingManager *)(*(longlong *)this + 0x600),
                 *(FVulkanContextCommon **)((longlong)this + 8),&local_68);
    }
    param_1->bIsDirty = false;
  }
  return;
}

// Commit @ 145b5b640

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

void __thiscall
FVulkanRayTracingShaderTable::Commit
          (FVulkanRayTracingShaderTable *this,FVulkanCommandListContext *param_1,FRHIBuffer *param_2
          )

{
  FVulkanCommandBuffer *pFVar1;
  FVulkanDevice *local_48;
  FVulkanCommandListContext *local_40;
  VkMemoryBarrier local_38;
  VkMemoryBarrier local_20;
  
  pFVar1 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)param_1);
  local_38.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_38.pNext = (void *)0x0;
  local_38.srcAccessMask = 0x18000;
  local_38.dstAccessMask = 0x1800;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar1->CommandBufferHandle,0x2000,0x1000,0,1,&local_38,0,(VkBufferMemoryBarrier *)0x0,
             0,(VkImageMemoryBarrier *)0x0);
  local_48 = this->Device;
  local_40 = param_1;
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()(&local_48,&this->Miss);
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()(&local_48,&this->HitGroup);
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()(&local_48,&this->Callable);
  local_20.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_20.pNext = (void *)0x0;
  local_20.srcAccessMask = 0x1000;
  local_20.dstAccessMask = 0x8000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar1->CommandBufferHandle,0x1000,0x200000,0,1,&local_20,0,
             (VkBufferMemoryBarrier *)0x0,0,(VkImageMemoryBarrier *)0x0);
  return;
}

// CommitRayGenShader @ 145b5b790

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

VkStridedDeviceAddressRegionKHR * __thiscall
FVulkanRayTracingShaderTable::CommitRayGenShader
          (FVulkanRayTracingShaderTable *this,
          VkStridedDeviceAddressRegionKHR *__return_storage_ptr__,FVulkanCommandListContext *param_1
          ,uint param_2,TArrayView<unsigned_char_const_,int> *param_3)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uchar *_Dst;
  uchar *_Src;
  VkStridedDeviceAddressRegionKHR *pVVar4;
  
  _Dst = VulkanRHI::FTempBlockAllocator::Alloc
                   (this->Device->TempBlockAllocator,this->HandleSize,
                    (FVulkanContextCommon *)param_1,__return_storage_ptr__);
  uVar1 = this->HandleSize;
  _Src = TArrayView<unsigned_char_const_,int>::operator[](param_3,uVar1 * param_2);
  memcpy(_Dst,_Src,(ulonglong)uVar1);
  if ((this->Miss).bIsDirty != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Miss.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3c9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pVVar4 = (VkStridedDeviceAddressRegionKHR *)(*pcVar2)();
      return pVVar4;
    }
  }
  if ((this->HitGroup).bIsDirty != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!HitGroup.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3ca,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pVVar4 = (VkStridedDeviceAddressRegionKHR *)(*pcVar2)();
      return pVVar4;
    }
  }
  if ((this->Callable).bIsDirty != false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Callable.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3cb,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pVVar4 = (VkStridedDeviceAddressRegionKHR *)(*pcVar2)();
      return pVVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetAlloc @ 145b684f0

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

FVulkanShaderTableAllocation * __thiscall
FVulkanRayTracingShaderTable::GetAlloc(FVulkanRayTracingShaderTable *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FVulkanShaderTableAllocation *pFVar3;
  
  if (param_1 == SF_NumStandardFrequencies) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3a7,L"RayGen have not ShaderTable allocation.");
    if (bVar2) goto code_r0x000145b6857f;
  }
  else {
    if (param_1 == SF_RayMiss) {
      return &this->Miss;
    }
    if (param_1 == SF_RayHitGroup) {
      return &this->HitGroup;
    }
    if (param_1 == SF_RayCallable) {
      return &this->Callable;
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3ab,L"Only usable with RayTracing shaders.");
    if (bVar2) {
code_r0x000145b6857f:
      pcVar1 = (code *)swi(3);
      pFVar3 = (FVulkanShaderTableAllocation *)(*pcVar1)();
      return pFVar3;
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    VulkanRHI::FVulkanAllocation::FVulkanAllocation(&EmptyAlloc.LocalAllocation);
    EmptyAlloc.bIsDirty = true;
    EmptyAlloc.Region.deviceAddress = 0;
    EmptyAlloc.Region.stride = 0;
    EmptyAlloc.Region.size = 0;
    atexit(`FVulkanRayTracingShaderTable::GetAlloc'::__l2::
           _dynamic_atexit_destructor_for__EmptyAlloc__);
    _Init_thread_footer(&::_TSS0);
    return &EmptyAlloc;
  }
  return &EmptyAlloc;
}

// GetInlineBindingDataSizeAndStride @ 145b69910

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

FRHISizeAndStride * __thiscall
FVulkanRayTracingShaderTable::GetInlineBindingDataSizeAndStride
          (FVulkanRayTracingShaderTable *this,FRHISizeAndStride *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  FRHISizeAndStride *pFVar3;
  
  if ((this->InlineGeometryParameterData).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InlineGeometryParameterData.Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3e9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHISizeAndStride *)(*pcVar1)();
      return pFVar3;
    }
  }
  __return_storage_ptr__->Size = 0;
  __return_storage_ptr__->Stride = 0;
  return __return_storage_ptr__;
}

// GetRegion @ 145b6ab40

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

VkStridedDeviceAddressRegionKHR * __thiscall
FVulkanRayTracingShaderTable::GetRegion(FVulkanRayTracingShaderTable *this,EShaderFrequency param_1)

{
  code *pcVar1;
  bool bVar2;
  FVulkanShaderTableAllocation *pFVar3;
  VkStridedDeviceAddressRegionKHR *pVVar4;
  
  pFVar3 = GetAlloc(this,param_1);
  if (pFVar3->bIsDirty == false) {
    return &pFVar3->Region;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!Alloc.bIsDirty",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                     ,0x3b6,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pVVar4 = (VkStridedDeviceAddressRegionKHR *)(*pcVar1)();
    return pVVar4;
  }
  return &pFVar3->Region;
}

// ReleaseLocalBuffer @ 145b78800

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

void __cdecl
FVulkanRayTracingShaderTable::ReleaseLocalBuffer
          (FVulkanDevice *param_1,FVulkanShaderTableAllocation *param_2)

{
  bool bVar1;
  
  if (param_2->LocalBuffer != (VkBuffer_T *)0x0) {
    VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
              (&param_1->DeferredDeletionQueue,Buffer,(ulong64)param_2->LocalBuffer);
    param_2->LocalBuffer = (VkBuffer_T *)0x0;
  }
  bVar1 = VulkanRHI::FVulkanAllocation::IsValid(&param_2->LocalAllocation);
  if (bVar1) {
    VulkanRHI::FMemoryManager::FreeVulkanAllocation
              (&param_1->MemoryManager,&param_2->LocalAllocation,EVulkanFreeFlag_None);
  }
  (param_2->Region).deviceAddress = 0;
  return;
}

// ReleaseLocalBuffers @ 145b78880

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
FVulkanRayTracingShaderTable::ReleaseLocalBuffers(FVulkanRayTracingShaderTable *this)

{
  ReleaseLocalBuffer(this->Device,&this->Miss);
  ReleaseLocalBuffer(this->Device,&this->HitGroup);
  ReleaseLocalBuffer(this->Device,&this->Callable);
  return;
}

// SetInlineGeometryParameters @ 145b7b600

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
FVulkanRayTracingShaderTable::SetInlineGeometryParameters
          (FVulkanRayTracingShaderTable *this,uint param_1,void *param_2,uint param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1 * param_3;
  uVar3 = 0;
  if ((int)uVar4 < (this->InlineGeometryParameterData).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
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
  memcpy((this->InlineGeometryParameterData).AllocatorInstance.Data + (int)uVar4,param_2,
         (ulonglong)param_3);
  return;
}

// SetLocalShaderParameters @ 145b7b790

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
FVulkanRayTracingShaderTable::SetLocalShaderParameters
          (FVulkanRayTracingShaderTable *this,EShaderFrequency param_1,uint param_2,uint param_3,
          void *param_4,uint param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FVulkanShaderTableAllocation *pFVar4;
  longlong lVar5;
  uint uVar6;
  
  pFVar4 = GetAlloc(this,param_1);
  lVar5 = 0x48;
  if ((pFVar4->Region).stride < (ulonglong)(param_3 + param_5)) {
    lVar5 = 0x50;
  }
  if (*(longlong *)((longlong)&pFVar4->HandleCount + lVar5) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OffsetWithinRecord + InDataSize <= Alloc.Region.stride ? Alloc.Region.stride : Alloc.Region.size"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3d6,L"SBT record write request is out of bounds");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((param_2 != 0) && ((pFVar4->Region).stride == 0)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(RecordIndex == 0) || (Alloc.Region.stride != 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3d7,L"Attempting to index a record in a region without stride");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  uVar6 = param_2 * (int)(pFVar4->Region).stride + this->HandleSizeAligned + param_3;
  uVar3 = 0;
  if ((int)uVar6 < (pFVar4->HostBuffer).ArrayNum) {
    uVar3 = ~uVar6 >> 0x1f;
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
  memcpy((pFVar4->HostBuffer).AllocatorInstance.Data + (int)uVar6,param_4,(ulonglong)param_5);
  pFVar4->bIsDirty = true;
  return;
}

// SetSlot @ 145b7c960

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
FVulkanRayTracingShaderTable::SetSlot
          (FVulkanRayTracingShaderTable *this,EShaderFrequency param_1,uint param_2,uint param_3,
          TArrayView<unsigned_char_const_,int> *param_4)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanShaderTableAllocation *pFVar4;
  uchar *_Src;
  uint uVar5;
  uint uVar6;
  
  pFVar4 = GetAlloc(this,param_1);
  if ((param_2 != 0) && ((pFVar4->Region).stride == 0)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(DstSlot == 0) || (Alloc.Region.stride != 0)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3bd,L"Attempting to index a record in a region without stride");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = this->HandleSize;
  _Src = TArrayView<unsigned_char_const_,int>::operator[](param_4,uVar1 * param_3);
  uVar6 = param_2 * (int)(pFVar4->Region).stride;
  uVar5 = 0;
  if ((int)uVar6 < (pFVar4->HostBuffer).ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
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
  memcpy((pFVar4->HostBuffer).AllocatorInstance.Data + (int)uVar6,_Src,(ulonglong)uVar1);
  pFVar4->bIsDirty = true;
  return;
}

