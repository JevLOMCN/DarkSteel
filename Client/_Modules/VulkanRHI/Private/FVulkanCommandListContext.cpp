// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 100

// SetResourcesFromTables<TVulkanBaseShader<FRHIAmplificationShader,2>_> @ 145ad8580

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIAmplificationShader,2>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIAmplificationShader,2> *param_1)

{
  undefined1 uVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_28;
  
  pFVar2 = this->PendingGfxState;
  uVar1 = param_1->field_0x209;
  local_28.Frequency = SF_Amplification;
  local_28.Context = this;
  local_28.Stage = ShaderStage::GetStageForFrequency(SF_Amplification);
  local_28.PendingState = pFVar2;
  local_28.bBindless = (bool)uVar1;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 2,
             this->BoundUniformBuffers + 2,(FTracker *)this->_padding_);
  return;
}

// SetResourcesFromTables<TVulkanBaseShader<FRHIComputeShader,5>_> @ 145ad8610

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIComputeShader,5>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIComputeShader,5> *param_1)

{
  FVulkanResourceBinder<FVulkanPendingComputeState> local_28;
  
  local_28.PendingState = this->PendingComputeState;
  local_28.bBindless = (bool)param_1->field_0x211;
  local_28.Frequency = SF_Compute;
  local_28.Stage = Compute;
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 5,
             this->BoundUniformBuffers + 5,(FTracker *)this->_padding_);
  return;
}

// SetResourcesFromTables<TVulkanBaseShader<FRHIGeometryShader,4>_> @ 145ad8670

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIGeometryShader,4>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIGeometryShader,4> *param_1)

{
  undefined1 uVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_28;
  
  pFVar2 = this->PendingGfxState;
  uVar1 = param_1->field_0x209;
  local_28.Frequency = SF_Geometry;
  local_28.Context = this;
  local_28.Stage = ShaderStage::GetStageForFrequency(SF_Geometry);
  local_28.PendingState = pFVar2;
  local_28.bBindless = (bool)uVar1;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 4,
             this->BoundUniformBuffers + 4,(FTracker *)this->_padding_);
  return;
}

// SetResourcesFromTables<TVulkanBaseShader<FRHIMeshShader,1>_> @ 145ad8700

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIMeshShader,1>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIMeshShader,1> *param_1)

{
  undefined1 uVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_28;
  
  pFVar2 = this->PendingGfxState;
  uVar1 = param_1->field_0x209;
  local_28.Frequency = SF_Mesh;
  local_28.Context = this;
  local_28.Stage = ShaderStage::GetStageForFrequency(SF_Mesh);
  local_28.PendingState = pFVar2;
  local_28.bBindless = (bool)uVar1;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 1,
             this->BoundUniformBuffers + 1,(FTracker *)this->_padding_);
  return;
}

// SetResourcesFromTables<TVulkanBaseShader<FRHIPixelShader,3>_> @ 145ad8790

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIPixelShader,3>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIPixelShader,3> *param_1)

{
  undefined1 uVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_28;
  
  pFVar2 = this->PendingGfxState;
  uVar1 = param_1->field_0x209;
  local_28.Frequency = SF_Pixel;
  local_28.Context = this;
  local_28.Stage = ShaderStage::GetStageForFrequency(SF_Pixel);
  local_28.PendingState = pFVar2;
  local_28.bBindless = (bool)uVar1;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 3,
             this->BoundUniformBuffers + 3,(FTracker *)this->_padding_);
  return;
}

// SetResourcesFromTables<TVulkanBaseShader<FRHIVertexShader,0>_> @ 145ad8820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::SetResourcesFromTables<TVulkanBaseShader<FRHIVertexShader,0>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIVertexShader,0> *param_1)

{
  undefined1 uVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_28;
  
  pFVar2 = this->PendingGfxState;
  uVar1 = param_1->field_0x209;
  local_28.Frequency = SF_Vertex;
  local_28.Context = this;
  local_28.Stage = ShaderStage::GetStageForFrequency(SF_Vertex);
  local_28.PendingState = pFVar2;
  local_28.bBindless = (bool)uVar1;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers,this->BoundUniformBuffers,
             (FTracker *)this->_padding_);
  return;
}

// FVulkanCommandListContext @ 145adb480

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

FVulkanCommandListContext * __thiscall
FVulkanCommandListContext::FVulkanCommandListContext
          (FVulkanCommandListContext *this,FVulkanDevice *param_1,FVulkanCommandListContext *param_2
          ,FVulkanParallelRenderPassInfo *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ulonglong uVar4;
  FVulkanQueue *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FVulkanCommandBufferPool *pFVar8;
  FVulkanCommandListContext *pFVar9;
  FVulkanPendingGfxState *this_01;
  FVulkanPendingGfxState *pFVar10;
  FUniformBufferStaticSlotRegistry *pFVar11;
  
  uVar4 = (param_1->OptionalDeviceExtensions).field0_0x0.Packed;
  this_00 = (param_1->Queues).Elements[0];
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FVulkanContextCommon__6B_;
  this->_padding_ = (longlong)this_00;
  pFVar8 = FVulkanQueue::AcquireCommandBufferPool(this_00,((uVar4 >> 0x32 & 1) != 0) + Secondary);
  pFVar10 = (FVulkanPendingGfxState *)0x0;
  this->_padding_ = (longlong)pFVar8;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  IRHICommandContext::IRHICommandContext((IRHICommandContext *)&this->_padding_);
  this->Immediate = param_2;
  this->_padding_ = (longlong)&_vftable__for__FVulkanContextCommon__;
  (this->EventStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventStack).ArrayNum = 0;
  (this->EventStack).ArrayMax = 0;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContext__;
  this->RHIPipeline = Graphics;
  this->bSupportsBreadcrumbs = false;
  this->CurrentRenderPass = (FVulkanRenderPass *)0x0;
  this->CurrentFramebuffer = (FVulkanFramebuffer *)0x0;
  this->CurrentParallelRenderPassInfo = param_3;
  this->PendingGfxState = (FVulkanPendingGfxState *)0x0;
  this->PendingComputeState = (FVulkanPendingComputeState *)0x0;
  memset(this->BoundUniformBuffers,0,0x300);
  piVar1 = &(this->GlobalUniformBuffers).ArrayNum;
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  piVar2 = &(this->GlobalUniformBuffers).ArrayMax;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  *(undefined8 *)&this->TypedDescriptorPoolSets = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x8 = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x20 = 0;
  this->CurrentDescriptorPoolSetContainer = (FVulkanDescriptorPoolSetContainer *)0x0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x28 = 0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x34 = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x40 = 0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x48 = 0;
  (this->GlobalUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->ShaderBindingLayout = (FRHIShaderBindingLayout *)0x0;
  if (this->CurrentParallelRenderPassInfo == (FVulkanParallelRenderPassInfo *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentParallelRenderPassInfo",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                       ,0x120,
                       L"Secondary command buffers should be created with a FVulkanParallelRenderPassInfo."
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FVulkanCommandListContext *)(*pcVar5)();
      return pFVar9;
    }
  }
  this_01 = ::operator_new(0x200);
  if (this_01 != (FVulkanPendingGfxState *)0x0) {
    pFVar10 = FVulkanPendingGfxState::FVulkanPendingGfxState
                        (this_01,(FVulkanDevice *)this->_padding_);
  }
  this->PendingGfxState = pFVar10;
  pFVar11 = FUniformBufferStaticSlotRegistry::Get();
  iVar3 = (pFVar11->SlotNames).ArrayNum;
  iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&(this->GlobalUniformBuffers).AllocatorInstance,piVar1,piVar2);
  memset((this->GlobalUniformBuffers).AllocatorInstance.Data + (longlong)iVar7 * 8,0,
         (longlong)iVar3 << 3);
  return this;
}

// FVulkanCommandListContext @ 145adb6a0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVulkanCommandListContext * __thiscall
FVulkanCommandListContext::FVulkanCommandListContext
          (FVulkanCommandListContext *this,FVulkanDevice *param_1,ERHIPipeline param_2,
          FVulkanCommandListContext *param_3)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  ForElementType<VkRect2D> FVar4;
  code *pcVar5;
  TArray<VkViewport,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar6;
  TArray<VkRect2D,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  bool bVar8;
  int iVar9;
  FVulkanCommandListContext *pFVar10;
  FVulkanCommandBufferPool *pFVar11;
  FVulkanPendingGfxState *this_00;
  FVulkanPendingGfxState *pFVar12;
  FVulkanPendingGfxState *pFVar13;
  FUniformBufferStaticSlotRegistry *pFVar14;
  FVulkanQueue *this_01;
  
  pFVar13 = (FVulkanPendingGfxState *)0x0;
  if (param_2 == Graphics) {
    this_01 = (param_1->Queues).Elements[0];
  }
  else if (param_2 == AsyncCompute) {
    this_01 = (param_1->Queues).Elements[1];
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanDevice.h"
                       ,0x14a,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      pFVar10 = (FVulkanCommandListContext *)(*pcVar5)();
      return pFVar10;
    }
    this_01 = (FVulkanQueue *)0x0;
  }
  this->_padding_ = (longlong)param_1;
  this->_padding_ = (longlong)&___7FVulkanContextCommon__6B_;
  this->_padding_ = (longlong)this_01;
  pFVar11 = FVulkanQueue::AcquireCommandBufferPool(this_01,Primary);
  this->_padding_ = (longlong)pFVar11;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  IRHICommandContext::IRHICommandContext((IRHICommandContext *)&this->_padding_);
  this->Immediate = param_3;
  this->_padding_ = (longlong)&_vftable__for__FVulkanContextCommon__;
  this->RHIPipeline = param_2;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContext__;
  bVar8 = GRHIGlobals.SupportsTimestampRenderQueries;
  (this->EventStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventStack).ArrayNum = 0;
  (this->EventStack).ArrayMax = 0;
  this->bSupportsBreadcrumbs = bVar8;
  this->PendingGfxState = (FVulkanPendingGfxState *)0x0;
  this->PendingComputeState = (FVulkanPendingComputeState *)0x0;
  this->CurrentRenderPass = (FVulkanRenderPass *)0x0;
  this->CurrentFramebuffer = (FVulkanFramebuffer *)0x0;
  this->CurrentParallelRenderPassInfo = (FVulkanParallelRenderPassInfo *)0x0;
  memset(this->BoundUniformBuffers,0,0x300);
  piVar1 = &(this->GlobalUniformBuffers).ArrayNum;
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  piVar2 = &(this->GlobalUniformBuffers).ArrayMax;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  *(undefined8 *)&this->TypedDescriptorPoolSets = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x8 = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x20 = 0;
  this->CurrentDescriptorPoolSetContainer = (FVulkanDescriptorPoolSetContainer *)0x0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x28 = 0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x2c = 0x80;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x34 = 0;
  *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x40 = 0;
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x48 = 0;
  (this->GlobalUniformBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  *piVar2 = 0;
  this->ShaderBindingLayout = (FRHIShaderBindingLayout *)0x0;
  this_00 = ::operator_new(0x200);
  pFVar12 = pFVar13;
  if (this_00 != (FVulkanPendingGfxState *)0x0) {
    pFVar12 = FVulkanPendingGfxState::FVulkanPendingGfxState
                        (this_00,(FVulkanDevice *)this->_padding_);
  }
  this->PendingGfxState = pFVar12;
  pFVar12 = ::operator_new(0x68);
  if (pFVar12 != (FVulkanPendingGfxState *)0x0) {
    FVar4 = (ForElementType<VkRect2D>)this->_padding_;
    pTVar6 = &pFVar12->Viewports;
    (pTVar6->AllocatorInstance).InlineData[0x10] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x17] = '\0';
    pTVar6 = &pFVar12->Viewports;
    (pTVar6->AllocatorInstance).InlineData[0x18] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1b] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1c] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1d] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1e] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0x1f] = '\0';
    (pFVar12->Viewports).AllocatorInstance.SecondaryData = (ForElementType<VkViewport>)0x0;
    (pFVar12->Viewports).AllocatorInstance.InlineData[0] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[1] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[2] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[3] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[4] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[5] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[6] = '\0';
    (pFVar12->Viewports).AllocatorInstance.InlineData[7] = '\0';
    pTVar6 = &pFVar12->Viewports;
    (pTVar6->AllocatorInstance).InlineData[8] = '\0';
    (pTVar6->AllocatorInstance).InlineData[9] = '\0';
    (pTVar6->AllocatorInstance).InlineData[10] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xb] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xc] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xd] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xe] = '\0';
    (pTVar6->AllocatorInstance).InlineData[0xf] = '\0';
    (pFVar12->Viewports).ArrayNum = 0;
    (pFVar12->Viewports).ArrayMax = 0x80;
    (pFVar12->Scissors).AllocatorInstance.InlineData[0] = 0xff;
    (pFVar12->Scissors).AllocatorInstance.InlineData[1] = 0xff;
    (pFVar12->Scissors).AllocatorInstance.InlineData[2] = 0xff;
    (pFVar12->Scissors).AllocatorInstance.InlineData[3] = 0xff;
    pTVar7 = &pFVar12->Scissors;
    (pTVar7->AllocatorInstance).InlineData[4] = '\0';
    (pTVar7->AllocatorInstance).InlineData[5] = '\0';
    (pTVar7->AllocatorInstance).InlineData[6] = '\0';
    (pTVar7->AllocatorInstance).InlineData[7] = '\0';
    pTVar7 = &pFVar12->Scissors;
    (pTVar7->AllocatorInstance).InlineData[0x10] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x11] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x12] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x13] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x14] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x15] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x16] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x17] = '\0';
    pTVar7 = &pFVar12->Scissors;
    (pTVar7->AllocatorInstance).InlineData[0x18] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x19] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x1a] = '\0';
    (pTVar7->AllocatorInstance).InlineData[0x1b] = '\0';
    (pFVar12->Scissors).AllocatorInstance.SecondaryData = FVar4;
    pFVar13 = pFVar12;
  }
  this->PendingComputeState = (FVulkanPendingComputeState *)pFVar13;
  pFVar14 = FUniformBufferStaticSlotRegistry::Get();
  iVar3 = (pFVar14->SlotNames).ArrayNum;
  iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,&(this->GlobalUniformBuffers).AllocatorInstance,piVar1,piVar2);
  memset((this->GlobalUniformBuffers).AllocatorInstance.Data + (longlong)iVar9 * 8,0,
         (longlong)iVar3 << 3);
  return this;
}

// ~FVulkanCommandListContext @ 145adc9c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::~FVulkanCommandListContext(FVulkanCommandListContext *this)

{
  FVulkanPendingGfxState *this_00;
  FVulkanPendingComputeState *this_01;
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this_00 = this->PendingGfxState;
  this->_padding_ = (longlong)&_vftable__for__FVulkanContextCommon__;
  this->_padding_ = (longlong)&_vftable__for__IRHICommandContext__;
  if (this_00 != (FVulkanPendingGfxState *)0x0) {
    FVulkanPendingGfxState::~FVulkanPendingGfxState(this_00);
    ::operator_delete(this_00,0x200);
  }
  this_01 = this->PendingComputeState;
  this->PendingGfxState = (FVulkanPendingGfxState *)0x0;
  if (this_01 != (FVulkanPendingComputeState *)0x0) {
    FVulkanPendingComputeState::~FVulkanPendingComputeState(this_01);
    ::operator_delete(this_01,0x68);
  }
  this->PendingComputeState = (FVulkanPendingComputeState *)0x0;
  pFVar1 = (this->GlobalUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->TypedDescriptorPoolSets).field_0x48 = 0;
  pvVar2 = *(void **)&(this->TypedDescriptorPoolSets).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->TypedDescriptorPoolSets);
  DestructItems<FString,int>
            ((FString *)(this->EventStack).AllocatorInstance.Data,(this->EventStack).ArrayNum);
  pFVar1 = (this->EventStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IRHICommandContext__6B_;
  if ((FRHIResource *)this->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)this->_padding_);
  }
  this->_padding_ = (longlong)&___7IRHIComputeContext__6B_;
  FVulkanContextCommon::~FVulkanContextCommon((FVulkanContextCommon *)this);
  return;
}

// AcquirePoolSetAndDescriptorsIfNeeded @ 145adefc0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FVulkanCommandListContext::AcquirePoolSetAndDescriptorsIfNeeded
          (FVulkanCommandListContext *this,FVulkanDescriptorSetsLayout *param_1,bool param_2,
          VkDescriptorSet_T **param_3)

{
  TMap<unsigned_int,FVulkanTypedDescriptorPoolSet_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>_>
  *this_00;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  FVulkanDescriptorPoolSetContainer *pFVar5;
  FVulkanTypedDescriptorPoolSet *this_01;
  undefined1 *puVar6;
  longlong lVar7;
  int local_res8 [2];
  uint *local_res10;
  uint local_res18 [2];
  
  if (this->CurrentDescriptorPoolSetContainer == (FVulkanDescriptorPoolSetContainer *)0x0) {
    pFVar5 = FVulkanDescriptorPoolsManager::AcquirePoolSetContainer
                       (*(FVulkanDescriptorPoolsManager **)(this->_padding_ + 0x720));
    this->CurrentDescriptorPoolSetContainer = pFVar5;
    if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 !=
         *(int *)&(this->TypedDescriptorPoolSets).field_0x34) &&
       (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_5718447211696618825>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                           ,0x2b7,"TypedDescriptorPoolSets.Num() == 0"), bVar2)) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  local_res18[0] = *(uint *)((longlong)&param_1->_padding_ + 4);
  this_00 = &this->TypedDescriptorPoolSets;
  if (*(int *)&(this->TypedDescriptorPoolSets).field_0x8 !=
      *(int *)&(this->TypedDescriptorPoolSets).field_0x34) {
    puVar6 = *(undefined1 **)&(this->TypedDescriptorPoolSets).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(this->TypedDescriptorPoolSets).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(this->TypedDescriptorPoolSets).field_0x48 - 1U &
                              local_res18[0]) * 4);
    if (iVar4 != -1) {
      do {
        lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18;
        if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar4 * 0x18) == local_res18[0])
        {
          if (lVar7 != 0) goto LAB_145adf0d4;
          break;
        }
        iVar4 = *(int *)(lVar7 + 0x10);
      } while (iVar4 != -1);
    }
  }
  local_res10 = local_res18;
  TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<unsigned_int_const_&>_>
            ((TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,
             (TKeyInitializer<unsigned_int_const_&> *)(ulonglong)local_res18[0],(bool *)&local_res10
            );
  lVar7 = *(longlong *)&this_00->field_0x0 + (longlong)local_res8[0] * 0x18;
LAB_145adf0d4:
  if (*(FVulkanTypedDescriptorPoolSet **)(lVar7 + 8) == (FVulkanTypedDescriptorPoolSet *)0x0) {
    this_01 = FVulkanDescriptorPoolSetContainer::AcquireTypedPoolSet
                        (this->CurrentDescriptorPoolSetContainer,param_1);
    *(FVulkanTypedDescriptorPoolSet **)(lVar7 + 8) = this_01;
    bVar2 = FVulkanTypedDescriptorPoolSet::AllocateDescriptorSets(this_01,param_1,param_3);
    return bVar2;
  }
  if (!param_2) {
    return false;
  }
  bVar2 = FVulkanTypedDescriptorPoolSet::AllocateDescriptorSets
                    (*(FVulkanTypedDescriptorPoolSet **)(lVar7 + 8),param_1,param_3);
  return bVar2;
}

// AcquirePoolSetContainer @ 145adf150

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::AcquirePoolSetContainer(FVulkanCommandListContext *this)

{
  code *pcVar1;
  bool bVar2;
  FVulkanDescriptorPoolSetContainer *pFVar3;
  
  if (this->CurrentDescriptorPoolSetContainer == (FVulkanDescriptorPoolSetContainer *)0x0) {
    pFVar3 = FVulkanDescriptorPoolsManager::AcquirePoolSetContainer
                       (*(FVulkanDescriptorPoolsManager **)(this->_padding_ + 0x720));
    this->CurrentDescriptorPoolSetContainer = pFVar3;
    if (*(int *)&(this->TypedDescriptorPoolSets).field_0x8 !=
        *(int *)&(this->TypedDescriptorPoolSets).field_0x34) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_5718447211696618825>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                         ,0x2b7,"TypedDescriptorPoolSets.Num() == 0");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  return;
}

// ApplyShaderBindingLayout @ 145ae0380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyShaderBindingLayout(FVulkanCommandListContext *this,uint param_1)

{
  VkPipelineLayout_T *pVVar1;
  code *pcVar2;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineLayout_T_ptr_uint_uint_uint_void_ptr *p_Var3;
  bool bVar4;
  uint uVar5;
  FVulkanCommandBuffer *pFVar6;
  uint uVar7;
  ulonglong uVar8;
  FRHIShaderBindingLayout *pFVar9;
  undefined1 auStackY_88 [32];
  int local_58;
  char local_54;
  int local_50 [8];
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_88;
  if ((this->ShaderBindingLayout != (FRHIShaderBindingLayout *)0x0) &&
     (this->ShaderBindingLayout->NumUniformBufferEntries != 0)) {
    if ((*(char *)(*(longlong *)(this->_padding_ + 0x728) + 8) == '\0') &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Device.GetBindlessDescriptorManager()->IsSupported()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                           ,0x2d4,L"Static uniform buffer require bindless."), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar9 = this->ShaderBindingLayout;
    uVar8 = 0;
    if (pFVar9->NumUniformBufferEntries != 0) {
      do {
        uVar7 = (uint)uVar8;
        uVar5 = 0;
        if ((int)uVar7 < (this->GlobalUniformBuffers).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if (*(longlong *)
             ((this->GlobalUniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8) == 0)
        {
          if ((this->ShaderBindingLayout->NumUniformBufferEntries <= uVar7) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Index < NumUniformBufferEntries",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIShaderBindingLayout.h"
                                 ,0x61,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("GlobalUniformBuffers[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                             ,0x2da,L"Missing static uniform buffer for shader binding layout (%s)."
                            );
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
        }
        uVar5 = 0;
        if ((int)uVar7 < (this->GlobalUniformBuffers).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        FVulkanUniformBuffer::GetBindlessHandle
                  (*(FVulkanUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (longlong)(int)uVar7 * 8)
                  );
        if (((local_58 == -1) || (local_54 == '\t')) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("BindlessHandle.IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                               ,0x2de,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pFVar9 = this->ShaderBindingLayout;
        local_50[uVar8] = local_58;
        uVar8 = (ulonglong)(uVar7 + 1);
      } while (uVar7 + 1 < pFVar9->NumUniformBufferEntries);
    }
    p_Var3 = VulkanDynamicAPI::vkCmdPushConstants;
    uVar5 = pFVar9->NumUniformBufferEntries;
    pVVar1 = *(VkPipelineLayout_T **)(*(longlong *)(this->_padding_ + 0x728) + 0x3d0);
    pFVar6 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
    (*p_Var3)(pFVar6->CommandBufferHandle,pVVar1,param_1,0,uVar5 << 2,local_50);
  }
  return;
}

// CommitComputeResourceTables @ 145ae0f10

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::CommitComputeResourceTables(FVulkanCommandListContext *this)

{
  FRHIShader *pFVar1;
  FVulkanResourceBinder<FVulkanPendingComputeState> local_28;
  
  local_28.PendingState = this->PendingComputeState;
  pFVar1 = (FRHIShader *)0x0;
  if ((local_28.PendingState)->CurrentPipeline != (FVulkanComputePipeline *)0x0) {
    pFVar1 = (FRHIShader *)(local_28.PendingState)->CurrentPipeline->_padding_;
  }
  local_28.bBindless = *(bool *)((longlong)&pFVar1[2]._padding_ + 1);
  local_28.Frequency = SF_Compute;
  local_28.Stage = Compute;
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,pFVar1,this->DirtyUniformBuffers + 5,this->BoundUniformBuffers + 5,
             (FTracker *)this->_padding_);
  return;
}

// CommitGraphicsResourceTables @ 145ae0f80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::CommitGraphicsResourceTables(FVulkanCommandListContext *this)

{
  bool bVar1;
  FVulkanGraphicsPipelineState *pFVar2;
  FVulkanShader *pFVar3;
  FVulkanPendingGfxState *pFVar4;
  EStage EVar5;
  FVulkanResourceBinder<FVulkanPendingGfxState> local_38;
  
  pFVar2 = this->PendingGfxState->CurrentPipeline;
  if (pFVar2 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar5 = ShaderStage::GetStageForFrequency(SF_Vertex);
    pFVar3 = pFVar2->VulkanShaders[(int)EVar5];
    if (pFVar3 != (FVulkanShader *)0x0) {
      bVar1 = pFVar3->bUsesBindless;
      pFVar4 = this->PendingGfxState;
      local_38.Frequency = SF_Vertex;
      local_38.Context = this;
      local_38.Stage = ShaderStage::GetStageForFrequency(SF_Vertex);
      local_38.PendingState = pFVar4;
      local_38.bBindless = bVar1;
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
                (&local_38,(FRHIShader *)&pFVar3[-1].CodeHeader,this->DirtyUniformBuffers,
                 this->BoundUniformBuffers,(FTracker *)this->_padding_);
    }
  }
  pFVar2 = this->PendingGfxState->CurrentPipeline;
  if (pFVar2 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar5 = ShaderStage::GetStageForFrequency(SF_Pixel);
    pFVar3 = pFVar2->VulkanShaders[(int)EVar5];
    if (pFVar3 != (FVulkanShader *)0x0) {
      bVar1 = pFVar3->bUsesBindless;
      pFVar4 = this->PendingGfxState;
      local_38.Frequency = SF_Pixel;
      local_38.Context = this;
      local_38.Stage = ShaderStage::GetStageForFrequency(SF_Pixel);
      local_38.PendingState = pFVar4;
      local_38.bBindless = bVar1;
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
                (&local_38,(FRHIShader *)&pFVar3[-1].CodeHeader,this->DirtyUniformBuffers + 3,
                 this->BoundUniformBuffers + 3,(FTracker *)this->_padding_);
    }
  }
  pFVar2 = this->PendingGfxState->CurrentPipeline;
  if (pFVar2 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar5 = ShaderStage::GetStageForFrequency(SF_Mesh);
    pFVar3 = pFVar2->VulkanShaders[(int)EVar5];
    if (pFVar3 != (FVulkanShader *)0x0) {
      bVar1 = pFVar3->bUsesBindless;
      pFVar4 = this->PendingGfxState;
      local_38.Frequency = SF_Mesh;
      local_38.Context = this;
      local_38.Stage = ShaderStage::GetStageForFrequency(SF_Mesh);
      local_38.PendingState = pFVar4;
      local_38.bBindless = bVar1;
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
                (&local_38,(FRHIShader *)&pFVar3[-1].CodeHeader,this->DirtyUniformBuffers + 1,
                 this->BoundUniformBuffers + 1,(FTracker *)this->_padding_);
    }
  }
  pFVar2 = this->PendingGfxState->CurrentPipeline;
  if (pFVar2 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar5 = ShaderStage::GetStageForFrequency(SF_Amplification);
    pFVar3 = pFVar2->VulkanShaders[(int)EVar5];
    if (pFVar3 != (FVulkanShader *)0x0) {
      bVar1 = pFVar3->bUsesBindless;
      pFVar4 = this->PendingGfxState;
      local_38.Frequency = SF_Amplification;
      local_38.Context = this;
      local_38.Stage = ShaderStage::GetStageForFrequency(SF_Amplification);
      local_38.PendingState = pFVar4;
      local_38.bBindless = bVar1;
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
                (&local_38,(FRHIShader *)&pFVar3[-1].CodeHeader,this->DirtyUniformBuffers + 2,
                 this->BoundUniformBuffers + 2,(FTracker *)this->_padding_);
    }
  }
  pFVar2 = this->PendingGfxState->CurrentPipeline;
  if (pFVar2 != (FVulkanGraphicsPipelineState *)0x0) {
    EVar5 = ShaderStage::GetStageForFrequency(SF_Geometry);
    pFVar3 = pFVar2->VulkanShaders[(int)EVar5];
    if (pFVar3 != (FVulkanShader *)0x0) {
      bVar1 = pFVar3->bUsesBindless;
      pFVar4 = this->PendingGfxState;
      local_38.Frequency = SF_Geometry;
      local_38.Context = this;
      local_38.Stage = ShaderStage::GetStageForFrequency(SF_Geometry);
      local_38.PendingState = pFVar4;
      local_38.bBindless = bVar1;
      UE::RHI::Private::
      SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingGfxState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
                (&local_38,(FRHIShader *)&pFVar3[-1].CodeHeader,this->DirtyUniformBuffers + 4,
                 this->BoundUniformBuffers + 4,(FTracker *)this->_padding_);
    }
  }
  return;
}

// FillDynamicRenderingInfo @ 145ae42b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::FillDynamicRenderingInfo
          (FVulkanCommandListContext *this,FRHIRenderPassInfo *param_1,
          FVulkanDynamicRenderingInfo *param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  VkClearValue *pVVar3;
  ESubpassHint EVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  FRHITexture *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  VkAttachmentLoadOp VVar12;
  VkAttachmentStoreOp VVar13;
  VkAttachmentStoreOp VVar14;
  FRHIRenderPassInfo *pFVar15;
  FVulkanTexture *pFVar16;
  uint *puVar17;
  longlong lVar18;
  FVulkanView *pFVar19;
  FTextureView *pFVar20;
  ERenderTargetActions EVar21;
  ulonglong uVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  uchar *puVar26;
  ulonglong uVar27;
  VkAttachmentLoadOp *pVVar28;
  float fVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  uint local_res18 [2];
  uint local_res20;
  uint local_88;
  VkImageLayout local_80;
  VkImageLayout local_7c;
  uint local_78;
  longlong local_70;
  FVulkanTexture *local_68;
  float local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  
  (param_2->RenderingInfo).sType = VK_STRUCTURE_TYPE_RENDERING_INFO;
  *(undefined8 *)&(param_2->RenderingInfo).field_0x4 = 0;
  *(undefined8 *)((longlong)&(param_2->RenderingInfo).pNext + 4) = 0;
  (param_2->RenderingInfo).renderArea.offset.x = 0;
  (param_2->RenderingInfo).renderArea.offset.y = 0;
  (param_2->RenderingInfo).renderArea.extent.width = 0;
  (param_2->RenderingInfo).renderArea.extent.height = 0;
  uVar27 = 0;
  (param_2->RenderingInfo).layerCount = 0;
  (param_2->RenderingInfo).viewMask = 0;
  *(undefined8 *)&(param_2->RenderingInfo).colorAttachmentCount = 0;
  *(undefined8 *)((longlong)&(param_2->RenderingInfo).pColorAttachments + 4) = 0;
  *(undefined8 *)((longlong)&(param_2->RenderingInfo).pDepthAttachment + 4) = 0;
  *(undefined4 *)((longlong)&(param_2->RenderingInfo).pStencilAttachment + 4) = 0;
  EVar4 = param_1->SubpassHint;
  bVar6 = 0;
  local_res18[0] = 0;
  pFVar15 = param_1;
  uVar22 = uVar27;
  uVar24 = uVar27;
  do {
    local_res20 = (uint)uVar24;
    if ((pFVar15->ColorRenderTargets).Elements[0].RenderTarget == (FRHITexture *)0x0) break;
    local_res20 = local_res20 + 1;
    uVar24 = (ulonglong)local_res20;
    uVar22 = uVar22 + 1;
    pFVar15 = (FRHIRenderPassInfo *)((pFVar15->ColorRenderTargets).Elements + 1);
  } while ((longlong)uVar22 < 8);
  uVar22 = uVar27;
  if (local_res20 != 0) {
    local_70 = (longlong)(int)local_res20;
    (param_2->RenderingInfo).colorAttachmentCount = local_res20;
    (param_2->RenderingInfo).pColorAttachments = (VkRenderingAttachmentInfo *)param_2;
    local_88 = 0;
    uVar22 = 0;
    if (0 < (int)local_res20) {
      local_78 = local_res20 - 1;
      puVar26 = &(param_1->ColorRenderTargets).Elements[0].MipIndex;
      pVVar28 = &(param_2->ColorAttachmentInfos).Elements[0].loadOp;
      do {
        ((VkRenderingAttachmentInfo *)(pVVar28 + -0xb))->sType =
             VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO;
        puVar1 = &(param_2->ColorAttachmentInfos).Elements[uVar27].field_0x4;
        *(undefined8 *)puVar1 = 0;
        *(undefined8 *)(puVar1 + 8) = 0;
        puVar2 = (undefined8 *)
                 ((longlong)&(param_2->ColorAttachmentInfos).Elements[uVar27].imageView + 4);
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2 = (undefined8 *)
                 ((longlong)&(param_2->ColorAttachmentInfos).Elements[uVar27].resolveImageView + 4);
        *puVar2 = 0;
        puVar2[1] = 0;
        pVVar3 = &(param_2->ColorAttachmentInfos).Elements[uVar27].clearValue;
        *(float *)pVVar3 = 0.0;
        *(uint *)((longlong)&pVVar3->depthStencil + 4) = 0;
        ((VkClearDepthStencilValue *)((longlong)pVVar3 + 8))->depth = 0.0;
        ((VkClearDepthStencilValue *)((longlong)pVVar3 + 8))->stencil = 0;
        *(undefined4 *)&(param_2->ColorAttachmentInfos).Elements[uVar27].field_0x44 = 0;
        pFVar16 = (FVulkanTexture *)
                  (**(code **)(((FColorEntry *)(puVar26 + -0x14))->RenderTarget->_padding_ + 0x48))
                            ();
        local_68 = pFVar16;
        if ((pFVar16 == (FVulkanTexture *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Texture",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                ,0x16b,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        puVar17 = (uint *)(**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
        uVar25 = (int)puVar17[9] >> (*puVar26 & 0x1f);
        uVar23 = (param_2->RenderingInfo).renderArea.extent.width;
        if ((int)uVar25 < 1) {
          uVar25 = 1;
        }
        if (((uVar23 != 0) && (uVar23 != uVar25)) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5718447211696619152>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                ,0x170,"(Extent.width == 0) || (Extent.width == ExtentWidth)"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        uVar23 = (param_2->RenderingInfo).renderArea.extent.height;
        (param_2->RenderingInfo).renderArea.extent.width = uVar25;
        uVar25 = (int)puVar17[10] >> (*puVar26 & 0x1f);
        if ((int)uVar25 < 1) {
          uVar25 = 1;
        }
        if (((uVar23 != 0) && (uVar23 != uVar25)) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5718447211696619149>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                ,0x173,"(Extent.height == 0) || (Extent.height == ExtentHeight)"),
           bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        (param_2->RenderingInfo).renderArea.extent.height = uVar25;
        VVar12 = VK_ATTACHMENT_LOAD_OP_MAX_ENUM;
        uVar23 = puVar17[0xb];
        pVVar28[-5] = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
        bVar5 = puVar26[1] >> 2;
        local_res18[0] = (uint)(ushort)uVar23;
        if (bVar5 == 0) {
          VVar12 = VK_ATTACHMENT_LOAD_OP_DONT_CARE;
        }
        else if (bVar5 == 1) {
          VVar12 = VK_ATTACHMENT_LOAD_OP_LOAD;
        }
        else if (bVar5 == 2) {
          VVar12 = VK_ATTACHMENT_LOAD_OP_CLEAR;
        }
        else {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutLoadAction != VK_ATTACHMENT_LOAD_OP_MAX_ENUM",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                              ,0x169,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        *pVVar28 = VVar12;
        VVar14 = VK_ATTACHMENT_STORE_OP_MAX_ENUM;
        EVar21 = puVar26[1] & (LoadOpMask|DontLoad_Store);
        if ((puVar26[1] & (LoadOpMask|DontLoad_Store)) == DontLoad_DontStore) {
LAB_145ae4571:
          VVar14 = VK_ATTACHMENT_STORE_OP_DONT_CARE;
        }
        else if (EVar21 == DontLoad_Store) {
          VVar14 = VK_ATTACHMENT_STORE_OP_STORE;
        }
        else {
          if (EVar21 == LoadOpMask) goto LAB_145ae4571;
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("OutStoreAction != VK_ATTACHMENT_STORE_OP_MAX_ENUM",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHIPrivate.h"
                              ,0x17f,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        pVVar28[1] = VVar14;
        if ((((*puVar17 >> 0xc & 1) != 0) && (VVar14 != VK_ATTACHMENT_STORE_OP_DONT_CARE)) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5718447211696619141>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                ,0x17b,
                                "!EnumHasAnyFlags(TextureDesc.Flags, ETextureCreateFlags::Memoryless) || (AttachmentInfo.storeOp == VK_ATTACHMENT_STORE_OP_DONT_CARE)"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (*pVVar28 == VK_ATTACHMENT_LOAD_OP_CLEAR) {
          lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
          if (*(int *)(lVar18 + 8) == 0) {
            fVar29 = FLinearColor::Black.field0_0x0._0_4_;
            iVar30 = FLinearColor::Black.field0_0x0._4_4_;
            iVar31 = FLinearColor::Black.field0_0x0._8_4_;
            iVar32 = FLinearColor::Black.field0_0x0._12_4_;
          }
          else {
            lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
            if ((*(int *)(lVar18 + 8) != 1) &&
               (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<456935519012520230>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                                    ,0x126,"ColorBinding == EClearBinding::EColorBound"), bVar10)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            fVar29 = *(float *)(lVar18 + 0xc);
            iVar30 = *(int *)(lVar18 + 0x10);
            iVar31 = *(int *)(lVar18 + 0x14);
            iVar32 = *(int *)(lVar18 + 0x18);
            local_58 = fVar29;
            iStack_54 = iVar30;
            iStack_50 = iVar31;
            iStack_4c = iVar32;
          }
          (((VkClearValue *)(pVVar28 + 2))->depthStencil).depth = fVar29;
          pVVar28[5] = iVar32;
          pVVar28[3] = iVar30;
          pVVar28[4] = iVar31;
        }
        pFVar16 = local_68;
        bVar5 = *puVar26;
        uVar22 = (ulonglong)bVar5;
        pFVar19 = FVulkanFramebuffer::GetColorRenderTargetViewDesc
                            (local_68,(uint)bVar5,*(int *)(puVar26 + -4),
                             (uint)param_1->MultiViewCount,local_res18);
        if (((pFVar19->Storage).TypeIndex != '\x02') &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Index == TypeIndex",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                ,0x97,L""), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        *(VkImageView_T **)(pVVar28 + -7) = (VkImageView_T *)(pFVar19->Storage)._padding_;
        if ((((bVar6 != 0) &&
             (lVar18 = (**(code **)(((FColorEntry *)(puVar26 + -0x14))->RenderTarget->_padding_ +
                                   0x20))(), bVar6 != *(byte *)(lVar18 + 0x31))) &&
            (EVar4 != CustomResolveSubpass)) &&
           (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                               (&bGEnsureHasExecuted<_5718447211696619126>,false,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                                ,0x18a,
                                "!NumSamples || (NumSamples == ColorEntry.RenderTarget->GetNumSamples()) || bHasCustomResolveSubpass"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        lVar18 = (**(code **)(((FColorEntry *)(puVar26 + -0x14))->RenderTarget->_padding_ + 0x20))()
        ;
        bVar6 = *(byte *)(lVar18 + 0x31);
        if (((local_88 != local_78) || (EVar4 != CustomResolveSubpass)) &&
           ((1 < bVar6 &&
            ((*(FRHITexture **)(puVar26 + -0xc) != (FRHITexture *)0x0 &&
             (pFVar19 = FVulkanFramebuffer::GetColorResolveTargetViewDesc
                                  (pFVar16,(uint)bVar5,*(int *)(puVar26 + -4)),
             pFVar19 != (FVulkanView *)0x0)))))) {
          pVVar28[-4] = VK_RESOLVE_MODE_SAMPLE_ZERO_BIT;
          pVVar28[-1] = VK_IMAGE_LAYOUT_COLOR_ATTACHMENT_OPTIMAL;
          if (((pFVar19->Storage).TypeIndex != '\x02') &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Index == TypeIndex",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                                  ,0x97,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          *(VkImageView_T **)(pVVar28 + -3) = (VkImageView_T *)(pFVar19->Storage)._padding_;
        }
        pVVar28 = pVVar28 + 0x12;
        local_88 = local_88 + 1;
        uVar27 = (ulonglong)local_88;
        puVar26 = puVar26 + 0x18;
        local_70 = local_70 + -1;
      } while (local_70 != 0);
      local_70 = 0;
    }
  }
  pFVar19 = (FVulkanView *)0x0;
  uVar23 = (uint)uVar22;
  if ((param_1->DepthStencilRenderTarget).DepthStencilTarget == (FRHITexture *)0x0)
  goto LAB_145ae4c6a;
  local_80 = VK_IMAGE_LAYOUT_UNDEFINED;
  local_7c = VK_IMAGE_LAYOUT_UNDEFINED;
  ExtractDepthStencilLayouts(this,param_1,&local_80,&local_7c);
  pFVar16 = (FVulkanTexture *)
            (**(code **)(((param_1->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x48)
            )();
  if ((pFVar16 == (FVulkanTexture *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Texture",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                          ,0x1a2,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  puVar17 = (uint *)(**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
  cVar7 = *(char *)((longlong)puVar17 + 0x33);
  if ((((cVar7 != '\v') && (cVar7 != '\f')) && (cVar7 != '\r')) &&
     (((cVar7 != '\x14' && (cVar7 != ',')) &&
      (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsDepthOrStencilFormat(TextureDesc.Format)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                           ,0x1a4,L""), bVar10)))) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar25 = (param_2->RenderingInfo).renderArea.extent.width;
  uVar11 = puVar17[9];
  if ((uVar25 != 0) && ((int)uVar25 < (int)uVar11)) {
    uVar11 = uVar25;
  }
  uVar25 = (param_2->RenderingInfo).renderArea.extent.height;
  (param_2->RenderingInfo).renderArea.extent.width = uVar11;
  uVar11 = puVar17[10];
  if ((uVar25 != 0) && ((int)uVar25 < (int)uVar11)) {
    uVar11 = uVar25;
  }
  (param_2->RenderingInfo).renderArea.extent.height = uVar11;
  if (local_res18[0] == 0) {
    lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
    cVar7 = *(char *)(lVar18 + 0x32);
    if (cVar7 == '\0') {
LAB_145ae490d:
      local_res18[0] = 1;
    }
    else if (cVar7 == '\x01') {
      lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))();
      local_res18[0] = (uint)*(ushort *)(lVar18 + 0x2e);
    }
    else {
      if (cVar7 == '\x02') goto LAB_145ae490d;
      if (cVar7 == '\x03') {
        local_res18[0] = 6;
      }
      else {
        if (cVar7 != '\x04') {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("!\"Enclosing block should never be called\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanResources.h"
                              ,0x42,L"");
          if (bVar10) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          FVulkanTexture::ErrorInvalidViewType(pFVar16);
          goto LAB_145ae490d;
        }
        lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
        local_res18[0] =
             ((uint)*(ushort *)(lVar18 + 0x2e) + (uint)*(ushort *)(lVar18 + 0x2e) * 2) * 2;
      }
    }
  }
  VVar14 = VK_ATTACHMENT_STORE_OP_NONE;
  if (((param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value & DepthMask) != DepthNop) {
    (param_2->DepthAttachmentInfo).sType = VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO;
    *(undefined8 *)&(param_2->DepthAttachmentInfo).field_0x4 = 0;
    *(undefined8 *)((longlong)&(param_2->DepthAttachmentInfo).pNext + 4) = 0;
    *(undefined8 *)((longlong)&(param_2->DepthAttachmentInfo).imageView + 4) = 0;
    *(undefined8 *)&(param_2->DepthAttachmentInfo).resolveMode = 0;
    *(undefined8 *)((longlong)&(param_2->DepthAttachmentInfo).resolveImageView + 4) = 0;
    (param_2->DepthAttachmentInfo).loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    (param_2->DepthAttachmentInfo).storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    *(float *)&(param_2->DepthAttachmentInfo).clearValue = 0.0;
    *(uint *)((longlong)&(param_2->DepthAttachmentInfo).clearValue + 4) = 0;
    *(undefined8 *)((longlong)&(param_2->DepthAttachmentInfo).clearValue + 8) = 0;
    *(undefined4 *)&(param_2->DepthAttachmentInfo).field_0x44 = 0;
    (param_2->RenderingInfo).pDepthAttachment = &param_2->DepthAttachmentInfo;
    FRHITexture::GetDepthStencilClearValue
              ((FRHITexture *)pFVar16,(float *)&(param_2->DepthAttachmentInfo).clearValue,
               &(param_2->DepthAttachmentInfo).clearValue.depthStencil.stencil);
    if (local_80 == VK_IMAGE_LAYOUT_UNDEFINED) {
      (param_2->DepthAttachmentInfo).imageLayout = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
      (param_2->DepthAttachmentInfo).loadOp = VK_ATTACHMENT_LOAD_OP_NONE;
      (param_2->DepthAttachmentInfo).storeOp = VK_ATTACHMENT_STORE_OP_NONE;
    }
    else {
      (param_2->DepthAttachmentInfo).imageLayout = local_80;
      VVar12 = RenderTargetLoadActionToVulkan((param_1->DepthStencilRenderTarget).Action >> 6);
      (param_2->DepthAttachmentInfo).loadOp = VVar12;
      VVar13 = RenderTargetStoreActionToVulkan
                         ((param_1->DepthStencilRenderTarget).Action >> 4 & Num);
      (param_2->DepthAttachmentInfo).storeOp = VVar13;
      if ((((*puVar17 >> 0xc & 1) != 0) && (VVar13 != VK_ATTACHMENT_STORE_OP_DONT_CARE)) &&
         (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_5718447211696619077>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                              ,0x1bb,
                              "!EnumHasAnyFlags(TextureDesc.Flags, ETextureCreateFlags::Memoryless) || (DepthAttachmentInfo.storeOp == VK_ATTACHMENT_STORE_OP_DONT_CARE)"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    pFVar19 = FVulkanFramebuffer::GetDepthStencilTargetViewDesc
                        (pFVar16,local_res20,uVar23,local_res18);
    if (((pFVar19->Storage).TypeIndex != '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (param_2->DepthAttachmentInfo).imageView = (VkImageView_T *)(pFVar19->Storage)._padding_;
  }
  if ((((param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value & StencilMask) != DepthNop)
     && ((*(char *)((longlong)puVar17 + 0x33) == '\v' ||
         (*(char *)((longlong)puVar17 + 0x33) == ',')))) {
    (param_2->StencilAttachmentInfo).sType = VK_STRUCTURE_TYPE_RENDERING_ATTACHMENT_INFO;
    *(undefined8 *)&(param_2->StencilAttachmentInfo).field_0x4 = 0;
    *(undefined8 *)((longlong)&(param_2->StencilAttachmentInfo).pNext + 4) = 0;
    *(undefined8 *)((longlong)&(param_2->StencilAttachmentInfo).imageView + 4) = 0;
    *(undefined8 *)&(param_2->StencilAttachmentInfo).resolveMode = 0;
    *(undefined8 *)((longlong)&(param_2->StencilAttachmentInfo).resolveImageView + 4) = 0;
    (param_2->StencilAttachmentInfo).loadOp = VK_ATTACHMENT_LOAD_OP_LOAD;
    (param_2->StencilAttachmentInfo).storeOp = VK_ATTACHMENT_STORE_OP_STORE;
    *(float *)&(param_2->StencilAttachmentInfo).clearValue = 0.0;
    *(uint *)((longlong)&(param_2->StencilAttachmentInfo).clearValue + 4) = 0;
    *(undefined8 *)((longlong)&(param_2->StencilAttachmentInfo).clearValue + 8) = 0;
    *(undefined4 *)&(param_2->StencilAttachmentInfo).field_0x44 = 0;
    (param_2->RenderingInfo).pStencilAttachment = &param_2->StencilAttachmentInfo;
    FRHITexture::GetDepthStencilClearValue
              ((FRHITexture *)pFVar16,(float *)&(param_2->StencilAttachmentInfo).clearValue,
               &(param_2->StencilAttachmentInfo).clearValue.depthStencil.stencil);
    if (local_7c == VK_IMAGE_LAYOUT_UNDEFINED) {
      (param_2->StencilAttachmentInfo).imageLayout = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
      (param_2->StencilAttachmentInfo).loadOp = VK_ATTACHMENT_LOAD_OP_NONE;
    }
    else {
      (param_2->StencilAttachmentInfo).imageLayout = local_7c;
      VVar12 = RenderTargetLoadActionToVulkan((param_1->DepthStencilRenderTarget).Action >> 2 & Num)
      ;
      (param_2->StencilAttachmentInfo).loadOp = VVar12;
      VVar14 = RenderTargetStoreActionToVulkan((param_1->DepthStencilRenderTarget).Action & Num);
    }
    (param_2->StencilAttachmentInfo).storeOp = VVar14;
    if (pFVar19 == (FVulkanView *)0x0) {
      pFVar19 = FVulkanFramebuffer::GetDepthStencilTargetViewDesc
                          (pFVar16,local_res20,uVar23,local_res18);
    }
    if (((pFVar19->Storage).TypeIndex != '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (param_2->StencilAttachmentInfo).imageView = (VkImageView_T *)(pFVar19->Storage)._padding_;
  }
  if ((((bVar6 != 0) &&
       (lVar18 = (**(code **)(((param_1->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ +
                             0x20))(), bVar6 != *(byte *)(lVar18 + 0x31))) &&
      (EVar4 != CustomResolveSubpass)) &&
     (bVar10 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_5718447211696619021>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                          ,499,
                          "!NumSamples || (NumSamples == InRenderPassInfo.DepthStencilRenderTarget.DepthStencilTarget->GetNumSamples()) || bHasCustomResolveSubpass"
                         ), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  lVar18 = (**(code **)(((param_1->DepthStencilRenderTarget).DepthStencilTarget)->_padding_ + 0x20))
                     ();
  if (((GRHIGlobals.SupportsDepthStencilResolve != false) && (1 < *(byte *)(lVar18 + 0x31))) &&
     (pFVar8 = (param_1->DepthStencilRenderTarget).ResolveTarget, pFVar8 != (FRHITexture *)0x0)) {
    pFVar16 = (FVulkanTexture *)(**(code **)(pFVar8->_padding_ + 0x48))();
    pFVar19 = FVulkanFramebuffer::GetDepthStencilResolveTargetViewDesc(pFVar16,uVar23);
    if (pFVar19 != (FVulkanView *)0x0) {
      (param_2->DepthAttachmentInfo).resolveImageLayout = local_80;
      (param_2->DepthAttachmentInfo).resolveMode = VK_RESOLVE_MODE_SAMPLE_ZERO_BIT;
      pFVar20 = FVulkanView::GetTextureView(pFVar19);
      (param_2->DepthAttachmentInfo).imageView = pFVar20->View;
      (param_2->StencilAttachmentInfo).resolveImageLayout = local_7c;
      (param_2->StencilAttachmentInfo).resolveMode = VK_RESOLVE_MODE_SAMPLE_ZERO_BIT;
      pFVar20 = FVulkanView::GetTextureView(pFVar19);
      (param_2->StencilAttachmentInfo).imageView = pFVar20->View;
    }
  }
LAB_145ae4c6a:
  if (((local_res20 == 0) &&
      ((param_2->RenderingInfo).pDepthAttachment == (VkRenderingAttachmentInfo *)0x0)) &&
     ((param_2->RenderingInfo).pStencilAttachment == (VkRenderingAttachmentInfo *)0x0)) {
    (param_2->RenderingInfo).renderArea.extent.width =
         (param_1->ResolveRect).X2 - (param_1->ResolveRect).X1;
    (param_2->RenderingInfo).renderArea.extent.height =
         (param_1->ResolveRect).Y2 - (param_1->ResolveRect).Y1;
    (param_2->RenderingInfo).renderArea.offset.x = (param_1->ResolveRect).X1;
    (param_2->RenderingInfo).renderArea.offset.y = (param_1->ResolveRect).Y1;
    local_res18[0] = 1;
  }
  if ((GRHIGlobals.VariableRateShading.SupportsAttachment != false) &&
     ((param_1->ShadingRateTexture).Reference != (FRHITexture *)0x0)) {
    (param_2->FragmentShadingRateAttachmentInfo).sType =
         VK_STRUCTURE_TYPE_RENDERING_FRAGMENT_DENSITY_MAP_ATTACHMENT_INFO_EXT;
    *(undefined8 *)&(param_2->FragmentShadingRateAttachmentInfo).field_0x4 = 0;
    *(undefined8 *)((longlong)&(param_2->FragmentShadingRateAttachmentInfo).pNext + 4) = 0;
    *(undefined8 *)((longlong)&(param_2->FragmentShadingRateAttachmentInfo).imageView + 4) = 0;
    (param_2->FragmentShadingRateAttachmentInfo).shadingRateAttachmentTexelSize.width = 0;
    (param_2->FragmentShadingRateAttachmentInfo).shadingRateAttachmentTexelSize.height = 0;
    *(undefined4 *)&(param_2->FragmentShadingRateAttachmentInfo).field_0x24 = 0;
    (param_2->RenderingInfo).pNext = &param_2->FragmentShadingRateAttachmentInfo;
    pFVar16 = (FVulkanTexture *)
              (**(code **)(((param_1->ShadingRateTexture).Reference)->_padding_ + 0x48))();
    lVar18 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
    if ((*(EPixelFormat *)(lVar18 + 0x33) != GRHIGlobals.VariableRateShading.ImageFormat) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Texture->GetFormat() == GRHIGlobals.VariableRateShading.ImageFormat",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                            ,0x21a,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar19 = FVulkanFramebuffer::GetFragmentDensityAttachmentViewDesc(pFVar16,uVar23);
    if (((pFVar19->Storage).TypeIndex != '\x02') &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Index == TypeIndex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariant.h"
                            ,0x97,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    (param_2->FragmentShadingRateAttachmentInfo).imageView =
         (VkImageView_T *)(pFVar19->Storage)._padding_;
    bVar10 = ValidateShadingRateDataType();
    if (bVar10) {
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Palette) {
        (param_2->FragmentShadingRateAttachmentInfo).imageLayout =
             VK_IMAGE_LAYOUT_FRAGMENT_SHADING_RATE_ATTACHMENT_OPTIMAL_KHR;
      }
      if (GRHIGlobals.VariableRateShading.ImageDataType == VRSImage_Fractional) {
        (param_2->FragmentShadingRateAttachmentInfo).imageLayout =
             VK_IMAGE_LAYOUT_FRAGMENT_DENSITY_MAP_OPTIMAL_EXT;
      }
    }
  }
  bVar6 = param_1->MultiViewCount;
  (param_2->RenderingInfo).layerCount = local_res18[0];
  (param_2->RenderingInfo).viewMask = (1 << (bVar6 & 0x1f)) - 1;
  return;
}

// Finalize @ 145ae4e30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::Finalize
          (FVulkanCommandListContext *this,
          TArray<FVulkanPayload_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FVulkanDescriptorPoolSetContainer **ppFVar2;
  TArray<FVulkanDescriptorPoolSetContainer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  FVulkanCommandBuffer *pFVar12;
  FStats *pFVar13;
  FVulkanPayload *pFVar14;
  
  if ((((((int)this->_padding_ != 0) || (*(int *)((longlong)&this->_padding_ + 4) != 0)) ||
       ((int)this->_padding_ != 0)) || (*(int *)((longlong)&this->_padding_ + 4) != 0)) &&
     (this->bSupportsBreadcrumbs != false)) {
    uVar6 = *(undefined4 *)&this->_padding_;
    uVar7 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar8 = *(undefined4 *)&this->_padding_;
    uVar9 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pFVar12 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
    pFVar13 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                        (&pFVar12->EventStream);
    pFVar13->NumDraws = uVar6;
    pFVar13->NumDispatches = uVar7;
    pFVar13->NumPrimitives = uVar8;
    pFVar13->NumVertices = uVar9;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  ppFVar2 = &this->CurrentDescriptorPoolSetContainer;
  if (*ppFVar2 == (FVulkanDescriptorPoolSetContainer *)0x0) {
    if (*(int *)&(this->TypedDescriptorPoolSets).field_0x8 !=
        *(int *)&(this->TypedDescriptorPoolSets).field_0x34) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypedDescriptorPoolSets.Num() == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                          ,0x2aa,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  else {
    pFVar14 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)this,Signal);
    pTVar3 = &pFVar14->DescriptorPoolSetContainers;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    if ((pFVar4 <= ppFVar2) &&
       (ppFVar2 < pFVar4 + (longlong)(pFVar14->DescriptorPoolSetContainers).ArrayMax * 8)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar11 = (pFVar14->DescriptorPoolSetContainers).ArrayNum;
    piVar1 = &(pFVar14->DescriptorPoolSetContainers).ArrayMax;
    if (iVar11 == *piVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar3->AllocatorInstance,piVar1);
    }
    (pFVar14->DescriptorPoolSetContainers).ArrayNum = iVar11 + 1;
    *(FVulkanDescriptorPoolSetContainer **)((pTVar3->AllocatorInstance).Data + (longlong)iVar11 * 8)
         = *ppFVar2;
    *ppFVar2 = (FVulkanDescriptorPoolSetContainer *)0x0;
    TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<unsigned_int,FVulkanTypedDescriptorPoolSet_*>,TDefaultMapHashableKeyFuncs<unsigned_int,FVulkanTypedDescriptorPoolSet_*,0>,FDefaultSetAllocator>
             *)&this->TypedDescriptorPoolSets);
  }
  FVulkanContextCommon::Finalize((FVulkanContextCommon *)this,param_1);
  return;
}

// Get @ 145ae5e10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanCommandListContext * __cdecl FVulkanCommandListContext::Get(FRHICommandListBase *param_1)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanCommandListContext *pFVar4;
  longlong lVar5;
  
  EVar1 = param_1->ActivePipelines;
  if ((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b0,
                       L"Exactly one pipeline must be active to call GetContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVulkanCommandListContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (param_1->GraphicsContext == (IRHICommandContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphicsContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b1,
                       L"There is no active graphics context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FVulkanCommandListContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  lVar5 = (**(code **)(param_1->GraphicsContext->_padding_ + 0x148))();
  pFVar4 = (FVulkanCommandListContext *)(lVar5 + -0x50);
  if (lVar5 == 0) {
    pFVar4 = (FVulkanCommandListContext *)0x0;
  }
  return pFVar4;
}

// GetParallelRenderPassInfo @ 145ae7190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanParallelRenderPassInfo * __thiscall
FVulkanCommandListContext::GetParallelRenderPassInfo(FVulkanCommandListContext *this)

{
  return this->CurrentParallelRenderPassInfo;
}

// GetPipeline @ 145ae7250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

ERHIPipeline __thiscall FVulkanCommandListContext::GetPipeline(FVulkanCommandListContext *this)

{
  return (ERHIPipeline)this->_padding_;
}

// InternalClearMRT @ 145ae91a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::InternalClearMRT
          (FVulkanCommandListContext *this,FVulkanCommandBuffer *param_1,bool param_2,int param_3,
          FLinearColor *param_4,bool param_5,float param_6,bool param_7,uint param_8)

{
  float fVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int *piVar5;
  float *pfVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  undefined1 auStackY_168 [32];
  VkClearRect local_138;
  undefined1 local_118 [12];
  uint local_10c [53];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  lVar7 = (longlong)param_3;
  if (this->CurrentRenderPass == (FVulkanRenderPass *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4731806581430156439>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x369,"0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    uVar9 = 0;
    local_138.baseArrayLayer = 0;
    local_138.layerCount = 0;
    local_138.rect.offset.x = 0;
    local_138.rect.offset.y = 0;
    local_138.rect.extent = (this->CurrentRenderPass->Layout).Extent.Extent2D;
    memset(local_118,0,0xd8);
    if (param_2) {
      uVar11 = uVar9;
      if (3 < lVar7) {
        iVar8 = 2;
        lVar10 = (lVar7 - 4U >> 2) + 1;
        uVar11 = lVar10 * 4;
        piVar5 = (int *)(local_118 + 4);
        pfVar6 = &(param_4->field0_0x0)._s_0.B;
        do {
          fVar1 = ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R;
          *piVar5 = (int)uVar9;
          uVar9 = (ulonglong)((int)uVar9 + 4);
          piVar5[-1] = 1;
          piVar5[1] = (int)fVar1;
          piVar5[2] = (int)pfVar6[-1];
          piVar5[3] = (int)*pfVar6;
          piVar5[4] = (int)pfVar6[1];
          piVar5[6] = iVar8 + -1;
          iVar2 = (int)pfVar6[2];
          piVar5[5] = 1;
          piVar5[7] = iVar2;
          piVar5[8] = (int)pfVar6[3];
          piVar5[9] = (int)pfVar6[4];
          piVar5[10] = (int)pfVar6[5];
          iVar2 = (int)pfVar6[6];
          piVar5[0xc] = iVar8;
          piVar5[0xb] = 1;
          piVar5[0xd] = iVar2;
          piVar5[0xe] = (int)pfVar6[7];
          piVar5[0xf] = (int)pfVar6[8];
          piVar5[0x10] = (int)pfVar6[9];
          piVar5[0x12] = iVar8 + 1;
          iVar8 = iVar8 + 4;
          iVar2 = (int)pfVar6[10];
          piVar5[0x11] = 1;
          piVar5[0x13] = iVar2;
          piVar5[0x14] = (int)pfVar6[0xb];
          piVar5[0x15] = (int)pfVar6[0xc];
          piVar5[0x16] = (int)pfVar6[0xd];
          lVar10 = lVar10 + -1;
          piVar5 = piVar5 + 0x18;
          pfVar6 = pfVar6 + 0x10;
        } while (lVar10 != 0);
      }
      if ((longlong)uVar11 < lVar7) {
        lVar10 = lVar7 - uVar11;
        piVar5 = (int *)(local_118 + uVar11 * 0x18 + 4);
        pfVar6 = &param_4[uVar11].field0_0x0._s_0.B;
        do {
          fVar1 = ((FLinearColor_u_0_s_0 *)(pfVar6 + -2))->R;
          *piVar5 = (int)uVar9;
          uVar9 = (ulonglong)((int)uVar9 + 1);
          piVar5[-1] = 1;
          piVar5[1] = (int)fVar1;
          piVar5[2] = (int)pfVar6[-1];
          piVar5[3] = (int)*pfVar6;
          piVar5[4] = (int)pfVar6[1];
          lVar10 = lVar10 + -1;
          piVar5 = piVar5 + 6;
          pfVar6 = pfVar6 + 4;
        } while (lVar10 != 0);
      }
    }
    if ((param_5) || (param_7)) {
      *(float *)(local_118 + lVar7 * 0x18 + 8) = param_6;
      *(undefined4 *)(local_118 + lVar7 * 0x18 + 4) = 0;
      *(uint *)(local_118 + lVar7 * 0x18) = (uint)param_5 * 2 | (uint)param_7 << 2;
      param_3 = param_3 + 1;
      local_10c[lVar7 * 6] = param_8;
    }
    (*VulkanDynamicAPI::vkCmdClearAttachments)
              (param_1->CommandBufferHandle,param_3,(VkClearAttachment *)local_118,1,&local_138);
  }
  return;
}

// NotifyDeletedRenderTarget @ 145aeb560

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::NotifyDeletedRenderTarget
          (FVulkanCommandListContext *this,VkImage_T *param_1)

{
  FVulkanFramebuffer *pFVar1;
  code *pcVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  
  pFVar1 = this->CurrentFramebuffer;
  if (pFVar1 != (FVulkanFramebuffer *)0x0) {
    if (param_1 == (VkImage_T *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_8450710495500959697>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanFramebuffer.h"
                         ,0x2f,"Image != nullptr");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    uVar5 = 0;
    if (pFVar1->NumColorAttachments != 0) {
      lVar4 = 0x38;
      do {
        if (*(VkImage_T **)((longlong)pFVar1->ColorRenderTargetImages + lVar4 + -0x38) == param_1)
        goto LAB_145aeb5d9;
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 8;
      } while (uVar5 < pFVar1->NumColorAttachments);
    }
    if (pFVar1->DepthStencilRenderTargetImage == param_1) {
LAB_145aeb5d9:
      this->CurrentFramebuffer = (FVulkanFramebuffer *)0x0;
    }
  }
  return;
}

// RHIBeginParallelRenderPass @ 145aed5b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBeginParallelRenderPass
          (FVulkanCommandListContext *this,TSharedPtr<FRHIParallelRenderPassInfo,1> *param_1,
          wchar_t *param_2)

{
  FRHIParallelRenderPassInfo *pFVar1;
  FRHIResource *this_00;
  FRHIResource *this_01;
  void *pvVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  
  if ((this->_padding_ != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentParallelRenderPassInfo == nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                         ,0x232,L"There is already a parallel render pass in progress!"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  puVar6 = ::operator_new(0x28);
  puVar8 = (undefined8 *)0x0;
  puVar7 = puVar8;
  if (puVar6 != (undefined8 *)0x0) {
    puVar6[4] = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar7 = puVar6;
  }
  this->_padding_ = (longlong)puVar7;
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x4000000000000) == 0) {
    RHIBeginRenderPass(this,(FRHIRenderPassInfo *)param_1->Object,param_2);
    *(undefined8 *)this->_padding_ = *(undefined8 *)(this->_padding_ + 0x3a8);
  }
  else {
    if ((param_1->Object == (FRHIParallelRenderPassInfo *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (((int)param_1->Object->_padding_ != 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InInfo->NumOcclusionQueries == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanContext.cpp"
                           ,0x237,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((param_1->Object == (FRHIParallelRenderPassInfo *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar1 = param_1->Object;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    this->_padding_ = pFVar1->_padding_;
    lVar4 = pFVar1->_padding_;
    this->_padding_ = pFVar1->_padding_;
    this->_padding_ = lVar4;
    this_00 = (FRHIResource *)pFVar1->_padding_;
    this_01 = (FRHIResource *)this->_padding_;
    if (this_01 != this_00) {
      this->_padding_ = (longlong)this_00;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(this_00);
      }
      if (this_01 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_01);
      }
    }
    *(char *)&this->_padding_ = (char)pFVar1->_padding_;
    *(undefined4 *)((longlong)&this->_padding_ + 4) =
         *(undefined4 *)((longlong)&pFVar1->_padding_ + 4);
    *(int *)&this->_padding_ = (int)pFVar1->_padding_;
    *(undefined1 *)((longlong)&this->_padding_ + 4) =
         *(undefined1 *)((longlong)&pFVar1->_padding_ + 4);
    *(undefined1 *)((longlong)&this->_padding_ + 5) =
         *(undefined1 *)((longlong)&pFVar1->_padding_ + 5);
    *(undefined1 *)((longlong)&this->_padding_ + 6) =
         *(undefined1 *)((longlong)&pFVar1->_padding_ + 6);
    puVar7 = ::operator_new(0x340);
    if (puVar7 != (undefined8 *)0x0) {
      memset(puVar7,0,0x340);
      puVar8 = puVar7;
    }
    *(undefined8 **)(this->_padding_ + 8) = puVar8;
    FillDynamicRenderingInfo
              ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,
               (FRHIRenderPassInfo *)param_1->Object,
               *(FVulkanDynamicRenderingInfo **)(this->_padding_ + 8));
    *(undefined4 *)(*(longlong *)(this->_padding_ + 8) + 0x308) = 6;
  }
  pvVar2 = (void *)this->_padding_;
  if ((param_1->Object == (FRHIParallelRenderPassInfo *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  param_1->Object->RHIPlatformData = pvVar2;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// RHIBeginTransitions @ 145aed910

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBeginTransitions
          (FVulkanCommandListContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x2020100000000) == 0x2020100000000) {
    ProcessTransitionSync2((FVulkanCommandListContext *)puVar1,param_1,true);
    ProcessCrossQueueSemaphores((FVulkanCommandListContext *)puVar1,param_1,true);
  }
  return;
}

// RHIClearMRT @ 145aed970

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIClearMRT
          (FVulkanCommandListContext *this,bool param_1,int param_2,FLinearColor *param_3,
          bool param_4,float param_5,bool param_6,uint param_7)

{
  code *pcVar1;
  bool bVar2;
  FVulkanCommandBuffer *pFVar3;
  int iVar4;
  
  if (param_1) {
    if ((param_2 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("bClearColor ? NumClearColors > 0 : true",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x335,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
    if ((this->CurrentFramebuffer->NumColorAttachments < (uint)param_2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("!bClearColor || (uint32)NumClearColors <= NumColorAttachments",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x33b,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    if ((!param_4) && (!param_6)) {
      return;
    }
    pFVar3 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
  }
  iVar4 = 0;
  if (param_1) {
    iVar4 = param_2;
  }
  InternalClearMRT(this,pFVar3,param_1,iVar4,param_3,param_4,param_5,param_6,param_7);
  return;
}

// RHICopyToStagingBuffer @ 145aedaa0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHICopyToStagingBuffer
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,
          uint param_3,uint param_4)

{
  code *pcVar1;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_VkBuffer_T_ptr_uint_VkBufferCopy_ptr
  *p_Var2;
  bool bVar3;
  uint uVar4;
  FVulkanCommandBuffer *pFVar5;
  FStagingBuffer *pFVar6;
  VkBuffer_T *pVVar7;
  undefined1 auStackY_88 [32];
  VkBufferCopy local_58;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_88;
  pFVar5 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  if (pFVar5->State != IsInsideBegin) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4731806581430156410>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x386,"CommandBuffer.IsOutsideRenderPass()");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((FStagingBuffer *)param_2[1]._padding_ != (FStagingBuffer *)0x0) {
    uVar4 = VulkanRHI::FStagingBuffer::GetSize((FStagingBuffer *)param_2[1]._padding_);
    if (param_4 <= uVar4) goto LAB_145aedb69;
  }
  if (param_2[1]._padding_ != 0) {
    VulkanRHI::FStagingManager::ReleaseBuffer
              ((FStagingManager *)
               (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x600),
               (FVulkanContextCommon *)0x0,(FStagingBuffer **)(param_2 + 1));
  }
  pFVar6 = VulkanRHI::FStagingManager::AcquireBuffer
                     ((FStagingManager *)
                      (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x600),param_4,2,
                      VK_MEMORY_PROPERTY_HOST_CACHED_BIT);
  param_2[1]._padding_ = (longlong)pFVar6;
  param_2[1]._padding_ = *(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20;
LAB_145aedb69:
  *(uint *)&param_2[1]._padding_ = param_4;
  p_Var2 = VulkanDynamicAPI::vkCmdCopyBuffer;
  local_58.srcOffset = (ulong64)((int)param_1[1]._padding_ + param_3);
  local_58.dstOffset = 0;
  local_58.size = (ulonglong)param_4;
  pVVar7 = VulkanRHI::FStagingBuffer::GetHandle((FStagingBuffer *)param_2[1]._padding_);
  (*p_Var2)(pFVar5->CommandBufferHandle,(VkBuffer_T *)param_1[1]._padding_,pVVar7,1,&local_58);
  return;
}

// RHIDispatchComputeShader @ 145aee590

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDispatchComputeShader
          (FVulkanCommandListContext *this,uint param_1,uint param_2,uint param_3)

{
  undefined1 *this_00;
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanCommandBuffer *pFVar4;
  FRHIShader *pFVar5;
  FVulkanResourceBinder<FVulkanPendingComputeState> local_28;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  *(int *)((longlong)&this->_padding_ + 4) = *(int *)((longlong)&this->_padding_ + 4) + 1;
  local_28.PendingState = (FVulkanPendingComputeState *)this->_padding_;
  pFVar5 = (FRHIShader *)0x0;
  if ((local_28.PendingState)->CurrentPipeline != (FVulkanComputePipeline *)0x0) {
    pFVar5 = (FRHIShader *)(local_28.PendingState)->CurrentPipeline->_padding_;
  }
  local_28.bBindless = *(bool *)((longlong)&pFVar5[2]._padding_ + 1);
  local_28.Frequency = SF_Compute;
  local_28.Stage = Compute;
  local_28.Context = (FVulkanCommandListContext *)this_00;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,pFVar5,(ushort *)((longlong)this->BoundUniformBuffers[5] + 0x3a),
             (FVulkanUniformBuffer *(*) [16])(this->BoundUniformBuffers[4] + 6),
             (FTracker *)this->_padding_);
  FVulkanPendingComputeState::PrepareForDispatch
            ((FVulkanPendingComputeState *)this->_padding_,(FVulkanCommandListContext *)this_00);
  pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  if (pFVar4->State != IsInsideBegin) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4731806581430157021>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x123,"GetCommandBuffer().IsOutsideRenderPass()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  pVVar1 = pFVar4->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdDispatch)(pVVar1,param_1,param_2,param_3);
  VulkanRHI::DebugHeavyWeightBarrier(pVVar1,2);
  return;
}

// RHIDispatchIndirectComputeShader @ 145aee6b0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDispatchIndirectComputeShader
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,uint param_2)

{
  undefined1 *this_00;
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  bool bVar3;
  FVulkanCommandBuffer *pFVar4;
  FRHIShader *pFVar5;
  FVulkanResourceBinder<FVulkanPendingComputeState> local_28;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  *(int *)((longlong)&this->_padding_ + 4) = *(int *)((longlong)&this->_padding_ + 4) + 1;
  local_28.PendingState = (FVulkanPendingComputeState *)this->_padding_;
  pFVar5 = (FRHIShader *)0x0;
  if ((local_28.PendingState)->CurrentPipeline != (FVulkanComputePipeline *)0x0) {
    pFVar5 = (FRHIShader *)(local_28.PendingState)->CurrentPipeline->_padding_;
  }
  local_28.bBindless = *(bool *)((longlong)&pFVar5[2]._padding_ + 1);
  local_28.Frequency = SF_Compute;
  local_28.Stage = Compute;
  local_28.Context = (FVulkanCommandListContext *)this_00;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FVulkanResourceBinder<FVulkanPendingComputeState>_&,FVulkanUniformBuffer_*_[16],unsigned_short,0>
            (&local_28,pFVar5,(ushort *)((longlong)this->BoundUniformBuffers[5] + 0x3a),
             (FVulkanUniformBuffer *(*) [16])(this->BoundUniformBuffers[4] + 6),
             (FTracker *)this->_padding_);
  FVulkanPendingComputeState::PrepareForDispatch
            ((FVulkanPendingComputeState *)this->_padding_,(FVulkanCommandListContext *)this_00);
  pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  if (pFVar4->State != IsInsideBegin) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_4731806581430156995>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x13d,"GetCommandBuffer().IsOutsideRenderPass()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  pVVar1 = pFVar4->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdDispatchIndirect)
            (pVVar1,(VkBuffer_T *)param_1[1]._padding_,
             (longlong)(int)param_1[1]._padding_ + (longlong)param_2);
  VulkanRHI::DebugHeavyWeightBarrier(pVVar1,2);
  return;
}

// RHIDispatchIndirectMeshShader @ 145aee7d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDispatchIndirectMeshShader
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,uint param_2)

{
  undefined1 *this_00;
  int *piVar1;
  longlong lVar2;
  VkBuffer_T *pVVar3;
  code *pcVar4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkBuffer_T_ptr_ulong64_uint_uint *p_Var5;
  bool bVar6;
  FVulkanCommandBuffer *pFVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  if ((this->_padding_ == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar10 = 0x1f;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar8 = 0;
  if (uVar9 != 0) {
    for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  if (uVar9 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar8 * 0x20 + (ulonglong)uVar10) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar9 = uVar9 & ~(1 << ((byte)uVar8 & 0x1f));
      uVar8 = 0;
      if (uVar9 != 0) {
        for (; (uVar9 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
        }
      }
    } while (uVar9 != 0);
  }
  CommitGraphicsResourceTables((FVulkanCommandListContext *)this_00);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,(FVulkanCommandListContext *)this_00);
  p_Var5 = VulkanDynamicAPI::vkCmdDrawMeshTasksIndirectEXT;
  lVar2 = param_1[1]._padding_;
  pVVar3 = (VkBuffer_T *)param_1[1]._padding_;
  pFVar7 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  (*p_Var5)(pFVar7->CommandBufferHandle,pVVar3,(longlong)(int)lVar2 + (longlong)param_2,1,0xc);
  return;
}

// RHIDispatchMeshShader @ 145aee940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDispatchMeshShader
          (FVulkanCommandListContext *this,uint param_1,uint param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint *UNRECOVERED_JUMPTABLE;
  bool bVar4;
  FVulkanCommandBuffer *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar8 = 0x1f;
  }
  else {
    uVar8 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (uVar7 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar6 * 0x20 + (ulonglong)uVar8) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar7 = uVar7 & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    } while (uVar7 != 0);
  }
  CommitGraphicsResourceTables
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  UNRECOVERED_JUMPTABLE = VulkanDynamicAPI::vkCmdDrawMeshTasksEXT;
  pFVar5 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
                    /* WARNING: Could not recover jumptable at 0x000145aeea80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(pFVar5->CommandBufferHandle,param_1,param_2,param_3);
  return;
}

// RHIDrawIndexedIndirect @ 145aeea90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDrawIndexedIndirect
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,
          uint param_4)

{
  int *piVar1;
  longlong lVar2;
  VkCommandBuffer_T *pVVar3;
  code *pcVar4;
  bool bVar5;
  FVulkanCommandBuffer *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar9 = 0x1f;
  }
  else {
    uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  if (uVar8 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar7 * 0x20 + (ulonglong)uVar9) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar8 = uVar8 & ~(1 << ((byte)uVar7 & 0x1f));
      uVar7 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    } while (uVar8 != 0);
  }
  CommitGraphicsResourceTables
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pFVar6 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pVVar3 = pFVar6->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdBindIndexBuffer)
            (pVVar3,(VkBuffer_T *)param_1[1]._padding_,(ulonglong)(uint)param_1[1]._padding_,
             (uint)((param_1->Desc).Stride == 4));
                    /* WARNING: Could not recover jumptable at 0x000145aeec13. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkCmdDrawIndexedIndirect)
            (pVVar3,(VkBuffer_T *)param_2[1]._padding_,
             (ulonglong)(uint)param_2[1]._padding_ + (longlong)param_3 * 0x14,1,0x14);
  return;
}

// RHIDrawIndexedPrimitive @ 145aeec20

/* WARNING: Removing unreachable block (ram,0x000145aeed20) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDrawIndexedPrimitive
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4
          ,uint param_5,uint param_6,uint param_7)

{
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  VkCommandBuffer_T *pVVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  FVulkanCommandBuffer *pFVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if (param_7 == 0) {
    param_7 = 1;
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  uVar15 = param_7;
  if (param_7 == 0) {
    uVar15 = 1;
  }
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  *piVar2 = *piVar2 + uVar15 * param_4;
  *(uint *)&this->_padding_ = (int)this->_padding_ + uVar15 * param_6;
  if ((this->_padding_ == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("ExecutingCmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                          ,0x221,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar5 = this->_padding_;
  uVar3 = *(undefined4 *)(this->_padding_ + 0x70);
  if ((*(char *)(lVar5 + 0x308) == '\0') &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar15 = *(uint *)(lVar5 + 0x29c);
  if (*(longlong *)(lVar5 + 0x300) == 0) {
    uVar13 = 0x1f;
  }
  else {
    uVar13 = *(uint *)(*(longlong *)(lVar5 + 0x300) + 8);
  }
  uVar7 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  uVar14 = 0x20;
  if (uVar15 != 0) {
    uVar14 = uVar7;
  }
  if (uVar15 != 0) {
    do {
      lVar1 = ((ulonglong)uVar14 * 0x20 + (ulonglong)uVar13) * 0x18;
      piVar2 = (int *)(lVar1 + 0x390 + lVar5);
      *piVar2 = *piVar2 + 1;
      switch(uVar3) {
      case 0:
      case 1:
        piVar2 = (int *)(lVar5 + 0x394 + lVar1);
        *piVar2 = *piVar2 + param_6;
        break;
      case 2:
        piVar2 = (int *)(lVar5 + 0x398 + lVar1);
        *piVar2 = *piVar2 + param_6;
        break;
      case 3:
        piVar2 = (int *)(lVar5 + 0x39c + lVar1);
        *piVar2 = *piVar2 + param_6;
        break;
      case 4:
        piVar2 = (int *)(lVar5 + 0x3a0 + lVar1);
        *piVar2 = *piVar2 + param_6;
        break;
      case 5:
        piVar2 = (int *)(lVar5 + 0x3a4 + lVar1);
        *piVar2 = *piVar2 + param_6;
      }
      uVar15 = uVar15 & ~(1 << ((byte)uVar14 & 0x1f));
      uVar14 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
    } while (uVar15 != 0);
  }
  if (((GRHIGlobals.SupportsFirstInstance == false) && (param_3 != 0)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GRHIGlobals.SupportsFirstInstance || FirstInstance == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                          ,0x2b9,L"FirstInstance must be 0, see GRHISupportsFirstInstance"), bVar10)
     ) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  CommitGraphicsResourceTables
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pFVar12 = FVulkanContextCommon::GetCommandBuffer
                      ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pVVar6 = pFVar12->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdBindIndexBuffer)
            (pVVar6,(VkBuffer_T *)param_1[1]._padding_,(ulonglong)(uint)param_1[1]._padding_,
             (uint)((param_1->Desc).Stride == 4));
  iVar4 = *(int *)(this->_padding_ + 0x70);
  if (iVar4 == 0) {
    iVar11 = 3;
  }
  else {
    iVar11 = 2;
    if ((iVar4 != 2) && (iVar11 = 1, iVar4 == 5)) {
      iVar11 = 3;
    }
  }
  iVar9 = 0;
  if (iVar4 == 1) {
    iVar9 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x000145aeeebb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkCmdDrawIndexed)
            (pVVar6,iVar11 * param_6 + iVar9,param_7,param_5,param_2,param_3);
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 145aeeef0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDrawIndexedPrimitiveIndirect
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  VkCommandBuffer_T *pVVar3;
  code *pcVar4;
  bool bVar5;
  FVulkanCommandBuffer *pFVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar9 = 0x1f;
  }
  else {
    uVar9 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar7 = 0;
  if (uVar8 != 0) {
    for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  if (uVar8 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar7 * 0x20 + (ulonglong)uVar9) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar8 = uVar8 & ~(1 << ((byte)uVar7 & 0x1f));
      uVar7 = 0;
      if (uVar8 != 0) {
        for (; (uVar8 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
        }
      }
    } while (uVar8 != 0);
  }
  CommitGraphicsResourceTables
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pFVar6 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pVVar3 = pFVar6->CommandBufferHandle;
  (*VulkanDynamicAPI::vkCmdBindIndexBuffer)
            (pVVar3,(VkBuffer_T *)param_1[1]._padding_,(ulong64)(int)param_1[1]._padding_,
             SUB14((param_1->Desc).Stride == 4,0));
  (*VulkanDynamicAPI::vkCmdDrawIndexedIndirect)
            (pVVar3,(VkBuffer_T *)param_2[1]._padding_,
             (longlong)(int)param_2[1]._padding_ + (longlong)param_3,1,0x14);
  return;
}

// RHIDrawPrimitive @ 145aef080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDrawPrimitive
          (FVulkanCommandListContext *this,uint param_1,uint param_2,uint param_3)

{
  undefined1 *this_00;
  uint uVar1;
  longlong lVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint *p_Var8;
  bool bVar9;
  int iVar10;
  FVulkanCommandBuffer *pFVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if (param_3 == 0) {
    param_3 = 1;
  }
  CommitGraphicsResourceTables((FVulkanCommandListContext *)this_00);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,(FVulkanCommandListContext *)this_00);
  iVar4 = *(int *)(this->_padding_ + 0x70);
  if (iVar4 == 0) {
    iVar13 = 3;
  }
  else {
    iVar13 = 2;
    if ((iVar4 != 2) && (iVar13 = 1, iVar4 == 5)) {
      iVar13 = 3;
    }
  }
  iVar10 = 0;
  if (iVar4 == 1) {
    iVar10 = 2;
  }
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  uVar1 = iVar13 * param_2 + iVar10;
  uVar15 = param_3;
  if (param_3 == 0) {
    uVar15 = 1;
  }
  *(uint *)&this->_padding_ = (int)this->_padding_ + uVar15 * param_2;
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  *piVar3 = *piVar3 + uVar1 * uVar15;
  if ((this->_padding_ == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar6 = this->_padding_;
  uVar5 = *(undefined4 *)(this->_padding_ + 0x70);
  if ((*(char *)(lVar6 + 0x308) == '\0') &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = *(uint *)(lVar6 + 0x29c);
  if (*(longlong *)(lVar6 + 0x300) == 0) {
    uVar12 = 0x1f;
  }
  else {
    uVar12 = *(uint *)(*(longlong *)(lVar6 + 0x300) + 8);
  }
  uVar14 = 0;
  if (uVar15 != 0) {
    for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
    }
  }
  if (uVar15 != 0) {
    do {
      lVar2 = ((ulonglong)uVar14 * 0x20 + (ulonglong)uVar12) * 0x18;
      piVar3 = (int *)(lVar2 + 0x390 + lVar6);
      *piVar3 = *piVar3 + 1;
      switch(uVar5) {
      case 0:
      case 1:
        piVar3 = (int *)(lVar6 + 0x394 + lVar2);
        *piVar3 = *piVar3 + param_2;
        break;
      case 2:
        piVar3 = (int *)(lVar6 + 0x398 + lVar2);
        *piVar3 = *piVar3 + param_2;
        break;
      case 3:
        piVar3 = (int *)(lVar6 + 0x39c + lVar2);
        *piVar3 = *piVar3 + param_2;
        break;
      case 4:
        piVar3 = (int *)(lVar6 + 0x3a0 + lVar2);
        *piVar3 = *piVar3 + param_2;
        break;
      case 5:
        piVar3 = (int *)(lVar6 + 0x3a4 + lVar2);
        *piVar3 = *piVar3 + param_2;
      }
      uVar15 = uVar15 & ~(1 << ((byte)uVar14 & 0x1f));
      uVar14 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar14 & 1) == 0; uVar14 = uVar14 + 1) {
        }
      }
    } while (uVar15 != 0);
  }
  p_Var8 = VulkanDynamicAPI::vkCmdDraw;
  pFVar11 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  (*p_Var8)(pFVar11->CommandBufferHandle,uVar1,param_3,param_1,0);
  return;
}

// RHIDrawPrimitiveIndirect @ 145aef2c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIDrawPrimitiveIndirect
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,uint param_2)

{
  int *piVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  FVulkanCommandBuffer *pFVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  *(int *)&this->_padding_ = (int)this->_padding_ + 1;
  if ((this->_padding_ == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = this->_padding_;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar8 = 0x1f;
  }
  else {
    uVar8 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar6 = 0;
  if (uVar7 != 0) {
    for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (uVar7 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar6 * 0x20 + (ulonglong)uVar8) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar7 = uVar7 & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      if (uVar7 != 0) {
        for (; (uVar7 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    } while (uVar7 != 0);
  }
  CommitGraphicsResourceTables
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  FVulkanPendingGfxState::PrepareForDraw
            ((FVulkanPendingGfxState *)this->_padding_,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  pFVar5 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  (*VulkanDynamicAPI::vkCmdDrawIndirect)
            (pFVar5->CommandBufferHandle,(VkBuffer_T *)param_1[1]._padding_,
             (longlong)(int)param_1[1]._padding_ + (longlong)param_2,1,0x10);
  return;
}

// RHIEndParallelRenderPass @ 145aef420

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::RHIEndParallelRenderPass(FVulkanCommandListContext *this)

{
  TArray<FVulkanCommandBuffer_*,TSizedDefaultAllocator<32>_> *pTVar1;
  undefined8 *puVar2;
  FScriptContainerElement *pFVar3;
  TArray<FVulkanCommandBuffer_*,TSizedDefaultAllocator<32>_> *pTVar4;
  FVulkanPayload *this_00;
  FVulkanPayload *this_01;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FVulkanCommandBuffer *pFVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined8 *puVar13;
  int iVar14;
  uint uVar15;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FVulkanPayload *local_res20;
  undefined8 local_68;
  ForAnyElementType local_60;
  undefined8 local_58;
  
  lVar11 = this->_padding_;
  if (*(int *)(lVar11 + 0x18) != 0) {
    if ((*(int *)(lVar11 + 0x18) < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar14 = *(int *)(lVar11 + 0x18) + -1;
    this_00 = *(FVulkanPayload **)
               (((ForAnyElementType *)(lVar11 + 0x10))->Data +
               (longlong)*(int *)(lVar11 + 0x18) * 8 + -8);
    *(int *)(lVar11 + 0x18) = iVar14;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,(ForAnyElementType *)(lVar11 + 0x10),iVar14,(int *)(lVar11 + 0x1c));
    lVar11 = this->_padding_;
    puVar13 = *(undefined8 **)(lVar11 + 0x10);
    iVar14 = *(int *)(lVar11 + 0x18);
    puVar2 = puVar13 + iVar14;
    while( true ) {
      if (*(int *)(lVar11 + 0x18) != iVar14) {
        local_res8[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<FVulkanPayload_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (puVar13 == puVar2) break;
      this_01 = (FVulkanPayload *)*puVar13;
      FVulkanPayload::Merge(this_00,this_01);
      if (this_01 != (FVulkanPayload *)0x0) {
        FVulkanPayload::~FVulkanPayload(this_01);
        ::operator_delete(this_01,400);
      }
      puVar13 = puVar13 + 1;
    }
    lVar11 = this->_padding_;
    *(undefined4 *)(lVar11 + 0x18) = 0;
    if (*(int *)(lVar11 + 0x1c) < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)(lVar11 + 0x10),0,(int *)(lVar11 + 0x1c));
    }
    pTVar1 = &this_00->CommandBuffers;
    if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
        0x4000000000000) == 0) {
      local_res20 = FVulkanContextCommon::GetPayload
                              ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18,
                               Execute);
      pFVar10 = FVulkanContextCommon::GetCommandBuffer
                          ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
      uVar8 = (this_00->CommandBuffers).ArrayNum;
      local_60.Data = (FScriptContainerElement *)0x0;
      local_58 = 0;
      if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
      }
      if (0 < (int)uVar8) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar8,&local_60,0,(int *)((longlong)&local_58 + 4));
      }
      pFVar12 = (pTVar1->AllocatorInstance).Data;
      iVar14 = (this_00->CommandBuffers).ArrayNum;
      pFVar3 = pFVar12 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this_00->CommandBuffers).ArrayNum != iVar14) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FVulkanCommandBuffer_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (pFVar12 == pFVar3) break;
        local_68 = *(undefined8 *)(*(longlong *)pFVar12 + 0xa8);
        if (((local_60.Data <= (FScriptContainerElement *)&local_68) &&
            ((FScriptContainerElement *)&local_68 < local_60.Data + (longlong)local_58._4_4_ * 8))
           && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if ((int)local_58 == local_58._4_4_) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&local_60,(int *)((longlong)&local_58 + 4));
          local_58 = CONCAT44(local_58._4_4_,iVar9);
        }
        lVar11 = (longlong)(int)local_58;
        pFVar12 = pFVar12 + 8;
        local_58 = CONCAT44(local_58._4_4_,(int)local_58 + 1);
        *(undefined8 *)(local_60.Data + lVar11 * 8) = local_68;
      }
      pTVar4 = &pFVar10->ExecutedSecondaryCommandBuffers;
      if ((pTVar4 == pTVar1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(void*)this != (void*)&Source",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x986,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar14 = (this_00->CommandBuffers).ArrayNum;
      if (iVar14 != 0) {
        iVar9 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (8,8,iVar14,&pTVar4->AllocatorInstance,
                           &(pFVar10->ExecutedSecondaryCommandBuffers).ArrayNum,
                           &(pFVar10->ExecutedSecondaryCommandBuffers).ArrayMax);
        memmove((pTVar4->AllocatorInstance).Data + (longlong)iVar9 * 8,
                (pTVar1->AllocatorInstance).Data,(longlong)iVar14 << 3);
        (this_00->CommandBuffers).ArrayNum = 0;
      }
      (*VulkanDynamicAPI::vkCmdExecuteCommands)
                (pFVar10->CommandBufferHandle,(uint)local_58,(VkCommandBuffer_T **)local_60.Data);
      FVulkanPayload::Merge(local_res20,this_00);
      if (this_00 != (FVulkanPayload *)0x0) {
        FVulkanPayload::~FVulkanPayload(this_00);
        ::operator_delete(this_00,400);
      }
      if (local_60.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_60.Data);
      }
    }
    else {
      AlgoImpl::
      IntroSortInternal<FVulkanCommandBuffer_*,int,FIdentityFunctor,TDereferenceWrapper<FVulkanCommandBuffer_*,_FVulkanCommandListContext::RHIEndParallelRenderPass_::__l12::<lambda_1>_>_>
                ((FVulkanCommandBuffer **)(pTVar1->AllocatorInstance).Data,
                 (this_00->CommandBuffers).ArrayNum,local_res8[0],(<lambda_1> *)local_res18);
      iVar14 = (this_00->CommandBuffers).ArrayNum;
      uVar15 = iVar14 - 1;
      uVar8 = 0;
      if ((int)uVar15 < iVar14) {
        uVar8 = ~uVar15 >> 0x1f;
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
      uVar8 = *(uint *)(*(longlong *)
                         ((pTVar1->AllocatorInstance).Data +
                         (longlong)(this_00->CommandBuffers).ArrayNum * 8 + -8) + 0x98);
      FVulkanContextCommon::AppendParallelRenderPayload
                ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18,this_00);
      if ((uVar8 & 2) != 0) {
        *(undefined4 *)(*(longlong *)(this->_padding_ + 8) + 0x308) = 4;
        pFVar10 = FVulkanContextCommon::GetCommandBuffer
                            ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
        lVar11 = *(longlong *)(this->_padding_ + 8);
        if ((pFVar10->CommandBufferPool->CommandBufferType == Secondary) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetCommandBufferType() != EVulkanCommandBufferType::Secondary",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                               ,0x84,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*VulkanDynamicAPI::vkCmdBeginRenderingKHR)
                  (pFVar10->CommandBufferHandle,(VkRenderingInfo *)(lVar11 + 0x2f8));
        pFVar10->LastDynamicRenderingFlags = *(uint *)(lVar11 + 0x308);
        pFVar10->State = IsInsideRenderPass;
        pFVar10 = FVulkanContextCommon::GetCommandBuffer
                            ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
        if ((pFVar10->CommandBufferPool->CommandBufferType == Secondary) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetCommandBufferType() != EVulkanCommandBufferType::Secondary",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommandBuffer.cpp"
                               ,0x8e,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*VulkanDynamicAPI::vkCmdEndRenderingKHR)(pFVar10->CommandBufferHandle);
        pFVar10->State = IsInsideBegin;
      }
    }
  }
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x4000000000000) == 0) {
    RHIEndRenderPass(this);
  }
  pvVar5 = (void *)this->_padding_;
  if (pvVar5 != (void *)0x0) {
    if (*(void **)((longlong)pvVar5 + 0x10) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)pvVar5 + 0x10));
    }
    ::operator_delete(pvVar5,0x28);
  }
  this->_padding_ = 0;
  return;
}

// RHIEndTransitions @ 145aef940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIEndTransitions
          (FVulkanCommandListContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  undefined1 *this_00;
  TArrayView<FRHITransition_const_*,int> local_18;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x2020100000000) == 0x2020100000000) {
    ProcessCrossQueueSemaphores((FVulkanCommandListContext *)this_00,param_1,false);
    local_18.DataPtr = param_1->DataPtr;
    local_18.ArrayNum = param_1->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
    FVulkanContextCommon::HandleReservedResourceCommits((FVulkanContextCommon *)this_00,&local_18);
    ProcessTransitionSync2((FVulkanCommandListContext *)this_00,param_1,false);
    return;
  }
  ProcessTransitionLegacy((FVulkanCommandListContext *)this_00,param_1);
  return;
}

// RHISetDepthBounds @ 145aeff00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetDepthBounds
          (FVulkanCommandListContext *this,float param_1,float param_2)

{
  FVulkanCommandBuffer *pFVar1;
  
  pFVar1 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
                    /* WARNING: Could not recover jumptable at 0x000145aeff38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkCmdSetDepthBounds)(pFVar1->CommandBufferHandle,param_1,param_2);
  return;
}

// RHISetShaderParameter @ 145aeff50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderParameter
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,uint param_3,
          uint param_4,void *param_5)

{
  FVulkanComputePipeline *pFVar1;
  FVulkanComputePipelineDescriptorState *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIComputeShader *pFVar5;
  
  pFVar1 = this->PendingComputeState->CurrentPipeline;
  pFVar5 = (FRHIComputeShader *)0x0;
  if (pFVar1 != (FVulkanComputePipeline *)0x0) {
    pFVar5 = (FRHIComputeShader *)pFVar1->_padding_;
  }
  if (pFVar5 != param_1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingComputeState->GetCurrentShader() == ComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x1a9,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this->PendingComputeState->CurrentState;
  if (param_2 != 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BufferIndex == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                       ,0xc6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FPackedUniformBuffers::SetPackedGlobalParameter
            (&pFVar2->PackedUniformBuffers,param_3,param_4,param_5,
             &pFVar2->PackedUniformBuffersDirty);
  return;
}

// RHISetShaderParameter @ 145af0020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderParameter
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,uint param_2,uint param_3,
          uint param_4,void *param_5)

{
  char cVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanGraphicsPipelineState *pFVar3;
  FVulkanGraphicsPipelineDescriptorState *pFVar4;
  code *pcVar5;
  bool bVar6;
  EStage EVar7;
  FRHIGraphicsShader *pFVar8;
  FRHIGraphicsShader *pFVar9;
  longlong lVar10;
  FRHIGraphicsShader *pFVar11;
  longlong lVar12;
  
  pFVar2 = this->PendingGfxState;
  cVar1 = param_1->field_0x104;
  if (cVar1 == '\0') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar11 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar11;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar7 = ShaderStage::GetStageForFrequency(SF_Vertex);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar7];
    }
    pFVar8 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 != (FRHIGraphicsShader *)0x0) {
      pFVar11 = *(FRHIGraphicsShader **)&pFVar8->field_0x20;
    }
    if ((pFVar9 != pFVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Vertex) == GetShaderKey<FVulkanVertexShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x2e,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x154;
    lVar12 = 0xf0;
  }
  else if (cVar1 == '\x01') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar11 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar11;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar7 = ShaderStage::GetStageForFrequency(SF_Mesh);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar7];
    }
    pFVar8 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 != (FRHIGraphicsShader *)0x0) {
      pFVar11 = *(FRHIGraphicsShader **)&pFVar8->field_0x20;
    }
    if ((pFVar9 != pFVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Mesh) == GetShaderKey<FVulkanMeshShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x32,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x160;
    lVar12 = 0x120;
  }
  else if (cVar1 == '\x02') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar11 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar11;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar7 = ShaderStage::GetStageForFrequency(SF_Amplification);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar7];
    }
    pFVar8 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 != (FRHIGraphicsShader *)0x0) {
      pFVar11 = *(FRHIGraphicsShader **)&pFVar8->field_0x20;
    }
    if ((pFVar9 != pFVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Task) == GetShaderKey<FVulkanTaskShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x35,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x164;
    lVar12 = 0x130;
  }
  else if (cVar1 == '\x03') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar11 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar11;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar7 = ShaderStage::GetStageForFrequency(SF_Pixel);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar7];
    }
    pFVar8 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 != (FRHIGraphicsShader *)0x0) {
      pFVar11 = *(FRHIGraphicsShader **)&pFVar8->field_0x20;
    }
    if ((pFVar9 != pFVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Pixel) == GetShaderKey<FVulkanPixelShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x42,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x158;
    lVar12 = 0x100;
  }
  else if (cVar1 == '\x04') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar11 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar11;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar7 = ShaderStage::GetStageForFrequency(SF_Geometry);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar7];
    }
    pFVar8 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar8 = pFVar11;
    }
    if (pFVar8 != (FRHIGraphicsShader *)0x0) {
      pFVar11 = *(FRHIGraphicsShader **)&pFVar8->field_0x20;
    }
    if ((pFVar9 != pFVar11) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Geometry) == GetShaderKey<FVulkanGeometryShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x3a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x15c;
    lVar12 = 0x110;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x45,L"Undefined FRHIShader Frequency %d!");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    lVar10 = 0x550;
    lVar12 = 0x10e0;
  }
  pFVar4 = this->PendingGfxState->CurrentState;
  if ((param_2 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferIndex == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPipelineState.h"
                         ,0xf9,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FPackedUniformBuffers::SetPackedGlobalParameter
            ((FPackedUniformBuffers *)((longlong)&pFVar4->_padding_ + lVar12),param_3,param_4,
             param_5,(uint *)((longlong)&pFVar4->_padding_ + lVar10));
  return;
}

// RHISetShaderParameters @ 145af0370

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderParameters
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  TArrayView<FRHIShaderParameterResource_const_,int> local_48;
  TArrayView<FRHIShaderParameterResource_const_,int> local_38;
  TArrayView<FRHIShaderParameter_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_48.DataPtr = param_5->DataPtr;
  local_48.ArrayNum = param_5->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_38.DataPtr = param_4->DataPtr;
  local_38.ArrayNum = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::RHICore::RHISetShaderParametersShared<FVulkanCommandListContext,FRHIComputeShader>
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,param_1,
             &local_18,&local_28,&local_38,&local_48,true);
  return;
}

// RHISetShaderParameters @ 145af03f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderParameters
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  TArrayView<FRHIShaderParameterResource_const_,int> local_48;
  TArrayView<FRHIShaderParameterResource_const_,int> local_38;
  TArrayView<FRHIShaderParameter_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  local_48.DataPtr = param_5->DataPtr;
  local_48.ArrayNum = param_5->ArrayNum;
  local_48._12_4_ = *(undefined4 *)&param_5->field_0xc;
  local_28.DataPtr = param_3->DataPtr;
  local_28.ArrayNum = param_3->ArrayNum;
  local_28._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_38.DataPtr = param_4->DataPtr;
  local_38.ArrayNum = param_4->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_4->field_0xc;
  local_18.DataPtr = param_2->DataPtr;
  local_18.ArrayNum = param_2->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
  UE::RHICore::RHISetShaderParametersShared<FVulkanCommandListContext,FRHIGraphicsShader>
            ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,param_1,
             &local_18,&local_28,&local_38,&local_48,true);
  return;
}

// RHISetShaderResourceViewParameter @ 145af0470

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderResourceViewParameter
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHIShaderResourceView *param_3)

{
  FVulkanComputePipeline *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIComputeShader *pFVar4;
  
  if (param_3 != (FRHIShaderResourceView *)0x0) {
    pFVar1 = this->PendingComputeState->CurrentPipeline;
    pFVar4 = (FRHIComputeShader *)0x0;
    if (pFVar1 != (FVulkanComputePipeline *)0x0) {
      pFVar4 = (FRHIComputeShader *)pFVar1->_padding_;
    }
    if (pFVar4 != param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingComputeState->GetCurrentShader() == ResourceCast(ComputeShaderRHI)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x189,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVulkanPendingComputeState::SetSRVForUBResource
              (this->PendingComputeState,0,param_2,(FVulkanShaderResourceView *)param_3);
  }
  return;
}

// RHISetShaderResourceViewParameter @ 145af0500

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderResourceViewParameter
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,uint param_2,
          FRHIShaderResourceView *param_3)

{
  char cVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanGraphicsPipelineState *pFVar3;
  code *pcVar4;
  bool bVar5;
  EStage EVar6;
  FRHIGraphicsShader *pFVar7;
  uchar uVar8;
  FRHIGraphicsShader *pFVar9;
  FRHIGraphicsShader *pFVar10;
  
  if (param_3 != (FRHIShaderResourceView *)0x0) {
    pFVar2 = this->PendingGfxState;
    cVar1 = param_1->field_0x104;
    if (cVar1 == '\0') {
      pFVar3 = pFVar2->CurrentPipeline;
      pFVar10 = (FRHIGraphicsShader *)0x0;
      pFVar9 = pFVar10;
      if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
        EVar6 = ShaderStage::GetStageForFrequency(SF_Vertex);
        pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
      }
      pFVar7 = param_1 + 1;
      if (param_1 == (FRHIGraphicsShader *)0x0) {
        pFVar7 = pFVar10;
      }
      if (pFVar7 != (FRHIGraphicsShader *)0x0) {
        pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
      }
      if ((pFVar9 != pFVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Vertex) == GetShaderKey<FVulkanVertexShader>(ShaderRHI)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x2e,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = '\0';
    }
    else if (cVar1 == '\x01') {
      pFVar3 = pFVar2->CurrentPipeline;
      pFVar10 = (FRHIGraphicsShader *)0x0;
      pFVar9 = pFVar10;
      if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
        EVar6 = ShaderStage::GetStageForFrequency(SF_Mesh);
        pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
      }
      pFVar7 = param_1 + 1;
      if (param_1 == (FRHIGraphicsShader *)0x0) {
        pFVar7 = pFVar10;
      }
      if (pFVar7 != (FRHIGraphicsShader *)0x0) {
        pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
      }
      if ((pFVar9 != pFVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Mesh) == GetShaderKey<FVulkanMeshShader>(ShaderRHI)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x32,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = '\x03';
    }
    else if (cVar1 == '\x02') {
      pFVar3 = pFVar2->CurrentPipeline;
      pFVar10 = (FRHIGraphicsShader *)0x0;
      pFVar9 = pFVar10;
      if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
        EVar6 = ShaderStage::GetStageForFrequency(SF_Amplification);
        pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
      }
      pFVar7 = param_1 + 1;
      if (param_1 == (FRHIGraphicsShader *)0x0) {
        pFVar7 = pFVar10;
      }
      if (pFVar7 != (FRHIGraphicsShader *)0x0) {
        pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
      }
      if ((pFVar9 != pFVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Task) == GetShaderKey<FVulkanTaskShader>(ShaderRHI)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x35,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = '\x04';
    }
    else if (cVar1 == '\x03') {
      pFVar3 = pFVar2->CurrentPipeline;
      pFVar10 = (FRHIGraphicsShader *)0x0;
      pFVar9 = pFVar10;
      if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
        EVar6 = ShaderStage::GetStageForFrequency(SF_Pixel);
        pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
      }
      pFVar7 = param_1 + 1;
      if (param_1 == (FRHIGraphicsShader *)0x0) {
        pFVar7 = pFVar10;
      }
      if (pFVar7 != (FRHIGraphicsShader *)0x0) {
        pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
      }
      if ((pFVar9 != pFVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Pixel) == GetShaderKey<FVulkanPixelShader>(ShaderRHI)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x42,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = '\x01';
    }
    else if (cVar1 == '\x04') {
      pFVar3 = pFVar2->CurrentPipeline;
      pFVar10 = (FRHIGraphicsShader *)0x0;
      pFVar9 = pFVar10;
      if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
        EVar6 = ShaderStage::GetStageForFrequency(SF_Geometry);
        pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
      }
      pFVar7 = param_1 + 1;
      if (param_1 == (FRHIGraphicsShader *)0x0) {
        pFVar7 = pFVar10;
      }
      if (pFVar7 != (FRHIGraphicsShader *)0x0) {
        pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
      }
      if ((pFVar9 != pFVar10) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Geometry) == GetShaderKey<FVulkanGeometryShader>(ShaderRHI)"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x3a,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = '\x02';
    }
    else {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x45,L"Undefined FRHIShader Frequency %d!");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = 0xff;
    }
    FVulkanPendingGfxState::SetSRVForUBResource
              (this->PendingGfxState,uVar8,param_2,(FVulkanShaderResourceView *)param_3);
  }
  return;
}

// RHISetShaderSampler @ 145af07e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderSampler
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHISamplerState *param_3)

{
  FVulkanComputePipeline *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIComputeShader *pFVar4;
  
  pFVar1 = this->PendingComputeState->CurrentPipeline;
  pFVar4 = (FRHIComputeShader *)0x0;
  if (pFVar1 != (FVulkanComputePipeline *)0x0) {
    pFVar4 = (FRHIComputeShader *)pFVar1->_padding_;
  }
  if (pFVar4 != param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingComputeState->GetCurrentShader() == ComputeShader",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x19a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetSamplerState
            ((FVulkanCommonPipelineDescriptorState *)this->PendingComputeState->CurrentState,'\0',
             param_2,(FVulkanSamplerState *)param_3);
  return;
}

// RHISetShaderSampler @ 145af0870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderSampler
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,uint param_2,
          FRHISamplerState *param_3)

{
  char cVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanGraphicsPipelineState *pFVar3;
  code *pcVar4;
  bool bVar5;
  EStage EVar6;
  FRHIGraphicsShader *pFVar7;
  uchar uVar8;
  FRHIGraphicsShader *pFVar9;
  FRHIGraphicsShader *pFVar10;
  
  pFVar2 = this->PendingGfxState;
  cVar1 = param_1->field_0x104;
  if (cVar1 == '\0') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Vertex);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Vertex) == GetShaderKey<FVulkanVertexShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x2e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\0';
  }
  else if (cVar1 == '\x01') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Mesh);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Mesh) == GetShaderKey<FVulkanMeshShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x32,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x03';
  }
  else if (cVar1 == '\x02') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Amplification);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Task) == GetShaderKey<FVulkanTaskShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x35,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x04';
  }
  else if (cVar1 == '\x03') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Pixel);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Pixel) == GetShaderKey<FVulkanPixelShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x42,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x01';
  }
  else if (cVar1 == '\x04') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Geometry);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Geometry) == GetShaderKey<FVulkanGeometryShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x3a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x02';
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x45,L"Undefined FRHIShader Frequency %d!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0xff;
  }
  FVulkanCommonPipelineDescriptorState::SetSamplerState
            ((FVulkanCommonPipelineDescriptorState *)this->PendingGfxState->CurrentState,uVar8,
             param_2,(FVulkanSamplerState *)param_3);
  return;
}

// RHISetShaderTexture @ 145af0b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderTexture
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHITexture *param_3)

{
  FVulkanComputePipeline *pFVar1;
  code *pcVar2;
  bool bVar3;
  VkImageLayout VVar4;
  FRHIComputeShader *pFVar5;
  FVulkanTexture *this_00;
  double dVar6;
  LARGE_INTEGER local_res8;
  
  pFVar1 = this->PendingComputeState->CurrentPipeline;
  pFVar5 = (FRHIComputeShader *)0x0;
  if (pFVar1 != (FVulkanComputePipeline *)0x0) {
    pFVar5 = (FRHIComputeShader *)pFVar1->_padding_;
  }
  if ((pFVar5 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingComputeState->GetCurrentShader() == ComputeShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x173,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = (FVulkanTexture *)(**(code **)(param_3->_padding_ + 0x48))(param_3);
  if ((this_00->FullAspectMask & 6) == 0) {
    bVar3 = FVulkanTexture::SupportsSampling(this_00);
    VVar4 = (uint)bVar3 * 4 + VK_IMAGE_LAYOUT_GENERAL;
  }
  else {
    VVar4 = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
    if (((this_00->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
        0x2020100000000) {
      VVar4 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    }
  }
  FVulkanCommonPipelineDescriptorState::SetTexture
            ((FVulkanCommonPipelineDescriptorState *)this->PendingComputeState->CurrentState,'\0',
             param_2,this_00,VVar4);
  QueryPerformanceCounter(&local_res8);
  dVar6 = (double)(float)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                         __real_4170000000000000);
  if (dVar6 != (param_3->LastRenderTime).LastRenderTime) {
    (param_3->LastRenderTime).LastRenderTime = dVar6;
  }
  return;
}

// RHISetShaderTexture @ 145af0c80

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderTexture
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,uint param_2,
          FRHITexture *param_3)

{
  char cVar1;
  FVulkanPendingGfxState *pFVar2;
  FVulkanGraphicsPipelineState *pFVar3;
  code *pcVar4;
  bool bVar5;
  EStage EVar6;
  FVulkanTexture *this_00;
  FRHIGraphicsShader *pFVar7;
  uchar uVar8;
  FRHIGraphicsShader *pFVar9;
  FRHIGraphicsShader *pFVar10;
  VkImageLayout VVar11;
  double dVar12;
  LARGE_INTEGER local_res8;
  
  this_00 = (FVulkanTexture *)(**(code **)(param_3->_padding_ + 0x48))(param_3);
  if ((this_00->FullAspectMask & 6) == 0) {
    bVar5 = FVulkanTexture::SupportsSampling(this_00);
    VVar11 = (uint)bVar5 * 4 + VK_IMAGE_LAYOUT_GENERAL;
  }
  else {
    VVar11 = VK_IMAGE_LAYOUT_DEPTH_STENCIL_READ_ONLY_OPTIMAL;
    if (((this_00->Device->OptionalDeviceExtensions).field0_0x0.Packed & 0x2020100000000) ==
        0x2020100000000) {
      VVar11 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
    }
  }
  cVar1 = param_1->field_0x104;
  pFVar2 = this->PendingGfxState;
  if (cVar1 == '\0') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Vertex);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Vertex) == GetShaderKey<FVulkanVertexShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x2e,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\0';
  }
  else if (cVar1 == '\x01') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Mesh);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Mesh) == GetShaderKey<FVulkanMeshShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x32,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x03';
  }
  else if (cVar1 == '\x02') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Amplification);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Task) == GetShaderKey<FVulkanTaskShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x35,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x04';
  }
  else if (cVar1 == '\x03') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Pixel);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Pixel) == GetShaderKey<FVulkanPixelShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x42,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x01';
  }
  else if (cVar1 == '\x04') {
    pFVar3 = pFVar2->CurrentPipeline;
    pFVar10 = (FRHIGraphicsShader *)0x0;
    pFVar9 = pFVar10;
    if (pFVar3 != (FVulkanGraphicsPipelineState *)0x0) {
      EVar6 = ShaderStage::GetStageForFrequency(SF_Geometry);
      pFVar9 = (FRHIGraphicsShader *)pFVar3->ShaderKeys[(int)EVar6];
    }
    pFVar7 = param_1 + 1;
    if (param_1 == (FRHIGraphicsShader *)0x0) {
      pFVar7 = pFVar10;
    }
    if (pFVar7 != (FRHIGraphicsShader *)0x0) {
      pFVar10 = *(FRHIGraphicsShader **)&pFVar7->field_0x20;
    }
    if ((pFVar9 != pFVar10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingGfxState->GetCurrentShaderKey(ShaderStage::Geometry) == GetShaderKey<FVulkanGeometryShader>(ShaderRHI)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                           ,0x3a,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = '\x02';
  }
  else {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                       ,0x45,L"Undefined FRHIShader Frequency %d!");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar8 = 0xff;
  }
  FVulkanCommonPipelineDescriptorState::SetTexture
            ((FVulkanCommonPipelineDescriptorState *)this->PendingGfxState->CurrentState,uVar8,
             param_2,this_00,VVar11);
  QueryPerformanceCounter(&local_res8);
  dVar12 = (double)(float)((double)local_res8.QuadPart * FGenericPlatformTime::SecondsPerCycle +
                          __real_4170000000000000);
  if (dVar12 != (param_3->LastRenderTime).LastRenderTime) {
    (param_3->LastRenderTime).LastRenderTime = dVar12;
  }
  return;
}

// RHISetShaderUniformBuffer @ 145af1020

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderUniformBuffer
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHIUniformBuffer *param_3)

{
  FVulkanComputePipeline *pFVar1;
  FVulkanComputePipelineDescriptorState *this_00;
  code *pcVar2;
  bool bVar3;
  VkDescriptorType VVar4;
  FRHIComputeShader *pFVar5;
  uint uVar6;
  
  pFVar5 = (FRHIComputeShader *)0x0;
  pFVar1 = this->PendingComputeState->CurrentPipeline;
  if (pFVar1 != (FVulkanComputePipeline *)0x0) {
    pFVar5 = (FRHIComputeShader *)pFVar1->_padding_;
  }
  if ((pFVar5 != param_1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingComputeState->GetCurrentShader() == ComputeShader",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x246,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = this->PendingComputeState->CurrentState;
  if (param_2 < (uint)param_1[1]._padding_) {
    VVar4 = FVulkanCommonPipelineDescriptorState::GetDescriptorType
                      ((FVulkanCommonPipelineDescriptorState *)this_00,'\0',param_2);
    if (VVar4 == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) {
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<1>
                ((FVulkanCommonPipelineDescriptorState *)this_00,'\0',param_2,
                 (FVulkanUniformBuffer *)param_3);
    }
    else {
      if ((VVar4 != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x263,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<0>
                ((FVulkanCommonPipelineDescriptorState *)this_00,'\0',param_2,
                 (FVulkanUniformBuffer *)param_3);
    }
    uVar6 = 0;
    if ((int)param_2 < (int)param_1[1]._padding_) {
      uVar6 = ~param_2 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (*(char *)(param_1[1]._padding_ + 4 + (longlong)(int)param_2 * 8) == '\0') {
      return;
    }
  }
  if ((0xf < param_2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferIndex < MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x272,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this->BoundUniformBuffers[5][param_2] = (FVulkanUniformBuffer *)param_3;
  this->DirtyUniformBuffers[5] = this->DirtyUniformBuffers[5] | (ushort)(1 << (param_2 & 0x1f));
  return;
}

// RHISetShaderUniformBuffer @ 145af11d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EStage": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetShaderUniformBuffer
          (FVulkanCommandListContext *this,FRHIGraphicsShader *param_1,uint param_2,
          FRHIUniformBuffer *param_3)

{
  char cVar1;
  ulong64 uVar2;
  code *pcVar3;
  bool bVar4;
  VkDescriptorType VVar5;
  ulong64 uVar6;
  uchar uVar7;
  EStage EVar8;
  uint uVar9;
  FRHIGraphicsShader *pFVar10;
  
  cVar1 = param_1->field_0x104;
  if (cVar1 == '\0') {
    EVar8 = Compute;
  }
  else if (cVar1 == '\x01') {
    EVar8 = Mesh;
  }
  else if (cVar1 == '\x02') {
    EVar8 = NumRayTracingStages;
  }
  else if (cVar1 == '\x03') {
    EVar8 = NumComputeStages;
  }
  else {
    if (cVar1 != '\x04') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x6b,L"Undefined FRHIShader Frequency %d!");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar10 = (FRHIGraphicsShader *)0x0;
      EVar8 = Invalid;
      goto LAB_145af128b;
    }
    EVar8 = Geometry;
  }
  pFVar10 = param_1 + 1;
  if (param_1 == (FRHIGraphicsShader *)0x0) {
    pFVar10 = (FRHIGraphicsShader *)0x0;
  }
LAB_145af128b:
  uVar2 = *(ulong64 *)&pFVar10->field_0x20;
  uVar6 = FVulkanPendingGfxState::GetCurrentShaderKey(this->PendingGfxState,EVar8);
  if ((uVar2 != uVar6) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Shader->GetShaderKey() == PendingGfxState->GetCurrentShaderKey(Stage)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x215,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (param_3[1].Layout.Reference != (FRHIUniformBufferLayout *)0x0) {
    FVulkanUniformBuffer::SetupUniformBufferView((FVulkanUniformBuffer *)param_3);
  }
  if (param_2 < *(uint *)&pFVar10->field_0x68) {
    uVar7 = (uchar)EVar8;
    VVar5 = FVulkanCommonPipelineDescriptorState::GetDescriptorType
                      ((FVulkanCommonPipelineDescriptorState *)this->PendingGfxState->CurrentState,
                       uVar7,param_2);
    if (VVar5 == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER_DYNAMIC) {
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<1>
                ((FVulkanCommonPipelineDescriptorState *)this->PendingGfxState->CurrentState,uVar7,
                 param_2,(FVulkanUniformBuffer *)param_3);
    }
    else {
      if ((VVar5 != VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("DescriptorType == VK_DESCRIPTOR_TYPE_UNIFORM_BUFFER",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x22e,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVulkanCommonPipelineDescriptorState::SetUniformBuffer<0>
                ((FVulkanCommonPipelineDescriptorState *)this->PendingGfxState->CurrentState,uVar7,
                 param_2,(FVulkanUniformBuffer *)param_3);
    }
    uVar9 = 0;
    if ((int)param_2 < *(int *)&pFVar10->field_0x40) {
      uVar9 = ~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (*(char *)(*(longlong *)&pFVar10->field_0x38 + 4 + (longlong)(int)param_2 * 8) == '\0') {
      return;
    }
  }
  if ((0xf < param_2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferIndex < MAX_UNIFORM_BUFFERS_PER_SHADER_STAGE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x23d,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this->BoundUniformBuffers[(byte)pFVar10->field_0x100][param_2] = (FVulkanUniformBuffer *)param_3;
  this->DirtyUniformBuffers[(byte)pFVar10->field_0x100] =
       this->DirtyUniformBuffers[(byte)pFVar10->field_0x100] | (ushort)(1 << (param_2 & 0x1f));
  return;
}

// RHISetStaticUniformBuffer @ 145af1450

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetStaticUniformBuffer
          (FVulkanCommandListContext *this,uchar param_1,FRHIUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)param_1) {
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
  *(FRHIUniformBuffer **)(*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)param_1 * 8) =
       param_2;
  return;
}

// RHISetStaticUniformBuffers @ 145af14d0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetStaticUniformBuffers
          (FVulkanCommandListContext *this,FUniformBufferStaticBindings *param_1)

{
  byte bVar1;
  FRHIShaderBindingLayout *pFVar2;
  ForElementType<FRHIUniformBuffer_*> FVar3;
  undefined8 uVar4;
  ForElementType<unsigned_char> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<FRHIUniformBuffer_*> FVar9;
  ForElementType<unsigned_char> FVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  memset(*(void **)&this->TypedDescriptorPoolSets,0,
         (longlong)*(int *)&(this->TypedDescriptorPoolSets).field_0x8 << 3);
  pFVar2 = param_1->ShaderBindingLayout;
  if (pFVar2 == (FRHIShaderBindingLayout *)0x0) {
    uVar11 = 0;
    if (0 < (param_1->UniformBuffers).ArrayNum) {
      lVar12 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar11 < (param_1->UniformBuffers).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = (param_1->UniformBuffers).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
        if (FVar3 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar9 = FVar3;
        }
        uVar4 = *(undefined8 *)((longlong)FVar9 + lVar12 * 8);
        uVar8 = 0;
        if ((int)uVar11 < (param_1->Slots).ArrayNum) {
          uVar8 = ~uVar11 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar5 = (param_1->Slots).AllocatorInstance.SecondaryData;
        FVar10 = (ForElementType<unsigned_char>)param_1;
        if (FVar5 != (ForElementType<unsigned_char>)0x0) {
          FVar10 = FVar5;
        }
        bVar1 = *(byte *)(lVar12 + (longlong)FVar10);
        if (*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 1;
        *(undefined8 *)(*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8) = uVar4;
      } while ((int)uVar11 < (param_1->UniformBuffers).ArrayNum);
    }
    *(undefined8 *)&(this->TypedDescriptorPoolSets).field_0x10 = 0;
  }
  else {
    if ((param_1->UniformBuffers).ArrayNum != pFVar2->NumUniformBufferEntries) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUniformBuffers.GetUniformBufferCount() == Layout->GetNumUniformBufferEntries()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x1cc,L"");
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    uVar11 = 0;
    if (0 < (param_1->UniformBuffers).ArrayNum) {
      lVar12 = 0;
      do {
        uVar13 = ~uVar11 >> 0x1f;
        uVar8 = 0;
        if ((int)uVar11 < (param_1->UniformBuffers).ArrayNum) {
          uVar8 = uVar13;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        FVar3 = (param_1->UniformBuffers).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
        if (FVar3 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar9 = FVar3;
        }
        uVar4 = *(undefined8 *)(lVar12 + (longlong)FVar9);
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&(this->TypedDescriptorPoolSets).field_0x8) {
          uVar8 = uVar13;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        *(undefined8 *)(lVar12 + *(longlong *)&this->TypedDescriptorPoolSets) = uVar4;
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&(this->TypedDescriptorPoolSets).field_0x8) {
          uVar8 = uVar13;
        }
        if (uVar8 == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        if (*(longlong *)(lVar12 + *(longlong *)&this->TypedDescriptorPoolSets) == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("GlobalUniformBuffers[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                             ,0x1d1,
                             L"Static uniform buffer at index %d is referenced in the shader binding layout but is not provided"
                            );
          if (bVar7) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < (param_1->UniformBuffers).ArrayNum);
    }
    *(FRHIShaderBindingLayout **)&(this->TypedDescriptorPoolSets).field_0x10 = pFVar2;
  }
  return;
}

// RHISetStencilRef @ 145af1800

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetStencilRef(FVulkanCommandListContext *this,uint param_1)

{
  if (param_1 != *(uint *)(this->_padding_ + 0x74)) {
    *(uint *)(this->_padding_ + 0x74) = param_1;
  }
  return;
}

// RHISetStreamSource @ 145af1820

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetStreamSource
          (FVulkanCommandListContext *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != (FRHIBuffer *)0x0) {
    lVar1 = this->_padding_;
    lVar2 = param_2[1]._padding_;
    *(longlong *)(lVar1 + ((ulonglong)param_1 + 0xe) * 0x10) = param_2[1]._padding_;
    *(uint *)(lVar1 + 0xe8 + (ulonglong)param_1 * 0x10) = param_3 + (int)lVar2;
    *(undefined1 *)(lVar1 + 0x1f0) = 1;
  }
  return;
}

// RHISetUAVParameter @ 145af1870

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetUAVParameter
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHIUnorderedAccessView *param_3)

{
  FVulkanComputePipeline *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIComputeShader *pFVar4;
  
  if (param_3 != (FRHIUnorderedAccessView *)0x0) {
    pFVar1 = this->PendingComputeState->CurrentPipeline;
    pFVar4 = (FRHIComputeShader *)0x0;
    if (pFVar1 != (FVulkanComputePipeline *)0x0) {
      pFVar4 = (FRHIComputeShader *)pFVar1->_padding_;
    }
    if (pFVar4 != param_1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingComputeState->GetCurrentShader() == ResourceCast(ComputeShaderRHI)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                         ,0x159,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FVulkanPendingComputeState::SetUAVForUBResource
              (this->PendingComputeState,0,param_2,(FVulkanUnorderedAccessView *)param_3);
  }
  return;
}

// RHISetUAVParameter @ 145af1900

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetUAVParameter
          (FVulkanCommandListContext *this,FRHIComputeShader *param_1,uint param_2,
          FRHIUnorderedAccessView *param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_4731806581430156958>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                     ,0x162,"0");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetUAVParameter @ 145af1940

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetUAVParameter
          (FVulkanCommandListContext *this,FRHIPixelShader *param_1,uint param_2,
          FRHIUnorderedAccessView *param_3)

{
  if (param_3 != (FRHIUnorderedAccessView *)0x0) {
    FVulkanPendingGfxState::SetUAVForUBResource
              (this->PendingGfxState,'\x01',param_2,(FVulkanUnorderedAccessView *)param_3);
    return;
  }
  return;
}

// RHISetUniformBufferDynamicOffset @ 145af1960

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetUniformBufferDynamicOffset
          (FVulkanCommandListContext *this,uchar param_1,uint param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((((ulonglong)param_2 &
       *(longlong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0xdc0) - 1U) != 0)
     && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsAligned(InOffset, Device.GetLimits().minUniformBufferOffsetAlignment)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                            ,0x1e8,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)param_1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)(*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)param_1 * 8);
  lVar10 = *(longlong *)(*(longlong *)(this->_padding_ + 0x80) + 0x488);
  if (lVar10 != 0) {
    plVar3 = *(longlong **)(lVar10 + 8);
    uVar9 = 0;
    iVar7 = (int)plVar3[1];
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(uchar *)(lVar10 + *plVar3) == param_1) {
          if ((*(uint *)(lVar2 + 100) < param_2 + 0x4000) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InOffset + (16u*1024u)) <= UniformBuffer->Allocation.Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                 ,0x203,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)(lVar2 + 0x68);
          lVar10 = *(longlong *)(this->_padding_ + 0x88);
          if ((*(int *)(lVar10 + 200) < 1) &&
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
          bVar1 = *(byte *)(uVar9 + *(longlong *)(*(longlong *)(lVar10 + 0xc0) + 8));
          if ((*(int *)(lVar10 + 200) < 1) &&
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
          *(uint *)(*(longlong *)(*(longlong *)(lVar10 + 0xc0) + 0x10) + (ulonglong)bVar1 * 4) =
               iVar7 + param_2;
          break;
        }
        iVar7 = (int)plVar3[1];
        uVar9 = (ulonglong)(uVar8 + 1);
        lVar10 = lVar10 + 1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
  }
  lVar10 = *(longlong *)(*(longlong *)(this->_padding_ + 0x80) + 0x490);
  if (lVar10 != 0) {
    plVar3 = *(longlong **)(lVar10 + 8);
    uVar9 = 0;
    iVar7 = (int)plVar3[1];
    if (0 < iVar7) {
      lVar10 = 0;
      do {
        uVar8 = (uint)uVar9;
        uVar6 = 0;
        if ((int)uVar8 < iVar7) {
          uVar6 = ~uVar8 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(uchar *)(lVar10 + *plVar3) == param_1) {
          if ((*(uint *)(lVar2 + 100) < param_2 + 0x4000) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(InOffset + (16u*1024u)) <= UniformBuffer->Allocation.Size",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                                 ,0x203,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar7 = *(int *)(lVar2 + 0x68);
          lVar2 = *(longlong *)(this->_padding_ + 0x88);
          if ((*(int *)(lVar2 + 200) < 2) &&
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
          bVar1 = *(byte *)(uVar9 + *(longlong *)(*(longlong *)(lVar2 + 0xc0) + 0x80));
          if ((*(int *)(lVar2 + 200) < 2) &&
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
          *(uint *)(*(longlong *)(*(longlong *)(lVar2 + 0xc0) + 0x88) + (ulonglong)bVar1 * 4) =
               iVar7 + param_2;
          return;
        }
        iVar7 = (int)plVar3[1];
        uVar9 = (ulonglong)(uVar8 + 1);
        lVar10 = lVar10 + 1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
  }
  return;
}

// RHIWriteGPUFence @ 145af2100

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIWriteGPUFence(FVulkanCommandListContext *this,FRHIGPUFence *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanCommands.cpp"
                     ,0x3a1,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// ReleasePendingState @ 145af2f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::ReleasePendingState(FVulkanCommandListContext *this)

{
  FVulkanPendingGfxState *this_00;
  FVulkanPendingComputeState *this_01;
  
  this_00 = this->PendingGfxState;
  if (this_00 != (FVulkanPendingGfxState *)0x0) {
    FVulkanPendingGfxState::~FVulkanPendingGfxState(this_00);
    ::operator_delete(this_00,0x200);
  }
  this_01 = this->PendingComputeState;
  this->PendingGfxState = (FVulkanPendingGfxState *)0x0;
  if (this_01 != (FVulkanPendingComputeState *)0x0) {
    FVulkanPendingComputeState::~FVulkanPendingComputeState(this_01);
    ::operator_delete(this_01,0x68);
  }
  this->PendingComputeState = (FVulkanPendingComputeState *)0x0;
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIAmplificationShader,2>_> @ 145b3ab60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIAmplificationShader,2>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIAmplificationShader,2> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIAmplificationShader,2> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x148) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x140 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIGraphicsShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIComputeShader,5>_> @ 145b3ad00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIComputeShader,5>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIComputeShader,5> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIComputeShader,5> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x150) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x148 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIComputeShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIGeometryShader,4>_> @ 145b3aea0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIGeometryShader,4>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIGeometryShader,4> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIGeometryShader,4> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x148) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x140 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIGraphicsShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIMeshShader,1>_> @ 145b3b040

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIMeshShader,1>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIMeshShader,1> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIMeshShader,1> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x148) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x140 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIGraphicsShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIPixelShader,3>_> @ 145b3b1e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIPixelShader,3>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIPixelShader,3> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIPixelShader,3> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x148) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x140 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIGraphicsShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIVertexShader,0>_> @ 145b3b380

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIVertexShader,0>_>
          (FVulkanCommandListContext *this,TVulkanBaseShader<FRHIVertexShader,0> *param_1)

{
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if (param_1 != (TVulkanBaseShader<FRHIVertexShader,0> *)0x0) {
    iVar7 = *(int *)&param_1->field_0x88;
    uVar6 = 0;
    if (0 < iVar7) {
      lVar8 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar7) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = *(byte *)(lVar8 + *(longlong *)&param_1->field_0x80);
        if (bVar1 != 0xff) {
          if (((this->GlobalUniformBuffers).ArrayNum <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    ((this->GlobalUniformBuffers).AllocatorInstance.Data + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar6 < *(int *)&param_1->field_0x148) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,*(uint *)(*(longlong *)&param_1->field_0x140 + lVar8 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer(this,(FRHIGraphicsShader *)param_1,uVar6,pFVar2);
          }
        }
        iVar7 = *(int *)&param_1->field_0x88;
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 1;
      } while ((int)uVar6 < iVar7);
    }
  }
  return;
}

// BeginOcclusionQueryBatch @ 145b57250

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::BeginOcclusionQueryBatch
          (FVulkanCommandListContext *this,uint param_1,uint param_2)

{
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FVulkanPayload *pFVar7;
  FVulkanCommandBuffer *pFVar8;
  FVulkanQueryPool *local_18 [2];
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  pFVar7 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)this,Execute);
  pTVar1 = &pFVar7->QueryPools;
  local_18[0] = FVulkanDevice::AcquireOcclusionQueryPool
                          ((FVulkanDevice *)this->_padding_,param_2 * param_1);
  pFVar8 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
  FVulkanQueryPool::Reset(local_18[0],pFVar8,param_2);
  pFVar3 = pTVar1->Elements[0].AllocatorInstance.Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar3 + (longlong)(pFVar7->QueryPools).Elements[0].ArrayMax * 8)) {
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
  iVar6 = (pFVar7->QueryPools).Elements[0].ArrayNum;
  piVar2 = &(pFVar7->QueryPools).Elements[0].ArrayMax;
  if (iVar6 == *piVar2) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)pTVar1,piVar2);
  }
  (pFVar7->QueryPools).Elements[0].ArrayNum = iVar6 + 1;
  *(FVulkanQueryPool **)(pTVar1->Elements[0].AllocatorInstance.Data + (longlong)iVar6 * 8) =
       local_18[0];
  return;
}

// ExtractDepthStencilLayouts @ 145b66270

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::ExtractDepthStencilLayouts
          (FVulkanCommandListContext *this,FRHIRenderPassInfo *param_1,VkImageLayout *param_2,
          VkImageLayout *param_3)

{
  uint uVar1;
  FRHITexture *pFVar2;
  VkImageLayout VVar3;
  longlong lVar4;
  Type TVar5;
  Type TVar6;
  ulonglong uVar7;
  
  pFVar2 = (param_1->DepthStencilRenderTarget).DepthStencilTarget;
  if (pFVar2 != (FRHITexture *)0x0) {
    uVar7 = *(ulonglong *)(this->_padding_ + 0x21e0) & 0x2020100000000;
    lVar4 = (**(code **)(pFVar2->_padding_ + 0x48))();
    TVar6 = (param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
    uVar1 = *(uint *)(lVar4 + 0x1e0);
    if ((uVar1 & 2) != 0) {
      TVar5 = TVar6 & DepthMask;
      if (TVar5 == DepthWrite) {
        *param_2 = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
      }
      else if (TVar5 == DepthRead) {
        *param_2 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
      }
      else if (uVar7 != 0x2020100000000) {
        VVar3 = FVulkanPipelineBarrier::GetDepthOrStencilLayout(*(ERHIAccess *)(lVar4 + 0x1b0));
        *param_2 = VVar3;
      }
    }
    if ((uVar1 & 4) != 0) {
      TVar6 = TVar6 & StencilMask;
      if (TVar6 == DepthNop_StencilWrite) {
        *param_3 = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
      }
      else if (TVar6 == DepthNop_StencilRead) {
        *param_3 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
      }
      else if (uVar7 != 0x2020100000000) {
        VVar3 = FVulkanPipelineBarrier::GetDepthOrStencilLayout(*(ERHIAccess *)(lVar4 + 0x1b4));
        *param_3 = VVar3;
      }
    }
  }
  return;
}

// GetCurrentOcclusionQueryPool @ 145b68d60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanQueryPool * __thiscall
FVulkanCommandListContext::GetCurrentOcclusionQueryPool(FVulkanCommandListContext *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FVulkanPayload *pFVar5;
  FVulkanQueryPool *pFVar6;
  uint uVar7;
  
  pFVar5 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)this,Execute);
  iVar1 = (pFVar5->QueryPools).Elements[0].ArrayNum;
  uVar7 = iVar1 - 1;
  uVar4 = 0;
  if ((int)uVar7 < iVar1) {
    uVar4 = ~uVar7 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar6 = (FVulkanQueryPool *)(*pcVar2)();
      return pFVar6;
    }
  }
  return *(FVulkanQueryPool **)
          ((pFVar5->QueryPools).Elements[0].AllocatorInstance.Data +
          (longlong)(pFVar5->QueryPools).Elements[0].ArrayNum * 8 + -8);
}

// GetSwapChain @ 145b6b090

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanSwapChain * __thiscall
FVulkanCommandListContext::GetSwapChain(FVulkanCommandListContext *this)

{
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  FVulkanSwapChain *pFVar4;
  
  lVar3 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  if (*(int *)(lVar3 + 0x178) == 0) {
    return (FVulkanSwapChain *)0x0;
  }
  if (*(int *)(lVar3 + 0x178) < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FVulkanSwapChain *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FVulkanSwapChain **)(**(longlong **)(lVar3 + 0x170) + 0x128);
}

// IsSwapchainImage @ 145b6bf40

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

bool __thiscall
FVulkanCommandListContext::IsSwapchainImage(FVulkanCommandListContext *this,FRHITexture *param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  lVar7 = (**(code **)(GDynamicRHI->_padding_ + 0x30))();
  uVar11 = 0;
  uVar1 = *(uint *)(lVar7 + 0x178);
  if (uVar1 != 0) {
    do {
      lVar8 = (**(code **)(param_1->_padding_ + 0x48))(param_1);
      lVar8 = *(longlong *)(lVar8 + 0x170);
      uVar5 = 0;
      if ((int)uVar11 < *(int *)(lVar7 + 0x178)) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      uVar10 = 0;
      uVar5 = *(uint *)(*(longlong *)(*(longlong *)(lVar7 + 0x170) + (longlong)(int)uVar11 * 8) +
                       0x58);
      if (uVar5 != 0) {
        do {
          uVar6 = 0;
          if ((int)uVar11 < *(int *)(lVar7 + 0x178)) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          lVar9 = *(longlong *)(*(longlong *)(lVar7 + 0x170) + (longlong)(int)uVar11 * 8);
          if (*(int *)(lVar9 + 0x58) < 1) {
            lVar9 = 0;
          }
          else {
            uVar6 = 0;
            if ((int)uVar10 < *(int *)(lVar9 + 0x58)) {
              uVar6 = ~uVar10 >> 0x1f;
            }
            if ((uVar6 == 0) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            lVar12 = lVar9 + 0x20;
            if (*(longlong *)(lVar9 + 0x50) != 0) {
              lVar12 = *(longlong *)(lVar9 + 0x50);
            }
            lVar9 = *(longlong *)(*(longlong *)(lVar12 + (longlong)(int)uVar10 * 8) + 0x170);
          }
          if (lVar8 == lVar9) {
            return true;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar5);
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < uVar1);
  }
  return false;
}

// PrepareRenderPassForPSOCreation @ 145b6f9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FVulkanRenderPass * __thiscall
FVulkanCommandListContext::PrepareRenderPassForPSOCreation
          (FVulkanCommandListContext *this,FGraphicsPipelineStateInitializer *param_1)

{
  FVulkanRenderPass *pFVar1;
  undefined1 auStack_3e8 [32];
  FVulkanRenderTargetLayout local_3c8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  FVulkanRenderTargetLayout::FVulkanRenderTargetLayout(&local_3c8,param_1);
  pFVar1 = FVulkanRenderPassManager::GetOrCreateRenderPass
                     (*(FVulkanRenderPassManager **)(this->_padding_ + 0x708),&local_3c8);
  return pFVar1;
}

// PrepareRenderPassForPSOCreation @ 145b6fa30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

FVulkanRenderPass * __thiscall
FVulkanCommandListContext::PrepareRenderPassForPSOCreation
          (FVulkanCommandListContext *this,FVulkanRenderTargetLayout *param_1)

{
  FVulkanRenderPass *pFVar1;
  
  pFVar1 = FVulkanRenderPassManager::GetOrCreateRenderPass
                     (*(FVulkanRenderPassManager **)(this->_padding_ + 0x708),param_1);
  return pFVar1;
}

// RHIBeginRenderPass @ 145b6fd90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBeginRenderPass
          (FVulkanCommandListContext *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  TStaticArray<TArray<FVulkanQueryPool_*,TSizedDefaultAllocator<32>_>,4,4294967295> *pTVar1;
  int *piVar2;
  uint uVar3;
  FRHITexture *pFVar4;
  FRHITexture *this_00;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  VkImageLayout VVar10;
  VkImageLayout VVar11;
  FVulkanPayload *pFVar12;
  FVulkanCommandBuffer *pFVar13;
  longlong lVar14;
  FVulkanRenderPass *pFVar15;
  FVulkanFramebuffer *pFVar16;
  Type TVar17;
  FRHIRenderPassInfo *pFVar18;
  longlong lVar19;
  Type TVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_988 [32];
  FVulkanQueryPool *local_930;
  uint local_928;
  FVulkanBeginRenderPassInfo local_920;
  FRHISetRenderTargetsInfo local_908;
  FVulkanRenderTargetLayout local_738;
  FVulkanDynamicRenderingInfo local_388;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_988;
  pFVar4 = (param_1->ColorRenderTargets).Elements[0].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[0].RenderTarget;
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = (param_1->ColorRenderTargets).Elements[1].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[0].ArraySlice;
  this->_padding_ = (longlong)pFVar4;
  lVar6 = *(longlong *)&(param_1->ColorRenderTargets).Elements[1].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[1].ResolveTarget;
  this->_padding_ = lVar6;
  pFVar4 = (param_1->ColorRenderTargets).Elements[2].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[2].RenderTarget;
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = (param_1->ColorRenderTargets).Elements[3].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[2].ArraySlice;
  this->_padding_ = (longlong)pFVar4;
  lVar6 = *(longlong *)&(param_1->ColorRenderTargets).Elements[3].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[3].ResolveTarget;
  this->_padding_ = lVar6;
  pFVar4 = (param_1->ColorRenderTargets).Elements[4].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[4].RenderTarget;
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = (param_1->ColorRenderTargets).Elements[5].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[4].ArraySlice;
  this->_padding_ = (longlong)pFVar4;
  lVar6 = *(longlong *)&(param_1->ColorRenderTargets).Elements[5].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[5].ResolveTarget;
  this->_padding_ = lVar6;
  pFVar4 = (param_1->ColorRenderTargets).Elements[6].ResolveTarget;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[6].RenderTarget;
  this->_padding_ = (longlong)pFVar4;
  pFVar4 = (param_1->ColorRenderTargets).Elements[7].RenderTarget;
  this->_padding_ = *(longlong *)&(param_1->ColorRenderTargets).Elements[6].ArraySlice;
  this->_padding_ = (longlong)pFVar4;
  lVar6 = *(longlong *)&(param_1->ColorRenderTargets).Elements[7].ArraySlice;
  this->_padding_ = (longlong)(param_1->ColorRenderTargets).Elements[7].ResolveTarget;
  this->_padding_ = lVar6;
  pFVar4 = (param_1->DepthStencilRenderTarget).ResolveTarget;
  this->_padding_ = (longlong)(param_1->DepthStencilRenderTarget).DepthStencilTarget;
  this->_padding_ = (longlong)pFVar4;
  this->_padding_ = *(longlong *)&(param_1->DepthStencilRenderTarget).Action;
  lVar6 = *(longlong *)&(param_1->ResolveRect).X2;
  this->_padding_ = *(longlong *)&param_1->ResolveRect;
  this->_padding_ = lVar6;
  pFVar4 = (param_1->ShadingRateTexture).Reference;
  this_00 = (FRHITexture *)this->_padding_;
  if (this_00 != pFVar4) {
    this->_padding_ = (longlong)pFVar4;
    if (pFVar4 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar4);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  *(EVRSRateCombiner *)&this->_padding_ = param_1->ShadingRateTextureCombiner;
  *(ERHIAccess *)((longlong)&this->_padding_ + 4) = param_1->NopAccess;
  *(uint *)&this->_padding_ = param_1->NumOcclusionQueries;
  *(bool *)((longlong)&this->_padding_ + 4) = param_1->bOcclusionQueries;
  *(uchar *)((longlong)&this->_padding_ + 5) = param_1->MultiViewCount;
  *(ESubpassHint *)((longlong)&this->_padding_ + 6) = param_1->SubpassHint;
  uVar3 = param_1->NumOcclusionQueries;
  if (uVar3 != 0) {
    uVar21 = (uint)param_1->MultiViewCount;
    if (param_1->MultiViewCount == 0) {
      uVar21 = 1;
    }
    pFVar12 = FVulkanContextCommon::GetPayload
                        ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18,
                         Execute);
    pTVar1 = &pFVar12->QueryPools;
    local_930 = FVulkanDevice::AcquireOcclusionQueryPool
                          (*(FVulkanDevice **)&this[-1].TypedDescriptorPoolSets.field_0x20,
                           uVar3 * uVar21);
    pFVar13 = FVulkanContextCommon::GetCommandBuffer
                        ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    FVulkanQueryPool::Reset(local_930,pFVar13,uVar21);
    pFVar5 = pTVar1->Elements[0].AllocatorInstance.Data;
    if (((pFVar5 <= (FScriptContainerElement *)&local_930) &&
        ((FScriptContainerElement *)&local_930 <
         pFVar5 + (longlong)(pFVar12->QueryPools).Elements[0].ArrayMax * 8)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar9 = (pFVar12->QueryPools).Elements[0].ArrayNum;
    piVar2 = &(pFVar12->QueryPools).Elements[0].ArrayMax;
    if (iVar9 == *piVar2) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,(ForAnyElementType *)pTVar1,piVar2);
    }
    (pFVar12->QueryPools).Elements[0].ArrayNum = iVar9 + 1;
    *(FVulkanQueryPool **)(pTVar1->Elements[0].AllocatorInstance.Data + (longlong)iVar9 * 8) =
         local_930;
  }
  AcquirePoolSetContainer((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18)
  ;
  lVar6 = this->_padding_;
  uVar22 = *(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0);
  if ((uVar22 >> 0x32 & 1) == 0) {
    pFVar4 = (param_1->DepthStencilRenderTarget).DepthStencilTarget;
    lVar19 = 0;
    VVar11 = VK_IMAGE_LAYOUT_UNDEFINED;
    VVar10 = VK_IMAGE_LAYOUT_UNDEFINED;
    if (pFVar4 != (FRHITexture *)0x0) {
      uVar22 = uVar22 & 0x2020100000000;
      lVar14 = (**(code **)(pFVar4->_padding_ + 0x48))();
      TVar20 = (param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
      local_928 = *(uint *)(lVar14 + 0x1e0);
      VVar10 = VK_IMAGE_LAYOUT_UNDEFINED;
      if ((local_928 & 2) != 0) {
        TVar17 = TVar20 & DepthMask;
        if (TVar17 == DepthWrite) {
          VVar10 = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
        }
        else if (TVar17 == DepthRead) {
          VVar10 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        }
        else {
          VVar10 = VK_IMAGE_LAYOUT_UNDEFINED;
          if (uVar22 != 0x2020100000000) {
            VVar10 = FVulkanPipelineBarrier::GetDepthOrStencilLayout
                               (*(ERHIAccess *)(lVar14 + 0x1b0));
          }
        }
      }
      VVar11 = VK_IMAGE_LAYOUT_UNDEFINED;
      if ((local_928 & 4) != 0) {
        TVar20 = TVar20 & StencilMask;
        if (TVar20 == DepthNop_StencilWrite) {
          VVar11 = VK_IMAGE_LAYOUT_ATTACHMENT_OPTIMAL;
        }
        else if (TVar20 == DepthNop_StencilRead) {
          VVar11 = VK_IMAGE_LAYOUT_READ_ONLY_OPTIMAL;
        }
        else {
          VVar11 = VK_IMAGE_LAYOUT_UNDEFINED;
          if (uVar22 != 0x2020100000000) {
            VVar11 = FVulkanPipelineBarrier::GetDepthOrStencilLayout
                               (*(ERHIAccess *)(lVar14 + 0x1b4));
          }
        }
      }
    }
    FVulkanRenderTargetLayout::FVulkanRenderTargetLayout
              (&local_738,*(FVulkanDevice **)&this[-1].TypedDescriptorPoolSets.field_0x20,param_1,
               VVar10,VVar11);
    if (((local_738.Extent.Extent3D.width == 0) || (local_738.Extent.Extent3D.height == 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("RTLayout.GetExtent2D().width != 0 && RTLayout.GetExtent2D().height != 0"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x288,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar15 = FVulkanRenderPassManager::GetOrCreateRenderPass
                        (*(FVulkanRenderPassManager **)
                          (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x708),
                         &local_738);
    FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(&local_908);
    FRHIRenderPassInfo::ConvertToRenderTargetsInfo(param_1,&local_908);
    pFVar16 = FVulkanRenderPassManager::GetOrCreateFramebuffer
                        (*(FVulkanRenderPassManager **)
                          (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x708),
                         &local_908,&local_738,pFVar15);
    pFVar18 = param_1;
    if ((pFVar15 == (FVulkanRenderPass *)0x0) || (pFVar16 == (FVulkanFramebuffer *)0x0)) {
      do {
        if ((pFVar18->ColorRenderTargets).Elements[0].RenderTarget == (FRHITexture *)0x0) break;
        lVar19 = lVar19 + 1;
        pFVar18 = (FRHIRenderPassInfo *)((pFVar18->ColorRenderTargets).Elements + 1);
      } while (lVar19 < 8);
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("RenderPass != nullptr && Framebuffer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                         ,0x28f,
                         L"RenderPass not started! Bad combination of values? Depth %p #Color %d Color0 %p"
                        );
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_920.RenderPass = pFVar15;
    local_920.Framebuffer = pFVar16;
    local_920.bIsParallelRenderPass = lVar6 != 0;
    FVulkanRenderPassManager::BeginRenderPass
              (*(FVulkanRenderPassManager **)
                (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x708),
               (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,param_1,
               &local_738,&local_920);
    if ((this->_padding_ != 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CurrentRenderPass",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x294,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this->_padding_ = (longlong)pFVar15;
    this->_padding_ = (longlong)pFVar16;
  }
  else {
    if (((this->_padding_ != 0) || (this->_padding_ != 0)) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("!CurrentRenderPass && !CurrentFramebuffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                           ,0x26e,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (lVar6 == 0) {
      FillDynamicRenderingInfo
                ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,param_1,
                 &local_388);
      pFVar13 = FVulkanContextCommon::GetCommandBuffer
                          ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
      FVulkanCommandBuffer::BeginDynamicRendering(pFVar13,&local_388.RenderingInfo);
    }
    else {
      if ((*(longlong *)(this->_padding_ + 8) == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("CurrentParallelRenderPassInfo->DynamicRenderingInfo",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                             ,0x273,L""), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar13 = FVulkanContextCommon::GetCommandBuffer
                          ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
      FVulkanCommandBuffer::BeginDynamicRendering
                (pFVar13,(VkRenderingInfo *)(*(longlong *)(this->_padding_ + 8) + 0x2f8));
      local_388.RenderingInfo.renderArea = *(VkRect2D *)(*(longlong *)(this->_padding_ + 8) + 0x30c)
      ;
    }
    FVulkanPendingGfxState::SetViewport
              ((FVulkanPendingGfxState *)this->_padding_,
               (float)local_388.RenderingInfo.renderArea.offset.x,
               (float)local_388.RenderingInfo.renderArea.offset.y,0.0,
               (float)((ulonglong)local_388.RenderingInfo.renderArea.extent & 0xffffffff),
               (float)((ulonglong)local_388.RenderingInfo.renderArea.extent >> 0x20),__real_3f800000
              );
  }
  return;
}

// RHIBeginRenderQuery @ 145b703f0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBeginRenderQuery
          (FVulkanCommandListContext *this,FRHIRenderQuery *param_1)

{
  undefined1 *this_00;
  uint uVar1;
  VkQueryPool_T *pVVar2;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint_uint *UNRECOVERED_JUMPTABLE;
  FVulkanQueryPool *this_01;
  FVulkanCommandBuffer *pFVar3;
  undefined1 local_res10 [8];
  
  if (*(int *)(param_1 + 1) == 1) {
    this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
    this_01 = GetCurrentOcclusionQueryPool((FVulkanCommandListContext *)this_00);
    FVulkanQueryPool::ReserveQuery(this_01,(FVulkanRenderQuery *)param_1);
    UNRECOVERED_JUMPTABLE = VulkanDynamicAPI::vkCmdBeginQuery;
    uVar1 = *(uint *)&param_1[1].field_0x10;
    pVVar2 = this_01->QueryPool;
    pFVar3 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
                    /* WARNING: Could not recover jumptable at 0x000145b7046a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(pFVar3->CommandBufferHandle,pVVar2,uVar1,1);
    return;
  }
  if (*(int *)(param_1 + 1) == 2) {
    `FVulkanCommandListContext::RHIBeginRenderQuery'::__l9::<lambda_1>::operator()(local_res10);
    return;
  }
  return;
}

// RHIBindAccelerationStructureMemory @ 145b70570

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBindAccelerationStructureMemory
          (FVulkanCommandListContext *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,
          uint param_3)

{
  FVulkanRayTracingScene::BindBuffer((FVulkanRayTracingScene *)param_1,param_2,param_3);
  return;
}

// RHIBuildAccelerationStructures @ 145b70590

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145b71562) */
/* WARNING: Removing unreachable block (ram,0x000145b71568) */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkAccelerationStructureTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkGeometryTypeKHR": Some values do not have unique names */
/* WARNING: Enum "VkIndexType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBuildAccelerationStructures
          (FVulkanCommandListContext *this,
          TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,FRHIBufferRange *param_2)

{
  VkAccelerationStructureBuildGeometryInfoKHR *pVVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  ERayTracingGeometryType EVar6;
  FRayTracingGeometrySegment *pFVar7;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FVulkanRayTracingGeometry *this_02;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR> FVar8;
  code *pcVar9;
  void *pvVar10;
  undefined8 uVar11;
  VkAccelerationStructureGeometryKHR *pVVar12;
  VkDeviceOrHostAddressKHR VVar13;
  bool bVar14;
  uint uVar15;
  ERayTracingAccelerationStructureFlags EVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedBLAS> FVar18;
  FThreadStats *pFVar19;
  FThreadStatsPool *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltBLAS> FVar21;
  longlong *plVar22;
  VkAccelerationStructureKHR_T *pVVar23;
  ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> FVar24;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> FVar25;
  FVulkanCommandBuffer *pFVar26;
  int iVar27;
  longlong lVar28;
  ForElementType<FVkRtBLASBuildData> FVar29;
  uint uVar30;
  ERayTracingAccelerationStructureFlags EVar31;
  ulonglong uVar32;
  FName FVar33;
  ulonglong uVar34;
  FVkRtBLASBuildData *pFVar35;
  FRayTracingGeometryBuildParams *pFVar36;
  uint uVar37;
  FRayTracingGeometryBuildParams *pFVar38;
  TArrayView<FRayTracingGeometrySegment_const_,int> *pTVar39;
  longlong lVar40;
  undefined1 auStackY_2db8 [32];
  uint local_2d48;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR> local_2d40;
  FName local_2d38;
  FName local_2d30;
  EAccelerationStructureBuildMode local_2d28;
  EAccelerationStructureBuildMode local_2d24;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> *local_2d20;
  FVulkanCommandListContext *local_2d18;
  FName local_2d10;
  FName local_2d08;
  FRHIResource *local_2d00;
  longlong local_2cf8;
  longlong local_2cf0;
  FRayTracingGeometryBuildParams *local_2ce8;
  FStatMessage local_2ce0;
  FStatMessage local_2cd0;
  VkMemoryBarrier local_2cc0;
  FRayTracingGeometrySegment *local_2ca8;
  int iStack_2ca0;
  undefined4 uStack_2c9c;
  FName local_2c98;
  FName local_2c90;
  TArrayView<FRayTracingGeometrySegment_const_,int> local_2c88;
  ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*> local_2c78;
  int local_2b70;
  int local_2b6c;
  ForElementType<VkAccelerationStructureBuildGeometryInfoKHR> local_2b68;
  int local_2160;
  int local_215c;
  ForElementType<FVkRtBLASBuildData> local_2158;
  int local_50;
  int local_4c;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x145b705ae;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2db8;
  local_2d38 = (FName)param_2;
  local_2d20 = param_1;
  local_2d18 = this;
  if ((param_2->Buffer == (FRHIBuffer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScratchBufferRange.Buffer != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x48e,L"BuildAccelerationStructures requires valid scratch buffer"),
     bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar33 = (FName)param_1->DataPtr;
  local_2d30 = (FName)((longlong)param_1->ArrayNum * 0x20 + (longlong)FVar33);
  if (FVar33 != local_2d30) {
    pTVar39 = (TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar33 + 0x10);
    do {
      lVar28 = *(longlong *)FVar33;
      if (*(int *)((longlong)FVar33 + 0x18) != 0) {
        if ((*(int *)((longlong)FVar33 + 0x18) != *(int *)(lVar28 + 0x108)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("P.Segments.Num() == Geometry->Initializer.Segments.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                ,0x498,
                                L"If updated segments are provided, they must exactly match existing geometry segments. Only vertex buffer bindings may change."
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar27 = *(int *)((longlong)FVar33 + 0x18);
        uVar30 = 0;
        if (0 < iVar27) {
          lVar40 = 0;
          do {
            uVar37 = ~uVar30 >> 0x1f;
            uVar15 = 0;
            if ((int)uVar30 < iVar27) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if ((*(longlong *)((longlong)&(pTVar39->DataPtr->VertexBuffer).Reference + lVar40) == 0)
               && (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                      ("P.Segments[i].VertexBuffer != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                       ,0x49c,
                                       L"Segments used to build/update ray tracing geometry must have a valid VertexBuffer."
                                      ), bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar15 = 0;
            if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = ((TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar33 + 0x10)
                     )->DataPtr;
            uVar15 = 0;
            if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            if (*(uint *)(lVar40 + 0x14 + *(longlong *)(lVar28 + 0x100)) <
                *(uint *)((longlong)&pFVar7->MaxVertices + lVar40)) {
              uVar15 = 0;
              if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
                uVar15 = uVar37;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              uVar15 = 0;
              if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
                uVar15 = uVar37;
              }
              if ((uVar15 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar14)) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("P.Segments[i].MaxVertices <= Geometry->Initializer.Segments[i].MaxVertices"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                                  ,0x4a1,
                                  L"Maximum number of vertices in a segment (%u) must not be smaller than what was declared during FRHIRayTracingGeometry creation (%u), as this controls BLAS memory allocation."
                                 );
              if (bVar14) {
                pcVar9 = (code *)swi(3);
                (*pcVar9)();
                return;
              }
            }
            uVar15 = 0;
            if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            pFVar7 = ((TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar33 + 0x10)
                     )->DataPtr;
            uVar15 = 0;
            if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            this_00 = *(FRHIResource **)((longlong)&(pFVar7->VertexBuffer).Reference + lVar40);
            this_01 = *(FRHIResource **)(lVar40 + *(longlong *)(lVar28 + 0x100));
            if (this_01 != this_00) {
              *(FRHIResource **)(lVar40 + *(longlong *)(lVar28 + 0x100)) = this_00;
              if (this_00 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(this_00);
              }
              if (this_01 != (FRHIResource *)0x0) {
                FRHIResource::Release(this_01);
              }
            }
            uVar15 = 0;
            if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar5 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar33 + 0x10))->DataPtr->VertexBufferElementType + lVar40);
            uVar15 = 0;
            if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)(lVar40 + 8 + *(longlong *)(lVar28 + 0x100)) = uVar5;
            uVar15 = 0;
            if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar5 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar33 + 0x10))->DataPtr->VertexBufferStride + lVar40);
            uVar15 = 0;
            if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            *(undefined4 *)(lVar40 + 0x10 + *(longlong *)(lVar28 + 0x100)) = uVar5;
            uVar15 = 0;
            if ((int)uVar30 < *(int *)((longlong)FVar33 + 0x18)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar5 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar33 + 0x10))->DataPtr->VertexBufferOffset + lVar40);
            uVar15 = 0;
            if ((int)uVar30 < *(int *)(lVar28 + 0x108)) {
              uVar15 = uVar37;
            }
            if ((uVar15 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
            uVar30 = uVar30 + 1;
            *(undefined4 *)(lVar40 + 0xc + *(longlong *)(lVar28 + 0x100)) = uVar5;
            lVar40 = lVar40 + 0x28;
            iVar27 = *(int *)((longlong)FVar33 + 0x18);
          } while ((int)uVar30 < iVar27);
        }
      }
      pTVar39 = pTVar39 + 2;
      FVar33 = (FName)((longlong)FVar33 + 0x20);
      param_2 = (FRHIBufferRange *)local_2d38;
      param_1 = local_2d20;
    } while (FVar33 != local_2d30);
  }
  if (*(ulong64 *)((longlong)param_2 + 0x10) == 0) {
    uVar34 = (ulonglong)*(uint *)(*(longlong *)param_2 + 0xd8);
  }
  else {
    uVar34 = *(ulong64 *)((longlong)param_2 + 0x10) & 0xffffffff;
  }
  if (((ulonglong)*(uint *)(*(longlong *)param_2 + 0xd8) <
       uVar34 + *(ulong64 *)((longlong)param_2 + 8)) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScratchBufferSize + ScratchBufferRange.Offset <= ScratchBufferRange.Buffer->GetSize()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                          ,0x4af,
                          L"BLAS scratch buffer range size is %lld bytes with offset %lld, but the buffer only has %lld bytes. "
                         ), bVar14)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2cf8 = *(longlong *)param_2;
  local_2d48 = *(uint *)((longlong)param_2 + 8);
  uVar30 = param_1->ArrayNum;
  local_4c = 0x20;
  local_215c = 0x20;
  local_2b6c = 0x20;
  local_2158.SecondaryData = (ForElementType<FVkRtBLASBuildData>)0x0;
  local_50 = 0;
  local_2b68.SecondaryData = (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0;
  local_2160 = 0;
  local_2c78.SecondaryData = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0;
  local_2b70 = 0;
  if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
  }
  if ((0x20 < (int)uVar30) &&
     (UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_>
                (0x108,8,uVar30,&local_2158,0,&local_4c), local_215c < (int)uVar30)) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_>
              (0x50,8,uVar30,&local_2b68,local_2160,&local_215c);
  }
  if (local_2b6c < (int)uVar30) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_>
              (8,8,uVar30,&local_2c78,local_2b70,&local_2b6c);
  }
  pFVar38 = param_1->DataPtr;
  local_2ce8 = pFVar38 + (int)uVar30;
  if (pFVar38 != local_2ce8) {
    do {
      local_2d24 = pFVar38->BuildMode;
      this_02 = (FVulkanRayTracingGeometry *)(pFVar38->Geometry).Reference;
      if (local_2d24 == Update) {
        if (FThreadStats::bPrimaryEnable != false) {
          FVar18 = StatPtr_STAT_VulkanRayTracingUpdatedBLAS;
          if (StatPtr_STAT_VulkanRayTracingUpdatedBLAS ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedBLAS>)0x0) {
            pFVar17 = ::FName::FName(&local_2c98,"STAT_VulkanRayTracingUpdatedBLAS");
            FVar18 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingUpdatedBLAS>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)
                                &StatPtr_STAT_VulkanRayTracingUpdatedBLAS,*pFVar17,
                                L"Updated BL AS (per frame)","STATGROUP_VulkanRayTracing",
                                "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,true,ST_int64,false,
                                false,MCR_Invalid);
          }
          FVar33 = *(FName *)FVar18;
          local_2d38 = FVar33;
          if (((FVar33 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar19 == (FThreadStats *)0x0) {
              pFVar20 = FThreadStatsPool::Get();
              pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
            }
            local_2ce0.NameAndInfo.Number = FVar33.Number & 0xffffafff | 0xa000;
            local_2ce0.StatData.Pad[0] = '\x01';
            local_2ce0.StatData.Pad[1] = '\0';
            local_2ce0.StatData.Pad[2] = '\0';
            local_2ce0.StatData.Pad[3] = '\0';
            local_2ce0.StatData.Pad[4] = '\0';
            local_2ce0.StatData.Pad[5] = '\0';
            local_2ce0.StatData.Pad[6] = '\0';
            local_2ce0.StatData.Pad[7] = '\0';
            local_2d10 = FVar33;
            local_2ce0.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar19,&local_2ce0);
            FStatsTrace::Add(&local_2d10,1);
            if (pFVar19->ScopeCount == 0) {
              FThreadStats::Flush(pFVar19,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar19,false,false);
            }
          }
        }
        plVar22 = &this_02->_padding_;
      }
      else {
        if (FThreadStats::bPrimaryEnable != false) {
          FVar21 = StatPtr_STAT_VulkanRayTracingBuiltBLAS;
          if (StatPtr_STAT_VulkanRayTracingBuiltBLAS ==
              (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltBLAS>)0x0) {
            pFVar17 = ::FName::FName(&local_2c90,"STAT_VulkanRayTracingBuiltBLAS");
            FVar21 = (FThreadSafeStaticStat<FStat_STAT_VulkanRayTracingBuiltBLAS>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_VulkanRayTracingBuiltBLAS
                                ,*pFVar17,L"Built BL AS (per frame)","STATGROUP_VulkanRayTracing",
                                "STATCAT_Advanced",L"Vulkan: Ray Tracing",true,true,ST_int64,false,
                                false,MCR_Invalid);
          }
          FVar33 = *(FName *)FVar21;
          local_2d30 = FVar33;
          if (((FVar33 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar19 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar19 == (FThreadStats *)0x0) {
              pFVar20 = FThreadStatsPool::Get();
              pFVar19 = FThreadStatsPool::GetFromPool(pFVar20);
            }
            local_2cd0.NameAndInfo.Number = FVar33.Number & 0xffffafff | 0xa000;
            local_2cd0.StatData.Pad[0] = '\x01';
            local_2cd0.StatData.Pad[1] = '\0';
            local_2cd0.StatData.Pad[2] = '\0';
            local_2cd0.StatData.Pad[3] = '\0';
            local_2cd0.StatData.Pad[4] = '\0';
            local_2cd0.StatData.Pad[5] = '\0';
            local_2cd0.StatData.Pad[6] = '\0';
            local_2cd0.StatData.Pad[7] = '\0';
            local_2d08 = FVar33;
            local_2cd0.NameAndInfo.Index.Value = FVar33.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar19,&local_2cd0);
            FStatsTrace::Add(&local_2d08,1);
            if (pFVar19->ScopeCount == 0) {
              FThreadStats::Flush(pFVar19,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar19,false,false);
            }
          }
        }
        plVar22 = &this_02->_padding_;
      }
      local_2cf0 = *plVar22;
      if ((uVar34 < (ulonglong)local_2d48 + local_2cf0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScratchBufferRequiredSize + ScratchBufferOffset <= ScratchBufferSize"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                              ,0x4cd,
                              L"BLAS scratch buffer size is %ld bytes with offset %ld (%ld bytes available), but the build requires %lld bytes. "
                             ), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<FVkRtBLASBuildData>_>
                             (0x108,8,&local_2158,&local_4c);
      }
      lVar28 = (longlong)local_50;
      local_50 = local_50 + 1;
      FVar29 = (ForElementType<FVkRtBLASBuildData>)&local_2158;
      if (local_2158.SecondaryData != (ForElementType<FVkRtBLASBuildData>)0x0) {
        FVar29 = local_2158.SecondaryData;
      }
      pFVar35 = (FVkRtBLASBuildData *)(lVar28 * 0x108 + (longlong)FVar29);
      DefaultConstructItems<FVkRtBLASBuildData,int>(pFVar35,1);
      cVar3 = *(undefined1 *)((longlong)&this_02->_padding_ + 4);
      local_2d28 = pFVar38->BuildMode;
      cVar4 = *(undefined1 *)((longlong)&this_02->_padding_ + 5);
      EVar16 = FastBuild;
      if (cVar3 == '\0') {
        EVar16 = FastTrace;
      }
      EVar31 = EVar16 | AllowUpdate;
      if (cVar4 == '\0') {
        EVar31 = EVar16;
      }
      if ((((cVar3 == '\0') && (cVar4 == '\0')) &&
          (*(undefined1 *)((longlong)&this_02->_padding_ + 6) != '\0')) &&
         ((GVulkanRayTracingAllowCompaction != 0 &&
          ((uint)GVulkanRayTracingCompactionMinPrimitiveCount < (uint)this_02->_padding_)))) {
        EVar31 = EVar31 | AllowCompaction;
      }
      local_2d00 = (FRHIResource *)this_02->_padding_;
      lVar28 = this_02->_padding_;
      if (local_2d00 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(local_2d00);
      }
      iVar27 = (int)this_02->_padding_;
      EVar6 = *(ERayTracingGeometryType *)((longlong)&this_02->_padding_ + 4);
      pFVar7 = (FRayTracingGeometrySegment *)this_02->_padding_;
      if ((iVar27 < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2c88._12_4_ = uStack_2c9c;
      local_2c88.ArrayNum = iVar27;
      local_2ca8 = pFVar7;
      iStack_2ca0 = iVar27;
      local_2c88.DataPtr = pFVar7;
      GetBLASBuildData(*(VkDevice_T **)
                        (*(longlong *)&local_2d18[-1].TypedDescriptorPoolSets.field_0x20 + 0x30),
                       &local_2c88,EVar6,(FRHIBuffer *)&local_2d00,(uint)lVar28,EVar31,local_2d28,
                       Rendering,pFVar35);
      if (((ulonglong)(uint)((this_02->AccelerationStructureBuffer).Reference)->_padding_ <
           (pFVar35->SizesInfo).accelerationStructureSize) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("BuildData.SizesInfo.accelerationStructureSize <= Geometry->AccelerationStructureBuffer->GetSize()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                              ,0x4db,L""), bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (pFVar35->GeometryInfo).dstAccelerationStructure = this_02->Handle;
      if (local_2d24 == Update) {
        pVVar23 = this_02->Handle;
      }
      else {
        pVVar23 = (VkAccelerationStructureKHR_T *)0x0;
      }
      (pFVar35->GeometryInfo).srcAccelerationStructure = pVVar23;
      uVar32 = (ulonglong)local_2d48;
      local_2d48 = local_2d48 + (int)local_2cf0;
      uVar32 = uVar32 + *(longlong *)(local_2cf8 + 0x130);
      if ((uVar32 % (ulonglong)GRHIGlobals.RayTracing.ScratchBufferAlignment != 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("ScratchBufferAddress % GRHIGlobals.RayTracing.ScratchBufferAlignment == 0"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                              ,0x4e5,
                              L"BLAS scratch buffer (plus offset) must be aligned to %ld bytes."),
         bVar14)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (pFVar35->GeometryInfo).scratchData.deviceAddress = uVar32;
      FVar8 = (pFVar35->Ranges).AllocatorInstance.SecondaryData;
      pVVar1 = &pFVar35->GeometryInfo;
      local_2d40 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)&pFVar35->Ranges;
      if (FVar8 != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR>)0x0) {
        local_2d40 = FVar8;
      }
      FVar24 = (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)&local_2b68;
      if (local_2b68.SecondaryData !=
          (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0) {
        FVar24 = local_2b68.SecondaryData;
      }
      if ((ulonglong)FVar24 <= pVVar1) {
        FVar24 = (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)&local_2b68;
        if (local_2b68.SecondaryData !=
            (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0) {
          FVar24 = local_2b68.SecondaryData;
        }
        if ((pVVar1 < (undefined1 *)((longlong)local_215c * 0x50 + (longlong)FVar24)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_2160 == local_215c) {
        local_2160 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>_>
                               (0x850,&local_2b68,&local_215c);
      }
      pvVar10 = (pFVar35->GeometryInfo).pNext;
      FVar24 = (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)&local_2b68;
      if (local_2b68.SecondaryData !=
          (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0) {
        FVar24 = local_2b68.SecondaryData;
      }
      lVar28 = (longlong)local_2160;
      puVar2 = (undefined8 *)((longlong)FVar24 + lVar28 * 0x50);
      local_2160 = local_2160 + 1;
      *puVar2 = *(undefined8 *)pVVar1;
      puVar2[1] = pvVar10;
      uVar11 = *(undefined8 *)&(pFVar35->GeometryInfo).mode;
      *(undefined8 *)((uchar *)((longlong)FVar24 + 0x10) + lVar28 * 0x50) =
           *(undefined8 *)&(pFVar35->GeometryInfo).type;
      *(undefined8 *)((uchar *)((longlong)FVar24 + 0x10) + lVar28 * 0x50 + 8) = uVar11;
      pVVar23 = (pFVar35->GeometryInfo).dstAccelerationStructure;
      *(VkAccelerationStructureKHR_T **)((uchar *)((longlong)FVar24 + 0x20) + lVar28 * 0x50) =
           (pFVar35->GeometryInfo).srcAccelerationStructure;
      *(VkAccelerationStructureKHR_T **)((uchar *)((longlong)FVar24 + 0x20) + lVar28 * 0x50 + 8) =
           pVVar23;
      pVVar12 = (pFVar35->GeometryInfo).pGeometries;
      *(undefined8 *)((uchar *)((longlong)FVar24 + 0x30) + lVar28 * 0x50) =
           *(undefined8 *)&(pFVar35->GeometryInfo).geometryCount;
      *(VkAccelerationStructureGeometryKHR **)
       ((uchar *)((longlong)FVar24 + 0x30) + lVar28 * 0x50 + 8) = pVVar12;
      VVar13 = (pFVar35->GeometryInfo).scratchData;
      *(VkAccelerationStructureGeometryKHR ***)((uchar *)((longlong)FVar24 + 0x40) + lVar28 * 0x50)
           = (pFVar35->GeometryInfo).ppGeometries;
      *(VkDeviceOrHostAddressKHR *)((uchar *)((longlong)FVar24 + 0x40) + lVar28 * 0x50 + 8) = VVar13
      ;
      FVar25 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)&local_2c78;
      if (local_2c78.SecondaryData !=
          (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
        FVar25 = local_2c78.SecondaryData;
      }
      if ((ulonglong)FVar25 <= &local_2d40) {
        FVar25 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)&local_2c78;
        if (local_2c78.SecondaryData !=
            (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
          FVar25 = local_2c78.SecondaryData;
        }
        if ((&local_2d40 <
             (ForElementType<VkAccelerationStructureBuildRangeInfoKHR> *)
             ((longlong)FVar25 + (longlong)local_2b6c * 8)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      if (local_2b70 == local_2b6c) {
        local_2b70 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>_>
                               (0x808,&local_2c78,&local_2b6c);
      }
      lVar28 = (longlong)local_2b70;
      FVar25 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)&local_2c78;
      if (local_2c78.SecondaryData !=
          (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
        FVar25 = local_2c78.SecondaryData;
      }
      local_2b70 = local_2b70 + 1;
      *(ForElementType<VkAccelerationStructureBuildRangeInfoKHR> *)((longlong)FVar25 + lVar28 * 8) =
           local_2d40;
      FVulkanRayTracingGeometry::SetupHitGroupSystemParameters(this_02);
      pFVar38 = pFVar38 + 1;
      param_1 = local_2d20;
    } while (pFVar38 != local_2ce8);
  }
  pFVar26 = FVulkanContextCommon::GetCommandBuffer
                      ((FVulkanContextCommon *)&local_2d18[-1].TypedDescriptorPoolSets.field_0x18);
  uVar30 = param_1->ArrayNum;
  FVar25 = (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)&local_2c78;
  if (local_2c78.SecondaryData != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
    FVar25 = local_2c78.SecondaryData;
  }
  FVar24 = (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)&local_2b68;
  if (local_2b68.SecondaryData != (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0)
  {
    FVar24 = local_2b68.SecondaryData;
  }
  (*VulkanDynamicAPI::vkCmdBuildAccelerationStructuresKHR)
            (pFVar26->CommandBufferHandle,uVar30,
             (VkAccelerationStructureBuildGeometryInfoKHR *)FVar24,
             (VkAccelerationStructureBuildRangeInfoKHR **)FVar25);
  local_2cc0._4_8_ = 0;
  local_2cc0.pNext._4_4_ = 0;
  local_2cc0.srcAccessMask = 0x400000;
  local_2cc0.dstAccessMask = 0x600000;
  local_2cc0.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar26->CommandBufferHandle,0x2000800,0x2000800,0,1,&local_2cc0,0,
             (VkBufferMemoryBarrier *)0x0,0,(VkImageMemoryBarrier *)0x0);
  pFVar38 = param_1->DataPtr;
  pFVar36 = pFVar38 + (int)uVar30;
  for (; pFVar38 != pFVar36; pFVar38 = pFVar38 + 1) {
  }
  if (local_2c78.SecondaryData != (ForElementType<VkAccelerationStructureBuildRangeInfoKHR_*>)0x0) {
    FMemory::Free((void *)local_2c78.SecondaryData);
  }
  if (local_2b68.SecondaryData != (ForElementType<VkAccelerationStructureBuildGeometryInfoKHR>)0x0)
  {
    FMemory::Free((void *)local_2b68.SecondaryData);
  }
  FVar29 = (ForElementType<FVkRtBLASBuildData>)&local_2158;
  if (local_2158.SecondaryData != (ForElementType<FVkRtBLASBuildData>)0x0) {
    FVar29 = local_2158.SecondaryData;
  }
  DestructItems<FVkRtBLASBuildData,int>((FVkRtBLASBuildData *)FVar29,local_50);
  if (local_2158.SecondaryData != (ForElementType<FVkRtBLASBuildData>)0x0) {
    FMemory::Free((void *)local_2158.SecondaryData);
  }
  return;
}

// RHIBuildAccelerationStructures @ 145b71620

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBuildAccelerationStructures
          (FVulkanCommandListContext *this,
          TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<FRHIRayTracingGeometry>,TSizedDefaultAllocator<32>_> *pTVar2;
  FRHIRayTracingGeometry **ppFVar3;
  uint uVar4;
  FVulkanBuffer *pFVar5;
  FVulkanRayTracingScene *pFVar6;
  FVulkanBuffer *pFVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  FRHIRayTracingGeometry **ppFVar12;
  FRayTracingSceneBuildParams *pFVar13;
  FRayTracingSceneBuildParams *pFVar14;
  FRHIRayTracingGeometry *local_48 [2];
  
  pFVar14 = param_1->DataPtr;
  pFVar13 = pFVar14 + param_1->ArrayNum;
  while( true ) {
    if (pFVar14 == pFVar13) {
      return;
    }
    pFVar5 = (FVulkanBuffer *)pFVar14->ScratchBuffer;
    pFVar6 = (FVulkanRayTracingScene *)pFVar14->Scene;
    uVar4 = (pFVar14->ReferencedGeometries).ArrayNum;
    pFVar7 = (FVulkanBuffer *)pFVar14->InstanceBuffer;
    pTVar2 = &pFVar6->ReferencedGeometries;
    if ((int)uVar4 < 0) break;
    piVar1 = &(pFVar6->ReferencedGeometries).ArrayMax;
    if ((pFVar6->ReferencedGeometries).ArrayMax < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar4,&pTVar2->AllocatorInstance,(pFVar6->ReferencedGeometries).ArrayNum,piVar1
                );
    }
    ppFVar12 = (pFVar14->ReferencedGeometries).DataPtr;
    ppFVar3 = ppFVar12 + (pFVar14->ReferencedGeometries).ArrayNum;
    for (; ppFVar12 != ppFVar3; ppFVar12 = ppFVar12 + 1) {
      local_48[0] = *ppFVar12;
      if (local_48[0] != (FRHIRayTracingGeometry *)0x0) {
        FRHIResource::AddRef((FRHIResource *)local_48[0]);
      }
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar8 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar8 + (longlong)*piVar1 * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      iVar11 = (pFVar6->ReferencedGeometries).ArrayNum;
      if (iVar11 == *piVar1) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar2->AllocatorInstance,piVar1);
        (pFVar6->ReferencedGeometries).ArrayNum = iVar11;
      }
      (pFVar6->ReferencedGeometries).ArrayNum = iVar11 + 1;
      pFVar8 = (pTVar2->AllocatorInstance).Data;
      *(undefined8 *)(pFVar8 + (longlong)iVar11 * 8) = 0;
      *(FRHIRayTracingGeometry **)(pFVar8 + (longlong)iVar11 * 8) = local_48[0];
    }
    BuildAccelerationStructure
              ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,pFVar6,
               pFVar5,pFVar14->ScratchBufferOffset,pFVar7,pFVar14->InstanceBufferOffset,
               pFVar14->NumInstances,pFVar14->BuildMode);
    pFVar14 = pFVar14 + 1;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// RHIClearShaderBindingTable @ 145b71b50

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIClearShaderBindingTable
          (FVulkanCommandListContext *this,FRHIShaderBindingTable *param_1)

{
  FVulkanRayTracingShaderTable::ReleaseLocalBuffer
            ((FVulkanDevice *)param_1[1]._padding_,
             (FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  FVulkanRayTracingShaderTable::ReleaseLocalBuffer
            ((FVulkanDevice *)param_1[1]._padding_,
             (FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  FVulkanRayTracingShaderTable::ReleaseLocalBuffer
            ((FVulkanDevice *)param_1[1]._padding_,
             (FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  return;
}

// RHICommitShaderBindingTable @ 145b71ba0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHICommitShaderBindingTable
          (FVulkanCommandListContext *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  undefined1 *this_00;
  FVulkanCommandBuffer *pFVar1;
  longlong local_48;
  undefined1 *local_40;
  VkMemoryBarrier local_38;
  VkMemoryBarrier local_20;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  pFVar1 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  local_38.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_38.pNext = (void *)0x0;
  local_38.srcAccessMask = 0x18000;
  local_38.dstAccessMask = 0x1800;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar1->CommandBufferHandle,0x2000,0x1000,0,1,&local_38,0,(VkBufferMemoryBarrier *)0x0,
             0,(VkImageMemoryBarrier *)0x0);
  local_48 = param_1[1]._padding_;
  local_40 = this_00;
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()
            (&local_48,(FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()
            (&local_48,(FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  `FVulkanRayTracingShaderTable::Commit'::__l2::<lambda_1>::operator()
            (&local_48,(FVulkanShaderTableAllocation *)&param_1[1]._padding_);
  local_20.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
  local_20.pNext = (void *)0x0;
  local_20.srcAccessMask = 0x1000;
  local_20.dstAccessMask = 0x8000;
  (*VulkanDynamicAPI::vkCmdPipelineBarrier)
            (pFVar1->CommandBufferHandle,0x1000,0x200000,0,1,&local_20,0,
             (VkBufferMemoryBarrier *)0x0,0,(VkImageMemoryBarrier *)0x0);
  return;
}

// RHIEndRenderPass @ 145b74190

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::RHIEndRenderPass(FVulkanCommandListContext *this)

{
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  TConsoleVariableData<int> *pTVar3;
  bool bVar4;
  FVulkanCommandBuffer *pFVar5;
  longlong lVar6;
  undefined1 *this_00;
  VkMemoryBarrier local_28;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x4000000000000) != 0) {
    pFVar5 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    FVulkanCommandBuffer::EndDynamicRendering(pFVar5);
    return;
  }
  pFVar5 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  FVulkanCommandBuffer::EndRenderPass(pFVar5);
  pTVar3 = CVarVulkanDebugBarrier.Ref;
  pVVar1 = pFVar5->CommandBufferHandle;
  bVar4 = IsInParallelGameThread();
  if (!bVar4) {
    bVar4 = IsInGameThread();
    lVar6 = 4;
    if (!bVar4) goto LAB_145b74218;
  }
  lVar6 = 0;
LAB_145b74218:
  if ((*(byte *)((longlong)pTVar3->ShadowedValue + lVar6) & 1) != 0) {
    local_28._4_8_ = 0;
    local_28.pNext._4_4_ = 0;
    local_28.srcAccessMask = 0x1e07fff;
    local_28.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_28.dstAccessMask = 0x1e07fff;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x10000,0x10000,0,1,&local_28,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRenderPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                       ,0x2a4,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this->_padding_ = 0;
  return;
}

// RHIEndRenderQuery @ 145b742e0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIEndRenderQuery
          (FVulkanCommandListContext *this,FRHIRenderQuery *param_1)

{
  uint uVar1;
  VkQueryPool_T *pVVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkQueryPool_T_ptr_uint *p_Var4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *p_Var5;
  bool bVar6;
  FVulkanQueryPool *pFVar7;
  FVulkanCommandBuffer *pFVar8;
  FVulkanPayload *pFVar9;
  VkPipelineStageFlagBits VVar10;
  undefined1 *this_00;
  
  if (*(longlong *)(param_1 + 2) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Query->SyncPoint.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanQuery.cpp"
                       ,0x152,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(int *)(param_1 + 1) == 1) {
    pFVar7 = GetCurrentOcclusionQueryPool
                       ((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    p_Var4 = VulkanDynamicAPI::vkCmdEndQuery;
    uVar1 = *(uint *)&param_1[1].field_0x10;
    pVVar2 = pFVar7->QueryPool;
    pFVar8 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    (*p_Var4)(pFVar8->CommandBufferHandle,pVVar2,uVar1);
  }
  else if (*(int *)(param_1 + 1) == 2) {
    this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
    pFVar9 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)this_00,Execute);
    pFVar7 = FVulkanContextCommon::GetCurrentTimestampQueryPool
                       ((FVulkanContextCommon *)this_00,pFVar9);
    FVulkanQueryPool::ReserveQuery(pFVar7,(FVulkanRenderQuery *)param_1);
    p_Var5 = VulkanDynamicAPI::vkCmdWriteTimestamp;
    uVar1 = *(uint *)&param_1[1].field_0x10;
    pVVar2 = pFVar7->QueryPool;
    VVar10 = VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT;
    if (GTimestampQueryStage != 0) {
      VVar10 = VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT;
    }
    pFVar8 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    (*p_Var5)(pFVar8->CommandBufferHandle,VVar10,pVVar2,uVar1);
  }
  return;
}

// RHINextSubpass @ 145b74b60

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkSubpassContents": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::RHINextSubpass(FVulkanCommandListContext *this)

{
  undefined1 *this_00;
  code *pcVar1;
  _func___cdecl_void_VkCommandBuffer_T_ptr_uint_uint_uint_uint_VkMemoryBarrier_ptr_uint_VkBufferMemoryBarrier_ptr_uint_VkImageMemoryBarrier_ptr
  *p_Var2;
  bool bVar3;
  FVulkanCommandBuffer *pFVar4;
  VkMemoryBarrier local_28;
  
  p_Var2 = VulkanDynamicAPI::vkCmdPipelineBarrier;
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if ((*(ulonglong *)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x21e0) &
      0x4000000000000) != 0) {
    local_28.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_28.pNext = (void *)0x0;
    local_28.srcAccessMask = 0x40;
    local_28.dstAccessMask = 0x20;
    pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    (*p_Var2)(pFVar4->CommandBufferHandle,0x80,0x80,1,1,&local_28,0,(VkBufferMemoryBarrier *)0x0,0,
              (VkImageMemoryBarrier *)0x0);
    return;
  }
  if (this->_padding_ == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentRenderPass",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRenderTarget.cpp"
                       ,0x2b5,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
                    /* WARNING: Could not recover jumptable at 0x000145b74c53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VulkanDynamicAPI::vkCmdNextSubpass)(pFVar4->CommandBufferHandle,VK_SUBPASS_CONTENTS_INLINE);
  return;
}

// RHIRayTraceDispatch @ 145b74c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIRayTraceDispatch
          (FVulkanCommandListContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_uint_uint_uint
  *p_Var4;
  bool bVar5;
  uint uVar6;
  FVulkanCommandBuffer *pFVar7;
  ShaderData *pSVar8;
  FVulkanShaderTableAllocation *pFVar9;
  FVulkanShaderTableAllocation *pFVar10;
  FVulkanShaderTableAllocation *pFVar11;
  undefined1 auStackY_c8 [32];
  undefined4 uStack_7c;
  TArrayView<unsigned_char_const_,int> local_78;
  VkStridedDeviceAddressRegionKHR local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  *(uint *)&param_1[3].field_0x4 = GFrameNumberRenderThread;
  pFVar7 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  if (*(char *)(param_1 + 3) != '\0') {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Pipeline->IsPartialPipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x7be,
                       L"Attempting to bind partial pipeline, these can\'t be used for rendering.");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdBindPipeline)
            (pFVar7->CommandBufferHandle,VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,
             *(VkPipeline_T **)&param_1[2].field_0x40);
  pSVar8 = FVulkanRayTracingPipelineState::GetShaderData
                     ((FVulkanRayTracingPipelineState *)param_1,SF_NumStandardFrequencies);
  pFVar2 = (pSVar8->ShaderHandles).AllocatorInstance.Data;
  iVar1 = (pSVar8->ShaderHandles).ArrayNum;
  if (iVar1 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  uVar6 = FVulkanRayTracingPipelineState::GetShaderIndex
                    ((FVulkanRayTracingPipelineState *)param_1,(FVulkanRayTracingShader *)param_2);
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar1;
  local_78.DataPtr = (uchar *)pFVar2;
  FVulkanRayTracingShaderTable::CommitRayGenShader
            ((FVulkanRayTracingShaderTable *)param_3,&local_68,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,uVar6,
             &local_78);
  SetRayGenResources(*(FVulkanDevice **)&this[-1].TypedDescriptorPoolSets.field_0x20,
                     (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,
                     param_4,(FVulkanRayTracingShaderTable *)param_3);
  p_Var4 = VulkanDynamicAPI::vkCmdTraceRaysKHR;
  pFVar9 = FVulkanRayTracingShaderTable::GetAlloc
                     ((FVulkanRayTracingShaderTable *)param_3,SF_RayCallable);
  if (pFVar9->bIsDirty != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar10 = FVulkanRayTracingShaderTable::GetAlloc
                      ((FVulkanRayTracingShaderTable *)param_3,SF_RayHitGroup);
  if (pFVar10->bIsDirty != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar11 = FVulkanRayTracingShaderTable::GetAlloc
                      ((FVulkanRayTracingShaderTable *)param_3,SF_RayMiss);
  if (pFVar11->bIsDirty != false) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  (*p_Var4)(pFVar7->CommandBufferHandle,&local_68,&pFVar11->Region,&pFVar10->Region,&pFVar9->Region,
            param_5,param_6,1);
  return;
}

// RHIRayTraceDispatchIndirect @ 145b74ea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIRayTraceDispatchIndirect
          (FVulkanCommandListContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,FRHIBuffer *param_5,uint param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_VkStridedDeviceAddressRegionKHR_ptr_ulong64
  *p_Var5;
  bool bVar6;
  uint uVar7;
  FVulkanCommandBuffer *pFVar8;
  ShaderData *pSVar9;
  FVulkanShaderTableAllocation *pFVar10;
  FVulkanShaderTableAllocation *pFVar11;
  FVulkanShaderTableAllocation *pFVar12;
  undefined1 auStackY_c8 [32];
  undefined4 uStack_7c;
  TArrayView<unsigned_char_const_,int> local_78;
  VkStridedDeviceAddressRegionKHR local_68;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (!GRHIGlobals.RayTracing.SupportsDispatchIndirect) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GRHIGlobals.RayTracing.SupportsDispatchIndirect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x7d6,
                       L"RHIRayTraceDispatchIndirect may not be used because it is not supported on this machine."
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar8 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  if (*(char *)(param_1 + 3) != '\0') {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Pipeline->IsPartialPipeline()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x7dd,
                       L"Attempting to bind partial pipeline, these can\'t be used for rendering.");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*VulkanDynamicAPI::vkCmdBindPipeline)
            (pFVar8->CommandBufferHandle,VK_PIPELINE_BIND_POINT_RAY_TRACING_KHR,
             *(VkPipeline_T **)&param_1[2].field_0x40);
  pSVar9 = FVulkanRayTracingPipelineState::GetShaderData
                     ((FVulkanRayTracingPipelineState *)param_1,SF_NumStandardFrequencies);
  pFVar2 = (pSVar9->ShaderHandles).AllocatorInstance.Data;
  iVar1 = (pSVar9->ShaderHandles).ArrayNum;
  if (iVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar7 = FVulkanRayTracingPipelineState::GetShaderIndex
                    ((FVulkanRayTracingPipelineState *)param_1,(FVulkanRayTracingShader *)param_2);
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar1;
  local_78.DataPtr = (uchar *)pFVar2;
  FVulkanRayTracingShaderTable::CommitRayGenShader
            ((FVulkanRayTracingShaderTable *)param_3,&local_68,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,uVar7,
             &local_78);
  SetRayGenResources(*(FVulkanDevice **)&this[-1].TypedDescriptorPoolSets.field_0x20,
                     (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,
                     param_4,(FVulkanRayTracingShaderTable *)param_3);
  p_Var5 = VulkanDynamicAPI::vkCmdTraceRaysIndirectKHR;
  lVar3 = param_5[1]._padding_;
  pFVar10 = FVulkanRayTracingShaderTable::GetAlloc
                      ((FVulkanRayTracingShaderTable *)param_3,SF_RayCallable);
  if (pFVar10->bIsDirty != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar11 = FVulkanRayTracingShaderTable::GetAlloc
                      ((FVulkanRayTracingShaderTable *)param_3,SF_RayHitGroup);
  if (pFVar11->bIsDirty != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar12 = FVulkanRayTracingShaderTable::GetAlloc
                      ((FVulkanRayTracingShaderTable *)param_3,SF_RayMiss);
  if (pFVar12->bIsDirty != false) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!Alloc.bIsDirty",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRayTracing.cpp"
                       ,0x3b6,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  (*p_Var5)(pFVar8->CommandBufferHandle,&local_68,&pFVar12->Region,&pFVar11->Region,&pFVar10->Region
            ,(ulonglong)param_6 + lVar3);
  return;
}

// RHISetBindingsOnShaderBindingTable @ 145b75830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable
          (FVulkanCommandListContext *this,FRHIShaderBindingTable *param_1,
          FRHIRayTracingPipelineState *param_2,uint param_3,FRayTracingLocalShaderBindings *param_4,
          ERayTracingBindingType param_5)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FTaskGraphInterface *pFVar4;
  ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  FVar5;
  longlong lVar6;
  TRefCountPtr<FBaseGraphTask> *pTVar7;
  uint uVar8;
  TRefCountPtr<FBaseGraphTask> *pTVar9;
  uint uVar10;
  undefined1 auStackY_158 [32];
  uint local_108;
  <lambda_1> local_104;
  uint local_100;
  FVulkanCommandListContext *local_f8;
  FRayTracingLocalShaderBindings *pFStack_f0;
  FVulkanRayTracingPipelineState *local_e8;
  FVulkanRayTracingShaderTable *pFStack_e0;
  ERayTracingBindingType local_d8;
  undefined7 uStack_d7;
  ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TRefCountPtr<FBaseGraphTask> local_b8 [4];
  TRefCountPtr<FBaseGraphTask> *local_98;
  int local_90;
  undefined4 local_8c;
  TArrayView<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>
  local_88;
  <lambda_1> local_78;
  ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  local_48;
  int local_38;
  int local_34;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_98 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_90 = 0;
  local_8c = 4;
  local_100 = param_3;
  pFVar4 = FTaskGraphInterface::Get();
  iVar3 = (**(code **)((longlong)*pFVar4 + 0x20))(pFVar4);
  bVar2 = FApp::ShouldUseThreadingForPerformance();
  uVar10 = 1;
  if (bVar2) {
    local_34 = 1;
    uVar10 = (uint)(iVar3 != 0);
    local_48.SecondaryData =
         (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
          )0x0;
    uVar8 = 0;
    local_38 = 0;
    pTVar9 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    if (iVar3 == 0) goto LAB_145b759c1;
  }
  else {
    local_34 = 1;
    local_48.SecondaryData =
         (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
          )0x0;
    local_38 = 0;
    uVar8 = 0;
  }
  do {
    FVar5 = (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
             )&local_48;
    if (local_48.SecondaryData !=
        (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
         )0x0) {
      FVar5 = local_48.SecondaryData;
    }
    local_108 = uVar8;
    if ((ulonglong)FVar5 <= &local_108) {
      FVar5 = (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
               )&local_48;
      if (local_48.SecondaryData !=
          (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
           )0x0) {
        FVar5 = local_48.SecondaryData;
      }
      if ((&local_108 < (uint *)((longlong)FVar5 + (longlong)local_34 * 4)) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_38 == local_34) {
      local_38 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_>
                           (0x404,&local_48,&local_34);
    }
    lVar6 = (longlong)local_38;
    local_38 = local_38 + 1;
    FVar5 = (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
             )&local_48;
    if (local_48.SecondaryData !=
        (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
         )0x0) {
      FVar5 = local_48.SecondaryData;
    }
    uVar8 = uVar8 + 1;
    *(uint *)((longlong)FVar5 + lVar6 * 4) = local_108;
    pTVar9 = local_98;
  } while (uVar8 < uVar10);
LAB_145b759c1:
  iVar3 = local_38;
  local_f8 = (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18;
  pFStack_f0 = param_4;
  local_d8 = param_5;
  local_c8 = (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
              )&local_48;
  if (local_48.SecondaryData !=
      (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
       )0x0) {
    local_c8 = local_48.SecondaryData;
  }
  local_e8 = (FVulkanRayTracingPipelineState *)param_2;
  pFStack_e0 = (FVulkanRayTracingShaderTable *)param_1;
  if ((local_38 < 0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_78.__this = local_f8;
  local_78.Bindings = pFStack_f0;
  local_78._33_7_ = uStack_d7;
  local_78.BindingType = local_d8;
  local_88._12_4_ = uStack_bc;
  local_88.ArrayNum = iVar3;
  local_88.DataPtr = (FTaskContext *)local_c8;
  local_78.Pipeline = local_e8;
  local_78.ShaderTable = pFStack_e0;
  iStack_c0 = iVar3;
  ParallelForImpl::
  ParallelForInternal<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>
            (L"SetRayTracingBindings",local_100,0x400,&local_78,local_104,None,&local_88);
  if (local_48.SecondaryData !=
      (ForElementType<_public:_virtual_void___cdecl_FVulkanCommandListContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
       )0x0) {
    FMemory::Free((void *)local_48.SecondaryData);
  }
  pTVar7 = local_b8;
  if (pTVar9 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar7 = pTVar9;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar7,local_90);
  if (pTVar9 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(pTVar9);
  }
  return;
}

// RHISetComputePipelineState @ 145b75b00

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetComputePipelineState
          (FVulkanCommandListContext *this,FRHIComputePipelineState *param_1)

{
  undefined1 *this_00;
  longlong lVar1;
  longlong *plVar2;
  FVulkanCommonPipelineDescriptorState *this_01;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FVulkanComputePipelineDescriptorState *pFVar6;
  FVulkanComputePipelineDescriptorState *pFVar7;
  uint uVar8;
  longlong *plVar9;
  FVulkanComputePipelineDescriptorState *pFVar10;
  longlong *local_28;
  longlong *local_20;
  
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  AcquirePoolSetContainer((FVulkanCommandListContext *)this_00);
  plVar2 = (longlong *)this->_padding_;
  pFVar7 = (FVulkanComputePipelineDescriptorState *)0x0;
  pFVar10 = (FVulkanComputePipelineDescriptorState *)(param_1 + -1);
  if (param_1 == (FRHIComputePipelineState *)0x0) {
    pFVar10 = pFVar7;
  }
  if (pFVar10 != (FVulkanComputePipelineDescriptorState *)*plVar2) {
    *plVar2 = (longlong)pFVar10;
    uVar8 = ((uint)((ulonglong)pFVar10 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar10 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if ((int)plVar2[3] != *(int *)((longlong)plVar2 + 0x44)) {
      plVar9 = (longlong *)plVar2[10];
      if ((longlong *)plVar2[10] == (longlong *)0x0) {
        plVar9 = plVar2 + 9;
      }
      iVar5 = *(int *)((longlong)plVar9 +
                      (ulonglong)((int)plVar2[0xb] - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar5 != -1) {
        do {
          lVar1 = plVar2[2] + (longlong)iVar5 * 0x18;
          if (*(FVulkanComputePipelineDescriptorState **)(plVar2[2] + (longlong)iVar5 * 0x18) ==
              pFVar10) {
            pFVar6 = (FVulkanComputePipelineDescriptorState *)(lVar1 + 8);
            if (lVar1 == 0) {
              pFVar6 = pFVar7;
            }
            if (pFVar6 != (FVulkanComputePipelineDescriptorState *)0x0) {
              lVar1 = pFVar6->_padding_;
              plVar2[1] = lVar1;
              if (*(FVulkanComputePipelineDescriptorState **)(lVar1 + 0x108) != pFVar10) {
                bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("CurrentState->ComputePipeline == InComputePipeline",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanPendingState.h"
                                   ,0x2d,L"");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
              }
              goto LAB_145b75c06;
            }
            break;
          }
          iVar5 = *(int *)(lVar1 + 0x10);
        } while (iVar5 != -1);
      }
    }
    pFVar6 = ::operator_new(0x110);
    if (pFVar6 != (FVulkanComputePipelineDescriptorState *)0x0) {
      pFVar7 = FVulkanComputePipelineDescriptorState::FVulkanComputePipelineDescriptorState
                         (pFVar6,(FVulkanDevice *)plVar2[0xc],(FVulkanComputePipeline *)pFVar10);
    }
    local_20 = plVar2 + 1;
    *local_20 = (longlong)pFVar7;
    local_28 = plVar2;
    TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
    ::
    Emplace<TPairInitializer<FVulkanComputePipeline_*_const_&,FVulkanComputePipelineDescriptorState_*_const_&>_>
              ((TSet<TTuple<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*>,TDefaultMapHashableKeyFuncs<FVulkanComputePipeline_*,FVulkanComputePipelineDescriptorState_*,0>,FDefaultSetAllocator>
                *)(plVar2 + 2),
               (TPairInitializer<FVulkanComputePipeline_*_const_&,FVulkanComputePipelineDescriptorState_*_const_&>
                *)&stack0x00000008,(bool *)&local_28);
LAB_145b75c06:
    this_01 = (FVulkanCommonPipelineDescriptorState *)plVar2[1];
    FVulkanCommonPipelineDescriptorState::Reset(this_01);
    *(uint *)&this_01[1].field_0x14 = this_01[1].MaxNumSets;
  }
  *(uint *)&pFVar10->_padding_ = GFrameNumberRenderThread;
  ApplyStaticUniformBuffers<TVulkanBaseShader<FRHIComputeShader,5>_>
            ((FVulkanCommandListContext *)this_00,
             (TVulkanBaseShader<FRHIComputeShader,5> *)pFVar10->_padding_);
  return;
}

// RHISetGraphicsPipelineState @ 145b75cb0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "VkPipelineBindPoint": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetGraphicsPipelineState
          (FVulkanCommandListContext *this,FRHIGraphicsPipelineState *param_1,uint param_2,
          bool param_3)

{
  undefined1 *this_00;
  byte bVar1;
  FRHIUniformBuffer *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FVulkanCommandBuffer *pFVar6;
  int iVar7;
  uint uVar8;
  FRHIGraphicsShader *pFVar9;
  FRHIGraphicsShader *pFVar10;
  FRHIGraphicsShader *pFVar11;
  
  FVulkanPipelineStateCacheManager::LRUTouch
            (*(FVulkanPipelineStateCacheManager **)
              (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x2738),
             (FVulkanGraphicsPipelineState *)param_1);
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  *(uint *)&param_1[0x1f]._padding_ = GFrameNumberRenderThread;
  pFVar6 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
  bVar4 = FVulkanPendingGfxState::SetGfxPipeline
                    ((FVulkanPendingGfxState *)this->_padding_,
                     (FVulkanGraphicsPipelineState *)param_1,(bool)(~pFVar6->bHasPipeline & 1));
  if (bVar4) {
    (*VulkanDynamicAPI::vkCmdBindPipeline)
              (pFVar6->CommandBufferHandle,VK_PIPELINE_BIND_POINT_GRAPHICS,
               *(VkPipeline_T **)(*(longlong *)(this->_padding_ + 0x80) + 0x60));
    pFVar6->bHasPipeline = '\x01';
  }
  if (param_2 != *(uint *)(this->_padding_ + 0x74)) {
    *(uint *)(this->_padding_ + 0x74) = param_2;
  }
  if (param_3) {
    pFVar9 = (FRHIGraphicsShader *)0x0;
    pFVar10 = (FRHIGraphicsShader *)(param_1[0x1d]._padding_ + -0x108);
    if (param_1[0x1d]._padding_ == 0) {
      pFVar10 = pFVar9;
    }
    if ((pFVar10 != (FRHIGraphicsShader *)0x0) &&
       (iVar7 = *(int *)&pFVar10->field_0x88, pFVar11 = pFVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)pFVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = (&pFVar11->field_0x0)[*(longlong *)&pFVar10->field_0x80];
        if (bVar1 != 0xff) {
          if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    (*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&pFVar10[1].field_0x40) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,
                     *(uint *)(*(longlong *)&pFVar10[1].field_0x38 + (longlong)pFVar11 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer((FVulkanCommandListContext *)this_00,pFVar10,uVar8,pFVar2);
          }
        }
        iVar7 = *(int *)&pFVar10->field_0x88;
        pFVar9 = (FRHIGraphicsShader *)(ulonglong)(uVar8 + 1);
        pFVar11 = (FRHIGraphicsShader *)&pFVar11->field_0x1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
    pFVar9 = (FRHIGraphicsShader *)0x0;
    pFVar10 = (FRHIGraphicsShader *)(param_1[0x1d].SortKey - 0x108);
    if (param_1[0x1d].SortKey == 0) {
      pFVar10 = pFVar9;
    }
    if ((pFVar10 != (FRHIGraphicsShader *)0x0) &&
       (iVar7 = *(int *)&pFVar10->field_0x88, pFVar11 = pFVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)pFVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = (&pFVar11->field_0x0)[*(longlong *)&pFVar10->field_0x80];
        if (bVar1 != 0xff) {
          if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    (*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&pFVar10[1].field_0x40) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,
                     *(uint *)(*(longlong *)&pFVar10[1].field_0x38 + (longlong)pFVar11 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer((FVulkanCommandListContext *)this_00,pFVar10,uVar8,pFVar2);
          }
        }
        iVar7 = *(int *)&pFVar10->field_0x88;
        pFVar9 = (FRHIGraphicsShader *)(ulonglong)(uVar8 + 1);
        pFVar11 = (FRHIGraphicsShader *)&pFVar11->field_0x1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
    pFVar9 = (FRHIGraphicsShader *)0x0;
    pFVar10 = (FRHIGraphicsShader *)(*(longlong *)&param_1[0x1d].DSMode + -0x108);
    if (*(longlong *)&param_1[0x1d].DSMode == 0) {
      pFVar10 = pFVar9;
    }
    if ((pFVar10 != (FRHIGraphicsShader *)0x0) &&
       (iVar7 = *(int *)&pFVar10->field_0x88, pFVar11 = pFVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)pFVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = (&pFVar11->field_0x0)[*(longlong *)&pFVar10->field_0x80];
        if (bVar1 != 0xff) {
          if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    (*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&pFVar10[1].field_0x40) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,
                     *(uint *)(*(longlong *)&pFVar10[1].field_0x38 + (longlong)pFVar11 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer((FVulkanCommandListContext *)this_00,pFVar10,uVar8,pFVar2);
          }
        }
        iVar7 = *(int *)&pFVar10->field_0x88;
        pFVar9 = (FRHIGraphicsShader *)(ulonglong)(uVar8 + 1);
        pFVar11 = (FRHIGraphicsShader *)&pFVar11->field_0x1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
    pFVar9 = (FRHIGraphicsShader *)0x0;
    pFVar10 = (FRHIGraphicsShader *)(param_1[0x1d]._padding_ + -0x108);
    if (param_1[0x1d]._padding_ == 0) {
      pFVar10 = pFVar9;
    }
    if ((pFVar10 != (FRHIGraphicsShader *)0x0) &&
       (iVar7 = *(int *)&pFVar10->field_0x88, pFVar11 = pFVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)pFVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = (&pFVar11->field_0x0)[*(longlong *)&pFVar10->field_0x80];
        if (bVar1 != 0xff) {
          if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    (*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&pFVar10[1].field_0x40) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,
                     *(uint *)(*(longlong *)&pFVar10[1].field_0x38 + (longlong)pFVar11 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer((FVulkanCommandListContext *)this_00,pFVar10,uVar8,pFVar2);
          }
        }
        iVar7 = *(int *)&pFVar10->field_0x88;
        pFVar9 = (FRHIGraphicsShader *)(ulonglong)(uVar8 + 1);
        pFVar11 = (FRHIGraphicsShader *)&pFVar11->field_0x1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
    pFVar9 = (FRHIGraphicsShader *)0x0;
    pFVar10 = (FRHIGraphicsShader *)(param_1[0x1d]._padding_ + -0x108);
    if (param_1[0x1d]._padding_ == 0) {
      pFVar10 = pFVar9;
    }
    if ((pFVar10 != (FRHIGraphicsShader *)0x0) &&
       (iVar7 = *(int *)&pFVar10->field_0x88, pFVar11 = pFVar9, 0 < iVar7)) {
      do {
        uVar8 = (uint)pFVar9;
        uVar5 = 0;
        if ((int)uVar8 < iVar7) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar1 = (&pFVar11->field_0x0)[*(longlong *)&pFVar10->field_0x80];
        if (bVar1 != 0xff) {
          if ((*(int *)&(this->TypedDescriptorPoolSets).field_0x8 <= (int)(uint)bVar1) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = *(FRHIUniformBuffer **)
                    (*(longlong *)&this->TypedDescriptorPoolSets + (ulonglong)bVar1 * 8);
          uVar5 = 0;
          if ((int)uVar8 < *(int *)&pFVar10[1].field_0x40) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          UE::RHICore::ValidateStaticUniformBuffer
                    (pFVar2,bVar1,
                     *(uint *)(*(longlong *)&pFVar10[1].field_0x38 + (longlong)pFVar11 * 8));
          if (pFVar2 != (FRHIUniformBuffer *)0x0) {
            RHISetShaderUniformBuffer((FVulkanCommandListContext *)this_00,pFVar10,uVar8,pFVar2);
          }
        }
        iVar7 = *(int *)&pFVar10->field_0x88;
        pFVar9 = (FRHIGraphicsShader *)(ulonglong)(uVar8 + 1);
        pFVar11 = (FRHIGraphicsShader *)&pFVar11->field_0x1;
      } while ((int)(uVar8 + 1) < iVar7);
    }
  }
  return;
}

// FlushProfilerStats @ 145ba9ab0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall FVulkanCommandListContext::FlushProfilerStats(FVulkanCommandListContext *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FVulkanCommandBuffer *pFVar5;
  FStats *pFVar6;
  
  if ((((((int)this->_padding_ != 0) || (*(int *)((longlong)&this->_padding_ + 4) != 0)) ||
       ((int)this->_padding_ != 0)) || (*(int *)((longlong)&this->_padding_ + 4) != 0)) &&
     (this->bSupportsBreadcrumbs != false)) {
    uVar1 = *(undefined4 *)&this->_padding_;
    uVar2 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    uVar3 = *(undefined4 *)&this->_padding_;
    uVar4 = *(undefined4 *)((longlong)&this->_padding_ + 4);
    pFVar5 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this);
    pFVar6 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                       (&pFVar5->EventStream);
    pFVar6->NumDraws = uVar1;
    pFVar6->NumDispatches = uVar2;
    pFVar6->NumPrimitives = uVar3;
    pFVar6->NumVertices = uVar4;
    this->_padding_ = 0;
    this->_padding_ = 0;
  }
  return;
}

// RHIBeginBreadcrumbGPU @ 145bb3c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIBeginBreadcrumbGPU
          (FVulkanCommandListContext *this,FRHIBreadcrumbNode *param_1)

{
  undefined1 *this_00;
  FVulkanDiagnosticBuffer *this_01;
  VkQueryPool_T *pVVar1;
  code *pcVar2;
  FColor FVar3;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *p_Var4;
  bool bVar5;
  uint uVar6;
  FVulkanCommandBuffer *pFVar7;
  wchar_t *_Str;
  size_t sVar8;
  FBeginBreadcrumb *pFVar9;
  FVulkanPayload *pFVar10;
  FVulkanQueryPool *this_02;
  uint uVar11;
  undefined1 auStack_238 [32];
  FColor_u_0 local_218;
  FRHIBreadcrumbNode *local_210;
  undefined4 local_208;
  undefined8 local_204;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float local_1e4;
  FScriptContainerElement local_1d8 [128];
  ForAnyElementType local_158;
  FScriptContainerElement *local_150;
  int local_148;
  undefined1 local_138 [256];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_238;
  local_210 = param_1;
  bVar5 = UE::RHI::UseGPUCrashBreadcrumbs();
  if (bVar5) {
    this_01 = *(FVulkanDiagnosticBuffer **)
               (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x28 + 0xd8);
    if (this_01 != (FVulkanDiagnosticBuffer *)0x0) {
      pFVar7 = FVulkanContextCommon::GetCommandBuffer
                         ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
      FVulkanDiagnosticBuffer::WriteMarkerIn(this_01,pFVar7,param_1);
    }
  }
  FVar3.field0_0x0 = FColor::White.field0_0x0;
  local_218 = FColor::White.field0_0x0;
  if ((this->_padding_ == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((*(char *)(this->_padding_ + 0xf8) == '\0') ||
     (pcVar2 = *(code **)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x2728),
     pcVar2 == (code *)0x0)) goto LAB_145bb3e66;
  _Str = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_138);
  local_158.Data = (FScriptContainerElement *)0x0;
  if (_Str == (wchar_t *)0x0) {
    local_150 = (FScriptContainerElement *)0x0;
    local_148 = 0;
  }
  else {
    sVar8 = wcslen(_Str);
    local_148 = UE::Core::Private::GetConvertedLength((uchar *)0x0,_Str,(int)sVar8);
    uVar6 = local_148 + 1;
    uVar11 = uVar6;
    if (uVar6 < 0x81) {
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        uVar11 = 0;
        goto LAB_145bb3d86;
      }
    }
    else {
LAB_145bb3d86:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,uVar11,1);
    }
    local_150 = local_1d8;
    if (local_158.Data != (FScriptContainerElement *)0x0) {
      local_150 = local_158.Data;
    }
    UE::Core::Private::Convert((uchar *)local_150,uVar6,_Str,(int)sVar8 + 1);
  }
  local_208 = 0x3b9cbe02;
  local_204 = 0;
  uStack_1fc = 0;
  uStack_1f8 = SUB84(local_150,0);
  uStack_1f4 = (undefined4)((ulonglong)local_150 >> 0x20);
  fStack_1f0 = FLinearColor::sRGBToLinearTable[(byte)local_218._2_1_];
  _fStack_1ec = CONCAT44(FLinearColor::sRGBToLinearTable[(uint)FVar3.field0_0x0 & 0xff],
                         FLinearColor::sRGBToLinearTable[(byte)local_218._1_1_]);
  local_1e4 = (float)(local_218.Bits >> 0x18) * __real_3b808081;
  pFVar7 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  (*pcVar2)(pFVar7->CommandBufferHandle,&local_208);
  if (local_158.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data);
  }
LAB_145bb3e66:
  this_00 = &this[-1].TypedDescriptorPoolSets.field_0x18;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FlushProfilerStats((FVulkanCommandListContext *)this_00);
    pFVar7 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    pFVar9 = UE::RHI::GPUProfiler::FEventStream::
             Emplace<UE::RHI::GPUProfiler::FEvent::FBeginBreadcrumb,FRHIBreadcrumbNode_*_&>
                       (&pFVar7->EventStream,&local_210);
    pFVar10 = FVulkanContextCommon::GetPayload((FVulkanContextCommon *)this_00,Execute);
    this_02 = FVulkanContextCommon::GetCurrentTimestampQueryPool
                        ((FVulkanContextCommon *)this_00,pFVar10);
    uVar6 = FVulkanQueryPool::ReserveQuery(this_02,&pFVar9->GPUTimestampTOP);
    p_Var4 = VulkanDynamicAPI::vkCmdWriteTimestamp;
    pVVar1 = this_02->QueryPool;
    pFVar7 = FVulkanContextCommon::GetCommandBuffer((FVulkanContextCommon *)this_00);
    (*p_Var4)(pFVar7->CommandBufferHandle,VK_PIPELINE_STAGE_TOP_OF_PIPE_BIT,pVVar1,uVar6);
  }
  return;
}

// RHIClearUAVFloat @ 145bb47f0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIClearUAVFloat
          (FVulkanCommandListContext *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2
          )

{
  undefined1 auStack_1be8 [32];
  FRHICommandList_RecursiveHazardous local_1bc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145bb4800;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1be8;
  if (this == (FVulkanCommandListContext *)&DAT_00000050) {
    this = (FVulkanCommandListContext *)0x0;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1bc8,(IRHICommandContext *)this);
  FVulkanUnorderedAccessView::Clear
            ((FVulkanUnorderedAccessView *)param_1,
             (TRHICommandList_RecursiveHazardous<FVulkanCommandListContext> *)&local_1bc8,param_2,
             true);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1bc8);
  return;
}

// RHIClearUAVUint @ 145bb4880

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIClearUAVUint
          (FVulkanCommandListContext *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  undefined1 auStack_1be8 [32];
  FRHICommandList_RecursiveHazardous local_1bc8;
  ulonglong local_18;
  undefined8 uStack_10;
  
  uStack_10 = 0x145bb4890;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1be8;
  if (this == (FVulkanCommandListContext *)&DAT_00000050) {
    this = (FVulkanCommandListContext *)0x0;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1bc8,(IRHICommandContext *)this);
  FVulkanUnorderedAccessView::Clear
            ((FVulkanUnorderedAccessView *)param_1,
             (TRHICommandList_RecursiveHazardous<FVulkanCommandListContext> *)&local_1bc8,param_2,
             false);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1bc8);
  return;
}

// RHICopyBufferRegion @ 145bb4ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHICopyBufferRegion
          (FVulkanCommandListContext *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  VkCommandBuffer_T *pVVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  FVulkanCommandBuffer *pFVar6;
  undefined1 auStackY_e8 [32];
  VkMemoryBarrier local_98;
  VkMemoryBarrier local_80;
  VkBufferCopy local_68;
  ulonglong local_50;
  
  if ((((param_1 != (FRHIBuffer *)0x0) &&
       (local_50 = __security_cookie.value ^ (ulonglong)auStackY_e8, param_3 != (FRHIBuffer *)0x0))
      && (param_1 != param_3)) && (param_5 != 0)) {
    if ((((ulonglong)(param_1->Desc).Size < param_2 + param_5) ||
        ((ulonglong)(param_3->Desc).Size < param_4 + param_5)) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DstOffset + NumBytes <= DstBuffer->GetSize() && SrcOffset + NumBytes <= SrcBuffer->GetSize()"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0xafd,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    lVar3 = param_1[1]._padding_;
    lVar4 = param_3[1]._padding_;
    pFVar6 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    if ((pFVar6->State != IsInsideBegin) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("CommandBuffer.IsOutsideRenderPass()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0xb03,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pVVar1 = pFVar6->CommandBufferHandle;
    local_98.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_98.pNext = (void *)0x0;
    local_98.srcAccessMask = 0x18000;
    local_98.dstAccessMask = 0x1800;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x10000,0x1000,0,1,&local_98,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
    local_68.size = param_5;
    local_68.srcOffset = (uint)lVar4 + param_4;
    local_68.dstOffset = (uint)lVar3 + param_2;
    (*VulkanDynamicAPI::vkCmdCopyBuffer)
              (pVVar1,(VkBuffer_T *)param_3[1]._padding_,(VkBuffer_T *)param_1[1]._padding_,1,
               &local_68);
    local_80.sType = VK_STRUCTURE_TYPE_MEMORY_BARRIER;
    local_80.pNext = (void *)0x0;
    local_80.srcAccessMask = 0x1800;
    local_80.dstAccessMask = 0x18000;
    (*VulkanDynamicAPI::vkCmdPipelineBarrier)
              (pVVar1,0x1000,0x10000,0,1,&local_80,0,(VkBufferMemoryBarrier *)0x0,0,
               (VkImageMemoryBarrier *)0x0);
  }
  return;
}

// RHICopyTexture @ 145bb4ef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHICopyTexture
          (FVulkanCommandListContext *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 *puVar6;
  code *pcVar7;
  FVulkanCommandBuffer *pFVar8;
  bool bVar9;
  uint uVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  uint *puVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined1 auStackY_5a8 [32];
  FLLMScope local_558;
  uint local_554;
  uint local_550;
  int local_54c;
  longlong *local_548;
  FVulkanCommandBuffer *local_540;
  undefined8 local_538;
  FMemScope local_528 [2];
  VkImageCopy local_518;
  FVulkanPipelineBarrier local_4c8;
  VkBufferImageCopy local_3a8 [15];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_5a8;
  FLLMScope::FLLMScope(&local_558,VideoRecording|ThreadStackPlatform,false,None,Default,true);
  FMemScope::FMemScope(local_528,VideoRecording|ThreadStackPlatform,true);
  if (((param_1 == (FRHITexture *)0x0) || (param_2 == (FRHITexture *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("SourceTexture && DestTexture",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xa71,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  plVar11 = (longlong *)(**(code **)(param_1->_padding_ + 0x48))(param_1);
  plVar12 = (longlong *)(**(code **)(param_2->_padding_ + 0x48))(param_2);
  local_548 = plVar12;
  local_540 = FVulkanContextCommon::GetCommandBuffer
                        ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  if ((local_540->State != IsInsideBegin) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("CommandBuffer.IsOutsideRenderPass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xa77,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar13 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar16 = *(byte *)(lVar13 + 0x33);
  lVar13 = (**(code **)(param_1->_padding_ + 0x20))(param_1);
  lVar14 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  iVar2 = *(int *)(lVar13 + 0x24);
  iVar3 = *(int *)(lVar13 + 0x28);
  uVar1 = *(ushort *)(lVar13 + 0x2c);
  uVar20 = *(uint *)(lVar14 + 0x24);
  uVar18 = *(uint *)(lVar14 + 0x28);
  puVar15 = (uint *)(**(code **)(*plVar11 + 0x20))();
  if (((*puVar15 >> 0x13 & 1) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!EnumHasAnyFlags(Source->GetDesc().Flags, ETextureCreateFlags::CPUReadback)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                         ,0xa7f,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  puVar15 = (uint *)(**(code **)(*plVar12 + 0x20))(plVar12);
  if ((*puVar15 >> 0x13 & 1) == 0) {
    iVar5 = (param_3->Size).field0_0x0._s_0.X;
    if (((iVar5 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
        ((param_3->Size).field0_0x0._s_0.Y ==
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
       ((param_3->Size).field0_0x0._s_0.Z == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
       )) {
      bVar17 = (byte)param_3->SourceMipIndex;
      local_518.extent.width = iVar2 >> (bVar17 & 0x1f);
      if (local_518.extent.width == 0) {
        local_518.extent.width = 1;
      }
      local_518.extent.height = iVar3 >> (bVar17 & 0x1f);
      if (local_518.extent.height == 0) {
        local_518.extent.height = 1;
      }
      local_518.extent.depth = (int)(uint)uVar1 >> (bVar17 & 0x1f);
      if (local_518.extent.depth == 0) {
        local_518.extent.depth = 1;
      }
      if (((uVar20 < local_518.extent.width) || (uVar18 < local_518.extent.height)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5704882760083043656>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                             ,0xab8,
                             "Region.extent.width <= (uint32)DestXYZ.X && Region.extent.height <= (uint32)DestXYZ.Y"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      if ((((iVar5 < 1) || ((int)uVar20 < iVar5)) ||
          ((iVar2 = (param_3->Size).field0_0x0._s_0.Y, iVar2 < 1 || ((int)uVar18 < iVar2)))) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5704882760083043652>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                             ,0xabc,
                             "CopyInfo.Size.X > 0 && CopyInfo.Size.X <= DestXYZ.X && CopyInfo.Size.Y > 0 && CopyInfo.Size.Y <= DestXYZ.Y"
                            ), bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_518.extent.width = (param_3->Size).field0_0x0._s_0.X;
      if ((int)local_518.extent.width < 1) {
        local_518.extent.width = 1;
      }
      local_518.extent.height = (param_3->Size).field0_0x0._s_0.Y;
      if ((int)local_518.extent.height < 1) {
        local_518.extent.height = 1;
      }
      local_518.extent.depth = (param_3->Size).field0_0x0._s_0.Z;
      if ((int)local_518.extent.depth < 1) {
        local_518.extent.depth = 1;
      }
    }
    pFVar8 = local_540;
    local_518.srcSubresource.layerCount = param_3->NumSlices;
    uVar20 = 0;
    local_518.srcSubresource.aspectMask = *(uint *)(plVar11 + 0x3c);
    local_518.srcSubresource.baseArrayLayer = param_3->SourceSliceIndex;
    local_518.srcSubresource.mipLevel = param_3->SourceMipIndex;
    local_518.srcOffset.x = (param_3->SourcePosition).field0_0x0._s_0.X;
    local_518.srcOffset.y = (param_3->SourcePosition).field0_0x0._s_0.Y;
    local_518.srcOffset.z = (param_3->SourcePosition).field0_0x0._s_0.Z;
    local_518.dstSubresource.aspectMask = *(uint *)(plVar12 + 0x3c);
    local_518.dstSubresource.baseArrayLayer = param_3->DestSliceIndex;
    local_518.dstSubresource.mipLevel = param_3->DestMipIndex;
    local_518.dstOffset.x = (param_3->DestPosition).field0_0x0._s_0.X;
    local_518.dstOffset.y = (param_3->DestPosition).field0_0x0._s_0.Y;
    local_518.dstOffset.z = (param_3->DestPosition).field0_0x0._s_0.Z;
    local_518.dstSubresource.layerCount = local_518.srcSubresource.layerCount;
    if (param_3->NumMips != 0) {
      do {
        (*VulkanDynamicAPI::vkCmdCopyImage)
                  (pFVar8->CommandBufferHandle,(VkImage_T *)plVar11[0x2e],
                   VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,(VkImage_T *)plVar12[0x2e],
                   VK_IMAGE_LAYOUT_TRANSFER_DST_OPTIMAL,1,&local_518);
        local_518.srcSubresource.mipLevel = local_518.srcSubresource.mipLevel + 1;
        local_518.dstSubresource.mipLevel = local_518.dstSubresource.mipLevel + 1;
        if (uVar20 != param_3->NumMips - 1) {
          uVar18 = local_518.extent.width >> 1;
          local_518.srcOffset.x = local_518.srcOffset.x / 2;
          local_518.srcOffset.y = local_518.srcOffset.y / 2;
          local_518.srcOffset.z = local_518.srcOffset.z / 2;
          local_518.dstOffset.x = local_518.dstOffset.x / 2;
          local_518.dstOffset.y = local_518.dstOffset.y / 2;
          local_518.dstOffset.z = local_518.dstOffset.z / 2;
          local_518.extent.width = 1;
          if (1 < uVar18) {
            local_518.extent.width = uVar18;
          }
          uVar18 = local_518.extent.height >> 1;
          local_518.extent.height = 1;
          if (1 < uVar18) {
            local_518.extent.height = uVar18;
          }
          uVar18 = local_518.extent.depth >> 1;
          local_518.extent.depth = 1;
          if (1 < uVar18) {
            local_518.extent.depth = uVar18;
          }
          if ((((local_518.srcOffset.x % GPixelFormats[bVar16].BlockSizeX != 0) ||
               (local_518.srcOffset.y % GPixelFormats[bVar16].BlockSizeY != 0)) ||
              (local_518.srcOffset.z % GPixelFormats[bVar16].BlockSizeZ != 0)) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5704882760083043606>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                                 ,0xaea,
                                 "Region.srcOffset.x % PixelFormatInfo.BlockSizeX == 0 && Region.srcOffset.y % PixelFormatInfo.BlockSizeY == 0 && Region.srcOffset.z % PixelFormatInfo.BlockSizeZ == 0"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((((local_518.dstOffset.x % GPixelFormats[bVar16].BlockSizeX != 0) ||
               (local_518.dstOffset.y % GPixelFormats[bVar16].BlockSizeY != 0)) ||
              (local_518.dstOffset.z % GPixelFormats[bVar16].BlockSizeZ != 0)) &&
             (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_5704882760083043605>,false,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                                 ,0xaeb,
                                 "Region.dstOffset.x % PixelFormatInfo.BlockSizeX == 0 && Region.dstOffset.y % PixelFormatInfo.BlockSizeY == 0 && Region.dstOffset.z % PixelFormatInfo.BlockSizeZ == 0"
                                ), bVar9)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        uVar20 = uVar20 + 1;
      } while (uVar20 < param_3->NumMips);
    }
  }
  else {
    if ((param_3->DestSliceIndex != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CopyInfo.DestSliceIndex == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0xa82,L"Slices not supported in TexCreate_CPUReadback textures"), bVar9)
       ) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (((((param_3->DestPosition).field0_0x0._s_0.X !=
           UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) ||
         ((param_3->DestPosition).field0_0x0._s_0.Y !=
          UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) ||
        ((param_3->DestPosition).field0_0x0._s_0.Z !=
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("CopyInfo.DestPosition.IsZero()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                           ,0xa83,
                           L"Destination position not supported in TexCreate_CPUReadback textures"),
       bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_538 = *(undefined8 *)&(param_3->Size).field0_0x0;
    uVar22 = (param_3->Size).field0_0x0._s_0.Z;
    uVar19 = (uint)((ulonglong)local_538 >> 0x20);
    uVar23 = (uint)local_538;
    if ((((uint)local_538 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X) &&
        (uVar19 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
       (uVar22 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z)) {
      if ((((int)uVar20 < iVar2) || ((int)uVar18 < iVar3)) &&
         (bVar9 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<_5704882760083043705>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanTexture.cpp"
                             ,0xa87,"SourceXYZ.X <= DestXYZ.X && SourceXYZ.Y <= DestXYZ.Y"), bVar9))
      {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      bVar16 = (byte)param_3->SourceMipIndex;
      uVar23 = iVar2 >> (bVar16 & 0x1f);
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar19 = iVar3 >> (bVar16 & 0x1f);
      if (uVar19 == 0) {
        uVar19 = 1;
      }
      uVar22 = (int)(uint)uVar1 >> (bVar16 & 0x1f);
      if (uVar22 == 0) {
        uVar22 = 1;
      }
    }
    memset(local_3a8,0,0x348);
    pFVar8 = local_540;
    plVar12 = local_548;
    uVar21 = 0;
    uVar20 = param_3->NumMips;
    uVar18 = param_3->DestMipIndex;
    local_548 = (longlong *)CONCAT44(local_548._4_4_,uVar18);
    puVar6 = (undefined8 *)plVar12[0x3d];
    local_550 = param_3->SourceSliceIndex;
    local_554 = param_3->SourceMipIndex;
    if (uVar20 != 0) {
      iVar2 = (param_3->SourcePosition).field0_0x0._s_0.X;
      puVar15 = &local_3a8[0].bufferRowLength;
      iVar3 = (param_3->SourcePosition).field0_0x0._s_0.Y;
      local_54c = (param_3->SourcePosition).field0_0x0._s_0.Z;
      uVar4 = *(uint *)(plVar11 + 0x3c);
      do {
        uVar10 = *(uint *)((longlong)puVar6 + (ulonglong)(uVar21 + uVar18) * 4 + 8);
        puVar15[3] = local_554;
        puVar15[4] = local_550;
        puVar15[8] = local_54c;
        ((VkBufferImageCopy *)(puVar15 + -2))->bufferOffset = (ulonglong)uVar10;
        *puVar15 = uVar23;
        uVar10 = (int)uVar23 / 2;
        ((VkExtent3D *)(puVar15 + 9))->width = uVar23;
        puVar15[1] = uVar19;
        puVar15[10] = uVar19;
        uVar23 = uVar10;
        if ((int)uVar10 < 1) {
          uVar23 = 1;
        }
        puVar15[0xb] = uVar22;
        ((VkImageSubresourceLayers *)(puVar15 + 2))->aspectMask = uVar4;
        puVar15[5] = 1;
        uVar19 = (int)uVar19 / 2;
        ((VkOffset3D *)(puVar15 + 6))->x = iVar2;
        puVar15[7] = iVar3;
        puVar15 = puVar15 + 0xe;
        if ((int)uVar19 < 1) {
          uVar19 = 1;
        }
        uVar22 = (int)uVar22 / 2;
        if ((int)uVar22 < 1) {
          uVar22 = 1;
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 < uVar20);
    }
    (*VulkanDynamicAPI::vkCmdCopyImageToBuffer)
              (local_540->CommandBufferHandle,(VkImage_T *)plVar11[0x2e],
               VK_IMAGE_LAYOUT_TRANSFER_SRC_OPTIMAL,(VkBuffer_T *)*puVar6,uVar20,local_3a8);
    local_4c8.MemoryBarriers.AllocatorInstance.SecondaryData = (ForElementType<VkMemoryBarrier2>)0x0
    ;
    local_4c8.MemoryBarriers.ArrayNum = 0;
    local_4c8.MemoryBarriers.ArrayMax = 1;
    local_4c8.ImageBarriers.AllocatorInstance.SecondaryData =
         (ForElementType<VkImageMemoryBarrier2>)0x0;
    local_4c8.ImageBarriers.ArrayNum = 0;
    local_4c8.ImageBarriers.ArrayMax = 2;
    local_4c8.BufferBarriers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_4c8.BufferBarriers.ArrayNum = 0;
    local_4c8.BufferBarriers.ArrayMax = 0;
    FVulkanPipelineBarrier::AddMemoryBarrier(&local_4c8,0x1000,0x2000,0x10000,0x4000);
    FVulkanPipelineBarrier::Execute(&local_4c8,pFVar8);
    if (local_4c8.BufferBarriers.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_4c8.BufferBarriers.AllocatorInstance.Data);
    }
    if (local_4c8.ImageBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkImageMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_4c8.ImageBarriers.AllocatorInstance.SecondaryData);
    }
    if (local_4c8.MemoryBarriers.AllocatorInstance.SecondaryData !=
        (ForElementType<VkMemoryBarrier2>)0x0) {
      FMemory::Free((void *)local_4c8.MemoryBarriers.AllocatorInstance.SecondaryData);
    }
  }
  FMemScope::~FMemScope(local_528);
  FLLMScope::~FLLMScope(&local_558);
  return;
}

// RHIEndBreadcrumbGPU @ 145bb7f20

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "VkPipelineStageFlagBits": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIEndBreadcrumbGPU
          (FVulkanCommandListContext *this,FRHIBreadcrumbNode *param_1)

{
  VkQueryPool_T *pVVar1;
  FVulkanDiagnosticBuffer *this_00;
  code *pcVar2;
  _func___cdecl_void_VkCommandBuffer_T_ptr_VkPipelineStageFlagBits_VkQueryPool_T_ptr_uint *p_Var3;
  bool bVar4;
  uint uVar5;
  FVulkanCommandBuffer *pFVar6;
  FEndBreadcrumb *pFVar7;
  FVulkanPayload *pFVar8;
  FVulkanQueryPool *this_01;
  FRHIBreadcrumbNode *local_res10;
  
  local_res10 = param_1;
  if (*(char *)((longlong)&this->_padding_ + 1) != '\0') {
    FlushProfilerStats((FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    pFVar6 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    pFVar7 = UE::RHI::GPUProfiler::FEventStream::
             Emplace<UE::RHI::GPUProfiler::FEvent::FEndBreadcrumb,FRHIBreadcrumbNode_*_&>
                       (&pFVar6->EventStream,&local_res10);
    pFVar8 = FVulkanContextCommon::GetPayload
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18,Execute
                       );
    this_01 = FVulkanContextCommon::GetCurrentTimestampQueryPool
                        ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18,pFVar8
                        );
    uVar5 = FVulkanQueryPool::ReserveQuery(this_01,&pFVar7->GPUTimestampBOP);
    p_Var3 = VulkanDynamicAPI::vkCmdWriteTimestamp;
    pVVar1 = this_01->QueryPool;
    pFVar6 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    (*p_Var3)(pFVar6->CommandBufferHandle,VK_PIPELINE_STAGE_BOTTOM_OF_PIPE_BIT,pVVar1,uVar5);
  }
  if (this->_padding_ == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutingCmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                       ,0x221,L"");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((*(char *)(this->_padding_ + 0xf8) != '\0') &&
     (pcVar2 = *(code **)(*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x20 + 0x2730),
     pcVar2 != (code *)0x0)) {
    pFVar6 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    (*pcVar2)(pFVar6->CommandBufferHandle);
  }
  bVar4 = UE::RHI::UseGPUCrashBreadcrumbs();
  if ((bVar4) &&
     (this_00 = *(FVulkanDiagnosticBuffer **)
                 (*(longlong *)&this[-1].TypedDescriptorPoolSets.field_0x28 + 0xd8),
     this_00 != (FVulkanDiagnosticBuffer *)0x0)) {
    pFVar6 = FVulkanContextCommon::GetCommandBuffer
                       ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
    FVulkanDiagnosticBuffer::WriteMarkerOut(this_00,pFVar6,param_1);
  }
  return;
}

// RHIEndDrawingViewport @ 145bb8080

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHIEndDrawingViewport
          (FVulkanCommandListContext *this,FRHIViewport *param_1,bool param_2,bool param_3)

{
  code *pcVar1;
  bool bVar2;
  FVulkanCommandBuffer *pFVar3;
  FLLMScope local_res8 [2];
  FMemScope local_res10;
  
  FLLMScope::FLLMScope(local_res8,PlatformTagStart,false,None,Default,true);
  FMemScope::FMemScope(&local_res10,PlatformTagStart,true);
  if (this->_padding_ != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x50a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar3 = FVulkanContextCommon::GetCommandBuffer
                     ((FVulkanContextCommon *)&this[-1].TypedDescriptorPoolSets.field_0x18);
  if ((pFVar3->State == HasEnded) || (pFVar3->State == IsInsideRenderPass)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!CommandBuffer.HasEnded() && !CommandBuffer.IsInsideRenderPass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanRHI.cpp"
                       ,0x50e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FVulkanViewport::Present
            ((FVulkanViewport *)param_1,
             (FVulkanCommandListContext *)&this[-1].TypedDescriptorPoolSets.field_0x18,param_3);
  FMemScope::~FMemScope(&local_res10);
  FLLMScope::~FLLMScope(local_res8);
  return;
}

// RHISetMultipleViewports @ 145bd4c80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetMultipleViewports
          (FVulkanCommandListContext *this,uint param_1,FViewportBounds *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 auStack_168 [32];
  wchar_t *local_148;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_138._padding_ = 0;
  TStringConversion<TStringConvert<char,wchar_t>,128>::Init
            (&local_138,"FVulkanCommandListContext::RHISetMultipleViewports",0x32,Yes);
  local_148 = local_138.Ptr;
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("false",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\VulkanRHI\\Private\\VulkanViewport.cpp"
                     ,0x3cc,L"Unimplemented vulkan functionality: %s");
  if ((void *)local_138._padding_ != (void *)0x0) {
    FMemory::Free((void *)local_138._padding_);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// RHISetScissorRect @ 145bd4d30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetScissorRect
          (FVulkanCommandListContext *this,bool param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  FVulkanPendingGfxState::SetScissor
            ((FVulkanPendingGfxState *)this->_padding_,param_1,param_2,param_3,param_4,param_5);
  return;
}

// RHISetStereoViewport @ 145bd4d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetStereoViewport
          (FVulkanCommandListContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  undefined1 auStack_98 [32];
  TArrayView<VkViewport,int> local_78;
  VkViewport local_68;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_68.minDepth = param_5;
  local_68.x = (float)((int)ROUND((param_1 + param_1) - __real_3f000000) >> 1);
  local_68.y = (float)((int)ROUND((param_3 + param_3) - __real_3f000000) >> 1);
  local_68.maxDepth = param_10;
  local_68.width =
       (float)-((int)ROUND(__real_bf000000 - ((param_6 - param_1) + (param_6 - param_1))) >> 1);
  local_68.height =
       (float)-((int)ROUND(__real_bf000000 - ((param_8 - param_3) + (param_8 - param_3))) >> 1);
  local_50 = (float)((int)ROUND((param_2 + param_2) - __real_3f000000) >> 1);
  local_4c = (float)((int)ROUND((param_4 + param_4) - __real_3f000000) >> 1);
  local_48 = (float)-((int)ROUND(__real_bf000000 - ((param_7 - param_2) + (param_7 - param_2))) >> 1
                     );
  local_78.DataPtr = &local_68;
  local_44 = (float)-((int)ROUND(__real_bf000000 - ((param_9 - param_4) + (param_9 - param_4))) >> 1
                     );
  local_78.ArrayNum = 2;
  local_40 = param_5;
  local_3c = param_10;
  FVulkanPendingGfxState::SetMultiViewport((FVulkanPendingGfxState *)this->_padding_,&local_78);
  return;
}

// RHISetViewport @ 145bd4f30

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "VkImageLayout": Some values do not have unique names */
/* WARNING: Enum "VkStructureType": Some values do not have unique names */
/* WARNING: Enum "VkFormat": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentLoadOp": Some values do not have unique names */
/* WARNING: Enum "VkAttachmentStoreOp": Some values do not have unique names */
/* WARNING: Enum "VkDriverId": Some values do not have unique names */
/* WARNING: Enum "VkResult": Some values do not have unique names */
/* WARNING: Enum "VkObjectType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "VkDescriptorType": Some values do not have unique names */
/* WARNING: Enum "VkResolveModeFlagBits": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */

void __thiscall
FVulkanCommandListContext::RHISetViewport
          (FVulkanCommandListContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  FVulkanPendingGfxState::SetViewport
            ((FVulkanPendingGfxState *)this->_padding_,param_1,param_2,param_3,param_4,param_5,
             param_6);
  return;
}

// operator() @ 1504d8f00

bool __thiscall
`FVulkanCommandListContext::RHIBeginRenderQuery'::__l9::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8816365267845120331>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8816365267845120331>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

