// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 7

// FVulkanUniformBuffer @ 145b94230

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
/* WARNING: Enum "EUniformBufferBaseType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanUniformBuffer * __thiscall
FVulkanUniformBuffer::FVulkanUniformBuffer
          (FVulkanUniformBuffer *this,FVulkanDevice *param_1,FRHIUniformBufferLayout *param_2,
          void *param_3,EUniformBufferUsage param_4,EUniformBufferValidation param_5)

{
  longlong *plVar1;
  uint *puVar2;
  int *piVar3;
  FScriptContainerElement FVar4;
  uint uVar5;
  FRDGResource *this_00;
  FRHIResource *this_01;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  FVulkanUniformBuffer *pFVar12;
  FRHIShaderResourceView *pFVar13;
  void *pvVar14;
  IRHICommandContext *pIVar15;
  FVulkanCommandListContext *pFVar16;
  FRHIResource *this_02;
  undefined8 *puVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  undefined8 *local_res8;
  undefined4 uStack_4c;
  
  FRHIResource::FRHIResource((FRHIResource *)this,RRT_UniformBuffer);
  this->_padding_ = 0;
  plVar1 = &this->_padding_;
  *(undefined1 *)&this->_padding_ = 0;
  puVar2 = (uint *)((longlong)&this->_padding_ + 4);
  this->_padding_ = (longlong)&___7FRHIUniformBuffer__6B_;
  this->_padding_ = 0;
  *(undefined4 *)plVar1 = 0;
  *puVar2 = 0;
  this->_padding_ = (longlong)param_2;
  if (param_2 != (FRHIUniformBufferLayout *)0x0) {
    FRHIResource::AddRef((FRHIResource *)param_2);
  }
  *(uint *)&this->_padding_ = param_2->ConstantBufferSize;
  this->_padding_ = (longlong)&___7FVulkanUniformBuffer__6B_;
  this->Device = param_1;
  VulkanRHI::FVulkanAllocation::FVulkanAllocation(&this->Allocation);
  (this->BindlessHandle).Index = 0xffffffff;
  (this->BindlessHandle).Type = Invalid;
  this->Usage = param_4;
  this->CachedDeviceAddress = 0;
  this->UniformViewSRV = (FRHIShaderResourceView *)0x0;
  if ((((param_2->Resources).ArrayNum < 1) && (param_2->ConstantBufferSize == 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InLayout->Resources.Num() > 0 || InLayout->ConstantBufferSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                         ,0x78,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
    return pFVar12;
  }
  uVar5 = (param_2->Resources).ArrayNum;
  if (uVar5 != 0) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    DestructItems<TRefCountPtr<FRHIResource>,int>
              ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)*plVar1);
    *(undefined4 *)plVar1 = 0;
    if (*puVar2 != uVar5) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar5,(ForAnyElementType *)&this->_padding_,0,(int *)puVar2);
    }
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar5,(ForAnyElementType *)&this->_padding_,(int *)plVar1,(int *)puVar2)
    ;
    memset((void *)(this->_padding_ + (longlong)iVar10 * 8),0,(longlong)(int)uVar5 << 3);
    if (param_3 != (void *)0x0) {
      uVar19 = 0;
      do {
        this_02 = (FRHIResource *)0x0;
        uVar20 = ~uVar19 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar19 < (param_2->Resources).ArrayNum) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
          return pFVar12;
        }
        lVar18 = (longlong)(int)uVar19;
        FVar4 = (param_2->Resources).AllocatorInstance.Data[lVar18 * 4 + 2];
        uVar11 = 0;
        if ((int)uVar19 < (param_2->Resources).ArrayNum) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
          return pFVar12;
        }
        if ((0x17 < (byte)FVar4) || ((0xc98c00U >> ((byte)FVar4 & 0x1f) & 1) == 0)) {
          puVar17 = (undefined8 *)
                    ((ulonglong)
                     *(ushort *)((param_2->Resources).AllocatorInstance.Data + lVar18 * 4) +
                    (longlong)param_3);
          if (((byte)FVar4 < 0x13) && ((0x67200U >> ((byte)FVar4 & 0x1f) & 1) != 0)) {
            this_00 = (FRDGResource *)*puVar17;
            if (this_00 == (FRDGResource *)0x0) {
              this_02 = (FRHIResource *)0x0;
            }
            else {
              FRDGResource::ValidateRHIAccess(this_00);
              this_02 = this_00->ResourceRHI;
            }
          }
          else {
            this_02 = (FRHIResource *)*puVar17;
          }
        }
        uVar11 = 0;
        if ((int)uVar19 < (int)this->_padding_) {
          uVar11 = uVar20;
        }
        if ((uVar11 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
          return pFVar12;
        }
        this_01 = *(FRHIResource **)(this->_padding_ + lVar18 * 8);
        if (this_01 != this_02) {
          *(FRHIResource **)(this->_padding_ + lVar18 * 8) = this_02;
          if (this_02 != (FRHIResource *)0x0) {
            FRHIResource::AddRef(this_02);
          }
          if (this_01 != (FRHIResource *)0x0) {
            FRHIResource::Release(this_01);
          }
        }
        uVar19 = uVar19 + 1;
      } while (uVar19 < uVar5);
    }
  }
  if ((param_2->Flags & UniformView) == None) {
    if (param_2->ConstantBufferSize != 0) {
      bVar7 = IsInRenderingThread();
      bVar8 = IsInRHIThread();
      if ((UniformBuffer_SingleFrame < param_4) ||
         (((!bVar7 && (!bVar8)) || (bVar9 = UE::Tasks::Private::IsThreadRetractingTask(), bVar9))))
      {
        VulkanRHI::FMemoryManager::AllocUniformBuffer
                  (&this->Device->MemoryManager,&this->Allocation,param_2->ConstantBufferSize);
        if (param_3 != (void *)0x0) {
          pvVar14 = VulkanRHI::FVulkanAllocation::GetMappedPointer(&this->Allocation,this->Device);
          bVar7 = FVulkanDevice::SupportsBindless(this->Device);
          UE::RHICore::UpdateUniformBufferConstants(pvVar14,param_3,param_2,bVar7);
          VulkanRHI::FVulkanAllocation::FlushMappedMemory(&this->Allocation,this->Device);
        }
      }
      else if (param_3 != (void *)0x0) {
        uVar5 = param_2->ConstantBufferSize;
        if ((((GRHICommandList.bLatchedBypass != false) &&
             ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) != 0)) ||
            ((GIsRunningRHIInSeparateThread_InternalUseOnly == false && (bVar7)))) || (bVar8)) {
          UpdateUniformBufferHelper
                    ((FVulkanCommandListContext *)this->Device->ImmediateContext,this,param_3,true);
        }
        else {
          pvVar14 = FMemStackBase::Alloc
                              ((FMemStackBase *)&GRHICommandList.CommandListImmediate,
                               (longlong)(int)uVar5,0x10);
          UpdateUniformBufferConstants(this->Device,pvVar14,param_3,param_2);
          if (((GRHICommandList.bLatchedBypass == false) ||
              ((GRHICommandList.CommandListImmediate._667_1_ & 0x20) == 0)) &&
             (GRHICommandList.CommandListImmediate._100_1_ == '\0')) {
            puVar17 = FMemStackBase::Alloc
                                ((FMemStackBase *)&GRHICommandList.CommandListImmediate,0x30,8);
            GRHICommandList.CommandListImmediate._96_4_ =
                 GRHICommandList.CommandListImmediate._96_4_ + 1;
            *(undefined8 **)GRHICommandList.CommandListImmediate._48_8_ = puVar17;
            GRHICommandList.CommandListImmediate._48_8_ = puVar17 + 1;
            *(undefined8 *)GRHICommandList.CommandListImmediate._48_8_ = 0;
            *puVar17 = &TRHILambdaCommand<FRHICommandListImmediate,`FVulkanUniformBuffer::FVulkanUniformBuffer'::`51'::<lambda_1>_>
                        ::_vftable_;
            puVar17[2] = this;
            puVar17[3] = CONCAT44(uStack_4c,uVar5);
            puVar17[5] = L"TRHILambdaCommand";
            puVar17[4] = pvVar14;
          }
          else {
            pIVar15 = FRHICommandListBase::GetContext
                                ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate);
            lVar18 = (**(code **)(pIVar15->_padding_ + 0x148))(pIVar15);
            pFVar16 = (FVulkanCommandListContext *)(lVar18 + -0x50);
            if (lVar18 == 0) {
              pFVar16 = (FVulkanCommandListContext *)0x0;
            }
            UpdateUniformBufferHelper(pFVar16,this,pvVar14,false);
          }
          FRHICommandListBase::RHIThreadFence
                    ((FRHICommandListBase *)&GRHICommandList.CommandListImmediate,true);
          if (local_res8 != (undefined8 *)0x0) {
            LOCK();
            piVar3 = (int *)(local_res8 + 6);
            iVar10 = *piVar3;
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if ((iVar10 == 1) && (local_res8 != (undefined8 *)0x0)) {
              (**(code **)*local_res8)(local_res8,1);
            }
          }
        }
      }
    }
  }
  else {
    if (((param_2->Resources).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLayout->Resources.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                           ,0x8e,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
      return pFVar12;
    }
    if (((param_2->Resources).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
      return pFVar12;
    }
    FVar4 = (param_2->Resources).AllocatorInstance.Data[2];
    if ((FVar4 == (FScriptContainerElement)0x6) || (FVar4 == (FScriptContainerElement)0x11)) {
      if (((param_2->Resources).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
        return pFVar12;
      }
      pFVar13 = (FRHIShaderResourceView *)
                GetShaderParameterResourceRHI
                          (param_3,*(ushort *)(param_2->Resources).AllocatorInstance.Data,
                           (EUniformBufferBaseType)FVar4);
      this->UniformViewSRV = pFVar13;
    }
    if ((this->UniformViewSRV == (FRHIShaderResourceView *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("UniformViewSRV",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                           ,0x94,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      pFVar12 = (FVulkanUniformBuffer *)(*pcVar6)();
      return pFVar12;
    }
  }
  return this;
}

// ~FVulkanUniformBuffer @ 145b96ad0

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

void __thiscall FVulkanUniformBuffer::~FVulkanUniformBuffer(FVulkanUniformBuffer *this)

{
  FRHIDescriptorHandle FVar1;
  
  this->_padding_ = (longlong)&___7FVulkanUniformBuffer__6B_;
  if (((this->BindlessHandle).Index != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
    FVar1 = this->BindlessHandle;
    if ((FVar1.Index != 0xffffffff) && (FVar1.Type != Invalid)) {
      VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                (&this->Device->DeferredDeletionQueue,BindlessHandle,(ulong64)FVar1);
    }
  }
  VulkanRHI::FMemoryManager::FreeUniformBuffer(&this->Device->MemoryManager,&this->Allocation);
  VulkanRHI::FVulkanAllocation::~FVulkanAllocation(&this->Allocation);
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  DestructItems<TRefCountPtr<FRHIResource>,int>
            ((TRefCountPtr<FRHIResource> *)this->_padding_,(int)this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRHIResource::~FRHIResource((FRHIResource *)this);
  return;
}

// GetBindlessHandle @ 145baba40

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

FRHIDescriptorHandle __thiscall FVulkanUniformBuffer::GetBindlessHandle(FVulkanUniformBuffer *this)

{
  uint uVar1;
  FVulkanBindlessDescriptorManager *this_00;
  code *pcVar2;
  bool bVar3;
  VkBuffer_T *pVVar4;
  ulong64 uVar5;
  FRHIDescriptorHandle FVar6;
  FRHIDescriptorHandle in_RDX;
  undefined1 local_res8 [8];
  VkBufferDeviceAddressInfo local_38;
  
  local_38.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
  local_38.buffer._4_4_ = 0;
  local_38._4_8_ = 0;
  local_38.pNext._4_4_ = 0;
  local_38.buffer._0_4_ = 0;
  pVVar4 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&this->Allocation);
  local_38.buffer._0_4_ = SUB84(pVVar4,0);
  local_38.buffer._4_4_ = (undefined4)((ulonglong)pVVar4 >> 0x20);
  uVar5 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_38);
  uVar1 = (this->BindlessHandle).Index;
  uVar5 = (this->Allocation).Offset + uVar5;
  if ((((uVar1 == 0xffffffff) || ((this->BindlessHandle).Type == Invalid)) ||
      (this->CachedDeviceAddress == 0)) || (uVar5 != this->CachedDeviceAddress)) {
    if ((uVar1 != 0xffffffff) && ((this->BindlessHandle).Type != Invalid)) {
      FVar6 = this->BindlessHandle;
      if ((FVar6.Index != 0xffffffff) && (FVar6.Type != Invalid)) {
        VulkanRHI::FDeferredDeletionQueue2::EnqueueGenericResource
                  (&this->Device->DeferredDeletionQueue,BindlessHandle,(ulong64)FVar6);
      }
    }
    this_00 = this->Device->BindlessDescriptorManager;
    if (((int)this->_padding_ != *(int *)(this->_padding_ + 0x8c)) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("LayoutConstantBufferSize == Layout->ConstantBufferSize",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,0x4de,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      FVar6 = (FRHIDescriptorHandle)(*pcVar2)();
      return FVar6;
    }
    FVar6 = FVulkanBindlessDescriptorManager::AllocateDescriptor
                      (this_00,(VkDescriptorType)local_res8,6,uVar5);
    this->BindlessHandle = *(FRHIDescriptorHandle *)FVar6;
    this->CachedDeviceAddress = uVar5;
  }
  *(FRHIDescriptorHandle *)in_RDX = this->BindlessHandle;
  return in_RDX;
}

// GetDeviceAddress @ 145babc20

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

ulong64 __thiscall FVulkanUniformBuffer::GetDeviceAddress(FVulkanUniformBuffer *this)

{
  VkBuffer_T *pVVar1;
  ulong64 uVar2;
  VkBufferDeviceAddressInfo local_28;
  
  local_28.sType = VK_STRUCTURE_TYPE_BUFFER_DEVICE_ADDRESS_INFO;
  local_28.buffer._4_4_ = 0;
  local_28._4_8_ = 0;
  local_28.pNext._4_4_ = 0;
  local_28.buffer._0_4_ = 0;
  pVVar1 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&this->Allocation);
  local_28.buffer._0_4_ = SUB84(pVVar1,0);
  local_28.buffer._4_4_ = (undefined4)((ulonglong)pVVar1 >> 0x20);
  uVar2 = (*VulkanDynamicAPI::vkGetBufferDeviceAddressKHR)(this->Device->Device,&local_28);
  return uVar2 + (this->Allocation).Offset;
}

// SetupUniformBufferView @ 145bbdab0

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
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FVulkanUniformBuffer::SetupUniformBufferView(FVulkanUniformBuffer *this)

{
  uint *puVar1;
  FRHIView *this_00;
  code *pcVar2;
  bool bVar3;
  VkBuffer_T *pVVar4;
  FRHIBuffer *pFVar5;
  
  if ((this->UniformViewSRV != (FRHIShaderResourceView *)0x0) &&
     (pVVar4 = VulkanRHI::FVulkanAllocation::GetBufferHandle(&this->Allocation),
     pVVar4 == (VkBuffer_T *)0x0)) {
    this_00 = (FRHIView *)this->UniformViewSRV;
    pFVar5 = FRHIView::GetBuffer(this_00);
    VulkanRHI::FVulkanAllocation::Reference
              (&this->Allocation,(FVulkanAllocation *)&pFVar5[1]._padding_);
    if (((this->Allocation).Size < 0x4000) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Allocation.Size >= (16u*1024u)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                           ,0x65,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    puVar1 = &(this->Allocation).Offset;
    *puVar1 = *puVar1 + *(int *)((longlong)&(this_00->ViewDesc).field0_0x0 + 4);
  }
  return;
}

// UpdateResourceTable @ 145bc05b0

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
FVulkanUniformBuffer::UpdateResourceTable
          (FVulkanUniformBuffer *this,FRHIUniformBufferLayout *param_1,void *param_2,int param_3)

{
  FRDGResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  undefined8 *puVar5;
  FRHIResource *this_02;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (((int)this->_padding_ != param_3) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceTable.Num() == NumResources",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                         ,0xdb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar6 = 0;
  if (0 < param_3) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar6 < (param_1->Resources).ArrayNum) {
        uVar3 = ~uVar6 >> 0x1f;
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
      uVar3 = *(uint *)((param_1->Resources).AllocatorInstance.Data + lVar8);
      bVar4 = (byte)(uVar3 >> 0x10);
      if ((((bVar4 == 0x17) || ((byte)(bVar4 - 10) < 2)) || ((byte)(bVar4 - 0xf) < 2)) ||
         ((bVar4 == 0x16 || (bVar4 == 0x13)))) {
LAB_145bc06e1:
        this_02 = (FRHIResource *)0x0;
      }
      else {
        puVar5 = (undefined8 *)((ulonglong)(ushort)uVar3 + (longlong)param_2);
        if ((bVar4 < 0x13) && ((0x67200U >> (uVar3 >> 0x10 & 0x1f) & 1) != 0)) {
          this_00 = (FRDGResource *)*puVar5;
          if (this_00 == (FRDGResource *)0x0) goto LAB_145bc06e1;
          FRDGResource::ValidateRHIAccess(this_00);
          this_02 = this_00->ResourceRHI;
        }
        else {
          this_02 = (FRHIResource *)*puVar5;
        }
      }
      uVar3 = 0;
      if ((int)uVar6 < (int)this->_padding_) {
        uVar3 = ~uVar6 >> 0x1f;
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
      this_01 = *(FRHIResource **)(lVar7 + this->_padding_);
      if (this_01 != this_02) {
        *(FRHIResource **)(lVar7 + this->_padding_) = this_02;
        if (this_02 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_02);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 4;
      lVar7 = lVar7 + 8;
    } while ((int)uVar6 < param_3);
  }
  return;
}

// UpdateResourceTable @ 145bc07a0

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
FVulkanUniformBuffer::UpdateResourceTable
          (FVulkanUniformBuffer *this,FRHIResource **param_1,int param_2)

{
  FRHIResource *this_00;
  FRHIResource *this_01;
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if (((int)this->_padding_ != param_2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ResourceTable.Num() == ResourceNum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanUniformBuffer.cpp"
                         ,0xe6,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar4 = 0;
  if (0 < param_2) {
    lVar5 = 0;
    do {
      this_00 = *(FRHIResource **)(lVar5 + (longlong)param_1);
      uVar3 = 0;
      if ((int)uVar4 < (int)this->_padding_) {
        uVar3 = ~uVar4 >> 0x1f;
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
      this_01 = *(FRHIResource **)(this->_padding_ + lVar5);
      if (this_01 != this_00) {
        *(FRHIResource **)(this->_padding_ + lVar5) = this_00;
        if (this_00 != (FRHIResource *)0x0) {
          FRHIResource::AddRef(this_00);
        }
        if (this_01 != (FRHIResource *)0x0) {
          FRHIResource::Release(this_01);
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 8;
    } while ((int)uVar4 < param_2);
  }
  return;
}

