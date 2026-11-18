// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: VulkanRHI
// Functions: 3

// FGfxPipelineDesc @ 145b44340

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FGfxPipelineDesc * __thiscall
FGfxPipelineDesc::FGfxPipelineDesc(FGfxPipelineDesc *this,FGfxPipelineDesc *param_1)

{
  TArray<FGfxPipelineDesc::FBlendAttachment,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  TArray<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  TArray<FGfxPipelineDesc::FVertexBinding,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FGfxPipelineDesc::FVertexAttribute,TSizedDefaultAllocator<32>_> *pTVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *pTVar8;
  ulong64 uVar9;
  uchar uVar10;
  undefined2 uVar11;
  float fVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uchar uVar17;
  uchar uVar18;
  uchar uVar19;
  undefined3 uVar20;
  uint uVar21;
  uint uVar22;
  
  pTVar1 = &this->ColorAttachmentStates;
  this->VertexInputKey = param_1->VertexInputKey;
  this->RasterizationSamples = param_1->RasterizationSamples;
  this->Topology = param_1->Topology;
  piVar2 = &(this->ColorAttachmentStates).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  iVar6 = (param_1->ColorAttachmentStates).ArrayNum;
  pFVar7 = (param_1->ColorAttachmentStates).AllocatorInstance.Data;
  (this->ColorAttachmentStates).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,1,iVar6,0,&pTVar1->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  pTVar3 = &this->DescriptorSetLayoutBindings;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->DescriptorSetLayoutBindings).ArrayMax;
  iVar6 = (param_1->DescriptorSetLayoutBindings).ArrayNum;
  pTVar8 = (TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
           (param_1->DescriptorSetLayoutBindings).AllocatorInstance.Data;
  (this->DescriptorSetLayoutBindings).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar6,0,&pTVar3->AllocatorInstance,iVar6,piVar2);
    ConstructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
              ((pTVar3->AllocatorInstance).Data,pTVar8,iVar6);
  }
  pTVar4 = &this->VertexBindings;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VertexBindings).ArrayMax;
  iVar6 = (param_1->VertexBindings).ArrayNum;
  pFVar7 = (param_1->VertexBindings).AllocatorInstance.Data;
  (this->VertexBindings).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,iVar6,0,&pTVar4->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar4->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 3);
  }
  pTVar5 = &this->VertexAttributes;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->VertexAttributes).ArrayMax;
  iVar6 = (param_1->VertexAttributes).ArrayNum;
  pFVar7 = (param_1->VertexAttributes).AllocatorInstance.Data;
  (this->VertexAttributes).ArrayNum = iVar6;
  if (iVar6 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,iVar6,0,&pTVar5->AllocatorInstance,iVar6,piVar2);
    memcpy((pTVar5->AllocatorInstance).Data,pFVar7,(longlong)iVar6 << 4);
  }
  uVar10 = (param_1->Rasterizer).CullMode;
  uVar11 = *(undefined2 *)&(param_1->Rasterizer).field_0x2;
  fVar12 = (param_1->Rasterizer).DepthBiasSlopeScale;
  (this->Rasterizer).PolygonMode = (param_1->Rasterizer).PolygonMode;
  (this->Rasterizer).CullMode = uVar10;
  *(undefined2 *)&(this->Rasterizer).field_0x2 = uVar11;
  (this->Rasterizer).DepthBiasSlopeScale = fVar12;
  (this->Rasterizer).DepthBiasConstantFactor = (param_1->Rasterizer).DepthBiasConstantFactor;
  bVar13 = (param_1->DepthStencil).bDepthTestEnable;
  bVar14 = (param_1->DepthStencil).bDepthWriteEnable;
  bVar15 = (param_1->DepthStencil).bStencilTestEnable;
  bVar16 = (param_1->DepthStencil).bDepthBoundsTestEnable;
  uVar10 = (param_1->DepthStencil).FrontFailOp;
  uVar17 = (param_1->DepthStencil).FrontPassOp;
  uVar18 = (param_1->DepthStencil).FrontDepthFailOp;
  uVar19 = (param_1->DepthStencil).FrontCompareOp;
  uVar20 = *(undefined3 *)&(param_1->DepthStencil).field_0x9;
  uVar21 = (param_1->DepthStencil).FrontCompareMask;
  (this->DepthStencil).DepthCompareOp = (param_1->DepthStencil).DepthCompareOp;
  (this->DepthStencil).bDepthTestEnable = bVar13;
  (this->DepthStencil).bDepthWriteEnable = bVar14;
  (this->DepthStencil).bStencilTestEnable = bVar15;
  (this->DepthStencil).bDepthBoundsTestEnable = bVar16;
  (this->DepthStencil).FrontFailOp = uVar10;
  (this->DepthStencil).FrontPassOp = uVar17;
  (this->DepthStencil).FrontDepthFailOp = uVar18;
  (this->DepthStencil).FrontCompareOp = uVar19;
  *(undefined3 *)&(this->DepthStencil).field_0x9 = uVar20;
  (this->DepthStencil).FrontCompareMask = uVar21;
  uVar21 = (param_1->DepthStencil).FrontReference;
  uVar10 = (param_1->DepthStencil).BackFailOp;
  uVar17 = (param_1->DepthStencil).BackPassOp;
  uVar18 = (param_1->DepthStencil).BackDepthFailOp;
  uVar19 = (param_1->DepthStencil).BackCompareOp;
  uVar22 = (param_1->DepthStencil).BackCompareMask;
  (this->DepthStencil).FrontWriteMask = (param_1->DepthStencil).FrontWriteMask;
  (this->DepthStencil).FrontReference = uVar21;
  (this->DepthStencil).BackFailOp = uVar10;
  (this->DepthStencil).BackPassOp = uVar17;
  (this->DepthStencil).BackDepthFailOp = uVar18;
  (this->DepthStencil).BackCompareOp = uVar19;
  (this->DepthStencil).BackCompareMask = uVar22;
  uVar21 = (param_1->DepthStencil).BackReference;
  (this->DepthStencil).BackWriteMask = (param_1->DepthStencil).BackWriteMask;
  (this->DepthStencil).BackReference = uVar21;
  uVar9 = param_1->ShaderKeys[1];
  this->ShaderKeys[0] = param_1->ShaderKeys[0];
  this->ShaderKeys[1] = uVar9;
  uVar9 = param_1->ShaderKeys[3];
  this->ShaderKeys[2] = param_1->ShaderKeys[2];
  this->ShaderKeys[3] = uVar9;
  this->ShaderKeys[4] = param_1->ShaderKeys[4];
  this->ShaderKeyShared = param_1->ShaderKeyShared;
  FRenderTargets::FRenderTargets(&this->RenderTargets,&param_1->RenderTargets);
  this->SubpassIndex = param_1->SubpassIndex;
  this->UseAlphaToCoverage = param_1->UseAlphaToCoverage;
  this->ShadingRate = param_1->ShadingRate;
  this->Combiner = param_1->Combiner;
  return this;
}

// ~FGfxPipelineDesc @ 145b4cc60

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall FGfxPipelineDesc::~FGfxPipelineDesc(FGfxPipelineDesc *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->RenderTargets).Descriptions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderTargets).ResolveAttachments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RenderTargets).ColorAttachments.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexAttributes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->VertexBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FDescriptorSetLayoutBinding,TSizedDefaultAllocator<32>_> *)
             (this->DescriptorSetLayoutBindings).AllocatorInstance.Data,
             (this->DescriptorSetLayoutBindings).ArrayNum);
  pFVar1 = (this->DescriptorSetLayoutBindings).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ColorAttachmentStates).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// CreateKey2 @ 145b63160

/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

FVulkanPSOKey * __thiscall
FGfxPipelineDesc::CreateKey2(FGfxPipelineDesc *this,FVulkanPSOKey *__return_storage_ptr__)

{
  int *piVar1;
  int iVar2;
  ForAnyElementType *pFVar3;
  uint uVar4;
  FArchiveState local_b8;
  undefined8 local_28;
  ForAnyElementType *local_20;
  undefined8 local_18;
  
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined4 *)__return_storage_ptr__ = 0;
  TDataKeyBase<1>::EnsureDataStorage((TDataKeyBase<1> *)__return_storage_ptr__);
  pFVar3 = *(ForAnyElementType **)&__return_storage_ptr__->field_0x8;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_18 = 0;
  local_20 = pFVar3;
  FArchiveState::SetIsSaving(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  piVar1 = (int *)((longlong)&pFVar3[1].Data + 4);
  iVar2 = *piVar1;
  *(undefined4 *)&pFVar3[1].Data = 0;
  if (iVar2 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,pFVar3,0,piVar1);
  }
  ::operator<<((FArchive *)&local_b8,this);
  uVar4 = (*FCrc::MemCrc32Func)(pFVar3->Data,*(int *)&pFVar3[1].Data,0);
  *(uint *)__return_storage_ptr__ = uVar4;
  FArchive::~FArchive((FArchive *)&local_b8);
  return __return_storage_ptr__;
}

