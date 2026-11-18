// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 115

// SetResourcesFromTables<FD3D12AmplificationShader> @ 1459a6730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12AmplificationShader>
          (FD3D12CommandContext *this,FD3D12AmplificationShader *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers + 2;
  local_28.Frequency = SF_Amplification;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  pbVar2 = &param_1->field_0x118;
  if (param_1 == (FD3D12AmplificationShader *)0x0) {
    pbVar2 = &DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)(*pbVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)(*pbVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 2,
             this->BoundUniformBuffers + 2,*(FTracker **)&this->field_0x1c8);
  return;
}

// SetResourcesFromTables<FD3D12ComputeShader> @ 1459a67c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12ComputeShader>
          (FD3D12CommandContext *this,FD3D12ComputeShader *param_1)

{
  uint uVar1;
  longlong *plVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers + 5;
  local_28.Frequency = SF_Compute;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  plVar2 = &param_1->_padding_;
  if (param_1 == (FD3D12ComputeShader *)0x0) {
    plVar2 = (longlong *)&DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)((byte)*plVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)((byte)*plVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 5,
             this->BoundUniformBuffers + 5,*(FTracker **)&this->field_0x1c8);
  return;
}

// SetResourcesFromTables<FD3D12GeometryShader> @ 1459a6850

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12GeometryShader>
          (FD3D12CommandContext *this,FD3D12GeometryShader *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers + 4;
  local_28.Frequency = SF_Geometry;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  pbVar2 = &param_1->field_0x118;
  if (param_1 == (FD3D12GeometryShader *)0x0) {
    pbVar2 = &DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)(*pbVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)(*pbVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 4,
             this->BoundUniformBuffers + 4,*(FTracker **)&this->field_0x1c8);
  return;
}

// SetResourcesFromTables<FD3D12MeshShader> @ 1459a68e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12MeshShader>
          (FD3D12CommandContext *this,FD3D12MeshShader *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers + 1;
  local_28.Frequency = SF_Mesh;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  pbVar2 = &param_1->field_0x118;
  if (param_1 == (FD3D12MeshShader *)0x0) {
    pbVar2 = &DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)(*pbVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)(*pbVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 1,
             this->BoundUniformBuffers + 1,*(FTracker **)&this->field_0x1c8);
  return;
}

// SetResourcesFromTables<FD3D12PixelShader> @ 1459a6970

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12PixelShader>
          (FD3D12CommandContext *this,FD3D12PixelShader *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers + 3;
  local_28.Frequency = SF_Pixel;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  pbVar2 = &param_1->field_0x118;
  if (param_1 == (FD3D12PixelShader *)0x0) {
    pbVar2 = &DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)(*pbVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)(*pbVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers + 3,
             this->BoundUniformBuffers + 3,*(FTracker **)&this->field_0x1c8);
  return;
}

// SetResourcesFromTables<FD3D12VertexShader> @ 1459a6a00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetResourcesFromTables<FD3D12VertexShader>
          (FD3D12CommandContext *this,FD3D12VertexShader *param_1)

{
  uint uVar1;
  byte *pbVar2;
  bool bVar3;
  FD3D12ResourceBinder local_28;
  
  uVar1 = 0;
  bVar3 = *(int *)&this->field_0x2f8 != 0;
  if (bVar3) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  local_28.ConstantBuffer = this->StageConstantBuffers;
  local_28.Frequency = SF_Vertex;
  local_28.GpuIndex = 0x20;
  if (bVar3) {
    local_28.GpuIndex = uVar1;
  }
  pbVar2 = &param_1->field_0x118;
  if (param_1 == (FD3D12VertexShader *)0x0) {
    pbVar2 = &DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)(*pbVar2 >> 2 & 1);
  local_28.bBindlessResources = (bool)(*pbVar2 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,(FRHIShader *)param_1,this->DirtyUniformBuffers,this->BoundUniformBuffers,
             *(FTracker **)&this->field_0x1c8);
  return;
}

// FD3D12CommandContext @ 1459a8310

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */

FD3D12CommandContext * __thiscall
FD3D12CommandContext::FD3D12CommandContext
          (FD3D12CommandContext *this,FD3D12Device *param_1,ED3D12QueueType param_2,bool param_3)

{
  int *piVar1;
  int *piVar2;
  FD3D12FastConstantAllocator *this_00;
  TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FRHIGPUMask FVar4;
  int iVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FD3D12CommandContext *pFVar9;
  FUniformBufferStaticSlotRegistry *pFVar10;
  
  FD3D12ContextCommon::FD3D12ContextCommon((FD3D12ContextCommon *)this,param_1,param_2,param_3);
  FVar4.GPUMask = *(uint *)param_1;
  if (*(longlong *)&param_1->field_0x10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      pFVar9 = (FD3D12CommandContext *)(*pcVar6)();
      return pFVar9;
    }
  }
  FD3D12CommandContextBase::FD3D12CommandContextBase
            ((FD3D12CommandContextBase *)&this->field_0x1c0,*(FD3D12Adapter **)&param_1->field_0x10,
             FVar4);
  *(FD3D12Device **)&this->field_0x300 = param_1;
  *(undefined ***)this = &_vftable__for__FD3D12ContextCommon__;
  this_00 = &this->ConstantsAllocator;
  *(undefined ***)&this->field_0x1c0 = &_vftable__for__FD3D12CommandContextBase__;
  FD3D12FastConstantAllocator::FD3D12FastConstantAllocator
            (this_00,param_1,(FRHIGPUMask)*(uint *)param_1);
  (this->GPUEventStack).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GPUEventStack).ArrayNum = 0;
  (this->GPUEventStack).ArrayMax = 0;
  FD3D12StateCache::FD3D12StateCache(&this->StateCache,this,(FRHIGPUMask)*(uint *)param_1);
  memset(this->BoundUniformBuffers,0,0x300);
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  (this->OuterOcclusionQuery).Reference = (FRHIRenderQuery *)0x0;
  this->bDiscardSharedComputeConstants = false;
  this->bOuterOcclusionQuerySubmitted = false;
  this->bDiscardSharedGraphicsConstants = false;
  this->StageConstantBuffers[0]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->StageConstantBuffers[1]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->StageConstantBuffers[2]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->StageConstantBuffers[3]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->StageConstantBuffers[4]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->StageConstantBuffers[5]._padding_ = (longlong)&___7FD3D12ConstantBuffer__6B_;
  this->VRSCombiners[0] = D3D12_SHADING_RATE_COMBINER_PASSTHROUGH;
  this->VRSCombiners[1] = D3D12_SHADING_RATE_COMBINER_PASSTHROUGH;
  this->VRSShadingRate = D3D12_SHADING_RATE_1X1;
  this->StageConstantBuffers[0]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[0].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[0].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[0].CurrentUpdateSize = 0;
  this->StageConstantBuffers[0].TotalUpdateSize = 0;
  this->StageConstantBuffers[0].bIsDirty = false;
  this->StageConstantBuffers[0].Allocator = this_00;
  this->StageConstantBuffers[1]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[1].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[1].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[1].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[1].CurrentUpdateSize = 0;
  this->StageConstantBuffers[1].TotalUpdateSize = 0;
  this->StageConstantBuffers[1].bIsDirty = false;
  this->StageConstantBuffers[1].Allocator = this_00;
  this->StageConstantBuffers[2]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[2].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[2].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[2].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[2].CurrentUpdateSize = 0;
  this->StageConstantBuffers[2].TotalUpdateSize = 0;
  this->StageConstantBuffers[2].bIsDirty = false;
  this->StageConstantBuffers[2].Allocator = this_00;
  this->StageConstantBuffers[3]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[3].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[3].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[3].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[3].CurrentUpdateSize = 0;
  this->StageConstantBuffers[3].TotalUpdateSize = 0;
  this->StageConstantBuffers[3].bIsDirty = false;
  this->StageConstantBuffers[3].Allocator = this_00;
  this->StageConstantBuffers[4]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[4].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[4].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[4].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[4].CurrentUpdateSize = 0;
  this->StageConstantBuffers[4].TotalUpdateSize = 0;
  this->StageConstantBuffers[4].bIsDirty = false;
  this->StageConstantBuffers[4].Allocator = this_00;
  this->StageConstantBuffers[5]._padding_ = (longlong)param_1;
  this->StageConstantBuffers[5].ShadowData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->StageConstantBuffers[5].ShadowData.ArrayNum = 0;
  this->StageConstantBuffers[5].ShadowData.ArrayMax = 0;
  this->StageConstantBuffers[5].CurrentUpdateSize = 0;
  this->StageConstantBuffers[5].TotalUpdateSize = 0;
  this->StageConstantBuffers[5].bIsDirty = false;
  this->StageConstantBuffers[5].Allocator = this_00;
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)&this->RayTracingShaderTables);
  pTVar3 = &this->StaticUniformBuffers;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->StaticUniformBuffers).ArrayNum;
  piVar2 = &(this->StaticUniformBuffers).ArrayMax;
  *piVar1 = 0;
  *piVar2 = 0;
  this->ShaderBindinglayout = (FRHIShaderBindingLayout *)0x0;
  (this->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
  (this->BindlessState).bRefreshHeap = false;
  pFVar10 = FUniformBufferStaticSlotRegistry::Get();
  iVar5 = (pFVar10->SlotNames).ArrayNum;
  iVar8 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar5,&pTVar3->AllocatorInstance,piVar1,piVar2);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar8 * 8,0,(longlong)iVar5 << 3);
  FD3D12StateCache::ClearState(&this->StateCache);
  this->bDiscardSharedGraphicsConstants = false;
  this->bDiscardSharedComputeConstants = false;
  memset(this->BoundUniformBuffers,0,0x300);
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  memset((pTVar3->AllocatorInstance).Data,0,(longlong)(this->StaticUniformBuffers).ArrayNum << 3);
  return this;
}

// ~FD3D12CommandContext @ 1459ac1f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::~FD3D12CommandContext(FD3D12CommandContext *this)

{
  FScriptContainerElement *pFVar1;
  FRHIResource *this_00;
  TRobinHoodHashSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  longlong lVar3;
  
  *(undefined ***)this = &_vftable__for__FD3D12ContextCommon__;
  *(undefined ***)&this->field_0x1c0 = &_vftable__for__FD3D12CommandContextBase__;
  FD3D12StateCache::ClearState(&this->StateCache);
  this->bDiscardSharedGraphicsConstants = false;
  this->bDiscardSharedComputeConstants = false;
  memset(this->BoundUniformBuffers,0,0x300);
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  memset((this->StaticUniformBuffers).AllocatorInstance.Data,0,
         (longlong)(this->StaticUniformBuffers).ArrayNum << 3);
  FD3D12ContextBindlessState::~FD3D12ContextBindlessState(&this->BindlessState);
  pFVar1 = (this->StaticUniformBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::
  ~TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
            ((TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)&this->RayTracingShaderTables);
  lVar3 = 6;
  pTVar2 = &this->RayTracingShaderTables;
  do {
    lVar3 = lVar3 + -1;
    *(undefined ***)((longlong)(pTVar2 + -1) + 0x40) = &___7FD3D12ConstantBuffer__6B_;
    if (*(void **)((longlong)(pTVar2 + -1) + 0x50) != (void *)0x0) {
      FMemory::Free(*(void **)((longlong)(pTVar2 + -1) + 0x50));
    }
    pTVar2 = (TRobinHoodHashSet<unsigned___int64,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
              *)((longlong)(pTVar2 + -1) + 0x40);
  } while (lVar3 != 0);
  this_00 = (FRHIResource *)(this->OuterOcclusionQuery).Reference;
  if (this_00 != (FRHIResource *)0x0) {
    FRHIResource::Release(this_00);
  }
  FD3D12StateCache::~FD3D12StateCache(&this->StateCache);
  pFVar1 = (this->GPUEventStack).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&(this->ConstantsAllocator).UnderlyingResource);
  *(undefined ***)&this->field_0x1c0 = &___7IRHICommandContext__6B_;
  if (*(FRHIResource **)&this->field_0x2d8 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x2d8);
  }
  *(undefined ***)&this->field_0x1c0 = &___7IRHIComputeContext__6B_;
  FD3D12ContextCommon::~FD3D12ContextCommon((FD3D12ContextCommon *)this);
  return;
}

// ClearAllShaderResources @ 1459b63e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::ClearAllShaderResources(FD3D12CommandContext *this)

{
  FD3D12StateCache::ClearSRVs(&this->StateCache);
  return;
}

// ClearShaderResources @ 1459b6400

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ClearShaderResources
          (FD3D12CommandContext *this,FD3D12BaseShaderResource *param_1,
          EShaderParameterTypeMask param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FD3D12ResourceLocation *local_res10;
  
  if (param_1 != (FD3D12BaseShaderResource *)0x0) {
    local_res10 = &param_1->ResourceLocation;
    if ((local_res10 == (FD3D12ResourceLocation *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                           ,0x2a9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = 0;
    do {
      FD3D12StateCache::ClearResourceViewCaches
                (&this->StateCache,(EShaderFrequency)iVar3,&local_res10,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return;
}

// ClearShaderResources @ 1459b6490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ClearShaderResources
          (FD3D12CommandContext *this,FD3D12UnorderedAccessView *param_1,
          EShaderParameterTypeMask param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FD3D12ResourceLocation *local_res10;
  
  if (param_1 != (FD3D12UnorderedAccessView *)0x0) {
    if ((param_1->_padding_ == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                           ,0x100,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_res10 = (FD3D12ResourceLocation *)param_1->_padding_;
    if ((local_res10 == (FD3D12ResourceLocation *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Resource",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                           ,0x2a9,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    iVar3 = 0;
    do {
      FD3D12StateCache::ClearResourceViewCaches
                (&this->StateCache,(EShaderFrequency)iVar3,&local_res10,param_2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
  }
  return;
}

// ClearState @ 1459b6560

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::ClearState(FD3D12CommandContext *this,EClearStateMode param_1)

{
  FD3D12StateCache::ClearState(&this->StateCache);
  this->bDiscardSharedGraphicsConstants = false;
  this->bDiscardSharedComputeConstants = false;
  memset(this->BoundUniformBuffers,0,0x300);
  this->DirtyUniformBuffers[0] = 0;
  this->DirtyUniformBuffers[1] = 0;
  this->DirtyUniformBuffers[2] = 0;
  this->DirtyUniformBuffers[3] = 0;
  this->DirtyUniformBuffers[4] = 0;
  this->DirtyUniformBuffers[5] = 0;
  if (param_1 == All) {
    memset((this->StaticUniformBuffers).AllocatorInstance.Data,0,
           (longlong)(this->StaticUniformBuffers).ArrayNum << 3);
  }
  return;
}

// CloseCommandList @ 1459b6e70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::CloseCommandList(FD3D12CommandContext *this)

{
  longlong *plVar1;
  undefined1 *puVar2;
  longlong lVar3;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  undefined1 *puVar9;
  
  FD3D12DescriptorCache::CloseCommandList(&(this->StateCache).DescriptorCache);
  FD3D12ContextCommon::CloseCommandList((FD3D12ContextCommon *)this);
  if (*(longlong *)&this->field_0x300 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar3 = *(longlong *)&this->field_0x300;
  this_00 = *(FD3D12BindlessResourceManager **)(lVar3 + 0x740);
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
    pFVar4 = (this->BindlessState).CurrentGpuHeap.Reference;
    if (pFVar4 != (FD3D12DescriptorHeap *)0x0) {
      (this->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar4->_padding_;
      LOCK();
      lVar6 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar6 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar4->_padding_)();
      }
    }
    (this->BindlessState).bRefreshHeap = false;
    if (1 < (int)this_00->Configuration) {
      FD3D12StateCache::SetNewBindlessResourcesHeap(&this->StateCache,(FD3D12DescriptorHeap *)0x0);
    }
  }
  lVar3 = *(longlong *)(lVar3 + 0x748);
  if ((lVar3 != 0) && (1 < *(int *)(lVar3 + 0x10))) {
    FD3D12StateCache::SetNewBindlessSamplerHeap(&this->StateCache,(FD3D12DescriptorHeap *)0x0);
  }
  FD3D12StateCache::DirtyStateForNewCommandList(&this->StateCache);
  puVar2 = &(this->RayTracingShaderTables).field_0x54;
  *(undefined4 *)&(this->RayTracingShaderTables).field_0x50 = 0;
  if (*(int *)&(this->RayTracingShaderTables).field_0x54 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,1,(ForElementType<unsigned_int> *)&(this->RayTracingShaderTables).field_0x40,0,
               (int *)puVar2);
  }
  iVar8 = *(int *)&(this->RayTracingShaderTables).field_0x50;
  if (iVar8 == *(int *)puVar2) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                      (0x404,(ForElementType<unsigned_int> *)
                             &(this->RayTracingShaderTables).field_0x40,(int *)puVar2);
  }
  puVar2 = &(this->RayTracingShaderTables).field_0x58;
  *(int *)&(this->RayTracingShaderTables).field_0x50 = iVar8 + 1;
  puVar9 = &(this->RayTracingShaderTables).field_0x6c;
  *(undefined4 *)&(this->RayTracingShaderTables).field_0x68 = 0;
  if (*(int *)puVar9 != 1) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
              (4,4,1,(ForElementType<Experimental::FHashType> *)puVar2,0,(int *)puVar9);
  }
  iVar8 = *(int *)&(this->RayTracingShaderTables).field_0x68;
  if (iVar8 == *(int *)&(this->RayTracingShaderTables).field_0x6c) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<Experimental::FHashType>_>
                      (0x404,(ForElementType<Experimental::FHashType> *)puVar2,(int *)puVar9);
  }
  *(int *)&(this->RayTracingShaderTables).field_0x68 = iVar8 + 1;
  puVar9 = *(undefined1 **)&(this->RayTracingShaderTables).field_0x60;
  if (puVar9 == (undefined1 *)0x0) {
    puVar9 = puVar2;
  }
  DefaultConstructItems<Experimental::FHashType,int>(puVar9 + (longlong)iVar8 * 4,1);
  Experimental::RobinHoodHashTable_Private::
  TRobinHoodHashTable<unsigned___int64,Experimental::RobinHoodHashTable_Private::FUnitType,DefaultKeyFuncs<unsigned___int64,0>,TSizedDefaultAllocator<32>_>
  ::FData::Empty((FData *)&this->RayTracingShaderTables);
  *(undefined8 *)&(this->RayTracingShaderTables).field_0x70 = 0;
  return;
}

// CommitComputeResourceTables @ 1459b7b60

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12CommandContext::CommitComputeResourceTables(FD3D12CommandContext *this)

{
  FRHIShader *pFVar1;
  uint uVar2;
  longlong *plVar3;
  bool bVar4;
  FD3D12ResourceBinder local_28;
  
  uVar2 = 0;
  bVar4 = *(int *)&this->field_0x2f8 != 0;
  if (bVar4) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  local_28.Frequency = SF_Compute;
  pFVar1 = (FRHIShader *)
           ((this->StateCache).PipelineState.Compute.CurrentPipelineStateObject.Reference)->
           _padding_;
  local_28.ConstantBuffer = this->StageConstantBuffers + 5;
  local_28.GpuIndex = 0x20;
  if (bVar4) {
    local_28.GpuIndex = uVar2;
  }
  plVar3 = &pFVar1[1]._padding_;
  if (pFVar1 == (FRHIShader *)0x0) {
    plVar3 = (longlong *)&DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)((byte)*plVar3 >> 2 & 1);
  local_28.bBindlessResources = (bool)((byte)*plVar3 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,pFVar1,this->DirtyUniformBuffers + 5,this->BoundUniformBuffers + 5,
             *(FTracker **)&this->field_0x1c8);
  return;
}

// CommitComputeShaderConstants @ 1459b7c00

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::CommitComputeShaderConstants(FD3D12CommandContext *this)

{
  ushort *puVar1;
  uint uVar2;
  FD3D12ComputePipelineState *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  void *_Dst;
  uint uVar7;
  FD3D12ResourceLocation local_88;
  
  pFVar3 = (this->StateCache).PipelineState.Compute.CurrentPipelineStateObject.Reference;
  if (pFVar3 == (FD3D12ComputePipelineState *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputePSO",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x414,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (pFVar3->bShaderNeedsGlobalConstantBuffer) {
    bVar5 = this->bDiscardSharedComputeConstants;
    if (*(longlong *)&this->StateCache == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    FD3D12ResourceLocation::FD3D12ResourceLocation(&local_88,*(FD3D12Device **)&this->StateCache);
    uVar7 = this->StageConstantBuffers[5].CurrentUpdateSize;
    if (uVar7 != 0) {
      if (bVar5 == false) {
        uVar2 = this->StageConstantBuffers[5].TotalUpdateSize;
        if (uVar2 < uVar7) {
          uVar2 = uVar7;
        }
        uVar7 = uVar2;
        this->StageConstantBuffers[5].TotalUpdateSize = uVar7;
      }
      else {
        this->StageConstantBuffers[5].TotalUpdateSize = uVar7;
      }
      _Dst = FD3D12FastConstantAllocator::Allocate
                       (this->StageConstantBuffers[5].Allocator,uVar7,&local_88,
                        (FD3D12ConstantBufferView *)0x0);
      if ((uint)this->StageConstantBuffers[5].ShadowData.ArrayNum <
          this->StageConstantBuffers[5].TotalUpdateSize) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TotalUpdateSize <= (uint32)ShadowData.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ConstantBuffer.cpp"
                           ,0x39,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      memcpy(_Dst,this->StageConstantBuffers[5].ShadowData.AllocatorInstance.Data,
             (ulonglong)this->StageConstantBuffers[5].TotalUpdateSize);
      this->StageConstantBuffers[5].bIsDirty = false;
      if (local_88.GPUVirtualAddress ==
          (this->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[5][0]) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Location.GetGPUVirtualAddress() != CurrentGPUVirtualAddress",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                           ,0x247,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      (this->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[5][0] =
           local_88.GPUVirtualAddress;
      (this->StateCache).PipelineState.Common.CBVCache.Resources[5][0] = local_88.UnderlyingResource
      ;
      puVar1 = (ushort *)((longlong)&(this->StateCache).PipelineState.Common.CBVCache._padding_ + 2)
      ;
      *puVar1 = *puVar1 | 1;
    }
    FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_88);
  }
  this->bDiscardSharedComputeConstants = false;
  return;
}

// CommitGraphicsResourceTables @ 1459b7db0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall FD3D12CommandContext::CommitGraphicsResourceTables(FD3D12CommandContext *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  FD3D12GraphicsPipelineState *pFVar4;
  FRHIShader *pFVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  FD3D12ResourceBinder local_b8;
  FD3D12ResourceBinder local_a0;
  FD3D12ResourceBinder local_88;
  FD3D12ResourceBinder local_70;
  FD3D12ResourceBinder local_58;
  
  pFVar4 = (this->StateCache).PipelineState.Graphics.CurrentPipelineStateObject.Reference;
  if ((pFVar4 == (FD3D12GraphicsPipelineState *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("GraphicPSO",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x436,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (FRHIShader *)(pFVar4->PipelineStateInitializer).BoundShaderState.PixelShaderRHI;
  puVar1 = &this->field_0x2f8;
  puVar2 = &this->field_0x1c8;
  if (pFVar5 != (FRHIShader *)0x0) {
    uVar6 = 0;
    if (*(int *)puVar1 != 0) {
      for (; (*(uint *)puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_b8.ConstantBuffer = this->StageConstantBuffers + 3;
    local_b8.Frequency = SF_Pixel;
    local_b8.GpuIndex = 0x20;
    if (*(int *)puVar1 != 0) {
      local_b8.GpuIndex = uVar6;
    }
    bVar3 = (byte)pFVar5[1]._padding_;
    local_b8.bBindlessResources = (bool)(bVar3 >> 1 & 1);
    local_b8.bBindlessSamplers = (bool)(bVar3 >> 2 & 1);
    local_b8.Context = this;
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
              (&local_b8,pFVar5,this->DirtyUniformBuffers + 3,this->BoundUniformBuffers + 3,
               *(FTracker **)puVar2);
  }
  pFVar5 = (FRHIShader *)(pFVar4->PipelineStateInitializer).BoundShaderState.VertexShaderRHI;
  if (pFVar5 != (FRHIShader *)0x0) {
    uVar6 = 0;
    if (*(int *)puVar1 != 0) {
      for (; (*(uint *)puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_a0.GpuIndex = 0x20;
    if (*(int *)puVar1 != 0) {
      local_a0.GpuIndex = uVar6;
    }
    local_a0.Frequency = SF_Vertex;
    bVar3 = (byte)pFVar5[1]._padding_;
    local_a0.bBindlessSamplers = (bool)(bVar3 >> 2 & 1);
    local_a0.bBindlessResources = (bool)(bVar3 >> 1 & 1);
    local_a0.Context = this;
    local_a0.ConstantBuffer = this->StageConstantBuffers;
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
              (&local_a0,pFVar5,this->DirtyUniformBuffers,this->BoundUniformBuffers,
               *(FTracker **)puVar2);
  }
  pFVar5 = (FRHIShader *)(pFVar4->PipelineStateInitializer).BoundShaderState.MeshShaderRHI;
  if (pFVar5 != (FRHIShader *)0x0) {
    uVar6 = 0;
    if (*(int *)puVar1 != 0) {
      for (; (*(uint *)puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_88.ConstantBuffer = this->StageConstantBuffers + 1;
    local_88.Frequency = SF_Mesh;
    local_88.GpuIndex = 0x20;
    if (*(int *)puVar1 != 0) {
      local_88.GpuIndex = uVar6;
    }
    bVar3 = (byte)pFVar5[1]._padding_;
    local_88.bBindlessResources = (bool)(bVar3 >> 1 & 1);
    local_88.bBindlessSamplers = (bool)(bVar3 >> 2 & 1);
    local_88.Context = this;
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
              (&local_88,pFVar5,this->DirtyUniformBuffers + 1,this->BoundUniformBuffers + 1,
               *(FTracker **)puVar2);
  }
  pFVar5 = (FRHIShader *)(pFVar4->PipelineStateInitializer).BoundShaderState.AmplificationShaderRHI;
  if (pFVar5 != (FRHIShader *)0x0) {
    uVar6 = 0;
    if (*(int *)puVar1 != 0) {
      for (; (*(uint *)puVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_70.ConstantBuffer = this->StageConstantBuffers + 2;
    local_70.Frequency = SF_Amplification;
    local_70.GpuIndex = 0x20;
    if (*(int *)puVar1 != 0) {
      local_70.GpuIndex = uVar6;
    }
    bVar3 = (byte)pFVar5[1]._padding_;
    local_70.bBindlessResources = (bool)(bVar3 >> 1 & 1);
    local_70.bBindlessSamplers = (bool)(bVar3 >> 2 & 1);
    local_70.Context = this;
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
              (&local_70,pFVar5,this->DirtyUniformBuffers + 2,this->BoundUniformBuffers + 2,
               *(FTracker **)puVar2);
  }
  pFVar5 = (FRHIShader *)(pFVar4->PipelineStateInitializer).BoundShaderState.GeometryShaderRHI;
  if (pFVar5 != (FRHIShader *)0x0) {
    bVar3 = (byte)pFVar5[1]._padding_;
    local_58.ConstantBuffer = this->StageConstantBuffers + 4;
    uVar6 = 0;
    bVar8 = *(int *)&this->field_0x2f8 != 0;
    if (bVar8) {
      for (; (*(uint *)&this->field_0x2f8 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
    local_58.Frequency = SF_Geometry;
    local_58.GpuIndex = 0x20;
    if (bVar8) {
      local_58.GpuIndex = uVar6;
    }
    local_58.bBindlessResources = (bool)(bVar3 >> 1 & 1);
    local_58.bBindlessSamplers = (bool)(bVar3 >> 2 & 1);
    local_58.Context = this;
    UE::RHI::Private::
    SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
              (&local_58,pFVar5,this->DirtyUniformBuffers + 4,this->BoundUniformBuffers + 4,
               *(FTracker **)&this->field_0x1c8);
  }
  return;
}

// CommitNonComputeShaderConstants @ 1459b8050

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::CommitNonComputeShaderConstants(FD3D12CommandContext *this)

{
  ushort *puVar1;
  FD3D12GraphicsPipelineState *pFVar2;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  void *_Dst;
  uint *puVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  bool *pbVar12;
  FD3D12ResourceLocation local_98;
  
  pFVar2 = (this->StateCache).PipelineState.Graphics.CurrentPipelineStateObject.Reference;
  if (pFVar2 == (FD3D12GraphicsPipelineState *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("GraphicPSO",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x3ff,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pbVar12 = pFVar2->bShaderNeedsGlobalConstantBuffer;
  puVar8 = &this->StageConstantBuffers[0].TotalUpdateSize;
  uVar11 = 0;
  do {
    uVar9 = uVar11 & 0xff;
    if ((((((char)uVar11 == '\0') || (iVar7 = (int)uVar9, iVar7 == 1)) || (iVar7 == 2)) ||
        ((iVar7 == 3 || (iVar7 == 4)))) && (*pbVar12 != false)) {
      bVar5 = this->bDiscardSharedGraphicsConstants;
      if (*(longlong *)&this->StateCache == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FD3D12ResourceLocation::FD3D12ResourceLocation(&local_98,*(FD3D12Device **)&this->StateCache);
      uVar10 = puVar8[-1];
      if (uVar10 != 0) {
        if (bVar5 == false) {
          uVar4 = *puVar8;
          if (*puVar8 < uVar10) {
            uVar4 = uVar10;
          }
          uVar10 = uVar4;
          *puVar8 = uVar10;
        }
        else {
          *puVar8 = uVar10;
        }
        _Dst = FD3D12FastConstantAllocator::Allocate
                         (*(FD3D12FastConstantAllocator **)(puVar8 + 3),uVar10,&local_98,
                          (FD3D12ConstantBufferView *)0x0);
        if (puVar8[-3] < *puVar8) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TotalUpdateSize <= (uint32)ShadowData.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12ConstantBuffer.cpp"
                             ,0x39,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        memcpy(_Dst,(((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)(puVar8 + -5))->
                    AllocatorInstance).Data,(ulonglong)*puVar8);
        *(bool *)(puVar8 + 1) = false;
        if (local_98.GPUVirtualAddress ==
            (this->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9][0]) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Location.GetGPUVirtualAddress() != CurrentGPUVirtualAddress",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                             ,0x247,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        (this->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress[uVar9][0] =
             local_98.GPUVirtualAddress;
        (this->StateCache).PipelineState.Common.CBVCache.Resources[uVar9][0] =
             local_98.UnderlyingResource;
        puVar1 = (ushort *)
                 ((longlong)
                  ((this->StateCache).PipelineState.Common.CBVCache.CurrentGPUVirtualAddress + -1) +
                  0x70U + uVar9 * 2);
        *puVar1 = *puVar1 | 1;
      }
      FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_98);
    }
    uVar10 = (int)uVar11 + 1;
    uVar11 = (ulonglong)uVar10;
    pbVar12 = pbVar12 + 1;
    puVar8 = puVar8 + 0xe;
  } while ((int)uVar10 < 5);
  this->bDiscardSharedGraphicsConstants = false;
  return;
}

// ConditionalClearShaderResource @ 1459b8270

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ConditionalClearShaderResource
          (FD3D12CommandContext *this,FD3D12ResourceLocation *param_1,
          EShaderParameterTypeMask param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FD3D12ResourceLocation *local_res10;
  
  local_res10 = param_1;
  if (param_1 == (FD3D12ResourceLocation *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                       ,0x2a9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = 0;
  do {
    FD3D12StateCache::ClearResourceViewCaches
              (&this->StateCache,(EShaderFrequency)iVar3,&local_res10,param_2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 6);
  return;
}

// CopyBufferRegionChecked @ 1459b89c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::CopyBufferRegionChecked
          (FD3D12CommandContext *this,ID3D12Resource *param_1,FName *param_2,ulong64 param_3,
          ID3D12Resource *param_4,FName *param_5,ulong64 param_6,uint param_7)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  undefined1 auStack_138 [32];
  FScriptContainerElement *local_118;
  FScriptContainerElement *local_110;
  ulong64 local_108;
  FString local_100;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  undefined1 local_c0 [56];
  undefined1 local_88 [56];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStack_138;
  uVar9 = (ulonglong)param_7;
  local_108 = param_3;
  lVar5 = (**(code **)((longlong)*param_1 + 0x50))(param_1,local_c0);
  pwVar8 = L"";
  if (*(ulonglong *)(lVar5 + 0x10) < uVar9 + param_3) {
    pFVar6 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                       (&local_f0,this);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::ToString(param_2,&local_100);
    if ((pFVar6->Data).ArrayNum == 0) {
      local_118 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_118 = (pFVar6->Data).AllocatorInstance.Data;
    }
    local_110 = (FScriptContainerElement *)pwVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestOffset + ByteCount <= DestResource->GetDesc().Width",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x67,L"Dest byte range out of bounds for: \'%s\'\nBreadcrumbs: %s");
    if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_100.Data.AllocatorInstance.Data);
    }
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  lVar5 = (**(code **)((longlong)*param_4 + 0x50))(param_4,local_88);
  if (*(ulonglong *)(lVar5 + 0x10) < uVar9 + param_6) {
    pFVar6 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                       (&local_d0,this);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = ::FName::ToString(param_5,&local_e0);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    local_118 = (FScriptContainerElement *)pwVar8;
    local_110 = (FScriptContainerElement *)pwVar7;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceOffset + ByteCount <= SourceResource->GetDesc().Width",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                       ,0x68,L"Source byte range out of bounds for: \'%s\'\nBreadcrumbs: %s");
    if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e0.Data.AllocatorInstance.Data);
    }
    if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d0.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  local_118 = (FScriptContainerElement *)param_6;
  plVar2 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
  piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  local_110 = (FScriptContainerElement *)uVar9;
  (**(code **)(*plVar2 + 0x78))(plVar2,param_1,local_108,param_4);
  return;
}

// Finalize @ 1459bf8f0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::Finalize
          (FD3D12CommandContext *this,TArray<FD3D12Payload_*,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong *plVar1;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar2;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  
  if (*(longlong *)&this->field_0x300 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  this_00 = *(FD3D12BindlessResourceManager **)(*(longlong *)&this->field_0x300 + 0x740);
  if (this_00 != (FD3D12BindlessResourceManager *)0x0) {
    if (*(longlong *)&this->field_0x188 != 0) {
      CloseCommandList(this);
    }
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
    pFVar2 = (this->BindlessState).CurrentGpuHeap.Reference;
    if (pFVar2 != (FD3D12DescriptorHeap *)0x0) {
      (this->BindlessState).CurrentGpuHeap.Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar2->_padding_;
      LOCK();
      lVar4 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar4 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar2->_padding_)(pFVar2,1);
      }
    }
    (this->BindlessState).bRefreshHeap = false;
  }
  FlushProfilerStats(this);
  FD3D12ContextCommon::Finalize((FD3D12ContextCommon *)this,param_1);
  return;
}

// FlushPendingDescriptorUpdates @ 1459c09b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::FlushPendingDescriptorUpdates(FD3D12CommandContext *this)

{
  longlong *plVar1;
  FD3D12ContextBindlessState *pFVar2;
  FD3D12BindlessResourceManager *this_00;
  FD3D12DescriptorHeap *pFVar3;
  code *pcVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(longlong *)&this->field_0x300 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = *(FD3D12BindlessResourceManager **)(*(longlong *)&this->field_0x300 + 0x740);
  if ((this_00 != (FD3D12BindlessResourceManager *)0x0) &&
     ((pFVar2 = &this->BindlessState, (this->BindlessState).bRefreshHeap != false ||
      (this_00->bRequestNewActiveGpuHeap != false)))) {
    FD3D12BindlessResourceManager::CheckRequestNewActiveGPUHeap(this_00);
    pFVar3 = (pFVar2->CurrentGpuHeap).Reference;
    if (pFVar3 != (FD3D12DescriptorHeap *)0x0) {
      (pFVar2->CurrentGpuHeap).Reference = (FD3D12DescriptorHeap *)0x0;
      plVar1 = &pFVar3->_padding_;
      LOCK();
      lVar5 = *plVar1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if (((int)lVar5 == 1) && (plVar1 != (longlong *)0x0)) {
        (**(code **)pFVar3->_padding_)(pFVar3,1);
      }
    }
    (this->BindlessState).bRefreshHeap = false;
    FD3D12BindlessResourceManager::AssignHeapToState(this_00,pFVar2);
    if (1 < (int)this_00->Configuration) {
      if (*(longlong *)&this->field_0x188 == 0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_7454976178223316442>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12BindlessDescriptors.cpp"
                           ,0x226,"Context.IsOpen()");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else {
        FD3D12StateCache::SetNewBindlessResourcesHeap
                  (&this->StateCache,(pFVar2->CurrentGpuHeap).Reference);
      }
    }
  }
  return;
}

// FlushProfilerStats @ 1459c0af0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::FlushProfilerStats(FD3D12CommandContext *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FStats *pFVar5;
  
  if ((((*(int *)&this->field_0x1e0 != 0) || (*(int *)&this->field_0x1e4 != 0)) ||
      (*(int *)&this->field_0x1e8 != 0)) || (*(int *)&this->field_0x1ec != 0)) {
    uVar1 = *(undefined4 *)&this->field_0x1e0;
    uVar2 = *(undefined4 *)&this->field_0x1e4;
    uVar3 = *(undefined4 *)&this->field_0x1e8;
    uVar4 = *(undefined4 *)&this->field_0x1ec;
    if (*(longlong *)&this->field_0x188 == 0) {
      (**(code **)(*(longlong *)this + 8))();
    }
    pFVar5 = UE::RHI::GPUProfiler::FEventStream::Emplace<UE::RHI::GPUProfiler::FEvent::FStats>
                       ((FEventStream *)(*(longlong *)&this->field_0x188 + 0x170));
    pFVar5->NumDraws = uVar1;
    pFVar5->NumDispatches = uVar2;
    pFVar5->NumPrimitives = uVar3;
    pFVar5->NumVertices = uVar4;
    *(undefined8 *)&this->field_0x1e0 = 0;
    *(undefined8 *)&this->field_0x1e8 = 0;
  }
  return;
}

// Get @ 1459c1b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContext * __cdecl FD3D12CommandContext::Get(FRHICommandListBase *param_1,uint param_2)

{
  ERHIPipeline EVar1;
  code *pcVar2;
  bool bVar3;
  FD3D12CommandContext *pFVar4;
  longlong *plVar5;
  
  EVar1 = param_1->ActivePipelines;
  if ((EVar1 == None) || ((EVar1 & EVar1 - Graphics) != None)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSingleRHIPipeline(ActivePipelines)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b7,
                       L"Exactly one pipeline must be active to call GetComputeContext(). Current pipeline mask is \'0x%02x\'."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12CommandContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  if (param_1->ComputeContext == (IRHIComputeContext *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ComputeContext",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2b8,
                       L"There is no active compute context on this command list. There may be a missing call to SwitchPipeline()."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar4 = (FD3D12CommandContext *)(*pcVar2)();
      return pFVar4;
    }
  }
  plVar5 = (longlong *)(**(code **)(param_1->ComputeContext->_padding_ + 0x148))();
                    /* WARNING: Could not recover jumptable at 0x0001459c1c00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar4 = (FD3D12CommandContext *)
           (**(code **)(*plVar5 + 0x290))(plVar5,param_2,*(code **)(*plVar5 + 0x290));
  return pFVar4;
}

// GetBindlessResourcesHeap @ 1459c1d50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12DescriptorHeap * __thiscall
FD3D12CommandContext::GetBindlessResourcesHeap(FD3D12CommandContext *this)

{
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))();
    return (this->StateCache).DescriptorCache.BindlessResourcesHeap.Reference;
  }
  return (this->StateCache).DescriptorCache.BindlessResourcesHeap.Reference;
}

// GetFrameFenceCounter @ 1459c2330

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

uint __thiscall FD3D12CommandContext::GetFrameFenceCounter(FD3D12CommandContext *this)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  if (*(longlong *)&this->field_0x300 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar1 = *(longlong *)&this->field_0x300;
  if (*(longlong *)(lVar1 + 0x10) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x10);
  if (*(longlong *)(lVar1 + 0x548) == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FrameFence",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Adapter.h"
                       ,0xff,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  return *(int *)(*(longlong *)(lVar1 + 0x548) + 0x58) + 1;
}

// GetPipeline @ 1459c2840

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ERHIPipeline __thiscall FD3D12CommandContext::GetPipeline(FD3D12CommandContext *this)

{
  return (*(int *)&this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data != 0) +
         Graphics;
}

// GetSingleDeviceContext @ 1459c3080

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

FD3D12CommandContext * __thiscall
FD3D12CommandContext::GetSingleDeviceContext(FD3D12CommandContext *this,uint param_1)

{
  uint uVar1;
  FD3D12CommandContext *pFVar2;
  uint uVar3;
  bool bVar4;
  
  uVar1 = 0;
  bVar4 = *(int *)&this->field_0x138 != 0;
  if (bVar4) {
    for (; (*(uint *)&this->field_0x138 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  uVar3 = 0x20;
  if (bVar4) {
    uVar3 = uVar1;
  }
  pFVar2 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  if (param_1 != uVar3) {
    pFVar2 = (FD3D12CommandContext *)0x0;
  }
  return pFVar2;
}

// OpenCommandList @ 1459c8970

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::OpenCommandList(FD3D12CommandContext *this)

{
  FD3D12ContextCommon::OpenCommandList((FD3D12ContextCommon *)this);
  FD3D12DescriptorCache::OpenCommandList(&(this->StateCache).DescriptorCache);
  return;
}

// PostGpuEvent @ 1459c9270

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::PostGpuEvent(FD3D12CommandContext *this)

{
  if ((this->StateCache).DescriptorCache.bUsingExplicitCacheHeaps != false) {
    FD3D12DescriptorCache::SetDescriptorHeaps
              (&(this->StateCache).DescriptorCache,
               -(uint)((this->StateCache).DescriptorCache.bLastSetHeapBeforeExplicitIsBindless !=
                      false) & Bindless);
    (this->StateCache).DescriptorCache.bUsingExplicitCacheHeaps = false;
    (this->StateCache).DescriptorCache.bExplicitViewHeapIsBindless = false;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this);
  return;
}

// RHIBeginBreadcrumbGPU @ 1459c9600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBeginBreadcrumbGPU(FD3D12CommandContext *this,FRHIBreadcrumbNode *param_1)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  FD3D12DiagnosticBuffer *pFVar2;
  longlong lVar3;
  AGSContext *pAVar4;
  char *pcVar5;
  longlong *plVar6;
  code *pcVar7;
  ulong64 *puVar8;
  bool bVar9;
  FD3D12Queue *pFVar10;
  wchar_t *pwVar11;
  TStringConversion<TStringConvert<wchar_t,char>,128> *pTVar12;
  FBeginBreadcrumb *pFVar13;
  undefined1 auStackY_448 [32];
  uchar local_418 [8];
  ulong64 *local_410;
  FRHIBreadcrumbNode *local_408;
  ulong64 *local_400;
  FD3D12QueryLocation local_3f8;
  TStringConversion<TStringConvert<wchar_t,char>,128> local_3d8;
  undefined1 local_338 [256];
  undefined8 local_238;
  undefined8 local_230;
  ulong64 local_228 [60];
  ulong64 local_48 [2];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_448;
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  local_408 = param_1;
  pFVar10 = FD3D12Device::GetQueue
                      ((FD3D12Device *)this[-1].StageConstantBuffers[1]._padding_,
                       *(ED3D12QueueType *)
                        &this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data);
  pFVar2 = (pFVar10->DiagnosticBuffer).Ptr;
  if (((pFVar2 != (FD3D12DiagnosticBuffer *)0x0) &&
      ((pFVar2->Resource).Reference != (FD3D12Resource *)0x0)) &&
     (bVar9 = UE::RHI::UseGPUCrashBreadcrumbs(), bVar9)) {
    FD3D12ContextCommon::WriteMarker
              ((FD3D12ContextCommon *)this_00,pFVar2->GpuAddress + 0x600,param_1->ID,In);
  }
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  UE::RHICore::Nvidia::Aftermath::D3D12::BeginBreadcrumb
            (*(GFSDK_Aftermath_ContextHandle__ **)
              (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 + 0x88),param_1);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar3 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  piVar1 = (int *)(lVar3 + 0x168);
  *piVar1 = *piVar1 + 1;
  UE::RHICore::Intel::GPUCrashDumps::D3D12::BeginBreadcrumb
            (*(ID3D12GraphicsCommandList **)(lVar3 + 0x28),param_1);
  pwVar11 = (wchar_t *)0x0;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(char *)(*(longlong *)&this->field_0x18 + 0xf8) != '\0') {
    pAVar4 = FD3D12DynamicRHI::SingleD3DRHI->AmdAgsContext;
    if ((pAVar4 != (AGSContext *)0x0) && (GEmitRgpFrameMarkers != 0)) {
      pwVar11 = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_338);
      pTVar12 = StringCast<char,128,wchar_t>(&local_3d8,pwVar11);
      pcVar5 = pTVar12->Ptr;
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(*(longlong *)this_00 + 8))(this_00);
      }
      lVar3 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
      piVar1 = (int *)(lVar3 + 0x168);
      *piVar1 = *piVar1 + 1;
      agsDriverExtensionsDX12_PushMarker(pAVar4,*(undefined8 *)(lVar3 + 0x28),pcVar5);
      if ((void *)local_3d8._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_3d8._padding_);
      }
    }
    if (FD3D12DynamicRHI::SingleD3DRHI->bPixEventEnabled != false) {
      if (pwVar11 == (wchar_t *)0x0) {
        pwVar11 = (wchar_t *)(**(code **)(param_1->_padding_ + 0x10))(param_1,local_338);
      }
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(*(longlong *)this_00 + 8))(this_00);
      }
      lVar3 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
      local_400 = (ulong64 *)0x0;
      local_418[0] = '\0';
      plVar6 = *(longlong **)(lVar3 + 0x28);
      piVar1 = (int *)(lVar3 + 0x168);
      *piVar1 = *piVar1 + 1;
      PIXEventsDetail::PIXBeginEventOnContextCpu<wchar_t_const_*,wchar_t_const_*>
                (&local_400,local_418,plVar6,0xffffffff,L"%s",pwVar11);
      local_410 = local_228;
      local_238 = 0x400;
      local_230 = 0xffffffff;
      PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_410,local_48,L"%s");
      PixEventsLegacy::PIXCopyEventArgument<wchar_t_const_*>(&local_410,local_48,pwVar11);
      puVar8 = local_410;
      *local_410 = 0;
      (**(code **)(*plVar6 + 0x1c8))(plVar6,2,&local_238,(int)puVar8 - (int)&local_238);
    }
  }
  FlushProfilerStats(this_00);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  pFVar13 = UE::RHI::GPUProfiler::FEventStream::
            Emplace<UE::RHI::GPUProfiler::FEvent::FBeginBreadcrumb,FRHIBreadcrumbNode_*_&>
                      ((FEventStream *)
                       (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 + 0x170),&local_408
                      );
  FD3D12QueryAllocator::Allocate
            ((FD3D12QueryAllocator *)(this[-1].StageConstantBuffers + 2),&local_3f8,
             ProfilerTimestampTOP,&pFVar13->GPUTimestampTOP);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  FD3D12CommandList::EndQuery
            (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,&local_3f8);
  return;
}

// RHIBeginRenderPass @ 1459c99d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBeginRenderPass
          (FD3D12CommandContext *this,FRHIRenderPassInfo *param_1,wchar_t *param_2)

{
  FRHITexture *pFVar1;
  FRHITexture *this_00;
  uchar uVar2;
  ERenderTargetActions EVar3;
  undefined2 uVar4;
  int iVar5;
  undefined3 uVar6;
  FExclusiveDepthStencil FVar7;
  int iVar8;
  int iVar9;
  undefined1 auStack_208 [32];
  FRHISetRenderTargetsInfo local_1e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  FRHISetRenderTargetsInfo::FRHISetRenderTargetsInfo(&local_1e8);
  FRHIRenderPassInfo::ConvertToRenderTargetsInfo(param_1,&local_1e8);
  SetRenderTargetsAndClear((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),&local_1e8);
  pFVar1 = (param_1->ColorRenderTargets).Elements[0].ResolveTarget;
  *(FRHITexture **)&this->field_0x30 = (param_1->ColorRenderTargets).Elements[0].RenderTarget;
  *(FRHITexture **)&this->field_0x38 = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[0].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[0].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[0].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[1].RenderTarget;
  *(int *)&this->field_0x40 = (param_1->ColorRenderTargets).Elements[0].ArraySlice;
  this->field_0x44 = uVar2;
  this->field_0x45 = EVar3;
  *(undefined2 *)&this->field_0x46 = uVar4;
  *(FRHITexture **)&this->field_0x48 = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[1].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[1].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[1].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[1].field_0x16;
  *(FRHITexture **)&this->field_0x50 = (param_1->ColorRenderTargets).Elements[1].ResolveTarget;
  *(int *)&this->field_0x58 = iVar5;
  this->field_0x5c = uVar2;
  this->field_0x5d = EVar3;
  *(undefined2 *)&this->field_0x5e = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[2].ResolveTarget;
  *(FRHITexture **)&this->field_0x60 = (param_1->ColorRenderTargets).Elements[2].RenderTarget;
  *(FRHITexture **)&this->field_0x68 = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[2].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[2].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[2].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[3].RenderTarget;
  *(int *)&this->field_0x70 = (param_1->ColorRenderTargets).Elements[2].ArraySlice;
  this->field_0x74 = uVar2;
  this->field_0x75 = EVar3;
  *(undefined2 *)&this->field_0x76 = uVar4;
  *(FRHITexture **)&this->field_0x78 = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[3].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[3].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[3].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[3].field_0x16;
  *(FRHITexture **)&this->field_0x80 = (param_1->ColorRenderTargets).Elements[3].ResolveTarget;
  *(int *)&this->field_0x88 = iVar5;
  this->field_0x8c = uVar2;
  this->field_0x8d = EVar3;
  *(undefined2 *)&this->field_0x8e = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[4].ResolveTarget;
  *(FRHITexture **)&this->field_0x90 = (param_1->ColorRenderTargets).Elements[4].RenderTarget;
  *(FRHITexture **)&this->field_0x98 = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[4].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[4].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[4].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[5].RenderTarget;
  *(int *)&this->field_0xa0 = (param_1->ColorRenderTargets).Elements[4].ArraySlice;
  this->field_0xa4 = uVar2;
  this->field_0xa5 = EVar3;
  *(undefined2 *)&this->field_0xa6 = uVar4;
  *(FRHITexture **)&this->field_0xa8 = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[5].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[5].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[5].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[5].field_0x16;
  *(FRHITexture **)&this->field_0xb0 = (param_1->ColorRenderTargets).Elements[5].ResolveTarget;
  *(int *)&this->field_0xb8 = iVar5;
  this->field_0xbc = uVar2;
  this->field_0xbd = EVar3;
  *(undefined2 *)&this->field_0xbe = uVar4;
  pFVar1 = (param_1->ColorRenderTargets).Elements[6].ResolveTarget;
  *(FRHITexture **)&this->field_0xc0 = (param_1->ColorRenderTargets).Elements[6].RenderTarget;
  *(FRHITexture **)&this->field_0xc8 = pFVar1;
  uVar2 = (param_1->ColorRenderTargets).Elements[6].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[6].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[6].field_0x16;
  pFVar1 = (param_1->ColorRenderTargets).Elements[7].RenderTarget;
  *(int *)&this->field_0xd0 = (param_1->ColorRenderTargets).Elements[6].ArraySlice;
  this->field_0xd4 = uVar2;
  this->field_0xd5 = EVar3;
  *(undefined2 *)&this->field_0xd6 = uVar4;
  *(FRHITexture **)&this->field_0xd8 = pFVar1;
  iVar5 = (param_1->ColorRenderTargets).Elements[7].ArraySlice;
  uVar2 = (param_1->ColorRenderTargets).Elements[7].MipIndex;
  EVar3 = (param_1->ColorRenderTargets).Elements[7].Action;
  uVar4 = *(undefined2 *)&(param_1->ColorRenderTargets).Elements[7].field_0x16;
  *(FRHITexture **)&this->field_0xe0 = (param_1->ColorRenderTargets).Elements[7].ResolveTarget;
  *(int *)&this->field_0xe8 = iVar5;
  this->field_0xec = uVar2;
  this->field_0xed = EVar3;
  *(undefined2 *)&this->field_0xee = uVar4;
  pFVar1 = (param_1->DepthStencilRenderTarget).ResolveTarget;
  *(FRHITexture **)&this->field_0xf0 = (param_1->DepthStencilRenderTarget).DepthStencilTarget;
  *(FRHITexture **)&this->field_0xf8 = pFVar1;
  uVar6 = *(undefined3 *)&(param_1->DepthStencilRenderTarget).field_0x11;
  FVar7.Value = (param_1->DepthStencilRenderTarget).ExclusiveDepthStencil.Value;
  this->field_0x100 = (param_1->DepthStencilRenderTarget).Action;
  *(undefined3 *)&this->field_0x101 = uVar6;
  *(Type *)&this->field_0x104 = FVar7.Value;
  iVar5 = (param_1->ResolveRect).Y1;
  iVar8 = (param_1->ResolveRect).X2;
  iVar9 = (param_1->ResolveRect).Y2;
  *(int *)&this->field_0x108 = (param_1->ResolveRect).X1;
  *(int *)&this->field_0x10c = iVar5;
  *(int *)&this->field_0x110 = iVar8;
  *(int *)&this->field_0x114 = iVar9;
  pFVar1 = (param_1->ShadingRateTexture).Reference;
  this_00 = *(FRHITexture **)&this->field_0x118;
  if (this_00 != pFVar1) {
    *(FRHITexture **)&this->field_0x118 = pFVar1;
    if (pFVar1 != (FRHITexture *)0x0) {
      FRHIResource::AddRef((FRHIResource *)pFVar1);
    }
    if (this_00 != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  this->field_0x120 = param_1->ShadingRateTextureCombiner;
  *(ERHIAccess *)&this->field_0x124 = param_1->NopAccess;
  *(uint *)&this->field_0x128 = param_1->NumOcclusionQueries;
  this->field_0x12c = param_1->bOcclusionQueries;
  this->field_0x12d = param_1->MultiViewCount;
  this->field_0x12e = param_1->SubpassHint;
  return;
}

// RHIBeginTransitions @ 1459c9c90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBeginTransitions
          (FD3D12CommandContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(**(longlong **)&this[-1].field_0x3dd8 + 8))
            (*(longlong **)&this[-1].field_0x3dd8,this[-1].StageConstantBuffers + 1,&local_18);
  return;
}

// RHIClearMRTImpl @ 1459ca2c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIClearMRTImpl
          (FD3D12CommandContext *this,bool *param_1,int param_2,FLinearColor *param_3,bool param_4,
          float param_5,bool param_6,uint param_7)

{
  int *piVar1;
  float fVar2;
  FD3D12RenderTargetView *pFVar3;
  longlong *plVar4;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12ClearMRT> FVar13;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar14;
  FNameEntryId FVar15;
  FName FVar16;
  byte bVar17;
  FD3D12BoundRenderTargets *pFVar18;
  FD3D12DepthStencilView *pFVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 auStackY_218 [32];
  uint local_1b4;
  FColor_u_0 local_1ac;
  uint local_1a8;
  uint uStack_1a4;
  bool *local_1a0;
  FName local_198;
  FName local_190;
  undefined8 *local_188;
  FName local_180;
  FLinearColor *local_170;
  FD3D12Resource *local_168;
  FD3D12DepthStencilView *local_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  FName local_148 [2];
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_138;
  FD3D12BoundRenderTargets local_128;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_d8;
  FD3D12RenderTargetView *local_c8;
  FD3D12RenderTargetView *pFStack_c0;
  FD3D12RenderTargetView *local_b8;
  FD3D12RenderTargetView *pFStack_b0;
  FD3D12RenderTargetView *local_a8;
  FD3D12RenderTargetView *pFStack_a0;
  FD3D12RenderTargetView *local_98;
  FD3D12RenderTargetView *pFStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_218;
  puVar21 = (undefined8 *)0x0;
  FVar13 = StatPtr_STAT_D3D12ClearMRT;
  local_1a0 = param_1;
  local_170 = param_3;
  if (StatPtr_STAT_D3D12ClearMRT == (FThreadSafeStaticStat<FStat_STAT_D3D12ClearMRT>)0x0) {
    pFVar12 = ::FName::FName(local_148,"STAT_D3D12ClearMRT");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12ClearMRT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ClearMRT,*pFVar12,
                        L"Clear MRT time","STATGROUP_D3D12RHI","STATCAT_Advanced",L"D3D12RHI",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar13;
  bVar6 = false;
  bVar8 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar20 = FVar16.Number;
  if ((FVar15.Value != 0) || (uVar20 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_1ac.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ac._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_198.ComparisonIndex.Value = FVar15.Value;
        local_198.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_198,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                   ,0x568);
        bVar6 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1a8 = FVar15.Value;
      uStack_1a4 = uVar20;
      local_190 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar9 = true;
      goto LAB_1459ca447;
    }
  }
  bVar8 = bVar10;
  bVar6 = bVar9;
  bVar9 = false;
  local_190 = local_180;
  FVar16 = local_180;
LAB_1459ca447:
  if (((this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].left <
       (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].right) &&
     ((this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].top <
      (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].bottom)) {
    local_c8 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[0];
    pFStack_c0 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[1];
    local_b8 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[2];
    pFStack_b0 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[3];
    local_a8 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[4];
    pFStack_a0 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[5];
    local_98 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[6];
    pFStack_90 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[7];
    FD3D12BoundRenderTargets::FD3D12BoundRenderTargets
              (&local_128,&local_c8,
               (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets,
               (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget);
    bVar17 = 0;
    local_160 = local_128.DepthStencilView;
    if (((this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].left < 1) &&
       (((this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].top < 1 &&
        (fVar2 = (this->StateCache).PipelineState.Graphics.CurrentViewport[0].Width,
        (int)ROUND(fVar2 + fVar2 + __real_3f000000) >> 1 <=
        (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].right)))) {
      bVar17 = 0;
      if ((int)ROUND((this->StateCache).PipelineState.Graphics.CurrentViewport[0].Height *
                     __real_40000000 + __real_3f000000) >> 1 <=
          (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].bottom) {
        bVar17 = 1;
      }
    }
    if (((param_1 != (bool *)0x0) && (param_2 < local_128.NumActiveTargets)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("!bClearColorArray || NumClearColors >= BoundRenderTargets.GetNumActiveTargets()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0x586,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    local_188 = puVar21;
    if (bVar17 == 0) {
      local_88._0_4_ = (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].left;
      local_88._4_4_ = (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].top;
      uStack_80._0_4_ = (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].right;
      uStack_80._4_4_ = (this->StateCache).PipelineState.Graphics.CurrentScissorRects[0].bottom;
      local_188 = &local_88;
    }
    if ((param_1 == (bool *)0x0) || (local_128.NumActiveTargets < 1)) {
      bVar10 = false;
    }
    else {
      bVar10 = true;
    }
    if (((param_4) || (param_6)) && (local_128.DepthStencilView != (FD3D12DepthStencilView *)0x0)) {
      bVar7 = true;
      local_1b4 = 0;
      if (param_4) {
        if ((*(longlong *)&(local_128.DepthStencilView)->field_0x18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0x102,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((local_128.DepthStencilView)->field_0x30 == '\0') &&
           ((local_128.DepthStencilView)->field_0x31 != '\0')) {
          local_1b4 = 1;
        }
        else if (2 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      if (param_6) {
        if ((*(longlong *)&(local_128.DepthStencilView)->field_0x18 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0x102,L""), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((byte)(local_128.DepthStencilView)->field_0x30 < 2) &&
           (1 < (byte)((local_128.DepthStencilView)->field_0x30 +
                      (local_128.DepthStencilView)->field_0x31))) {
          local_1b4 = local_1b4 | 2;
        }
        else if (2 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
      }
      bVar11 = true;
    }
    else {
      bVar11 = false;
      local_1b4 = 0;
      bVar7 = false;
    }
    if ((bVar10) || (bVar11)) {
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      pFVar19 = local_128.DepthStencilView;
      if ((bVar10) && (0 < local_128.NumActiveTargets)) {
        pFVar18 = &local_128;
        do {
          pFVar3 = pFVar18->RenderTargetViews[0];
          if ((pFVar3 != (FD3D12RenderTargetView *)0x0) && (*param_1 != false)) {
            if (*(longlong *)&this->field_0x188 == 0) {
              (**(code **)(*(longlong *)this + 8))(this);
            }
            plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
            piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
            *piVar1 = *piVar1 + 1;
            pcVar5 = *(code **)(*plVar4 + 0x180);
            if ((*(longlong *)&pFVar3->field_0x18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsInitialized()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                    ,0x103,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            local_158 = *(undefined4 *)&pFVar3->field_0x38;
            uStack_154 = *(undefined4 *)&pFVar3->field_0x3c;
            uStack_150 = *(undefined4 *)&pFVar3->field_0x40;
            uStack_14c = *(undefined4 *)&pFVar3->field_0x44;
            (*pcVar5)(plVar4,*(undefined8 *)&pFVar3->field_0x38,local_170 + (int)puVar21,bVar17 ^ 1)
            ;
            if ((*(longlong *)&pFVar3->field_0x18 == 0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsInitialized()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                    ,0xfe,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            this_00 = *(FD3D12Resource **)&pFVar3->field_0x20;
            if ((this_00 == (FD3D12Resource *)0x0) &&
               (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Resource",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                    ,0x1a5,L""), bVar10)) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            if (*(longlong *)&this->field_0x188 == 0) {
              (**(code **)(*(longlong *)this + 8))(this);
            }
            this_01 = *(FD3D12CommandList **)&this->field_0x188;
            local_168 = this_00;
            if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
              pTVar14 = FD3D12Resource::GetResidencyHandles(this_00,&local_d8);
              local_138.DataPtr = pTVar14->DataPtr;
              local_138.ArrayNum = pTVar14->ArrayNum;
              local_138._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
              FD3D12CommandList::AddToResidencySet(this_01,&local_138);
              param_1 = local_1a0;
            }
            else {
              TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>
              ::Emplace<FD3D12Resource_const_*_const_&>
                        (&(this_01->State).DeferredResidencyUpdateSet,(FD3D12Resource **)&local_1a8,
                         (bool *)&local_168);
              param_1 = local_1a0;
            }
          }
          param_1 = param_1 + 1;
          uVar20 = (int)puVar21 + 1;
          puVar21 = (undefined8 *)(ulonglong)uVar20;
          pFVar18 = (FD3D12BoundRenderTargets *)(pFVar18->RenderTargetViews + 1);
          FVar16 = local_190;
          pFVar19 = local_160;
          local_1a0 = param_1;
        } while ((int)uVar20 < local_128.NumActiveTargets);
      }
      if (bVar7) {
        if (*(longlong *)&this->field_0x188 == 0) {
          (**(code **)(*(longlong *)this + 8))(this);
        }
        plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
        piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
        *piVar1 = *piVar1 + 1;
        pcVar5 = *(code **)(*plVar4 + 0x178);
        if ((*(longlong *)&pFVar19->field_0x18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0x103,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_158 = *(undefined4 *)&pFVar19->field_0x38;
        uStack_154 = *(undefined4 *)&pFVar19->field_0x3c;
        uStack_150 = *(undefined4 *)&pFVar19->field_0x40;
        uStack_14c = *(undefined4 *)&pFVar19->field_0x44;
        (*pcVar5)(plVar4,*(undefined8 *)&pFVar19->field_0x38,local_1b4,param_5);
        if ((*(longlong *)&pFVar19->field_0x18 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xfe,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FD3D12ContextCommon::UpdateResidency
                  ((FD3D12ContextCommon *)this,*(FD3D12Resource **)&pFVar19->field_0x20);
      }
      if ((((*(longlong *)&this->field_0x188 != 0) && (*(int *)&this->field_0x1b4 == 0)) &&
          (0 < GD3D12MaxCommandsPerCommandList)) &&
         ((uint)GD3D12MaxCommandsPerCommandList < *(uint *)(*(longlong *)&this->field_0x188 + 0x168)
         )) {
        if (5 < (byte)LogD3D12RHI._0_1_) {
          UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
        }
        (**(code **)(*(longlong *)this + 0x10))(this);
      }
    }
    FD3D12BoundRenderTargets::~FD3D12BoundRenderTargets(&local_128);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar16,CycleScopeEnd);
  }
  return;
}

// RHICopyBufferRegion @ 1459cac00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHICopyBufferRegion
          (FD3D12CommandContext *this,FRHIBuffer *param_1,ulong64 param_2,FRHIBuffer *param_3,
          ulong64 param_4,ulong64 param_5)

{
  FD3D12CommandContext *this_00;
  uint uVar1;
  longlong lVar2;
  FD3D12Resource *pFVar3;
  FD3D12Resource *pFVar4;
  longlong *plVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  FName local_res20;
  FName local_98;
  FScopedResourceBarrier local_90;
  FScopedResourceBarrier local_70;
  
  uVar1 = *(uint *)&this->field_0x138;
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  uVar6 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  lVar9 = 0;
  lVar11 = lVar9;
  if (param_3 != (FRHIBuffer *)0x0) {
    uVar10 = 0x20;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)uVar6;
    }
    lVar11 = (&param_3[1]._padding_)[uVar10];
  }
  uVar6 = 0;
  if (uVar1 != 0) {
    for (; (uVar1 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (param_1 != (FRHIBuffer *)0x0) {
    uVar10 = 0x20;
    if (uVar1 != 0) {
      uVar10 = (ulonglong)uVar6;
    }
    lVar9 = (&param_1[1]._padding_)[uVar10];
  }
  if ((*(longlong *)(lVar11 + 0xf0) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)(lVar11 + 0xf0);
  if ((*(longlong *)(lVar9 + 0xf0) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((lVar2 != *(longlong *)(lVar9 + 0xf0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferDevice == DestBuffer->GetParentDevice()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x3bf,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((lVar2 != *(longlong *)&this->field_0x140) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("BufferDevice == GetParentDevice()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x3c0,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar3 = *(FD3D12Resource **)(lVar11 + 0x140);
  pFVar4 = *(FD3D12Resource **)(lVar9 + 0x140);
  if ((pFVar3 == pFVar4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("pSourceResource != pDestResource",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x3c8,
                         L"CopyBufferRegion cannot be used on the same resource. This can happen when both the source and the dest are suballocated from the same resource."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((ulonglong)(pFVar4->Desc)._padding_ < param_2 + param_5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("DstOffset + NumBytes <= DestBufferDesc.Width",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x3ca,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (((ulonglong)(pFVar3->Desc)._padding_ < param_4 + param_5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("SrcOffset + NumBytes <= SourceBufferDesc.Width",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Buffer.cpp"
                         ,0x3cb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FScopedResourceBarrier::FScopedResourceBarrier
            (&local_70,(FD3D12ContextCommon *)this_00,pFVar3,Unknown,CopySrc,0);
  FScopedResourceBarrier::FScopedResourceBarrier
            (&local_90,(FD3D12ContextCommon *)this_00,pFVar4,Unknown,CopyDest,0);
  plVar5 = *(longlong **)&this[-1].field_0x3dd8;
  pcVar7 = *(code **)(*plVar5 + 0x28);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  (*pcVar7)(plVar5,*(undefined8 *)&this[-1].RayTracingShaderTables.field_0x70,
            this[-1].StageConstantBuffers + 2);
  local_res20 = pFVar3->DebugName;
  local_98 = pFVar4->DebugName;
  CopyBufferRegionChecked
            (this_00,(pFVar4->Resource).Reference,&local_98,param_2 + *(longlong *)(lVar9 + 400),
             (pFVar3->Resource).Reference,&local_res20,*(longlong *)(lVar11 + 400) + param_4,
             (uint)param_5);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  FScopedResourceBarrier::~FScopedResourceBarrier(&local_90);
  FScopedResourceBarrier::~FScopedResourceBarrier(&local_70);
  return;
}

// RHICopyToStagingBuffer @ 1459cb0a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHICopyToStagingBuffer
          (FD3D12CommandContext *this,FRHIBuffer *param_1,FRHIStagingBuffer *param_2,uint param_3,
          uint param_4)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  FD3D12Resource *this_00;
  FD3D12Resource *this_01;
  longlong *plVar5;
  FD3D12CommandList *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FD3D12CommandContext *pFVar12;
  bool bVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_D3D12CopyToStagingBufferTime> FVar15;
  TEventRef<unsigned_int> TVar16;
  ulonglong uVar17;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar18;
  FWriteBuffer *pFVar19;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  uint uVar20;
  FNameEntryId FVar21;
  FName FVar22;
  longlong lVar23;
  undefined1 auStackY_278 [32];
  undefined1 local_218 [8];
  FD3D12CommandContext *local_210;
  uint local_208;
  uint uStack_204;
  FColor_u_0 local_200;
  int local_1fc;
  uint local_1f8;
  uint local_1f4;
  undefined8 local_1f0;
  FRHIBuffer *local_1e8;
  FName local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  FName local_1c8;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 uStack_1b0;
  ulonglong local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  uint uStack_184;
  longlong local_180;
  longlong local_170;
  code *local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  FD3D12CommandContext *local_148;
  FD3D12Resource *local_140;
  FD3D12Resource *local_138;
  LARGE_INTEGER local_130;
  uint local_128;
  FStatMessage local_120;
  undefined1 local_110 [12];
  FName local_104;
  FName local_fc;
  FString local_f0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_d8;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_c8;
  FName local_b8;
  D3D12_RESOURCE_DESC local_b0;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_78;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_68;
  undefined4 *local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_278;
  local_1e8 = param_1;
  FVar15 = StatPtr_STAT_D3D12CopyToStagingBufferTime;
  local_210 = this;
  local_1f8 = param_3;
  if (StatPtr_STAT_D3D12CopyToStagingBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12CopyToStagingBufferTime>)0x0) {
    pFVar14 = ::FName::FName(&local_104,"STAT_D3D12CopyToStagingBufferTime");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_D3D12CopyToStagingBufferTime>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12CopyToStagingBufferTime,
                        *pFVar14,L"CopyToStagingBuffer time","STATGROUP_D3D12RHI","STATCAT_Advanced"
                        ,L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar15;
  bVar9 = false;
  bVar11 = false;
  local_1c8.ComparisonIndex.Value = 0;
  local_1c8.Number = 0;
  FVar21 = FVar22.ComparisonIndex.Value;
  uVar20 = FVar22.Number;
  if ((FVar21.Value == 0) && (uVar20 == 0)) {
LAB_1459cb1fb:
    bVar10 = false;
    FVar22 = local_1c8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_200.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_200._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1e0.ComparisonIndex.Value = FVar21.Value;
        local_1e0.Number = uVar20;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1e0,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                   ,0xde);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1459cb1fb;
    local_208 = FVar21.Value;
    uStack_204 = uVar20;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar10 = true;
  }
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1d8 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_1d8;
  }
  else {
    local_180 = param_1->_padding_;
    TVar16 = FStringTrace::GetNameRef(&local_fc);
  }
  uVar2 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1d0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_1d0;
  }
  else {
    FLazyName::Resolve(&RHIStagingBufferName);
    TVar16 = FStringTrace::GetNameRef(&local_b8);
  }
  uVar3 = *(undefined8 *)TVar16;
  if ((MetadataChannel->Enabled < 0) || (AssetMetadataChannel->Enabled < 0)) {
    local_1f0 = 0;
    TVar16 = (TEventRef<unsigned_int>)&local_1f0;
  }
  else {
    local_170 = param_1->_padding_;
    TVar16 = FStringTrace::GetNameRef((FName *)(local_110 + 4));
  }
  uVar4 = *(undefined8 *)TVar16;
  bVar8 = false;
  if ((-1 < MetadataChannel->Enabled) && (-1 < AssetMetadataChannel->Enabled)) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataAssetFields>((TLogScope<0> *)&local_58);
    bVar8 = true;
    *local_58 = (int)uVar2;
    local_58[1] = (int)uVar3;
    local_58[2] = (int)uVar4;
    *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
  }
  if ((param_2 == (FRHIStagingBuffer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("StagingBuffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0xe4,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (param_2->bIsLocked != false) {
    local_218[0] = 0;
    `FD3D12CommandContext::RHICopyToStagingBuffer'::__l2::<lambda_1>::operator()(local_218);
  }
  local_148 = (FD3D12CommandContext *)(local_210[-1].StageConstantBuffers + 1);
  local_128 = 0;
  bVar13 = *(int *)&local_210->field_0x138 != 0;
  if (bVar13) {
    for (; (*(uint *)&local_210->field_0x138 >> local_128 & 1) == 0; local_128 = local_128 + 1) {
    }
  }
  if (local_1e8 == (FRHIBuffer *)0x0) {
    lVar23 = 0;
  }
  else {
    uVar17 = 0x20;
    if (bVar13) {
      uVar17 = (ulonglong)local_128;
    }
    lVar23 = (&local_1e8[1]._padding_)[uVar17];
    if (lVar23 != 0) goto LAB_1459cb3d7;
  }
  bVar13 = ::FDebug::CheckVerifyFailedImpl2
                     ("VertexBuffer",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                      ,0xe8,L"");
  if (bVar13) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1459cb3d7:
  if (((char)param_2[4]._padding_ == '\0') || (*(uint *)&param_2[4].bIsLocked < param_4)) {
    FD3D12ResourceLocation::Clear((FD3D12ResourceLocation *)(param_2 + 1));
    local_1a8 = (ulonglong)param_4;
    uStack_19c = 0x10001;
    uStack_198 = 0;
    uStack_18c = 1;
    uStack_188 = 0;
    local_1b8 = 1;
    uStack_1b0 = 0;
    local_b0._4_4_ = uStack_1b4;
    local_b0.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    uStack_1a0 = 1;
    local_b0.Height = 1;
    local_b0.DepthOrArraySize = 1;
    local_b0.MipLevels = 1;
    uStack_194 = 1;
    uStack_190 = 0;
    local_b0.Alignment = 0;
    local_b0.Format = DXGI_FORMAT_UNKNOWN;
    local_b0.SampleDesc.Count = 1;
    local_b0.SampleDesc.Quality = 0;
    local_b0.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    local_b0._48_8_ = (ulonglong)uStack_184 << 0x20;
    local_b0.Width = local_1a8;
    if ((*(longlong *)&local_210->field_0x140 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FD3D12DefaultBufferAllocator::AllocDefaultResource
              ((FD3D12DefaultBufferAllocator *)(*(longlong *)&local_210->field_0x140 + 0x1500),
               D3D12_HEAP_TYPE_READBACK,&local_b0,None,SingleState,CopyDest,
               (FD3D12ResourceLocation *)(param_2 + 1),0x10,L"StagedRead");
    if ((param_2[4]._padding_ != (ulonglong)param_4) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("StagingBuffer->ResourceLocation.GetSize() == NumBytes",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0xfb,L""), bVar13)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(uint *)&param_2[4].bIsLocked = param_4;
  }
  pFVar12 = local_210;
  local_1fc = *(int *)(lVar23 + 400);
  this_00 = *(FD3D12Resource **)(lVar23 + 0x140);
  this_01 = (FD3D12Resource *)param_2[1]._padding_;
  local_1f4 = (uint)param_2[4]._padding_;
  plVar5 = *(longlong **)&local_210[-1].field_0x3dd8;
  local_168 = *(code **)(*plVar5 + 0x28);
  if (*(longlong *)&local_210[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(local_210[-1].StageConstantBuffers[1]._padding_ + 8))
              (local_210[-1].StageConstantBuffers + 1);
  }
  (*local_168)(plVar5,*(undefined8 *)&pFVar12[-1].RayTracingShaderTables.field_0x70);
  if ((this_00->bRequiresResourceStateTracking) || (((this_00->Desc)._padding_ & 0x100) == 0)) {
    local_158 = this_00->DebugName;
    local_150 = this_01->DebugName;
    CopyBufferRegionChecked
              (local_148,(this_01->Resource).Reference,&local_150,(ulonglong)local_1f4,
               (this_00->Resource).Reference,&local_158,(ulonglong)(local_1f8 + local_1fc),param_4);
  }
  else if (2 < (byte)LogD3D12RHI._0_1_) {
    local_160 = (FName)local_1e8->_padding_;
    ::FName::GetPlainNameString(&local_160,&local_f0);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogD3D12RHI);
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
  }
  pFVar12 = local_210;
  if ((this_01 == (FD3D12Resource *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar13)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)&pFVar12[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(pFVar12[-1].StageConstantBuffers[1]._padding_ + 8))
              (pFVar12[-1].StageConstantBuffers + 1);
  }
  pFVar6 = *(FD3D12CommandList **)&pFVar12[-1].RayTracingShaderTables.field_0x70;
  local_140 = this_01;
  if ((this_01->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
    pTVar18 = FD3D12Resource::GetResidencyHandles(this_01,&local_78);
    local_d8.DataPtr = pTVar18->DataPtr;
    local_d8.ArrayNum = pTVar18->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    FD3D12CommandList::AddToResidencySet(pFVar6,&local_d8);
  }
  else {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(pFVar6->State).DeferredResidencyUpdateSet,(FD3D12Resource **)local_110,
               (bool *)&local_140);
  }
  if (*(longlong *)&pFVar12[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(pFVar12[-1].StageConstantBuffers[1]._padding_ + 8))
              (pFVar12[-1].StageConstantBuffers + 1);
  }
  pFVar6 = *(FD3D12CommandList **)&pFVar12[-1].RayTracingShaderTables.field_0x70;
  local_138 = this_00;
  if ((this_00->ReservedResourceData).Ptr == (FD3D12ReservedResourceData *)0x0) {
    pTVar18 = FD3D12Resource::GetResidencyHandles(this_00,&local_68);
    local_c8.DataPtr = pTVar18->DataPtr;
    local_c8.ArrayNum = pTVar18->ArrayNum;
    local_c8._12_4_ = *(undefined4 *)&pTVar18->field_0xc;
    FD3D12CommandList::AddToResidencySet(pFVar6,&local_c8);
  }
  else {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(pFVar6->State).DeferredResidencyUpdateSet,(FD3D12Resource **)&local_208,
               (bool *)&local_138);
  }
  FD3D12ContextCommon::ConditionalSplitCommandList
            ((FD3D12ContextCommon *)(pFVar12[-1].StageConstantBuffers + 1));
  if (bVar8) {
    lVar23 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar23 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar19 = *(FWriteBuffer **)(lVar23 + 0x20);
    if ((int)pFVar19 - *(int *)&pFVar19->Cursor < 1) {
      pFVar19 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar19->Cursor = '\n';
    pFVar19->Cursor = pFVar19->Cursor + 1;
    pFVar19->Committed = pFVar19->Cursor;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar10) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_120.NameAndInfo.Index = FVar22.ComparisonIndex.Value;
      local_120.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_130);
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_120.StatData.Pad[0] = local_130.s.LowPart._0_1_;
      local_120.StatData.Pad[1] = local_130.s.LowPart._1_1_;
      local_120.StatData.Pad[2] = local_130.s.LowPart._2_1_;
      local_120.StatData.Pad[3] = local_130.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_120);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  return;
}

// RHIDispatchComputeShader @ 1459cca40

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchComputeShader
          (FD3D12CommandContext *this,uint param_1,uint param_2,uint param_3)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  *(int *)&this->field_0x24 = *(int *)&this->field_0x24 + 1;
  SetupDispatch(this_00,param_1,param_2,param_3);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar3 = *(longlong **)(lVar2 + 0x28);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar3 + 0x70))(plVar3,param_1,param_2,param_3);
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDispatchComputeShaderBundle @ 1459ccba0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchComputeShaderBundle
          (FD3D12CommandContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_3,
          TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *param_4,bool param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  undefined1 auStackY_1cf8 [32];
  FColor_u_0 local_1c98 [2];
  LARGE_INTEGER local_1c90;
  FName local_1c88;
  TArrayView<FRHIShaderParameterResource_const_,int> *local_1c80;
  FRHIBuffer *local_1c78;
  FName local_1c70;
  FStatMessage local_1c60;
  FName local_1c50;
  TArrayView<FRHIShaderBundleComputeDispatch_const_,int> local_1c48;
  TArrayView<FRHIShaderParameterResource_const_,int> local_1c38;
  TArrayView<FRHIShaderBundleComputeDispatch_const_,int> local_1c28;
  TArrayView<FRHIShaderParameterResource_const_,int> local_1c18;
  FRHICommandList_RecursiveHazardous local_1c08;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1459ccbbf;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1cf8;
  bVar12 = -1 < CpuChannel->Enabled;
  local_1c80 = param_3;
  local_1c78 = param_2;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1131,"RHIDispatchShaderBundle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
               ,0x46b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1131);
  }
  FVar8 = StatPtr_STAT_D3D12DispatchShaderBundle;
  if (StatPtr_STAT_D3D12DispatchShaderBundle ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle>)0x0) {
    pFVar7 = ::FName::FName(&local_1c50,"STAT_D3D12DispatchShaderBundle");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DispatchShaderBundle,*pFVar7,
                       L"Dispatch shader bundle time","STATGROUP_D3D12RHI","STATCAT_Advanced",
                       L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1c70.ComparisonIndex.Value = 0;
  local_1c70.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar11 = *(FName *)FVar8;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c98[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c98[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c88.ComparisonIndex.Value = FVar10.Value;
        local_1c88.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c88,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                   ,0x46c);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1c90.s.LowPart = FVar10.Value;
      local_1c90.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1459ccd50;
    }
  }
  bVar4 = false;
  FVar11 = local_1c70;
LAB_1459ccd50:
  if (((param_1 == (FRHIShaderBundle *)0x0) || (param_4->ArrayNum < 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderBundle != nullptr && Dispatches.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x46e,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_5) {
    if ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1) == (FD3D12CommandContext *)0x0)
    {
      this = (FD3D12CommandContext *)0x0;
    }
    FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
              (&local_1c08,(IRHICommandContext *)this);
    local_1c48.DataPtr = param_4->DataPtr;
    local_1c48.ArrayNum = param_4->ArrayNum;
    local_1c48._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_1c38.DataPtr = local_1c80->DataPtr;
    local_1c38.ArrayNum = local_1c80->ArrayNum;
    local_1c38._12_4_ = *(undefined4 *)&local_1c80->field_0xc;
    UE::RHICore::DispatchShaderBundleEmulation
              ((FRHIComputeCommandList *)&local_1c08,param_1,local_1c78,&local_1c38,&local_1c48);
    FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1c08);
  }
  else {
    local_1c28.DataPtr = param_4->DataPtr;
    local_1c28.ArrayNum = param_4->ArrayNum;
    local_1c28._12_4_ = *(undefined4 *)&param_4->field_0xc;
    local_1c18.DataPtr = local_1c80->DataPtr;
    local_1c18.ArrayNum = local_1c80->ArrayNum;
    local_1c18._12_4_ = *(undefined4 *)&local_1c80->field_0xc;
    DispatchWorkGraphShaderBundle
              ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_1,local_1c78,
               &local_1c18,&local_1c28);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1c60.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_1c60.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1c90);
      local_1c60.StatData.Pad[4] = '\0';
      local_1c60.StatData.Pad[5] = '\0';
      local_1c60.StatData.Pad[6] = '\0';
      local_1c60.StatData.Pad[7] = '\0';
      local_1c60.StatData.Pad[0] = local_1c90.s.LowPart._0_1_;
      local_1c60.StatData.Pad[1] = local_1c90.s.LowPart._1_1_;
      local_1c60.StatData.Pad[2] = local_1c90.s.LowPart._2_1_;
      local_1c60.StatData.Pad[3] = local_1c90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1c60);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIDispatchGraphicsShaderBundle @ 1459ccf20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchGraphicsShaderBundle
          (FD3D12CommandContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          FRHIShaderBundleGraphicsState *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *param_5,bool param_6)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle> FVar8;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  undefined1 auStackY_1d08 [32];
  FColor_u_0 local_1ca8 [2];
  LARGE_INTEGER local_1ca0;
  FName local_1c98;
  TArrayView<FRHIShaderParameterResource_const_,int> *local_1c90;
  FRHIShaderBundleGraphicsState *local_1c88;
  FRHIBuffer *local_1c80;
  FName local_1c78;
  FStatMessage local_1c68;
  FName local_1c58 [2];
  TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> local_1c48;
  TArrayView<FRHIShaderParameterResource_const_,int> local_1c38;
  TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> local_1c28;
  TArrayView<FRHIShaderParameterResource_const_,int> local_1c18;
  FRHICommandList_RecursiveHazardous local_1c08;
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1459ccf3f;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1d08;
  local_1c90 = param_4;
  bVar12 = -1 < CpuChannel->Enabled;
  local_1c88 = param_3;
  local_1c80 = param_2;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1156,"RHIDispatchShaderBundle",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
               ,0x484);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1156);
  }
  FVar8 = StatPtr_STAT_D3D12DispatchShaderBundle;
  if (StatPtr_STAT_D3D12DispatchShaderBundle ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle>)0x0) {
    pFVar7 = ::FName::FName(local_1c58,"STAT_D3D12DispatchShaderBundle");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_D3D12DispatchShaderBundle>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12DispatchShaderBundle,*pFVar7,
                       L"Dispatch shader bundle time","STATGROUP_D3D12RHI","STATCAT_Advanced",
                       L"D3D12RHI",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1c78.ComparisonIndex.Value = 0;
  local_1c78.Number = 0;
  bVar3 = false;
  bVar5 = false;
  FVar11 = *(FName *)FVar8;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1ca8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1ca8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1c98.ComparisonIndex.Value = FVar10.Value;
        local_1c98.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1c98,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                   ,0x485);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_1ca0.s.LowPart = FVar10.Value;
      local_1ca0.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_1459cd0db;
    }
  }
  bVar4 = false;
  FVar11 = local_1c78;
LAB_1459cd0db:
  if (((param_1 == (FRHIShaderBundle *)0x0) || (param_5->ArrayNum < 1)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderBundle != nullptr && Dispatches.Num() > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x487,L""), bVar6)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (param_6) {
    if ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1) == (FD3D12CommandContext *)0x0)
    {
      this = (FD3D12CommandContext *)0x0;
    }
    FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
              (&local_1c08,(IRHICommandContext *)this);
    local_1c48.DataPtr = param_5->DataPtr;
    local_1c48.ArrayNum = param_5->ArrayNum;
    local_1c48._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_1c38.DataPtr = local_1c90->DataPtr;
    local_1c38.ArrayNum = local_1c90->ArrayNum;
    local_1c38._12_4_ = *(undefined4 *)&local_1c90->field_0xc;
    UE::RHICore::DispatchShaderBundleEmulation
              ((FRHICommandList *)&local_1c08,param_1,local_1c80,local_1c88,&local_1c38,&local_1c48)
    ;
    FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1c08);
  }
  else {
    local_1c28.DataPtr = param_5->DataPtr;
    local_1c28.ArrayNum = param_5->ArrayNum;
    local_1c28._12_4_ = *(undefined4 *)&param_5->field_0xc;
    local_1c18.DataPtr = local_1c90->DataPtr;
    local_1c18.ArrayNum = local_1c90->ArrayNum;
    local_1c18._12_4_ = *(undefined4 *)&local_1c90->field_0xc;
    DispatchWorkGraphShaderBundle
              ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_1,local_1c80,
               local_1c88,&local_1c18,&local_1c28);
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((bVar4) && (FVar11 != (FName)0x0)) &&
     ((FThreadStats::bPrimaryDisableForever == false && (FThreadStats::TlsSlot != 0xffffffff)))) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_1c68.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_1c68.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_1ca0);
      local_1c68.StatData.Pad[4] = '\0';
      local_1c68.StatData.Pad[5] = '\0';
      local_1c68.StatData.Pad[6] = '\0';
      local_1c68.StatData.Pad[7] = '\0';
      local_1c68.StatData.Pad[0] = local_1ca0.s.LowPart._0_1_;
      local_1c68.StatData.Pad[1] = local_1ca0.s.LowPart._1_1_;
      local_1c68.StatData.Pad[2] = local_1ca0.s.LowPart._2_1_;
      local_1c68.StatData.Pad[3] = local_1ca0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_1c68);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIDispatchIndirectComputeShader @ 1459cd2c0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchIndirectComputeShader
          (FD3D12CommandContext *this,FRHIBuffer *param_1,uint param_2)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  FD3D12ResourceLocation *pFVar7;
  longlong lVar8;
  
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  *(int *)&this->field_0x24 = *(int *)&this->field_0x24 + 1;
  SetupDispatch(this_00,1,1,1);
  pFVar7 = SetupIndirectArgument(this_00,param_1,D3D12_RESOURCE_STATE_NON_PIXEL_SHADER_RESOURCE);
  if (*(longlong *)&this->field_0x140 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar2 = *(longlong *)&this->field_0x140;
  if (*(longlong *)(lVar2 + 0x10) == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  lVar8 = 0x4e0;
  if (*(int *)&this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data != 2) {
    lVar8 = 0x4d8;
  }
  uVar3 = *(undefined8 *)(lVar8 + *(longlong *)(lVar2 + 0x10));
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar4 = *(longlong **)(lVar2 + 0x28);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar4 + 0x1d8))
            (plVar4,uVar3,1,(pFVar7->UnderlyingResource->Resource).Reference,
             (ulonglong)param_2 + pFVar7->OffsetFromBaseOfResource,0,0);
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDispatchIndirectMeshShader @ 1459cd4c0

/* WARNING: Removing unreachable block (ram,0x0001459cd573) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchIndirectMeshShader
          (FD3D12CommandContext *this,FRHIBuffer *param_1,uint param_2)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulong64 uVar4;
  ID3D12Resource *pIVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  ERHIPipeline EVar9;
  FD3D12ResourceLocation *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x18;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar12 = 0x1f;
  }
  else {
    uVar12 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar6 = 0;
  bVar8 = uVar11 != 0;
  if (bVar8) {
    for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  while (bVar8) {
    piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar6 * 0x20 + uVar12) * 0x18);
    *piVar1 = *piVar1 + 1;
    uVar11 = uVar11 & ~(1 << ((byte)uVar6 & 0x1f));
    uVar6 = 0;
    bVar8 = uVar11 != 0;
    if (bVar8) {
      for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FlushPendingDescriptorUpdates(this_00);
  CommitGraphicsResourceTables(this_00);
  CommitNonComputeShaderConstants(this_00);
  EVar9 = (**(code **)(*(longlong *)this + 8))(this);
  FD3D12StateCache::ApplyState((FD3D12StateCache *)&this->field_0x1f0,EVar9,Graphics);
  pFVar10 = SetupIndirectArgument(this_00,param_1,D3D12_RESOURCE_STATE_COMMON);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar3 = *(longlong **)(lVar2 + 0x28);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  uVar4 = pFVar10->OffsetFromBaseOfResource;
  pcVar7 = *(code **)(*plVar3 + 0x1d8);
  pIVar5 = (pFVar10->UnderlyingResource->Resource).Reference;
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x140;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*pcVar7)(plVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x4e8),1,pIVar5,param_2 + uVar4,0,0
           );
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDispatchMeshShader @ 1459cd7b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDispatchMeshShader
          (FD3D12CommandContext *this,uint param_1,uint param_2,uint param_3)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  ERHIPipeline EVar7;
  uint uVar8;
  ulonglong uVar9;
  
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x18;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar9 = 0x1f;
  }
  else {
    uVar9 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar4 = 0;
  bVar6 = uVar8 != 0;
  if (bVar6) {
    for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
    }
  }
  while (bVar6) {
    piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar4 * 0x20 + uVar9) * 0x18);
    *piVar1 = *piVar1 + 1;
    uVar8 = uVar8 & ~(1 << ((byte)uVar4 & 0x1f));
    uVar4 = 0;
    bVar6 = uVar8 != 0;
    if (bVar6) {
      for (; (uVar8 >> uVar4 & 1) == 0; uVar4 = uVar4 + 1) {
      }
    }
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FlushPendingDescriptorUpdates(this_00);
  CommitGraphicsResourceTables(this_00);
  CommitNonComputeShaderConstants(this_00);
  EVar7 = (**(code **)(*(longlong *)this + 8))(this);
  FD3D12StateCache::ApplyState((FD3D12StateCache *)&this->field_0x1f0,EVar7,Graphics);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar3 = *(longlong **)(lVar2 + 0x58);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  (**(code **)(*plVar3 + 0x278))(plVar3,param_1,param_2,param_3);
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDrawIndexedIndirect @ 1459cda00

/* WARNING: Removing unreachable block (ram,0x0001459cdac1) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDrawIndexedIndirect
          (FD3D12CommandContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,int param_3,
          uint param_4)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulong64 uVar4;
  ID3D12Resource *pIVar5;
  code *pcVar6;
  bool bVar7;
  FD3D12ResourceLocation *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x18;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar10 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar11 = 0x1f;
  }
  else {
    uVar11 = *(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar9 = 0;
  if (uVar10 != 0) {
    for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
    }
  }
  if (uVar10 != 0) {
    do {
      piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar9 * 0x20 + (ulonglong)uVar11) * 0x18);
      *piVar1 = *piVar1 + 1;
      uVar10 = uVar10 & ~(1 << ((byte)uVar9 & 0x1f));
      uVar9 = 0;
      if (uVar10 != 0) {
        for (; (uVar10 >> uVar9 & 1) == 0; uVar9 = uVar9 + 1) {
        }
      }
    } while (uVar10 != 0);
  }
  SetupDraw(this_00,param_1,1,0);
  pFVar8 = SetupIndirectArgument(this_00,param_2,D3D12_RESOURCE_STATE_COMMON);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar3 = *(longlong **)(lVar2 + 0x28);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  uVar10 = (param_2->Desc).Stride;
  pcVar6 = *(code **)(*plVar3 + 0x1d8);
  uVar4 = pFVar8->OffsetFromBaseOfResource;
  pIVar5 = (pFVar8->UnderlyingResource->Resource).Reference;
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x140;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  (*pcVar6)(plVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x4d0),1,pIVar5,
            param_3 * uVar10 + uVar4,0,0);
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDrawIndexedPrimitive @ 1459cdd00

/* WARNING: Removing unreachable block (ram,0x0001459cdf01) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDrawIndexedPrimitive
          (FD3D12CommandContext *this,FRHIBuffer *param_1,int param_2,uint param_3,uint param_4,
          uint param_5,uint param_6,uint param_7)

{
  FD3D12CommandContext *this_00;
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  code *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar12 = 0;
  bVar13 = *(int *)&this->field_0x138 != 0;
  if (bVar13) {
    for (; (*(uint *)&this->field_0x138 >> uVar12 & 1) == 0; uVar12 = uVar12 + 1) {
    }
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  lVar7 = 0;
  if (param_1 != (FRHIBuffer *)0x0) {
    uVar8 = 0x20;
    if (bVar13) {
      uVar8 = (ulonglong)uVar12;
    }
    lVar7 = (&param_1[1]._padding_)[uVar8];
  }
  if ((param_6 == 0) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8776608671141463291>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0x4fb,"NumPrimitives > 0"), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->Desc).Size == 0) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8776608671141463292>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0x4fc,"IndexBufferRHI->GetSize() > 0"), bVar13)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((*(longlong *)(lVar7 + 0x140) == 0) &&
     (bVar13 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<8776608671141463293>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0x4fd,"IndexBuffer->ResourceLocation.GetResource() != nullptr"), bVar13))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_1->Desc).Size != 0) && (*(longlong *)(lVar7 + 0x140) != 0)) {
    *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
    if (param_7 == 0) {
      param_7 = 1;
    }
    *(uint *)&this->field_0x28 = *(int *)&this->field_0x28 + param_7 * param_6;
    *(uint *)&this->field_0x2c = *(int *)&this->field_0x2c + param_7 * param_4;
    if ((*(longlong *)&this->field_0x18 == 0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExecutingCmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                            ,0x221,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    lVar4 = *(longlong *)&this->field_0x18;
    uVar3 = *(undefined4 *)
             ((this->StateCache).PipelineState.Graphics.VBCache.CurrentVertexBufferResources + 0xb);
    if ((*(char *)(lVar4 + 0x308) == '\0') &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    uVar12 = *(uint *)(lVar4 + 0x29c);
    if (*(longlong *)(lVar4 + 0x300) == 0) {
      uVar9 = 0x1f;
    }
    else {
      uVar9 = *(uint *)(*(longlong *)(lVar4 + 0x300) + 8);
    }
    uVar11 = 0;
    if (uVar12 != 0) {
      for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
      }
    }
    if (uVar12 != 0) {
      do {
        lVar1 = ((ulonglong)uVar11 * 0x20 + (ulonglong)uVar9) * 0x18;
        piVar2 = (int *)(lVar1 + 0x390 + lVar4);
        *piVar2 = *piVar2 + 1;
        switch(uVar3) {
        case 0:
        case 1:
          piVar2 = (int *)(lVar4 + 0x394 + lVar1);
          *piVar2 = *piVar2 + param_6;
          break;
        case 2:
          piVar2 = (int *)(lVar4 + 0x398 + lVar1);
          *piVar2 = *piVar2 + param_6;
          break;
        case 3:
          piVar2 = (int *)(lVar4 + 0x39c + lVar1);
          *piVar2 = *piVar2 + param_6;
          break;
        case 4:
          piVar2 = (int *)(lVar4 + 0x3a0 + lVar1);
          *piVar2 = *piVar2 + param_6;
          break;
        case 5:
          piVar2 = (int *)(lVar4 + 0x3a4 + lVar1);
          *piVar2 = *piVar2 + param_6;
        }
        uVar12 = uVar12 & ~(1 << ((byte)uVar11 & 0x1f));
        uVar11 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
          }
        }
      } while (uVar12 != 0);
    }
    iVar10 = param_6 * *(int *)((this->StateCache).PipelineState.Graphics.VBCache.
                                CurrentVertexBufferResources + 0xc) +
             *(int *)((longlong)
                      (this->StateCache).PipelineState.Graphics.VBCache.CurrentVertexBufferResources
                     + 100);
    if ((*(uint *)(lVar7 + 0xd8) < (iVar10 + param_5) * *(int *)(lVar7 + 0xdc)) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(StartIndex + IndexCount) * IndexBuffer->GetStride() <= IndexBuffer->GetSize()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0x50d,L"Start %u, Count %u, Type %u, Buffer Size %u, Buffer stride %u")
       , bVar13)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    SetupDraw(this_00,param_1,param_7 * param_6,param_7 * param_4);
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(*(longlong *)this_00 + 8))(this_00);
    }
    lVar7 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
    plVar5 = *(longlong **)(lVar7 + 0x28);
    piVar2 = (int *)(lVar7 + 0x168);
    *piVar2 = *piVar2 + 1;
    (**(code **)(*plVar5 + 0x68))(plVar5,iVar10,param_7,param_5,param_2,param_3);
    PostGpuEvent(this_00);
  }
  return;
}

// RHIDrawIndexedPrimitiveIndirect @ 1459ce1b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDrawIndexedPrimitiveIndirect
          (FD3D12CommandContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3)

{
  RHIMultiDrawIndexedPrimitiveIndirect(this,param_1,param_2,param_3,(FRHIBuffer *)0x0,0,1);
  return;
}

// RHIDrawPrimitive @ 1459ce290

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDrawPrimitive
          (FD3D12CommandContext *this,uint param_1,uint param_2,uint param_3)

{
  FD3D12CommandContext *this_00;
  longlong lVar1;
  int *piVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  ERHIPipeline EVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  iVar12 = param_2 * *(int *)((this->StateCache).PipelineState.Graphics.VBCache.
                              CurrentVertexBufferResources + 0xc) +
           *(int *)((longlong)
                    (this->StateCache).PipelineState.Graphics.VBCache.CurrentVertexBufferResources +
                   100);
  if (param_3 == 0) {
    param_3 = 1;
  }
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  uVar11 = param_3;
  if (param_3 == 0) {
    uVar11 = 1;
  }
  *(uint *)&this->field_0x2c = *(int *)&this->field_0x2c + uVar11 * iVar12;
  *(uint *)&this->field_0x28 = *(int *)&this->field_0x28 + uVar11 * param_2;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar4 = *(longlong *)&this->field_0x18;
  uVar3 = *(undefined4 *)
           ((this->StateCache).PipelineState.Graphics.VBCache.CurrentVertexBufferResources + 0xb);
  if ((*(char *)(lVar4 + 0x308) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)(lVar4 + 0x29c);
  if (*(longlong *)(lVar4 + 0x300) == 0) {
    uVar10 = 0x1f;
  }
  else {
    uVar10 = *(uint *)(*(longlong *)(lVar4 + 0x300) + 8);
  }
  uVar6 = 0;
  if (uVar11 != 0) {
    for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  if (uVar11 != 0) {
    do {
      lVar1 = ((ulonglong)uVar6 * 0x20 + (ulonglong)uVar10) * 0x18;
      piVar2 = (int *)(lVar1 + 0x390 + lVar4);
      *piVar2 = *piVar2 + 1;
      switch(uVar3) {
      case 0:
      case 1:
        piVar2 = (int *)(lVar4 + 0x394 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 2:
        piVar2 = (int *)(lVar4 + 0x398 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 3:
        piVar2 = (int *)(lVar4 + 0x39c + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 4:
        piVar2 = (int *)(lVar4 + 0x3a0 + lVar1);
        *piVar2 = *piVar2 + param_2;
        break;
      case 5:
        piVar2 = (int *)(lVar4 + 0x3a4 + lVar1);
        *piVar2 = *piVar2 + param_2;
      }
      uVar11 = uVar11 & ~(1 << ((byte)uVar6 & 0x1f));
      uVar6 = 0;
      if (uVar11 != 0) {
        for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
        }
      }
    } while (uVar11 != 0);
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FlushPendingDescriptorUpdates(this_00);
  CommitGraphicsResourceTables(this_00);
  CommitNonComputeShaderConstants(this_00);
  EVar9 = (**(code **)(*(longlong *)this + 8))(this);
  FD3D12StateCache::ApplyState((FD3D12StateCache *)&this->field_0x1f0,EVar9,Graphics);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar4 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar5 = *(longlong **)(lVar4 + 0x28);
  piVar2 = (int *)(lVar4 + 0x168);
  *piVar2 = *piVar2 + 1;
  (**(code **)(*plVar5 + 0x60))(plVar5,iVar12,param_3,param_1,0);
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIDrawPrimitiveIndirect @ 1459ce5b0

/* WARNING: Removing unreachable block (ram,0x0001459ce663) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIDrawPrimitiveIndirect
          (FD3D12CommandContext *this,FRHIBuffer *param_1,uint param_2)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulong64 uVar4;
  ID3D12Resource *pIVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  ERHIPipeline EVar9;
  FD3D12ResourceLocation *pFVar10;
  uint uVar11;
  ulonglong uVar12;
  
  *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
  if ((*(longlong *)&this->field_0x18 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ExecutingCmdList",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                         ,0x221,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x18;
  if ((*(char *)(lVar2 + 0x308) == '\0') &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0x1bd,
                         L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar11 = *(uint *)(lVar2 + 0x29c);
  if (*(longlong *)(lVar2 + 0x300) == 0) {
    uVar12 = 0x1f;
  }
  else {
    uVar12 = (ulonglong)*(uint *)(*(longlong *)(lVar2 + 0x300) + 8);
  }
  uVar6 = 0;
  bVar8 = uVar11 != 0;
  if (bVar8) {
    for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
    }
  }
  while (bVar8) {
    piVar1 = (int *)(lVar2 + 0x390 + ((ulonglong)uVar6 * 0x20 + uVar12) * 0x18);
    *piVar1 = *piVar1 + 1;
    uVar11 = uVar11 & ~(1 << ((byte)uVar6 & 0x1f));
    uVar6 = 0;
    bVar8 = uVar11 != 0;
    if (bVar8) {
      for (; (uVar11 >> uVar6 & 1) == 0; uVar6 = uVar6 + 1) {
      }
    }
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FlushPendingDescriptorUpdates(this_00);
  CommitGraphicsResourceTables(this_00);
  CommitNonComputeShaderConstants(this_00);
  EVar9 = (**(code **)(*(longlong *)this + 8))(this);
  FD3D12StateCache::ApplyState((FD3D12StateCache *)&this->field_0x1f0,EVar9,Graphics);
  pFVar10 = SetupIndirectArgument(this_00,param_1,D3D12_RESOURCE_STATE_COMMON);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  plVar3 = *(longlong **)(lVar2 + 0x28);
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  uVar4 = pFVar10->OffsetFromBaseOfResource;
  pcVar7 = *(code **)(*plVar3 + 0x1d8);
  pIVar5 = (pFVar10->UnderlyingResource->Resource).Reference;
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  lVar2 = *(longlong *)&this->field_0x140;
  if ((*(longlong *)(lVar2 + 0x10) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("ParentAdapter != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x41,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  (*pcVar7)(plVar3,*(undefined8 *)(*(longlong *)(lVar2 + 0x10) + 0x4c8),1,pIVar5,param_2 + uVar4,0,0
           );
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
    FD3D12DescriptorCache::SetDescriptorHeaps
              ((FD3D12DescriptorCache *)
               ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
               -(uint)(*(char *)((longlong)
                                 &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                  AllocatorInstance.Data + 3) != '\0') & Bindless);
    *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
  }
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  return;
}

// RHIEndBreadcrumbGPU @ 1459ce8a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIEndBreadcrumbGPU(FD3D12CommandContext *this,FRHIBreadcrumbNode *param_1)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  longlong lVar2;
  longlong *plVar3;
  ulong64 *puVar4;
  ulong64 *puVar5;
  AGSContext *pAVar6;
  FD3D12DiagnosticBuffer *pFVar7;
  code *pcVar8;
  bool bVar9;
  FEndBreadcrumb *pFVar10;
  PIXEventsThreadInfo *pPVar11;
  ulonglong uVar12;
  FD3D12Queue *pFVar13;
  uint uVar14;
  ulong64 *puVar15;
  LARGE_INTEGER local_res8;
  FRHIBreadcrumbNode *local_res10;
  FD3D12QueryLocation local_48;
  
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  local_res10 = param_1;
  FlushProfilerStats(this_00);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  pFVar10 = UE::RHI::GPUProfiler::FEventStream::
            Emplace<UE::RHI::GPUProfiler::FEvent::FEndBreadcrumb,FRHIBreadcrumbNode_*_&>
                      ((FEventStream *)
                       (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 + 0x170),
                       &local_res10);
  FD3D12QueryAllocator::Allocate
            ((FD3D12QueryAllocator *)(this[-1].StageConstantBuffers + 2),&local_48,
             ProfilerTimestampBOP,&pFVar10->GPUTimestampBOP);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  FD3D12CommandList::EndQuery
            (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,&local_48);
  if (*(longlong *)&this->field_0x18 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("ExecutingCmdList",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                       ,0x221,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  if (*(char *)(*(longlong *)&this->field_0x18 + 0xf8) != '\0') {
    if (FD3D12DynamicRHI::SingleD3DRHI->bPixEventEnabled != false) {
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(*(longlong *)this_00 + 8))(this_00);
      }
      lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
      plVar3 = *(longlong **)(lVar2 + 0x28);
      piVar1 = (int *)(lVar2 + 0x168);
      *piVar1 = *piVar1 + 1;
      pPVar11 = (PIXEventsThreadInfo *)PIXGetThreadInfo();
      puVar4 = pPVar11->biasedLimit;
      if (puVar4 != (ulong64 *)0x0) {
        puVar5 = pPVar11->destination;
        if (puVar5 < puVar4) {
          local_res8.QuadPart = 0;
          QueryPerformanceCounter(&local_res8);
          puVar15 = puVar5 + 1;
          if (puVar15 < puVar4 + 0x3e) {
            *puVar15 = (ulong64)plVar3;
            puVar15 = puVar5 + 2;
          }
          *puVar15 = 0xfff80;
          uVar12 = (longlong)puVar15 - (longlong)pPVar11->destination >> 3;
          uVar14 = (uint)uVar12 & 0xff;
          if (0x7f < uVar12) {
            uVar14 = 0x7f;
          }
          *puVar5 = (ulonglong)(uVar14 & 0x7f) | local_res8.QuadPart << 0x14 | 0x1000;
          pPVar11->destination = puVar15;
        }
        else {
          PIXEventsDetail::PIXEndEventOnContextCpuAllocate(pPVar11,plVar3);
        }
      }
      (**(code **)(*plVar3 + 0x1d0))(plVar3);
    }
    pAVar6 = FD3D12DynamicRHI::SingleD3DRHI->AmdAgsContext;
    if ((pAVar6 != (AGSContext *)0x0) && (GEmitRgpFrameMarkers != 0)) {
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(*(longlong *)this_00 + 8))(this_00);
      }
      lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
      piVar1 = (int *)(lVar2 + 0x168);
      *piVar1 = *piVar1 + 1;
      agsDriverExtensionsDX12_PopMarker(pAVar6,*(undefined8 *)(lVar2 + 0x28));
    }
  }
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  UE::RHICore::Nvidia::Aftermath::D3D12::EndBreadcrumb
            (*(GFSDK_Aftermath_ContextHandle__ **)
              (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 + 0x88),param_1);
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  lVar2 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
  piVar1 = (int *)(lVar2 + 0x168);
  *piVar1 = *piVar1 + 1;
  UE::RHICore::Intel::GPUCrashDumps::D3D12::EndBreadcrumb
            (*(ID3D12GraphicsCommandList **)(lVar2 + 0x28),param_1);
  pFVar13 = FD3D12Device::GetQueue
                      ((FD3D12Device *)this[-1].StageConstantBuffers[1]._padding_,
                       *(ED3D12QueueType *)
                        &this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data);
  pFVar7 = (pFVar13->DiagnosticBuffer).Ptr;
  if ((pFVar7 != (FD3D12DiagnosticBuffer *)0x0) &&
     ((pFVar7->Resource).Reference != (FD3D12Resource *)0x0)) {
    bVar9 = UE::RHI::UseGPUCrashBreadcrumbs();
    if (bVar9) {
      FD3D12ContextCommon::WriteMarker
                ((FD3D12ContextCommon *)this_00,pFVar7->GpuAddress + 0x604,param_1->ID,Out);
    }
  }
  return;
}

// RHIEndRenderPass @ 1459cec00

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall FD3D12CommandContext::RHIEndRenderPass(FD3D12CommandContext *this)

{
  code *local_38 [2];
  undefined **local_28;
  FD3D12ConstantBuffer *local_20;
  undefined8 local_10;
  
  local_20 = this[-1].StageConstantBuffers + 1;
  local_10 = 0;
  local_28 = &
             ___7__TFunction_OwnedObject_V<lambda_1>__1__RHIEndRenderPass_FD3D12CommandContext__UEAAXXZ__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_38[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FD3D12CommandContext::RHIEndRenderPass'::__l2::<lambda_1>,void,UE::RHICore::FResolveTextureInfo>
                ::Call;
  UE::RHICore::ResolveRenderPassTargets
            ((FRHIRenderPassInfo *)&this->field_0x30,
             (TFunction<void___cdecl(UE::RHICore::FResolveTextureInfo)> *)local_38);
  return;
}

// RHIEndTransitions @ 1459ced50

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIEndTransitions
          (FD3D12CommandContext *this,TArrayView<FRHITransition_const_*,int> *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  local_18 = *(undefined4 *)&param_1->DataPtr;
  uStack_14 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
  iStack_10 = param_1->ArrayNum;
  uStack_c = *(undefined4 *)&param_1->field_0xc;
  (**(code **)(**(longlong **)&this[-1].field_0x3dd8 + 0x10))
            (*(longlong **)&this[-1].field_0x3dd8,this[-1].StageConstantBuffers + 1,&local_18);
  return;
}

// RHIMultiDrawIndexedPrimitiveIndirect @ 1459cf4c0

/* WARNING: Removing unreachable block (ram,0x0001459cf68f) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIMultiDrawIndexedPrimitiveIndirect
          (FD3D12CommandContext *this,FRHIBuffer *param_1,FRHIBuffer *param_2,uint param_3,
          FRHIBuffer *param_4,uint param_5,uint param_6)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  FD3D12Resource *pFVar2;
  longlong *plVar3;
  ulong64 uVar4;
  ID3D12Resource *pIVar5;
  code *pcVar6;
  bool bVar7;
  longlong lVar8;
  ulonglong uVar9;
  FD3D12ResourceLocation *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ID3D12Resource *pIVar14;
  ID3D12Resource *pIVar15;
  
  uVar12 = *(uint *)&this->field_0x138;
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  uVar13 = 0;
  if (uVar12 != 0) {
    for (; (uVar12 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
    }
  }
  lVar8 = 0;
  if (param_1 != (FRHIBuffer *)0x0) {
    uVar9 = 0x20;
    if (uVar12 != 0) {
      uVar9 = (ulonglong)uVar13;
    }
    lVar8 = (&param_1[1]._padding_)[uVar9];
  }
  pIVar14 = (ID3D12Resource *)0x0;
  if ((param_1->Desc).Size != 0) {
    if (*(longlong *)(lVar8 + 0x140) == 0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8776608671141463323>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x51b,"IndexBuffer->ResourceLocation.GetResource() != nullptr");
      if (bVar7) goto code_r0x0001459cf58b;
    }
    else {
      pIVar15 = pIVar14;
      if (param_4 != (FRHIBuffer *)0x0) {
        uVar13 = 0;
        if (uVar12 != 0) {
          for (; (uVar12 >> uVar13 & 1) == 0; uVar13 = uVar13 + 1) {
          }
        }
        uVar9 = 0x20;
        if (uVar12 != 0) {
          uVar9 = (ulonglong)uVar13;
        }
        pFVar2 = *(FD3D12Resource **)((&param_4[1]._padding_)[uVar9] + 0x140);
        pIVar14 = (ID3D12Resource *)
                  ((ulonglong)param_5 + *(longlong *)((&param_4[1]._padding_)[uVar9] + 400));
        pIVar15 = (pFVar2->Resource).Reference;
        FD3D12ContextCommon::UpdateResidency((FD3D12ContextCommon *)this_00,pFVar2);
      }
      *(int *)&this->field_0x20 = *(int *)&this->field_0x20 + 1;
      if ((*(longlong *)&this->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ExecutingCmdList",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                             ,0x221,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar8 = *(longlong *)&this->field_0x18;
      if ((*(char *)(lVar8 + 0x308) == '\0') &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsSet()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                             ,0x1bd,
                             L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                            ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar12 = *(uint *)(lVar8 + 0x29c);
      if (*(longlong *)(lVar8 + 0x300) == 0) {
        uVar13 = 0x1f;
      }
      else {
        uVar13 = *(uint *)(*(longlong *)(lVar8 + 0x300) + 8);
      }
      uVar11 = 0;
      if (uVar12 != 0) {
        for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
        }
      }
      if (uVar12 != 0) {
        do {
          piVar1 = (int *)(lVar8 + 0x390 + ((ulonglong)uVar11 * 0x20 + (ulonglong)uVar13) * 0x18);
          *piVar1 = *piVar1 + 1;
          uVar12 = uVar12 & ~(1 << ((byte)uVar11 & 0x1f));
          uVar11 = 0;
          if (uVar12 != 0) {
            for (; (uVar12 >> uVar11 & 1) == 0; uVar11 = uVar11 + 1) {
            }
          }
        } while (uVar12 != 0);
      }
      SetupDraw(this_00,param_1,0,0);
      pFVar10 = SetupIndirectArgument(this_00,param_2,D3D12_RESOURCE_STATE_COMMON);
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(*(longlong *)this_00 + 8))(this_00);
      }
      lVar8 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
      plVar3 = *(longlong **)(lVar8 + 0x28);
      piVar1 = (int *)(lVar8 + 0x168);
      *piVar1 = *piVar1 + 1;
      uVar4 = pFVar10->OffsetFromBaseOfResource;
      pcVar6 = *(code **)(*plVar3 + 0x1d8);
      pIVar5 = (pFVar10->UnderlyingResource->Resource).Reference;
      if ((*(longlong *)&this->field_0x140 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Parent != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x59,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar8 = *(longlong *)&this->field_0x140;
      if ((*(longlong *)(lVar8 + 0x10) == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("ParentAdapter != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                             ,0x41,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (*pcVar6)(plVar3,*(undefined8 *)(*(longlong *)(lVar8 + 0x10) + 0x4d0),param_6,pIVar5,
                param_3 + uVar4,pIVar15,pIVar14);
      if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum != '\0') {
        FD3D12DescriptorCache::SetDescriptorHeaps
                  ((FD3D12DescriptorCache *)
                   ((this->StateCache).PipelineState.Common.SamplerCache.States[5] + 0x11),
                   -(uint)(*(char *)((longlong)
                                     &(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[4].
                                      AllocatorInstance.Data + 3) != '\0') & Bindless);
        *(undefined2 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[3].ArrayNum = 0;
      }
      FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
    }
    return;
  }
  bVar7 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<8776608671141463323>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                     ,0x51b,"IndexBufferRHI->GetSize() > 0");
  if (!bVar7) {
    return;
  }
code_r0x0001459cf58b:
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

// RHISetBlendFactor @ 1459cfbd0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetBlendFactor(FD3D12CommandContext *this,FLinearColor *param_1)

{
  FD3D12StateCache::SetBlendFactor((FD3D12StateCache *)&this->field_0x1f0,(float *)param_1);
  return;
}

// RHISetComputePipelineState @ 1459cfc70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetComputePipelineState
          (FD3D12CommandContext *this,FRHIComputePipelineState *param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  FD3D12CommandContext *local_28;
  FRHIComputeShader *local_20;
  undefined1 local_18;
  int local_14;
  
  if ((char)(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum != '\x01') {
    *(undefined2 *)((this->StateCache).PipelineState.Common.SamplerCache.States[4] + 9) = 0x101;
    *(undefined1 *)&(this->StateCache).PipelineState.Graphics.VBCache.MaxBoundVertexBufferIndex = 1;
    *(undefined1 *)&(this->StateCache).PipelineState.Common.QueuedBindlessSRVs[5].ArrayNum = 1;
  }
  *(undefined4 *)(this->BoundUniformBuffers[5] + 4) = 0;
  *(undefined1 *)((longlong)this->BoundUniformBuffers[2] + 0x5a) = 1;
  uVar2 = GetFrameFenceCounter((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1));
  *(uint *)&param_1[1]._padding_ = uVar2;
  FD3D12StateCache::SetComputePipelineState
            ((FD3D12StateCache *)&this->field_0x1f0,(FD3D12ComputePipelineState *)param_1);
  local_20 = (param_1->ComputeShader).Reference;
  if (local_20 != (FRHIComputeShader *)0x0) {
    iVar1 = 0;
    bVar3 = *(int *)&this->field_0x138 != 0;
    if (bVar3) {
      for (; (*(uint *)&this->field_0x138 >> iVar1 & 1) == 0; iVar1 = iVar1 + 1) {
      }
    }
    local_18 = *(undefined1 *)((longlong)&local_20->_padding_ + 4);
    local_14 = 0x20;
    if (bVar3) {
      local_14 = iVar1;
    }
    local_28 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
    UE::RHICore::ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
              ((FRHIShader *)local_20,
               (TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
               &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_28);
  }
  return;
}

// RHISetDepthBounds @ 1459cfdc0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetDepthBounds(FD3D12CommandContext *this,float param_1,float param_2)

{
  if ((param_1 != *(float *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1c)) ||
     (param_2 !=
      *(float *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe4))) {
    *(float *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1c) = param_1;
    *(float *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe4) =
         param_2;
    this->field_0x217 = GRHIGlobals.SupportsDepthBoundsTest;
  }
  return;
}

// RHISetGPUMask @ 1459cfe80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::RHISetGPUMask(FD3D12CommandContext *this,FRHIGPUMask param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1.GPUMask != *(uint *)&this->field_0x138) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1106251140133028648>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x328,"InGPUMask == GPUMask");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// RHISetGraphicsPipelineState @ 1459cff20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetGraphicsPipelineState
          (FD3D12CommandContext *this,FRHIGraphicsPipelineState *param_1,uint param_2,bool param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  FD3D12ConstantBuffer *local_38;
  FRHIShader *local_30;
  EShaderFrequency local_28;
  int local_24;
  
  *(undefined4 *)(this->BoundUniformBuffers[3] + 1) = 0;
  *(undefined4 *)(this->BoundUniformBuffers[3] + 8) = 0;
  *(undefined4 *)(this->BoundUniformBuffers[3] + 0xf) = 0;
  *(undefined4 *)(this->BoundUniformBuffers[4] + 6) = 0;
  *(undefined4 *)(this->BoundUniformBuffers[4] + 0xd) = 0;
  *(undefined1 *)((longlong)this->BoundUniformBuffers[2] + 0x59) = 1;
  if ((*(char *)((longlong)&param_1[6].SortKey + 5) == '\0') &&
     ((*(float *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1c) != 0.0 ||
      (__real_3f800000 !=
       *(float *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe4)))))
  {
    *(undefined4 *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1c) = 0;
    *(undefined4 *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe4) =
         0x3f800000;
    this->field_0x217 = GRHIGlobals.SupportsDepthBoundsTest;
  }
  if (GRHIGlobals.VariableRateShading.SupportsPipeline != false) {
    if ((char)param_1[6].DSMode.Value == DepthNop) {
      if (((*(char *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) == '\0')
          && (*(char *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe9
                       ) == '\0')) &&
         (*(char *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xea) ==
          '\0')) goto LAB_1459d002b;
      *(undefined2 *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) = 0;
      *(undefined1 *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xea)
           = 0;
    }
    else {
      bVar1 = *(byte *)((longlong)&param_1[6].DSMode.Value + 1);
      if (((*(byte *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) == bVar1)
          && (*(char *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe9
                       ) == '\0')) &&
         (*(char *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xea) ==
          '\x03')) goto LAB_1459d002b;
      *(byte *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) = bVar1;
      *(undefined2 *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe9)
           = 0x300;
    }
    this->field_0x218 = GRHIGlobals.VariableRateShading.SupportsPipeline;
  }
LAB_1459d002b:
  uVar3 = GetFrameFenceCounter((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1));
  *(uint *)&param_1[1]._padding_ = uVar3;
  FD3D12StateCache::SetGraphicsPipelineState
            ((FD3D12StateCache *)&this->field_0x1f0,(FD3D12GraphicsPipelineState *)param_1);
  FD3D12StateCache::SetStencilRef((FD3D12StateCache *)&this->field_0x1f0,param_2);
  if (param_3) {
    local_30 = *(FRHIShader **)&param_1[1].DSMode;
    local_38 = this[-1].StageConstantBuffers + 1;
    if (local_30 != (FRHIShader *)0x0) {
      iVar2 = 0;
      bVar4 = *(int *)&this->field_0x138 != 0;
      if (bVar4) {
        for (; (*(uint *)&this->field_0x138 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = local_30->Frequency;
      local_24 = 0x20;
      if (bVar4) {
        local_24 = iVar2;
      }
      UE::RHICore::
      ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
                (local_30,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_38);
    }
    local_30 = (FRHIShader *)param_1[2]._padding_;
    local_38 = this[-1].StageConstantBuffers + 1;
    if (local_30 != (FRHIShader *)0x0) {
      iVar2 = 0;
      bVar4 = *(int *)&this->field_0x138 != 0;
      if (bVar4) {
        for (; (*(uint *)&this->field_0x138 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = local_30->Frequency;
      local_24 = 0x20;
      if (bVar4) {
        local_24 = iVar2;
      }
      UE::RHICore::
      ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
                (local_30,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_38);
    }
    local_30 = (FRHIShader *)param_1[2]._padding_;
    local_38 = this[-1].StageConstantBuffers + 1;
    if (local_30 != (FRHIShader *)0x0) {
      iVar2 = 0;
      bVar4 = *(int *)&this->field_0x138 != 0;
      if (bVar4) {
        for (; (*(uint *)&this->field_0x138 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = local_30->Frequency;
      local_24 = 0x20;
      if (bVar4) {
        local_24 = iVar2;
      }
      UE::RHICore::
      ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
                (local_30,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_38);
    }
    local_30 = (FRHIShader *)param_1[2].SortKey;
    local_38 = this[-1].StageConstantBuffers + 1;
    if (local_30 != (FRHIShader *)0x0) {
      iVar2 = 0;
      bVar4 = *(int *)&this->field_0x138 != 0;
      if (bVar4) {
        for (; (*(uint *)&this->field_0x138 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      local_28 = local_30->Frequency;
      local_24 = 0x20;
      if (bVar4) {
        local_24 = iVar2;
      }
      UE::RHICore::
      ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
                (local_30,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_38);
    }
    local_30 = (FRHIShader *)param_1[2]._padding_;
    local_38 = this[-1].StageConstantBuffers + 1;
    if (local_30 != (FRHIShader *)0x0) {
      local_28 = local_30->Frequency;
      iVar2 = 0;
      bVar4 = *(int *)&this->field_0x138 != 0;
      if (bVar4) {
        for (; (*(uint *)&this->field_0x138 >> iVar2 & 1) == 0; iVar2 = iVar2 + 1) {
        }
      }
      local_24 = 0x20;
      if (bVar4) {
        local_24 = iVar2;
      }
      UE::RHICore::
      ApplyStaticUniformBuffers<_ApplyStaticUniformBuffersOnContext_::__l5::<lambda_1>_>
                (local_30,(TArray<FRHIUniformBuffer_*,TSizedDefaultAllocator<32>_> *)
                          &this->StageConstantBuffers[0]._padding_,(<lambda_1> *)&local_38);
    }
  }
  return;
}

// RHISetScissorRect @ 1459d02f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetScissorRect
          (FD3D12CommandContext *this,bool param_1,uint param_2,uint param_3,uint param_4,
          uint param_5)

{
  undefined1 auStack_48 [32];
  tagRECT local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if (param_1) {
    local_28.right = param_4;
  }
  else {
    param_2 = (uint)*(float *)&this->field_0x244;
    param_3 = (uint)*(float *)&this->field_0x248;
    local_28.right = (int)*(float *)&this->field_0x24c + param_2;
    param_5 = (int)*(float *)&this->field_0x250 + param_3;
  }
  local_28.left = param_2;
  if ((int)param_2 < 0) {
    local_28.left = 0;
  }
  local_28.top = param_3;
  if ((int)param_3 < 0) {
    local_28.top = 0;
  }
  local_28.bottom = param_5;
  FD3D12StateCache::SetScissorRect((FD3D12StateCache *)&this->field_0x1f0,&local_28);
  return;
}

// RHISetShaderParameters @ 1459d04c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShaderParameters
          (FD3D12CommandContext *this,FRHIComputeShader *param_1,
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
  SetShaderParametersOnContext
            ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),(FRHIShader *)param_1,
             SF_Compute,&local_18,&local_28,&local_38,&local_48);
  return;
}

// RHISetShaderParameters @ 1459d0540

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShaderParameters
          (FD3D12CommandContext *this,FRHIGraphicsShader *param_1,
          TArrayView<unsigned_char_const_,int> *param_2,
          TArrayView<FRHIShaderParameter_const_,int> *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_5)

{
  EShaderFrequency EVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRHIShaderParameterResource_const_,int> local_48;
  TArrayView<FRHIShaderParameterResource_const_,int> local_38;
  TArrayView<FRHIShaderParameter_const_,int> local_28;
  TArrayView<unsigned_char_const_,int> local_18;
  
  EVar1 = param_1->field_0x104;
  if ((((EVar1 == SF_Vertex) || (EVar1 == SF_Mesh)) || (EVar1 == SF_Amplification)) ||
     ((EVar1 == SF_Pixel || (EVar1 == SF_Geometry)))) {
    ValidateBoundShader((FD3D12StateCache *)&this->field_0x1f0,(FRHIShader *)param_1);
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
    SetShaderParametersOnContext
              ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),(FRHIShader *)param_1,
               EVar1,&local_18,&local_28,&local_38,&local_48);
  }
  else {
    GetShaderFrequencyString(EVar1,false);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x2d4,L"Unsupported FRHIGraphicsShader Type \'%s\'!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RHISetShaderRootConstants @ 1459d0910

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShaderRootConstants
          (FD3D12CommandContext *this,TIntVector4<unsigned_int> *param_1)

{
  FD3D12StateCache::SetRootConstants((FD3D12StateCache *)&this->field_0x1f0,param_1);
  return;
}

// RHISetShaderUnbinds @ 1459d09b0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShaderUnbinds
          (FD3D12CommandContext *this,FRHIComputeShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  FRHIShaderParameterUnbind *pFVar1;
  code *pcVar2;
  bool bVar3;
  FRHIShaderParameterUnbind *pFVar4;
  
  pFVar4 = param_2->DataPtr;
  pFVar1 = pFVar4 + (int)*(undefined8 *)&param_2->ArrayNum;
  do {
    if (pFVar4 == pFVar1) {
      return;
    }
    if (pFVar4->Type == ResourceView) {
      FD3D12StateCache::SetShaderResourceView
                ((FD3D12StateCache *)&this->field_0x1f0,SF_Compute,(FD3D12ShaderResourceView *)0x0,
                 (uint)pFVar4->Index);
    }
    else if (pFVar4->Type == UnorderedAccessView) {
      FD3D12StateCache::SetUAV
                ((FD3D12StateCache *)&this->field_0x1f0,SF_Compute,(uint)pFVar4->Index,
                 (FD3D12UnorderedAccessView *)0x0,0xffffffff);
    }
    else {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0x2ff,L"Unhandled resource type?");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar4 = pFVar4 + 1;
  } while( true );
}

// RHISetShaderUnbinds @ 1459d0a70

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShaderUnbinds
          (FD3D12CommandContext *this,FRHIGraphicsShader *param_1,
          TArrayView<FRHIShaderParameterUnbind_const_,int> *param_2)

{
  EShaderFrequency EVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<FRHIShaderParameterUnbind_const_,int> local_18;
  
  EVar1 = param_1->field_0x104;
  if ((((EVar1 == SF_Vertex) || (EVar1 == SF_Mesh)) || (EVar1 == SF_Amplification)) ||
     ((EVar1 == SF_Pixel || (EVar1 == SF_Geometry)))) {
    ValidateBoundShader((FD3D12StateCache *)&this->field_0x1f0,(FRHIShader *)param_1);
    local_18.DataPtr = param_2->DataPtr;
    local_18.ArrayNum = param_2->ArrayNum;
    local_18._12_4_ = *(undefined4 *)&param_2->field_0xc;
    SetShaderUnbindsOnContext
              ((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),(FRHIShader *)param_1,
               EVar1,&local_18);
  }
  else {
    GetShaderFrequencyString(EVar1,false);
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x310,L"Unsupported FRHIGraphicsShader Type \'%s\'!");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// RHISetShadingRate @ 1459d0db0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetShadingRate
          (FD3D12CommandContext *this,EVRSShadingRate param_1,EVRSRateCombiner param_2)

{
  if ((GRHIGlobals.VariableRateShading.SupportsPipeline) &&
     (((*(EVRSShadingRate *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) !=
        param_1 ||
       (*(EVRSRateCombiner *)
         ((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe9) != param_2))
      || (*(char *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xea) !=
          '\x03')))) {
    *(EVRSShadingRate *)((this->StateCache).PipelineState.Graphics.VBCache.Resources + 0x1d) =
         param_1;
    *(EVRSRateCombiner *)
     ((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xe9) = param_2;
    *(undefined1 *)((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources + 0xea) =
         3;
    this->field_0x218 = GRHIGlobals.VariableRateShading.SupportsPipeline;
  }
  return;
}

// RHISetStaticUniformBuffer @ 1459d0ea0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetStaticUniformBuffer
          (FD3D12CommandContext *this,uchar param_1,FRHIUniformBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (*(int *)&this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data <= (int)(uint)param_1
     ) {
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
  *(FRHIUniformBuffer **)(this->StageConstantBuffers[0]._padding_ + (ulonglong)param_1 * 8) =
       param_2;
  return;
}

// RHISetStaticUniformBuffers @ 1459d1010

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetStaticUniformBuffers
          (FD3D12CommandContext *this,FUniformBufferStaticBindings *param_1)

{
  byte bVar1;
  FRHIShaderBindingLayout *pFVar2;
  ForElementType<FRHIUniformBuffer_*> FVar3;
  undefined8 uVar4;
  ForElementType<unsigned_char> FVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ForElementType<unsigned_char> FVar9;
  ForElementType<FRHIUniformBuffer_*> FVar10;
  uint uVar11;
  longlong lVar12;
  uint uVar13;
  
  memset((void *)this->StageConstantBuffers[0]._padding_,0,
         (longlong)*(int *)&this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data << 3);
  pFVar2 = param_1->ShaderBindingLayout;
  if (pFVar2 == (FRHIShaderBindingLayout *)0x0) {
    uVar11 = 0;
    if (0 < (param_1->UniformBuffers).ArrayNum) {
      lVar12 = 0;
      do {
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
        FVar9 = (ForElementType<unsigned_char>)param_1;
        if (FVar5 != (ForElementType<unsigned_char>)0x0) {
          FVar9 = FVar5;
        }
        bVar1 = *(byte *)(lVar12 + (longlong)FVar9);
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
        FVar10 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
        if (FVar3 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar10 = FVar3;
        }
        uVar4 = *(undefined8 *)((longlong)FVar10 + lVar12 * 8);
        if (*(int *)&this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data <=
            (int)(uint)bVar1) {
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
        *(undefined8 *)(this->StageConstantBuffers[0]._padding_ + (ulonglong)bVar1 * 8) = uVar4;
      } while ((int)uVar11 < (param_1->UniformBuffers).ArrayNum);
    }
    this->StageConstantBuffers[0].ShadowData.ArrayNum = 0;
    this->StageConstantBuffers[0].ShadowData.ArrayMax = 0;
  }
  else {
    if ((param_1->UniformBuffers).ArrayNum != pFVar2->NumUniformBufferEntries) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InUniformBuffers.GetUniformBufferCount() == Layout->GetNumUniformBufferEntries()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                         ,0xc0,L"");
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
        FVar10 = (ForElementType<FRHIUniformBuffer_*>)&param_1->UniformBuffers;
        if (FVar3 != (ForElementType<FRHIUniformBuffer_*>)0x0) {
          FVar10 = FVar3;
        }
        uVar4 = *(undefined8 *)(lVar12 + (longlong)FVar10);
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data)
        {
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
        *(undefined8 *)(lVar12 + this->StageConstantBuffers[0]._padding_) = uVar4;
        uVar8 = 0;
        if ((int)uVar11 < *(int *)&this->StageConstantBuffers[0].ShadowData.AllocatorInstance.Data)
        {
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
        if (*(longlong *)(lVar12 + this->StageConstantBuffers[0]._padding_) == 0) {
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("StaticUniformBuffers[Index]",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                             ,0xc5,
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
    *(FRHIShaderBindingLayout **)&this->StageConstantBuffers[0].ShadowData.ArrayNum = pFVar2;
  }
  return;
}

// RHISetStencilRef @ 1459d13c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::RHISetStencilRef(FD3D12CommandContext *this,uint param_1)

{
  FD3D12StateCache::SetStencilRef((FD3D12StateCache *)&this->field_0x1f0,param_1);
  return;
}

// RHISetStereoViewport @ 1459d1460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetStereoViewport
          (FD3D12CommandContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10)

{
  undefined1 auStack_108 [32];
  tagRECT local_e8;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  D3D12_VIEWPORT local_c8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_c8.MaxDepth = param_10;
  local_c8.TopLeftX = (float)((int)ROUND((param_1 + param_1) - __real_3f000000) >> 1);
  local_c8.TopLeftY = (float)((int)ROUND((param_3 + param_3) - __real_3f000000) >> 1);
  local_c8.MinDepth = param_5;
  local_c8.Width =
       (float)-((int)ROUND(__real_bf000000 - ((param_6 - param_1) + (param_6 - param_1))) >> 1);
  local_c8.Height =
       (float)-((int)ROUND(__real_bf000000 - ((param_8 - param_3) + (param_8 - param_3))) >> 1);
  local_b0 = (float)((int)ROUND((param_2 + param_2) - __real_3f000000) >> 1);
  local_ac = (float)((int)ROUND((param_4 + param_4) - __real_3f000000) >> 1);
  local_a8 = (float)-((int)ROUND(__real_bf000000 - ((param_7 - param_2) + (param_7 - param_2))) >> 1
                     );
  local_e8.left = (long)local_c8.TopLeftX;
  local_a4 = (float)-((int)ROUND(__real_bf000000 - ((param_9 - param_4) + (param_9 - param_4))) >> 1
                     );
  local_a0 = param_5;
  local_e8.top = (long)local_c8.TopLeftY;
  local_e8.right = (long)(local_c8.Width + local_c8.TopLeftX);
  local_9c = param_10;
  local_e8.bottom = (long)(local_c8.Height + local_c8.TopLeftY);
  local_d8 = (int)local_b0;
  local_d4 = (int)local_ac;
  local_d0 = (int)(local_a8 + local_b0);
  local_cc = (int)(local_a4 + local_ac);
  FD3D12StateCache::SetViewports((FD3D12StateCache *)&this->field_0x1f0,2,&local_c8);
  FD3D12StateCache::SetScissorRects((FD3D12StateCache *)&this->field_0x1f0,2,&local_e8);
  return;
}

// RHISetStreamSource @ 1459d18a0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetStreamSource
          (FD3D12CommandContext *this,uint param_1,FRHIBuffer *param_2,uint param_3)

{
  uint uVar1;
  ulonglong uVar2;
  FD3D12ResourceLocation *pFVar3;
  FD3D12ResourceLocation *pFVar4;
  bool bVar5;
  
  uVar1 = 0;
  bVar5 = *(int *)&this->field_0x138 != 0;
  if (bVar5) {
    for (; (*(uint *)&this->field_0x138 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  pFVar4 = (FD3D12ResourceLocation *)0x0;
  if (param_2 != (FRHIBuffer *)0x0) {
    uVar2 = 0x20;
    if (bVar5) {
      uVar2 = (ulonglong)uVar1;
    }
    pFVar4 = (FD3D12ResourceLocation *)(&param_2[1]._padding_)[uVar2];
  }
  pFVar3 = (FD3D12ResourceLocation *)
           &pFVar4[2].AllocatorData.PoolAllocatorPrivateData.PoolData.AliasAllocation;
  if (pFVar4 == (FD3D12ResourceLocation *)0x0) {
    pFVar3 = (FD3D12ResourceLocation *)0x0;
  }
  FD3D12StateCache::InternalSetStreamSource
            ((FD3D12StateCache *)&this->field_0x1f0,pFVar3,param_1,
             (uint)*(ushort *)
                    ((longlong)(this->StateCache).PipelineState.Graphics.VBCache.Resources +
                    (ulonglong)param_1 * 2 + 0x6c),param_3);
  return;
}

// RHISetViewport @ 1459d1a10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetViewport
          (FD3D12CommandContext *this,float param_1,float param_2,float param_3,float param_4,
          float param_5,float param_6)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  undefined1 auStack_b8 [32];
  tagRECT local_98;
  D3D12_VIEWPORT local_88;
  ulonglong local_70;
  
  fVar2 = __real_46fffe00;
  local_70 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if (__real_46fffe00 < param_1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinX <= (uint32)( 32767 )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,300,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (fVar2 < param_2) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MinY <= (uint32)( 32767 )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x12d,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (fVar2 < param_4) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxX <= (uint32)( 32767 )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x12e,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (fVar2 < param_5) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("MaxY <= (uint32)( 32767 )",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                       ,0x12f,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_88.Width = param_4 - param_1;
  local_88.Height = param_5 - param_2;
  local_88.MaxDepth = param_6;
  if ((0.0 < local_88.Width) && (0.0 < local_88.Height)) {
    local_88.TopLeftX = param_1;
    local_88.TopLeftY = param_2;
    local_88.MinDepth = param_3;
    FD3D12StateCache::SetViewport((FD3D12StateCache *)&this->field_0x1f0,&local_88);
    local_98.right = (long)(longlong)param_4;
    local_98.bottom = (long)(longlong)param_5;
    local_98.left = (long)(longlong)param_1;
    if (local_98.left < 0) {
      local_98.left = 0;
    }
    local_98.top = (long)(longlong)param_2;
    if (local_98.top < 0) {
      local_98.top = 0;
    }
    FD3D12StateCache::SetScissorRect((FD3D12StateCache *)&this->field_0x1f0,&local_98);
  }
  return;
}

// SetAsyncComputeBudgetInternal @ 1459d7730

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetAsyncComputeBudgetInternal
          (FD3D12CommandContext *this,EAsyncComputeBudget param_1)

{
  return;
}

// SetDepthBounds @ 1459d7750

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetDepthBounds(FD3D12CommandContext *this,float param_1,float param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (GRHIGlobals.SupportsDepthBoundsTest) {
    if (*(longlong *)&this->field_0x188 == 0) {
      (**(code **)(*(longlong *)this + 8))();
    }
    if (*(longlong *)(*(longlong *)&this->field_0x188 + 0x30) != 0) {
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar2 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x30);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      (**(code **)(*plVar2 + 0x1f0))(plVar2,param_1,param_2);
    }
  }
  return;
}

// SetExplicitDescriptorCache @ 1459d7da0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetExplicitDescriptorCache
          (FD3D12CommandContext *this,FD3D12ExplicitDescriptorCache *param_1)

{
  FD3D12DescriptorCache::SetExplicitDescriptorCache(&(this->StateCache).DescriptorCache,param_1);
  return;
}

// SetRenderTargets @ 1459d8240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetRenderTargets
          (FD3D12CommandContext *this,uint param_1,FRHIRenderTargetView *param_2,
          FRHIDepthRenderTargetView *param_3)

{
  code *pcVar1;
  FD3D12DepthStencilView *pFVar2;
  longlong lVar3;
  longlong lVar4;
  FD3D12RenderTargetView *pFVar5;
  char *pcVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  FD3D12RenderTargetView *pFVar10;
  FD3D12RenderTargetView *pFVar11;
  FD3D12RenderTargetView *pFVar12;
  undefined1 *puVar13;
  FD3D12RenderTargetView *pFVar14;
  int iVar15;
  FD3D12RenderTargetView **ppFVar16;
  uint *puVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  undefined1 auStackY_118 [32];
  undefined1 local_d8 [4];
  uint local_d4;
  FD3D12DepthStencilView *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  uint local_b8;
  uint local_b4;
  FD3D12ResourceLocation *local_b0;
  FD3D12ResourceLocation *local_a8;
  FRHIRenderTargetView *local_a0;
  FD3D12RenderTargetView *local_98 [8];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_118;
  local_d4 = param_1;
  local_a0 = param_2;
  if (param_3 == (FRHIDepthRenderTargetView *)0x0) {
LAB_1459d82b4:
    lVar3 = 0;
  }
  else {
    local_b8 = 0;
    bVar18 = *(int *)&this->field_0x2f8 != 0;
    if (bVar18) {
      for (; (*(uint *)&this->field_0x2f8 >> local_b8 & 1) == 0; local_b8 = local_b8 + 1) {
      }
    }
    uVar9 = 0x20;
    if (bVar18) {
      uVar9 = (ulonglong)local_b8;
    }
    if ((param_3->Texture == (FRHITexture *)0x0) ||
       (lVar3 = (**(code **)(param_3->Texture->_padding_ + 0x48))(), lVar3 == 0))
    goto LAB_1459d82b4;
    lVar3 = *(longlong *)(lVar3 + 0x200 + uVar9 * 8);
  }
  pFVar12 = (FD3D12RenderTargetView *)0x0;
  if ((8 < param_1) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("NewNumSimultaneousRenderTargets <= MaxSimultaneousRenderTargets",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0x366,L""), bVar18)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_d0 = (FD3D12DepthStencilView *)0x0;
  if (lVar3 != 0) {
    if ((param_3 == (FRHIDepthRenderTargetView *)0x0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("NewDepthStencilTargetRHI",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                            ,0x36c,L""), bVar18)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    switch((param_3->DepthStencilAccess).Value) {
    case DepthNop:
    case DepthWrite:
    case DepthNop_StencilWrite:
    case DepthWrite_StencilWrite:
      lVar4 = 0x278;
      break;
    case DepthRead:
    case DepthRead_StencilWrite:
      lVar4 = 0x288;
      break;
    default:
      bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                          ,0x289,L"");
      if (bVar18) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar4 = 0x1000000268;
      break;
    case DepthNop_StencilRead:
    case DepthWrite_StencilRead:
      lVar4 = 0x298;
      break;
    case DepthRead_StencilRead:
      lVar4 = 0x2a8;
    }
    local_d0 = *(FD3D12DepthStencilView **)(lVar4 + lVar3);
    if (lVar3 != -0x138) {
      local_b0 = (FD3D12ResourceLocation *)(lVar3 + 0x180);
      pFVar10 = pFVar12;
      if ((local_b0 == (FD3D12ResourceLocation *)0x0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                              ,0x2a9,L""), bVar18)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      do {
        FD3D12StateCache::ClearResourceViewCaches
                  (&this->StateCache,(EShaderFrequency)pFVar10,&local_b0,UAVMask|SRVMask);
        uVar8 = (int)pFVar10 + 1;
        pFVar10 = (FD3D12RenderTargetView *)(ulonglong)uVar8;
      } while ((int)uVar8 < 6);
    }
  }
  ppFVar16 = local_98;
  puVar17 = &param_2->ArraySliceIndex;
  pFVar10 = pFVar12;
  do {
    pFVar14 = pFVar12;
    if (((uint)pFVar10 < param_1) &&
       (((FRHIRenderTargetView *)(puVar17 + -3))->Texture != (FRHITexture *)0x0)) {
      local_b4 = 0;
      bVar18 = *(int *)&this->field_0x2f8 != 0;
      if (bVar18) {
        for (; (*(uint *)&this->field_0x2f8 >> local_b4 & 1) == 0; local_b4 = local_b4 + 1) {
        }
      }
      uVar8 = puVar17[-1];
      uVar7 = *puVar17;
      uVar9 = 0x20;
      if (bVar18) {
        uVar9 = (ulonglong)local_b4;
      }
      lVar3 = (**(code **)(((FRHIRenderTargetView *)(puVar17 + -3))->Texture->_padding_ + 0x48))();
      pFVar11 = pFVar12;
      if (lVar3 != 0) {
        pFVar11 = *(FD3D12RenderTargetView **)(lVar3 + 0x200 + uVar9 * 8);
      }
      if (pFVar11[5].field_0x20 == '\0') {
        if (1 < uVar7 + 1) {
          iVar15 = 0xc3;
          pcVar6 = "ArraySliceIndex == -1 || ArraySliceIndex == 0";
          goto LAB_1459d84c6;
        }
      }
      else {
        if (((int)uVar7 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArraySliceIndex >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                                ,0xbc,L""), bVar18)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar8 = uVar8 * *(int *)&pFVar11[5].field_0x24 + uVar7;
        if (*(int *)&pFVar11[5].field_0x40 <= (int)uVar8) {
          iVar15 = 0xbe;
          pcVar6 = "ArrayIndex < RenderTargetViews.Num()";
LAB_1459d84c6:
          bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             (pcVar6,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                              ,iVar15,L"");
          if (bVar18) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
      }
      if ((int)uVar8 < *(int *)&pFVar11[5].field_0x40) {
        if (((int)uVar8 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        puVar13 = &pFVar11[5].field_0x28;
        if (*(undefined1 **)&pFVar11[5].field_0x38 != (undefined1 *)0x0) {
          puVar13 = *(undefined1 **)&pFVar11[5].field_0x38;
        }
        pFVar14 = *(FD3D12RenderTargetView **)(puVar13 + (longlong)(int)uVar8 * 0x10);
        if (pFVar14 == (FD3D12RenderTargetView *)0x0) goto LAB_1459d854e;
      }
      else {
LAB_1459d854e:
        local_d8[0] = 0;
        `FD3D12CommandContext::SetRenderTargets'::__l24::<lambda_1>::operator()(local_d8);
      }
      pFVar5 = (FD3D12RenderTargetView *)&pFVar11[2].field_0x58;
      if (pFVar11 == (FD3D12RenderTargetView *)0x0) {
        pFVar5 = pFVar12;
      }
      param_1 = local_d4;
      if (pFVar5 != (FD3D12RenderTargetView *)0x0) {
        local_a8 = (FD3D12ResourceLocation *)&pFVar5->field_0x48;
        pFVar11 = pFVar12;
        if ((local_a8 == (FD3D12ResourceLocation *)0x0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.cpp"
                                ,0x2a9,L""), bVar18)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        do {
          FD3D12StateCache::ClearResourceViewCaches
                    (&this->StateCache,(EShaderFrequency)pFVar11,&local_a8,UAVMask|SRVMask);
          uVar8 = (int)pFVar11 + 1;
          pFVar11 = (FD3D12RenderTargetView *)(ulonglong)uVar8;
          param_1 = local_d4;
        } while ((int)uVar8 < 6);
      }
    }
    pFVar2 = local_d0;
    *ppFVar16 = pFVar14;
    uVar8 = (uint)pFVar10 + 1;
    pFVar10 = (FD3D12RenderTargetView *)(ulonglong)uVar8;
    ppFVar16 = ppFVar16 + 1;
    puVar17 = puVar17 + 6;
  } while (uVar8 < 8);
  FD3D12StateCache::SetRenderTargets(&this->StateCache,param_1,local_98,local_d0);
  FD3D12StateCache::ClearUAVs(&this->StateCache,SF_Pixel);
  if (local_98[0] == (FD3D12RenderTargetView *)0x0) {
    if (pFVar2 == (FD3D12DepthStencilView *)0x0) {
      return;
    }
    if ((*(longlong *)&pFVar2->field_0x18 == 0) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                            ,0xfe,L""), bVar18)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar9 = *(ulonglong *)(*(longlong *)&pFVar2->field_0x20 + 0x60);
    fVar20 = (float)*(uint *)(*(longlong *)&pFVar2->field_0x20 + 0x68);
    if ((longlong)uVar9 < 0) {
      fVar19 = (float)uVar9;
    }
    else {
      fVar19 = (float)(longlong)uVar9;
    }
    goto LAB_1459d879a;
  }
  if (((local_d4 == 0) || (local_a0->Texture == (FRHITexture *)0x0)) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("0 < NewNumSimultaneousRenderTargets && NewRenderTargetsRHI[0].Texture != nullptr"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                          ,0x38f,L""), bVar18)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(longlong *)&local_98[0]->field_0x18 == 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                          ,0xfe,L""), bVar18)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  iVar15 = *(int *)&local_98[0]->field_0x5c;
  lVar3 = *(longlong *)&local_98[0]->field_0x20;
  local_c8 = 0;
  uStack_c0 = 0;
  if (((iVar15 == 4) || (iVar15 == 5)) || ((iVar15 == 6 || (iVar15 == 7)))) {
    uVar8 = *(uint *)(lVar3 + 0x60);
    uVar7 = *(uint *)(lVar3 + 0x68);
    if (iVar15 - 4U < 2) goto LAB_1459d870c;
  }
  else if (iVar15 == 8) {
    uVar8 = *(uint *)(lVar3 + 0x60);
    uVar7 = *(uint *)(lVar3 + 0x68);
LAB_1459d870c:
    pFVar12 = (FD3D12RenderTargetView *)(ulonglong)*(uint *)&local_98[0]->field_0x60;
  }
  else {
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("!\"Enclosing block should never be called\"",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                        ,0x356,L"");
    if (bVar18) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar7 = local_c8._4_4_;
    uVar8 = (uint)local_c8;
  }
  fVar20 = (float)(uVar7 >> ((byte)pFVar12 & 0x1f));
  fVar19 = (float)(uVar8 >> ((byte)pFVar12 & 0x1f));
LAB_1459d879a:
  RHISetViewport((FD3D12CommandContext *)&this->field_0x1c0,0.0,0.0,0.0,fVar19,fVar20,
                 __real_3f800000);
  return;
}

// SetRenderTargetsAndClear @ 1459d8bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetRenderTargetsAndClear
          (FD3D12CommandContext *this,FRHISetRenderTargetsInfo *param_1)

{
  undefined4 uVar1;
  FRHITexture *pFVar2;
  uint uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  FRHISetRenderTargetsInfo *pFVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined1 auStackY_228 [32];
  FName local_1c8;
  FD3D12CommandContext *local_1c0;
  FName local_1b8;
  int local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined4 local_1a0;
  FString local_198;
  FString local_188;
  undefined8 local_178;
  undefined8 uStack_170;
  FD3D12BoundRenderTargets local_168;
  FD3D12RenderTargetView *local_118;
  FD3D12RenderTargetView *pFStack_110;
  FD3D12RenderTargetView *local_108;
  FD3D12RenderTargetView *pFStack_100;
  FD3D12RenderTargetView *local_f8;
  FD3D12RenderTargetView *pFStack_f0;
  FD3D12RenderTargetView *local_e8;
  FD3D12RenderTargetView *pFStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined1 local_58 [8];
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1c0 = this;
  SetRenderTargets(this,param_1->NumColorRenderTargets,param_1->ColorRenderTarget,
                   &param_1->DepthStencilRenderTarget);
  local_118 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[0];
  pFStack_110 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[1];
  local_108 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[2];
  pFStack_100 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[3];
  local_f8 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[4];
  pFStack_f0 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[5];
  local_e8 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[6];
  pFStack_e0 = (this->StateCache).PipelineState.Graphics.RenderTargetArray[7];
  FD3D12BoundRenderTargets::FD3D12BoundRenderTargets
            (&local_168,&local_118,
             (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets,
             (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget);
  iVar14 = 0;
  if (((param_1->bClearColor != false) || (param_1->bClearStencil != false)) ||
     (param_1->bClearDepth != false)) {
    if ((param_1->bClearColor != false) && (0 < param_1->NumColorRenderTargets)) {
      puVar11 = &local_d0;
      puVar15 = local_58;
      pFVar13 = param_1;
      do {
        pFVar2 = pFVar13->ColorRenderTarget[0].Texture;
        if (pFVar2 == (FRHITexture *)0x0) {
          local_178 = 0;
          uStack_170 = 0;
          puVar11[-1] = 0;
          *puVar11 = 0;
        }
        else {
          lVar9 = (**(code **)(pFVar2->_padding_ + 0x20))();
          uVar5 = *(undefined4 *)(lVar9 + 0xc);
          uVar6 = *(undefined4 *)(lVar9 + 0x10);
          uVar7 = *(undefined4 *)(lVar9 + 0x14);
          uVar1 = *(undefined4 *)(lVar9 + 0x18);
          if (*(int *)(lVar9 + 8) != 1) {
            local_1c8 = (FName)(pFVar13->ColorRenderTarget[0].Texture)->_padding_;
            ::FName::GetPlainNameString(&local_1c8,&local_198);
            bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("ClearValue.ColorBinding == EClearBinding::EColorBound",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                               ,0x3ca,L"Texture: %s does not have a color bound for fast clears");
            if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_198.Data.AllocatorInstance.Data);
            }
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            bVar8 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<456935519012520230>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                               ,0x126,"ColorBinding == EClearBinding::EColorBound");
            if (bVar8) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
          }
          *(undefined4 *)(puVar11 + -1) = uVar5;
          *(undefined4 *)((longlong)puVar11 + -4) = uVar6;
          *(undefined4 *)puVar11 = uVar7;
          *(undefined4 *)((longlong)puVar11 + 4) = uVar1;
        }
        iVar14 = iVar14 + 1;
        *puVar15 = pFVar13->ColorRenderTarget[0].LoadAction == EClear;
        puVar11 = puVar11 + 2;
        puVar15 = puVar15 + 1;
        pFVar13 = (FRHISetRenderTargetsInfo *)(pFVar13->ColorRenderTarget + 1);
        this = local_1c0;
      } while (iVar14 < param_1->NumColorRenderTargets);
    }
    if ((param_1->bClearDepth != false) || (param_1->bClearStencil != false)) {
      lVar9 = (**(code **)(((param_1->DepthStencilRenderTarget).Texture)->_padding_ + 0x20))();
      local_1b0 = *(int *)(lVar9 + 8);
      uStack_1ac = *(undefined4 *)(lVar9 + 0xc);
      uStack_1a8 = *(undefined4 *)(lVar9 + 0x10);
      uStack_1a4 = *(undefined4 *)(lVar9 + 0x14);
      local_1a0 = *(undefined4 *)(lVar9 + 0x18);
      if (local_1b0 != 2) {
        local_1b8 = (FName)((param_1->DepthStencilRenderTarget).Texture)->_padding_;
        ::FName::GetPlainNameString(&local_1b8,&local_188);
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("ClearValue.ColorBinding == EClearBinding::EDepthStencilBound",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Commands.cpp"
                           ,0x3d7,L"Texture: %s does not have a DS value bound for fast clears");
        if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_188.Data.AllocatorInstance.Data);
        }
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<456935519012520236>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIResources.h"
                           ,300,"ColorBinding == EClearBinding::EDepthStencilBound");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    puVar15 = local_58;
    if (param_1->bClearColor == false) {
      puVar15 = (undefined1 *)0x0;
    }
    (**(code **)(*(longlong *)this + 0x48))(this,puVar15,param_1->NumColorRenderTargets,&local_d8);
  }
  lVar9 = 0;
  if (GRHIGlobals.VariableRateShading.SupportsAttachment != false) {
    if (param_1->ShadingRateTexture == (FRHITexture *)0x0) {
      if ((this->StateCache).PipelineState.Graphics.ShadingRateImage == (FD3D12Resource *)0x0)
      goto LAB_1459d8f9a;
      (this->StateCache).PipelineState.Graphics.ShadingRateImage = (FD3D12Resource *)0x0;
    }
    else {
      uVar3 = 0;
      bVar8 = *(int *)&this->field_0x2f8 != 0;
      if (bVar8) {
        for (; (*(uint *)&this->field_0x2f8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
        }
      }
      uVar12 = 0x20;
      if (bVar8) {
        uVar12 = (ulonglong)uVar3;
      }
      lVar10 = (**(code **)(param_1->ShadingRateTexture->_padding_ + 0x48))();
      if (lVar10 != 0) {
        lVar9 = *(longlong *)(lVar10 + 0x200 + uVar12 * 8);
      }
      if ((this->StateCache).PipelineState.Graphics.ShadingRateImage ==
          *(FD3D12Resource **)(lVar9 + 400)) goto LAB_1459d8f9a;
      (this->StateCache).PipelineState.Graphics.ShadingRateImage = *(FD3D12Resource **)(lVar9 + 400)
      ;
    }
    (this->StateCache).bNeedSetShadingRateImage = GRHIGlobals.VariableRateShading.SupportsAttachment
    ;
  }
LAB_1459d8f9a:
  FD3D12BoundRenderTargets::~FD3D12BoundRenderTargets(&local_168);
  return;
}

// SetSRVParameter @ 1459d9bb0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetSRVParameter
          (FD3D12CommandContext *this,EShaderFrequency param_1,uint param_2,
          FD3D12ShaderResourceView *param_3)

{
  FD3D12StateCache::SetShaderResourceView(&this->StateCache,param_1,param_3,param_2);
  return;
}

// SetShadingRate @ 1459dadf0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetShadingRate
          (FD3D12CommandContext *this,EVRSShadingRate param_1,FD3D12Resource *param_2,
          TStaticArray<EVRSRateCombiner,2,4294967295> *param_3)

{
  int *piVar1;
  EVRSRateCombiner EVar2;
  longlong *plVar3;
  D3D12_SHADING_RATE_COMBINER DVar4;
  longlong lVar5;
  ID3D12Resource *pIVar6;
  D3D12_SHADING_RATE_COMBINER *pDVar7;
  
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))();
  }
  if ((*(longlong *)(*(longlong *)&this->field_0x188 + 0x50) != 0) &&
     (GRHIGlobals.VariableRateShading.SupportsPipeline != false)) {
    if ((param_1 == VRSSR_1x1) && (param_2 == (FD3D12Resource *)0x0)) {
      this->VRSCombiners[0] = D3D12_SHADING_RATE_COMBINER_PASSTHROUGH;
      this->VRSCombiners[1] = D3D12_SHADING_RATE_COMBINER_PASSTHROUGH;
    }
    else {
      lVar5 = 0;
      pDVar7 = this->VRSCombiners;
      do {
        EVar2 = param_3->Elements[lVar5];
        if (EVar2 == VRSRB_Passthrough) {
LAB_1459daea9:
          DVar4 = D3D12_SHADING_RATE_COMBINER_PASSTHROUGH;
        }
        else if (EVar2 == VRSRB_Override) {
          DVar4 = D3D12_SHADING_RATE_COMBINER_OVERRIDE;
        }
        else if (EVar2 == VRSRB_Min) {
          DVar4 = D3D12_SHADING_RATE_COMBINER_MIN;
        }
        else if (EVar2 == VRSRB_Max) {
          DVar4 = D3D12_SHADING_RATE_COMBINER_MAX;
        }
        else {
          if (EVar2 != VRSRB_Sum) goto LAB_1459daea9;
          DVar4 = D3D12_SHADING_RATE_COMBINER_SUM;
        }
        *pDVar7 = DVar4;
        lVar5 = lVar5 + 1;
        pDVar7 = pDVar7 + 1;
      } while (lVar5 < 2);
    }
    pIVar6 = (ID3D12Resource *)0x0;
    this->VRSShadingRate = (uint)param_1;
    if (*(longlong *)&this->field_0x188 == 0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
    plVar3 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x50);
    piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar3 + 0x268))(plVar3,this->VRSShadingRate,this->VRSCombiners);
    if (GRHIGlobals.VariableRateShading.SupportsAttachment != false) {
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar3 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x50);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      if (param_2 != (FD3D12Resource *)0x0) {
        pIVar6 = (param_2->Resource).Reference;
      }
      (**(code **)(*plVar3 + 0x270))(plVar3,pIVar6);
    }
  }
  return;
}

// SetUAVParameter @ 1459db030

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetUAVParameter
          (FD3D12CommandContext *this,EShaderFrequency param_1,uint param_2,
          FD3D12UnorderedAccessView *param_3)

{
  ClearShaderResources(this,param_3,SRVMask);
  FD3D12StateCache::SetUAV(&this->StateCache,param_1,param_2,param_3,0xffffffff);
  return;
}

// SetUAVParameter @ 1459db0a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetUAVParameter
          (FD3D12CommandContext *this,EShaderFrequency param_1,uint param_2,
          FD3D12UnorderedAccessView *param_3,uint param_4)

{
  ClearShaderResources(this,param_3,SRVMask);
  FD3D12StateCache::SetUAV(&this->StateCache,param_1,param_2,param_3,param_4);
  return;
}

// SetupDispatch @ 1459db3c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetupDispatch
          (FD3D12CommandContext *this,uint param_1,uint param_2,uint param_3)

{
  FRHIShader *pFVar1;
  uint uVar2;
  ERHIPipeline EVar3;
  longlong *plVar4;
  bool bVar5;
  FD3D12ResourceBinder local_28;
  
  FlushPendingDescriptorUpdates(this);
  CommitComputeShaderConstants(this);
  uVar2 = 0;
  bVar5 = *(int *)&this->field_0x2f8 != 0;
  if (bVar5) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  local_28.Frequency = SF_Compute;
  pFVar1 = (FRHIShader *)
           ((this->StateCache).PipelineState.Compute.CurrentPipelineStateObject.Reference)->
           _padding_;
  local_28.ConstantBuffer = this->StageConstantBuffers + 5;
  local_28.GpuIndex = 0x20;
  if (bVar5) {
    local_28.GpuIndex = uVar2;
  }
  plVar4 = &pFVar1[1]._padding_;
  if (pFVar1 == (FRHIShader *)0x0) {
    plVar4 = (longlong *)&DAT_00000010;
  }
  local_28.bBindlessSamplers = (bool)((byte)*plVar4 >> 2 & 1);
  local_28.bBindlessResources = (bool)((byte)*plVar4 >> 1 & 1);
  local_28.Context = this;
  UE::RHI::Private::
  SetUniformBufferResourcesFromTables<FD3D12ResourceBinder_&,FD3D12UniformBuffer_*_[16],unsigned_short,0>
            (&local_28,pFVar1,this->DirtyUniformBuffers + 5,this->BoundUniformBuffers + 5,
             *(FTracker **)&this->field_0x1c8);
  EVar3 = (**(code **)(*(longlong *)&this->field_0x1c0 + 8))();
  FD3D12StateCache::ApplyState(&this->StateCache,EVar3,Compute);
  return;
}

// SetupDispatchDraw @ 1459db490

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetupDispatchDraw
          (FD3D12CommandContext *this,uint param_1,uint param_2,uint param_3)

{
  ERHIPipeline EVar1;
  
  FlushPendingDescriptorUpdates(this);
  CommitGraphicsResourceTables(this);
  CommitNonComputeShaderConstants(this);
  EVar1 = (**(code **)(*(longlong *)&this->field_0x1c0 + 8))();
  FD3D12StateCache::ApplyState(&this->StateCache,EVar1,Graphics);
  return;
}

// SetupDraw @ 1459db4e0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::SetupDraw
          (FD3D12CommandContext *this,FRHIBuffer *param_1,uint param_2,uint param_3)

{
  longlong lVar1;
  uint uVar2;
  ERHIPipeline EVar3;
  DXGI_FORMAT DVar4;
  ulonglong uVar5;
  bool bVar6;
  
  FlushPendingDescriptorUpdates(this);
  CommitGraphicsResourceTables(this);
  CommitNonComputeShaderConstants(this);
  if (param_1 != (FRHIBuffer *)0x0) {
    uVar2 = 0;
    bVar6 = *(int *)&this->field_0x2f8 != 0;
    if (bVar6) {
      for (; (*(uint *)&this->field_0x2f8 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
      }
    }
    uVar5 = 0x20;
    if (bVar6) {
      uVar5 = (ulonglong)uVar2;
    }
    lVar1 = (&param_1[1]._padding_)[uVar5];
    uVar2 = *(uint *)(lVar1 + 0x198);
    DVar4 = DXGI_FORMAT_R32_UINT;
    if (*(int *)(lVar1 + 0xdc) == 2) {
      DVar4 = DXGI_FORMAT_R16_UINT;
    }
    if (((*(ulong64 *)(lVar1 + 0x188) !=
          (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.BufferLocation)
        || (uVar2 != (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.
                     SizeInBytes)) ||
       (DVar4 != (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.Format)) {
      (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.BufferLocation =
           *(ulong64 *)(lVar1 + 0x188);
      (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.SizeInBytes = uVar2;
      (this->StateCache).PipelineState.Graphics.IBCache.CurrentIndexBufferView.Format = DVar4;
      FD3D12StateCache::InternalSetIndexBuffer
                (&this->StateCache,*(FD3D12Resource **)(lVar1 + 0x140));
    }
  }
  EVar3 = (**(code **)(*(longlong *)&this->field_0x1c0 + 8))();
  FD3D12StateCache::ApplyState(&this->StateCache,EVar3,Graphics);
  return;
}

// SetupIndirectArgument @ 1459db5c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "D3D12_RESOURCE_STATES": Some values do not have unique names */

FD3D12ResourceLocation * __thiscall
FD3D12CommandContext::SetupIndirectArgument
          (FD3D12CommandContext *this,FRHIBuffer *param_1,D3D12_RESOURCE_STATES param_2)

{
  longlong *plVar1;
  code *pcVar2;
  FD3D12Resource *this_00;
  FD3D12CommandList *this_01;
  uint uVar3;
  ulonglong uVar4;
  FD3D12ResourceLocation *pFVar5;
  TArrayView<FD3D12ResidencyHandle_*_const,int> *pTVar6;
  longlong lVar7;
  bool bVar8;
  FD3D12Resource *local_res10;
  FD3D12Resource *local_res20;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_38;
  TArrayView<FD3D12ResidencyHandle_*_const,int> local_28;
  
  uVar3 = 0;
  bVar8 = *(int *)&this->field_0x2f8 != 0;
  if (bVar8) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
    }
  }
  if (param_1 == (FRHIBuffer *)0x0) {
    lVar7 = 0;
  }
  else {
    uVar4 = 0x20;
    if (bVar8) {
      uVar4 = (ulonglong)uVar3;
    }
    lVar7 = (&param_1[1]._padding_)[uVar4];
  }
  plVar1 = *(longlong **)&this->field_0x1b8;
  pcVar2 = *(code **)(*plVar1 + 0x28);
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  (*pcVar2)(plVar1,*(undefined8 *)&this->field_0x188,&this->field_0x38);
  this_00 = *(FD3D12Resource **)(lVar7 + 0x140);
  if (this_00 == (FD3D12Resource *)0x0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FD3D12ResourceLocation *)(*pcVar2)();
      return pFVar5;
    }
  }
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  this_01 = *(FD3D12CommandList **)&this->field_0x188;
  local_res20 = this_00;
  if ((this_00->ReservedResourceData).Ptr != (FD3D12ReservedResourceData *)0x0) {
    TSet<FD3D12Resource_const_*,DefaultKeyFuncs<FD3D12Resource_const_*,0>,FDefaultSetAllocator>::
    Emplace<FD3D12Resource_const_*_const_&>
              (&(this_01->State).DeferredResidencyUpdateSet,&local_res10,(bool *)&local_res20);
    return (FD3D12ResourceLocation *)(lVar7 + 0x130);
  }
  pTVar6 = FD3D12Resource::GetResidencyHandles(this_00,&local_28);
  local_38.DataPtr = pTVar6->DataPtr;
  local_38.ArrayNum = pTVar6->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
  FD3D12CommandList::AddToResidencySet(this_01,&local_38);
  return (FD3D12ResourceLocation *)(lVar7 + 0x130);
}

// UnsetExplicitDescriptorCache @ 1459dd980

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall FD3D12CommandContext::UnsetExplicitDescriptorCache(FD3D12CommandContext *this)

{
  if ((this->StateCache).DescriptorCache.bUsingExplicitCacheHeaps != false) {
    FD3D12DescriptorCache::SetDescriptorHeaps
              (&(this->StateCache).DescriptorCache,
               -(uint)((this->StateCache).DescriptorCache.bLastSetHeapBeforeExplicitIsBindless !=
                      false) & Bindless);
    (this->StateCache).DescriptorCache.bUsingExplicitCacheHeaps = false;
    (this->StateCache).DescriptorCache.bExplicitViewHeapIsBindless = false;
  }
  return;
}

// operator() @ 1459fa7e0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::RHISetBindingsOnShaderBindingTable'::__l2::<lambda_1>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  ERayTracingLocalShaderBindingType *pEVar4;
  
  cVar1 = *(char *)((longlong)this + 0x20);
  pEVar4 = (ERayTracingLocalShaderBindingType *)((longlong)param_2 * 0x38 + *(longlong *)this);
  if (cVar1 != '\0') {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x179e,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        return;
      }
      if (*pEVar4 != Transient) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Binding.BindingType == ERayTracingLocalShaderBindingType::Transient",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                           ,0x1791,L"");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      SetRayTracingMissShader
                (*(FD3D12Device **)((longlong)this + 8),
                 *(FD3D12RayTracingShaderBindingTableInternal **)((longlong)this + 0x10),
                 *(undefined4 *)(pEVar4 + 0x14),
                 *(FD3D12RayTracingPipelineState **)((longlong)this + 0x18),
                 *(undefined4 *)(pEVar4 + 0x18),(uint)(ushort)*(undefined2 *)(pEVar4 + 0x20),
                 *(FRHIUniformBuffer ***)(pEVar4 + 0x28),
                 (uint)(ushort)*(undefined2 *)(pEVar4 + 0x22),*(void **)(pEVar4 + 0x30),
                 *(undefined4 *)(pEVar4 + 0x1c),param_1->WorkerIndex);
      return;
    }
    if (*pEVar4 != Transient) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Binding.BindingType == ERayTracingLocalShaderBindingType::Transient",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1784,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SetRayTracingCallableShader
              (*(FD3D12Device **)((longlong)this + 8),
               *(FD3D12RayTracingShaderBindingTableInternal **)((longlong)this + 0x10),
               *(undefined4 *)(pEVar4 + 0x14),
               *(FD3D12RayTracingPipelineState **)((longlong)this + 0x18),
               *(undefined4 *)(pEVar4 + 0x18),(uint)(ushort)*(undefined2 *)(pEVar4 + 0x20),
               *(FRHIUniformBuffer ***)(pEVar4 + 0x28),(uint)(ushort)*(undefined2 *)(pEVar4 + 0x22),
               *(void **)(pEVar4 + 0x30),*(undefined4 *)(pEVar4 + 0x1c),param_1->WorkerIndex);
    return;
  }
  if (*pEVar4 != Clear) {
    SetRayTracingHitGroup
              (*(FD3D12Device **)((longlong)this + 8),
               *(FD3D12RayTracingShaderBindingTableInternal **)((longlong)this + 0x10),
               *(undefined4 *)(pEVar4 + 0x14),
               *(FD3D12RayTracingPipelineState **)((longlong)this + 0x18),
               *(undefined4 *)(pEVar4 + 0x18),*(FD3D12RayTracingGeometry **)(pEVar4 + 8),
               *(undefined4 *)(pEVar4 + 0x10),(uint)(ushort)*(undefined2 *)(pEVar4 + 0x20),
               *(FRHIUniformBuffer ***)(pEVar4 + 0x28),(uint)(ushort)*(undefined2 *)(pEVar4 + 0x22),
               *(void **)(pEVar4 + 0x30),*(undefined4 *)(pEVar4 + 0x1c),*pEVar4,param_1->WorkerIndex
              );
    return;
  }
  FD3D12RayTracingShaderBindingTableInternal::ClearHitRecordData
            (*(FD3D12RayTracingShaderBindingTableInternal **)((longlong)this + 0x10),
             param_1->WorkerIndex,*(undefined4 *)(pEVar4 + 0x14));
  return;
}

// BuildAccelerationStructuresInternal @ 145a053c0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::BuildAccelerationStructuresInternal
          (FD3D12CommandContext *this,
          TArrayView<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC_const_,int> *param_1)

{
  int *piVar1;
  longlong *plVar2;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *pDVar3;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *pDVar4;
  
  pDVar4 = param_1->DataPtr;
  pDVar3 = pDVar4 + param_1->ArrayNum;
  for (; pDVar4 != pDVar3; pDVar4 = pDVar4 + 1) {
    if (*(longlong *)&this->field_0x188 == 0) {
      (**(code **)(*(longlong *)this + 8))(this);
    }
    plVar2 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x48);
    piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar2 + 0x240))(plVar2,pDVar4,0,0);
  }
  return;
}

// RHIBeginRenderQuery @ 145a229a0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBeginRenderQuery(FD3D12CommandContext *this,FRHIRenderQuery *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  ED3D12QueryType EVar5;
  ulonglong uVar6;
  FD3D12QueryLocation *pFVar7;
  longlong lVar8;
  bool bVar9;
  FD3D12QueryLocation local_28;
  
  uVar2 = 0;
  bVar9 = *(int *)&this->field_0x138 != 0;
  if (bVar9) {
    for (; (*(uint *)&this->field_0x138 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  if (param_1 == (FRHIRenderQuery *)0x0) {
    lVar8 = 0;
  }
  else {
    uVar6 = 0x20;
    if (bVar9) {
      uVar6 = (ulonglong)uVar2;
    }
    lVar8 = *(longlong *)(&param_1[1].field_0x10 + uVar6 * 8);
  }
  if (*(int *)(lVar8 + 0x68) != 1) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Query->Type == RQT_Occlusion",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
                       ,0xc9,L"Only occlusion queries support RHIBeginRenderQuery().");
    if (bVar9) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar7 = FD3D12ContextCommon::AllocateQuery
                     ((FD3D12ContextCommon *)(this[-1].StageConstantBuffers + 1),&local_28,Occlusion
                      ,*(void **)(lVar8 + 0x78));
  uVar4 = *(undefined4 *)((longlong)&pFVar7->Heap + 4);
  uVar2 = pFVar7->Index;
  EVar5 = pFVar7->Type;
  *(undefined4 *)(lVar8 + 0x80) = *(undefined4 *)&pFVar7->Heap;
  *(undefined4 *)(lVar8 + 0x84) = uVar4;
  *(uint *)(lVar8 + 0x88) = uVar2;
  *(ED3D12QueryType *)(lVar8 + 0x8c) = EVar5;
  *(void **)(lVar8 + 0x90) = pFVar7->Target;
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(this[-1].StageConstantBuffers[1]._padding_ + 8))(this[-1].StageConstantBuffers + 1)
    ;
  }
  FD3D12CommandList::BeginQuery
            (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,
             (FD3D12QueryLocation *)(lVar8 + 0x80));
  puVar1 = &this[-1].BindlessState.field_0xc;
  *(int *)puVar1 = *(int *)puVar1 + 1;
  return;
}

// RHIBindAccelerationStructureMemory @ 145a22e20

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBindAccelerationStructureMemory
          (FD3D12CommandContext *this,FRHIRayTracingScene *param_1,FRHIBuffer *param_2,uint param_3)

{
  FD3D12RayTracingScene::BindBuffer((FD3D12RayTracingScene *)param_1,param_2,param_3);
  return;
}

// RHIBuildAccelerationStructures @ 145a22e40

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145a23913) */
/* WARNING: Removing unreachable block (ram,0x000145a242a1) */
/* WARNING: Removing unreachable block (ram,0x000145a23f84) */
/* WARNING: Removing unreachable block (ram,0x000145a2423a) */
/* WARNING: Removing unreachable block (ram,0x000145a2423f) */
/* WARNING: Removing unreachable block (ram,0x000145a24248) */
/* WARNING: Removing unreachable block (ram,0x000145a2426d) */
/* WARNING: Removing unreachable block (ram,0x000145a2426e) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBuildAccelerationStructures
          (FD3D12CommandContext *this,TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1
          ,FRHIBufferRange *param_2)

{
  FMemStackBase *this_00;
  FD3D12CommandContext *this_01;
  undefined4 uVar1;
  FD3D12RayTracingGeometry *pFVar2;
  FRayTracingGeometrySegment *pFVar3;
  FRHIResource *this_02;
  FRHIResource *this_03;
  FD3D12Resource *pFVar4;
  FRHIComputeCommandList *this_04;
  FRHIRayTracingGeometry *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TArrayView<FRayTracingGeometrySegment_const_,int> *pTVar9;
  bool bVar10;
  bool bVar11;
  atomic<unsigned_int> aVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_D3D12BuildBLAS> FVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  longlong lVar17;
  D3D12_RAYTRACING_GEOMETRY_DESC *pDVar18;
  D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *pDVar19;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedBLAS> FVar20;
  FThreadStats *this_05;
  FThreadStatsPool *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltBLAS> FVar22;
  FRHIBreadcrumbAllocator *pFVar23;
  FRHIBreadcrumbNode *pFVar24;
  uint uVar25;
  FTlsAutoCleanup FVar26;
  int iVar27;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> FVar28;
  FD3D12CommandContext *pFVar29;
  undefined8 *puVar30;
  FRayTracingGeometryBuildParams *pFVar31;
  uint uVar32;
  int *piVar33;
  longlong lVar34;
  FName FVar35;
  FName FVar36;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> *pTVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  FRayTracingGeometryBuildParams *pFVar41;
  uint uVar42;
  TArrayView<FRayTracingGeometrySegment_const_,int> *pTVar43;
  bool bVar44;
  undefined1 auStackY_2438 [32];
  undefined1 local_23b8;
  undefined1 local_23b7 [7];
  FD3D12CommandContext *local_23b0;
  TArrayView<FRayTracingGeometrySegment_const_,int> *local_23a8;
  TArrayView<FRayTracingGeometryBuildParams_const_,int> *local_23a0;
  FLLMScope local_2398 [2];
  FName local_2390;
  FName local_2388;
  FName local_2380;
  FColor_u_0 local_2378 [2];
  FMemMark local_2370;
  FName local_2348;
  longlong local_2340;
  FName local_2338;
  uint local_2328;
  undefined4 local_2324;
  uint local_2320;
  uint local_231c;
  undefined4 local_2318;
  uint local_2314;
  ulonglong local_2310;
  ulonglong local_2308;
  undefined8 *local_2300;
  FName local_22f8;
  FName local_22f0;
  FMemScope local_22e8;
  uint local_22e0;
  FStatMessage local_22d8;
  FStatMessage local_22c8;
  FRHIBreadcrumbScope local_22b8;
  undefined1 local_22a8;
  uint local_22a0;
  code *local_2298;
  undefined1 *local_2290;
  code *local_2288;
  undefined1 *local_2280;
  TArrayView<D3D12_RAYTRACING_GEOMETRY_DESC,int> local_2278;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> local_2268;
  int iStack_2260;
  undefined4 uStack_225c;
  char *local_2258;
  undefined4 uStack_2250;
  undefined4 uStack_224c;
  undefined8 local_2248;
  wchar_t *pwStack_2240;
  FName local_2238 [2];
  undefined4 local_2228;
  undefined4 uStack_2224;
  int iStack_2220;
  undefined4 uStack_221c;
  FName local_2218;
  FName local_2210;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> local_2208;
  int local_1c00;
  int local_1bfc;
  FRHICommandList_RecursiveHazardous local_1bf8;
  ulonglong local_48;
  undefined8 uStack_40;
  
  uStack_40 = 0x145a22e62;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2438;
  bVar44 = -1 < CpuChannel->Enabled;
  local_23b0 = this;
  local_23a0 = param_1;
  local_2388 = (FName)param_2;
  if (bVar44) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4643,"BuildAccelerationStructure_BottomLevel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x1223);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4643);
  }
  FVar14 = StatPtr_STAT_D3D12BuildBLAS;
  if (StatPtr_STAT_D3D12BuildBLAS == (FThreadSafeStaticStat<FStat_STAT_D3D12BuildBLAS>)0x0) {
    pFVar13 = ::FName::FName(&local_2218,"STAT_D3D12BuildBLAS");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_D3D12BuildBLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BuildBLAS,*pFVar13,
                        L"BuildBottomLevel","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                        L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar7 = false;
  bVar8 = false;
  local_2338.ComparisonIndex.Value = 0;
  local_2338.Number = 0;
  FVar35 = *(FName *)FVar14;
  bVar10 = false;
  bVar11 = false;
  if ((FVar35.ComparisonIndex.Value.Value != 0) || (FVar35.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2378[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2378[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar10 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_2348.ComparisonIndex.Value = FVar35.ComparisonIndex.Value.Value;
        local_2348.Number = FVar35.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_2348,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x1224);
        bVar7 = true;
        bVar8 = true;
        bVar10 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2390 = FVar35;
      FThreadStats::AddMessage(FVar35,CycleScopeStart);
      bVar10 = true;
      goto LAB_145a2301a;
    }
  }
  bVar8 = bVar11;
  bVar7 = bVar10;
  bVar10 = false;
  local_2390 = local_2338;
  FVar35 = local_2338;
LAB_145a2301a:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name4645,L"FD3D12RT/BLAS");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(local_2398,LLMScope_Name4645,false,None,Default,true);
  FMemScope::FMemScope(&local_22e8,&LLMScope_Name4645,true);
  if ((param_2->Buffer == (FRHIBuffer *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScratchBufferRange.Buffer != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1227,L"BuildAccelerationStructures requires valid scratch buffer"),
     bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FVar36 = (FName)param_1->DataPtr;
  local_2380 = (FName)((longlong)param_1->ArrayNum * 0x20 + (longlong)FVar36);
  if (FVar36 != local_2380) {
    piVar33 = (int *)((longlong)FVar36 + 0x18);
    pTVar43 = (TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar36 + 0x10);
    do {
      local_22e0 = 0;
      bVar11 = *(int *)&this->field_0x138 != 0;
      if (bVar11) {
        for (; (*(uint *)&this->field_0x138 >> local_22e0 & 1) == 0; local_22e0 = local_22e0 + 1) {
        }
      }
      pFVar2 = *(FD3D12RayTracingGeometry **)FVar36;
      uVar25 = 0x20;
      if (bVar11) {
        uVar25 = local_22e0;
      }
      local_23a8 = pTVar43;
      FD3D12RayTracingGeometry::UnregisterAsRenameListener(pFVar2,uVar25);
      if (*(int *)((longlong)FVar36 + 0x18) != 0) {
        if ((*(int *)((longlong)FVar36 + 0x18) != (int)pFVar2->_padding_) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("P.Segments.Num() == Geometry->Initializer.Segments.Num()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1232,
                                L"If updated segments are provided, they must exactly match existing geometry segments. Only vertex buffer bindings may change."
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pTVar9 = local_23a8;
        uVar38 = 0;
        uVar39 = uVar38;
        if (0 < *(int *)((longlong)FVar36 + 0x18)) {
          do {
            uVar32 = (uint)uVar39;
            uVar42 = ~uVar32 >> 0x1f;
            uVar25 = 0;
            if ((int)uVar32 < *piVar33) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if ((*(longlong *)((longlong)&(pTVar9->DataPtr->VertexBuffer).Reference + uVar38) == 0)
               && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                      ("P.Segments[i].VertexBuffer != nullptr",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                       ,0x1236,
                                       L"Segments used to build/update ray tracing geometry must have a valid VertexBuffer."
                                      ), bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar25 = 0;
            if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = ((TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar36 + 0x10)
                     )->DataPtr;
            uVar25 = 0;
            if ((int)uVar32 < (int)pFVar2->_padding_) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            if (*(uint *)(pFVar2->_padding_ + 0x14 + uVar38) <
                *(uint *)((longlong)&pFVar3->MaxVertices + uVar38)) {
              uVar25 = 0;
              if ((int)uVar32 < (int)pFVar2->_padding_) {
                uVar25 = uVar42;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar25 = 0;
              if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
                uVar25 = uVar42;
              }
              if ((uVar25 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar11)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("P.Segments[i].MaxVertices <= Geometry->Initializer.Segments[i].MaxVertices"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                  ,0x123b,
                                  L"Maximum number of vertices in a segment (%u) must not be larger than what was declared during FRHIRayTracingGeometry creation (%u), as this controls BLAS memory allocation."
                                 );
              if (bVar11) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            uVar25 = 0;
            if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pFVar3 = ((TArrayView<FRayTracingGeometrySegment_const_,int> *)((longlong)FVar36 + 0x10)
                     )->DataPtr;
            uVar25 = 0;
            if ((int)uVar32 < (int)pFVar2->_padding_) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            this_02 = *(FRHIResource **)((longlong)&(pFVar3->VertexBuffer).Reference + uVar38);
            this_03 = *(FRHIResource **)(pFVar2->_padding_ + uVar38);
            if (this_03 != this_02) {
              *(FRHIResource **)(pFVar2->_padding_ + uVar38) = this_02;
              if (this_02 != (FRHIResource *)0x0) {
                FRHIResource::AddRef(this_02);
              }
              if (this_03 != (FRHIResource *)0x0) {
                FRHIResource::Release(this_03);
              }
            }
            uVar25 = 0;
            if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar1 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar36 + 0x10))->DataPtr->VertexBufferElementType + uVar38);
            uVar25 = 0;
            if ((int)uVar32 < (int)pFVar2->_padding_) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(pFVar2->_padding_ + 8 + uVar38) = uVar1;
            uVar25 = 0;
            if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar1 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar36 + 0x10))->DataPtr->VertexBufferStride + uVar38);
            uVar25 = 0;
            if ((int)uVar32 < (int)pFVar2->_padding_) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(pFVar2->_padding_ + 0x10 + uVar38) = uVar1;
            uVar25 = 0;
            if ((int)uVar32 < *(int *)((longlong)FVar36 + 0x18)) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar1 = *(undefined4 *)
                     ((longlong)
                      &((TArrayView<FRayTracingGeometrySegment_const_,int> *)
                       ((longlong)FVar36 + 0x10))->DataPtr->VertexBufferOffset + uVar38);
            uVar25 = 0;
            if ((int)uVar32 < (int)pFVar2->_padding_) {
              uVar25 = uVar42;
            }
            if ((uVar25 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(undefined4 *)(pFVar2->_padding_ + 0xc + uVar38) = uVar1;
            uVar38 = uVar38 + 0x28;
            this = local_23b0;
            uVar39 = (ulonglong)(uVar32 + 1);
            pTVar43 = pTVar9;
          } while ((int)(uVar32 + 1) < *(int *)((longlong)FVar36 + 0x18));
        }
      }
      piVar33 = piVar33 + 8;
      pTVar43 = pTVar43 + 2;
      FVar36 = (FName)((longlong)FVar36 + 0x20);
      FVar35 = local_2390;
      param_2 = (FRHIBufferRange *)local_2388;
      local_23a8 = pTVar43;
    } while (FVar36 != local_2380);
  }
  this_01 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_01);
  local_22a0 = 0;
  bVar11 = *(int *)&this->field_0x138 != 0;
  if (bVar11) {
    for (; (*(uint *)&this->field_0x138 >> local_22a0 & 1) == 0; local_22a0 = local_22a0 + 1) {
    }
  }
  uVar39 = 0x20;
  if (bVar11) {
    uVar39 = (ulonglong)local_22a0;
  }
  local_1bfc = 0x20;
  lVar34 = 0;
  uVar25 = local_23a0->ArrayNum;
  local_2208.SecondaryData = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0
  ;
  local_1c00 = 0;
  if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
  }
  if (0x20 < (int)uVar25) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
              (0x30,8,uVar25,&local_2208,0,&local_1bfc);
  }
  if (*(ulong64 *)((longlong)param_2 + 0x10) == 0) {
    uVar25 = *(uint *)(*(longlong *)param_2 + 0xd8);
  }
  else {
    uVar25 = (uint)*(ulong64 *)((longlong)param_2 + 0x10);
  }
  local_23a8 = (TArrayView<FRayTracingGeometrySegment_const_,int> *)
               CONCAT44(local_23a8._4_4_,uVar25);
  local_2310 = (ulonglong)uVar25;
  if (((ulonglong)*(uint *)(*(longlong *)param_2 + 0xd8) <
       local_2310 + *(ulong64 *)((longlong)param_2 + 8)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("ScratchBufferSize + ScratchBufferRange.Offset <= ScratchBufferRange.Buffer->GetSize()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1251,
                          L"BLAS scratch buffer range size is %lld bytes with offset %lld, but the buffer only has %lld bytes. "
                         ), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar29 = local_23b0;
  local_2308 = (ulonglong)GRHIGlobals.RayTracing.AccelerationStructureAlignment;
  if (*(longlong *)param_2 != 0) {
    lVar34 = *(longlong *)(*(longlong *)param_2 + 0x1b0 + uVar39 * 8);
  }
  uVar25 = *(uint *)((longlong)param_2 + 8);
  pFVar4 = *(FD3D12Resource **)(lVar34 + 0x140);
  local_2340 = lVar34;
  if ((pFVar4 == (FD3D12Resource *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (*(longlong *)&pFVar29[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(pFVar29[-1].StageConstantBuffers[1]._padding_ + 8))
              (pFVar29[-1].StageConstantBuffers + 1);
  }
  FD3D12CommandList::UpdateResidency
            (*(FD3D12CommandList **)&pFVar29[-1].RayTracingShaderTables.field_0x70,pFVar4);
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_2290 = &local_23b8;
  local_2298 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2298,puVar15);
  local_2370.Mem = (FMemStackBase *)(pFVar16 + 2);
  iVar27 = local_23a0->ArrayNum;
  local_2370.Top = (local_2370.Mem)->Top;
  local_2370.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
  local_2370.bPopped = false;
  local_2370.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
  pFVar16[5] = (FTlsAutoCleanup)&local_2370;
  *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
  uVar32 = 0;
  if (0 < iVar27) {
    lVar34 = 0;
    do {
      pTVar37 = local_23a0;
      uVar42 = 0;
      if ((int)uVar32 < iVar27) {
        uVar42 = ~uVar32 >> 0x1f;
      }
      if ((uVar42 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar30 = (undefined8 *)((longlong)&(pTVar37->DataPtr->Geometry).Reference + lVar34);
      uVar42 = *(uint *)&local_23b0->field_0x138;
      local_2328 = 0;
      if (uVar42 != 0) {
        for (; (uVar42 >> local_2328 & 1) == 0; local_2328 = local_2328 + 1) {
        }
      }
      pFVar2 = (FD3D12RayTracingGeometry *)*puVar30;
      uVar38 = 0x20;
      if (uVar42 != 0) {
        uVar38 = (ulonglong)local_2328;
      }
      local_2324 = 0;
      if (uVar42 != 0) {
        while( true ) {
          pFVar2->bIsAccelerationStructureDirty[uVar38] = true;
          uVar42 = uVar42 & ~(1 << ((byte)uVar38 & 0x1f));
          local_2320 = 0;
          if (uVar42 != 0) {
            for (; (uVar42 >> local_2320 & 1) == 0; local_2320 = local_2320 + 1) {
            }
          }
          if (uVar42 == 0) break;
          uVar38 = (ulonglong)local_2320;
        }
      }
      uVar42 = (uint)uVar39;
      local_2300 = puVar30;
      FD3D12RayTracingGeometry::UnregisterAsRenameListener(pFVar2,uVar42);
      FD3D12RayTracingGeometry::RegisterAsRenameListener(pFVar2,uVar42);
      FD3D12RayTracingGeometry::SetupHitGroupSystemParameters(pFVar2,uVar42);
      if (pFVar2->bIsAccelerationStructureDirty[uVar39] != false) {
        lVar17 = 0xd8;
        if (*(int *)(puVar30 + 1) != 1) {
          lVar17 = 0xd0;
        }
        uVar38 = *(longlong *)((longlong)&pFVar2->_padding_ + lVar17) + (ulonglong)uVar25;
        if ((local_2310 < uVar38) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScratchBufferRequiredSize + ScratchBufferOffset <= ScratchBufferSize"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x126f,
                                L"BLAS scratch buffer size is %lld bytes with offset %lld (%lld bytes available), but the build requires %lld bytes. "
                               ), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar40 = *(longlong *)(local_2340 + 0x188) + (ulonglong)uVar25;
        uVar25 = (int)local_2308 + -1 + (int)uVar38 & -(int)local_2308;
        if ((uVar40 % (ulonglong)GRHIGlobals.RayTracing.AccelerationStructureAlignment != 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ScratchBufferAddress % GRHIGlobals.RayTracing.AccelerationStructureAlignment == 0"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                                ,0x1277,
                                L"BLAS scratch buffer (plus offset) must be aligned to %lld bytes.")
           , bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar42 = (pFVar2->GeometryDescs).ArrayNum;
        puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
        local_2280 = local_23b7;
        local_2288 = UE::Core::Private::Function::
                     TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                     ::Call;
        pFVar16 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2288,puVar15);
        this_00 = (FMemStackBase *)(pFVar16 + 2);
        if (((pFVar16[6].field_0x5 != '\0') && (*(int *)(pFVar16 + 6) < 1)) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("!bShouldEnforceAllocMarks || NumMarks > 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                                ,0x8a,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pDVar18 = (D3D12_RAYTRACING_GEOMETRY_DESC *)
                  ((ulonglong)(this_00->Top + 7) & 0xfffffffffffffff8);
        FVar26 = (FTlsAutoCleanup)(pDVar18 + uVar42);
        if ((ulonglong)pFVar16[3] < (ulonglong)FVar26) {
          FMemStackBase::AllocateNewChunk(this_00,uVar42 * 0x38 + 8);
          pDVar18 = (D3D12_RAYTRACING_GEOMETRY_DESC *)
                    ((ulonglong)(this_00->Top + 7) & 0xfffffffffffffff8);
          FVar26 = (FTlsAutoCleanup)(pDVar18 + uVar42);
        }
        this_00->Top = (uchar *)FVar26;
        local_2278.DataPtr = pDVar18;
        local_2278.ArrayNum = uVar42;
        if (((int)uVar42 < 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar11)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        if (local_1c00 == local_1bfc) {
          local_1c00 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
                                 (0x830,&local_2208,&local_1bfc);
        }
        puVar30 = local_2300;
        FVar28 = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)&local_2208;
        if (local_2208.SecondaryData !=
            (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
          FVar28 = local_2208.SecondaryData;
        }
        pDVar19 = (D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *)
                  ((longlong)local_1c00 * 0x30 + (longlong)FVar28);
        local_1c00 = local_1c00 + 1;
        pDVar19->DestAccelerationStructureData = 0;
        (pDVar19->Inputs).Type = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_TYPE_TOP_LEVEL;
        (pDVar19->Inputs).Flags = D3D12_RAYTRACING_ACCELERATION_STRUCTURE_BUILD_FLAG_NONE;
        (pDVar19->Inputs).NumDescs = 0;
        (pDVar19->Inputs).DescsLayout = D3D12_ELEMENTS_LAYOUT_ARRAY;
        (pDVar19->Inputs).field4_0x10.InstanceDescs = 0;
        pDVar19->SourceAccelerationStructureData = 0;
        pDVar19->ScratchAccelerationStructureData = 0;
        FD3D12RayTracingGeometry::CreateAccelerationStructureBuildDesc
                  (pFVar2,this_01,*(EAccelerationStructureBuildMode *)(local_2300 + 1),uVar40,
                   pDVar19,&local_2278);
        FD3D12RayTracingGeometry::UpdateResidency(pFVar2,this_01);
        if (*(int *)(puVar30 + 1) == 1) {
          if (FThreadStats::bPrimaryEnable != false) {
            FVar20 = StatPtr_STAT_D3D12RayTracingUpdatedBLAS;
            if (StatPtr_STAT_D3D12RayTracingUpdatedBLAS ==
                (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedBLAS>)0x0) {
              pFVar13 = ::FName::FName(&local_2210,"STAT_D3D12RayTracingUpdatedBLAS");
              FVar20 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingUpdatedBLAS>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_D3D12RayTracingUpdatedBLAS,*pFVar13,
                                  L"Updated BL AS (per frame)","STATGROUP_D3D12RayTracing",
                                  "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,
                                  false,false,MCR_Invalid);
            }
            FVar35 = *(FName *)FVar20;
            local_2388 = FVar35;
            if (((FVar35 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this_05 = TlsGetValue(FThreadStats::TlsSlot);
              if (this_05 == (FThreadStats *)0x0) {
                pFVar21 = FThreadStatsPool::Get();
                this_05 = FThreadStatsPool::GetFromPool(pFVar21);
              }
              local_22d8.NameAndInfo.Number = FVar35.Number & 0xffffafff | 0xa000;
              local_22d8.StatData.Pad[0] = '\x01';
              local_22d8.StatData.Pad[1] = '\0';
              local_22d8.StatData.Pad[2] = '\0';
              local_22d8.StatData.Pad[3] = '\0';
              local_22d8.StatData.Pad[4] = '\0';
              local_22d8.StatData.Pad[5] = '\0';
              local_22d8.StatData.Pad[6] = '\0';
              local_22d8.StatData.Pad[7] = '\0';
              local_22f8 = FVar35;
              local_22d8.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(this_05,&local_22d8);
              pFVar13 = &local_22f8;
LAB_145a23dd7:
              FStatsTrace::Add(pFVar13,1);
              if (this_05->ScopeCount == 0) {
                FThreadStats::Flush(this_05,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(this_05,false,false);
              }
            }
          }
        }
        else if (FThreadStats::bPrimaryEnable != false) {
          FVar22 = StatPtr_STAT_D3D12RayTracingBuiltBLAS;
          if (StatPtr_STAT_D3D12RayTracingBuiltBLAS ==
              (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltBLAS>)0x0) {
            pFVar13 = ::FName::FName(local_2238,"STAT_D3D12RayTracingBuiltBLAS");
            FVar22 = (FThreadSafeStaticStat<FStat_STAT_D3D12RayTracingBuiltBLAS>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12RayTracingBuiltBLAS,
                                *pFVar13,L"Built BL AS (per frame)","STATGROUP_D3D12RayTracing",
                                "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,false
                                ,false,MCR_Invalid);
          }
          FVar35 = *(FName *)FVar22;
          local_2380 = FVar35;
          if (((FVar35 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            this_05 = TlsGetValue(FThreadStats::TlsSlot);
            if (this_05 == (FThreadStats *)0x0) {
              pFVar21 = FThreadStatsPool::Get();
              this_05 = FThreadStatsPool::GetFromPool(pFVar21);
            }
            local_22c8.NameAndInfo.Number = FVar35.Number & 0xffffafff | 0xa000;
            local_22c8.StatData.Pad[0] = '\x01';
            local_22c8.StatData.Pad[1] = '\0';
            local_22c8.StatData.Pad[2] = '\0';
            local_22c8.StatData.Pad[3] = '\0';
            local_22c8.StatData.Pad[4] = '\0';
            local_22c8.StatData.Pad[5] = '\0';
            local_22c8.StatData.Pad[6] = '\0';
            local_22c8.StatData.Pad[7] = '\0';
            local_22f0 = FVar35;
            local_22c8.NameAndInfo.Index.Value = FVar35.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(this_05,&local_22c8);
            pFVar13 = &local_22f0;
            goto LAB_145a23dd7;
          }
        }
      }
      uVar32 = uVar32 + 1;
      lVar34 = lVar34 + 0x20;
      iVar27 = local_23a0->ArrayNum;
      FVar35 = local_2390;
    } while ((int)uVar32 < iVar27);
  }
  if ((GRHIGlobals.SupportsWaveOperations == false) ||
     (bVar11 = RHISupportsWaveOperations((FStaticShaderPlatform)GMaxRHIShaderPlatform), !bVar11)) {
    bVar11 = false;
  }
  else {
    bVar11 = true;
  }
  pTVar37 = local_23a0;
  if ((GD3D12RayTracingGPUValidation != 0) && (bVar11)) {
    local_22a8 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      uStack_2250 = 0x1290;
      local_2258 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
      ;
      local_2248 = 0;
      pwStack_2240 = L"RTGeometryValidation";
      ::Desc._padding_._0_4_ = 0x5107d610;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x1290;
      ::Desc._padding_._4_4_ = uStack_224c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51082788;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FD3D12CommandContext::RHIBuildAccelerationStructures'::__l100::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar29 = local_23b0;
    if ((*(longlong *)&local_23b0->field_0x18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("ExecutingCmdList",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHIContext.h"
                            ,0x221,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_04 = *(FRHIComputeCommandList **)&pFVar29->field_0x18;
    pFVar23 = FRHIComputeCommandList::GetBreadcrumbAllocator(this_04);
    pFVar24 = FMemStackBase::Alloc(&pFVar23->Inner,0x50,8);
    pFVar24->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar24->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar24->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar24->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar24->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar24->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar24->Allocator = pFVar23;
    pFVar24->TraceCpuSpecId = 0;
    pFVar24->TraceCpuMetadataId = 0;
    LOCK();
    UNLOCK();
    uVar25 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar24->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar24->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar24->ID = uVar25;
    pFVar24->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar24[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar11 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar11)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar12 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar12;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar24->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_22b8,this_04,pFVar24);
    local_22a8 = 1;
    pFVar29 = local_23b0;
    if (this_01 == (FD3D12CommandContext *)0x0) {
      pFVar29 = (FD3D12CommandContext *)0x0;
    }
    FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
              (&local_1bf8,(IRHICommandContext *)pFVar29);
    pTVar37 = local_23a0;
    pFVar31 = local_23a0->DataPtr;
    pFVar41 = pFVar31 + local_23a0->ArrayNum;
    for (; pFVar31 != pFVar41; pFVar31 = pFVar31 + 1) {
      FRayTracingValidateGeometryBuildParamsCS::Dispatch((FRHICommandList *)&local_1bf8,pFVar31);
    }
    FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1bf8);
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_22b8);
  }
  iVar27 = local_1c00;
  pcVar6 = *(code **)(local_23b0[-1].StageConstantBuffers[1]._padding_ + 0x50);
  local_2268 = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)&local_2208;
  if (local_2208.SecondaryData !=
      (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    local_2268 = local_2208.SecondaryData;
  }
  if ((local_1c00 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iStack_2260 = iVar27;
  local_2228 = local_2268._0_4_;
  uStack_2224 = local_2268._4_4_;
  iStack_2220 = iVar27;
  uStack_221c = uStack_225c;
  (*pcVar6)(this_01,&local_2228);
  pFVar31 = pTVar37->DataPtr;
  pFVar41 = pFVar31 + pTVar37->ArrayNum;
  for (; pFVar31 != pFVar41; pFVar31 = pFVar31 + 1) {
    pFVar5 = (pFVar31->Geometry).Reference;
    if (*(char *)((longlong)&pFVar5[1]._padding_ + uVar39) != '\0') {
      uVar25 = *(uint *)&local_23b0->field_0x138;
      local_231c = 0;
      if (uVar25 != 0) {
        for (; (uVar25 >> local_231c & 1) == 0; local_231c = local_231c + 1) {
        }
      }
      uVar38 = 0x20;
      if (uVar25 != 0) {
        uVar38 = (ulonglong)local_231c;
      }
      local_2318 = 0;
      if (uVar25 != 0) {
        while( true ) {
          *(undefined1 *)((longlong)&pFVar5[1]._padding_ + uVar38) = 0;
          uVar25 = uVar25 & ~(1 << ((byte)uVar38 & 0x1f));
          local_2314 = 0;
          if (uVar25 != 0) {
            for (; (uVar25 >> local_2314 & 1) == 0; local_2314 = local_2314 + 1) {
            }
          }
          if (uVar25 == 0) break;
          uVar38 = (ulonglong)local_2314;
        }
      }
    }
    FVar35 = local_2390;
  }
  FD3D12ContextCommon::AddGlobalBarrier((FD3D12ContextCommon *)this_01,BVHWrite,BVHRead);
  if (local_2370.bPopped == false) {
    if (((local_2370.Mem)->TopMark != &local_2370) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    local_2370.bPopped = true;
    (local_2370.Mem)->NumMarks = (local_2370.Mem)->NumMarks + -1;
    if (local_2370.SavedChunk != (local_2370.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_2370.Mem,local_2370.SavedChunk);
    }
    (local_2370.Mem)->Top = local_2370.Top;
    (local_2370.Mem)->TopMark = local_2370.NextTopmostMark;
    local_2370.Top = (uchar *)0x0;
  }
  if (local_2208.SecondaryData !=
      (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    FMemory::Free((void *)local_2208.SecondaryData);
  }
  FMemScope::~FMemScope(&local_22e8);
  FLLMScope::~FLLMScope(local_2398);
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar35,CycleScopeEnd);
  }
  if (bVar44) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIBuildAccelerationStructures @ 145a24410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIBuildAccelerationStructures
          (FD3D12CommandContext *this,TArrayView<FRayTracingSceneBuildParams_const_,int> *param_1)

{
  int *piVar1;
  TArray<TRefCountPtr<FRHIRayTracingGeometry>,TSizedDefaultAllocator<32>_> *pTVar2;
  FD3D12CommandContext *this_00;
  FD3D12RayTracingScene *pFVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_D3D12BuildTLAS> FVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  FD3D12Buffer *pFVar17;
  FNameEntryId FVar18;
  FName FVar19;
  FRayTracingSceneBuildParams *pFVar20;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> FVar21;
  FRHIRayTracingGeometry **ppFVar22;
  FRayTracingSceneBuildParams *pFVar23;
  bool bVar24;
  undefined1 auStackY_2e8 [32];
  FRHIRayTracingGeometry *local_280;
  FColor_u_0 local_278 [2];
  uint local_270;
  uint uStack_26c;
  FName local_268;
  FD3D12Buffer *local_260;
  FD3D12Buffer *local_258;
  FD3D12CommandContext *local_250;
  FName local_248;
  uint local_238;
  uint local_234;
  FRHIRayTracingGeometry **local_230;
  FD3D12RayTracingScene *local_228;
  FRayTracingSceneBuildParams *local_220;
  FD3D12CommandContext *local_218;
  TArrayView<FRayTracingSceneBuildParams_const_,int> *local_210;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> local_208;
  int iStack_200;
  undefined4 uStack_1fc;
  FName local_1f8 [2];
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  int iStack_1e0;
  undefined4 uStack_1dc;
  ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC> local_1d8;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  bVar24 = -1 < CpuChannel->Enabled;
  local_218 = this;
  local_210 = param_1;
  if (bVar24) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId4793,"BuildAccelerationStructures_TopLevel",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x12b9);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId4793);
  }
  FVar13 = StatPtr_STAT_D3D12BuildTLAS;
  if (StatPtr_STAT_D3D12BuildTLAS == (FThreadSafeStaticStat<FStat_STAT_D3D12BuildTLAS>)0x0) {
    pFVar12 = ::FName::FName(local_1f8,"STAT_D3D12BuildTLAS");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_D3D12BuildTLAS>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12BuildTLAS,*pFVar12,
                        L"BuildTopLevel","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                        L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar13;
  bVar7 = false;
  bVar8 = false;
  local_248.ComparisonIndex.Value = 0;
  local_248.Number = 0;
  bVar9 = false;
  bVar10 = false;
  FVar18 = FVar19.ComparisonIndex.Value;
  uVar15 = FVar19.Number;
  if ((FVar18.Value != 0) || (uVar15 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_278[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_278[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar7 = false;
      bVar8 = true;
      bVar9 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_268.ComparisonIndex.Value = FVar18.Value;
        local_268.Number = uVar15;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_268,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x12ba);
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
        bVar10 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_270 = FVar18.Value;
      uStack_26c = uVar15;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar9 = true;
      goto LAB_145a245c9;
    }
  }
  bVar8 = bVar10;
  bVar7 = bVar9;
  bVar9 = false;
  FVar19 = local_248;
LAB_145a245c9:
  uVar15 = param_1->ArrayNum;
  local_1d8.SecondaryData = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0;
  local_50 = 0;
  local_4c = 8;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (8 < (int)uVar15) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
              (0x30,8,uVar15,&local_1d8,0,&local_4c);
  }
  pFVar20 = param_1->DataPtr;
  local_220 = pFVar20 + (int)uVar15;
  if (pFVar20 != local_220) {
    local_250 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
    do {
      uVar15 = *(uint *)&local_250->field_0x2f8;
      pFVar3 = (FD3D12RayTracingScene *)pFVar20->Scene;
      local_238 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> local_238 & 1) == 0; local_238 = local_238 + 1) {
        }
      }
      if (pFVar20->ScratchBuffer == (FRHIBuffer *)0x0) {
        local_258 = (FD3D12Buffer *)0x0;
      }
      else {
        uVar14 = 0x20;
        if (uVar15 != 0) {
          uVar14 = (ulonglong)local_238;
        }
        local_258 = (FD3D12Buffer *)(&pFVar20->ScratchBuffer[1]._padding_)[uVar14];
      }
      local_234 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> local_234 & 1) == 0; local_234 = local_234 + 1) {
        }
      }
      if (pFVar20->InstanceBuffer == (FRHIBuffer *)0x0) {
        local_260 = (FD3D12Buffer *)0x0;
      }
      else {
        uVar14 = 0x20;
        if (uVar15 != 0) {
          uVar14 = (ulonglong)local_234;
        }
        local_260 = (FD3D12Buffer *)(&pFVar20->InstanceBuffer[1]._padding_)[uVar14];
      }
      uVar15 = (pFVar20->ReferencedGeometries).ArrayNum;
      pTVar2 = &pFVar3->ReferencedGeometries;
      local_228 = pFVar3;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      piVar1 = &(pFVar3->ReferencedGeometries).ArrayMax;
      if ((pFVar3->ReferencedGeometries).ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar15,&pTVar2->AllocatorInstance,(pFVar3->ReferencedGeometries).ArrayNum,
                   piVar1);
      }
      ppFVar22 = (pFVar20->ReferencedGeometries).DataPtr;
      local_230 = ppFVar22 + (pFVar20->ReferencedGeometries).ArrayNum;
      if (ppFVar22 != local_230) {
        do {
          local_280 = *ppFVar22;
          if (local_280 != (FRHIRayTracingGeometry *)0x0) {
            FRHIResource::AddRef((FRHIResource *)local_280);
          }
          pFVar4 = (pTVar2->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_280) &&
              ((FScriptContainerElement *)&local_280 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar10)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          iVar11 = (pFVar3->ReferencedGeometries).ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar2->AllocatorInstance,piVar1);
            (pFVar3->ReferencedGeometries).ArrayNum = iVar11;
          }
          ppFVar22 = ppFVar22 + 1;
          (pFVar3->ReferencedGeometries).ArrayNum = iVar11 + 1;
          pFVar4 = (pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 8;
          *(undefined8 *)pFVar4 = 0;
          *(FRHIRayTracingGeometry **)pFVar4 = local_280;
          local_280 = (FRHIRayTracingGeometry *)0x0;
        } while (ppFVar22 != local_230);
      }
      if (local_50 == local_4c) {
        local_50 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>_>
                             (0x830,&local_1d8,&local_4c);
      }
      lVar16 = (longlong)local_50;
      local_50 = local_50 + 1;
      FVar21 = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)&local_1d8;
      if (local_1d8.SecondaryData !=
          (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
        FVar21 = local_1d8.SecondaryData;
      }
      PrepareAccelerationStructureBuild
                (local_250,local_228,local_258,pFVar20->ScratchBufferOffset,local_260,
                 pFVar20->InstanceBufferOffset,pFVar20->NumInstances,pFVar20->BuildMode,
                 (D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC *)
                 (lVar16 * 0x30 + (longlong)FVar21));
      pFVar20 = pFVar20 + 1;
      this = local_218;
    } while (pFVar20 != local_220);
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  FD3D12ContextCommon::AddGlobalBarrier((FD3D12ContextCommon *)this_00,BVHWrite,BVHRead);
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_00);
  iStack_200 = local_50;
  pcVar6 = *(code **)(*(longlong *)this_00 + 0x50);
  local_208 = (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)&local_1d8;
  if (local_1d8.SecondaryData !=
      (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    local_208 = local_1d8.SecondaryData;
  }
  if ((local_50 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_1e8 = local_208._0_4_;
  uStack_1e4 = local_208._4_4_;
  iStack_1e0 = iStack_200;
  uStack_1dc = uStack_1fc;
  (*pcVar6)(this_00,&local_1e8);
  FD3D12ContextCommon::AddGlobalBarrier((FD3D12ContextCommon *)this_00,BVHWrite,BVHRead);
  pFVar20 = local_210->DataPtr;
  pFVar23 = pFVar20 + local_210->ArrayNum;
  if (pFVar20 != pFVar23) {
    do {
      uVar15 = *(uint *)&this->field_0x138;
      pFVar3 = (FD3D12RayTracingScene *)pFVar20->Scene;
      uVar5 = 0;
      if (uVar15 != 0) {
        for (; (uVar15 >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      pFVar17 = (FD3D12Buffer *)0x0;
      if (pFVar20->InstanceBuffer != (FRHIBuffer *)0x0) {
        uVar14 = 0x20;
        if (uVar15 != 0) {
          uVar14 = (ulonglong)uVar5;
        }
        pFVar17 = (FD3D12Buffer *)(&pFVar20->InstanceBuffer[1]._padding_)[uVar14];
      }
      pFVar3->bBuilt = true;
      D3D12RayTracingSceneDebugUpdate(pFVar3,pFVar17,pFVar20->InstanceBufferOffset,this_00);
      pFVar20 = pFVar20 + 1;
    } while (pFVar20 != pFVar23);
  }
  if (local_1d8.SecondaryData !=
      (ForElementType<D3D12_BUILD_RAYTRACING_ACCELERATION_STRUCTURE_DESC>)0x0) {
    FMemory::Free((void *)local_1d8.SecondaryData);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  if (bVar24) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIClearShaderBindingTable @ 145a25210

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIClearShaderBindingTable
          (FD3D12CommandContext *this,FRHIShaderBindingTable *param_1)

{
  uint uVar1;
  FD3D12RayTracingShaderBindingTableInternal *this_00;
  code *pcVar2;
  bool bVar3;
  
  if (param_1 == (FRHIShaderBindingTable *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("SBT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x1307,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x140 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  uVar1 = *(uint *)(*(longlong *)&this->field_0x140 + 8);
  this_00 = (FD3D12RayTracingShaderBindingTableInternal *)(&param_1[1]._padding_)[uVar1];
  if (this_00 != (FD3D12RayTracingShaderBindingTableInternal *)0x0) {
    FD3D12RayTracingShaderBindingTableInternal::~FD3D12RayTracingShaderBindingTableInternal(this_00)
    ;
    ::operator_delete(this_00,0x740,0x40);
  }
  (&param_1[1]._padding_)[uVar1] = 0;
  return;
}

// RHICommitShaderBindingTable @ 145a252d0

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHICommitShaderBindingTable
          (FD3D12CommandContext *this,FRHIShaderBindingTable *param_1,FRHIBuffer *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FRHIShaderBindingTable *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("SBT",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                       ,0x12fb,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(longlong *)&this->field_0x140 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (((FD3D12RayTracingShaderBindingTableInternal *)
      (&param_1[1]._padding_)[*(uint *)(*(longlong *)&this->field_0x140 + 8)])->bIsDirty != false) {
    FD3D12RayTracingShaderBindingTableInternal::Commit
              ((FD3D12RayTracingShaderBindingTableInternal *)
               (&param_1[1]._padding_)[*(uint *)(*(longlong *)&this->field_0x140 + 8)],
               (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_2);
  }
  return;
}

// RHIEndRenderQuery @ 145a25a90

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIEndRenderQuery(FD3D12CommandContext *this,FRHIRenderQuery *param_1)

{
  undefined1 *puVar1;
  FD3D12ContextCommon *this_00;
  uint uVar2;
  code *pcVar3;
  ulonglong uVar4;
  longlong lVar5;
  bool bVar6;
  FD3D12QueryLocation local_28;
  
  this_00 = (FD3D12ContextCommon *)(this[-1].StageConstantBuffers + 1);
  uVar2 = 0;
  bVar6 = *(int *)&this->field_0x138 != 0;
  if (bVar6) {
    for (; (*(uint *)&this->field_0x138 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
    }
  }
  lVar5 = 0;
  if (param_1 != (FRHIRenderQuery *)0x0) {
    uVar4 = 0x20;
    if (bVar6) {
      uVar4 = (ulonglong)uVar2;
    }
    lVar5 = *(longlong *)(&param_1[1].field_0x10 + uVar4 * 8);
  }
  if (*(int *)(lVar5 + 0x68) == 1) {
    if ((*(int *)&this[-1].BindlessState.field_0xc == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ActiveQueries > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
                           ,0xf8,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar1 = &this[-1].BindlessState.field_0xc;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::EndQuery
              (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,
               (FD3D12QueryLocation *)(lVar5 + 0x80));
    *(undefined8 *)(lVar5 + 0x80) = 0;
    *(undefined8 *)(lVar5 + 0x88) = 0;
    *(undefined8 *)(lVar5 + 0x90) = 0;
  }
  else if (*(int *)(lVar5 + 0x68) == 2) {
    FD3D12ContextCommon::InsertTimestamp(this_00,&local_28,Microseconds,*(ulong64 **)(lVar5 + 0x78))
    ;
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Query.cpp"
                       ,0xf4,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// RHIExecuteMultiIndirectClusterOperation @ 145a261e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIExecuteMultiIndirectClusterOperation
          (FD3D12CommandContext *this,FRayTracingClusterOperationParams *param_1)

{
  FD3D12ContextCommon *this_00;
  int *piVar1;
  ERayTracingClusterOperationMode EVar2;
  ERayTracingClusterOperationFlags EVar3;
  ERayTracingClusterOperationType EVar4;
  uint uVar5;
  FRHIBuffer *pFVar6;
  FD3D12Resource *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  longlong lVar12;
  FRayTracingClusterOperationParams *pFVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  FName *pFVar17;
  FThreadSafeStaticStat<FStat_STAT_D3D12ClusterOperation> FVar18;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC *p_Var19;
  ulonglong uVar20;
  FName FVar21;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_FLAGS _Var22;
  ForElementType<FRHIBuffer_*> FVar23;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_MODE _Var24;
  longlong lVar25;
  ForElementType<FRHIBuffer_*> FVar26;
  bool bVar27;
  undefined1 auStackY_268 [32];
  undefined1 local_207 [3];
  uint local_204;
  FName local_200;
  FLLMScope local_1f8;
  FColor_u_0 local_1f4;
  longlong local_1f0;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUTS local_1e8;
  FName local_1b8;
  longlong local_1b0;
  longlong local_1a8;
  longlong local_1a0;
  longlong local_198;
  FName local_190;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  ForElementType<FRHIBuffer_*> local_160;
  FRayTracingClusterOperationParams *local_158;
  FMemScope local_150;
  undefined8 local_148;
  undefined8 *local_140;
  FName local_138;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC local_130;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC local_110;
  _NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_INPUT_TRIANGLES_DESC local_f0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  ulong uStack_b4;
  ulong uStack_b0;
  ulong uStack_ac;
  ulong local_a8;
  ulong uStack_a4;
  ulong uStack_a0;
  ulong uStack_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 uStack_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_268;
  bVar27 = -1 < CpuChannel->Enabled;
  local_158 = param_1;
  if (bVar27) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId6283,"ExecuteMultiIndirectClusterOperation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x188b);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId6283);
  }
  lVar25 = 0;
  _Var24 = NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_MODE_IMPLICIT_DESTINATIONS;
  FVar18 = StatPtr_STAT_D3D12ClusterOperation;
  if (StatPtr_STAT_D3D12ClusterOperation ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12ClusterOperation>)0x0) {
    pFVar17 = ::FName::FName(&local_138,"STAT_D3D12ClusterOperation");
    FVar18 = (FThreadSafeStaticStat<FStat_STAT_D3D12ClusterOperation>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_D3D12ClusterOperation,*pFVar17,
                        L"ClusterOperation","STATGROUP_D3D12RayTracing","STATCAT_Advanced",
                        L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar18;
  bVar9 = false;
  bVar10 = false;
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar14 = false;
  bVar15 = false;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1f4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1f4._s_0,(char *)*(FName *)((longlong)FVar18 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar14 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1b8.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_1b8.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1b8,(wchar_t *)*(FName *)((longlong)FVar18 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x188c);
        bVar9 = true;
        bVar10 = true;
        bVar14 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_200 = FVar21;
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar14 = true;
      goto LAB_145a26395;
    }
  }
  bVar10 = bVar15;
  bVar9 = bVar14;
  bVar14 = false;
  FVar21 = local_190;
LAB_145a26395:
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name6285,L"FD3D12RT/ClusterOperation");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_1f8,LLMScope_Name6285,false,None,Default,true);
  FMemScope::FMemScope(&local_150,&LLMScope_Name6285,true);
  if ((param_1->Initializer).MaxResultCount != 0) {
    if (((param_1->Resources).In.ResultCount == (FRHIBuffer *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.In.ResultCount != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1893,
                            L"ExecuteMultiIndirectClusterOperation requires a valid result count input buffer"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((param_1->Resources).In.Descriptors == (FRHIBuffer *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.In.Descriptors != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1894,
                            L"ExecuteMultiIndirectClusterOperation requires a valid descriptors input buffer"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((param_1->Resources).In.Scratch == (FRHIBuffer *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.In.Scratch != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1896,
                            L"ExecuteMultiIndirectClusterOperation requires a valid scratch input buffer"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (((param_1->Resources).InOut.Addresses == (FRHIBuffer *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.InOut.Addresses != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x1898,
                            L"ExecuteMultiIndirectClusterOperation requires a valid addresses input/output buffer"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((param_1->Initializer).Mode == IMPLICIT_DESTINATIONS) &&
        ((param_1->Resources).Out.AccelerationStructures == (FRHIBuffer *)0x0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.Out.AccelerationStructures != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x189c,
                            L"ExecuteMultiIndirectClusterOperation requires a valid acceleration structures output buffer"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((((param_1->Initializer).Mode == GET_SIZES) &&
        ((param_1->Resources).Out.Sizes == (FRHIBuffer *)0x0)) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Params.Resources.Out.Sizes != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x18a0,
                            L"ExecuteMultiIndirectClusterOperation requires a valid sizes output buffer when in GET_SIZES mode"
                           ), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    EVar2 = (param_1->Initializer).Mode;
    local_1e8.maxArgCount = (param_1->Initializer).MaxResultCount;
    local_204 = 0;
    local_1e8.type =
         NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_MOVE_CLUSTER_OBJECT;
    local_1e8.field4_0x10.clasDesc.maxTotalClasCount = 0;
    local_1e8.field4_0x10.clasDesc.maxClasCountPerArg = 0;
    local_1e8.field4_0x10._8_8_ = 0;
    local_1e8.field4_0x10._16_8_ = 0;
    local_1e8.field4_0x10._24_8_ = 0;
    if (EVar2 != IMPLICIT_DESTINATIONS) {
      if (EVar2 == EXPLICIT_DESTINATIONS) {
        _Var24 = NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_MODE_EXPLICIT_DESTINATIONS;
      }
      else if (EVar2 == GET_SIZES) {
        _Var24 = NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_MODE_GET_SIZES;
      }
      else {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                            ,0x17e4,L"");
        if (bVar15) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
    EVar3 = (param_1->Initializer).Flags;
    _Var22 = (_NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_FLAGS)(EVar3 & FAST_TRACE);
    if (((EVar3 & FAST_TRACE) == NONE) && ((EVar3 & FAST_BUILD) != NONE)) {
      _Var22 = NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_FLAG_FAST_BUILD;
    }
    local_1e8.flags =
         _Var22 | NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_FLAG_ALLOW_OMM;
    if ((EVar3 & ALLOW_OMM) == NONE) {
      local_1e8.flags = _Var22;
    }
    if ((EVar3 & NO_OVERLAP) != NONE) {
      local_1e8.flags =
           local_1e8.flags | NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_FLAG_NO_OVERLAP
      ;
    }
    EVar4 = (param_1->Initializer).Type;
    local_1e8.mode = _Var24;
    if (EVar4 == MOVE) {
      local_204 = TranslateMoveOperation(&(param_1->Initializer).Operation.Move,&local_1e8);
    }
    else if (EVar4 == CLAS_BUILD) {
      local_1e8.type =
           NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_BUILD_CLAS_FROM_TRIANGLES;
      p_Var19 = TranslateClusterTriangleDesc(&local_f0,&(param_1->Initializer).Operation.CLAS);
      local_204 = 0x40;
      local_1e8.field4_0x10.clasDesc.maxTotalClasCount = p_Var19->vertexFormat;
      local_1e8.field4_0x10.clasDesc.maxClasCountPerArg = p_Var19->maxGeometryIndexValue;
      local_1e8.field4_0x10.trianglesDesc.maxUniqueGeometryCountPerArg =
           p_Var19->maxUniqueGeometryCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTriangleCountPerArg = p_Var19->maxTriangleCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxVertexCountPerArg = p_Var19->maxVertexCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTotalTriangleCount = p_Var19->maxTotalTriangleCount;
      local_1e8.field4_0x10.trianglesDesc.maxTotalVertexCount = p_Var19->maxTotalVertexCount;
      local_1e8.field4_0x10.trianglesDesc.minPositionTruncateBitCount =
           p_Var19->minPositionTruncateBitCount;
    }
    else if (EVar4 == CLAS_BUILD_TEMPLATES) {
      local_1e8.type =
           NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_BUILD_CLUSTER_TEMPLATES_FROM_TRIANGLES
      ;
      p_Var19 = TranslateClusterTriangleDesc(&local_110,&(param_1->Initializer).Operation.CLAS);
      local_204 = 0x48;
      local_1e8.field4_0x10.clasDesc.maxTotalClasCount = p_Var19->vertexFormat;
      local_1e8.field4_0x10.clasDesc.maxClasCountPerArg = p_Var19->maxGeometryIndexValue;
      local_1e8.field4_0x10.trianglesDesc.maxUniqueGeometryCountPerArg =
           p_Var19->maxUniqueGeometryCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTriangleCountPerArg = p_Var19->maxTriangleCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxVertexCountPerArg = p_Var19->maxVertexCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTotalTriangleCount = p_Var19->maxTotalTriangleCount;
      local_1e8.field4_0x10.trianglesDesc.maxTotalVertexCount = p_Var19->maxTotalVertexCount;
      local_1e8.field4_0x10.trianglesDesc.minPositionTruncateBitCount =
           p_Var19->minPositionTruncateBitCount;
    }
    else if (EVar4 == CLAS_INSTANTIATE_TEMPLATES) {
      local_1e8.type =
           NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_INSTANTIATE_CLUSTER_TEMPLATES
      ;
      p_Var19 = TranslateClusterTriangleDesc(&local_130,&(param_1->Initializer).Operation.CLAS);
      local_204 = 0x20;
      local_1e8.field4_0x10.clasDesc.maxTotalClasCount = p_Var19->vertexFormat;
      local_1e8.field4_0x10.clasDesc.maxClasCountPerArg = p_Var19->maxGeometryIndexValue;
      local_1e8.field4_0x10.trianglesDesc.maxUniqueGeometryCountPerArg =
           p_Var19->maxUniqueGeometryCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTriangleCountPerArg = p_Var19->maxTriangleCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxVertexCountPerArg = p_Var19->maxVertexCountPerArg;
      local_1e8.field4_0x10.trianglesDesc.maxTotalTriangleCount = p_Var19->maxTotalTriangleCount;
      local_1e8.field4_0x10.trianglesDesc.maxTotalVertexCount = p_Var19->maxTotalVertexCount;
      local_1e8.field4_0x10.trianglesDesc.minPositionTruncateBitCount =
           p_Var19->minPositionTruncateBitCount;
    }
    else if (EVar4 == BLAS_BUILD) {
      local_1e8.field4_0x10.clasDesc.maxClasCountPerArg =
           (param_1->Initializer).Operation.CLAS.VertexFormat;
      local_1e8.field4_0x10.clasDesc.maxTotalClasCount =
           (param_1->Initializer).Operation.Move.MaxBytes;
      local_1e8.type =
           NVAPI_D3D12_RAYTRACING_MULTI_INDIRECT_CLUSTER_OPERATION_TYPE_BUILD_BLAS_FROM_CLAS;
      local_204 = 0x10;
    }
    else {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("!\"Enclosing block should never be called\"",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x18c1,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    uVar5 = *(uint *)&this->field_0x138;
    this_00 = (FD3D12ContextCommon *)(this[-1].StageConstantBuffers + 1);
    pFVar6 = (param_1->Resources).In.ResultCount;
    local_180 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> local_180 & 1) == 0; local_180 = local_180 + 1) {
      }
    }
    local_1a0 = lVar25;
    if (pFVar6 != (FRHIBuffer *)0x0) {
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_180;
      }
      local_1a0 = (&pFVar6[1]._padding_)[uVar20];
    }
    pFVar6 = (param_1->Resources).In.Descriptors;
    local_17c = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> local_17c & 1) == 0; local_17c = local_17c + 1) {
      }
    }
    if (pFVar6 != (FRHIBuffer *)0x0) {
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_17c;
      }
      lVar25 = (&pFVar6[1]._padding_)[uVar20];
    }
    pFVar6 = (param_1->Resources).In.Scratch;
    local_178 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> local_178 & 1) == 0; local_178 = local_178 + 1) {
      }
    }
    if (pFVar6 == (FRHIBuffer *)0x0) {
      local_200.ComparisonIndex.Value = 0;
      local_200.Number = 0;
    }
    else {
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_178;
      }
      local_200 = *(FName *)(&pFVar6[1]._padding_ + uVar20);
    }
    pFVar6 = (param_1->Resources).InOut.Addresses;
    local_174 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> local_174 & 1) == 0; local_174 = local_174 + 1) {
      }
    }
    if (pFVar6 == (FRHIBuffer *)0x0) {
      local_1b0 = 0;
    }
    else {
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_174;
      }
      local_1b0 = (&pFVar6[1]._padding_)[uVar20];
    }
    pFVar6 = (param_1->Resources).Out.AccelerationStructures;
    local_170 = 0;
    if (uVar5 != 0) {
      for (; (uVar5 >> local_170 & 1) == 0; local_170 = local_170 + 1) {
      }
    }
    if (pFVar6 == (FRHIBuffer *)0x0) {
      local_1a8 = 0;
    }
    else {
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_170;
      }
      local_1a8 = (&pFVar6[1]._padding_)[uVar20];
    }
    pFVar6 = (param_1->Resources).Out.Sizes;
    if (pFVar6 == (FRHIBuffer *)0x0) {
      local_1f0 = 0;
    }
    else {
      local_16c = 0;
      if (uVar5 != 0) {
        for (; (uVar5 >> local_16c & 1) == 0; local_16c = local_16c + 1) {
        }
      }
      uVar20 = 0x20;
      if (uVar5 != 0) {
        uVar20 = (ulonglong)local_16c;
      }
      local_1f0 = (&pFVar6[1]._padding_)[uVar20];
    }
    pFVar7 = *(FD3D12Resource **)(local_1a0 + 0x140);
    local_198 = lVar25;
    if ((pFVar7 == (FD3D12Resource *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::UpdateResidency
              (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    pFVar7 = *(FD3D12Resource **)(lVar25 + 0x140);
    if ((pFVar7 == (FD3D12Resource *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::UpdateResidency
              (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    FVar26 = (param_1->Resources).In.AdditionalResources.AllocatorInstance.SecondaryData;
    iVar16 = (param_1->Resources).In.AdditionalResources.ArrayNum;
    if (FVar26 == (ForElementType<FRHIBuffer_*>)0x0) {
      FVar26 = (ForElementType<FRHIBuffer_*>)&(param_1->Resources).In.AdditionalResources;
    }
    FVar23 = (ForElementType<FRHIBuffer_*>)((longlong)FVar26 + (longlong)iVar16 * 8);
    local_160 = FVar23;
    while( true ) {
      if ((param_1->Resources).In.AdditionalResources.ArrayNum != iVar16) {
        local_207[0] = 0;
        `TCheckedPointerIterator<FRHIBuffer_*_const,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_207);
      }
      pFVar13 = local_158;
      if (FVar26 == FVar23) break;
      local_168 = 0;
      bVar15 = *(int *)&this->field_0x138 != 0;
      if (bVar15) {
        for (; (*(uint *)&this->field_0x138 >> local_168 & 1) == 0; local_168 = local_168 + 1) {
        }
      }
      if (*(longlong *)FVar26 != 0) {
        uVar20 = 0x20;
        if (bVar15) {
          uVar20 = (ulonglong)local_168;
        }
        lVar25 = *(longlong *)(*(longlong *)FVar26 + 0x1b0 + uVar20 * 8);
        if (lVar25 != 0) {
          pFVar7 = *(FD3D12Resource **)(lVar25 + 0x140);
          if ((pFVar7 == (FD3D12Resource *)0x0) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Resource",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                                  ,0x1a5,L""), bVar15)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
            (**(code **)(this_00->_padding_ + 8))(this_00);
          }
          FD3D12CommandList::UpdateResidency
                    (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
          FVar23 = local_160;
        }
      }
      FVar26 = (ForElementType<FRHIBuffer_*>)((longlong)FVar26 + 8);
    }
    pFVar7 = *(FD3D12Resource **)((longlong)local_200 + 0x140);
    if ((pFVar7 == (FD3D12Resource *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::UpdateResidency
              (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    lVar25 = local_1b0;
    pFVar7 = *(FD3D12Resource **)(local_1b0 + 0x140);
    if ((pFVar7 == (FD3D12Resource *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Resource",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                            ,0x1a5,L""), bVar15)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    FD3D12CommandList::UpdateResidency
              (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    lVar12 = local_1a8;
    if (local_1a8 != 0) {
      pFVar7 = *(FD3D12Resource **)(local_1a8 + 0x140);
      if ((pFVar7 == (FD3D12Resource *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(this_00->_padding_ + 8))(this_00);
      }
      FD3D12CommandList::UpdateResidency
                (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    }
    if (local_1f0 != 0) {
      pFVar7 = *(FD3D12Resource **)(local_1f0 + 0x140);
      if ((pFVar7 == (FD3D12Resource *)0x0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Resource",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                              ,0x1a5,L""), bVar15)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
        (**(code **)(this_00->_padding_ + 8))(this_00);
      }
      FD3D12CommandList::UpdateResidency
                (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar7);
    }
    lVar11 = local_1f0;
    FD3D12ContextCommon::FlushResourceBarriers(this_00);
    local_c8 = CONCAT44(local_1e8.flags,local_1e8.maxArgCount);
    uStack_c0 = CONCAT44(local_1e8.mode,local_1e8.type);
    local_94 = 0;
    uStack_90 = 0;
    local_98 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_a8 = local_1e8.field4_0x10.trianglesDesc.maxVertexCountPerArg;
    uStack_a4 = local_1e8.field4_0x10.trianglesDesc.maxTotalTriangleCount;
    uStack_a0 = local_1e8.field4_0x10.trianglesDesc.maxTotalVertexCount;
    uStack_9c = local_1e8.field4_0x10.trianglesDesc.minPositionTruncateBitCount;
    local_b8 = local_1e8.field4_0x10.clasDesc.maxTotalClasCount;
    uStack_b4 = local_1e8.field4_0x10.clasDesc.maxClasCountPerArg;
    uStack_b0 = local_1e8.field4_0x10.trianglesDesc.maxUniqueGeometryCountPerArg;
    uStack_ac = local_1e8.field4_0x10.trianglesDesc.maxTriangleCountPerArg;
    local_50 = (pFVar13->Resources).In.ResultCountOffsetInBytes + *(longlong *)(local_1a0 + 0x188);
    local_60 = *(longlong *)(local_198 + 0x188) + (pFVar13->Resources).In.DescriptorsOffsetInBytes;
    local_58 = (ulonglong)local_204;
    local_88 = *(longlong *)((longlong)local_200 + 0x188) +
               (pFVar13->Resources).In.ScratchOffsetInBytes;
    local_80 = *(longlong *)(lVar25 + 0x188) + (pFVar13->Resources).InOut.AddressesOffsetInBytes;
    local_78 = 8;
    if (lVar12 != 0) {
      uStack_90 = *(longlong *)(lVar12 + 0x188) +
                  (pFVar13->Resources).Out.AccelerationStructuresOffsetInBytes;
    }
    if (lVar11 != 0) {
      local_70 = *(longlong *)(lVar11 + 0x188) + (pFVar13->Resources).Out.SizesOffsetInBytes;
      uStack_68 = 4;
    }
    local_140 = &local_c8;
    local_148 = 0x10010;
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(this_00->_padding_ + 8))(this_00);
    }
    lVar25 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
    piVar1 = (int *)(lVar25 + 0x168);
    *piVar1 = *piVar1 + 1;
    iVar16 = NvAPI_D3D12_RaytracingExecuteMultiIndirectClusterOperation
                       (*(undefined8 *)(lVar25 + 0x48),&local_148);
    if (iVar16 != 0) {
      bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Result == NVAPI_OK",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                          ,0x1909,L"");
      if (bVar15) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    FD3D12ContextCommon::AddGlobalBarrier(this_00,UAVCompute,UAVCompute);
  }
  FMemScope::~FMemScope(&local_150);
  FLLMScope::~FLLMScope(&local_1f8);
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar14) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  if (bVar27) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIRayTraceDispatch @ 145a26f70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIRayTraceDispatch
          (FD3D12CommandContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,uint param_5,uint param_6)

{
  FD3D12RayTracingShaderBindingTableInternal *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStackY_148 [32];
  D3D12_DISPATCH_RAYS_DESC local_c8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar11 = -1 < CpuChannel->Enabled;
  if (bVar11) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5720,"RHIRayTraceDispatch",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x1658);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5720);
  }
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FD3D12RayTracingShaderBindingTableInternal *)
            (&param_3[1]._padding_)[*(uint *)(*(longlong *)&this->field_0x140 + 8)];
  if ((this_00->bIsDirty != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderTableForDevice->bIsDirty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x165e,
                         L"The shader table contains pending modifications. CommitRayTracingBindings must be called after SetRayTracingBindings"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = param_2->_padding_;
  lVar4 = param_2->_padding_;
  iVar8 = *(int *)&param_1[1].field_0x10;
  uVar10 = 0;
  lVar5 = param_2->_padding_;
  if (0 < iVar8) {
    lVar9 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar10 < iVar8) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)(*(longlong *)&param_1[1].field_0x8 + lVar9);
      if (((lVar2 == *(longlong *)(lVar1 + 0xf0)) && (lVar4 == *(longlong *)(lVar1 + 0xf8))) &&
         ((int)lVar5 == *(int *)(lVar1 + 0x100))) {
        if (uVar10 != 0xffffffff) goto LAB_145a2713e;
        goto LAB_145a2711f;
      }
      iVar8 = *(int *)&param_1[1].field_0x10;
      uVar10 = uVar10 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar10 < iVar8);
  }
  uVar10 = 0xffffffff;
LAB_145a2711f:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RayGenShaderIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x1665,
                     L"RayGen shader \'%s\' is not present in the given ray tracing pipeline. All RayGen shaders must be declared when creating RTPSO."
                    );
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145a2713e:
  uVar7 = 0;
  if ((int)uVar10 < *(int *)&param_1[1].field_0x20) {
    uVar7 = ~uVar10 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&param_1[1].field_0x18;
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FD3D12RayTracingShaderBindingTableInternal::GetDispatchRaysDesc
            (this_00,&local_c8,*(FD3D12Device **)&this->field_0x140,
             (FD3D12ShaderIdentifier *)((longlong)(int)uVar10 * 0x20 + lVar2));
  local_c8.Width = param_5;
  local_c8.Height = param_6;
  local_c8.Depth = 1;
  DispatchRays((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_4,
               (FD3D12RayTracingPipelineState *)param_1,uVar10,this_00,&local_c8,
               *(ED3D12QueueType *)
                &this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data,
               (FD3D12Buffer *)0x0,0);
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHIRayTraceDispatchIndirect @ 145a272d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIRayTraceDispatchIndirect
          (FD3D12CommandContext *this,FRHIRayTracingPipelineState *param_1,
          FRHIRayTracingShader *param_2,FRHIShaderBindingTable *param_3,
          FRayTracingShaderBindings *param_4,FRHIBuffer *param_5,uint param_6)

{
  FD3D12RayTracingShaderBindingTableInternal *this_00;
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  uint uVar7;
  ulonglong uVar8;
  int iVar9;
  FD3D12Buffer *pFVar10;
  uint uVar11;
  FD3D12Buffer *pFVar13;
  bool bVar14;
  undefined1 auStackY_148 [32];
  D3D12_DISPATCH_RAYS_DESC local_b8;
  ulonglong local_48;
  FD3D12Buffer *pFVar12;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_148;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5749,"RHIRayTraceDispatchIndirect",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x1675);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5749);
  }
  if ((GRHIGlobals.RayTracing.SupportsDispatchIndirect == false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GRHIGlobals.RayTracing.SupportsDispatchIndirect",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x1676,
                         L"RHIRayTraceDispatchIndirect may not be used because DXR 1.1 is not supported on this machine."
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (FD3D12RayTracingShaderBindingTableInternal *)
            (&param_3[1]._padding_)[*(uint *)(*(longlong *)&this->field_0x140 + 8)];
  if ((this_00->bIsDirty != false) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("!ShaderTableForDevice->bIsDirty",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x167c,
                         L"The shader table contains pending modifications. CommitRayTracingBindings must be called after SetRayTracingBindings"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = param_2->_padding_;
  lVar4 = param_2->_padding_;
  iVar9 = *(int *)&param_1[1].field_0x10;
  pFVar13 = (FD3D12Buffer *)0x0;
  lVar5 = param_2->_padding_;
  pFVar10 = pFVar13;
  pFVar12 = pFVar13;
  if (0 < iVar9) {
    do {
      uVar11 = (uint)pFVar12;
      uVar7 = 0;
      if ((int)uVar11 < iVar9) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar1 = *(longlong *)((longlong)&pFVar10->_padding_ + *(longlong *)&param_1[1].field_0x8);
      if (((lVar2 == *(longlong *)(lVar1 + 0xf0)) && (lVar4 == *(longlong *)(lVar1 + 0xf8))) &&
         ((int)lVar5 == *(int *)(lVar1 + 0x100))) {
        if (uVar11 == 0xffffffff) goto LAB_145a274c3;
        goto LAB_145a274f8;
      }
      iVar9 = *(int *)&param_1[1].field_0x10;
      pFVar10 = (FD3D12Buffer *)&pFVar10->_padding_;
      pFVar12 = (FD3D12Buffer *)(ulonglong)(uVar11 + 1);
    } while ((int)(uVar11 + 1) < iVar9);
  }
  uVar11 = 0xffffffff;
LAB_145a274c3:
  bVar6 = ::FDebug::CheckVerifyFailedImpl2
                    ("RayGenShaderIndex != INDEX_NONE",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                     ,0x1680,
                     L"RayGen shader is not present in the given ray tracing pipeline. All RayGen shaders must be declared when creating RTPSO."
                    );
  if (bVar6) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145a274f8:
  uVar7 = 0;
  if ((int)uVar11 < *(int *)&param_1[1].field_0x20) {
    uVar7 = ~uVar11 >> 0x1f;
  }
  if ((uVar7 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&param_1[1].field_0x18;
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FD3D12RayTracingShaderBindingTableInternal::GetDispatchRaysDesc
            (this_00,&local_b8,*(FD3D12Device **)&this->field_0x140,
             (FD3D12ShaderIdentifier *)((longlong)(int)uVar11 * 0x20 + lVar2));
  uVar7 = 0;
  bVar6 = *(int *)&this->field_0x138 != 0;
  if (bVar6) {
    for (; (*(uint *)&this->field_0x138 >> uVar7 & 1) == 0; uVar7 = uVar7 + 1) {
    }
  }
  if (param_5 != (FRHIBuffer *)0x0) {
    uVar8 = 0x20;
    if (bVar6) {
      uVar8 = (ulonglong)uVar7;
    }
    pFVar13 = (FD3D12Buffer *)(&param_5[1]._padding_)[uVar8];
  }
  DispatchRays((FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1),param_4,
               (FD3D12RayTracingPipelineState *)param_1,uVar11,this_00,&local_b8,
               *(ED3D12QueueType *)
                &this[-1].StageConstantBuffers[1].ShadowData.AllocatorInstance.Data,pFVar13,param_6)
  ;
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RHISetBindingsOnShaderBindingTable @ 145a27650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetBindingsOnShaderBindingTable
          (FD3D12CommandContext *this,FRHIShaderBindingTable *param_1,
          FRHIRayTracingPipelineState *param_2,uint param_3,FRayTracingLocalShaderBindings *param_4,
          ERayTracingBindingType param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName FVar5;
  int iVar6;
  bool bVar7;
  uint uVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_D3D12SetBindingsOnShaderBindingTable> FVar10;
  FTaskGraphInterface *pFVar11;
  ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  FVar12;
  longlong lVar13;
  TRefCountPtr<FBaseGraphTask> *pTVar14;
  FName FVar15;
  uint uVar16;
  TRefCountPtr<FBaseGraphTask> *pTVar17;
  bool bVar18;
  undefined1 auStackY_1b8 [32];
  uint local_158;
  <lambda_1> local_154;
  FName local_150;
  FColor_u_0 local_148;
  uint local_144;
  FName local_140;
  FName local_138;
  ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FD3D12CommandContext *local_118;
  FRayTracingLocalShaderBindings *local_110;
  FD3D12Device *pFStack_108;
  FD3D12RayTracingShaderBindingTableInternal *local_100;
  FD3D12RayTracingPipelineState *pFStack_f8;
  ERayTracingBindingType local_f0;
  undefined7 uStack_ef;
  TRefCountPtr<FBaseGraphTask> local_e8 [4];
  TRefCountPtr<FBaseGraphTask> *local_c8;
  int local_c0;
  undefined4 local_bc;
  FName local_b8 [2];
  TArrayView<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext,int>
  local_a8;
  <lambda_1> local_98;
  ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
  local_68;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  bVar18 = -1 < CpuChannel->Enabled;
  local_144 = param_3;
  local_128 = (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
               )param_2;
  local_118 = this;
  if (bVar18) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId5958,"RHISetBindingsOnShaderBindingTable",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
               ,0x1746);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId5958);
  }
  FVar10 = StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable;
  if (StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable ==
      (FThreadSafeStaticStat<FStat_STAT_D3D12SetBindingsOnShaderBindingTable>)0x0) {
    pFVar9 = ::FName::FName(local_b8,"STAT_D3D12SetBindingsOnShaderBindingTable");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_D3D12SetBindingsOnShaderBindingTable>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_D3D12SetBindingsOnShaderBindingTable,*pFVar9,
                        L"SetBindingsOnShaderBindingTable","STATGROUP_D3D12RayTracing",
                        "STATCAT_Advanced",L"D3D12RHI: Ray Tracing",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  local_138.ComparisonIndex.Value = 0;
  local_138.Number = 0;
  bVar2 = false;
  bVar4 = false;
  FVar15 = *(FName *)FVar10;
  if ((FVar15.ComparisonIndex.Value.Value == 0) && (FVar15.Number == 0)) {
LAB_145a277f6:
    bVar3 = false;
    FVar15 = local_138;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_148.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_148._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = FVar15.ComparisonIndex.Value.Value;
        local_140.Number = FVar15.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                   ,0x1747);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_145a277f6;
    local_150 = FVar15;
    FThreadStats::AddMessage(FVar15,CycleScopeStart);
    bVar3 = true;
  }
  if (((param_2 != (FRHIRayTracingPipelineState *)0x0) &&
      ((param_1->Initializer).LocalBindingDataSize < *(uint *)&param_2[3].field_0x30)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Pipeline == nullptr || Pipeline->MaxLocalRootSignatureSize <= SBT->GetInitializer().LocalBindingDataSize"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RayTracing.cpp"
                         ,0x174e,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(longlong *)&this->field_0x140 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_bc = 4;
  local_150 = (FName)(&param_1[1]._padding_)[*(uint *)(*(longlong *)&this->field_0x140 + 8)];
  local_c8 = (TRefCountPtr<FBaseGraphTask> *)0x0;
  local_c0 = 0;
  pFVar11 = FTaskGraphInterface::Get();
  uVar8 = (**(code **)((longlong)*pFVar11 + 0x20))(pFVar11);
  uVar16 = 1;
  if (uVar8 == 0) {
    uVar8 = 1;
  }
  bVar7 = FApp::ShouldUseThreadingForPerformance();
  local_44 = 5;
  if (bVar7) {
    uVar16 = 5;
    if (uVar8 < 5) {
      uVar16 = uVar8;
    }
    local_68.SecondaryData =
         (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
          )0x0;
    uVar8 = 0;
    local_48 = 0;
    pTVar17 = (TRefCountPtr<FBaseGraphTask> *)0x0;
    if (uVar16 == 0) goto LAB_145a279e3;
  }
  else {
    local_68.SecondaryData =
         (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
          )0x0;
    uVar8 = 0;
    local_48 = 0;
  }
  do {
    FVar12 = (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
              )&local_68;
    if (local_68.SecondaryData !=
        (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
         )0x0) {
      FVar12 = local_68.SecondaryData;
    }
    local_158 = uVar8;
    if ((ulonglong)FVar12 <= &local_158) {
      FVar12 = (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
                )&local_68;
      if (local_68.SecondaryData !=
          (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
           )0x0) {
        FVar12 = local_68.SecondaryData;
      }
      if ((&local_158 < (uint *)((longlong)FVar12 + (longlong)local_44 * 4)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (local_48 == local_44) {
      local_48 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<5,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>_>
                           (0x404,&local_68,&local_44);
    }
    lVar13 = (longlong)local_48;
    FVar12 = (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
              )&local_68;
    if (local_68.SecondaryData !=
        (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
         )0x0) {
      FVar12 = local_68.SecondaryData;
    }
    uVar8 = uVar8 + 1;
    local_48 = local_48 + 1;
    *(uint *)((longlong)FVar12 + lVar13 * 4) = local_158;
    pTVar17 = local_c8;
  } while (uVar8 < uVar16);
LAB_145a279e3:
  iVar6 = local_48;
  FVar5 = local_150;
  local_110 = param_4;
  local_100 = (FD3D12RayTracingShaderBindingTableInternal *)local_150;
  pFStack_108 = (FD3D12Device *)local_118[-1].StageConstantBuffers[1]._padding_;
  pFStack_f8 = (FD3D12RayTracingPipelineState *)local_128;
  local_f0 = param_5;
  local_128 = (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
               )&local_68;
  if (local_68.SecondaryData !=
      (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
       )0x0) {
    local_128 = local_68.SecondaryData;
  }
  if ((local_48 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  local_98.Bindings = local_110;
  local_98.Device = pFStack_108;
  local_98._33_7_ = uStack_ef;
  local_98.BindingType = local_f0;
  local_a8._12_4_ = uStack_11c;
  local_a8.ArrayNum = iVar6;
  local_a8.DataPtr = (FTaskContext *)local_128;
  local_98.ShaderTableForDevice = local_100;
  local_98.Pipeline = pFStack_f8;
  iStack_120 = iVar6;
  ParallelForImpl::
  ParallelForInternal<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable_::__l2::FTaskContext>
            (L"SetRayTracingBindings",local_144,0x400,&local_98,local_154,None,&local_a8);
  *(bool *)((longlong)FVar5 + 0x70) = true;
  if (local_68.SecondaryData !=
      (ForElementType<_public:_virtual_void___cdecl_FD3D12CommandContext::RHISetBindingsOnShaderBindingTable(FRHIShaderBindingTable_*,FRHIRayTracingPipelineState_*,unsigned_int,FRayTracingLocalShaderBindings_const_*,ERayTracingBindingType)_::_2_::FTaskContext>
       )0x0) {
    FMemory::Free((void *)local_68.SecondaryData);
  }
  pTVar14 = local_e8;
  if (pTVar17 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    pTVar14 = pTVar17;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>(pTVar14,local_c0);
  if (pTVar17 != (TRefCountPtr<FBaseGraphTask> *)0x0) {
    FMemory::Free(pTVar17);
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar3) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  if (bVar18) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterAccelerationStructuresInternalMGPU @ 145a360e0

/* WARNING: Enum "EVertexElementType": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */

void __cdecl
FD3D12CommandContext::UnregisterAccelerationStructuresInternalMGPU
          (TArrayView<FRayTracingGeometryBuildParams_const_,int> *param_1,FRHIGPUMask param_2)

{
  int iVar1;
  FRayTracingGeometryBuildParams *pFVar2;
  uint uVar3;
  FRayTracingGeometryBuildParams *pFVar4;
  uint uVar5;
  
  if (param_2.GPUMask != 0) {
    uVar3 = 0;
    if (param_2.GPUMask != 0) {
      for (; (param_2.GPUMask >> uVar3 & 1) == 0; uVar3 = uVar3 + 1) {
      }
    }
    iVar1 = param_1->ArrayNum;
    uVar5 = 0x20;
    if (param_2.GPUMask != 0) {
      uVar5 = uVar3;
    }
    pFVar2 = param_1->DataPtr;
    pFVar4 = pFVar2;
    do {
      for (; pFVar4 != pFVar2 + iVar1; pFVar4 = pFVar4 + 1) {
        FD3D12RayTracingGeometry::UnregisterAsRenameListener
                  ((FD3D12RayTracingGeometry *)(pFVar4->Geometry).Reference,uVar5);
      }
      param_2.GPUMask = param_2.GPUMask & ~(1 << ((byte)uVar5 & 0x1f));
      uVar5 = 0;
      if (param_2.GPUMask != 0) {
        for (; (param_2.GPUMask >> uVar5 & 1) == 0; uVar5 = uVar5 + 1) {
        }
      }
      pFVar4 = pFVar2;
    } while (param_2.GPUMask != 0);
  }
  return;
}

// operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_> @ 145a37950

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>'::__l20::<lambda_1>::
operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>
          (void *this,TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *param_1)

{
  longlong lVar1;
  FResolveRect *pFVar2;
  FResolveRect *pFVar3;
  FDummyResolveParameter *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar11;
  FName this_01;
  FRHIVertexShader *pFVar12;
  FRHIPixelShader *pFVar13;
  FRHIBatchedShaderParameters *pFVar14;
  IRHICommandContext *pIVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FD3D12StateCache *this_02;
  undefined1 local_res10 [8];
  TShaderRefBase<FResolveVS,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  TShaderRefBase<FResolveDepthPS,FShaderMapPointerTable> local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  wchar_t *pwStack_80;
  FRHIBreadcrumbScope local_78;
  undefined1 local_68;
  FString local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    uStack_90 = 0xfa;
    local_98 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
    ;
    local_88 = 0;
    pwStack_80 = L"ResolveTextureUsingShader";
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x51088ad0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0xfa;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = uStack_8c;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x51091c40;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs,4000);
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceGpuSpecId = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>'::__l20::Desc::
           operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l7::<lambda_1>
           ::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->Data =
       (FRHIBreadcrumbData *)
       &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  pFVar10->Allocator = pFVar9;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar7;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ =
       (longlong)
       &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  if ((`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
    if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar8 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)
                         CONCAT44(`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_._4_4_,
                                  (undefined4)
                                  `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_),
                         (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                          ::__l2::Desc._padding_._4_4_,
                                          (undefined4)
                                          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                          ::__l2::Desc._padding_),
                         (uint)`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::Desc._padding_);
      LOCK();
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = aVar8;
      UNLOCK();
    }
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId =
       (uint)`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,FDummyResolveParameter)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,(FRHIComputeCommandList *)param_1,pFVar10);
  local_68 = 1;
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)*(uint *)(*(longlong *)this + 0x10),
             (float)*(uint *)(*(longlong *)this + 0x18),__real_3f800000);
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  TShaderMapRef<FResolveVS>::TShaderMapRef<FResolveVS>
            ((TShaderMapRef<FResolveVS> *)&local_d8,this_00);
  pFVar11 = (FShaderType *)FResolveDepthPS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_c8,pFVar11,0);
  if ((FResolveDepthPS *)local_c8.ShaderContent == (FResolveDepthPS *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_01,local_60);
    FResolveDepthPS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FResolveDepthPS::GetStaticType();
  local_b8.ShaderContent = (FResolveDepthPS *)local_c8.ShaderContent;
  local_b8.ShaderMap = local_c8.ShaderMap;
  pFVar12 = TShaderRefBase<FResolveVS,FShaderMapPointerTable>::GetVertexShader(&local_d8,true);
  *(FRHIVertexShader **)(*(longlong *)((longlong)this + 8) + 8) = pFVar12;
  pFVar13 = TShaderRefBase<FResolveDepthPS,FShaderMapPointerTable>::GetPixelShader(&local_b8,true);
  *(FRHIPixelShader **)(*(longlong *)((longlong)this + 8) + 0x10) = pFVar13;
  **(undefined8 **)((longlong)this + 8) = GFilterVertexDeclaration._32_8_;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x60) = 1;
  SetGraphicsPipelineState
            ((FRHICommandList *)param_1,*(FGraphicsPipelineStateInitializer **)((longlong)this + 8),
             0,CheckApply,true);
  FRHICommandList::SetBlendFactor((FRHICommandList *)param_1,&FLinearColor::White);
  lVar1 = *(longlong *)this;
  pFVar2 = *(FResolveRect **)((longlong)this + 0x18);
  pFVar3 = *(FResolveRect **)((longlong)this + 0x10);
  pFVar12 = TShaderRefBase<FResolveVS,FShaderMapPointerTable>::GetVertexShader(&local_d8,true);
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FResolveVS::SetParameters
            (local_d8.ShaderContent,pFVar14,pFVar3,pFVar2,*(uint *)(lVar1 + 0x10),
             *(uint *)(lVar1 + 0x18));
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar12,pFVar14);
  pFVar4 = *(FDummyResolveParameter **)((longlong)this + 0x20);
  pFVar13 = TShaderRefBase<FResolveDepthPS,FShaderMapPointerTable>::GetPixelShader(&local_b8,true);
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FResolveDepthPS::SetParameters((FResolveDepthPS *)local_c8.ShaderContent,pFVar14,*pFVar4);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar13,pFVar14);
  uVar7 = (uint)((FShaderResourceParameter *)((longlong)local_c8.ShaderContent + 0xe0))->BaseIndex;
  lVar1 = **(longlong **)((longlong)this + 0x28);
  local_a8 = uVar7;
  lStack_a0 = lVar1;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar17 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar17;
    *(undefined8 **)&param_1->field_0x30 = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &
               ___7__TRHILambdaCommand_V<lambda_2>__1_____RV__TRHICommandList_RecursiveHazardous_VFD3D12CommandContext_____<lambda_1>__BE_____ResolveTextureUsingShader_VFResolveDepthPS___FD3D12CommandContext__QEAAXPEAVFD3D12Texture__0PEAVFD3D12RenderTargetView__PEAVFD3D12DepthStencilView__AEBUD3D12_RESOURCE_DESC__AEBUFResolveRect__4UFDummyResolveParameter___Z_QEBA_A_PAEAV__TRHICommandList_RecursiveHazardous_VFD3D12CommandContext_____Z____TRHICommandList_RecursiveHazardous_VFD3D12CommandContext____6B_
    ;
    puVar17[2] = CONCAT44(uStack_a4,local_a8);
    puVar17[3] = lStack_a0;
  }
  else {
    pIVar15 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar16 = (**(code **)(pIVar15->_padding_ + 0x148))(pIVar15);
    this_02 = (FD3D12StateCache *)(lVar16 + 0x1f0);
    if (lVar16 == 0) {
      this_02 = (FD3D12StateCache *)0x3b0;
    }
    FD3D12StateCache::SetShaderResourceView
              (this_02,SF_Pixel,*(FD3D12ShaderResourceView **)(lVar1 + 0x240),uVar7);
  }
  FRHICommandList::DrawPrimitive((FRHICommandList *)param_1,0,2,1);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
  return;
}

// operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_> @ 145a37e30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l20::<lambda_1>::
operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>
          (void *this,TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *param_1)

{
  longlong lVar1;
  FResolveRect *pFVar2;
  FResolveRect *pFVar3;
  uint *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  atomic<unsigned_int> aVar8;
  FRHIBreadcrumbAllocator *pFVar9;
  FRHIBreadcrumbNode *pFVar10;
  FGlobalShaderMap *this_00;
  FShaderType *pFVar11;
  FName this_01;
  FRHIVertexShader *pFVar12;
  FRHIPixelShader *pFVar13;
  FRHIBatchedShaderParameters *pFVar14;
  IRHICommandContext *pIVar15;
  longlong lVar16;
  undefined8 *puVar17;
  FD3D12StateCache *this_02;
  undefined1 local_res10 [8];
  TShaderRefBase<FResolveVS,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  TShaderRefBase<FResolveSingleSamplePS,FShaderMapPointerTable> local_b8;
  uint local_a8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  char *local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  wchar_t *pwStack_80;
  FRHIBreadcrumbScope local_78;
  undefined1 local_68;
  FString local_60 [2];
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    uStack_90 = 0xfa;
    local_98 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RenderTarget.cpp"
    ;
    local_88 = 0;
    pwStack_80 = L"ResolveTextureUsingShader";
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x51088ad0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0xfa;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = uStack_8c;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._0_4_ = 0x51091c40;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs,4000);
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceGpuSpecId = 0;
    `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
    ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(```FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l20::Desc
           ::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>'::__l7::
           <lambda_1>::operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pFVar9 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar10 = FMemStackBase::Alloc(&pFVar9->Inner,0x50,8);
  pFVar10->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar10->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar10->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar10->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar10->Data =
       (FRHIBreadcrumbData *)
       &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  pFVar10->Allocator = pFVar9;
  pFVar10->TraceCpuSpecId = 0;
  pFVar10->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar7 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar10->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar10->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar10->ID = uVar7;
  pFVar10->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar10[1]._padding_ =
       (longlong)
       &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc;
  if ((`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
       ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar6 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar6)) {
    EnterCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
    if (`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
        ::__l2::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar8 = (atomic<unsigned_int>)
              FCpuProfilerTrace::OutputEventType
                        ((wchar_t *)
                         CONCAT44(`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_._4_4_,
                                  (undefined4)
                                  `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                  ::__l2::Desc._padding_),
                         (char *)CONCAT44(`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                          ::__l2::Desc._padding_._4_4_,
                                          (undefined4)
                                          `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                                          ::__l2::Desc._padding_),
                         (uint)`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                               ::__l2::Desc._padding_);
      LOCK();
      `public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
      ::__l2::Desc.TraceCpuSpecId = aVar8;
      UNLOCK();
    }
    LeaveCriticalSection
              ((LPCRITICAL_SECTION)
               &`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
                ::__l2::Desc.Cs);
  }
  pFVar10->TraceCpuSpecId =
       (uint)`public:_UNKNOWN___cdecl_`public:_UNKNOWN___cdecl_`public:_void___cdecl_FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>(FD3D12Texture*___ptr64,FD3D12Texture*___ptr64,FD3D12RenderTargetView*___ptr64,FD3D12DepthStencilView*___ptr64,D3D12_RESOURCE_DESC_const&___ptr64,FResolveRect_const&___ptr64,FResolveRect_const&___ptr64,unsigned_int)___ptr64'::`20'::<lambda_1>::operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>(TRHICommandList_RecursiveHazardous<FD3D12CommandContext>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()<>(void)const___ptr64'
             ::__l2::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_78,(FRHIComputeCommandList *)param_1,pFVar10);
  local_68 = 1;
  FRHICommandList::SetViewport
            ((FRHICommandList *)param_1,0.0,0.0,0.0,(float)*(uint *)(*(longlong *)this + 0x10),
             (float)*(uint *)(*(longlong *)this + 0x18),__real_3f800000);
  this_00 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  TShaderMapRef<FResolveVS>::TShaderMapRef<FResolveVS>
            ((TShaderMapRef<FResolveVS> *)&local_d8,this_00);
  pFVar11 = (FShaderType *)FResolveSingleSamplePS::GetStaticType();
  FGlobalShaderMap::GetShader(this_00,&local_c8,pFVar11,0);
  if ((FResolveSingleSamplePS *)local_c8.ShaderContent == (FResolveSingleSamplePS *)0x0) {
    this_01 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res10);
    ::FName::ToString((FName *)this_01,local_60);
    FResolveSingleSamplePS::GetStaticType();
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FResolveSingleSamplePS::GetStaticType();
  local_b8.ShaderContent = (FResolveSingleSamplePS *)local_c8.ShaderContent;
  local_b8.ShaderMap = local_c8.ShaderMap;
  pFVar12 = TShaderRefBase<FResolveVS,FShaderMapPointerTable>::GetVertexShader(&local_d8,true);
  *(FRHIVertexShader **)(*(longlong *)((longlong)this + 8) + 8) = pFVar12;
  pFVar13 = TShaderRefBase<FResolveSingleSamplePS,FShaderMapPointerTable>::GetPixelShader
                      (&local_b8,true);
  *(FRHIPixelShader **)(*(longlong *)((longlong)this + 8) + 0x10) = pFVar13;
  **(undefined8 **)((longlong)this + 8) = GFilterVertexDeclaration._32_8_;
  *(undefined4 *)(*(longlong *)((longlong)this + 8) + 0x60) = 1;
  SetGraphicsPipelineState
            ((FRHICommandList *)param_1,*(FGraphicsPipelineStateInitializer **)((longlong)this + 8),
             0,CheckApply,true);
  FRHICommandList::SetBlendFactor((FRHICommandList *)param_1,&FLinearColor::White);
  lVar1 = *(longlong *)this;
  pFVar2 = *(FResolveRect **)((longlong)this + 0x18);
  pFVar3 = *(FResolveRect **)((longlong)this + 0x10);
  pFVar12 = TShaderRefBase<FResolveVS,FShaderMapPointerTable>::GetVertexShader(&local_d8,true);
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FResolveVS::SetParameters
            (local_d8.ShaderContent,pFVar14,pFVar3,pFVar2,*(uint *)(lVar1 + 0x10),
             *(uint *)(lVar1 + 0x18));
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar12,pFVar14);
  puVar4 = *(uint **)((longlong)this + 0x20);
  pFVar13 = TShaderRefBase<FResolveSingleSamplePS,FShaderMapPointerTable>::GetPixelShader
                      (&local_b8,true);
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FResolveSingleSamplePS::SetParameters
            ((FResolveSingleSamplePS *)local_c8.ShaderContent,pFVar14,*puVar4);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)param_1,(FRHIGraphicsShader *)pFVar13,pFVar14);
  uVar7 = (uint)((FShaderResourceParameter *)((longlong)local_c8.ShaderContent + 0xe0))->BaseIndex;
  lVar1 = **(longlong **)((longlong)this + 0x28);
  local_a8 = uVar7;
  lStack_a0 = lVar1;
  if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
    puVar17 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
    *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
    **(undefined8 **)&param_1->field_0x30 = puVar17;
    *(undefined8 **)&param_1->field_0x30 = puVar17 + 1;
    puVar17[1] = 0;
    *puVar17 = &
               ___7__TRHILambdaCommand_V<lambda_2>__1_____RV__TRHICommandList_RecursiveHazardous_VFD3D12CommandContext_____<lambda_1>__BE_____ResolveTextureUsingShader_VFResolveSingleSamplePS___FD3D12CommandContext__QEAAXPEAVFD3D12Texture__0PEAVFD3D12RenderTargetView__PEAVFD3D12DepthStencilView__AEBUD3D12_RESOURCE_DESC__AEBUFResolveRect__4I_Z_QEBA_A_PAEAV__TRHICommandList_RecursiveHazardous_VFD3D12CommandContext_____Z____TRHICommandList_RecursiveHazardous_VFD3D12CommandContext____6B_
    ;
    puVar17[2] = CONCAT44(uStack_a4,local_a8);
    puVar17[3] = lStack_a0;
  }
  else {
    pIVar15 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
    lVar16 = (**(code **)(pIVar15->_padding_ + 0x148))(pIVar15);
    this_02 = (FD3D12StateCache *)(lVar16 + 0x1f0);
    if (lVar16 == 0) {
      this_02 = (FD3D12StateCache *)0x3b0;
    }
    FD3D12StateCache::SetShaderResourceView
              (this_02,SF_Pixel,*(FD3D12ShaderResourceView **)(lVar1 + 0x240),uVar7);
  }
  FRHICommandList::DrawPrimitive((FRHICommandList *)param_1,0,2,1);
  FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_78);
  return;
}

// ResolveTextureUsingShader<FResolveDepthPS> @ 145a426d0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>
          (FD3D12CommandContext *this,FD3D12Texture *param_1,FD3D12Texture *param_2,
          FD3D12RenderTargetView *param_3,FD3D12DepthStencilView *param_4,
          D3D12_RESOURCE_DESC *param_5,FResolveRect *param_6,FResolveRect *param_7,
          FDummyResolveParameter param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FD3D12BaseShaderResource *pFVar12;
  IRHICommandContext *pIVar13;
  uint uVar14;
  FD3D12Texture *pFVar15;
  IRHICommandContext *pIVar16;
  undefined1 auStack_1f08 [32];
  ulonglong local_1ee8;
  undefined4 local_1ee0;
  undefined8 local_1ed8;
  FD3D12Texture *local_1ec8;
  FD3D12Texture *local_1ec0;
  undefined4 local_1eb8;
  undefined4 uStack_1eb4;
  undefined4 uStack_1eb0;
  undefined4 uStack_1eac;
  D3D12_RESOURCE_DESC *local_1ea8;
  undefined8 *local_1ea0;
  FResolveRect *local_1e98;
  FResolveRect *local_1e90;
  FDummyResolveParameter *local_1e88;
  FD3D12Texture **local_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined8 local_1e68;
  undefined8 uStack_1e60;
  undefined8 local_1e58;
  undefined8 uStack_1e50;
  undefined8 local_1e48;
  undefined8 uStack_1e40;
  undefined8 local_1e38;
  FRHIBlendState *local_1e30;
  FRHIRasterizerState *local_1e28;
  FRHIDepthStencilState *local_1e20;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e04;
  undefined4 local_1dfc;
  undefined8 local_1df8;
  undefined8 uStack_1df0;
  undefined8 local_1de8;
  undefined8 uStack_1de0;
  undefined8 local_1dd8;
  undefined8 uStack_1dd0;
  undefined8 local_1dc8;
  undefined8 uStack_1dc0;
  undefined1 local_1db8;
  undefined8 local_1db0;
  undefined8 local_1da8;
  undefined8 local_1da0;
  undefined4 local_1d98;
  undefined8 local_1d90;
  FRHICommandList_RecursiveHazardous local_1d88;
  undefined1 local_1d8 [384];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x145a426ef;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f08;
  uVar2 = (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports;
  local_1ec8 = param_2;
  local_1ec0 = param_1;
  if ((uVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                         ,0x1f8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports;
  uVar8 = uVar3;
  if ((int)uVar2 < (int)uVar3) {
    uVar8 = uVar2;
  }
  uVar14 = 0x10;
  if ((int)uVar8 < 0x10) {
    uVar14 = uVar8;
  }
  if (0 < (int)uVar14) {
    memcpy(local_1d8,(this->StateCache).PipelineState.Graphics.CurrentViewport,
           (longlong)(int)uVar14 * 0x18);
  }
  if ((int)uVar14 < (int)uVar2) {
    memset(local_1d8 + (longlong)(int)uVar14 * 0x18,0,(longlong)(int)(uVar2 - uVar14) * 0x18);
  }
  pFVar15 = local_1ec8;
  pIVar16 = (IRHICommandContext *)0x0;
  local_1e30 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference;
  local_1e28 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference;
  local_1e68 = 0;
  uStack_1e60 = 0;
  pFVar12 = (FD3D12BaseShaderResource *)&local_1ec8->_padding_;
  local_1e58 = 0;
  uStack_1e50 = 0;
  local_1e48 = 0;
  uStack_1e40 = 0;
  local_1e38 = 0;
  local_1e18 = 0;
  uStack_1e10 = 0;
  local_1e04 = 0;
  local_1dfc = 0;
  local_1df8 = 0;
  uStack_1df0 = 0;
  local_1de8 = 0;
  uStack_1de0 = 0;
  local_1dd8 = 0;
  uStack_1dd0 = 0;
  local_1dc8 = 0;
  uStack_1dc0 = 0;
  local_1db8 = 0;
  local_1db0 = 0;
  local_1da8 = 0;
  local_1da0 = 0;
  local_1d98 = 1;
  local_1d90 = 0;
  if (local_1ec8 == (FD3D12Texture *)0x0) {
    pFVar12 = (FD3D12BaseShaderResource *)0x0;
  }
  ClearShaderResources(this,pFVar12,UAVMask|SRVMask);
  if ((((param_7->X1 == 0) && (param_7->Y1 == 0)) && ((longlong)param_7->X2 == param_5->Width)) &&
     (param_7->Y2 == param_5->Height)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((param_5->Flags & D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL) == D3D12_RESOURCE_FLAG_NONE) {
    if (bVar7) {
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      local_1e78 = 0;
      uStack_1e70 = 0;
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      pcVar6 = *(code **)(*plVar4 + 0x180);
      if ((*(longlong *)&param_3->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0x103,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1eb8 = *(undefined4 *)&param_3->field_0x38;
      uStack_1eb4 = *(undefined4 *)&param_3->field_0x3c;
      uStack_1eb0 = *(undefined4 *)&param_3->field_0x40;
      uStack_1eac = *(undefined4 *)&param_3->field_0x44;
      local_1ee8 = 0;
      (*pcVar6)(plVar4,*(undefined8 *)&param_3->field_0x38,&local_1e78,0);
      if ((*(longlong *)&param_3->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = *(FD3D12Resource **)&param_3->field_0x20;
      if ((pFVar5 == (FD3D12Resource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar5);
      pFVar15 = local_1ec8;
    }
    if ((this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget !=
        (FD3D12DepthStencilView *)0x0) {
      (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget =
           (FD3D12DepthStencilView *)0x0;
      (this->StateCache).bNeedSetRTs = true;
    }
    (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 0;
    if (param_3 != (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 1;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[0] != param_3) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[0] = param_3;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[1] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[1] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[2] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[2] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[3] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[3] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[4] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[4] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[5] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[5] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[6] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[6] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[7] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[7] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    local_1e20 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
    if (pFVar15 == (FD3D12Texture *)0x0) goto LAB_145a42cdd;
    lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1e04._0_5_ = CONCAT14(*(undefined1 *)(lVar10 + 0x33),(undefined4)local_1e04);
    puVar11 = (undefined8 *)(**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1df8 = *puVar11;
  }
  else {
    if (bVar7) {
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      pcVar6 = *(code **)(*plVar4 + 0x178);
      if ((*(longlong *)&param_4->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0x103,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1eb8 = *(undefined4 *)&param_4->field_0x38;
      uStack_1eb4 = *(undefined4 *)&param_4->field_0x3c;
      uStack_1eb0 = *(undefined4 *)&param_4->field_0x40;
      uStack_1eac = *(undefined4 *)&param_4->field_0x44;
      local_1ed8 = 0;
      local_1ee0 = 0;
      local_1ee8 = local_1ee8 & 0xffffffffffffff00;
      (*pcVar6)(plVar4,*(undefined8 *)&param_4->field_0x38,3,0);
      if ((*(longlong *)&param_4->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = *(FD3D12Resource **)&param_4->field_0x20;
      if ((pFVar5 == (FD3D12Resource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar5);
      pFVar15 = local_1ec8;
    }
    if ((this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget != param_4) {
      (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget = param_4;
      (this->StateCache).bNeedSetRTs = true;
    }
    (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 0;
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[0] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[0] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[1] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[1] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[2] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[2] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[3] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[3] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[4] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[4] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[5] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[5] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[6] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[6] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[7] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[7] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    local_1e20 = TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
    if (pFVar15 == (FD3D12Texture *)0x0) goto LAB_145a42cdd;
    lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1db8 = *(undefined1 *)(lVar10 + 0x33);
    puVar11 = (undefined8 *)(**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1db0 = *puVar11;
  }
  lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
  local_1da0 = CONCAT62(local_1da0._2_6_,(ushort)*(byte *)(lVar10 + 0x31));
LAB_145a42cdd:
  pIVar13 = (IRHICommandContext *)&this->field_0x1c0;
  if (this == (FD3D12CommandContext *)0x0) {
    pIVar13 = pIVar16;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous(&local_1d88,pIVar13);
  local_1ea8 = param_5;
  local_1ea0 = &local_1e68;
  local_1e90 = param_7;
  local_1e98 = param_6;
  local_1e88 = &param_8;
  local_1e80 = &local_1ec0;
  `FD3D12CommandContext::ResolveTextureUsingShader<FResolveDepthPS>'::__l20::<lambda_1>::
  operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>
            (&local_1ea8,(TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *)&local_1d88);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1d88);
  if (local_1ec0 != (FD3D12Texture *)0x0) {
    pIVar16 = (IRHICommandContext *)&local_1ec0->_padding_;
  }
  ClearShaderResources(this,(FD3D12BaseShaderResource *)pIVar16,UAVMask|SRVMask);
  if ((0xf < uVar3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count < (sizeof(UEArrayCountHelper(PipelineState.Graphics.CurrentViewport)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                         ,0x127,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports == uVar3) &&
     (iVar9 = memcmp((this->StateCache).PipelineState.Graphics.CurrentViewport,local_1d8,
                     (ulonglong)uVar3 * 0x18), iVar9 == 0)) {
    return;
  }
  memcpy((this->StateCache).PipelineState.Graphics.CurrentViewport,local_1d8,(ulonglong)uVar3 * 0x18
        );
  (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports = uVar3;
  (this->StateCache).bNeedSetViewports = true;
  return;
}

// ResolveTextureUsingShader<FResolveSingleSamplePS> @ 145a42e20

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>
          (FD3D12CommandContext *this,FD3D12Texture *param_1,FD3D12Texture *param_2,
          FD3D12RenderTargetView *param_3,FD3D12DepthStencilView *param_4,
          D3D12_RESOURCE_DESC *param_5,FResolveRect *param_6,FResolveRect *param_7,uint param_8)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  FD3D12Resource *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 *puVar11;
  FD3D12BaseShaderResource *pFVar12;
  IRHICommandContext *pIVar13;
  uint uVar14;
  FD3D12Texture *pFVar15;
  IRHICommandContext *pIVar16;
  undefined1 auStack_1f08 [32];
  ulonglong local_1ee8;
  undefined4 local_1ee0;
  undefined8 local_1ed8;
  FD3D12Texture *local_1ec8;
  FD3D12Texture *local_1ec0;
  undefined4 local_1eb8;
  undefined4 uStack_1eb4;
  undefined4 uStack_1eb0;
  undefined4 uStack_1eac;
  D3D12_RESOURCE_DESC *local_1ea8;
  undefined8 *local_1ea0;
  FResolveRect *local_1e98;
  FResolveRect *local_1e90;
  uint *local_1e88;
  FD3D12Texture **local_1e80;
  undefined8 local_1e78;
  undefined8 uStack_1e70;
  undefined8 local_1e68;
  undefined8 uStack_1e60;
  undefined8 local_1e58;
  undefined8 uStack_1e50;
  undefined8 local_1e48;
  undefined8 uStack_1e40;
  undefined8 local_1e38;
  FRHIBlendState *local_1e30;
  FRHIRasterizerState *local_1e28;
  FRHIDepthStencilState *local_1e20;
  undefined8 local_1e18;
  undefined8 uStack_1e10;
  undefined8 local_1e04;
  undefined4 local_1dfc;
  undefined8 local_1df8;
  undefined8 uStack_1df0;
  undefined8 local_1de8;
  undefined8 uStack_1de0;
  undefined8 local_1dd8;
  undefined8 uStack_1dd0;
  undefined8 local_1dc8;
  undefined8 uStack_1dc0;
  undefined1 local_1db8;
  undefined8 local_1db0;
  undefined8 local_1da8;
  undefined8 local_1da0;
  undefined4 local_1d98;
  undefined8 local_1d90;
  FRHICommandList_RecursiveHazardous local_1d88;
  undefined1 local_1d8 [384];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x145a42e3f;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_1f08;
  uVar2 = (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports;
  local_1ec8 = param_2;
  local_1ec0 = param_1;
  if ((uVar2 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("*Count",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCachePrivate.h"
                         ,0x1f8,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar3 = (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports;
  uVar8 = uVar3;
  if ((int)uVar2 < (int)uVar3) {
    uVar8 = uVar2;
  }
  uVar14 = 0x10;
  if ((int)uVar8 < 0x10) {
    uVar14 = uVar8;
  }
  if (0 < (int)uVar14) {
    memcpy(local_1d8,(this->StateCache).PipelineState.Graphics.CurrentViewport,
           (longlong)(int)uVar14 * 0x18);
  }
  if ((int)uVar14 < (int)uVar2) {
    memset(local_1d8 + (longlong)(int)uVar14 * 0x18,0,(longlong)(int)(uVar2 - uVar14) * 0x18);
  }
  pFVar15 = local_1ec8;
  pIVar16 = (IRHICommandContext *)0x0;
  local_1e30 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference;
  local_1e28 = TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference;
  local_1e68 = 0;
  uStack_1e60 = 0;
  pFVar12 = (FD3D12BaseShaderResource *)&local_1ec8->_padding_;
  local_1e58 = 0;
  uStack_1e50 = 0;
  local_1e48 = 0;
  uStack_1e40 = 0;
  local_1e38 = 0;
  local_1e18 = 0;
  uStack_1e10 = 0;
  local_1e04 = 0;
  local_1dfc = 0;
  local_1df8 = 0;
  uStack_1df0 = 0;
  local_1de8 = 0;
  uStack_1de0 = 0;
  local_1dd8 = 0;
  uStack_1dd0 = 0;
  local_1dc8 = 0;
  uStack_1dc0 = 0;
  local_1db8 = 0;
  local_1db0 = 0;
  local_1da8 = 0;
  local_1da0 = 0;
  local_1d98 = 1;
  local_1d90 = 0;
  if (local_1ec8 == (FD3D12Texture *)0x0) {
    pFVar12 = (FD3D12BaseShaderResource *)0x0;
  }
  ClearShaderResources(this,pFVar12,UAVMask|SRVMask);
  if ((((param_7->X1 == 0) && (param_7->Y1 == 0)) && ((longlong)param_7->X2 == param_5->Width)) &&
     (param_7->Y2 == param_5->Height)) {
    bVar7 = true;
  }
  else {
    bVar7 = false;
  }
  if ((param_5->Flags & D3D12_RESOURCE_FLAG_ALLOW_DEPTH_STENCIL) == D3D12_RESOURCE_FLAG_NONE) {
    if (bVar7) {
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      local_1e78 = 0;
      uStack_1e70 = 0;
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      pcVar6 = *(code **)(*plVar4 + 0x180);
      if ((*(longlong *)&param_3->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0x103,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1eb8 = *(undefined4 *)&param_3->field_0x38;
      uStack_1eb4 = *(undefined4 *)&param_3->field_0x3c;
      uStack_1eb0 = *(undefined4 *)&param_3->field_0x40;
      uStack_1eac = *(undefined4 *)&param_3->field_0x44;
      local_1ee8 = 0;
      (*pcVar6)(plVar4,*(undefined8 *)&param_3->field_0x38,&local_1e78,0);
      if ((*(longlong *)&param_3->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = *(FD3D12Resource **)&param_3->field_0x20;
      if ((pFVar5 == (FD3D12Resource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar5);
      pFVar15 = local_1ec8;
    }
    if ((this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget !=
        (FD3D12DepthStencilView *)0x0) {
      (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget =
           (FD3D12DepthStencilView *)0x0;
      (this->StateCache).bNeedSetRTs = true;
    }
    (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 0;
    if (param_3 != (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 1;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[0] != param_3) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[0] = param_3;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[1] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[1] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[2] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[2] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[3] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[3] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[4] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[4] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[5] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[5] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[6] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[6] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[7] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[7] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    local_1e20 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
    if (pFVar15 == (FD3D12Texture *)0x0) goto LAB_145a4342d;
    lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1e04._0_5_ = CONCAT14(*(undefined1 *)(lVar10 + 0x33),(undefined4)local_1e04);
    puVar11 = (undefined8 *)(**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1df8 = *puVar11;
  }
  else {
    if (bVar7) {
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar4 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      pcVar6 = *(code **)(*plVar4 + 0x178);
      if ((*(longlong *)&param_4->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0x103,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_1eb8 = *(undefined4 *)&param_4->field_0x38;
      uStack_1eb4 = *(undefined4 *)&param_4->field_0x3c;
      uStack_1eb0 = *(undefined4 *)&param_4->field_0x40;
      uStack_1eac = *(undefined4 *)&param_4->field_0x44;
      local_1ed8 = 0;
      local_1ee0 = 0;
      local_1ee8 = local_1ee8 & 0xffffffffffffff00;
      (*pcVar6)(plVar4,*(undefined8 *)&param_4->field_0x38,3,0);
      if ((*(longlong *)&param_4->field_0x18 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                             ,0xfe,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = *(FD3D12Resource **)&param_4->field_0x20;
      if ((pFVar5 == (FD3D12Resource *)0x0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Resource",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                             ,0x1a5,L""), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar5);
      pFVar15 = local_1ec8;
    }
    if ((this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget != param_4) {
      (this->StateCache).PipelineState.Graphics.CurrentDepthStencilTarget = param_4;
      (this->StateCache).bNeedSetRTs = true;
    }
    (this->StateCache).PipelineState.Graphics.CurrentNumberOfRenderTargets = 0;
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[0] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[0] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[1] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[1] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[2] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[2] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[3] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[3] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[4] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[4] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[5] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[5] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[6] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[6] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    if ((this->StateCache).PipelineState.Graphics.RenderTargetArray[7] !=
        (FD3D12RenderTargetView *)0x0) {
      (this->StateCache).PipelineState.Graphics.RenderTargetArray[7] = (FD3D12RenderTargetView *)0x0
      ;
      (this->StateCache).bNeedSetRTs = true;
    }
    local_1e20 = TStaticStateRHI<TStaticDepthStencilState<1,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
                 ::StaticResource.StateRHI.Reference;
    if (pFVar15 == (FD3D12Texture *)0x0) goto LAB_145a4342d;
    lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1db8 = *(undefined1 *)(lVar10 + 0x33);
    puVar11 = (undefined8 *)(**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
    local_1db0 = *puVar11;
  }
  lVar10 = (**(code **)(pFVar15->_padding_ + 0x20))(pFVar15);
  local_1da0 = CONCAT62(local_1da0._2_6_,(ushort)*(byte *)(lVar10 + 0x31));
LAB_145a4342d:
  pIVar13 = (IRHICommandContext *)&this->field_0x1c0;
  if (this == (FD3D12CommandContext *)0x0) {
    pIVar13 = pIVar16;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous(&local_1d88,pIVar13);
  local_1ea8 = param_5;
  local_1ea0 = &local_1e68;
  local_1e90 = param_7;
  local_1e98 = param_6;
  local_1e88 = &param_8;
  local_1e80 = &local_1ec0;
  `FD3D12CommandContext::ResolveTextureUsingShader<FResolveSingleSamplePS>'::__l20::<lambda_1>::
  operator()<TRHICommandList_RecursiveHazardous<FD3D12CommandContext>_>
            (&local_1ea8,(TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *)&local_1d88);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1d88);
  if (local_1ec0 != (FD3D12Texture *)0x0) {
    pIVar16 = (IRHICommandContext *)&local_1ec0->_padding_;
  }
  ClearShaderResources(this,(FD3D12BaseShaderResource *)pIVar16,UAVMask|SRVMask);
  if ((0xf < uVar3) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count < (sizeof(UEArrayCountHelper(PipelineState.Graphics.CurrentViewport)) - 1)"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12StateCache.cpp"
                         ,0x127,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports == uVar3) &&
     (iVar9 = memcmp((this->StateCache).PipelineState.Graphics.CurrentViewport,local_1d8,
                     (ulonglong)uVar3 * 0x18), iVar9 == 0)) {
    return;
  }
  memcpy((this->StateCache).PipelineState.Graphics.CurrentViewport,local_1d8,(ulonglong)uVar3 * 0x18
        );
  (this->StateCache).PipelineState.Graphics.CurrentNumberOfViewports = uVar3;
  (this->StateCache).bNeedSetViewports = true;
  return;
}

// CopyTextureRegionChecked @ 145a5b6f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::CopyTextureRegionChecked
          (FD3D12CommandContext *this,D3D12_TEXTURE_COPY_LOCATION *param_1,int param_2,int param_3,
          int param_4,EPixelFormat param_5,D3D12_TEXTURE_COPY_LOCATION *param_6,D3D12_BOX *param_7,
          EPixelFormat param_8,FName *param_9)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  FName *this_00;
  FD3D12CommandContext *pFVar5;
  bool bVar6;
  uint uVar7;
  ulong64 uVar8;
  FString *pFVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  wchar_t *pwVar15;
  uint uVar16;
  ForAnyElementType FVar17;
  ForAnyElementType FVar18;
  wchar_t *pwVar19;
  D3D12_TEXTURE_COPY_LOCATION *pDVar20;
  ulonglong uVar21;
  int iVar22;
  uint uVar23;
  undefined1 auStack_3e8 [32];
  FScriptContainerElement *local_3c8;
  D3D12_TEXTURE_COPY_LOCATION *local_3c0;
  D3D12_BOX *local_3b8;
  uint local_3b0;
  uint local_3a8;
  uint local_3a0;
  uint local_398;
  uint local_390;
  uint local_388;
  uint local_380;
  uint local_378;
  uint local_374;
  uint local_370;
  uint local_36c;
  uint local_368;
  uint local_364;
  undefined8 local_360;
  ulonglong local_358;
  FName *local_350;
  longlong local_348;
  int local_340;
  int local_33c;
  ulonglong local_338;
  ulonglong local_330;
  ulonglong local_328;
  FD3D12CommandContext *local_320;
  FPixelFormatInfo *local_318;
  D3D12_TEXTURE_COPY_LOCATION *local_310;
  D3D12_BOX *local_308;
  FString local_300;
  D3D12_TEXTURE_COPY_LOCATION *local_2f0;
  longlong local_2e8;
  FString local_2e0;
  FString local_2d0;
  FString local_2c0;
  FString local_2b0;
  FString local_2a0;
  FString local_290;
  FString local_280;
  FString local_270;
  FString local_260;
  FString local_250;
  undefined8 local_240;
  FString local_238;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FString local_1e8;
  FString local_1d8;
  FString local_1c8;
  FString local_1b8;
  FString local_1a8;
  FString local_198;
  FString local_188;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  int local_c8 [4];
  ulonglong local_b8;
  uint local_b0;
  ushort local_ac;
  ushort local_aa;
  int local_90;
  ulonglong local_80;
  uint local_78;
  ushort local_74;
  ushort local_72;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_3e8;
  uVar11 = (ulonglong)param_8;
  local_308 = param_7;
  local_2f0 = param_6;
  local_350 = param_9;
  local_340 = param_2;
  local_33c = param_3;
  local_320 = this;
  local_310 = param_1;
  (**(code **)((longlong)*param_1->pResource + 0x50))(param_1->pResource,local_c8);
  (**(code **)((longlong)*param_6->pResource + 0x50))();
  local_36c = 0;
  local_348 = (ulonglong)param_5 * 0x30;
  local_2e8 = uVar11 * 0x30;
  pwVar15 = L"";
  local_318 = GPixelFormats + param_5;
  if (param_6->Type == D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX) {
    local_368 = (param_6->field2_0x10).SubresourceIndex;
    uVar7 = 1;
    if (local_90 != 4) {
      uVar7 = (uint)local_74;
    }
    uVar10 = (ulonglong)local_368 % (ulonglong)local_72;
    local_374 = (uint)uVar10;
    local_364 = (uint)(((ulonglong)local_368 / (ulonglong)local_72) % (ulonglong)uVar7);
    local_368 = local_368 / (local_72 * uVar7);
    bVar12 = (byte)uVar10;
    if (local_308 == (D3D12_BOX *)0x0) {
      if (param_1->Type == D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT) {
        uVar7 = (param_1->field2_0x10).PlacedFootprint.Footprint.Width;
        uVar10._4_4_ = (param_1->field2_0x10).PlacedFootprint.Footprint.Depth;
        local_300.Data.AllocatorInstance.Data._0_4_ =
             (param_1->field2_0x10).PlacedFootprint.Footprint.Height;
      }
      else {
        uVar10 = local_80 >> (bVar12 & 0x3f);
        iVar22 = GPixelFormats[uVar11].BlockSizeX;
        uVar21 = uVar10 & 0xffffffff;
        if ((int)uVar10 == 0) {
          uVar21 = 1;
        }
        uVar7 = (int)(((uVar21 - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22) * iVar22;
        uVar10._4_4_ = local_78 >> (bVar12 & 0x1f);
        iVar22 = GPixelFormats[uVar11].BlockSizeY;
        if (uVar10._4_4_ == 0) {
          uVar10._4_4_ = 1;
        }
        local_300.Data.AllocatorInstance.Data._0_4_ =
             (int)((((ulonglong)uVar10._4_4_ - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22)
             * iVar22;
        iVar22 = GPixelFormats[uVar11].BlockSizeZ;
        if (local_90 == 4) {
          uVar10._4_4_ = (uint)(local_74 >> (bVar12 & 0x1f));
          if (uVar10._4_4_ == 0) {
            uVar10._4_4_ = 1;
          }
          uVar10 = (ulonglong)uVar10._4_4_;
        }
        else {
          uVar10 = 1;
        }
        uVar10._4_4_ = (int)(((uVar10 - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22) *
                       iVar22;
      }
      local_300.Data.AllocatorInstance.Data._4_4_ = 0;
      local_338 = (ulonglong)uVar7;
      local_360 = (ulonglong)local_360._4_4_ << 0x20;
      local_378 = 0;
      local_370 = 0;
    }
    else {
      local_378 = local_308->top;
      local_370 = local_308->front;
      uVar10._0_4_ = local_308->bottom;
      uVar10._4_4_ = local_308->back;
      local_360 = CONCAT44(local_360._4_4_,local_308->left);
      local_338 = CONCAT44(local_338._4_4_,local_308->right);
      local_300.Data.AllocatorInstance.Data = (FScriptContainerElement *)(uVar10 & 0xffffffff);
      local_240 = uVar10;
    }
    uVar7 = GPixelFormats[uVar11].BlockSizeX;
    iVar22 = GPixelFormats[uVar11].BlockSizeZ;
    local_80 = local_80 >> (bVar12 & 0x3f);
    uVar21 = local_80 & 0xffffffff;
    if ((int)local_80 == 0) {
      uVar21 = 1;
    }
    iVar2 = GPixelFormats[uVar11].BlockSizeY;
    local_78 = local_78 >> (bVar12 & 0x1f);
    local_358 = (ulonglong)
                ((int)(((uVar21 - 1) + (longlong)(int)uVar7) / (ulonglong)(longlong)(int)uVar7) *
                uVar7);
    if (local_78 == 0) {
      local_78 = 1;
    }
    local_328 = (ulonglong)
                (uint)((int)((((ulonglong)local_78 - 1) + (longlong)iVar2) /
                            (ulonglong)(longlong)iVar2) * iVar2);
    if (local_90 == 4) {
      uVar23 = (uint)(local_74 >> (bVar12 & 0x1f));
      if (uVar23 == 0) {
        uVar23 = 1;
      }
      uVar21 = (ulonglong)uVar23;
    }
    else {
      uVar21 = 1;
    }
    local_330 = (ulonglong)
                (uint)((int)(((uVar21 - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22) *
                      iVar22);
    uVar23 = (uint)local_338;
    if (((uint)local_360 % uVar7 != 0) ||
       (FVar17.Data = local_300.Data.AllocatorInstance.Data,
       (int)((local_338 & 0xffffffff) % (ulonglong)uVar7) != 0)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_208,this);
      FVar17.Data = local_300.Data.AllocatorInstance.Data;
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_388 = (uint)local_300.Data.AllocatorInstance.Data;
      local_398 = local_370;
      local_3a0 = local_378;
      local_3a8 = (uint)local_360;
      local_3b0 = (uint)local_330;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_328);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_368);
      local_390 = uVar23;
      local_380 = uVar10._4_4_;
      ::FString::PrintfImpl
                (&local_2e0,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar18.Data = (FScriptContainerElement *)L"";
      if (local_2e0.Data.ArrayNum != 0) {
        FVar18.Data = local_2e0.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_218);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar18.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CopyBox.left % SourcePixelFormatInfo.BlockSizeX) == 0 && (CopyBox.right % SourcePixelFormatInfo.BlockSizeX) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5d7,L"Width not aligned to block size for: \'%s\', %s\nBreadcrumbs: %s")
      ;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
      }
      if (local_2e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2e0.Data.AllocatorInstance.Data);
      }
      if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_208.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar23 = local_378;
    uVar7 = GPixelFormats[uVar11].BlockSizeY;
    uVar13 = (uint)FVar17.Data;
    if ((local_378 % uVar7 == 0) &&
       ((int)(((ulonglong)FVar17.Data & 0xffffffff) % (ulonglong)uVar7) == 0)) {
      uVar7 = (uint)local_338;
    }
    else {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_1e8,this);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      uVar7 = (uint)local_338;
      local_398 = local_370;
      local_3a0 = uVar23;
      local_3a8 = (uint)local_360;
      local_3b0 = (uint)local_330;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_328);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_368);
      local_390 = uVar7;
      local_388 = uVar13;
      local_380 = uVar10._4_4_;
      ::FString::PrintfImpl
                (&local_300,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_300.Data.ArrayNum != 0) {
        FVar17.Data = local_300.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_1f8);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(CopyBox.top % SourcePixelFormatInfo.BlockSizeY) == 0 && (CopyBox.bottom % SourcePixelFormatInfo.BlockSizeY) == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5d8,L"Height not aligned to block size for: \'%s\', %s\nBreadcrumbs: %s"
                        );
      if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
      }
      if (local_300.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_300.Data.AllocatorInstance.Data);
      }
      if (local_1e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar23 = local_378;
    if ((uVar7 < (uint)local_360) || ((uint)local_358 < uVar7)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_1c8,this);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_370;
      local_3a0 = uVar23;
      local_3a8 = (uint)local_360;
      local_3b0 = (uint)local_330;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_328);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_368);
      local_390 = uVar7;
      local_388 = uVar13;
      local_380 = uVar10._4_4_;
      ::FString::PrintfImpl
                (&local_2d0,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_2d0.Data.ArrayNum != 0) {
        FVar17.Data = local_2d0.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_1d8);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyBox.left <= CopyBox.right && CopyBox.right <= SubresourceWidth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5da,L"Source width out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_1d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d8.Data.AllocatorInstance.Data);
      }
      if (local_2d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2d0.Data.AllocatorInstance.Data);
      }
      if (local_1c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1c8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar23 = local_378;
    if ((uVar13 < local_378) || ((uint)local_328 < uVar13)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_1a8,this);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_370;
      local_3a0 = uVar23;
      local_3a8 = (uint)local_360;
      local_3b0 = (uint)local_330;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_328);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_368);
      local_390 = uVar7;
      local_388 = uVar13;
      local_380 = uVar10._4_4_;
      ::FString::PrintfImpl
                (&local_2c0,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_2c0.Data.ArrayNum != 0) {
        FVar17.Data = local_2c0.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_1b8);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyBox.top <= CopyBox.bottom && CopyBox.bottom <= SubresourceHeight",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5db,L"Source height out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
      }
      if (local_2c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data.AllocatorInstance.Data);
      }
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar23 = (uint)local_330;
    if ((uVar10._4_4_ < local_370) || (uVar23 < uVar10._4_4_)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_188,this);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_370;
      local_3a0 = local_378;
      local_3a8 = (uint)local_360;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_328);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_368);
      local_3b0 = uVar23;
      local_390 = uVar7;
      local_388 = uVar13;
      local_380 = uVar10._4_4_;
      ::FString::PrintfImpl
                (&local_2b0,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_2b0.Data.ArrayNum != 0) {
        FVar17.Data = local_2b0.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_198);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CopyBox.front <= CopyBox.back && CopyBox.back <= SubresourceDepth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5dc,L"Source depth out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_198.Data.AllocatorInstance.Data);
      }
      if (local_2b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0.Data.AllocatorInstance.Data);
      }
      if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_188.Data.AllocatorInstance.Data);
      }
      if (bVar6) goto code_r0x000145a5c0aa;
    }
  }
  else if ((param_6->Type == D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT) &&
          (uVar8 = GetPlacedBufferRequiredSize
                             (this,&(param_6->field2_0x10).PlacedFootprint.Footprint,
                              GPixelFormats + uVar11,param_9),
          local_80 < (uVar8 & 0xffffffff) + (param_6->field2_0x10).PlacedFootprint.Offset)) {
    pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                       (&local_228,this);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = ::FName::ToString(param_9,&local_238);
    if ((pFVar9->Data).ArrayNum == 0) {
      local_3c8 = (FScriptContainerElement *)0x15060d16c;
    }
    else {
      local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
    }
    local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)pwVar19;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SourceCopyLocation->PlacedFootprint.Offset + RequiredPlacedSize <= SourceDesc.Width"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x5e4,
                       L"Source placed buffer width out of bounds for: \'%s\'\nBreadcrumbs: %s");
    if (local_238.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_238.Data.AllocatorInstance.Data);
    }
    if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_228.Data.AllocatorInstance.Data);
    }
    if (bVar6) {
code_r0x000145a5c0aa:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pDVar20 = local_310;
  this_00 = local_350;
  if (local_310->Type == D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX) {
    local_364 = (local_310->field2_0x10).SubresourceIndex;
    uVar11 = 1;
    if (local_c8[0] != 4) {
      uVar11 = (ulonglong)local_ac;
    }
    uVar10 = (ulonglong)local_364 % (ulonglong)local_aa;
    local_370 = (uint)uVar10;
    local_368 = (uint)(((ulonglong)local_364 / (ulonglong)local_aa) % uVar11);
    local_364 = local_364 / ((int)uVar11 * (uint)local_aa);
    bVar12 = (byte)uVar10;
    if (local_308 == (D3D12_BOX *)0x0) {
      if (local_2f0->Type == D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT) {
        uVar10._4_4_ = (local_2f0->field2_0x10).PlacedFootprint.Footprint.Width;
        uVar7 = *(uint *)((longlong)&GPixelFormats[0].BlockSizeX + local_348);
        iVar22 = *(int *)((longlong)&GPixelFormats[0].BlockSizeY + local_348);
        uVar23 = (local_2f0->field2_0x10).PlacedFootprint.Footprint.Height;
        uVar13 = (local_2f0->field2_0x10).PlacedFootprint.Footprint.Depth;
      }
      else {
        uVar7 = *(uint *)((longlong)&GPixelFormats[0].BlockSizeX + local_348);
        iVar22 = *(int *)((longlong)&GPixelFormats[0].BlockSizeY + local_348);
        uVar11 = local_b8 >> (bVar12 & 0x3f);
        uVar10 = uVar11 & 0xffffffff;
        if ((int)uVar11 == 0) {
          uVar10 = 1;
        }
        uVar23 = local_b0 >> (bVar12 & 0x1f);
        uVar10._4_4_ = (int)(((uVar10 - 1) + (longlong)(int)uVar7) / (ulonglong)(longlong)(int)uVar7
                            ) * uVar7;
        uVar11 = (ulonglong)uVar23;
        if (uVar23 == 0) {
          uVar11 = 1;
        }
        uVar23 = (int)(((uVar11 - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22) * iVar22;
        iVar2 = *(int *)((longlong)&GPixelFormats[0].BlockSizeZ + local_348);
        if (local_c8[0] == 4) {
          uVar13 = (uint)(local_ac >> (bVar12 & 0x1f));
          if (uVar13 == 0) {
            uVar13 = 1;
          }
          uVar11 = (ulonglong)uVar13;
        }
        else {
          uVar11 = 1;
        }
        uVar13 = (int)(((uVar11 - 1) + (longlong)iVar2) / (ulonglong)(longlong)iVar2) * iVar2;
      }
      uVar16 = 0;
      local_374 = 0;
    }
    else {
      uVar7 = *(uint *)((longlong)&GPixelFormats[0].BlockSizeX + local_348);
      iVar22 = *(int *)((longlong)&GPixelFormats[0].BlockSizeY + local_348);
      uVar10._4_4_ = *(uint *)((longlong)&GPixelFormats[0].BlockSizeX + local_2e8);
      uVar23 = *(uint *)((longlong)&GPixelFormats[0].BlockSizeY + local_2e8);
      local_36c = (uVar7 * local_308->left) / uVar10._4_4_;
      uVar16 = (iVar22 * local_308->top) / uVar23;
      local_374 = local_308->front;
      uVar10._4_4_ = (uVar7 * local_308->right) / uVar10._4_4_;
      uVar13 = local_308->back;
      uVar23 = (iVar22 * local_308->bottom) / uVar23;
    }
    local_b8 = local_b8 >> (bVar12 & 0x3f);
    uVar11 = local_b8 & 0xffffffff;
    if ((int)local_b8 == 0) {
      uVar11 = 1;
    }
    local_358 = (ulonglong)
                ((int)(((uVar11 - 1) + (longlong)(int)uVar7) / (ulonglong)(longlong)(int)uVar7) *
                uVar7);
    local_b0 = local_b0 >> (bVar12 & 0x1f);
    if (local_b0 == 0) {
      local_b0 = 1;
    }
    local_360 = (ulonglong)
                (uint)((int)((((ulonglong)local_b0 - 1) + (longlong)iVar22) /
                            (ulonglong)(longlong)iVar22) * iVar22);
    iVar22 = *(int *)((longlong)&GPixelFormats[0].BlockSizeZ + local_348);
    if (local_c8[0] == 4) {
      uVar14 = (uint)(local_ac >> (bVar12 & 0x1f));
      if (uVar14 == 0) {
        uVar14 = 1;
      }
      uVar11 = (ulonglong)uVar14;
    }
    else {
      uVar11 = 1;
    }
    uVar14 = (int)(((uVar11 - 1) + (longlong)iVar22) / (ulonglong)(longlong)iVar22) * iVar22;
    local_378 = uVar16;
    if ((local_340 % (int)uVar7 != 0) || ((uVar10._4_4_ - local_36c) % uVar7 != 0)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_148,local_320);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_374;
      local_3a8 = local_36c;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_360);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_364);
      local_3b0 = uVar14;
      local_3a0 = uVar16;
      local_390 = uVar10._4_4_;
      local_388 = uVar23;
      local_380 = uVar13;
      ::FString::PrintfImpl
                (&local_2a0,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_2a0.Data.ArrayNum != 0) {
        FVar17.Data = local_2a0.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_158);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestX % DestPixelFormatInfo.BlockSizeX == 0 && (CopyBox.right - CopyBox.left) % DestPixelFormatInfo.BlockSizeX == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5f5,L"Width not aligned to block size for: \'%s\', %s\nBreadcrumbs: %s")
      ;
      if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data.AllocatorInstance.Data);
      }
      if (local_2a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a0.Data.AllocatorInstance.Data);
      }
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar16 = local_378;
    uVar7 = *(uint *)((longlong)&GPixelFormats[0].BlockSizeY + local_348);
    if ((local_33c % (int)uVar7 != 0) || ((uVar23 - local_378) % uVar7 != 0)) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_128,local_320);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_374;
      local_3a0 = uVar16;
      local_3a8 = local_36c;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_360);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_364);
      local_3b0 = uVar14;
      local_390 = uVar10._4_4_;
      local_388 = uVar23;
      local_380 = uVar13;
      ::FString::PrintfImpl
                (&local_290,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_290.Data.ArrayNum != 0) {
        FVar17.Data = local_290.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_138);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestY % DestPixelFormatInfo.BlockSizeY == 0 && (CopyBox.bottom - CopyBox.top) % DestPixelFormatInfo.BlockSizeY == 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5f6,L"Height not aligned to block size for: \'%s\', %s\nBreadcrumbs: %s"
                        );
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      if (local_290.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Data.AllocatorInstance.Data);
      }
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = local_378;
    if ((uint)local_358 < (local_340 - local_36c) + uVar10._4_4_) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_108,local_320);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_374;
      local_3a0 = uVar7;
      local_3a8 = local_36c;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_360);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_364);
      local_3b0 = uVar14;
      local_390 = uVar10._4_4_;
      local_388 = uVar23;
      local_380 = uVar13;
      ::FString::PrintfImpl
                (&local_280,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_280.Data.ArrayNum != 0) {
        FVar17.Data = local_280.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_118);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestX + (CopyBox.right - CopyBox.left) <= SubresourceWidth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5f8,L"Dest width out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_118.Data.AllocatorInstance.Data);
      }
      if (local_280.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_280.Data.AllocatorInstance.Data);
      }
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar7 = local_378;
    uVar16 = (uint)local_360;
    if (uVar16 < (local_33c - local_378) + uVar23) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_e8,local_320);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_374;
      local_3a0 = uVar7;
      local_3a8 = local_36c;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,(int)local_360);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_364);
      local_3b0 = uVar14;
      local_390 = uVar10._4_4_;
      local_388 = uVar23;
      local_380 = uVar13;
      ::FString::PrintfImpl
                (&local_270,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_270.Data.ArrayNum != 0) {
        FVar17.Data = local_270.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_f8);
      if ((pFVar9->Data).ArrayNum == 0) {
        local_3c8 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_3c8 = (pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestY + (CopyBox.bottom - CopyBox.top) <= SubresourceHeight",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5f9,L"Dest height out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (local_270.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_270.Data.AllocatorInstance.Data);
      }
      if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e8.Data.AllocatorInstance.Data);
      }
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar16 = (uint)local_360;
    }
    pDVar20 = local_310;
    if (uVar14 < (uVar13 - local_374) + param_4) {
      pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                         (&local_250,local_320);
      if ((pFVar9->Data).ArrayNum == 0) {
        pwVar19 = L"";
      }
      else {
        pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_398 = local_374;
      local_3a0 = local_378;
      local_3a8 = local_36c;
      local_3b8 = (D3D12_BOX *)CONCAT44(local_3b8._4_4_,uVar16);
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)CONCAT44(local_3c0._4_4_,(int)local_358);
      local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,local_364);
      local_3b0 = uVar14;
      local_390 = uVar10._4_4_;
      local_388 = uVar23;
      local_380 = uVar13;
      ::FString::PrintfImpl
                (&local_260,
                 L"Subresource (Mip: %u, Slice: %u, Plane: %u) with dimensions [%u, %u, %u], copying from [%u, %u, %u] to [%u, %u, %u]"
                );
      FVar17.Data = (FScriptContainerElement *)L"";
      if (local_260.Data.ArrayNum != 0) {
        FVar17.Data = local_260.Data.AllocatorInstance.Data;
      }
      pFVar9 = ::FName::ToString(local_350,&local_d8);
      if ((pFVar9->Data).ArrayNum != 0) {
        pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
      }
      local_3c8 = (FScriptContainerElement *)pwVar15;
      local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)FVar17.Data;
      local_3b8 = (D3D12_BOX *)pwVar19;
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("DestZ + (CopyBox.back - CopyBox.front) <= SubresourceDepth",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                         ,0x5fa,L"Dest depth out of bounds for: \'%s\', %s\nBreadcrumbs: %s");
      if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.Data.AllocatorInstance.Data);
      }
      if (local_260.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Data.AllocatorInstance.Data);
      }
      if (local_250.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_250.Data.AllocatorInstance.Data);
      }
      pDVar20 = local_310;
      if (bVar6) goto code_r0x000145a5ca1f;
    }
  }
  else if ((local_310->Type == D3D12_TEXTURE_COPY_TYPE_PLACED_FOOTPRINT) &&
          (uVar8 = GetPlacedBufferRequiredSize
                             (this,&(local_310->field2_0x10).PlacedFootprint.Footprint,local_318,
                              local_350),
          local_b8 < (uVar8 & 0xffffffff) + (pDVar20->field2_0x10).PlacedFootprint.Offset)) {
    pFVar9 = UE::RHI::Breadcrumbs::Private::GetSafeBreadcrumbPath<FD3D12CommandContext_&>
                       (&local_168,this);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar19 = L"";
    }
    else {
      pwVar19 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    pFVar9 = ::FName::ToString(this_00,&local_178);
    if ((pFVar9->Data).ArrayNum != 0) {
      pwVar15 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    local_3c8 = (FScriptContainerElement *)pwVar15;
    local_3c0 = (D3D12_TEXTURE_COPY_LOCATION *)pwVar19;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("DestCopyLocation->PlacedFootprint.Offset + RequiredPlacedSize <= DestDesc.Width"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                       ,0x602,L"Dest placed buffer width out of bounds for: \'%s\'\nBreadcrumbs: %s"
                      );
    if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data.AllocatorInstance.Data);
    }
    if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_168.Data.AllocatorInstance.Data);
    }
    pDVar20 = local_310;
    if (bVar6) {
code_r0x000145a5ca1f:
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar5 = local_320;
  if (*(longlong *)&local_320->field_0x188 == 0) {
    (**(code **)(*(longlong *)local_320 + 8))(local_320);
  }
  plVar3 = *(longlong **)(*(longlong *)&pFVar5->field_0x188 + 0x28);
  piVar1 = (int *)(*(longlong *)&pFVar5->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  local_3b8 = local_308;
  local_3c0 = local_2f0;
  local_3c8 = (FScriptContainerElement *)CONCAT44(local_3c8._4_4_,param_4);
  (**(code **)(*plVar3 + 0x80))(plVar3,pDVar20,local_340,local_33c);
  return;
}

// RHICopyTexture @ 145a721f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHICopyTexture
          (FD3D12CommandContext *this,FRHITexture *param_1,FRHITexture *param_2,
          FRHICopyTextureInfo *param_3)

{
  FD3D12CommandContext *this_00;
  int *piVar1;
  byte bVar2;
  char cVar3;
  EPixelFormat EVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  FD3D12Resource *pFVar10;
  longlong *plVar11;
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  undefined1 auVar14 [12];
  code *pcVar15;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  bool bVar19;
  bool bVar20;
  bool bVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  uint *puVar26;
  longlong lVar27;
  ID3D12Device *pIVar28;
  byte bVar29;
  byte bVar30;
  short sVar31;
  FRHITexture *pFVar32;
  int iVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  longlong *plVar37;
  uint uVar38;
  ushort uVar39;
  uint uVar40;
  longlong *plVar41;
  uint uVar42;
  bool bVar43;
  undefined1 auStackY_228 [32];
  int local_1d4;
  uint local_1c0;
  ED3D12Access local_1bc;
  ED3D12Access local_1b8;
  undefined8 local_1a0;
  FName local_128;
  int *local_120;
  uint local_118;
  FD3D12Resource *local_110;
  FD3D12Resource *local_108;
  D3D12_TEXTURE_COPY_LOCATION local_100;
  D3D12_TEXTURE_COPY_LOCATION local_d0;
  D3D12_BOX local_a0;
  int local_88 [4];
  longlong local_78;
  undefined4 local_70;
  undefined2 local_6c;
  ushort local_6a;
  uint local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar22 = 0;
  bVar43 = *(int *)&this->field_0x138 != 0;
  if (bVar43) {
    for (; (*(uint *)&this->field_0x138 >> uVar22 & 1) == 0; uVar22 = uVar22 + 1) {
    }
  }
  this_00 = (FD3D12CommandContext *)(this[-1].StageConstantBuffers + 1);
  uVar23 = 0x20;
  if (bVar43) {
    uVar23 = uVar22;
  }
  if ((param_1 == (FRHITexture *)0x0) ||
     (lVar25 = (**(code **)(param_1->_padding_ + 0x48))(param_1), lVar25 == 0)) {
    plVar41 = (longlong *)0x0;
  }
  else {
    plVar41 = *(longlong **)(lVar25 + 0x200 + (ulonglong)uVar23 * 8);
  }
  local_118 = 0;
  bVar43 = *(int *)&this->field_0x138 != 0;
  if (bVar43) {
    for (; (*(uint *)&this->field_0x138 >> local_118 & 1) == 0; local_118 = local_118 + 1) {
    }
  }
  uVar22 = 0x20;
  if (bVar43) {
    uVar22 = local_118;
  }
  if ((param_2 == (FRHITexture *)0x0) ||
     (lVar25 = (**(code **)(param_2->_padding_ + 0x48))(param_2), lVar25 == 0)) {
    plVar37 = (longlong *)0x0;
  }
  else {
    plVar37 = *(longlong **)(lVar25 + 0x200 + (ulonglong)uVar22 * 8);
  }
  pFVar10 = (FD3D12Resource *)plVar41[0x32];
  local_1b8 = Unknown;
  bVar43 = false;
  local_108 = pFVar10;
  if (!pFVar10->bRequiresResourceStateTracking) {
    local_1b8 = pFVar10->DefaultD3D12Access;
    if ((((local_1b8 & ReadOnlyExclusiveMask) == Unknown) || ((local_1b8 & WritableMask) == Unknown)
        ) && (((local_1b8 & WriteOnlyExclusiveMask) == Unknown ||
              ((local_1b8 & ReadableMask) == Unknown)))) {
      if ((local_1b8 >> 0x14 & 1) == 0) goto LAB_145a72329;
      if ((local_1b8 == Unknown) || ((local_1b8 & local_1b8 - CPURead) != Unknown))
      goto LAB_145a72303;
    }
    else {
LAB_145a72303:
      bVar43 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidAccess(BeforeD3D12Access)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                          ,0x2ed,L"");
      if (bVar43) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
LAB_145a72329:
      if ((local_1b8 == Unknown) &&
         (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                             ("BeforeD3D12Access != ED3D12Access::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                              ,0x2ee,L""), bVar43)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_00,pFVar10,local_1b8,CopySrc,0xffffffff);
    bVar43 = true;
  }
  pFVar10 = (FD3D12Resource *)plVar37[0x32];
  local_1bc = Unknown;
  bVar20 = false;
  local_110 = pFVar10;
  if (!pFVar10->bRequiresResourceStateTracking) {
    local_1bc = pFVar10->DefaultD3D12Access;
    if ((((local_1bc & ReadOnlyExclusiveMask) == Unknown) || ((local_1bc & WritableMask) == Unknown)
        ) && (((local_1bc & WriteOnlyExclusiveMask) == Unknown ||
              ((local_1bc & ReadableMask) == Unknown)))) {
      if ((local_1bc >> 0x14 & 1) == 0) goto LAB_145a723fa;
      if ((local_1bc == Unknown) || ((local_1bc & local_1bc - CPURead) != Unknown))
      goto LAB_145a723d4;
    }
    else {
LAB_145a723d4:
      bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValidAccess(BeforeD3D12Access)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                          ,0x2ed,L"");
      if (bVar20) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
LAB_145a723fa:
      if ((local_1bc == Unknown) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("BeforeD3D12Access != ED3D12Access::Unknown",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                              ,0x2ee,L""), bVar20)) {
        pcVar15 = (code *)swi(3);
        (*pcVar15)();
        return;
      }
    }
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_00,pFVar10,local_1bc,CopyDest,0xffffffff);
    bVar20 = true;
  }
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_00);
  puVar26 = (uint *)(**(code **)(param_2->_padding_ + 0x20))(param_2);
  uVar22 = *puVar26 & 0x80000;
  lVar25 = (**(code **)(param_1->_padding_ + 0x20))();
  lVar27 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  if ((*(char *)(lVar25 + 0x32) == '\x03') || (*(char *)(lVar25 + 0x32) == '\x04')) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  sVar31 = 1;
  if (bVar21) {
    sVar31 = 6;
  }
  uVar39 = sVar31 * *(short *)(lVar25 + 0x2e);
  if ((*(char *)(lVar27 + 0x32) == '\x03') || (*(char *)(lVar27 + 0x32) == '\x04')) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  sVar31 = 1;
  if (bVar21) {
    sVar31 = 6;
  }
  iVar33 = *(int *)(lVar25 + 0x28);
  iVar24 = *(int *)(lVar25 + 0x24);
  uVar23 = (uint)*(ushort *)(lVar25 + 0x2c);
  if ((((iVar24 == *(int *)(lVar27 + 0x24)) && (iVar33 == *(int *)(lVar27 + 0x28))) &&
      (uVar23 == *(ushort *)(lVar27 + 0x2c))) &&
     ((((iVar5 = (param_3->Size).field0_0x0._s_0.X,
        iVar5 == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X &&
        ((param_3->Size).field0_0x0._s_0.Y ==
         UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
       ((param_3->Size).field0_0x0._s_0.Z == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z
       )) || (((iVar5 == iVar24 && ((param_3->Size).field0_0x0._s_0.Y == iVar33)) &&
              ((param_3->Size).field0_0x0._s_0.Z == uVar23)))))) {
    bVar21 = true;
  }
  else {
    bVar21 = false;
  }
  if ((((*(byte *)(lVar25 + 0x30) == *(byte *)(lVar27 + 0x30)) &&
       ((uint)*(byte *)(lVar25 + 0x30) == param_3->NumMips)) &&
      (uVar39 == (ushort)(sVar31 * *(short *)(lVar27 + 0x2e)))) &&
     ((uint)uVar39 == param_3->NumSlices)) {
    bVar19 = true;
  }
  else {
    bVar19 = false;
  }
  if (((bVar21) && (bVar19)) && (uVar22 == 0)) {
    if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
      (**(code **)(*(longlong *)this_00 + 8))(this_00);
    }
    lVar25 = *(longlong *)&this[-1].RayTracingShaderTables.field_0x70;
    plVar11 = *(longlong **)(lVar25 + 0x28);
    piVar1 = (int *)(lVar25 + 0x168);
    *piVar1 = *piVar1 + 1;
    (**(code **)(*plVar11 + 0x88))
              (plVar11,*(undefined8 *)(plVar37[0x32] + 0x20),*(undefined8 *)(plVar41[0x32] + 0x20));
    goto LAB_145a72b3e;
  }
  if ((((param_3->Size).field0_0x0._s_0.X == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.X
       ) && ((param_3->Size).field0_0x0._s_0.Y ==
             UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Y)) &&
     ((param_3->Size).field0_0x0._s_0.Z == UE::Math::TIntVector3<int>::ZeroValue.field0_0x0._s_0.Z))
  {
    bVar29 = (byte)param_3->SourceMipIndex;
    iVar24 = iVar24 >> (bVar29 & 0x1f);
    local_1d4 = (int)uVar23 >> (bVar29 & 0x1f);
    local_1a0 = CONCAT44(iVar33 >> (bVar29 & 0x1f),iVar24);
  }
  else {
    local_1d4 = (param_3->Size).field0_0x0._s_0.Z;
    local_1a0 = *(undefined8 *)&(param_3->Size).field0_0x0;
    iVar24 = (int)local_1a0;
  }
  local_d0.pResource = *(ID3D12Resource **)(plVar41[0x32] + 0x20);
  local_d0.Type = D3D12_TEXTURE_COPY_TYPE_SUBRESOURCE_INDEX;
  local_100.pResource = *(ID3D12Resource **)(plVar37[0x32] + 0x20);
  local_100.Type = (D3D12_TEXTURE_COPY_TYPE)(uVar22 != 0);
  lVar25 = (**(code **)(param_1->_padding_ + 0x20))();
  bVar29 = *(byte *)(lVar25 + 0x33);
  lVar25 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  bVar2 = *(byte *)(lVar25 + 0x33);
  local_88[1] = 0;
  local_88[2] = 0;
  local_88[3] = 0;
  local_60 = 0;
  uStack_58 = 0;
  lVar25 = (**(code **)(param_2->_padding_ + 0x20))();
  cVar3 = *(char *)(lVar25 + 0x32);
  if (cVar3 == '\0') {
LAB_145a726db:
    local_6c = 1;
LAB_145a726e1:
    iVar33 = *(int *)(lVar25 + 0x24);
    local_70 = *(undefined4 *)(lVar25 + 0x28);
  }
  else {
    if (cVar3 == '\x01') {
LAB_145a726cd:
      local_6c = *(undefined2 *)(lVar25 + 0x2e);
      goto LAB_145a726e1;
    }
    if (cVar3 == '\x02') {
      local_6c = *(undefined2 *)(lVar25 + 0x2c);
      goto LAB_145a726e1;
    }
    if (cVar3 == '\x03') goto LAB_145a726db;
    if (cVar3 == '\x04') goto LAB_145a726cd;
    iVar33 = 0;
    local_70 = 0;
    local_6c = 0;
  }
  pFVar32 = (FRHITexture *)0x0;
  if ((param_2->TextureDesc).Dimension == Texture3D) {
    pFVar32 = param_2;
  }
  local_88[0] = (pFVar32 != (FRHITexture *)0x0) + 3;
  local_78 = (longlong)iVar33;
  lVar25 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_68 = GPixelFormats[bVar2].PlatformFormat;
  local_6a = (ushort)*(byte *)(lVar25 + 0x30);
  lVar25 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
  local_64 = (uint)*(byte *)(lVar25 + 0x31);
  local_1c0 = 0;
  if (param_3->NumSlices != 0) {
    do {
      uVar23 = param_3->SourceSliceIndex;
      uVar42 = 0;
      uVar6 = param_3->DestSliceIndex;
      if (param_3->NumMips != 0) {
        local_120 = &GPixelFormats[bVar29].BlockSizeX;
        do {
          uVar38 = *local_120;
          uVar7 = param_3->DestMipIndex;
          uVar8 = param_3->SourceMipIndex;
          bVar30 = (byte)uVar42;
          uVar34 = iVar24 + (param_3->SourcePosition).field0_0x0._s_0.X >> (bVar30 & 0x1f);
          local_a0.left = (param_3->SourcePosition).field0_0x0._s_0.X >> (bVar30 & 0x1f);
          local_a0.top = (param_3->SourcePosition).field0_0x0._s_0.Y >> (bVar30 & 0x1f);
          local_a0.front = (param_3->SourcePosition).field0_0x0._s_0.Z >> (bVar30 & 0x1f);
          uVar9 = 1;
          if (1 < uVar34) {
            uVar9 = uVar34;
          }
          auVar12._8_4_ = 0;
          auVar12._0_8_ = (longlong)(int)uVar38;
          auVar16._8_4_ = 0 >> (bVar30 & 0x1f);
          auVar16._0_8_ = ((ulonglong)uVar9 - 1) + (longlong)(int)uVar38;
          local_a0.right = SUB124(auVar16 / auVar12,0) * uVar38;
          uVar35 = (int)((ulonglong)local_1a0 >> 0x20) + (param_3->SourcePosition).field0_0x0._s_0.Y
                   >> (bVar30 & 0x1f);
          uVar9 = GPixelFormats[bVar29].BlockSizeY;
          uVar34 = 1;
          if (1 < uVar35) {
            uVar34 = uVar35;
          }
          auVar13._8_4_ = 0;
          auVar13._0_8_ = (longlong)(int)uVar9;
          auVar17._8_4_ = 0 >> (bVar30 & 0x1f);
          auVar17._0_8_ = ((ulonglong)uVar34 - 1) + (longlong)(int)uVar9;
          local_a0.bottom = SUB124(auVar17 / auVar13,0) * uVar9;
          uVar36 = local_1d4 + (param_3->SourcePosition).field0_0x0._s_0.Z >> (bVar30 & 0x1f);
          uVar34 = GPixelFormats[bVar29].BlockSizeZ;
          uVar35 = 1;
          if (1 < uVar36) {
            uVar35 = uVar36;
          }
          uVar40 = (param_3->DestPosition).field0_0x0._s_0.Y >> (bVar30 & 0x1f);
          auVar14._8_4_ = 0;
          auVar14._0_8_ = (longlong)(int)uVar34;
          auVar18._8_4_ = 0 >> (bVar30 & 0x1f);
          auVar18._0_8_ = ((ulonglong)uVar35 - 1) + (longlong)(int)uVar34;
          local_a0.back = SUB124(auVar18 / auVar14,0) * uVar34;
          uVar35 = (param_3->DestPosition).field0_0x0._s_0.X >> (bVar30 & 0x1f);
          uVar36 = (param_3->DestPosition).field0_0x0._s_0.Z >> (bVar30 & 0x1f);
          if ((((local_a0.left % uVar38 != 0) || (local_a0.top % uVar9 != 0)) ||
              (local_a0.front % uVar34 != 0)) &&
             (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1941583375391257518>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                                  ,0xc52,
                                  "SrcBox.left % SourcePixelFormatInfo.BlockSizeX == 0 && SrcBox.top % SourcePixelFormatInfo.BlockSizeY == 0 && SrcBox.front % SourcePixelFormatInfo.BlockSizeZ == 0"
                                 ), bVar21)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          if ((((uVar35 % (uint)GPixelFormats[bVar2].BlockSizeX != 0) ||
               (uVar40 % (uint)GPixelFormats[bVar2].BlockSizeY != 0)) ||
              (uVar36 % (uint)GPixelFormats[bVar2].BlockSizeZ != 0)) &&
             (bVar21 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_1941583375391257517>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                                  ,0xc53,
                                  "DestX % DestPixelFormatInfo.BlockSizeX == 0 && DestY % DestPixelFormatInfo.BlockSizeY == 0 && DestZ % DestPixelFormatInfo.BlockSizeZ == 0"
                                 ), bVar21)) {
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          lVar25 = (**(code **)(param_1->_padding_ + 0x20))();
          local_d0.field2_0x10.SubresourceIndex =
               (uint)*(byte *)(lVar25 + 0x30) * (uVar23 + local_1c0) + uVar8 + uVar42;
          lVar25 = (**(code **)(param_2->_padding_ + 0x20))(param_2);
          uVar38 = (uint)*(byte *)(lVar25 + 0x30) * (uVar6 + local_1c0) + uVar7 + uVar42;
          local_100.field2_0x10.SubresourceIndex = uVar38;
          if (uVar22 != 0) {
            if ((*(longlong *)&this->field_0x140 == 0) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Parent != nullptr",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                                    ,0x59,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
            pIVar28 = FD3D12Device::GetDevice(*(FD3D12Device **)&this->field_0x140);
            if (uVar38 != 0) {
              (**(code **)((longlong)*pIVar28 + 0x130))(pIVar28,local_88,0,uVar38);
            }
            (**(code **)((longlong)*pIVar28 + 0x130))(pIVar28,local_88,uVar38,1);
            if (((local_100.field2_0x10.PlacedFootprint.Footprint.Width == 0) ||
                (local_100.field2_0x10.PlacedFootprint.Footprint.Height == 0)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("OutFootprint.Footprint.Width > 0 && OutFootprint.Footprint.Height > 0"
                                    ,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.cpp"
                                    ,0x999,L""), bVar21)) {
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          local_128 = *(FName *)(plVar41 + 3);
          lVar25 = (**(code **)(*plVar41 + 0x20))(plVar41);
          EVar4 = *(EPixelFormat *)(lVar25 + 0x33);
          lVar25 = (**(code **)(*plVar37 + 0x20))(plVar37);
          CopyTextureRegionChecked
                    (this_00,&local_100,uVar35,uVar40,uVar36,*(EPixelFormat *)(lVar25 + 0x33),
                     &local_d0,&local_a0,EVar4,&local_128);
          uVar42 = uVar42 + 1;
        } while (uVar42 < param_3->NumMips);
      }
      local_1c0 = local_1c0 + 1;
    } while (local_1c0 < param_3->NumSlices);
  }
LAB_145a72b3e:
  pFVar10 = (FD3D12Resource *)plVar41[0x32];
  if ((pFVar10 == (FD3D12Resource *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  FD3D12CommandList::UpdateResidency
            (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar10);
  pFVar10 = (FD3D12Resource *)plVar37[0x32];
  if ((pFVar10 == (FD3D12Resource *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar21)) {
    pcVar15 = (code *)swi(3);
    (*pcVar15)();
    return;
  }
  if (*(longlong *)&this[-1].RayTracingShaderTables.field_0x70 == 0) {
    (**(code **)(*(longlong *)this_00 + 8))(this_00);
  }
  FD3D12CommandList::UpdateResidency
            (*(FD3D12CommandList **)&this[-1].RayTracingShaderTables.field_0x70,pFVar10);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_00);
  if (bVar20) {
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_00,local_110,CopyDest,local_1bc,0xffffffff);
  }
  if (bVar43) {
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_00,local_108,CopySrc,local_1b8,0xffffffff);
  }
  return;
}

// RHISetMultipleViewports @ 145a79070

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHISetMultipleViewports
          (FD3D12CommandContext *this,uint param_1,FViewportBounds *param_2)

{
  FD3D12StateCache::SetViewports
            ((FD3D12StateCache *)&this->field_0x1f0,param_1,(D3D12_VIEWPORT *)param_2);
  return;
}

// ResolveTexture @ 145a7bd80

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::ResolveTexture(FD3D12CommandContext *this,FResolveTextureInfo *param_1)

{
  int *piVar1;
  int iVar2;
  FD3D12DepthStencilView *pFVar3;
  FD3D12Resource *pFVar4;
  longlong *plVar5;
  FD3D12Resource *pFVar6;
  code *pcVar7;
  uint uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  FD3D12RenderTargetView *pFVar12;
  ED3D12Access EVar13;
  ulonglong uVar14;
  uint uVar15;
  FD3D12Texture *this_00;
  FD3D12Texture *pFVar16;
  bool bVar17;
  uint local_res8;
  FDummyResolveParameter local_res10;
  uint local_res20;
  FResolveRect local_70;
  FResolveRect local_60 [2];
  
  uVar8 = 0;
  bVar17 = *(int *)&this->field_0x2f8 != 0;
  if (bVar17) {
    for (; (*(uint *)&this->field_0x2f8 >> uVar8 & 1) == 0; uVar8 = uVar8 + 1) {
    }
  }
  uVar14 = 0x20;
  if (bVar17) {
    uVar14 = (ulonglong)uVar8;
  }
  this_00 = (FD3D12Texture *)0x0;
  pFVar16 = this_00;
  if (param_1->SourceTexture != (FRHITexture *)0x0) {
    lVar9 = (**(code **)(param_1->SourceTexture->_padding_ + 0x48))();
    pFVar16 = (FD3D12Texture *)0x0;
    if (((lVar9 != 0) &&
        (pFVar16 = *(FD3D12Texture **)(lVar9 + 0x200 + uVar14 * 8), pFVar16 == (FD3D12Texture *)0x0)
        ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Result",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                                  ,0x100,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar9 = (**(code **)(pFVar16->_padding_ + 0x20))(pFVar16);
  if (param_1->DestTexture != (FRHITexture *)0x0) {
    lVar10 = (**(code **)(param_1->DestTexture->_padding_ + 0x48))();
    this_00 = (FD3D12Texture *)0x0;
    if (((lVar10 != 0) &&
        (this_00 = *(FD3D12Texture **)(lVar10 + 0x200 + uVar14 * 8), this_00 == (FD3D12Texture *)0x0
        )) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Result",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Texture.h"
                                   ,0x100,L""), bVar17)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  lVar10 = this_00->_padding_;
  lVar11 = (**(code **)(this_00->_padding_ + 0x20))(this_00);
  if (*(char *)(lVar9 + 0x33) != '\v') {
    uVar8 = GPixelFormats[*(byte *)(lVar11 + 0x33)].PlatformFormat;
    if (uVar8 == 0x1b) {
      local_res8 = 0x1c;
    }
    else {
      local_res8 = 0x57;
      if (uVar8 != 0x5a) {
        local_res8 = uVar8;
      }
    }
    iVar2 = param_1->ArraySlice;
    local_res20 = iVar2 + 1;
    if (iVar2 < 0) {
      local_res20 = (uint)*(ushort *)(lVar9 + 0x2e);
      iVar2 = 0;
    }
    for (; iVar2 < (int)local_res20; iVar2 = iVar2 + 1) {
      uVar8 = (uint)*(byte *)(lVar9 + 0x30) * iVar2 + (uint)param_1->MipLevel;
      uVar15 = (uint)*(byte *)(lVar11 + 0x30) * iVar2 + (uint)param_1->MipLevel;
      pFVar6 = (FD3D12Resource *)pFVar16->_padding_;
      FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)this,pFVar6,RTV,ResolveSrc,uVar8);
      pFVar4 = (FD3D12Resource *)this_00->_padding_;
      EVar13 = Unknown;
      bVar17 = false;
      if (!pFVar4->bRequiresResourceStateTracking) {
        EVar13 = pFVar4->DefaultD3D12Access;
        if ((((EVar13 & ReadOnlyExclusiveMask) == Unknown) || ((EVar13 & WritableMask) == Unknown))
           && (((EVar13 & WriteOnlyExclusiveMask) == Unknown || ((EVar13 & ReadableMask) == Unknown)
               ))) {
          if ((EVar13 >> 0x14 & 1) == 0) goto LAB_145a7c0a1;
          if ((EVar13 == Unknown) || ((EVar13 & EVar13 - CPURead) != Unknown)) goto LAB_145a7c07b;
        }
        else {
LAB_145a7c07b:
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValidAccess(BeforeD3D12Access)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                              ,0x2ed,L"");
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
LAB_145a7c0a1:
          if ((EVar13 == Unknown) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("BeforeD3D12Access != ED3D12Access::Unknown",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHIPrivate.h"
                                  ,0x2ee,L""), bVar17)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)this,pFVar4,EVar13,ResolveDst,uVar15)
        ;
        bVar17 = true;
      }
      FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this);
      if (*(longlong *)&this->field_0x188 == 0) {
        (**(code **)(*(longlong *)this + 8))(this);
      }
      plVar5 = *(longlong **)(*(longlong *)&this->field_0x188 + 0x28);
      piVar1 = (int *)(*(longlong *)&this->field_0x188 + 0x168);
      *piVar1 = *piVar1 + 1;
      (**(code **)(*plVar5 + 0x98))
                (plVar5,*(undefined8 *)(lVar10 + 0x20),uVar15,
                 *(undefined8 *)(pFVar16->_padding_ + 0x20),uVar8,local_res8);
      if (bVar17) {
        FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)this,pFVar4,ResolveDst,EVar13,uVar15)
        ;
      }
      FD3D12ContextCommon::AddBarrier((FD3D12ContextCommon *)this,pFVar6,ResolveSrc,RTV,uVar8);
    }
    goto LAB_145a7c1ac;
  }
  iVar2 = (param_1->ResolveRect).X1;
  local_70._8_8_ = *(undefined8 *)(lVar11 + 0x24);
  if ((((iVar2 < 0) || ((param_1->ResolveRect).X2 < 0)) || ((param_1->ResolveRect).Y1 < 0)) ||
     ((param_1->ResolveRect).Y2 < 0)) {
    local_60[0].X2 = *(int *)(lVar9 + 0x24);
    local_60[0].Y2 = *(int *)(lVar9 + 0x28);
    local_70.X1 = 0;
    local_70.Y1 = 0;
    if (-1 < iVar2) goto LAB_145a7bee0;
LAB_145a7bf05:
    local_60[0].X1 = 0;
    local_60[0].Y1 = 0;
  }
  else {
    local_70.X1 = (param_1->ResolveRect).X1;
    local_70.Y1 = (param_1->ResolveRect).Y1;
    local_70.X2 = (param_1->ResolveRect).X2;
    local_70.Y2 = (param_1->ResolveRect).Y2;
    local_60[0].Y2 = *(int *)(lVar9 + 0x28);
    local_60[0].X2 = *(int *)(lVar9 + 0x24);
LAB_145a7bee0:
    if ((((param_1->ResolveRect).X2 < 0) || ((param_1->ResolveRect).Y1 < 0)) ||
       ((param_1->ResolveRect).Y2 < 0)) goto LAB_145a7bf05;
    local_60[0].X1 = (param_1->ResolveRect).X1;
    local_60[0].Y1 = (param_1->ResolveRect).Y1;
    local_60[0].X2 = (param_1->ResolveRect).X2;
    local_60[0].Y2 = (param_1->ResolveRect).Y2;
  }
  pFVar3 = this_00->DepthStencilViews[0].Object;
  pFVar12 = FD3D12Texture::GetRenderTargetView(this_00,0,-1);
  local_res10 = SUB81(param_1,0);
  ResolveTextureUsingShader<FResolveDepthPS>
            (this,pFVar16,this_00,pFVar12,pFVar3,(D3D12_RESOURCE_DESC *)(lVar10 + 0x50),local_60,
             &local_70,local_res10);
LAB_145a7c1ac:
  pFVar6 = (FD3D12Resource *)pFVar16->_padding_;
  if ((pFVar6 == (FD3D12Resource *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar6);
  pFVar6 = (FD3D12Resource *)this_00->_padding_;
  if ((pFVar6 == (FD3D12Resource *)0x0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("Resource",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                          ,0x1a5,L""), bVar17)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (*(longlong *)&this->field_0x188 == 0) {
    (**(code **)(*(longlong *)this + 8))(this);
  }
  FD3D12CommandList::UpdateResidency(*(FD3D12CommandList **)&this->field_0x188,pFVar6);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this);
  return;
}

// operator() @ 145a97610

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  FRHIShader *pFVar4;
  FAllocatedConstantBuffer *pFVar5;
  code *pcVar6;
  undefined4 uVar7;
  bool bVar8;
  uint uVar9;
  FRHIShaderBundleGraphicsDispatch *pFVar10;
  FD3D12RootSignature *pFVar11;
  ulonglong uVar12;
  uint uVar13;
  ulonglong *puVar14;
  FRHIShader *pFVar15;
  longlong lVar16;
  uint uVar17;
  FRHIShader *pFVar18;
  TArrayView<unsigned_int,int> local_68;
  TArrayView<unsigned_int,int> local_58;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  uVar13 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar10 = TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>::operator[]
                      (*(TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> **)
                        ((longlong)this + 0x28),*(int *)(*plVar3 + (longlong)param_2 * 4));
  if (pFVar10->RecordIndex == 0xffffffff) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dispatch.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x4a9,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar13 = param_2 + 1;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (((int)uVar13 < 0) || (*(int *)(*plVar3 + 0x70) <= (int)uVar13)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline->RootArgOffsets.IsValidIndex(ShaderTableIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x4ac,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar16 = *plVar3;
  uVar17 = 0;
  if ((int)uVar13 < *(int *)(lVar16 + 0x70)) {
    uVar17 = ~uVar13 >> 0x1f;
  }
  if (uVar17 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar1 = *(int *)(*(longlong *)(lVar16 + 0x68) + (longlong)(int)uVar13 * 4);
  if (*(uint *)(*(longlong *)((longlong)this + 8) + 0x10) <
      (*(uint *)(*plVar3 + 0x60) >> 2) * (iVar1 + 1)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Pipeline->RootArgStrideInBytes / 4) * (RootArgOffset + 1) <= (uint32)LocalRootArgs.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x4ae,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar16 = *(longlong *)this;
  pFVar4 = (FRHIShader *)(pFVar10->PipelineInitializer).BoundShaderState.WorkGraphMeshShaderRHI;
  pFVar18 = (FRHIShader *)(pFVar10->PipelineInitializer).BoundShaderState.PixelShaderRHI;
  if (*(longlong *)(lVar16 + 0x2f0) == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ParentAdapter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x41,L"");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar11 = FD3D12Adapter::GetWorkGraphGraphicsRootSignature
                      (*(FD3D12Adapter **)(lVar16 + 0x2f0),
                       &(pFVar10->PipelineInitializer).BoundShaderState);
  puVar14 = (ulonglong *)(*(longlong *)((longlong)this + 8) + 8);
  uVar13 = *(uint *)(*plVar3 + 0x60);
  uVar17 = uVar13 * iVar1 >> 2;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x10) <= (int)uVar17) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar7 = local_58._12_4_;
  uVar12 = *puVar14;
  if ((uVar12 & 1) != 0) {
    uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar14;
  }
  pFVar5 = *(FAllocatedConstantBuffer **)((longlong)this + 0x38);
  if ((pFVar10->Parameters_PS).bIsSet == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar15 = pFVar18 + 1;
  if (pFVar18 == (FRHIShader *)0x0) {
    pFVar15 = (FRHIShader *)0x0;
  }
  lVar16 = *(longlong *)((longlong)this + 0x30);
  uVar2 = param_1->WorkerIndex;
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(lVar16 + 0x248)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_68._12_4_ = uVar7;
  local_68.ArrayNum = uVar13 >> 2;
  if (*(longlong *)(lVar16 + 0x240) != 0) {
    lVar16 = *(longlong *)(lVar16 + 0x240);
  }
  local_68.DataPtr = (uint *)(uVar12 + (ulonglong)uVar17 * 4);
  RecordBindings(*(FD3D12CommandContext **)this,SF_Pixel,
                 *(FD3D12ExplicitDescriptorCache **)((longlong)this + 0x18),
                 (FShaderBundleBinderOps *)((longlong)(int)uVar2 * 0x90 + lVar16),uVar2,pFVar18,
                 (FD3D12ShaderData *)pFVar15,&(pFVar10->Parameters_PS).TypedValue,pFVar11,pFVar5,
                 &pFVar10->Constants,&local_68);
  puVar14 = (ulonglong *)(*(longlong *)((longlong)this + 8) + 8);
  uVar13 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 0x60);
  uVar17 = uVar13 * iVar1 >> 2;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x10) <= (int)uVar17) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  uVar12 = *puVar14;
  if ((uVar12 & 1) != 0) {
    uVar12 = ((longlong)uVar12 >> 0x18) + (longlong)puVar14;
  }
  pFVar5 = *(FAllocatedConstantBuffer **)((longlong)this + 0x38);
  if ((pFVar10->Parameters_MSVS).bIsSet == false) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar18 = pFVar4 + 1;
  if (pFVar4 == (FRHIShader *)0x0) {
    pFVar18 = (FRHIShader *)0x0;
  }
  lVar16 = *(longlong *)((longlong)this + 0x30);
  uVar2 = param_1->WorkerIndex;
  uVar9 = 0;
  if ((int)uVar2 < *(int *)(lVar16 + 0x248)) {
    uVar9 = ~uVar2 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  local_58.ArrayNum = uVar13 >> 2;
  if (*(longlong *)(lVar16 + 0x240) != 0) {
    lVar16 = *(longlong *)(lVar16 + 0x240);
  }
  local_58.DataPtr = (uint *)(uVar12 + (ulonglong)uVar17 * 4);
  RecordBindings(*(FD3D12CommandContext **)this,SF_Mesh,
                 *(FD3D12ExplicitDescriptorCache **)((longlong)this + 0x18),
                 (FShaderBundleBinderOps *)((longlong)(int)uVar2 * 0x90 + lVar16),uVar2,pFVar4,
                 (FD3D12ShaderData *)pFVar18,&(pFVar10->Parameters_MSVS).TypedValue,pFVar11,pFVar5,
                 &pFVar10->Constants,&local_58);
  return;
}

// operator() @ 145a97b50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::DispatchWorkGraphShaderBundle'::__l2::<lambda_1>::operator()
          (void *this,FTaskContext *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  longlong *plVar3;
  FRHIWorkGraphShader *pFVar4;
  FD3D12RootSignature *pFVar5;
  FAllocatedConstantBuffer *pFVar6;
  FRHIShader *pFVar7;
  code *pcVar8;
  bool bVar9;
  FRHIShaderBundleComputeDispatch *pFVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  TArrayView<unsigned_int,int> local_48;
  
  plVar3 = *(longlong **)((longlong)this + 0x20);
  uVar13 = 0;
  if (param_2 < (int)plVar3[1]) {
    uVar13 = (uint)~param_2 >> 0x1f;
  }
  if (uVar13 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar10 = TArrayView<FRHIShaderBundleComputeDispatch_const_,int>::operator[]
                      (*(TArrayView<FRHIShaderBundleComputeDispatch_const_,int> **)
                        ((longlong)this + 0x28),*(int *)(*plVar3 + (longlong)param_2 * 4));
  if (pFVar10->RecordIndex == 0xffffffff) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Dispatch.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x37d,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar13 = param_2 + 1;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (((int)uVar13 < 0) || (*(int *)(*plVar3 + 0x70) <= (int)uVar13)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline->RootArgOffsets.IsValidIndex(ShaderTableIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x380,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar15 = *plVar3;
  uVar12 = 0;
  if ((int)uVar13 < *(int *)(lVar15 + 0x70)) {
    uVar12 = ~uVar13 >> 0x1f;
  }
  if (uVar12 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar1 = *(int *)(*(longlong *)(lVar15 + 0x68) + (longlong)(int)uVar13 * 4);
  if (*(uint *)(*(longlong *)((longlong)this + 8) + 0x10) <
      (*(uint *)(*plVar3 + 0x60) >> 2) * (iVar1 + 1)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Pipeline->RootArgStrideInBytes / 4) * (RootArgOffset + 1) <= (uint32)LocalRootArgs.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                       ,0x382,L"");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = pFVar10->WorkGraphShader;
  puVar14 = (ulonglong *)(*(longlong *)((longlong)this + 8) + 8);
  pFVar5 = *(FD3D12RootSignature **)&pFVar4[1].field_0x38;
  uVar13 = *(uint *)(*plVar3 + 0x60);
  uVar12 = uVar13 * iVar1 >> 2;
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x10) <= (int)uVar12) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  uVar11 = *puVar14;
  if ((uVar11 & 1) != 0) {
    uVar11 = ((longlong)uVar11 >> 0x18) + (longlong)puVar14;
  }
  pFVar6 = *(FAllocatedConstantBuffer **)((longlong)this + 0x38);
  if ((pFVar10->Parameters).bIsSet == false) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  lVar15 = *(longlong *)((longlong)this + 0x30);
  pFVar7 = (FRHIShader *)pFVar10->WorkGraphShader;
  uVar2 = param_1->WorkerIndex;
  uVar16 = 0;
  if ((int)uVar2 < *(int *)(lVar15 + 0x248)) {
    uVar16 = ~uVar2 >> 0x1f;
  }
  if (uVar16 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  local_48.ArrayNum = uVar13 >> 2;
  if (*(longlong *)(lVar15 + 0x240) != 0) {
    lVar15 = *(longlong *)(lVar15 + 0x240);
  }
  local_48.DataPtr = (uint *)(uVar11 + (ulonglong)uVar12 * 4);
  RecordBindings(*(FD3D12CommandContext **)this,SF_Compute,
                 *(FD3D12ExplicitDescriptorCache **)((longlong)this + 0x18),
                 (FShaderBundleBinderOps *)((longlong)(int)uVar2 * 0x90 + lVar15),uVar2,pFVar7,
                 (FD3D12ShaderData *)(pFVar4 + 1),&(pFVar10->Parameters).TypedValue,pFVar5,pFVar6,
                 &pFVar10->Constants,&local_48);
  return;
}

// operator() @ 145a98960

/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __thiscall
`FD3D12CommandContext::ClearUAV'::__l17::<lambda_2>::operator()
          (void *this,FD3D12CommandContext *param_1)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  FD3D12Device *this_00;
  FD3D12ResourceLocation *pFVar4;
  longlong *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  ERHIDescriptorHeapType EVar8;
  bool bVar9;
  undefined1 uVar10;
  DXGI_FORMAT DVar11;
  undefined4 uVar12;
  uint uVar13;
  ID3D12Device *pIVar14;
  ulonglong uVar15;
  FRHIDescriptorHandle FVar16;
  FD3D12DescriptorHeap *pFVar17;
  longlong lVar18;
  char cVar19;
  FD3D12Resource *pFVar20;
  longlong lVar21;
  D3D12_CPU_DESCRIPTOR_HANDLE DVar22;
  ushort local_res8;
  undefined1 uStackX_a;
  undefined1 uStackX_b;
  FD3D12ViewRange local_res10;
  ID3D12Device *local_res18;
  undefined1 local_res20 [8];
  ulonglong in_stack_fffffffffffffea8;
  undefined4 uVar23;
  ulonglong in_stack_fffffffffffffeb0;
  undefined1 local_138 [50];
  TRHIRange<unsigned_char> local_106;
  FD3D12OfflineDescriptor local_100;
  FRHIDescriptorHandle local_f0;
  undefined2 local_e8;
  longlong local_e0;
  ulong64 uStack_d8;
  longlong local_d0;
  ulong64 uStack_c8;
  longlong local_c0;
  TRefCountPtr<FD3D12Resource> local_b8;
  ulong64 local_b0;
  uint local_a8;
  D3D12_UNORDERED_ACCESS_VIEW_DESC local_98;
  FResourceInfo local_70;
  D3D12_CPU_DESCRIPTOR_HANDLE local_58;
  undefined8 uStack_50;
  
  lVar21 = *(longlong *)this;
  if (*(longlong *)&param_1->field_0x300 == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  this_00 = *(FD3D12Device **)&param_1->field_0x300;
  pIVar14 = FD3D12Device::GetDevice(this_00);
  local_98.Format = DXGI_FORMAT_UNKNOWN;
  local_98.ViewDimension = D3D12_UAV_DIMENSION_UNKNOWN;
  local_98.field2_0x8.Buffer.FirstElement = 0;
  local_98.field2_0x8._24_8_ = 0;
  local_98.field2_0x8._8_8_ = 0;
  local_98.field2_0x8.Buffer.CounterOffsetInBytes = 0;
  local_res18 = pIVar14;
  if ((*(byte *)(lVar21 + 0xa8) & 1) == 0) {
    if ((*(byte *)(lVar21 + 0x9c) & 3) != 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAVDesc.Buffer.StructureByteStride % sizeof(uint32) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,0x168,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    uVar13 = *(uint *)(lVar21 + 0x9c) >> 2;
    local_98.field2_0x8.Buffer.FirstElement = (ulonglong)uVar13 * *(longlong *)(lVar21 + 0x90);
    local_98.Format = DXGI_FORMAT_R32_UINT;
    local_98.ViewDimension = D3D12_UAV_DIMENSION_BUFFER;
    local_98.field2_0x8.Buffer.NumElements = uVar13 * *(int *)(lVar21 + 0x98);
  }
  else {
    if (*(int *)(lVar21 + 0x88) != 0x27) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAVDesc.Format == DXGI_FORMAT_R32_TYPELESS",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,0x162,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    local_98._0_8_ = *(longlong *)(lVar21 + 0x88);
    local_98.field2_0x8.Buffer.FirstElement = *(ulong64 *)(lVar21 + 0x90);
    local_98.field2_0x8._8_8_ = *(undefined8 *)(lVar21 + 0x98);
    local_98.field2_0x8.Buffer.CounterOffsetInBytes = *(ulong64 *)(lVar21 + 0xa0);
    local_98.field2_0x8._24_8_ = *(undefined8 *)(lVar21 + 0xa8);
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))();
  }
  if ((param_1->StateCache).DescriptorCache.bLastSetHeapsBindless == false) {
    cVar19 = '\t';
    if ((param_1->StateCache).DescriptorCache.bFullyBindless != false) goto LAB_145a98ac0;
  }
  else {
LAB_145a98ac0:
    cVar19 = '\x01';
  }
  local_138._16_8_ = (FD3D12BaseShaderResource *)0x0;
  local_138._0_8_ = &___7FD3D12View__6B_;
  local_138._24_8_ = (FD3D12ResourceLocation *)0x0;
  local_138._32_8_ = (FD3D12Resource *)0x0;
  local_138._40_2_ = 0;
  local_138[0x2a] = '\0';
  local_138[0x2b] = '\0';
  local_138._44_2_ = 0;
  local_138._46_2_ = 0;
  local_138[0x30] = '\0';
  local_138[0x31] = '\0';
  local_106.First = '\0';
  local_106.Num = '\0';
  iVar3 = (this_00->OfflineDescriptorManagers).ArrayNum;
  uVar15 = (ulonglong)iVar3;
  local_138._8_8_ = this_00;
  if (iVar3 < 1) {
    in_stack_fffffffffffffea8 = 0;
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    in_stack_fffffffffffffeb0 = uVar15;
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FD3D12OfflineDescriptorManager::AllocateHeapSlot
            ((FD3D12OfflineDescriptorManager *)&this_00->OfflineDescriptorManagers,&local_100);
  local_f0.Index = 0xffffffff;
  local_f0.Type = Invalid;
  local_e8._0_1_ = true;
  local_e8._1_1_ = Standard;
  if (cVar19 != '\t') {
    FVar16 = FD3D12BindlessDescriptorAllocator::AllocateDescriptor
                       (this_00->BindlessDescriptorAllocator,(ERHIDescriptorType)local_res20);
    local_f0 = *(FRHIDescriptorHandle *)FVar16;
  }
  lVar21 = *(longlong *)this;
  pFVar20 = (FD3D12Resource *)0x0;
  local_138._0_8_ = &___7FD3D12UnorderedAccessView__6B_;
  local_b8.Reference = (FD3D12Resource *)0x0;
  local_b0 = 0;
  local_a8 = 0;
  if (*(longlong *)(lVar21 + 0x48) == 0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x100,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  pFVar4 = *(FD3D12ResourceLocation **)(lVar21 + 0x48);
  local_70.BaseResource = (FD3D12BaseShaderResource *)0x0;
  if (pFVar4 != (FD3D12ResourceLocation *)0x0) {
    pFVar20 = pFVar4->UnderlyingResource;
  }
  local_70.ResourceLocation = pFVar4;
  local_70.Resource = pFVar20;
  FD3D12UnorderedAccessView::UpdateResourceInfo
            ((FD3D12UnorderedAccessView *)local_138,&local_70,&local_98,None);
  local_e0._0_4_ = local_98.Format;
  local_e0._4_4_ = local_98.ViewDimension;
  uStack_d8 = local_98.field2_0x8.Buffer.FirstElement;
  local_c0 = local_98.field2_0x8._24_8_;
  local_d0 = local_98.field2_0x8._8_8_;
  uStack_c8 = local_98.field2_0x8.Buffer.CounterOffsetInBytes;
  FD3D12ViewRange::FD3D12ViewRange(&local_res10,&local_98);
  local_138._44_6_ = local_res10._0_6_;
  local_106 = local_res10.Mip;
  if ((FD3D12BaseShaderResource *)local_138._16_8_ != (FD3D12BaseShaderResource *)0x0) {
    FD3D12BaseShaderResource::RemoveRenameListener
              ((FD3D12BaseShaderResource *)local_138._16_8_,
               (FD3D12ShaderResourceRenameListener *)local_138);
  }
  uVar23 = (undefined4)(in_stack_fffffffffffffea8 >> 0x20);
  local_138._16_8_ = (FD3D12BaseShaderResource *)0x0;
  local_138._24_8_ = pFVar4;
  local_138._32_8_ = pFVar20;
  if (pFVar20 != (FD3D12Resource *)0x0) {
    uVar2 = *(ushort *)((longlong)&(pFVar20->Desc)._padding_ + 4);
    DVar11 = UE::DXGIUtilities::FindDepthStencilParentDXGIFormat
                       ((DXGI_FORMAT)(pFVar20->Desc)._padding_);
    if ((DVar11 == DXGI_FORMAT_R32G8X24_TYPELESS) ||
       (uVar10 = 1, DVar11 == DXGI_FORMAT_R24G8_TYPELESS)) {
      uVar10 = 2;
    }
    _local_res8 = CONCAT13(*(undefined1 *)((longlong)&(pFVar20->Desc)._padding_ + 6),
                           CONCAT12(uVar10,uVar2));
    local_138._42_2_ = (undefined2)((uint)_local_res8 >> 0x10);
    local_138._40_2_ = uVar2;
    if (*(code **)(local_138._0_8_ + 0x10) == FD3D12UnorderedAccessView::UpdateDescriptor) {
      FD3D12UnorderedAccessView::UpdateDescriptor((FD3D12UnorderedAccessView *)local_138);
    }
    else {
      (**(code **)(local_138._0_8_ + 0x10))();
    }
    goto LAB_145a98d71;
  }
  local_138._40_2_ = 0;
  local_138[0x2a] = '\0';
  local_138[0x2b] = '\0';
  if ((FD3D12Device *)local_138._8_8_ == (FD3D12Device *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar6 = local_138._8_8_;
  pIVar14 = FD3D12Device::GetDevice((FD3D12Device *)local_138._8_8_);
  pcVar7 = *(code **)((longlong)*pIVar14 + 0xc0);
  if (local_e8._1_1_ == Standard) {
LAB_145a98d4b:
    uVar12 = 0;
  }
  else if (local_e8._1_1_ == Sampler) {
    uVar12 = 1;
  }
  else if (local_e8._1_1_ == RenderTarget) {
    uVar12 = 2;
  }
  else {
    if (local_e8._1_1_ != DepthStencil) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!\"Enclosing block should never be called\"",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Descriptors.h"
                         ,0x17,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      goto LAB_145a98d4b;
    }
    uVar12 = 3;
  }
  in_stack_fffffffffffffea8 = CONCAT44(uVar23,uVar12);
  (*pcVar7)(pIVar14,1,local_100._padding_,
            (((FD3D12DefaultViews *)(uVar6 + 0x9c0))->NullUAV)._padding_,in_stack_fffffffffffffea8);
  local_100.Version = local_100.Version + 1;
  pIVar14 = local_res18;
LAB_145a98d71:
  if ((local_f0.Index != 0xffffffff) && (local_f0.Type != Invalid)) {
    if ((FD3D12Device *)local_138._8_8_ == (FD3D12Device *)0x0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parent != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                         ,0x59,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    FD3D12BindlessDescriptorManager::InitializeDescriptor
              ((FD3D12BindlessDescriptorManager *)(local_138._8_8_ + 0x730),local_f0,
               (FD3D12View *)local_138);
  }
  if ((FD3D12ResourceLocation *)local_138._24_8_ == (FD3D12ResourceLocation *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0x103,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uStack_50 = CONCAT44(local_100.Version,local_100.HeapIndex);
  local_58.ptr = local_100._padding_;
  if (((param_1->StateCache).DescriptorCache.bLastSetHeapsBindless == false) &&
     ((param_1->StateCache).DescriptorCache.bFullyBindless == false)) {
    bVar9 = FD3D12OnlineHeap::CanReserveSlots
                      ((param_1->StateCache).DescriptorCache.CurrentViewHeap,1);
    if (!bVar9) {
      (**(code **)(((param_1->StateCache).DescriptorCache.CurrentViewHeap)->_padding_ + 8))();
    }
    FD3D12DescriptorCache::SetDescriptorHeaps(&(param_1->StateCache).DescriptorCache,None);
    uVar13 = FD3D12OnlineHeap::ReserveSlots((param_1->StateCache).DescriptorCache.CurrentViewHeap,1)
    ;
    DVar22.ptr = local_58.ptr;
    pFVar17 = (((param_1->StateCache).DescriptorCache.CurrentViewHeap)->Heap).Reference;
    lVar18 = (ulonglong)pFVar17->DescriptorSize * (longlong)(int)uVar13;
    lVar21 = (longlong)pFVar17->GpuBase + lVar18;
    (**(code **)((longlong)*pIVar14 + 0xc0))
              (pIVar14,1,(longlong)pFVar17->CpuBase + lVar18,local_58.ptr,
               in_stack_fffffffffffffea8 & 0xffffffff00000000);
  }
  else {
    if ((local_f0.Index == 0xffffffff) || (local_f0.Type == Invalid)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAV.GetBindlessHandle().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,0x188,L"");
      if (bVar9) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    (param_1->BindlessState).bRefreshHeap = true;
    FD3D12CommandContext::FlushPendingDescriptorUpdates(param_1);
    FD3D12DescriptorCache::SetDescriptorHeaps(&(param_1->StateCache).DescriptorCache,Bindless);
    pFVar17 = FD3D12CommandContext::GetBindlessResourcesHeap(param_1);
    DVar22.ptr = local_58.ptr;
    UE::D3D12Descriptors::CopyDescriptor(this_00,pFVar17,local_f0,local_58);
    lVar21 = (ulonglong)pFVar17->DescriptorSize * (longlong)(int)local_f0.Index +
             (longlong)pFVar17->GpuBase;
  }
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)param_1);
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  plVar5 = *(longlong **)(*(longlong *)&param_1->field_0x188 + 0x28);
  piVar1 = (int *)(*(longlong *)&param_1->field_0x188 + 0x168);
  *piVar1 = *piVar1 + 1;
  uVar6 = *(undefined8 *)((longlong)this + 8);
  pcVar7 = *(code **)(*plVar5 + 0x188);
  if ((FD3D12ResourceLocation *)local_138._24_8_ == (FD3D12ResourceLocation *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  (*pcVar7)(plVar5,lVar21,DVar22.ptr,
            ((TRefCountPtr<ID3D12Resource> *)(local_138._32_8_ + 0x20))->Reference,uVar6,
            in_stack_fffffffffffffeb0 & 0xffffffff00000000,0);
  if ((FD3D12ResourceLocation *)local_138._24_8_ == (FD3D12ResourceLocation *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInitialized()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                       ,0xfe,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar6 = local_138._32_8_;
  if ((FD3D12Resource *)local_138._32_8_ == (FD3D12Resource *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Resource",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12CommandContext.h"
                       ,0x1a5,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (*(longlong *)&param_1->field_0x188 == 0) {
    (**(code **)(*(longlong *)param_1 + 8))(param_1);
  }
  FD3D12CommandList::UpdateResidency
            (*(FD3D12CommandList **)&param_1->field_0x188,(FD3D12Resource *)uVar6);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)param_1);
  if (local_b8.Reference != (FD3D12Resource *)0x0) {
    plVar5 = &(local_b8.Reference)->_padding_;
    LOCK();
    lVar21 = *plVar5;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if (((int)lVar21 == 1) && (plVar5 != (longlong *)0x0)) {
      (**(code **)(local_b8.Reference)->_padding_)(local_b8.Reference,1);
    }
  }
  local_138._0_8_ = &___7FD3D12View__6B_;
  if ((FD3D12BaseShaderResource *)local_138._16_8_ != (FD3D12BaseShaderResource *)0x0) {
    FD3D12BaseShaderResource::RemoveRenameListener
              ((FD3D12BaseShaderResource *)local_138._16_8_,
               (FD3D12ShaderResourceRenameListener *)local_138);
  }
  if ((local_f0.Index != 0xffffffff) && (local_f0.Type != Invalid)) {
    if (local_e8._0_1_ != false) {
      if ((FD3D12Device *)local_138._8_8_ == (FD3D12Device *)0x0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Parent != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                           ,0x59,L"");
        if (bVar9) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      FD3D12BindlessDescriptorManager::DeferredFreeFromDestructor
                ((FD3D12BindlessDescriptorManager *)(local_138._8_8_ + 0x730),local_f0);
    }
    local_f0.Index = 0xffffffff;
    local_f0.Type = Invalid;
    local_f0._5_3_ = 0;
  }
  if ((FD3D12Device *)local_138._8_8_ == (FD3D12Device *)0x0) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Parent != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                       ,0x59,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar6 = local_138._8_8_;
  EVar8 = local_e8._1_1_;
  uVar15 = (ulonglong)local_e8._1_1_;
  if (DepthStencil < local_e8._1_1_) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("InType < ERHIDescriptorHeapType::Count",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Device.h"
                       ,0xf9,L"");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  if (((TArray<FD3D12OfflineDescriptorManager,TFixedAllocator<4>_> *)(uVar6 + 0x758))->ArrayNum <=
      (int)(uint)EVar8) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar9) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FD3D12OfflineDescriptorManager::FreeHeapSlot
            ((FD3D12OfflineDescriptorManager *)
             ((((TArray<FD3D12OfflineDescriptorManager,TFixedAllocator<4>_> *)(uVar6 + 0x758))->
              AllocatorInstance).InlineData + uVar15),&local_100);
  return;
}

// ClearUAV @ 145a9d6a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */

void __cdecl
FD3D12CommandContext::ClearUAV
          (TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *param_1,
          FD3D12UnorderedAccessView_RHI *param_2,void *param_3,bool param_4)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  longlong *plVar4;
  IRHICommandContext *pIVar5;
  longlong lVar6;
  undefined8 *puVar7;
  byte bVar8;
  FD3D12CommandContext *pFVar9;
  char cVar10;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined1 local_res20 [8];
  FD3D12UnorderedAccessView_RHI *local_38;
  void *local_30;
  char cVar11;
  
  plVar4 = (longlong *)&param_2->field_0x48;
  if (param_2 == (FD3D12UnorderedAccessView_RHI *)0x0) {
    plVar4 = (longlong *)&DAT_00000018;
  }
  if ((*plVar4 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                         ,0xfe,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  plVar4 = (longlong *)&param_2->field_0x50;
  if (param_2 == (FD3D12UnorderedAccessView_RHI *)0x0) {
    plVar4 = (longlong *)&DAT_00000020;
  }
  lVar6 = *plVar4;
  if (((*(int *)&param_2->field_0x8c != 1) && (*(int *)&param_2->field_0x88 == 0)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("UAVDesc.ViewDimension == D3D12_UAV_DIMENSION_BUFFER || UAVDesc.Format != DXGI_FORMAT_UNKNOWN"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                         ,0x128,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  cVar11 = !param_4 * '\x02';
  cVar10 = !param_4 * '\x02';
  switch(*(int *)&param_2->field_0x88) {
  case 3:
  case 7:
  case 0xc:
  case 0x11:
  case 0x14:
  case 0x16:
  case 0x19:
  case 0x1e:
  case 0x24:
  case 0x2a:
  case 0x2d:
  case 0x2f:
  case 0x32:
  case 0x39:
  case 0x3e:
    cVar11 = '\x02';
    cVar10 = '\x02';
    break;
  case 4:
  case 8:
  case 0xe:
  case 0x12:
  case 0x20:
  case 0x26:
  case 0x2b:
  case 0x34:
  case 0x3b:
  case 0x40:
    cVar11 = '\x01';
    cVar10 = '\x01';
  }
  if ((*(int *)&param_2->field_0x88 != 0) && (param_4 != (cVar11 == '\0'))) {
    local_res20[0] = 0;
    `FD3D12CommandContext::ClearUAV'::__l2::<lambda_1>::operator()(local_res20);
  }
  iVar1 = *(int *)&param_2->field_0x8c;
  if (iVar1 == 1) {
    if ((*(int *)&param_2->field_0x88 == 0) || ((param_2->field_0xa8 & 1) != 0)) {
      local_38 = param_2;
      local_30 = param_3;
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar7 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar7;
        *(undefined8 **)&param_1->field_0x30 = puVar7 + 1;
        puVar7[1] = 0;
        *puVar7 = &TRHICommandList_RecursiveHazardous<FD3D12CommandContext>::
                   TRHILambdaCommand<`FD3D12CommandContext::ClearUAV'::`17'::<lambda_2>_>::_vftable_
        ;
        puVar7[2] = param_2;
        puVar7[3] = param_3;
      }
      else {
        pIVar5 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
        lVar6 = (**(code **)(pIVar5->_padding_ + 0x148))(pIVar5);
        pFVar9 = (FD3D12CommandContext *)(lVar6 + -0x1c0);
        if (lVar6 == 0) {
          pFVar9 = (FD3D12CommandContext *)0x0;
        }
        `FD3D12CommandContext::ClearUAV'::__l17::<lambda_2>::operator()(&local_38,pFVar9);
      }
    }
    else {
      uVar12 = *(uint *)&param_2->field_0x98;
      if (cVar10 == '\0') {
        ClearUAVShader_T<0,0,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,1,1,
                   param_3);
      }
      else if (cVar10 == '\x01') {
        ClearUAVShader_T<0,1,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,1,1,
                   param_3);
      }
      else if (cVar10 == '\x02') {
        ClearUAVShader_T<0,2,4,0>
                  ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,1,1,
                   param_3);
      }
    }
  }
  else if (iVar1 == 4) {
    bVar8 = (byte)*(undefined4 *)&param_2->field_0x90;
    uVar13 = *(uint *)(lVar6 + 0x68) >> (bVar8 & 0x1f);
    uVar12 = (uint)(*(ulonglong *)(lVar6 + 0x60) >> (bVar8 & 0x3f));
    if (cVar10 == '\0') {
      ClearUAVShader_T<1,0,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,uVar13,
                 1,param_3);
    }
    else if (cVar10 == '\x01') {
      ClearUAVShader_T<1,1,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,uVar13,
                 1,param_3);
    }
    else if (cVar10 == '\x02') {
      ClearUAVShader_T<1,2,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar12,uVar13,
                 1,param_3);
    }
  }
  else if (iVar1 == 5) {
    bVar8 = (byte)*(undefined4 *)&param_2->field_0x90;
    uVar14 = *(uint *)(lVar6 + 0x68) >> (bVar8 & 0x1f);
    uVar12 = *(uint *)&param_2->field_0x98;
    uVar13 = (uint)(*(ulonglong *)(lVar6 + 0x60) >> (bVar8 & 0x3f));
    if (cVar10 == '\0') {
      ClearUAVShader_T<2,0,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
    else if (cVar10 == '\x01') {
      ClearUAVShader_T<2,1,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
    else if (cVar10 == '\x02') {
      ClearUAVShader_T<2,2,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
  }
  else if (iVar1 == 8) {
    bVar8 = (byte)*(undefined4 *)&param_2->field_0x90;
    uVar14 = *(uint *)(lVar6 + 0x68) >> (bVar8 & 0x1f);
    uVar12 = *(uint *)&param_2->field_0x98;
    uVar13 = (uint)(*(ulonglong *)(lVar6 + 0x60) >> (bVar8 & 0x3f));
    if (cVar10 == '\0') {
      ClearUAVShader_T<3,0,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
    else if (cVar10 == '\x01') {
      ClearUAVShader_T<3,1,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
    else if (cVar10 == '\x02') {
      ClearUAVShader_T<3,2,4,0>
                ((FRHIComputeCommandList *)param_1,(FRHIUnorderedAccessView *)param_2,uVar13,uVar14,
                 uVar12,param_3);
    }
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1888418298811384275>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12UAV.cpp"
                       ,0x1d3,"0");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// DispatchWorkGraphShaderBundle @ 145aa0ef0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145aa16b8) */
/* WARNING: Removing unreachable block (ram,0x000145aa151c) */
/* WARNING: Removing unreachable block (ram,0x000145aa1854) */
/* WARNING: Removing unreachable block (ram,0x000145aa16c6) */
/* WARNING: Removing unreachable block (ram,0x000145aa152a) */
/* WARNING: Removing unreachable block (ram,0x000145aa1862) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::DispatchWorkGraphShaderBundle
          (FD3D12CommandContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          FRHIShaderBundleGraphicsState *param_3,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_4,
          TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *param_5)

{
  FScriptContainerElement *pFVar1;
  byte bVar2;
  EPrimitiveType EVar3;
  longlong lVar4;
  FD3D12View *pFVar5;
  schar *psVar6;
  FD3D12Device *pFVar7;
  longlong *plVar8;
  code *pcVar9;
  FNoopStruct FVar10;
  FD3D12ShaderResourceView *this_00;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  *pFVar11;
  FSharedReferencer<1> FVar12;
  FRHIBuffer *pFVar13;
  FRHIShaderBundleGraphicsState *pFVar14;
  bool bVar15;
  int iVar16;
  uint uVar17;
  atomic<unsigned_int> aVar18;
  FGlobalShaderMap *this_01;
  FRHIWorkGraphShader *pFVar19;
  FWorkGraphPipelineState *pFVar20;
  FD3D12WorkGraphPipelineState *pFVar21;
  FTaskGraphInterface *pFVar22;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  *pFVar23;
  TReferenceControllerBase<1> *pTVar24;
  D3D12_GPU_DESCRIPTOR_HANDLE DVar25;
  FD3D12Buffer *this_02;
  TRefCountPtr<FD3D12SyncPoint> TVar26;
  int *piVar27;
  FEntryNodeRecord *pFVar28;
  uint uVar29;
  longlong lVar30;
  ForElementType<FShaderBundleBinderOps> FVar31;
  char cVar32;
  IRHICommandContext *pIVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  FNoopStruct FVar36;
  int iVar37;
  IRHICommandContext *pIVar38;
  ForAnyElementType FVar39;
  FScriptContainerElement *pFVar40;
  undefined8 uVar41;
  TArrayView<FRHIShaderParameterResource_const_,int> *pTVar42;
  longlong lVar43;
  TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *pTVar44;
  ulonglong uVar45;
  TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *pTVar46;
  TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *pTVar47;
  uint uVar48;
  uint uVar49;
  ForElementType<FShaderBundleBinderOps> FVar50;
  ulonglong uVar51;
  longlong *plVar52;
  FD3D12CommandContext *this_03;
  undefined1 auStackY_27c8 [32];
  FNoopStruct local_2778;
  FNoopStruct local_2777;
  <lambda_1> local_2776 [6];
  ForAnyElementType local_2770;
  undefined8 local_2768;
  ForAnyElementType local_2760;
  int local_2758;
  int iStack_2754;
  uint local_2750;
  uint local_274c;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_2748;
  uint local_2738;
  uint local_2734;
  FD3D12View *local_2730;
  FD3D12View *local_2728;
  TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int> *local_2720;
  uint local_2718;
  bool *local_2710;
  longlong local_2708;
  TArrayView<FRHIShaderParameterResource_const_,int> *local_2700;
  TResourceArray<unsigned_int,0> local_26f8;
  FD3D12WorkGraphPipelineState *local_26d8;
  ForAnyElementType local_26d0;
  undefined8 local_26c8;
  FNameMap local_26c0;
  FNameMap local_2698;
  FNameMap local_2670;
  FD3D12CommandContext *local_2648;
  FD3D12ShaderResourceView *local_2640;
  FSharedReferencer<1> local_2638;
  FString local_2630;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  *local_2618;
  float fStack_2610;
  undefined4 uStack_260c;
  FString local_2608;
  undefined8 local_25f8;
  FSharedReferencer<1> local_25f0;
  FString local_25e8;
  FWorkGraphPipelineStateInitializer local_25d8;
  undefined4 local_2568;
  undefined4 uStack_2564;
  undefined4 uStack_2560;
  int iStack_255c;
  wchar_t *local_2558;
  FResourceArrayUploadInterface *pFStack_2550;
  ERHIAccess local_2548;
  ERHIBufferInitAction EStack_2544;
  FNameEntryId FStack_2540;
  uint uStack_253c;
  FNameEntryId FStack_2538;
  uint uStack_2534;
  undefined4 local_2530;
  undefined4 uStack_252c;
  undefined8 uStack_2528;
  ulonglong local_2520;
  undefined4 uStack_2518;
  undefined4 uStack_2514;
  undefined4 uStack_2510;
  undefined4 uStack_250c;
  undefined4 uStack_2508;
  undefined4 uStack_2504;
  undefined4 uStack_2500;
  uint uStack_24fc;
  FRHIBuffer *local_24f8;
  longlong lStack_24f0;
  FRHIShaderBundle *local_24e8;
  TArrayView<FGraphicsPipelineStateInitializer_const_*,int> local_24e0;
  FRHIShaderBundleGraphicsState *local_24d0;
  undefined8 *local_24c8;
  FRHIWorkGraphShader *local_24c0;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_24b8;
  undefined8 local_2490;
  undefined4 local_2488;
  undefined4 local_2484;
  undefined8 *local_2480;
  undefined8 local_2478;
  FResourceInfo local_2470;
  undefined8 local_2458;
  undefined8 uStack_2450;
  undefined8 uStack_2448;
  undefined8 uStack_2440;
  FString local_2438;
  FString local_2428;
  FNameMap *local_2418;
  int iStack_2410;
  undefined4 uStack_240c;
  FScriptContainerElement *local_2408;
  int iStack_2400;
  undefined4 uStack_23fc;
  TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> local_23f8;
  FString local_23e8;
  undefined8 local_23d8;
  undefined8 uStack_23d0;
  undefined8 uStack_23c8;
  undefined8 uStack_23c0;
  undefined8 local_23b8;
  ulong64 uStack_23b0;
  ulong64 local_23a8;
  ulong64 uStack_23a0;
  ulong64 local_2398;
  undefined8 uStack_2390;
  ulong64 local_2388;
  ulong64 uStack_2380;
  ulonglong local_2378;
  ulonglong uStack_2370;
  ulonglong local_2368;
  undefined8 local_2358 [2];
  uint local_2348;
  <lambda_1> local_2338;
  TArrayView<FRHIShaderParameterResource_const_,int> local_22f8;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  *local_22e8 [2];
  undefined1 local_22d8 [16];
  TArrayView<FWorkGraphPipelineStateInitializer::FNameMap,int> local_22c8;
  FRHIBufferCreateDesc local_22b8;
  FEntryNodeRecord local_2280;
  FD3D12ExplicitDescriptorCache local_2268;
  FAllocatedConstantBuffer local_2158;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  local_20d8 [16];
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
  *local_20c8;
  float local_20c0;
  float local_20bc;
  float local_20b8;
  float local_20b4;
  float local_20b0;
  float local_20ac;
  float local_20a8;
  float local_20a4;
  float local_20a0;
  float local_209c;
  float local_2098;
  float local_2094;
  D3D12_RESOURCE_DESC local_2090;
  TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_2058
  ;
  FRHICommandList_RecursiveHazardous local_1e08;
  D3D12_CPU_DESCRIPTOR_HANDLE local_258 [64];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_27c8;
  pIVar38 = (IRHICommandContext *)0x0;
  pIVar33 = (IRHICommandContext *)&this->field_0x1c0;
  if (this == (FD3D12CommandContext *)0x0) {
    pIVar33 = pIVar38;
  }
  local_2700 = param_4;
  local_2720 = param_5;
  local_2648 = this;
  local_24f8 = param_2;
  local_24e8 = param_1;
  local_24d0 = param_3;
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous(&local_1e08,pIVar33);
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>(this_01,&local_23f8);
  pFVar19 = TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>::
            GetWorkGraphShader(&local_23f8);
  local_2718 = (byte)pFVar19[1].field_0x10 & 2;
  uVar49 = (uint)(byte)pFVar19[1].field_0x11;
  uVar48 = (uint)(byte)pFVar19[1].field_0x14 + (uint)(byte)pFVar19[1].field_0x13 +
           (uint)(byte)pFVar19[1].field_0x12;
  local_26d0.Data = (FScriptContainerElement *)0x0;
  local_26c8 = 0;
  local_24c0 = pFVar19;
  iVar16 = UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x808,&local_26d0,(int *)((longlong)&local_26c8 + 4));
  local_26c8 = CONCAT44(local_26c8._4_4_,iVar16 + 1);
  *(FRHIWorkGraphShader **)(local_26d0.Data + (longlong)iVar16 * 8) = pFVar19;
  uVar17 = param_5->ArrayNum;
  lVar43 = (longlong)(int)uVar17;
  iVar16 = FDispatchShaderBundleWorkGraph::GetMaxShaderBundleSize();
  if ((iVar16 < (int)uVar17) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRecords <= FDispatchShaderBundleWorkGraph::GetMaxShaderBundleSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                          ,0x455,
                          L"Too many entries in a shader bundle (%d). Try increasing \'r.ShaderBundle.MaxSize\'"
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2748.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2748.ArrayNum = 0;
  local_2748.ArrayMax = 0;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((int)uVar17 < 1) {
    local_2760.Data = (FScriptContainerElement *)0x0;
    local_2758 = 0;
    iStack_2754 = 0;
  }
  else {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&local_2748.AllocatorInstance,0,&local_2748.ArrayMax);
    local_2760.Data = (FScriptContainerElement *)0x0;
    local_2758 = 0;
    iStack_2754 = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar17,&local_2760,0,&iStack_2754);
    pTVar44 = local_2720;
    pIVar33 = pIVar38;
    do {
      uVar29 = (uint)pIVar38;
      uVar17 = 0;
      if ((int)uVar29 < pTVar44->ArrayNum) {
        uVar17 = ~uVar29 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_2710 = &pTVar44->DataPtr[-1].Parameters_PS.bIsSet +
                   (longlong)(pIVar33->RenderPassInfo).ColorRenderTargets.Elements;
      if (*(int *)((longlong)
                   &pTVar44->DataPtr[-1].Parameters_PS.TypedValue.ResourceParameters.DataPtr +
                  (longlong)&(pIVar33->RenderPassInfo).ColorRenderTargets.Elements[0].ResolveTarget)
          == -1) {
        local_2710 = (bool *)0x0;
      }
      if (((local_2760.Data <= (FScriptContainerElement *)&local_2710) &&
          ((FScriptContainerElement *)&local_2710 < local_2760.Data + (longlong)iStack_2754 * 8)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      if (local_2758 == iStack_2754) {
        local_2758 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_2760,&iStack_2754);
      }
      lVar30 = (longlong)local_2758;
      local_2758 = local_2758 + 1;
      *(bool **)(local_2760.Data + lVar30 * 8) = local_2710;
      if (local_2710 != (bool *)0x0) {
        lVar30 = *(longlong *)((longlong)local_2710 + 0x30);
        lVar4 = *(longlong *)((longlong)local_2710 + 0x10);
        pTVar44 = local_2720;
        if ((lVar30 != 0) && (lVar4 != 0)) {
          local_2750 = uVar29;
          if ((local_2748.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2750) &&
             (((FScriptContainerElement *)&local_2750 <
               local_2748.AllocatorInstance.Data + (longlong)local_2748.ArrayMax * 4 &&
              (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar15)))) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar16 = local_2748.ArrayNum;
          if (local_2748.ArrayNum == local_2748.ArrayMax) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_2748.AllocatorInstance,&local_2748.ArrayMax);
          }
          local_2748.ArrayNum = iVar16 + 1;
          *(uint *)(local_2748.AllocatorInstance.Data + (longlong)iVar16 * 4) = local_2750;
          uVar48 = uVar48 + *(byte *)(lVar30 + 0x11a) +
                   (uint)*(byte *)(lVar4 + 0x11c) + (uint)*(byte *)(lVar4 + 0x11b) +
                   (uint)*(byte *)(lVar4 + 0x11a) + (uint)*(byte *)(lVar30 + 0x11c) +
                   (uint)*(byte *)(lVar30 + 0x11b);
          uVar49 = uVar49 + *(byte *)(lVar30 + 0x119) + (uint)*(byte *)(lVar4 + 0x119);
          pTVar44 = local_2720;
        }
      }
      pIVar38 = (IRHICommandContext *)(ulonglong)(uVar29 + 1);
      pIVar33 = (IRHICommandContext *)(pIVar33[1].RenderPassInfo.ColorRenderTargets.Elements + 3);
      lVar43 = lVar43 + -1;
      param_4 = local_2700;
    } while (lVar43 != 0);
  }
  local_25d8._padding_ = 0;
  local_25d8._padding_ = 0;
  local_25d8._padding_ = 0;
  local_25d8._padding_ = 0;
  local_25d8.ProgramName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_25d8.ProgramName.Data.ArrayNum = 0;
  local_25d8.ProgramName.Data.ArrayMax = 0;
  local_25d8.NameMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_25d8.NameMaps.ArrayNum = 0;
  local_25d8.NameMaps.ArrayMax = 0;
  local_25d8.RootShaderIndex = -1;
  local_25d8.ShaderTable.DataPtr = (FRHIWorkGraphShader **)0x0;
  local_25d8.ShaderTable._8_8_ = (ulonglong)(uint)local_25d8.ShaderTable._12_4_ << 0x20;
  local_25d8.GraphicsPSOTable.DataPtr = (FGraphicsPipelineStateInitializer **)0x0;
  local_25d8.GraphicsPSOTable._8_8_ = (ulonglong)(uint)local_25d8.GraphicsPSOTable._12_4_ << 0x20;
  ::FString::operator=(&local_25d8.ProgramName,L"ShaderBundle");
  iVar16 = local_25d8.ProgramName.Data.ArrayNum + -1;
  FVar39.Data = local_25d8.ProgramName.Data.AllocatorInstance.Data;
  if (local_25d8.ProgramName.Data.ArrayNum == 0) {
    iVar16 = 0;
    FVar39.Data = (FScriptContainerElement *)L"";
  }
  uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar39.Data);
  local_25d8._padding_ = (longlong)uVar17;
  local_2770.Data = (FScriptContainerElement *)0x0;
  local_2768 = 0;
  ::FString::FString(&local_23e8,L"WorkGraphMainCS");
  ::FString::FString(&local_2608,L"WorkGraphMainCS");
  ::FString::FString(&local_2698.ExportName,&local_2608);
  ::FString::FString(&local_2698.NodeName,&local_23e8);
  FVar39.Data = (FScriptContainerElement *)L"";
  if (local_2608.Data.ArrayNum != 0) {
    FVar39.Data = local_2608.Data.AllocatorInstance.Data;
  }
  iVar37 = 0;
  iVar16 = local_2608.Data.ArrayNum + -1;
  if (local_2608.Data.ArrayNum == 0) {
    iVar16 = iVar37;
  }
  local_2698.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar39.Data);
  if (((local_2770.Data <= &local_2698) &&
      (&local_2698 < (FNameMap *)(local_2770.Data + (longlong)local_2768._4_4_ * 0x28))) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = (int)local_2768;
  if ((int)local_2768 == local_2768._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2770,(int *)((longlong)&local_2768 + 4));
  }
  lVar43 = (longlong)iVar16;
  local_2768 = CONCAT44(local_2768._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2770.Data[lVar43 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2770.Data[lVar43 * 0x28].field_0x0 =
       local_2698.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 8) = local_2698.ExportName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0xc) = local_2698.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2770.Data + lVar43 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2770.Data + lVar43 * 0x28 + 0x10) =
       local_2698.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x18) = local_2698.NodeName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x1c) = local_2698.NodeName.Data.ArrayMax;
  *(uint *)(local_2770.Data + lVar43 * 0x28 + 0x20) = local_2698.ExportNameHash;
  local_2698.NodeName.Data.ArrayNum = 0;
  local_2698.NodeName.Data.ArrayMax = 0;
  local_2698.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2698.ExportName.Data.ArrayNum = 0;
  local_2698.ExportName.Data.ArrayMax = 0;
  local_2698.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2608.Data.AllocatorInstance.Data);
  }
  if (local_23e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_23e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2438,L"ShaderBundleNode");
  ::FString::FString(&local_25e8,L"");
  ::FString::FString(&local_26c0.ExportName,&local_25e8);
  ::FString::FString(&local_26c0.NodeName,&local_2438);
  iVar16 = local_25e8.Data.ArrayNum + -1;
  FVar39.Data = local_25e8.Data.AllocatorInstance.Data;
  if (local_25e8.Data.ArrayNum == 0) {
    iVar16 = iVar37;
    FVar39.Data = (FScriptContainerElement *)L"";
  }
  local_26c0.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar39.Data);
  if (((local_2770.Data <= &local_26c0) &&
      (&local_26c0 < (FNameMap *)(local_2770.Data + (longlong)local_2768._4_4_ * 0x28))) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = (int)local_2768;
  if ((int)local_2768 == local_2768._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2770,(int *)((longlong)&local_2768 + 4));
  }
  lVar43 = (longlong)iVar16;
  local_2768 = CONCAT44(local_2768._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2770.Data[lVar43 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2770.Data[lVar43 * 0x28].field_0x0 =
       local_26c0.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 8) = local_26c0.ExportName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0xc) = local_26c0.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2770.Data + lVar43 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2770.Data + lVar43 * 0x28 + 0x10) =
       local_26c0.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x18) = local_26c0.NodeName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x1c) = local_26c0.NodeName.Data.ArrayMax;
  *(uint *)(local_2770.Data + lVar43 * 0x28 + 0x20) = local_26c0.ExportNameHash;
  local_26c0.NodeName.Data.ArrayNum = 0;
  local_26c0.NodeName.Data.ArrayMax = 0;
  local_26c0.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_26c0.ExportName.Data.ArrayNum = 0;
  local_26c0.ExportName.Data.ArrayMax = 0;
  local_26c0.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_25e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25e8.Data.AllocatorInstance.Data);
  }
  if (local_2438.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2438.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2428,L"ShaderBundleNode");
  ::FString::FString(&local_2630,L"HWRasterizeMS");
  ::FString::FString(&local_2670.ExportName,&local_2630);
  ::FString::FString(&local_2670.NodeName,&local_2428);
  iVar16 = local_2630.Data.ArrayNum + -1;
  FVar39.Data = local_2630.Data.AllocatorInstance.Data;
  if (local_2630.Data.ArrayNum == 0) {
    iVar16 = iVar37;
    FVar39.Data = (FScriptContainerElement *)L"";
  }
  local_2670.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,(wchar_t *)FVar39.Data);
  if (((local_2770.Data <= &local_2670) &&
      (&local_2670 < (FNameMap *)(local_2770.Data + (longlong)local_2768._4_4_ * 0x28))) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = (int)local_2768;
  if ((int)local_2768 == local_2768._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2770,(int *)((longlong)&local_2768 + 4));
  }
  lVar43 = (longlong)iVar16;
  local_2768 = CONCAT44(local_2768._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2770.Data[lVar43 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2770.Data[lVar43 * 0x28].field_0x0 =
       local_2670.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 8) = local_2670.ExportName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0xc) = local_2670.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2770.Data + lVar43 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2770.Data + lVar43 * 0x28 + 0x10) =
       local_2670.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x18) = local_2670.NodeName.Data.ArrayNum;
  *(int *)(local_2770.Data + lVar43 * 0x28 + 0x1c) = local_2670.NodeName.Data.ArrayMax;
  *(uint *)(local_2770.Data + lVar43 * 0x28 + 0x20) = local_2670.ExportNameHash;
  local_2670.NodeName.Data.ArrayNum = 0;
  local_2670.NodeName.Data.ArrayMax = 0;
  local_2670.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2670.ExportName.Data.ArrayNum = 0;
  local_2670.ExportName.Data.ArrayMax = 0;
  local_2670.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_2630.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2630.Data.AllocatorInstance.Data);
  }
  if (local_2428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2428.Data.AllocatorInstance.Data);
  }
  iVar16 = (int)local_2768;
  local_2418 = (FNameMap *)local_2770.Data;
  if (((int)local_2768 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iStack_2410 = iVar16;
  local_22c8._12_4_ = uStack_240c;
  local_22c8.ArrayNum = iVar16;
  local_22c8.DataPtr = local_2418;
  FWorkGraphPipelineStateInitializer::SetNameTable(&local_25d8,&local_22c8,0);
  FVar39.Data = local_26d0.Data;
  iStack_2400 = (int)local_26c8;
  lVar43 = (longlong)(int)local_26c8;
  local_2408 = local_26d0.Data;
  if (((int)local_26c8 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  iVar16 = local_2758;
  pFVar1 = FVar39.Data + lVar43 * 8;
  local_25d8._padding_ = 0x4f1a08f64cae0c3d;
  local_25d8.ShaderTable._12_4_ = uStack_23fc;
  local_25d8.ShaderTable.ArrayNum = iStack_2400;
  local_25d8.ShaderTable.DataPtr = (FRHIWorkGraphShader **)local_2408;
  for (; FVar39.Data != pFVar1; FVar39.Data = FVar39.Data + 8) {
    lVar43 = 0;
    if (*(longlong *)FVar39.Data != 0) {
      lVar43 = *(longlong *)(*(longlong *)FVar39.Data + 0xf0);
    }
    local_25d8._padding_ =
         local_25d8._padding_ ^
         lVar43 + local_25d8._padding_ * 0x40 + ((ulonglong)local_25d8._padding_ >> 2) + 0x9e3779b9;
  }
  local_24e0.DataPtr = (FGraphicsPipelineStateInitializer **)local_2760.Data;
  local_25d8.RootShaderIndex = -1;
  if ((local_2758 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_24e0.ArrayNum = iVar16;
  local_25d8.GraphicsPSOTable._12_4_ = local_24e0._12_4_;
  local_25d8.GraphicsPSOTable.ArrayNum = iVar16;
  local_25d8.GraphicsPSOTable.DataPtr = local_24e0.DataPtr;
  local_25d8._padding_ =
       FWorkGraphPipelineStateInitializer::ComputeGraphicsPSOTableHash
                 (&local_25d8,&local_24e0,0x4f1a08f64cae0c3d);
  pFVar20 = PipelineStateCache::GetAndOrCreateWorkGraphPipelineState
                      ((FRHIComputeCommandList *)&local_1e08,&local_25d8);
  pFVar21 = (FD3D12WorkGraphPipelineState *)GetRHIWorkGraphPipelineState(pFVar20);
  local_26d8 = pFVar21;
  pFVar22 = FTaskGraphInterface::Get();
  uVar17 = (**(code **)((longlong)*pFVar22 + 0x20))(pFVar22);
  bVar15 = FApp::ShouldUseThreadingForPerformance();
  local_20bc = 5.60519e-45;
  if (bVar15) {
    uVar29 = 4;
    if (uVar17 < 4) {
      uVar29 = uVar17;
    }
    local_20c8 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
                  *)0x0;
    uVar17 = 0;
    local_20c0 = 0.0;
    if (uVar29 == 0) goto LAB_145aa1a87;
  }
  else {
    local_20c8 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
                  *)0x0;
    uVar17 = 0;
    local_20c0 = 0.0;
    uVar29 = 1;
  }
  do {
    pFVar23 = local_20d8;
    if (local_20c8 !=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
         *)0x0) {
      pFVar23 = local_20c8;
    }
    local_274c = uVar17;
    if (pFVar23 <=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
         *)&local_274c) {
      pFVar23 = local_20d8;
      if (local_20c8 !=
          (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
           *)0x0) {
        pFVar23 = local_20c8;
      }
      if (((ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
            *)&local_274c < pFVar23 + (longlong)(int)local_20bc * 4) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (local_20c0 == local_20bc) {
      local_20c0 = (float)UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_>
                                    (0x404,local_20d8,(int *)&local_20bc);
    }
    lVar43 = (longlong)(int)local_20c0;
    pFVar23 = local_20d8;
    if (local_20c8 !=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
         *)0x0) {
      pFVar23 = local_20c8;
    }
    uVar17 = uVar17 + 1;
    local_20c0 = (float)((int)local_20c0 + 1);
    *(uint *)(pFVar23 + lVar43 * 4) = local_274c;
  } while (uVar17 < uVar29);
LAB_145aa1a87:
  this_03 = local_2648;
  if ((*(longlong *)&local_2648->field_0x300 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FD3D12ExplicitDescriptorCache::FD3D12ExplicitDescriptorCache
            (&local_2268,*(FD3D12Device **)&this_03->field_0x300,uVar29);
  FD3D12ExplicitDescriptorCache::Init(&local_2268,0,uVar48,uVar49,Minimal);
  local_2058.ArrayMax = 4;
  local_2058.AllocatorInstance.SecondaryData = (ForElementType<FShaderBundleBinderOps>)0x0;
  local_2058.ArrayNum = 0;
  TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_2058,uVar29,Default);
  local_26f8._padding_ = 0;
  local_26f8._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  local_26f8._padding_ = 0;
  local_26f8.bNeedsCPUAccess = false;
  iVar37 = (pFVar21->MaxRootArgOffset + 1) * (pFVar21->RootArgStrideInBytes >> 2);
  iVar16 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                     (4,4,iVar37,(ForAnyElementType *)&local_26f8._padding_,
                      (int *)&local_26f8._padding_,(int *)((longlong)&local_26f8._padding_ + 4));
  uVar34 = local_26f8._padding_;
  if ((local_26f8._padding_ & 1U) != 0) {
    uVar34 = (longlong)&local_26f8._padding_ + (local_26f8._padding_ >> 0x18);
  }
  memset((void *)(uVar34 + (longlong)iVar16 * 4),0,(longlong)iVar37 << 2);
  local_2158.ConstantBuffer = (FD3D12ConstantBuffer *)0x0;
  if ((*(longlong *)&this_03->field_0x300 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation
            (&local_2158.ResourceLocation,*(FD3D12Device **)&this_03->field_0x300);
  local_22f8.DataPtr = param_4->DataPtr;
  local_22f8.ArrayNum = param_4->ArrayNum;
  local_22f8._12_4_ = *(undefined4 *)&param_4->field_0xc;
  SetShaderBundleSharedBindlessConstants(this_03,&local_22f8,&local_2158);
  fStack_2610 = local_20c0;
  iVar16 = local_2748.ArrayNum;
  local_2618 = local_20d8;
  if (local_20c8 !=
      (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
       *)0x0) {
    local_2618 = local_20c8;
  }
  if (((int)local_20c0 < 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2338.LocalRootArgs = &local_26f8;
  local_22e8[1]._4_4_ = uStack_260c;
  local_22e8[1]._0_4_ = fStack_2610;
  local_2338.TransientDescriptorCache = &local_2268;
  local_22e8[0] = local_2618;
  local_2338.ValidRecords = &local_2748;
  local_2338.__this = this_03;
  local_2338.Dispatches = local_2720;
  local_2338.BinderOps = &local_2058;
  local_2338.SharedConstantBuffer = &local_2158;
  local_2338.Pipeline = pFVar21;
  ParallelForImpl::
  ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>
            (L"DispatchShaderBundle",iVar16,0x400,&local_2338,local_2776[0],None,
             (TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext,int>
              *)local_22e8);
  local_2738 = 1;
  if (1 < local_2058.ArrayNum) {
    local_2700 = (TArrayView<FRHIShaderParameterResource_const_,int> *)&DAT_00000090;
    local_2708 = 1;
    FVar36 = local_2777;
    do {
      pTVar42 = local_2700;
      local_2734 = ~local_2738 >> 0x1f;
      uVar17 = 0;
      if ((int)local_2738 < local_2058.ArrayNum) {
        uVar17 = local_2734;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      plVar52 = *(longlong **)
                 ((longlong)&pTVar42->DataPtr +
                 (longlong)
                 &((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
                  ((longlong)FVar31 + 0x60))->AllocatorInstance);
      iVar16 = *(int *)((longlong)((longlong)FVar31 + 0x68) + (longlong)pTVar42);
      plVar8 = plVar52 + iVar16;
      while( true ) {
        if (*(int *)((longlong)((longlong)FVar31 + 0x68) + (longlong)pTVar42) != iVar16) {
          local_2778 = (FNoopStruct)0x0;
          `TCheckedPointerIterator<FD3D12ShaderResourceView_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2778);
        }
        lVar43 = local_2708;
        FVar10 = local_2778;
        if (plVar52 == plVar8) break;
        pFVar5 = (FD3D12View *)*plVar52;
        if ((local_2058.ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar50 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
        if (local_2058.AllocatorInstance.SecondaryData !=
            (ForElementType<FShaderBundleBinderOps>)0x0) {
          FVar50 = local_2058.AllocatorInstance.SecondaryData;
        }
        local_2730 = pFVar5;
        if (((pFVar5->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xfe,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((pFVar5->ResourceInfo).Resource)->bRequiresResourceStateTracking) {
          cVar32 = '\0';
          uVar17 = ((uint)((ulonglong)local_2730 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_2730 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          uVar17 = uVar17 >> 0x10 ^ uVar17;
          psVar6 = *(schar **)((longlong)FVar50 + 8);
          uVar48 = *(uint *)((longlong)FVar50 + 0x20) & uVar17;
          uVar34 = (ulonglong)uVar48;
          if ((psVar6 != (schar *)0x0) && (-1 < psVar6[uVar34])) {
            cVar32 = '\0';
            do {
              if (local_2730 == (*(FD3D12View ***)((longlong)FVar50 + 0x10))[uVar34])
              goto LAB_145aa20ab;
              uVar48 = (int)uVar34 + 1;
              uVar34 = (ulonglong)uVar48;
              cVar32 = cVar32 + '\x01';
            } while (cVar32 <= psVar6[uVar34]);
          }
          Experimental::TSherwoodHashTable_Private::
          TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
          ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
                 *)FVar50,cVar32,(FData *)FVar50,uVar48,local_2730,uVar17,FVar36);
          pFVar1 = (((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)FVar50 + 0x60))->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_2730) &&
              ((FScriptContainerElement *)&local_2730 <
               pFVar1 + (longlong)*(int *)((longlong)FVar50 + 0x6c) * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar37 = *(int *)((longlong)FVar50 + 0x68);
          if (iVar37 == *(int *)((longlong)FVar50 + 0x6c)) {
            iVar37 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)((longlong)FVar50 + 0x60),
                                (int *)((longlong)FVar50 + 0x6c));
          }
          *(int *)((longlong)FVar50 + 0x68) = iVar37 + 1;
          *(FD3D12View **)
           ((((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar50 + 0x60))->AllocatorInstance).Data + (longlong)iVar37 * 8) =
               local_2730;
        }
LAB_145aa20ab:
        plVar52 = plVar52 + 1;
        pTVar42 = local_2700;
      }
      uVar17 = 0;
      if ((int)local_2738 < local_2058.ArrayNum) {
        uVar17 = local_2734;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      lVar30 = lVar43 * 0x90;
      pFVar23 = *(ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
                  **)(lVar30 + 0x70 + (longlong)FVar31);
      iVar16 = *(int *)(lVar30 + 0x78 + (longlong)FVar31);
      local_2618 = pFVar23 + (longlong)iVar16 * 8;
      while( true ) {
        pFVar11 = local_2618;
        if (*(int *)(lVar30 + 0x78 + (longlong)FVar31) != iVar16) {
          local_2777 = (FNoopStruct)0x0;
          `TCheckedPointerIterator<FD3D12UnorderedAccessView_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2777);
        }
        lVar4 = local_2708;
        uVar48 = local_2734;
        uVar17 = local_2738;
        FVar36 = local_2777;
        if (pFVar23 == pFVar11) break;
        pFVar5 = *(FD3D12View **)pFVar23;
        if ((local_2058.ArrayNum < 1) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        FVar50 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
        if (local_2058.AllocatorInstance.SecondaryData !=
            (ForElementType<FShaderBundleBinderOps>)0x0) {
          FVar50 = local_2058.AllocatorInstance.SecondaryData;
        }
        local_2728 = pFVar5;
        if (((pFVar5->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xfe,L""), bVar15)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        if (((pFVar5->ResourceInfo).Resource)->bRequiresResourceStateTracking) {
          cVar32 = '\0';
          uVar17 = ((uint)((ulonglong)local_2728 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_2728 >> 4)) * -0x7a143595;
          uVar17 = (uVar17 >> 0xd ^ uVar17) * -0x3d4d51cb;
          uVar17 = uVar17 >> 0x10 ^ uVar17;
          psVar6 = *(schar **)((longlong)FVar50 + 8);
          uVar48 = *(uint *)((longlong)FVar50 + 0x20) & uVar17;
          uVar34 = (ulonglong)uVar48;
          if ((psVar6 != (schar *)0x0) && (-1 < psVar6[uVar34])) {
            cVar32 = '\0';
            do {
              if (local_2728 == (*(FD3D12View ***)((longlong)FVar50 + 0x10))[uVar34])
              goto LAB_145aa230c;
              uVar48 = (int)uVar34 + 1;
              uVar34 = (ulonglong)uVar48;
              cVar32 = cVar32 + '\x01';
            } while (cVar32 <= psVar6[uVar34]);
          }
          Experimental::TSherwoodHashTable_Private::
          TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
          ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
                 *)FVar50,cVar32,(FData *)FVar50,uVar48,local_2728,uVar17,FVar10);
          pFVar1 = (((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)FVar50 + 0x70))->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_2728) &&
              ((FScriptContainerElement *)&local_2728 <
               pFVar1 + (longlong)*(int *)((longlong)FVar50 + 0x7c) * 8)) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar15)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar37 = *(int *)((longlong)FVar50 + 0x78);
          if (iVar37 == *(int *)((longlong)FVar50 + 0x7c)) {
            iVar37 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)((longlong)FVar50 + 0x70),
                                (int *)((longlong)FVar50 + 0x7c));
          }
          *(int *)((longlong)FVar50 + 0x78) = iVar37 + 1;
          *(FD3D12View **)
           ((((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar50 + 0x70))->AllocatorInstance).Data + (longlong)iVar37 * 8) =
               local_2728;
        }
LAB_145aa230c:
        pFVar23 = pFVar23 + 8;
      }
      uVar49 = 0;
      if ((int)local_2738 < local_2058.ArrayNum) {
        uVar49 = local_2734;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      pTVar46 = (TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar31 + 0x60) + lVar43 * 9;
      pTVar46->ArrayNum = 0;
      if (pTVar46->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar46->AllocatorInstance,0,&pTVar46->ArrayMax);
      }
      uVar49 = 0;
      if ((int)uVar17 < local_2058.ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      pTVar47 = (TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar31 + 0x70) + lVar43 * 9;
      pTVar47->ArrayNum = 0;
      if (pTVar47->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar47->AllocatorInstance,0,&pTVar47->ArrayMax);
      }
      uVar49 = 0;
      if ((int)uVar17 < local_2058.ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      if (((schar **)((longlong)FVar31 + 8))[lVar43 * 0x12] != (schar *)0x0) {
        FMemory::Free(((schar **)((longlong)FVar31 + 8))[lVar43 * 0x12]);
        FMemory::Free(((FD3D12View ***)((longlong)FVar31 + 0x10))[lVar43 * 0x12]);
        FMemory::Free(((FNoopStruct **)((longlong)FVar31 + 0x18))[lVar43 * 0x12]);
      }
      local_23d8 = 0;
      uStack_23d0 = 0;
      uStack_23c8 = 0;
      uStack_23c0 = 0;
      ((uint *)((longlong)FVar31 + 0x20))[lVar43 * 0x24] = 0;
      ((uchar *)((longlong)FVar31 + 0x24))[lVar30] = '\0';
      *(undefined8 *)
       &(((FShaderBundleBinderOps *)((longlong)FVar31 + lVar30))->TransitionViewSet).Table.
        CurrentData = 0;
      (((FShaderBundleBinderOps *)((longlong)FVar31 + lVar30))->TransitionViewSet).Table.CurrentData
      .Distances = (schar *)0x0;
      ((int *)((longlong)FVar31 + 0x28))[lVar43 * 0x24] = 0;
      ((FD3D12View ***)((longlong)FVar31 + 0x10))[lVar43 * 0x12] = (FD3D12View **)0x0;
      ((FD3D12View ***)((longlong)FVar31 + 0x10) + lVar43 * 0x12)[1] = (FD3D12View **)0x0;
      uVar49 = 0;
      if ((int)uVar17 < local_2058.ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      pTVar47 = (TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                ((longlong)FVar31 + 0x80) + lVar43 * 9;
      pTVar47->ArrayNum = 0;
      if (pTVar47->ArrayMax != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&pTVar47->AllocatorInstance,0,&pTVar47->ArrayMax);
      }
      uVar49 = 0;
      if ((int)uVar17 < local_2058.ArrayNum) {
        uVar49 = uVar48;
      }
      if ((uVar49 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
      if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar31 = local_2058.AllocatorInstance.SecondaryData;
      }
      if (((schar **)((longlong)FVar31 + 0x38))[lVar43 * 0x12] != (schar *)0x0) {
        FMemory::Free(((schar **)((longlong)FVar31 + 0x38))[lVar43 * 0x12]);
        FMemory::Free(((FD3D12View ***)((longlong)FVar31 + 0x40))[lVar43 * 0x12]);
        FMemory::Free(((FNoopStruct **)((longlong)FVar31 + 0x48))[lVar43 * 0x12]);
      }
      ((uint *)((longlong)FVar31 + 0x50))[lVar43 * 0x24] = 0;
      local_2738 = uVar17 + 1;
      ((uchar *)((longlong)FVar31 + 0x54))[lVar30] = '\0';
      local_2708 = lVar4 + 1;
      ((int *)((longlong)FVar31 + 0x58))[lVar43 * 0x24] = 0;
      uStack_2450 = 0;
      uStack_2448 = 0;
      local_2458 = 0;
      uStack_2440 = 0;
      *(undefined8 *)
       &((TSherwoodSet<FD3D12View_*,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
          *)((longlong)FVar31 + 0x30))[lVar43 * 3].Table.CurrentData = 0;
      ((TSherwoodSet<FD3D12View_*,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_> *)
      ((longlong)FVar31 + 0x30))[lVar43 * 3].Table.CurrentData.Distances = (schar *)0x0;
      ((FD3D12View ***)((longlong)FVar31 + 0x40))[lVar43 * 0x12] = (FD3D12View **)0x0;
      ((FD3D12View ***)((longlong)FVar31 + 0x40) + lVar43 * 0x12)[1] = (FD3D12View **)0x0;
      local_2700 = local_2700 + 9;
      this_03 = local_2648;
    } while ((int)local_2738 < local_2058.ArrayNum);
  }
  uVar34 = 0;
  if ((local_2058.ArrayNum < 1) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
  if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FVar31 = local_2058.AllocatorInstance.SecondaryData;
  }
  pFVar40 = (((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar31 + 0x80))->AllocatorInstance).Data;
  iVar16 = *(int *)((longlong)FVar31 + 0x88);
  pFVar1 = pFVar40 + (longlong)iVar16 * 8;
  while( true ) {
    if (*(int *)((longlong)FVar31 + 0x88) != iVar16) {
      local_2776[0] = (<lambda_1>)0x0;
      `TCheckedPointerIterator<FD3D12UnorderedAccessView_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2776);
    }
    if (pFVar40 == pFVar1) break;
    ClearShaderResources(this_03,*(FD3D12UnorderedAccessView **)pFVar40,SRVMask);
    pFVar40 = pFVar40 + 8;
  }
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)this_03);
  pFVar13 = local_24f8;
  local_24b8.Shader4ComponentMapping = 0x1688;
  local_24b8._12_4_ = 0;
  local_24b8.field3_0x10._16_8_ = 1;
  local_24b8.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  local_24b8.field3_0x10.Buffer.NumElements = (local_24f8->Desc).Size >> 2;
  local_24b8.Format = DXGI_FORMAT_R32_TYPELESS;
  local_24b8.field3_0x10.Buffer.FirstElement = 0;
  uVar17 = 0;
  local_24b8.field3_0x10.Buffer.StructureByteStride = 0;
  local_2638.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((*(longlong *)&this_03->field_0x300 == 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pFVar7 = *(FD3D12Device **)&this_03->field_0x300;
  pTVar24 = ::operator_new(0xa8);
  if (pTVar24 == (TReferenceControllerBase<1> *)0x0) {
    local_25f0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    local_2640 = (FD3D12ShaderResourceView *)&DAT_00000010;
  }
  else {
    pTVar24->SharedReferenceCount = (atomic<int>)0x1;
    pTVar24->WeakReferenceCount = (atomic<int>)0x1;
    pTVar24->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
    ;
    FD3D12ShaderResourceView::FD3D12ShaderResourceView
              ((FD3D12ShaderResourceView *)(pTVar24 + 1),pFVar7,(FD3D12ShaderResourceView *)0x0,
               BufferSRV,(FD3D12RayTracingScene *)0x0);
    local_2640 = (FD3D12ShaderResourceView *)(pTVar24 + 1);
    if ((local_2640 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    LOCK();
    pTVar24->SharedReferenceCount = (atomic<int>)((int)pTVar24->SharedReferenceCount + 1);
    UNLOCK();
    local_25f0.ReferenceController = pTVar24;
  }
  FVar12.ReferenceController = local_25f0.ReferenceController;
  local_25f8 = 0;
  SharedPointerInternals::FSharedReferencer<1>::operator=(&local_2638,&local_25f0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25f0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  this_00 = local_2640;
  if ((local_2640 == (FD3D12ShaderResourceView *)0x0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar15)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_2470.BaseResource = (FD3D12BaseShaderResource *)(pFVar13 + 1);
  if ((FRHIBuffer *)local_2470.BaseResource == (FRHIBuffer *)0x0) {
    local_2470.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_2470.Resource = (FD3D12Resource *)0x0;
  }
  else {
    local_2470.ResourceLocation = (FD3D12ResourceLocation *)&pFVar13[1]._padding_;
    local_2470.Resource = (FD3D12Resource *)pFVar13[1]._padding_;
  }
  FD3D12ShaderResourceView::CreateView(this_00,&local_2470,&local_24b8,None);
  uVar41 = 0;
  if (local_2718 == 0) {
    if ((this_00 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if ((this_00->_padding_ == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                            ,0x103,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_24f8 = (FRHIBuffer *)this_00->_padding_;
    lStack_24f0 = this_00->_padding_;
    local_258[((local_23f8.ShaderContent)->RecordArgBufferParam).BaseIndex].ptr =
         (ulong64)local_24f8;
    FD3D12ExplicitDescriptorCache::Allocate
              (&local_2268,local_258,1,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,0);
    DVar25 = FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(&local_2268.ViewHeap,(uint)local_22d8);
    uVar41 = *(undefined8 *)DVar25.ptr;
    lVar43 = *(longlong *)&local_24c0[1].field_0x38;
    bVar2 = *(byte *)(lVar43 + 0x25);
    uVar34 = (ulonglong)bVar2;
    if ((0x1f < bVar2) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar21 = local_26d8;
    bVar2 = *(byte *)(uVar34 + 0x98 + lVar43);
    uVar48 = local_26d8->RootArgStrideInBytes;
    if (((local_26d8->RootArgOffsets).ArrayNum < 1) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar49 = *(int *)(pFVar21->RootArgOffsets).AllocatorInstance.Data *
             pFVar21->RootArgStrideInBytes >> 2;
    if (((int)(uint)local_26f8._padding_ <= (int)uVar49) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar45 = local_26f8._padding_;
    if ((local_26f8._padding_ & 1U) != 0) {
      uVar45 = (longlong)&local_26f8._padding_ + (local_26f8._padding_ >> 0x18);
    }
    if ((uVar48 >> 2 <= (uint)bVar2) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_03 = local_2648;
    *(undefined8 *)(uVar45 + ((ulonglong)uVar49 + (ulonglong)bVar2) * 4) = uVar41;
  }
  else {
    if ((this_00 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar17 = (uint)this_00->_padding_;
    if ((uVar17 == 0xffffffff) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecordArgBufferBindlessHandle != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x51a,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FD3D12StateCache::ApplyBindlessResources(&this_03->StateCache,(FD3D12RootSignature *)0x0,5,6);
  }
  uVar35 = 0;
  uVar45 = uVar35;
  uVar51 = uVar35;
  if ((uint)local_26f8._padding_ != 0) {
    if ((uint)local_26f8._padding_ < 0x40000000) {
      local_2520 = (ulonglong)((uint)local_26f8._padding_ * 4);
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_int,0>::GetResourceDataSize(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
      local_2520 = 0;
    }
    local_2568 = (undefined4)local_2520;
    uStack_2514 = 0x10001;
    uStack_2510 = 0;
    uStack_2504 = 1;
    uStack_2500 = 0;
    local_2530 = 1;
    uStack_2528 = 0;
    local_2090._4_4_ = uStack_252c;
    local_2090.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    uStack_2518 = 1;
    local_2090.Height = 1.4013e-45;
    local_2090._28_4_ = 9.18369e-41;
    uStack_250c = 1;
    uStack_2508 = 0;
    local_2090.Alignment = 0;
    local_2090.Format = 0.0;
    local_2090.SampleDesc.Count = 1.4013e-45;
    local_2090.SampleDesc.Quality = 0;
    local_2090.Layout = D3D12_TEXTURE_LAYOUT_ROW_MAJOR;
    uStack_2564 = 0;
    uStack_2560 = 1;
    local_2090._48_8_ = (ulonglong)uStack_24fc << 0x20;
    local_2558 = L"BundleRecordBuffer";
    pFStack_2550 = (FResourceArrayUploadInterface *)0x0;
    EStack_2544 = Default;
    FStack_2540.Value = 0;
    uStack_253c = 0;
    FStack_2538.Value = 0;
    uStack_2534 = 0;
    local_2548 = CopyDest;
    local_2090.Width = local_2520;
    if ((*(longlong *)&this_03->field_0x300 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    iStack_255c = 1 << ((byte)*(undefined4 *)(*(longlong *)&this_03->field_0x300 + 8) & 0x1f);
    local_22b8._padding_ = CONCAT44(uStack_2564,local_2568);
    local_22b8._padding_ = CONCAT44(iStack_255c,uStack_2560);
    local_22b8.DebugName = local_2558;
    local_22b8.InitialData = pFStack_2550;
    local_22b8.OwnerName.Number = uStack_2534;
    local_22b8.OwnerName.ComparisonIndex.Value = FStack_2538.Value;
    local_22b8.InitAction = EStack_2544;
    local_22b8.InitialState = local_2548;
    local_22b8.ClassName.Number = uStack_253c;
    local_22b8.ClassName.ComparisonIndex.Value = FStack_2540.Value;
    if ((*(longlong *)&this_03->field_0x300 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    lVar43 = *(longlong *)&this_03->field_0x300;
    if ((*(longlong *)(lVar43 + 0x10) == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar15)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    this_02 = FD3D12Adapter::CreateRHIBuffer
                        (*(FD3D12Adapter **)(lVar43 + 0x10),&local_2090,0x10,&local_22b8,MultiState,
                         CopyDest,true,(ID3D12ResourceAllocator *)0x0);
    TVar26 = FD3D12Buffer::UploadResourceDataViaCopyQueue
                       (this_02,(FD3D12CommandContext *)&local_24c8,
                        (FResourceArrayUploadInterface *)this_03);
    iVar16 = *(int *)&this_03->field_0x20;
    if (iVar16 == *(int *)&this_03->field_0x24) {
      iVar16 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&this_03->field_0x18,
                          (int *)&this_03->field_0x24);
    }
    *(int *)&this_03->field_0x20 = iVar16 + 1;
    lVar43 = *(longlong *)&this_03->field_0x18;
    *(undefined8 *)(lVar43 + (longlong)iVar16 * 8) = 0;
    *(longlong *)(lVar43 + (longlong)iVar16 * 8) = (TVar26.Reference)->_padding_;
    (TVar26.Reference)->_padding_ = 0;
    if (local_24c8 != (undefined8 *)0x0) {
      piVar27 = (int *)(local_24c8 + 1);
      LOCK();
      iVar16 = *piVar27;
      *piVar27 = *piVar27 + -1;
      UNLOCK();
      if (((iVar16 == 1) && (piVar27 != (int *)0x0)) && (local_24c8 != (undefined8 *)0x0)) {
        (**(code **)*local_24c8)(local_24c8,1);
      }
    }
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)this_03,(FD3D12Resource *)this_02->_padding_,CopyDest,Common,
               0xffffffff);
    uVar45 = this_02->_padding_;
    uVar35 = this_02->_padding_;
    uVar51 = (ulonglong)local_26d8->RootArgStrideInBytes;
  }
  SetExplicitDescriptorCache(this_03,&local_2268);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xf0))(plVar8,(local_26d8->RootSignature).Reference);
  if (local_2718 == 0) {
    if (*(longlong *)&this_03->field_0x188 == 0) {
      (**(code **)(*(longlong *)this_03 + 8))(this_03);
    }
    plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
    piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
    *piVar27 = *piVar27 + 1;
    (**(code **)(*plVar8 + 0x100))(plVar8,uVar34,uVar41);
  }
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0x160))(plVar8,0,0x20,0);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0x158))(plVar8,0);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0x170))(plVar8,0,0,0);
  pFVar14 = local_24d0;
  iVar16 = *(int *)&(local_24d0->ViewRect).field0_0x0;
  iVar37 = *(int *)((longlong)&(local_24d0->ViewRect).field0_0x0 + 4);
  local_2098 = local_24d0->DepthMin;
  local_20a8 = (float)iVar16;
  local_20a4 = (float)iVar37;
  local_20a0 = (float)(*(int *)((longlong)&(local_24d0->ViewRect).field0_0x0 + 8) - iVar16);
  local_209c = (float)(*(int *)((longlong)&(local_24d0->ViewRect).field0_0x0 + 0xc) - iVar37);
  local_2094 = local_24d0->DepthMax;
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  uVar41 = 1;
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xa8))(plVar8,1,&local_20a8);
  local_20b8 = *(float *)&(pFVar14->ViewRect).field0_0x0;
  local_20b4 = *(float *)((longlong)&(pFVar14->ViewRect).field0_0x0 + 4);
  local_20b0 = *(float *)((longlong)&(pFVar14->ViewRect).field0_0x0 + 8);
  local_20ac = *(float *)((longlong)&(pFVar14->ViewRect).field0_0x0 + 0xc);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xb0))(plVar8,1,&local_20b8);
  EVar3 = pFVar14->PrimitiveType;
  if (EVar3 == PT_TriangleList) {
    uVar41 = 4;
  }
  else if (EVar3 == PT_TriangleStrip) {
    uVar41 = 5;
  }
  else if (EVar3 == PT_LineList) {
    uVar41 = 2;
  }
  else if (EVar3 != PT_PointList) {
    bVar15 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5351138129619190370>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12Util.h"
                        ,0x262,"0");
    if (bVar15) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uVar41 = 0;
  }
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xa0))(plVar8,uVar41);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xc0))(plVar8,pFVar14->StencilRef);
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x28);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0xb8))(plVar8,pFVar14->BlendFactor);
  pFVar21 = local_26d8;
  local_23b8 = 5;
  uStack_23b0 = (local_26d8->ProgramIdentifier).OpaqueData[0];
  local_23a8 = (local_26d8->ProgramIdentifier).OpaqueData[1];
  uStack_23a0 = (local_26d8->ProgramIdentifier).OpaqueData[2];
  local_2398 = (local_26d8->ProgramIdentifier).OpaqueData[3];
  uStack_2390 = 1;
  local_2388 = (local_26d8->BackingMemoryAddressRange).StartAddress;
  uStack_2380 = (local_26d8->BackingMemoryAddressRange).SizeInBytes;
  local_2378 = uVar45;
  uStack_2370 = uVar35;
  local_2368 = uVar51;
  if (*(longlong *)&this_03->field_0x188 == 0) {
    (**(code **)(*(longlong *)this_03 + 8))(this_03);
  }
  plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x78);
  piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
  *piVar27 = *piVar27 + 1;
  (**(code **)(*plVar8 + 0x2a0))(plVar8,&local_23b8);
  aVar18 = (atomic<unsigned_int>)GetFrameFenceCounter(this_03);
  (pFVar21->FrameCounter).LastUsedFrame = aVar18;
  pFVar28 = FDispatchShaderBundleWorkGraph::MakeInputRecord
                      (&local_2280,local_2720->ArrayNum,local_24e8->ArgOffset,local_24e8->ArgStride,
                       uVar17);
  local_2358[0]._0_4_ = pFVar28->DispatchGridSize;
  local_2358[0]._4_4_ = pFVar28->RecordCount;
  local_2358[1] = *(undefined8 *)&(pFVar28->PlatformData).field0_0x0;
  local_2348 = (pFVar28->PlatformData).field0_0x0._s_0.Z;
  if (GShaderBundleSkipDispatch == false) {
    local_2484 = 1;
    local_2490 = 0;
    local_2488 = 0;
    local_2480 = local_2358;
    local_2478 = 0x14;
    if (*(longlong *)&this_03->field_0x188 == 0) {
      (**(code **)(*(longlong *)this_03 + 8))(this_03);
    }
    plVar8 = *(longlong **)(*(longlong *)&this_03->field_0x188 + 0x78);
    piVar27 = (int *)(*(longlong *)&this_03->field_0x188 + 0x168);
    *piVar27 = *piVar27 + 1;
    (**(code **)(*plVar8 + 0x2a8))(plVar8,&local_2490);
  }
  UnsetExplicitDescriptorCache(this_03);
  FD3D12StateCache::DirtyState(&this_03->StateCache);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)this_03);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2638.ReferenceController);
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_2158.ResourceLocation);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_26f8._padding_);
  local_26f8._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FVar31 = (ForElementType<FShaderBundleBinderOps>)&local_2058;
  if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FVar31 = local_2058.AllocatorInstance.SecondaryData;
  }
  DestructItems<FShaderBundleBinderOps,int>((FShaderBundleBinderOps *)FVar31,local_2058.ArrayNum);
  if (local_2058.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FMemory::Free((void *)local_2058.AllocatorInstance.SecondaryData);
  }
  DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
            ((FWorkerThreadData *)local_2268.WorkerData.AllocatorInstance.Data,
             local_2268.WorkerData.ArrayNum);
  if ((FWorkerThreadData *)local_2268.WorkerData.AllocatorInstance.Data != (FWorkerThreadData *)0x0)
  {
    FMemory::Free(local_2268.WorkerData.AllocatorInstance.Data);
  }
  FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_2268.SamplerHeap);
  FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_2268.ViewHeap);
  if (local_20c8 !=
      (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,FRHIShaderBundleGraphicsState_const_&,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleGraphicsDispatch_const_,int>)_::_2_::FTaskContext>
       *)0x0) {
    FMemory::Free(local_20c8);
  }
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)local_2770.Data,(int)local_2768);
  if ((FNameMap *)local_2770.Data != (FNameMap *)0x0) {
    FMemory::Free(local_2770.Data);
  }
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)local_25d8.NameMaps.AllocatorInstance.Data,local_25d8.NameMaps.ArrayNum);
  if ((FNameMap *)local_25d8.NameMaps.AllocatorInstance.Data != (FNameMap *)0x0) {
    FMemory::Free(local_25d8.NameMaps.AllocatorInstance.Data);
  }
  if (local_25d8.ProgramName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25d8.ProgramName.Data.AllocatorInstance.Data);
  }
  if (local_2760.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2760.Data);
  }
  if (local_2748.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2748.AllocatorInstance.Data);
  }
  if (local_26d0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_26d0.Data);
  }
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1e08);
  return;
}

// DispatchWorkGraphShaderBundle @ 145aa3450

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000145aa3e58) */
/* WARNING: Removing unreachable block (ram,0x000145aa3b08) */
/* WARNING: Removing unreachable block (ram,0x000145aa3cb3) */
/* WARNING: Removing unreachable block (ram,0x000145aa4033) */
/* WARNING: Removing unreachable block (ram,0x000145aa3e66) */
/* WARNING: Removing unreachable block (ram,0x000145aa3b16) */
/* WARNING: Removing unreachable block (ram,0x000145aa3cc1) */
/* WARNING: Removing unreachable block (ram,0x000145aa4044) */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "D3D_ROOT_SIGNATURE_VERSION": Some values do not have unique names */
/* WARNING: Enum "D3D_SHADER_MODEL": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::DispatchWorkGraphShaderBundle
          (FD3D12CommandContext *this,FRHIShaderBundle *param_1,FRHIBuffer *param_2,
          TArrayView<FRHIShaderParameterResource_const_,int> *param_3,
          TArrayView<FRHIShaderBundleComputeDispatch_const_,int> *param_4)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  byte bVar3;
  FD3D12Device *pFVar4;
  FD3D12View *pFVar5;
  schar *psVar6;
  code *pcVar7;
  FNoopStruct FVar8;
  longlong lVar9;
  FRHIBuffer *pFVar10;
  FD3D12ShaderResourceView *this_00;
  float fVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FGlobalShaderMap *this_01;
  FRHIWorkGraphShader *pFVar17;
  FWorkGraphPipelineState *pFVar18;
  FTaskGraphInterface *pFVar19;
  TReferenceControllerBase<1> *pTVar20;
  FD3D12Buffer *this_02;
  TRefCountPtr<FD3D12SyncPoint> TVar21;
  int *piVar22;
  FEntryNodeRecord *pFVar23;
  ulonglong uVar24;
  ForElementType<FShaderBundleBinderOps> FVar25;
  char cVar26;
  IRHICommandContext *pIVar27;
  wchar_t *pwVar28;
  FNoopStruct FVar29;
  IRHICommandContext *pIVar30;
  ForAnyElementType FVar31;
  FScriptContainerElement *pFVar32;
  uint uVar33;
  TReferenceControllerBase<1> *pTVar34;
  ForElementType<FShaderBundleBinderOps> this_03;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  *pFVar35;
  FD3D12CommandContext *pFVar36;
  FD3D12WorkGraphPipelineState *pFVar37;
  uint uVar38;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  *pFVar39;
  longlong lVar40;
  longlong *plVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auStackY_27e8 [32];
  FNoopStruct local_2798;
  FNoopStruct local_2797 [7];
  ForAnyElementType local_2790;
  undefined8 local_2788;
  ForAnyElementType local_2780;
  undefined8 local_2778;
  uint local_2770;
  uint local_276c;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_2768;
  undefined1 local_2758 [4];
  uint local_2754;
  uint local_2750;
  uint local_274c;
  longlong local_2748;
  FD3D12View *local_2740;
  FD3D12View *local_2738;
  uint local_2730;
  longlong local_2728;
  TResourceArray<unsigned_int,0> local_2720;
  FRHIWorkGraphShader *local_2700;
  FD3D12CommandContext *local_26f8;
  FD3D12WorkGraphPipelineState *local_26f0;
  FRHIBuffer *local_26e8;
  TArrayView<FRHIShaderParameterResource_const_,int> *local_26e0;
  FNameMap local_26d8;
  FNameMap local_26b0;
  FNameMap local_2688;
  FNameMap local_2660;
  uint local_2638;
  FD3D12ShaderResourceView *local_2630;
  FSharedReferencer<1> local_2628 [2];
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  *local_2618;
  longlong lStack_2610;
  longlong local_2608;
  longlong local_2600;
  FString local_25f8;
  FString local_25e8;
  undefined8 local_25d8;
  FSharedReferencer<1> local_25d0;
  FString local_25c8;
  FString local_25b8;
  undefined4 local_25a8;
  undefined4 uStack_25a4;
  undefined4 uStack_25a0;
  int iStack_259c;
  wchar_t *local_2598;
  FResourceArrayUploadInterface *pFStack_2590;
  ERHIAccess local_2588;
  ERHIBufferInitAction EStack_2584;
  FNameEntryId FStack_2580;
  uint uStack_257c;
  FNameEntryId FStack_2578;
  uint uStack_2574;
  FWorkGraphPipelineStateInitializer local_2568;
  undefined4 local_24f8;
  undefined4 uStack_24f4;
  undefined8 uStack_24f0;
  ulonglong local_24e8;
  undefined4 uStack_24e0;
  undefined4 uStack_24dc;
  undefined4 uStack_24d8;
  undefined4 uStack_24d4;
  undefined4 uStack_24d0;
  undefined4 uStack_24cc;
  undefined4 uStack_24c8;
  uint uStack_24c4;
  FRHIShaderBundle *local_24c0;
  undefined8 *local_24b8;
  undefined8 local_24b0;
  D3D12_SHADER_RESOURCE_VIEW_DESC local_24a8;
  undefined8 local_2480;
  undefined4 local_2478;
  undefined4 local_2474;
  undefined8 *local_2470;
  undefined8 local_2468;
  FResourceInfo local_2460;
  undefined8 local_2448;
  undefined8 uStack_2440;
  undefined8 uStack_2438;
  undefined8 uStack_2430;
  FString local_2428;
  FNameMap *local_2418;
  int iStack_2410;
  undefined4 uStack_240c;
  FScriptContainerElement *local_2408;
  int iStack_2400;
  undefined4 uStack_23fc;
  TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable> local_23f8;
  FString local_23e8;
  FString local_23d8;
  FString local_23c8;
  undefined8 local_23b8;
  undefined8 uStack_23b0;
  undefined8 uStack_23a8;
  undefined8 uStack_23a0;
  undefined8 local_2398;
  ulong64 uStack_2390;
  ulong64 local_2388;
  ulong64 uStack_2380;
  ulong64 local_2378;
  ulonglong uStack_2370;
  ulong64 local_2368;
  ulong64 uStack_2360;
  longlong local_2358;
  longlong lStack_2350;
  ulonglong local_2348;
  undefined8 local_2338 [2];
  uint local_2328;
  <lambda_1>_conflict local_2318;
  TArrayView<FRHIShaderParameterResource_const_,int> local_22d8;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  *local_22c8;
  longlong lStack_22c0;
  TArrayView<FWorkGraphPipelineStateInitializer::FNameMap,int> local_22b8;
  FRHIBufferCreateDesc local_22a8;
  FEntryNodeRecord local_2270;
  FD3D12ExplicitDescriptorCache local_2258;
  FAllocatedConstantBuffer local_2148;
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  local_20c8 [16];
  ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
  *local_20b8;
  float local_20b0;
  float local_20ac;
  D3D12_RESOURCE_DESC local_20a8;
  TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_2070
  ;
  FRHICommandList_RecursiveHazardous local_1e20;
  D3D12_CPU_DESCRIPTOR_HANDLE local_268 [64];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_27e8;
  pIVar30 = (IRHICommandContext *)0x0;
  pIVar27 = (IRHICommandContext *)&this->field_0x1c0;
  if (this == (FD3D12CommandContext *)0x0) {
    pIVar27 = pIVar30;
  }
  local_26f8 = this;
  local_26e8 = param_2;
  local_26e0 = param_3;
  local_24c0 = param_1;
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous(&local_1e20,pIVar27);
  this_01 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  FGlobalShaderMap::GetShader<FDispatchShaderBundleWorkGraph>(this_01,&local_23f8);
  pFVar17 = TShaderRefBase<FDispatchShaderBundleWorkGraph,FShaderMapPointerTable>::
            GetWorkGraphShader(&local_23f8);
  uVar15 = param_4->ArrayNum;
  lVar40 = (longlong)(int)uVar15;
  local_2730 = (byte)pFVar17[1].field_0x10 & 2;
  bVar3 = pFVar17[1].field_0x11;
  uVar38 = (uint)bVar3;
  uVar33 = (uint)(byte)pFVar17[1].field_0x14 + (uint)(byte)pFVar17[1].field_0x13 +
           (uint)(byte)pFVar17[1].field_0x12;
  local_2638 = uVar15;
  iVar13 = FDispatchShaderBundleWorkGraph::GetMaxShaderBundleSize();
  if ((iVar13 < (int)uVar15) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumRecords <= FDispatchShaderBundleWorkGraph::GetMaxShaderBundleSize()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                          ,0x332,
                          L"Too many entries in a shader bundle (%d). Try increasing \'r.ShaderBundle.MaxSize\'"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2768.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2768.ArrayNum = 0;
  local_2768.ArrayMax = 0;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  if (0 < (int)uVar15) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar15,&local_2768.AllocatorInstance,0,&local_2768.ArrayMax);
  }
  uVar14 = uVar15 + 1;
  local_2778 = 0;
  local_2780.Data = (FScriptContainerElement *)0x0;
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  pIVar27 = pIVar30;
  if (0 < (int)uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar14,&local_2780,0,(int *)((longlong)&local_2778 + 4));
    pIVar27 = (IRHICommandContext *)(local_2778 & 0xffffffff);
  }
  iVar13 = (int)pIVar27;
  local_2700 = pFVar17;
  if ((local_2780.Data <= (FScriptContainerElement *)&local_2700) &&
     ((FScriptContainerElement *)&local_2700 < local_2780.Data + (longlong)local_2778._4_4_ * 8)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iVar13 = (int)local_2778;
  }
  if (iVar13 == local_2778._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&local_2780,(int *)((longlong)&local_2778 + 4));
  }
  local_2778 = CONCAT44(local_2778._4_4_,iVar13 + 1);
  *(FRHIWorkGraphShader **)(local_2780.Data + (longlong)iVar13 * 8) = local_2700;
  if (0 < (int)uVar15) {
    pIVar27 = pIVar30;
    auVar42 = ZEXT516(CONCAT14(bVar3,uVar33));
    do {
      uVar33 = (uint)pIVar30;
      uVar15 = 0;
      if ((int)uVar33 < param_4->ArrayNum) {
        uVar15 = ~uVar33 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)((longlong)&param_4->DataPtr[-1].Parameters.TypedValue.ResourceParameters.DataPtr
                  + (longlong)
                    &(pIVar27->RenderPassInfo).ColorRenderTargets.Elements[0].ResolveTarget) == -1)
      {
        local_2748 = 0;
      }
      else {
        local_2748 = *(longlong *)
                      (&param_4->DataPtr[-1].Parameters.bIsSet +
                      (longlong)(pIVar27->RenderPassInfo).ColorRenderTargets.Elements);
      }
      if (((local_2780.Data <= (FScriptContainerElement *)&local_2748) &&
          ((FScriptContainerElement *)&local_2748 < local_2780.Data + (longlong)local_2778._4_4_ * 8
          )) && (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar13 = (int)local_2778;
      if ((int)local_2778 == local_2778._4_4_) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&local_2780,(int *)((longlong)&local_2778 + 4));
      }
      local_2778 = CONCAT44(local_2778._4_4_,iVar13 + 1);
      *(longlong *)(local_2780.Data + (longlong)iVar13 * 8) = local_2748;
      auVar43 = auVar42;
      if (local_2748 != 0) {
        local_2770 = uVar33;
        if (((local_2768.AllocatorInstance.Data <= (FScriptContainerElement *)&local_2770) &&
            ((FScriptContainerElement *)&local_2770 <
             local_2768.AllocatorInstance.Data + (longlong)local_2768.ArrayMax * 4)) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar13 = local_2768.ArrayNum;
        if (local_2768.ArrayNum == local_2768.ArrayMax) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_2768.AllocatorInstance,&local_2768.ArrayMax);
        }
        local_2768.ArrayNum = iVar13 + 1;
        *(uint *)(local_2768.AllocatorInstance.Data + (longlong)iVar13 * 4) = local_2770;
        if (local_2748 != 0) {
          auVar43._0_4_ =
               auVar42._0_4_ +
               (uint)*(byte *)(local_2748 + 0x11c) + (uint)*(byte *)(local_2748 + 0x11b) +
               (uint)*(byte *)(local_2748 + 0x11a);
          auVar43._4_4_ = auVar42._4_4_ + (uint)*(byte *)(local_2748 + 0x119);
          auVar43._8_4_ = auVar42._8_4_;
          auVar43._12_4_ = auVar42._12_4_;
        }
      }
      pIVar30 = (IRHICommandContext *)(ulonglong)(uVar33 + 1);
      pIVar27 = (IRHICommandContext *)
                &(pIVar27->RenderPassInfo).ColorRenderTargets.Elements[3].ArraySlice;
      lVar40 = lVar40 + -1;
      auVar42 = auVar43;
    } while (lVar40 != 0);
    uVar33 = auVar43._0_4_;
    uVar38 = auVar43._4_4_;
  }
  local_2568._padding_ = 0;
  local_2568.RootShaderIndex = -1;
  local_2568._padding_ = 0;
  local_2568._padding_ = 0;
  local_2568._padding_ = 0;
  local_2568.ProgramName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2568.ProgramName.Data.ArrayNum = 0;
  local_2568.ProgramName.Data.ArrayMax = 0;
  local_2568.NameMaps.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2568.NameMaps.ArrayNum = 0;
  local_2568.NameMaps.ArrayMax = 0;
  local_2568.ShaderTable.DataPtr = (FRHIWorkGraphShader **)0x0;
  iVar13 = 0;
  local_2568.ShaderTable._8_8_ = (ulonglong)(uint)local_2568.ShaderTable._12_4_ << 0x20;
  local_2568.GraphicsPSOTable.DataPtr = (FGraphicsPipelineStateInitializer **)0x0;
  local_2568.GraphicsPSOTable.ArrayNum = 0;
  ::FString::operator=(&local_2568.ProgramName,L"ShaderBundle");
  if (local_2568.ProgramName.Data.ArrayNum == 0) {
    pwVar28 = L"";
    iVar16 = iVar13;
  }
  else {
    pwVar28 = (wchar_t *)local_2568.ProgramName.Data.AllocatorInstance.Data;
    iVar16 = local_2568.ProgramName.Data.ArrayNum + -1;
  }
  uVar15 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar28);
  local_2568._padding_ = (longlong)uVar15;
  local_2790.Data = (FScriptContainerElement *)0x0;
  local_2788 = 0;
  ::FString::FString(&local_23e8,L"WorkGraphMainCS");
  ::FString::FString(&local_25c8,L"WorkGraphMainCS");
  ::FString::FString(&local_26b0.ExportName,&local_25c8);
  ::FString::FString(&local_26b0.NodeName,&local_23e8);
  if (local_25c8.Data.ArrayNum == 0) {
    pwVar28 = L"";
    iVar16 = iVar13;
  }
  else {
    pwVar28 = (wchar_t *)local_25c8.Data.AllocatorInstance.Data;
    iVar16 = local_25c8.Data.ArrayNum + -1;
  }
  local_26b0.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar28);
  if (((local_2790.Data <= &local_26b0) &&
      (&local_26b0 < (FNameMap *)(local_2790.Data + (longlong)local_2788._4_4_ * 0x28))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)local_2788;
  if ((int)local_2788 == local_2788._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2790,(int *)((longlong)&local_2788 + 4));
  }
  lVar40 = (longlong)iVar16;
  local_2788 = CONCAT44(local_2788._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2790.Data[lVar40 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2790.Data[lVar40 * 0x28].field_0x0 =
       local_26b0.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 8) = local_26b0.ExportName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0xc) = local_26b0.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2790.Data + lVar40 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2790.Data + lVar40 * 0x28 + 0x10) =
       local_26b0.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x18) = local_26b0.NodeName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x1c) = local_26b0.NodeName.Data.ArrayMax;
  *(uint *)(local_2790.Data + lVar40 * 0x28 + 0x20) = local_26b0.ExportNameHash;
  local_26b0.NodeName.Data.ArrayNum = 0;
  local_26b0.NodeName.Data.ArrayMax = 0;
  local_26b0.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_26b0.ExportName.Data.ArrayNum = 0;
  local_26b0.ExportName.Data.ArrayMax = 0;
  local_26b0.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_25c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25c8.Data.AllocatorInstance.Data);
  }
  if (local_23e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_23e8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_23d8,L"ShaderBundleNode");
  ::FString::FString(&local_25b8,L"");
  ::FString::FString(&local_2688.ExportName,&local_25b8);
  ::FString::FString(&local_2688.NodeName,&local_23d8);
  if (local_25b8.Data.ArrayNum == 0) {
    pwVar28 = L"";
    iVar16 = iVar13;
  }
  else {
    pwVar28 = (wchar_t *)local_25b8.Data.AllocatorInstance.Data;
    iVar16 = local_25b8.Data.ArrayNum + -1;
  }
  local_2688.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar28);
  if (((local_2790.Data <= &local_2688) &&
      (&local_2688 < (FNameMap *)(local_2790.Data + (longlong)local_2788._4_4_ * 0x28))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)local_2788;
  if ((int)local_2788 == local_2788._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2790,(int *)((longlong)&local_2788 + 4));
  }
  lVar40 = (longlong)iVar16;
  local_2788 = CONCAT44(local_2788._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2790.Data[lVar40 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2790.Data[lVar40 * 0x28].field_0x0 =
       local_2688.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 8) = local_2688.ExportName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0xc) = local_2688.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2790.Data + lVar40 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2790.Data + lVar40 * 0x28 + 0x10) =
       local_2688.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x18) = local_2688.NodeName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x1c) = local_2688.NodeName.Data.ArrayMax;
  *(uint *)(local_2790.Data + lVar40 * 0x28 + 0x20) = local_2688.ExportNameHash;
  local_2688.NodeName.Data.ArrayNum = 0;
  local_2688.NodeName.Data.ArrayMax = 0;
  local_2688.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2688.ExportName.Data.ArrayNum = 0;
  local_2688.ExportName.Data.ArrayMax = 0;
  local_2688.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_25b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25b8.Data.AllocatorInstance.Data);
  }
  if (local_23d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_23d8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_23c8,L"ShaderBundleNode");
  ::FString::FString(&local_25f8,L"MainCS");
  ::FString::FString(&local_26d8.ExportName,&local_25f8);
  ::FString::FString(&local_26d8.NodeName,&local_23c8);
  if (local_25f8.Data.ArrayNum == 0) {
    pwVar28 = L"";
    iVar16 = iVar13;
  }
  else {
    pwVar28 = (wchar_t *)local_25f8.Data.AllocatorInstance.Data;
    iVar16 = local_25f8.Data.ArrayNum + -1;
  }
  local_26d8.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar16,pwVar28);
  if (((local_2790.Data <= &local_26d8) &&
      (&local_26d8 < (FNameMap *)(local_2790.Data + (longlong)local_2788._4_4_ * 0x28))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar16 = (int)local_2788;
  if ((int)local_2788 == local_2788._4_4_) {
    iVar16 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2790,(int *)((longlong)&local_2788 + 4));
  }
  lVar40 = (longlong)iVar16;
  local_2788 = CONCAT44(local_2788._4_4_,iVar16 + 1);
  *(undefined8 *)&local_2790.Data[lVar40 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2790.Data[lVar40 * 0x28].field_0x0 =
       local_26d8.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 8) = local_26d8.ExportName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0xc) = local_26d8.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2790.Data + lVar40 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2790.Data + lVar40 * 0x28 + 0x10) =
       local_26d8.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x18) = local_26d8.NodeName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x1c) = local_26d8.NodeName.Data.ArrayMax;
  *(uint *)(local_2790.Data + lVar40 * 0x28 + 0x20) = local_26d8.ExportNameHash;
  local_26d8.NodeName.Data.ArrayNum = 0;
  local_26d8.NodeName.Data.ArrayMax = 0;
  local_26d8.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_26d8.ExportName.Data.ArrayNum = 0;
  local_26d8.ExportName.Data.ArrayMax = 0;
  local_26d8.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_25f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25f8.Data.AllocatorInstance.Data);
  }
  if (local_23c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_23c8.Data.AllocatorInstance.Data);
  }
  ::FString::FString(&local_2428,L"ShaderBundleNode");
  ::FString::FString(&local_25e8,L"MicropolyRasterize");
  ::FString::FString(&local_2660.ExportName,&local_25e8);
  ::FString::FString(&local_2660.NodeName,&local_2428);
  if (local_25e8.Data.ArrayNum == 0) {
    pwVar28 = L"";
  }
  else {
    iVar13 = local_25e8.Data.ArrayNum + -1;
    pwVar28 = (wchar_t *)local_25e8.Data.AllocatorInstance.Data;
  }
  local_2660.ExportNameHash = FCrc::Strihash_DEPRECATED<wchar_t>(iVar13,pwVar28);
  if (((local_2790.Data <= &local_2660) &&
      (&local_2660 < (FNameMap *)(local_2790.Data + (longlong)local_2788._4_4_ * 0x28))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar13 = (int)local_2788;
  if ((int)local_2788 == local_2788._4_4_) {
    iVar13 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x828,&local_2790,(int *)((longlong)&local_2788 + 4));
  }
  lVar40 = (longlong)iVar13;
  local_2788 = CONCAT44(local_2788._4_4_,iVar13 + 1);
  *(undefined8 *)&local_2790.Data[lVar40 * 0x28].field_0x0 = 0;
  *(FScriptContainerElement **)&local_2790.Data[lVar40 * 0x28].field_0x0 =
       local_2660.ExportName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 8) = local_2660.ExportName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0xc) = local_2660.ExportName.Data.ArrayMax;
  *(undefined8 *)(local_2790.Data + lVar40 * 0x28 + 0x10) = 0;
  *(FScriptContainerElement **)(local_2790.Data + lVar40 * 0x28 + 0x10) =
       local_2660.NodeName.Data.AllocatorInstance.Data;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x18) = local_2660.NodeName.Data.ArrayNum;
  *(int *)(local_2790.Data + lVar40 * 0x28 + 0x1c) = local_2660.NodeName.Data.ArrayMax;
  *(uint *)(local_2790.Data + lVar40 * 0x28 + 0x20) = local_2660.ExportNameHash;
  local_2660.NodeName.Data.ArrayNum = 0;
  local_2660.NodeName.Data.ArrayMax = 0;
  local_2660.NodeName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2660.ExportName.Data.ArrayNum = 0;
  local_2660.ExportName.Data.ArrayMax = 0;
  local_2660.ExportName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_25e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_25e8.Data.AllocatorInstance.Data);
  }
  if (local_2428.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2428.Data.AllocatorInstance.Data);
  }
  iVar13 = (int)local_2788;
  local_2418 = (FNameMap *)local_2790.Data;
  if (((int)local_2788 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_2410 = iVar13;
  local_22b8._12_4_ = uStack_240c;
  local_22b8.ArrayNum = iVar13;
  local_22b8.DataPtr = local_2418;
  FWorkGraphPipelineStateInitializer::SetNameTable(&local_2568,&local_22b8,0);
  FVar31.Data = local_2780.Data;
  iStack_2400 = (int)local_2778;
  lVar40 = (longlong)(int)local_2778;
  local_2408 = local_2780.Data;
  if (((int)local_2778 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar1 = FVar31.Data + lVar40 * 8;
  local_2568._padding_ = 0x4f1a08f64cae0c3d;
  local_2568.ShaderTable._12_4_ = uStack_23fc;
  local_2568.ShaderTable.ArrayNum = iStack_2400;
  local_2568.ShaderTable.DataPtr = (FRHIWorkGraphShader **)local_2408;
  for (; FVar31.Data != pFVar1; FVar31.Data = FVar31.Data + 8) {
    lVar40 = 0;
    if (*(FRHIWorkGraphShader **)FVar31.Data != (FRHIWorkGraphShader *)0x0) {
      lVar40 = *(longlong *)&(*(FRHIWorkGraphShader **)FVar31.Data)->field_0xf0;
    }
    local_2568._padding_ =
         local_2568._padding_ ^
         lVar40 + local_2568._padding_ * 0x40 + ((ulonglong)local_2568._padding_ >> 2) + 0x9e3779b9;
  }
  local_2568.RootShaderIndex = -1;
  pFVar18 = PipelineStateCache::GetAndOrCreateWorkGraphPipelineState
                      ((FRHIComputeCommandList *)&local_1e20,&local_2568);
  local_26f0 = (FD3D12WorkGraphPipelineState *)GetRHIWorkGraphPipelineState(pFVar18);
  pFVar19 = FTaskGraphInterface::Get();
  uVar15 = (**(code **)((longlong)*pFVar19 + 0x20))(pFVar19);
  bVar12 = FApp::ShouldUseThreadingForPerformance();
  local_20ac = 5.60519e-45;
  if (bVar12) {
    uVar14 = 4;
    if (uVar15 < 4) {
      uVar14 = uVar15;
    }
    local_20b8 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
                  *)0x0;
    uVar15 = 0;
    local_20b0 = 0.0;
    if (uVar14 == 0) goto LAB_145aa41f9;
  }
  else {
    local_20b8 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
                  *)0x0;
    uVar15 = 0;
    local_20b0 = 0.0;
    uVar14 = 1;
  }
  do {
    pFVar39 = local_20c8;
    if (local_20b8 !=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
         *)0x0) {
      pFVar39 = local_20b8;
    }
    local_276c = uVar15;
    if (pFVar39 <=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
         *)&local_276c) {
      pFVar39 = local_20c8;
      if (local_20b8 !=
          (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
           *)0x0) {
        pFVar39 = local_20b8;
      }
      if (((ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
            *)&local_276c < pFVar39 + (longlong)(int)local_20ac * 4) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    if (local_20b0 == local_20ac) {
      local_20b0 = (float)UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>_>
                                    (0x404,local_20c8,(int *)&local_20ac);
    }
    lVar40 = (longlong)(int)local_20b0;
    pFVar39 = local_20c8;
    if (local_20b8 !=
        (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
         *)0x0) {
      pFVar39 = local_20b8;
    }
    uVar15 = uVar15 + 1;
    local_20b0 = (float)((int)local_20b0 + 1);
    *(uint *)(pFVar39 + lVar40 * 4) = local_276c;
  } while (uVar15 < uVar14);
LAB_145aa41f9:
  pFVar36 = local_26f8;
  if ((*(longlong *)&local_26f8->field_0x300 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FD3D12ExplicitDescriptorCache::FD3D12ExplicitDescriptorCache
            (&local_2258,*(FD3D12Device **)&pFVar36->field_0x300,uVar14);
  FD3D12ExplicitDescriptorCache::Init(&local_2258,0,uVar33,uVar38,Minimal);
  local_2070.ArrayMax = 4;
  local_2070.AllocatorInstance.SecondaryData = (ForElementType<FShaderBundleBinderOps>)0x0;
  local_2070.ArrayNum = 0;
  TArray<FShaderBundleBinderOps,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>::SetNum
            (&local_2070,uVar14,Default);
  pFVar37 = local_26f0;
  local_2720._padding_ = (longlong)&___7__TResourceArray_I_0A___6B_;
  local_2720._padding_ = 0;
  local_2720._padding_ = 0;
  local_2720.bNeedsCPUAccess = false;
  iVar16 = (local_26f0->MaxRootArgOffset + 1) * (local_26f0->RootArgStrideInBytes >> 2);
  iVar13 = UE::Core::Private::ReallocGrow<1,TMemoryImageAllocator<0>::ForAnyElementType>
                     (4,4,iVar16,(ForAnyElementType *)&local_2720._padding_,
                      (int *)&local_2720._padding_,(int *)((longlong)&local_2720._padding_ + 4));
  uVar24 = local_2720._padding_;
  if ((local_2720._padding_ & 1U) != 0) {
    uVar24 = (longlong)&local_2720._padding_ + (local_2720._padding_ >> 0x18);
  }
  memset((void *)(uVar24 + (longlong)iVar13 * 4),0,(longlong)iVar16 << 2);
  pFVar36 = local_26f8;
  local_2148.ConstantBuffer = (FD3D12ConstantBuffer *)0x0;
  if ((*(longlong *)&local_26f8->field_0x300 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FD3D12ResourceLocation::FD3D12ResourceLocation
            (&local_2148.ResourceLocation,*(FD3D12Device **)&pFVar36->field_0x300);
  local_22d8.DataPtr = local_26e0->DataPtr;
  local_22d8.ArrayNum = local_26e0->ArrayNum;
  local_22d8._12_4_ = *(undefined4 *)&local_26e0->field_0xc;
  SetShaderBundleSharedBindlessConstants(pFVar36,&local_22d8,&local_2148);
  fVar11 = local_20b0;
  iVar13 = local_2768.ArrayNum;
  local_2618 = local_20c8;
  if (local_20b8 !=
      (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
       *)0x0) {
    local_2618 = local_20b8;
  }
  if (((int)local_20b0 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2318.LocalRootArgs = &local_2720;
  local_2318.__this = pFVar36;
  local_2318.TransientDescriptorCache = &local_2258;
  lStack_2610 = CONCAT44(lStack_2610._4_4_,fVar11);
  pTVar34 = (TReferenceControllerBase<1> *)0x0;
  local_2318.ValidRecords = &local_2768;
  local_22c8 = local_2618;
  lStack_22c0 = lStack_2610;
  local_2318.BinderOps = &local_2070;
  local_2318.Pipeline = pFVar37;
  local_2318.SharedConstantBuffer = &local_2148;
  local_2318.Dispatches = param_4;
  ParallelForImpl::
  ParallelForInternal<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>,_ParallelForWithExistingTaskContext<_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_FD3D12CommandContext::DispatchWorkGraphShaderBundle_::__l2::FTaskContext>
            (L"DispatchShaderBundle",iVar13,0x400,&local_2318,(<lambda_1>)local_2798,None,
             (TArrayView<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext,int>
              *)&local_22c8);
  pFVar10 = local_26e8;
  pFVar36 = local_26f8;
  local_24a8.Shader4ComponentMapping = 0x1688;
  local_24a8._12_4_ = 0;
  local_24a8.field3_0x10._16_8_ = 1;
  local_24a8.field3_0x10.Buffer.NumElements = (local_26e8->Desc).Size >> 2;
  local_24a8.ViewDimension = D3D12_SRV_DIMENSION_BUFFER;
  local_24a8.Format = DXGI_FORMAT_R32_TYPELESS;
  local_24a8.field3_0x10.Buffer.FirstElement = 0;
  local_24a8.field3_0x10.Buffer.StructureByteStride = 0;
  local_2628[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if ((*(longlong *)&local_26f8->field_0x300 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Parent != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                          ,0x59,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar4 = *(FD3D12Device **)&pFVar36->field_0x300;
  pTVar20 = ::operator_new(0xa8);
  if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
    local_2630 = (FD3D12ShaderResourceView *)&DAT_00000010;
  }
  else {
    pTVar20->SharedReferenceCount = (atomic<int>)0x1;
    pTVar20->WeakReferenceCount = (atomic<int>)0x1;
    pTVar20->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFD3D12ShaderResourceView___00_SharedPointerInternals__6B_
    ;
    FD3D12ShaderResourceView::FD3D12ShaderResourceView
              ((FD3D12ShaderResourceView *)(pTVar20 + 1),pFVar4,(FD3D12ShaderResourceView *)0x0,
               BufferSRV,(FD3D12RayTracingScene *)0x0);
    local_2630 = (FD3D12ShaderResourceView *)(pTVar20 + 1);
    if ((local_2630 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InObject != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x246,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
    pTVar34 = pTVar20;
  }
  local_25d8 = 0;
  local_25d0.ReferenceController = pTVar34;
  SharedPointerInternals::FSharedReferencer<1>::operator=(local_2628,&local_25d0);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_25d0.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar34);
  this_00 = local_2630;
  if ((local_2630 == (FD3D12ShaderResourceView *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  local_2460.BaseResource = (FD3D12BaseShaderResource *)(pFVar10 + 1);
  if ((FRHIBuffer *)local_2460.BaseResource == (FRHIBuffer *)0x0) {
    local_2460.ResourceLocation = (FD3D12ResourceLocation *)0x0;
    local_2460.Resource = (FD3D12Resource *)0x0;
  }
  else {
    local_2460.ResourceLocation = (FD3D12ResourceLocation *)&pFVar10[1]._padding_;
    local_2460.Resource = (FD3D12Resource *)pFVar10[1]._padding_;
  }
  FD3D12ShaderResourceView::CreateView(this_00,&local_2460,&local_24a8,None);
  local_274c = 0;
  if (local_2730 == 0) {
    if ((this_00 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if ((this_00->_padding_ == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                            ,0x103,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_2618 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
                  *)this_00->_padding_;
    lStack_2610 = this_00->_padding_;
    local_268[((local_23f8.ShaderContent)->RecordArgBufferParam).BaseIndex].ptr =
         (ulong64)local_2618;
    FD3D12ExplicitDescriptorCache::Allocate
              (&local_2258,local_268,1,D3D12_DESCRIPTOR_HEAP_TYPE_CBV_SRV_UAV,0);
    FD3D12ExplicitDescriptorHeap::GetDescriptorGPU(&local_2258.ViewHeap,(uint)&local_24b0);
    lVar40 = *(longlong *)&pFVar17[1].field_0x38;
    bVar3 = *(byte *)(lVar40 + 0x25);
    if ((0x1f < bVar3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("BindSlotIndex < (sizeof(UEArrayCountHelper(BindSlotOffsetsInDWORDs)) - 1)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RootSignature.h"
                            ,0xde,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar37 = local_26f0;
    bVar3 = *(byte *)((ulonglong)bVar3 + 0x98 + lVar40);
    uVar15 = local_26f0->RootArgStrideInBytes;
    if (((local_26f0->RootArgOffsets).ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar33 = *(int *)(pFVar37->RootArgOffsets).AllocatorInstance.Data *
             pFVar37->RootArgStrideInBytes >> 2;
    if (((int)(uint)local_2720._padding_ <= (int)uVar33) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar24 = local_2720._padding_;
    if ((local_2720._padding_ & 1U) != 0) {
      uVar24 = (longlong)&local_2720._padding_ + (local_2720._padding_ >> 0x18);
    }
    if ((uVar15 >> 2 <= (uint)bVar3) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    *(undefined8 *)(uVar24 + ((ulonglong)uVar33 + (ulonglong)bVar3) * 4) = local_24b0;
  }
  else {
    if ((this_00 == (FD3D12ShaderResourceView *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_274c = (uint)this_00->_padding_;
    pFVar37 = local_26f0;
    if ((local_274c == 0xffffffff) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("RecordArgBufferBindlessHandle != INDEX_NONE",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12WorkGraph.cpp"
                            ,0x3b5,L""), pFVar37 = local_26f0, bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar24 = 0;
  local_2608 = 0;
  local_26e8 = (FRHIBuffer *)0x0;
  local_26e0 = (TArrayView<FRHIShaderParameterResource_const_,int> *)0x0;
  if ((local_2768.ArrayNum != 0) && ((uint)local_2720._padding_ != 0)) {
    if ((uint)local_2720._padding_ < 0x40000000) {
      uVar24 = (ulonglong)((uint)local_2720._padding_ * 4);
    }
    else {
      UE::Logging::Private::BasicFatalLog
                (&`public:_virtual_unsigned_int___cdecl_TResourceArray<unsigned_int,0>::GetResourceDataSize(void)const___ptr64'
                  ::__l6::LOG_Static,(FLogCategoryBase *)&LogCore);
    }
    local_25a8 = (undefined4)uVar24;
    uStack_24dc = 0x10001;
    uStack_24d8 = 0;
    uStack_24cc = 1;
    uStack_24c8 = 0;
    local_24f8 = 1;
    uStack_24f0 = 0;
    local_20a8._4_4_ = uStack_24f4;
    local_20a8.Dimension = D3D12_RESOURCE_DIMENSION_BUFFER;
    uStack_24e0 = 1;
    local_20a8.Height = 1.4013e-45;
    local_20a8._28_4_ = 9.18369e-41;
    uStack_24d4 = 1;
    uStack_24d0 = 0;
    local_20a8.Alignment = 0;
    local_20a8.Format = DXGI_FORMAT_UNKNOWN;
    local_20a8.SampleDesc.Count = 1;
    local_20a8.SampleDesc.Quality = 0.0;
    local_20a8.Layout = 1.4013e-45;
    uStack_25a4 = 0;
    uStack_25a0 = 1;
    local_20a8._48_8_ = (ulonglong)uStack_24c4 << 0x20;
    local_2598 = L"BundleRecordBuffer";
    pFStack_2590 = (FResourceArrayUploadInterface *)0x0;
    EStack_2584 = Default;
    FStack_2580.Value = 0;
    uStack_257c = 0;
    FStack_2578.Value = 0;
    uStack_2574 = 0;
    local_2588 = CopyDest;
    local_24e8 = uVar24;
    local_20a8.Width = uVar24;
    if ((*(longlong *)&pFVar36->field_0x300 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    iStack_259c = 1 << ((byte)*(undefined4 *)(*(longlong *)&pFVar36->field_0x300 + 8) & 0x1f);
    local_22a8._padding_ = CONCAT44(uStack_25a4,local_25a8);
    local_22a8._padding_ = CONCAT44(iStack_259c,uStack_25a0);
    local_22a8.DebugName = local_2598;
    local_22a8.InitialData = pFStack_2590;
    local_22a8.OwnerName.Number = uStack_2574;
    local_22a8.OwnerName.ComparisonIndex.Value = FStack_2578.Value;
    local_22a8.InitAction = EStack_2584;
    local_22a8.InitialState = local_2588;
    local_22a8.ClassName.Number = uStack_257c;
    local_22a8.ClassName.ComparisonIndex.Value = FStack_2580.Value;
    if ((*(longlong *)&pFVar36->field_0x300 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Parent != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x59,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar40 = *(longlong *)&pFVar36->field_0x300;
    if ((*(longlong *)(lVar40 + 0x10) == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ParentAdapter != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12RHICommon.h"
                            ,0x41,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_02 = FD3D12Adapter::CreateRHIBuffer
                        (*(FD3D12Adapter **)(lVar40 + 0x10),&local_20a8,0x10,&local_22a8,MultiState,
                         CopyDest,true,(ID3D12ResourceAllocator *)0x0);
    TVar21 = FD3D12Buffer::UploadResourceDataViaCopyQueue
                       (this_02,(FD3D12CommandContext *)&local_24b8,
                        (FResourceArrayUploadInterface *)pFVar36);
    iVar13 = *(int *)&pFVar36->field_0x20;
    if (iVar13 == *(int *)&pFVar36->field_0x24) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,(ForAnyElementType *)&pFVar36->field_0x18,
                          (int *)&pFVar36->field_0x24);
    }
    *(int *)&pFVar36->field_0x20 = iVar13 + 1;
    plVar2 = (longlong *)(*(longlong *)&pFVar36->field_0x18 + (longlong)iVar13 * 8);
    *plVar2 = 0;
    *plVar2 = (TVar21.Reference)->_padding_;
    (TVar21.Reference)->_padding_ = 0;
    if (local_24b8 != (undefined8 *)0x0) {
      piVar22 = (int *)(local_24b8 + 1);
      LOCK();
      iVar13 = *piVar22;
      *piVar22 = *piVar22 + -1;
      UNLOCK();
      if (((iVar13 == 1) && (piVar22 != (int *)0x0)) && (local_24b8 != (undefined8 *)0x0)) {
        (**(code **)*local_24b8)(local_24b8,1);
      }
    }
    FD3D12ContextCommon::AddBarrier
              ((FD3D12ContextCommon *)pFVar36,(FD3D12Resource *)this_02->_padding_,CopyDest,Common,
               0xffffffff);
    local_2608 = this_02->_padding_;
    local_26e8 = (FRHIBuffer *)this_02->_padding_;
    local_26e0 = (TArrayView<FRHIShaderParameterResource_const_,int> *)
                 (ulonglong)pFVar37->RootArgStrideInBytes;
  }
  local_2750 = 1;
  if (1 < local_2070.ArrayNum) {
    local_2728 = 1;
    local_2600 = 0x90;
    FVar29 = local_2798;
    do {
      lVar40 = local_2600;
      local_2754 = ~local_2750 >> 0x1f;
      uVar15 = 0;
      if ((int)local_2750 < local_2070.ArrayNum) {
        uVar15 = local_2754;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      lVar40 = (longlong)FVar25 + lVar40;
      plVar41 = *(longlong **)(lVar40 + 0x60);
      iVar13 = *(int *)(lVar40 + 0x68);
      plVar2 = plVar41 + iVar13;
      while( true ) {
        if (*(int *)(lVar40 + 0x68) != iVar13) {
          local_2797[0] = (FNoopStruct)0x0;
          `TCheckedPointerIterator<FD3D12ShaderResourceView_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_2797);
        }
        lVar9 = local_2728;
        FVar8 = local_2797[0];
        if (plVar41 == plVar2) break;
        pFVar5 = (FD3D12View *)*plVar41;
        if ((local_2070.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
        if (local_2070.AllocatorInstance.SecondaryData !=
            (ForElementType<FShaderBundleBinderOps>)0x0) {
          FVar25 = local_2070.AllocatorInstance.SecondaryData;
        }
        local_2740 = pFVar5;
        if (((pFVar5->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xfe,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((pFVar5->ResourceInfo).Resource)->bRequiresResourceStateTracking) {
          cVar26 = '\0';
          uVar15 = ((uint)((ulonglong)local_2740 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_2740 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          uVar15 = uVar15 >> 0x10 ^ uVar15;
          psVar6 = *(schar **)((longlong)FVar25 + 8);
          uVar33 = *(uint *)((longlong)FVar25 + 0x20) & uVar15;
          uVar24 = (ulonglong)uVar33;
          if ((psVar6 != (schar *)0x0) && (-1 < psVar6[uVar24])) {
            cVar26 = '\0';
            do {
              if (local_2740 == (*(FD3D12View ***)((longlong)FVar25 + 0x10))[uVar24])
              goto LAB_145aa4f69;
              uVar33 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar33;
              cVar26 = cVar26 + '\x01';
            } while (cVar26 <= psVar6[uVar24]);
          }
          Experimental::TSherwoodHashTable_Private::
          TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
          ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
                 *)FVar25,cVar26,(FData *)FVar25,uVar33,local_2740,uVar15,FVar29);
          pFVar1 = (((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)FVar25 + 0x60))->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_2740) &&
              ((FScriptContainerElement *)&local_2740 <
               pFVar1 + (longlong)*(int *)((longlong)FVar25 + 0x6c) * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)((longlong)FVar25 + 0x68);
          if (iVar16 == *(int *)((longlong)FVar25 + 0x6c)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)((longlong)FVar25 + 0x60),
                                (int *)((longlong)FVar25 + 0x6c));
          }
          *(int *)((longlong)FVar25 + 0x68) = iVar16 + 1;
          *(FD3D12View **)
           ((((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar25 + 0x60))->AllocatorInstance).Data + (longlong)iVar16 * 8) =
               local_2740;
        }
LAB_145aa4f69:
        plVar41 = plVar41 + 1;
      }
      uVar15 = 0;
      if ((int)local_2750 < local_2070.ArrayNum) {
        uVar15 = local_2754;
      }
      if ((uVar15 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      pFVar39 = (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
                 *)(lVar9 * 0x90);
      plVar41 = *(longlong **)&pFVar39[(longlong)((longlong)FVar25 + 0x70)].field_0x0;
      iVar13 = *(int *)(pFVar39 + (longlong)((longlong)FVar25 + 0x78));
      plVar2 = plVar41 + iVar13;
      local_2618 = pFVar39;
      while( true ) {
        if (*(int *)(pFVar39 + (longlong)((longlong)FVar25 + 0x78)) != iVar13) {
          local_2798 = (FNoopStruct)0x0;
          `TCheckedPointerIterator<FD3D12UnorderedAccessView_*,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_2798);
        }
        lVar40 = local_2728;
        uVar33 = local_2750;
        uVar15 = local_2754;
        FVar29 = local_2798;
        if (plVar41 == plVar2) break;
        pFVar5 = (FD3D12View *)*plVar41;
        if ((local_2070.ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        this_03 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
        if (local_2070.AllocatorInstance.SecondaryData !=
            (ForElementType<FShaderBundleBinderOps>)0x0) {
          this_03 = local_2070.AllocatorInstance.SecondaryData;
        }
        local_2738 = pFVar5;
        if (((pFVar5->ResourceInfo).ResourceLocation == (FD3D12ResourceLocation *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsInitialized()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\D3D12RHI\\Private\\D3D12View.h"
                                ,0xfe,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (((pFVar5->ResourceInfo).Resource)->bRequiresResourceStateTracking) {
          cVar26 = '\0';
          uVar15 = ((uint)((ulonglong)local_2738 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_2738 >> 4)) * -0x7a143595;
          uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
          uVar15 = uVar15 >> 0x10 ^ uVar15;
          psVar6 = *(schar **)((longlong)this_03 + 8);
          uVar33 = *(uint *)((longlong)this_03 + 0x20) & uVar15;
          uVar24 = (ulonglong)uVar33;
          if ((psVar6 != (schar *)0x0) && (-1 < psVar6[uVar24])) {
            cVar26 = '\0';
            do {
              if (local_2738 == (*(FD3D12View ***)((longlong)this_03 + 0x10))[uVar24])
              goto LAB_145aa51ca;
              uVar33 = (int)uVar24 + 1;
              uVar24 = (ulonglong)uVar33;
              cVar26 = cVar26 + '\x01';
            } while (cVar26 <= psVar6[uVar24]);
          }
          Experimental::TSherwoodHashTable_Private::
          TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
          ::Add((TSherwoodHashTable<FD3D12View_*,FNoopStruct,Experimental::TSherwoodHashKeyFuncs<FD3D12View_*,FNoopStruct>_>
                 *)this_03,cVar26,(FData *)this_03,uVar33,local_2738,uVar15,FVar8);
          pFVar1 = (((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                    ((longlong)this_03 + 0x70))->AllocatorInstance).Data;
          if (((pFVar1 <= (FScriptContainerElement *)&local_2738) &&
              ((FScriptContainerElement *)&local_2738 <
               pFVar1 + (longlong)*(int *)((longlong)this_03 + 0x7c) * 8)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar16 = *(int *)((longlong)this_03 + 0x78);
          if (iVar16 == *(int *)((longlong)this_03 + 0x7c)) {
            iVar16 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)((longlong)this_03 + 0x70),
                                (int *)((longlong)this_03 + 0x7c));
          }
          *(int *)((longlong)this_03 + 0x78) = iVar16 + 1;
          *(FD3D12View **)
           ((((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)this_03 + 0x70))->AllocatorInstance).Data + (longlong)iVar16 * 8) =
               local_2738;
        }
LAB_145aa51ca:
        plVar41 = plVar41 + 1;
      }
      uVar14 = 0;
      uVar38 = uVar14;
      if ((int)local_2750 < local_2070.ArrayNum) {
        uVar38 = local_2754;
      }
      if ((uVar38 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar39 = local_2618;
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      pFVar35 = local_2618 +
                (longlong)
                &(((TArray<FD3D12ShaderResourceView_*,TSizedDefaultAllocator<32>_> *)
                  ((longlong)FVar25 + 0x60))->AllocatorInstance).Data;
      *(undefined4 *)&pFVar35[8].field_0x0 = 0;
      if (*(int *)(pFVar35 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pFVar35,0,(int *)(pFVar35 + 0xc));
      }
      uVar38 = uVar14;
      if ((int)uVar33 < local_2070.ArrayNum) {
        uVar38 = uVar15;
      }
      if ((uVar38 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      pFVar35 = pFVar39 + (longlong)
                          &(((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                            ((longlong)FVar25 + 0x70))->AllocatorInstance).Data;
      *(undefined4 *)&pFVar35[8].field_0x0 = 0;
      if (*(int *)(pFVar35 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pFVar35,0,(int *)(pFVar35 + 0xc));
      }
      uVar38 = uVar14;
      if ((int)uVar33 < local_2070.ArrayNum) {
        uVar38 = uVar15;
      }
      if ((uVar38 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      pFVar35 = pFVar39 + (longlong)FVar25;
      if (*(void **)(pFVar35 + 8) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar35 + 8));
        FMemory::Free(*(void **)(pFVar35 + 0x10));
        FMemory::Free(*(void **)(pFVar35 + 0x18));
      }
      uVar15 = local_2754;
      *(undefined4 *)(pFVar35 + 0x20) = 0;
      uStack_23b0 = 0;
      uStack_23a8 = 0;
      pFVar35[0x24] =
           (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
            )0x0;
      *(undefined4 *)(pFVar35 + 0x28) = 0;
      local_23b8 = 0;
      uStack_23a0 = 0;
      *(undefined8 *)pFVar35 = 0;
      *(undefined8 *)(pFVar35 + 8) = 0;
      *(undefined8 *)(pFVar35 + 0x10) = 0;
      *(undefined8 *)(pFVar35 + 0x18) = 0;
      uVar38 = uVar14;
      if ((int)uVar33 < local_2070.ArrayNum) {
        uVar38 = local_2754;
      }
      if ((uVar38 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      pFVar35 = pFVar39 + (longlong)
                          &(((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
                            ((longlong)FVar25 + 0x80))->AllocatorInstance).Data;
      *(undefined4 *)&pFVar35[8].field_0x0 = 0;
      if (*(int *)(pFVar35 + 0xc) != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)pFVar35,0,(int *)(pFVar35 + 0xc));
      }
      if ((int)uVar33 < local_2070.ArrayNum) {
        uVar14 = uVar15;
      }
      if ((uVar14 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
      if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0)
      {
        FVar25 = local_2070.AllocatorInstance.SecondaryData;
      }
      if (*(void **)(pFVar39 + (longlong)((longlong)FVar25 + 0x38)) != (void *)0x0) {
        FMemory::Free(*(void **)(pFVar39 + (longlong)((longlong)FVar25 + 0x38)));
        FMemory::Free(*(void **)(pFVar39 + (longlong)((longlong)FVar25 + 0x40)));
        FMemory::Free(*(void **)(pFVar39 + (longlong)((longlong)FVar25 + 0x48)));
      }
      uStack_2440 = 0;
      uStack_2438 = 0;
      local_2750 = uVar33 + 1;
      local_2448 = 0;
      local_2728 = lVar40 + 1;
      uStack_2430 = 0;
      local_2600 = local_2600 + 0x90;
      *(undefined4 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x50)) = 0;
      *(undefined8 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x30)) = 0;
      *(undefined8 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x38)) = 0;
      pFVar39[(longlong)((longlong)FVar25 + 0x54)] =
           (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
            )0x0;
      *(undefined8 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x40)) = 0;
      *(undefined8 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x48)) = 0;
      *(undefined4 *)(pFVar39 + (longlong)((longlong)FVar25 + 0x58)) = 0;
      pFVar36 = local_26f8;
    } while ((int)local_2750 < local_2070.ArrayNum);
  }
  if ((local_2070.ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
  if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FVar25 = local_2070.AllocatorInstance.SecondaryData;
  }
  pFVar32 = (((TArray<FD3D12UnorderedAccessView_*,TSizedDefaultAllocator<32>_> *)
             ((longlong)FVar25 + 0x80))->AllocatorInstance).Data;
  iVar13 = *(int *)((longlong)FVar25 + 0x88);
  pFVar1 = pFVar32 + (longlong)iVar13 * 8;
  while( true ) {
    if (*(int *)((longlong)FVar25 + 0x88) != iVar13) {
      `TCheckedPointerIterator<FD3D12UnorderedAccessView_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2758);
    }
    if (pFVar32 == pFVar1) break;
    ClearShaderResources(pFVar36,*(FD3D12UnorderedAccessView **)pFVar32,SRVMask);
    pFVar32 = pFVar32 + 8;
  }
  FD3D12ContextCommon::FlushResourceBarriers((FD3D12ContextCommon *)pFVar36);
  SetExplicitDescriptorCache(pFVar36,&local_2258);
  if (local_2730 != 0) {
    FD3D12StateCache::ApplyBindlessResources(&pFVar36->StateCache,(FD3D12RootSignature *)0x0,5,6);
  }
  if (*(longlong *)&pFVar36->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar36 + 8))(pFVar36);
  }
  pFVar37 = local_26f0;
  plVar2 = *(longlong **)(*(longlong *)&pFVar36->field_0x188 + 0x28);
  piVar22 = (int *)(*(longlong *)&pFVar36->field_0x188 + 0x168);
  *piVar22 = *piVar22 + 1;
  (**(code **)(*plVar2 + 0xe8))(plVar2,(local_26f0->RootSignature).Reference);
  local_2398 = 5;
  uStack_2390 = (pFVar37->ProgramIdentifier).OpaqueData[0];
  local_2388 = (pFVar37->ProgramIdentifier).OpaqueData[1];
  uStack_2380 = (pFVar37->ProgramIdentifier).OpaqueData[2];
  local_2378 = (pFVar37->ProgramIdentifier).OpaqueData[3];
  uStack_2370 = (ulonglong)(pFVar37->bInitialized == false);
  local_2368 = (pFVar37->BackingMemoryAddressRange).StartAddress;
  uStack_2360 = (pFVar37->BackingMemoryAddressRange).SizeInBytes;
  local_2358 = local_2608;
  lStack_2350 = (longlong)local_26e8;
  local_2348 = (ulonglong)local_26e0;
  if (*(longlong *)&pFVar36->field_0x188 == 0) {
    (**(code **)(*(longlong *)pFVar36 + 8))(pFVar36);
  }
  plVar2 = *(longlong **)(*(longlong *)&pFVar36->field_0x188 + 0x78);
  piVar22 = (int *)(*(longlong *)&pFVar36->field_0x188 + 0x168);
  *piVar22 = *piVar22 + 1;
  (**(code **)(*plVar2 + 0x2a0))(plVar2,&local_2398);
  pFVar23 = FDispatchShaderBundleWorkGraph::MakeInputRecord
                      (&local_2270,local_2638,local_24c0->ArgOffset,local_24c0->ArgStride,local_274c
                      );
  local_2338[0]._0_4_ = pFVar23->DispatchGridSize;
  local_2338[0]._4_4_ = pFVar23->RecordCount;
  local_2338[1] = *(undefined8 *)&(pFVar23->PlatformData).field0_0x0;
  local_2328 = (pFVar23->PlatformData).field0_0x0._s_0.Z;
  if (GShaderBundleSkipDispatch == false) {
    local_2474 = 1;
    local_2470 = local_2338;
    local_2480 = 0;
    local_2478 = 0;
    local_2468 = 0x14;
    if (*(longlong *)&pFVar36->field_0x188 == 0) {
      (**(code **)(*(longlong *)pFVar36 + 8))(pFVar36);
    }
    plVar2 = *(longlong **)(*(longlong *)&pFVar36->field_0x188 + 0x78);
    piVar22 = (int *)(*(longlong *)&pFVar36->field_0x188 + 0x168);
    *piVar22 = *piVar22 + 1;
    (**(code **)(*plVar2 + 0x2a8))(plVar2,&local_2480);
  }
  pFVar37->bInitialized = true;
  UnsetExplicitDescriptorCache(pFVar36);
  FD3D12StateCache::DirtyState(&pFVar36->StateCache);
  FD3D12ContextCommon::ConditionalSplitCommandList((FD3D12ContextCommon *)pFVar36);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2628[0].ReferenceController);
  FD3D12ResourceLocation::~FD3D12ResourceLocation(&local_2148.ResourceLocation);
  FMemoryImageAllocatorBase::~FMemoryImageAllocatorBase
            ((FMemoryImageAllocatorBase *)&local_2720._padding_);
  local_2720._padding_ = (longlong)&___7FResourceArrayUploadInterface__6B_;
  FVar25 = (ForElementType<FShaderBundleBinderOps>)&local_2070;
  if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FVar25 = local_2070.AllocatorInstance.SecondaryData;
  }
  DestructItems<FShaderBundleBinderOps,int>((FShaderBundleBinderOps *)FVar25,local_2070.ArrayNum);
  if (local_2070.AllocatorInstance.SecondaryData != (ForElementType<FShaderBundleBinderOps>)0x0) {
    FMemory::Free((void *)local_2070.AllocatorInstance.SecondaryData);
  }
  DestructItems<FD3D12ExplicitDescriptorCache::FWorkerThreadData,int>
            ((FWorkerThreadData *)local_2258.WorkerData.AllocatorInstance.Data,
             local_2258.WorkerData.ArrayNum);
  if ((FWorkerThreadData *)local_2258.WorkerData.AllocatorInstance.Data != (FWorkerThreadData *)0x0)
  {
    FMemory::Free(local_2258.WorkerData.AllocatorInstance.Data);
  }
  FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_2258.SamplerHeap);
  FD3D12ExplicitDescriptorHeap::~FD3D12ExplicitDescriptorHeap(&local_2258.ViewHeap);
  if (local_20b8 !=
      (ForElementType<_private:_void___cdecl_FD3D12CommandContext::DispatchWorkGraphShaderBundle(FRHIShaderBundle_*,FRHIBuffer_*,TArrayView<FRHIShaderParameterResource_const_,int>,TArrayView<FRHIShaderBundleComputeDispatch_const_,int>)_::_2_::FTaskContext>
       *)0x0) {
    FMemory::Free(local_20b8);
  }
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)local_2790.Data,(int)local_2788);
  if ((FNameMap *)local_2790.Data != (FNameMap *)0x0) {
    FMemory::Free(local_2790.Data);
  }
  DestructItems<FWorkGraphPipelineStateInitializer::FNameMap,int>
            ((FNameMap *)local_2568.NameMaps.AllocatorInstance.Data,local_2568.NameMaps.ArrayNum);
  if ((FNameMap *)local_2568.NameMaps.AllocatorInstance.Data != (FNameMap *)0x0) {
    FMemory::Free(local_2568.NameMaps.AllocatorInstance.Data);
  }
  if (local_2568.ProgramName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2568.ProgramName.Data.AllocatorInstance.Data);
  }
  if (local_2780.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2780.Data);
  }
  if (local_2768.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2768.AllocatorInstance.Data);
  }
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1e20);
  return;
}

// RHIClearUAVFloat @ 145ab1ad0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIClearUAVFloat
          (FD3D12CommandContext *this,FRHIUnorderedAccessView *param_1,TVector4<float> *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  FD3D12CommandContext *pFVar3;
  FD3D12CommandContext *pFVar4;
  bool bVar5;
  undefined1 auStack_1bf8 [32];
  FRHICommandList_RecursiveHazardous local_1bd8;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145ab1ae2;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1bf8;
  pFVar4 = (FD3D12CommandContext *)0x0;
  pFVar3 = this;
  if (this == (FD3D12CommandContext *)0x1c0) {
    pFVar3 = pFVar4;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1bd8,(IRHICommandContext *)pFVar3);
  uVar1 = 0;
  bVar5 = *(int *)&this->field_0x138 != 0;
  if (bVar5) {
    for (; (*(uint *)&this->field_0x138 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 != (FRHIUnorderedAccessView *)0x0) {
    uVar2 = 0x20;
    if (bVar5) {
      uVar2 = (ulonglong)uVar1;
    }
    pFVar4 = *(FD3D12CommandContext **)(&param_1[4].field_0x10 + uVar2 * 8);
  }
  ClearUAV((TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *)&local_1bd8,
           (FD3D12UnorderedAccessView_RHI *)pFVar4,param_2,true);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1bd8);
  return;
}

// RHIClearUAVUint @ 145ab1b90

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "D3D12_HEAP_FLAGS": Some values do not have unique names */
/* WARNING: Enum "ED3D12Access": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "D3D_PRIMITIVE_TOPOLOGY": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */

void __thiscall
FD3D12CommandContext::RHIClearUAVUint
          (FD3D12CommandContext *this,FRHIUnorderedAccessView *param_1,
          TIntVector4<unsigned_int> *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  FD3D12CommandContext *pFVar3;
  FD3D12CommandContext *pFVar4;
  bool bVar5;
  undefined1 auStack_1bf8 [32];
  FRHICommandList_RecursiveHazardous local_1bd8;
  ulonglong local_28;
  undefined8 uStack_20;
  
  uStack_20 = 0x145ab1ba2;
  local_28 = __security_cookie.value ^ (ulonglong)auStack_1bf8;
  pFVar4 = (FD3D12CommandContext *)0x0;
  pFVar3 = this;
  if (this == (FD3D12CommandContext *)0x1c0) {
    pFVar3 = pFVar4;
  }
  FRHICommandList_RecursiveHazardous::FRHICommandList_RecursiveHazardous
            (&local_1bd8,(IRHICommandContext *)pFVar3);
  uVar1 = 0;
  bVar5 = *(int *)&this->field_0x138 != 0;
  if (bVar5) {
    for (; (*(uint *)&this->field_0x138 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
    }
  }
  if (param_1 != (FRHIUnorderedAccessView *)0x0) {
    uVar2 = 0x20;
    if (bVar5) {
      uVar2 = (ulonglong)uVar1;
    }
    pFVar4 = *(FD3D12CommandContext **)(&param_1[4].field_0x10 + uVar2 * 8);
  }
  ClearUAV((TRHICommandList_RecursiveHazardous<FD3D12CommandContext> *)&local_1bd8,
           (FD3D12UnorderedAccessView_RHI *)pFVar4,param_2,false);
  FRHICommandList_RecursiveHazardous::~FRHICommandList_RecursiveHazardous(&local_1bd8);
  return;
}

// operator() @ 1504d5480

bool __thiscall
`FD3D12CommandContext::RHICopyToStagingBuffer'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8776608671141462245>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8776608671141462245>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d57d0

bool __thiscall `FD3D12CommandContext::SetRenderTargets'::__l24::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8776608671141462911>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8776608671141462911>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504d6ed0

bool __thiscall `FD3D12CommandContext::ClearUAV'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<1888418298811384141>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<1888418298811384141>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

