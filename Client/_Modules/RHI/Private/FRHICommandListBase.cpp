// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 24

// FRHICommandListBase @ 145c86810

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListBase * __thiscall
FRHICommandListBase::FRHICommandListBase(FRHICommandListBase *this,FPersistentState *param_1)

{
  undefined1 uVar1;
  bool bVar2;
  FRHIBreadcrumbNode *pFVar3;
  FRHITexture *pFVar4;
  FRHIVertexShader *pFVar5;
  FRHIMeshShader *pFVar6;
  FRHIGeometryShader *pFVar7;
  void *pvVar8;
  FPersistentState *pFVar9;
  uint uVar10;
  uint uVar11;
  ERenderTargetStoreAction EVar12;
  undefined6 uVar13;
  ERenderTargetLoadAction EVar14;
  ERenderTargetLoadAction EVar15;
  ERenderTargetStoreAction EVar16;
  FExclusiveDepthStencil FVar17;
  byte bVar18;
  
  FMemStackBase::FMemStackBase(&this->MemManager,Small);
  this->Root = (FRHICommandBase *)0x0;
  this->CommandLink = (FRHICommandBase **)0x0;
  this->GraphicsContext = (IRHICommandContext *)0x0;
  this->ComputeContext = (IRHIComputeContext *)0x0;
  this->UploadContext = (IRHIUploadContext *)0x0;
  *(undefined8 *)&this->Contexts = 0;
  *(undefined8 *)&(this->Contexts).field_0x8 = 0;
  this->NumCommands = 0;
  this->bExecuting = false;
  this->bAllowParallelTranslate = true;
  this->bUsesSetTrackedAccess = false;
  this->bUsesShaderBundles = false;
  this->bUsesLockFence = false;
  this->bAllowExtraTransitions = true;
  this->ActivePipelines = None;
  this->AllowedPipelines = All;
  this->LastLockFenceCommand = (FRHICommandRHIThreadFence *)0x0;
  (this->AttachedCmdLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedCmdLists).ArrayNum = 0;
  (this->AttachedCmdLists).ArrayMax = 0;
  (this->SubRenderPassInfo).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->SubRenderPassInfo).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ParallelRenderPassBegin).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ParallelRenderPassEnd).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  FBaseGraphTask::CreateGraphEvent();
  (this->ShaderParameterState).ScratchShaderParameters = (FRHIBatchedShaderParameters *)0x0;
  (this->ShaderParameterState).AllocatorsRoot = (FRHIBatchedShaderParametersAllocator *)0x0;
  (this->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchShaderUnbinds).Unbinds.ArrayNum = 0;
  (this->ScratchShaderUnbinds).Unbinds.ArrayMax = 0;
  (this->CPUBreadcrumbState).Current = FRHIBreadcrumbNode::Sentinel;
  (this->CPUBreadcrumbState).UnknownParentList.First = (FRHIBreadcrumbNode *)0x0;
  (this->CPUBreadcrumbState).UnknownParentList.Last = (FRHIBreadcrumbNode *)0x0;
  (this->CPUBreadcrumbState).bEmitBreadcrumbs = false;
  *(undefined8 *)&this->GPUBreadcrumbState = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x8 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x10 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x18 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x20 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x28 = 0;
  *(FRHIBreadcrumbNode **)&this->GPUBreadcrumbState = FRHIBreadcrumbNode::Sentinel;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x30 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x38 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x40 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x48 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x50 = 0;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x58 = 0;
  *(FRHIBreadcrumbNode **)&(this->GPUBreadcrumbState).field_0x30 = FRHIBreadcrumbNode::Sentinel;
  *(undefined8 *)&(this->BreadcrumbAllocatorRefs).field_0x20 = 0;
  *(undefined4 *)&(this->BreadcrumbAllocatorRefs).field_0x28 = 0;
  *(undefined4 *)&(this->BreadcrumbAllocatorRefs).field_0x2c = 2;
  (this->BreadcrumbAllocator).Object = (FRHIBreadcrumbAllocator *)0x0;
  (this->BreadcrumbAllocator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActivatePipelineCommands).First = (FActivatePipelineCommand *)0x0;
  (this->ActivatePipelineCommands).Prev = (FActivatePipelineCommand *)0x0;
  (this->InitialDrawStatsCategory).bIsSet = false;
  (this->PersistentState).CachedNumSimultanousRenderTargets =
       param_1->CachedNumSimultanousRenderTargets;
  uVar10 = (param_1->CachedRenderTargets).Elements[0].MipIndex;
  uVar11 = (param_1->CachedRenderTargets).Elements[0].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[0].Texture =
       (param_1->CachedRenderTargets).Elements[0].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[0].MipIndex = uVar10;
  (this->PersistentState).CachedRenderTargets.Elements[0].ArraySliceIndex = uVar11;
  EVar12 = (param_1->CachedRenderTargets).Elements[0].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[0].field_0x12;
  pFVar4 = (param_1->CachedRenderTargets).Elements[1].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[0].LoadAction =
       (param_1->CachedRenderTargets).Elements[0].LoadAction;
  (this->PersistentState).CachedRenderTargets.Elements[0].StoreAction = EVar12;
  *(undefined6 *)&(this->PersistentState).CachedRenderTargets.Elements[0].field_0x12 = uVar13;
  (this->PersistentState).CachedRenderTargets.Elements[1].Texture = pFVar4;
  uVar10 = (param_1->CachedRenderTargets).Elements[1].ArraySliceIndex;
  EVar14 = (param_1->CachedRenderTargets).Elements[1].LoadAction;
  EVar12 = (param_1->CachedRenderTargets).Elements[1].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[1].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[1].MipIndex =
       (param_1->CachedRenderTargets).Elements[1].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[1].ArraySliceIndex = uVar10;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[1].LoadAction = EVar14;
  (pFVar9->CachedRenderTargets).Elements[1].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[1].field_0x12 = uVar13;
  uVar10 = (param_1->CachedRenderTargets).Elements[2].MipIndex;
  uVar11 = (param_1->CachedRenderTargets).Elements[2].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[2].Texture =
       (param_1->CachedRenderTargets).Elements[2].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[2].MipIndex = uVar10;
  (this->PersistentState).CachedRenderTargets.Elements[2].ArraySliceIndex = uVar11;
  EVar12 = (param_1->CachedRenderTargets).Elements[2].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[2].field_0x12;
  pFVar4 = (param_1->CachedRenderTargets).Elements[3].Texture;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[2].LoadAction =
       (param_1->CachedRenderTargets).Elements[2].LoadAction;
  (pFVar9->CachedRenderTargets).Elements[2].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[2].field_0x12 = uVar13;
  (this->PersistentState).CachedRenderTargets.Elements[3].Texture = pFVar4;
  uVar10 = (param_1->CachedRenderTargets).Elements[3].ArraySliceIndex;
  EVar14 = (param_1->CachedRenderTargets).Elements[3].LoadAction;
  EVar12 = (param_1->CachedRenderTargets).Elements[3].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[3].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[3].MipIndex =
       (param_1->CachedRenderTargets).Elements[3].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[3].ArraySliceIndex = uVar10;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[3].LoadAction = EVar14;
  (pFVar9->CachedRenderTargets).Elements[3].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[3].field_0x12 = uVar13;
  uVar10 = (param_1->CachedRenderTargets).Elements[4].MipIndex;
  uVar11 = (param_1->CachedRenderTargets).Elements[4].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[4].Texture =
       (param_1->CachedRenderTargets).Elements[4].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[4].MipIndex = uVar10;
  (this->PersistentState).CachedRenderTargets.Elements[4].ArraySliceIndex = uVar11;
  EVar12 = (param_1->CachedRenderTargets).Elements[4].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[4].field_0x12;
  pFVar4 = (param_1->CachedRenderTargets).Elements[5].Texture;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[4].LoadAction =
       (param_1->CachedRenderTargets).Elements[4].LoadAction;
  (pFVar9->CachedRenderTargets).Elements[4].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[4].field_0x12 = uVar13;
  (this->PersistentState).CachedRenderTargets.Elements[5].Texture = pFVar4;
  uVar10 = (param_1->CachedRenderTargets).Elements[5].ArraySliceIndex;
  EVar14 = (param_1->CachedRenderTargets).Elements[5].LoadAction;
  EVar12 = (param_1->CachedRenderTargets).Elements[5].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[5].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[5].MipIndex =
       (param_1->CachedRenderTargets).Elements[5].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[5].ArraySliceIndex = uVar10;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[5].LoadAction = EVar14;
  (pFVar9->CachedRenderTargets).Elements[5].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[5].field_0x12 = uVar13;
  uVar10 = (param_1->CachedRenderTargets).Elements[6].MipIndex;
  uVar11 = (param_1->CachedRenderTargets).Elements[6].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[6].Texture =
       (param_1->CachedRenderTargets).Elements[6].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[6].MipIndex = uVar10;
  (this->PersistentState).CachedRenderTargets.Elements[6].ArraySliceIndex = uVar11;
  EVar12 = (param_1->CachedRenderTargets).Elements[6].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[6].field_0x12;
  pFVar4 = (param_1->CachedRenderTargets).Elements[7].Texture;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[6].LoadAction =
       (param_1->CachedRenderTargets).Elements[6].LoadAction;
  (pFVar9->CachedRenderTargets).Elements[6].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[6].field_0x12 = uVar13;
  (this->PersistentState).CachedRenderTargets.Elements[7].Texture = pFVar4;
  uVar10 = (param_1->CachedRenderTargets).Elements[7].ArraySliceIndex;
  EVar14 = (param_1->CachedRenderTargets).Elements[7].LoadAction;
  EVar12 = (param_1->CachedRenderTargets).Elements[7].StoreAction;
  uVar13 = *(undefined6 *)&(param_1->CachedRenderTargets).Elements[7].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[7].MipIndex =
       (param_1->CachedRenderTargets).Elements[7].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[7].ArraySliceIndex = uVar10;
  pFVar9 = &this->PersistentState;
  (pFVar9->CachedRenderTargets).Elements[7].LoadAction = EVar14;
  (pFVar9->CachedRenderTargets).Elements[7].StoreAction = EVar12;
  *(undefined6 *)&(pFVar9->CachedRenderTargets).Elements[7].field_0x12 = uVar13;
  EVar14 = (param_1->CachedDepthStencilTarget).DepthLoadAction;
  EVar12 = (param_1->CachedDepthStencilTarget).DepthStoreAction;
  EVar15 = (param_1->CachedDepthStencilTarget).StencilLoadAction;
  EVar16 = (param_1->CachedDepthStencilTarget).StencilStoreAction;
  FVar17.Value = (param_1->CachedDepthStencilTarget).DepthStencilAccess.Value;
  (this->PersistentState).CachedDepthStencilTarget.Texture =
       (param_1->CachedDepthStencilTarget).Texture;
  (this->PersistentState).CachedDepthStencilTarget.DepthLoadAction = EVar14;
  (this->PersistentState).CachedDepthStencilTarget.DepthStoreAction = EVar12;
  (this->PersistentState).CachedDepthStencilTarget.StencilLoadAction = EVar15;
  (this->PersistentState).CachedDepthStencilTarget.StencilStoreAction = EVar16;
  (this->PersistentState).CachedDepthStencilTarget.DepthStencilAccess =
       (FExclusiveDepthStencil)FVar17.Value;
  (this->PersistentState).SubpassHint = param_1->SubpassHint;
  (this->PersistentState).SubpassIndex = param_1->SubpassIndex;
  (this->PersistentState).MultiViewCount = param_1->MultiViewCount;
  uVar1 = (this->PersistentState).field_0xdb;
  bVar18 = ((this->PersistentState).bHasFragmentDensityAttachment ^
           param_1->bHasFragmentDensityAttachment) & 1 ^ uVar1;
  (this->PersistentState).field_0xdb = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xdb) & 2 ^ bVar18;
  (this->PersistentState).field_0xdb = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xdb) & 4 ^ bVar18;
  (this->PersistentState).field_0xdb = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xdb) & 8 ^ bVar18;
  (this->PersistentState).field_0xdb = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xdb) & 0x10 ^ bVar18;
  (this->PersistentState).field_0xdb = bVar18;
  bVar18 = (bVar18 ^ param_1->field_0xdb) & 0x20 ^ bVar18;
  (this->PersistentState).field_0xdb = bVar18;
  (this->PersistentState).field_0xdb = (bVar18 ^ param_1->field_0xdb) & 0x40 ^ bVar18;
  (this->PersistentState).CurrentGPUMask.GPUMask = (param_1->CurrentGPUMask).GPUMask;
  (this->PersistentState).InitialGPUMask.GPUMask = (param_1->InitialGPUMask).GPUMask;
  pFVar5 = (param_1->BoundShaderInput).VertexShaderRHI;
  (this->PersistentState).BoundShaderInput.VertexDeclarationRHI =
       (param_1->BoundShaderInput).VertexDeclarationRHI;
  (this->PersistentState).BoundShaderInput.VertexShaderRHI = pFVar5;
  pFVar6 = (param_1->BoundShaderInput).MeshShaderRHI;
  (this->PersistentState).BoundShaderInput.PixelShaderRHI =
       (param_1->BoundShaderInput).PixelShaderRHI;
  (this->PersistentState).BoundShaderInput.MeshShaderRHI = pFVar6;
  pFVar7 = (param_1->BoundShaderInput).GeometryShaderRHI;
  (this->PersistentState).BoundShaderInput.AmplificationShaderRHI =
       (param_1->BoundShaderInput).AmplificationShaderRHI;
  (this->PersistentState).BoundShaderInput.GeometryShaderRHI = pFVar7;
  (this->PersistentState).BoundShaderInput.WorkGraphMeshShaderRHI =
       (param_1->BoundShaderInput).WorkGraphMeshShaderRHI;
  (this->PersistentState).BoundComputeShaderRHI = param_1->BoundComputeShaderRHI;
  (this->PersistentState).BoundWorkGraphShaderRHI = param_1->BoundWorkGraphShaderRHI;
  (this->PersistentState).CurrentFenceScope = param_1->CurrentFenceScope;
  pFVar3 = param_1->LocalBreadcrumb;
  (this->PersistentState).CurrentDrawStatsCategory.bIsSet = false;
  (this->PersistentState).LocalBreadcrumb = pFVar3;
  bVar2 = (param_1->CurrentDrawStatsCategory).bIsSet;
  (this->PersistentState).CurrentDrawStatsCategory.bIsSet = bVar2;
  if (bVar2 != false) {
    (this->PersistentState).CurrentDrawStatsCategory.TypedValue =
         (param_1->CurrentDrawStatsCategory).TypedValue;
  }
  pvVar8 = (param_1->QueryBatchData_Timestamp).Elements[1];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[0] =
       (param_1->QueryBatchData_Timestamp).Elements[0];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[1] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Timestamp).Elements[3];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[2] =
       (param_1->QueryBatchData_Timestamp).Elements[2];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[3] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Timestamp).Elements[5];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[4] =
       (param_1->QueryBatchData_Timestamp).Elements[4];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[5] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Timestamp).Elements[7];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[6] =
       (param_1->QueryBatchData_Timestamp).Elements[6];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[7] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Occlusion).Elements[1];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[0] =
       (param_1->QueryBatchData_Occlusion).Elements[0];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[1] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Occlusion).Elements[3];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[2] =
       (param_1->QueryBatchData_Occlusion).Elements[2];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[3] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Occlusion).Elements[5];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[4] =
       (param_1->QueryBatchData_Occlusion).Elements[4];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[5] = pvVar8;
  pvVar8 = (param_1->QueryBatchData_Occlusion).Elements[7];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[6] =
       (param_1->QueryBatchData_Occlusion).Elements[6];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[7] = pvVar8;
  memset(&this->DrawStats,0,0x1800);
  (this->PendingBufferUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBufferUploads).ArrayNum = 0;
  (this->PendingBufferUploads).ArrayMax = 0;
  (this->PendingTextureUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTextureUploads).ArrayNum = 0;
  (this->PendingTextureUploads).ArrayMax = 0;
  this->CommandLink = &this->Root;
  return this;
}

// FRHICommandListBase @ 145c86c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListBase * __thiscall
FRHICommandListBase::FRHICommandListBase(FRHICommandListBase *this,FRHIGPUMask param_1,bool param_2)

{
  undefined1 auStack_208 [32];
  FPersistentState local_1e8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_208;
  local_1e8.CachedRenderTargets.Elements[0].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[1].ArraySliceIndex = 0xffffffff;
  local_1e8._219_1_ = (param_2 | 2U) << 5 | local_1e8._219_1_ & 0xc0;
  local_1e8.CachedNumSimultanousRenderTargets = 0;
  local_1e8.CachedRenderTargets.Elements[0].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[0].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[0].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[0].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[1].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[1].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[1].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[1].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[2].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[2].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[2].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[2].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[3].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[3].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[3].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[3].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[4].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[4].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[4].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[4].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[5].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[5].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[5].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[5].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[6].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[6].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[6].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[6].StoreAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[7].Texture = (FRHITexture *)0x0;
  local_1e8.CachedRenderTargets.Elements[7].MipIndex = 0;
  local_1e8.CachedRenderTargets.Elements[7].LoadAction = ENoAction;
  local_1e8.CachedRenderTargets.Elements[7].StoreAction = ENoAction;
  local_1e8.CachedDepthStencilTarget.Texture = (FRHITexture *)0x0;
  local_1e8.CachedDepthStencilTarget.DepthLoadAction = ENoAction;
  local_1e8.CachedDepthStencilTarget.DepthStoreAction = ENoAction;
  local_1e8.CachedDepthStencilTarget.StencilLoadAction = ENoAction;
  local_1e8.CachedDepthStencilTarget.StencilStoreAction = ENoAction;
  local_1e8.CachedDepthStencilTarget.DepthStencilAccess.Value = DepthNop;
  local_1e8.SubpassHint = None;
  local_1e8.SubpassIndex = '\0';
  local_1e8.MultiViewCount = '\0';
  local_1e8.BoundShaderInput.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
  local_1e8.CurrentFenceScope = (FRHICommandListScopedFence *)0x0;
  local_1e8.CurrentDrawStatsCategory.bIsSet = false;
  local_1e8.LocalBreadcrumb = FRHIBreadcrumbNode::Sentinel;
  local_1e8.CachedRenderTargets.Elements[2].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[3].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[4].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[5].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[6].ArraySliceIndex = 0xffffffff;
  local_1e8.CachedRenderTargets.Elements[7].ArraySliceIndex = 0xffffffff;
  local_1e8.BoundShaderInput.VertexShaderRHI = (FRHIVertexShader *)0x0;
  local_1e8.BoundShaderInput.PixelShaderRHI = (FRHIPixelShader *)0x0;
  local_1e8.BoundShaderInput.MeshShaderRHI = (FRHIMeshShader *)0x0;
  local_1e8.BoundShaderInput.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
  local_1e8.BoundShaderInput.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
  local_1e8.BoundShaderInput.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_1e8.BoundComputeShaderRHI = (FRHIComputeShader *)0x0;
  local_1e8.BoundWorkGraphShaderRHI = (FRHIWorkGraphShader *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[0] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[1] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[2] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[3] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[4] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[5] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[6] = (void *)0x0;
  local_1e8.QueryBatchData_Timestamp.Elements[7] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[0] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[1] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[2] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[3] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[4] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[5] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[6] = (void *)0x0;
  local_1e8.QueryBatchData_Occlusion.Elements[7] = (void *)0x0;
  local_1e8.CurrentGPUMask.GPUMask = param_1.GPUMask;
  local_1e8.InitialGPUMask.GPUMask = param_1.GPUMask;
  FRHICommandListBase(this,&local_1e8);
  return this;
}

// FRHICommandListBase @ 145c86dd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FRHICommandListBase * __thiscall
FRHICommandListBase::FRHICommandListBase(FRHICommandListBase *this,FRHICommandListBase *param_1)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  FRHICommandRHIThreadFence *pFVar4;
  FRHIParallelRenderPassInfo *pFVar5;
  undefined8 uVar6;
  void *pvVar7;
  FRHIBreadcrumbNode *pFVar8;
  FActivatePipelineCommand *pFVar9;
  FRHITexture *pFVar10;
  FRHIVertexShader *pFVar11;
  FRHIMeshShader *pFVar12;
  FRHIGeometryShader *pFVar13;
  FPersistentState *pFVar14;
  FPersistentState *pFVar15;
  undefined7 uVar16;
  uint uVar17;
  uint uVar18;
  ERenderTargetStoreAction EVar19;
  undefined6 uVar20;
  ERenderTargetLoadAction EVar21;
  ERenderTargetLoadAction EVar22;
  ERenderTargetStoreAction EVar23;
  FExclusiveDepthStencil FVar24;
  byte bVar25;
  
  (this->MemManager).Top = (uchar *)0x0;
  (this->MemManager).End = (uchar *)0x0;
  (this->MemManager).TopChunk = (FTaggedMemory *)0x0;
  (this->MemManager).TopMark = (FMemMark *)0x0;
  (this->MemManager).NumMarks = 0;
  (this->MemManager).PageSize = Small;
  (this->MemManager).bShouldEnforceAllocMarks = false;
  FMemStackBase::FreeChunks(&this->MemManager,(FTaggedMemory *)0x0);
  (this->MemManager).Top = (param_1->MemManager).Top;
  (this->MemManager).End = (param_1->MemManager).End;
  (this->MemManager).TopChunk = (param_1->MemManager).TopChunk;
  (this->MemManager).TopMark = (param_1->MemManager).TopMark;
  (this->MemManager).NumMarks = (param_1->MemManager).NumMarks;
  (this->MemManager).bShouldEnforceAllocMarks = (param_1->MemManager).bShouldEnforceAllocMarks;
  (param_1->MemManager).Top = (uchar *)0x0;
  (param_1->MemManager).End = (uchar *)0x0;
  (param_1->MemManager).TopChunk = (FTaggedMemory *)0x0;
  (param_1->MemManager).NumMarks = 0;
  (param_1->MemManager).bShouldEnforceAllocMarks = false;
  this->Root = param_1->Root;
  this->CommandLink = param_1->CommandLink;
  this->GraphicsContext = param_1->GraphicsContext;
  this->ComputeContext = param_1->ComputeContext;
  this->UploadContext = param_1->UploadContext;
  uVar6 = *(undefined8 *)&(param_1->Contexts).field_0x8;
  *(undefined8 *)&this->Contexts = *(undefined8 *)&param_1->Contexts;
  *(undefined8 *)&(this->Contexts).field_0x8 = uVar6;
  this->NumCommands = param_1->NumCommands;
  this->bExecuting = param_1->bExecuting;
  this->bAllowParallelTranslate = param_1->bAllowParallelTranslate;
  this->bUsesSetTrackedAccess = param_1->bUsesSetTrackedAccess;
  this->bUsesShaderBundles = param_1->bUsesShaderBundles;
  this->bUsesLockFence = param_1->bUsesLockFence;
  this->bAllowExtraTransitions = param_1->bAllowExtraTransitions;
  this->ActivePipelines = param_1->ActivePipelines;
  this->AllowedPipelines = param_1->AllowedPipelines;
  pFVar4 = param_1->LastLockFenceCommand;
  (this->AttachedCmdLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->LastLockFenceCommand = pFVar4;
  (this->AttachedCmdLists).AllocatorInstance.Data =
       (param_1->AttachedCmdLists).AllocatorInstance.Data;
  (param_1->AttachedCmdLists).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AttachedCmdLists).ArrayNum = (param_1->AttachedCmdLists).ArrayNum;
  (this->AttachedCmdLists).ArrayMax = (param_1->AttachedCmdLists).ArrayMax;
  (param_1->AttachedCmdLists).ArrayNum = 0;
  (param_1->AttachedCmdLists).ArrayMax = 0;
  (this->SubRenderPassInfo).Object = (param_1->SubRenderPassInfo).Object;
  (this->SubRenderPassInfo).SharedReferenceCount.ReferenceController =
       (param_1->SubRenderPassInfo).SharedReferenceCount.ReferenceController;
  pFVar5 = (param_1->ParallelRenderPassBegin).Object;
  (param_1->SubRenderPassInfo).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->SubRenderPassInfo).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->ParallelRenderPassBegin).Object = pFVar5;
  (this->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController =
       (param_1->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController;
  (param_1->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ParallelRenderPassBegin).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->ParallelRenderPassEnd).Object = (param_1->ParallelRenderPassEnd).Object;
  (this->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController =
       (param_1->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController;
  (param_1->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->ParallelRenderPassEnd).Object = (FRHIParallelRenderPassInfo *)0x0;
  (this->DispatchEvent).Reference = (FBaseGraphTask *)0x0;
  (this->DispatchEvent).Reference = (param_1->DispatchEvent).Reference;
  (param_1->DispatchEvent).Reference = (FBaseGraphTask *)0x0;
  (this->ShaderParameterState).ScratchShaderParameters = (FRHIBatchedShaderParameters *)0x0;
  (this->ShaderParameterState).AllocatorsRoot = (FRHIBatchedShaderParametersAllocator *)0x0;
  (this->ShaderParameterState).AllocatorsRoot = (param_1->ShaderParameterState).AllocatorsRoot;
  (this->ShaderParameterState).ScratchShaderParameters =
       (param_1->ShaderParameterState).ScratchShaderParameters;
  (param_1->ShaderParameterState).AllocatorsRoot = (FRHIBatchedShaderParametersAllocator *)0x0;
  (param_1->ShaderParameterState).ScratchShaderParameters = (FRHIBatchedShaderParameters *)0x0;
  (this->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data =
       (param_1->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data;
  (param_1->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScratchShaderUnbinds).Unbinds.ArrayNum = (param_1->ScratchShaderUnbinds).Unbinds.ArrayNum;
  (this->ScratchShaderUnbinds).Unbinds.ArrayMax = (param_1->ScratchShaderUnbinds).Unbinds.ArrayMax;
  (param_1->ScratchShaderUnbinds).Unbinds.ArrayNum = 0;
  (param_1->ScratchShaderUnbinds).Unbinds.ArrayMax = 0;
  pFVar8 = (param_1->CPUBreadcrumbState).UnknownParentList.First;
  (this->CPUBreadcrumbState).Current = (param_1->CPUBreadcrumbState).Current;
  (this->CPUBreadcrumbState).UnknownParentList.First = pFVar8;
  bVar2 = (param_1->CPUBreadcrumbState).bEmitBreadcrumbs;
  uVar16 = *(undefined7 *)&(param_1->CPUBreadcrumbState).field_0x19;
  (this->CPUBreadcrumbState).UnknownParentList.Last =
       (param_1->CPUBreadcrumbState).UnknownParentList.Last;
  (this->CPUBreadcrumbState).bEmitBreadcrumbs = bVar2;
  *(undefined7 *)&(this->CPUBreadcrumbState).field_0x19 = uVar16;
  uVar6 = *(undefined8 *)&param_1->GPUBreadcrumbState;
  (this->GPUBreadcrumbState).field_0x10 = 0;
  *(undefined8 *)&this->GPUBreadcrumbState = uVar6;
  cVar1 = (param_1->GPUBreadcrumbState).field_0x10;
  (this->GPUBreadcrumbState).field_0x10 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&(this->GPUBreadcrumbState).field_0x8 =
         *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x8;
  }
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x18 =
       *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x18;
  uVar6 = *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x28;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x20 =
       *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x20;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x28 = uVar6;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x30 =
       *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x30;
  (this->GPUBreadcrumbState).field_0x40 = 0;
  cVar1 = (param_1->GPUBreadcrumbState).field_0x40;
  (this->GPUBreadcrumbState).field_0x40 = cVar1;
  if (cVar1 != '\0') {
    *(undefined8 *)&(this->GPUBreadcrumbState).field_0x38 =
         *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x38;
  }
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x48 =
       *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x48;
  uVar6 = *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x58;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x50 =
       *(undefined8 *)&(param_1->GPUBreadcrumbState).field_0x50;
  *(undefined8 *)&(this->GPUBreadcrumbState).field_0x58 = uVar6;
  *(undefined8 *)&(this->BreadcrumbAllocatorRefs).field_0x20 = 0;
  if (*(longlong *)&(param_1->BreadcrumbAllocatorRefs).field_0x20 == 0) {
    memmove(&this->BreadcrumbAllocatorRefs,&param_1->BreadcrumbAllocatorRefs,0x20);
  }
  pvVar7 = *(void **)&(this->BreadcrumbAllocatorRefs).field_0x20;
  if (pvVar7 != (void *)0x0) {
    FMemory::Free(pvVar7);
  }
  *(undefined8 *)&(this->BreadcrumbAllocatorRefs).field_0x20 =
       *(undefined8 *)&(param_1->BreadcrumbAllocatorRefs).field_0x20;
  *(undefined8 *)&(param_1->BreadcrumbAllocatorRefs).field_0x20 = 0;
  *(undefined4 *)&(this->BreadcrumbAllocatorRefs).field_0x28 =
       *(undefined4 *)&(param_1->BreadcrumbAllocatorRefs).field_0x28;
  *(undefined4 *)&(this->BreadcrumbAllocatorRefs).field_0x2c =
       *(undefined4 *)&(param_1->BreadcrumbAllocatorRefs).field_0x2c;
  *(undefined4 *)&(param_1->BreadcrumbAllocatorRefs).field_0x28 = 0;
  *(undefined4 *)&(param_1->BreadcrumbAllocatorRefs).field_0x2c = 2;
  (this->BreadcrumbAllocator).Object = (param_1->BreadcrumbAllocator).Object;
  (this->BreadcrumbAllocator).SharedReferenceCount.ReferenceController =
       (param_1->BreadcrumbAllocator).SharedReferenceCount.ReferenceController;
  (param_1->BreadcrumbAllocator).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (param_1->BreadcrumbAllocator).Object = (FRHIBreadcrumbAllocator *)0x0;
  pFVar9 = (param_1->ActivatePipelineCommands).Prev;
  (this->ActivatePipelineCommands).First = (param_1->ActivatePipelineCommands).First;
  (this->ActivatePipelineCommands).Prev = pFVar9;
  (this->InitialDrawStatsCategory).bIsSet = false;
  bVar2 = (param_1->InitialDrawStatsCategory).bIsSet;
  (this->InitialDrawStatsCategory).bIsSet = bVar2;
  if (bVar2 != false) {
    (this->InitialDrawStatsCategory).TypedValue = (param_1->InitialDrawStatsCategory).TypedValue;
  }
  (this->PersistentState).CachedNumSimultanousRenderTargets =
       (param_1->PersistentState).CachedNumSimultanousRenderTargets;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[0].MipIndex;
  uVar18 = (param_1->PersistentState).CachedRenderTargets.Elements[0].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[0].Texture =
       (param_1->PersistentState).CachedRenderTargets.Elements[0].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[0].MipIndex = uVar17;
  (this->PersistentState).CachedRenderTargets.Elements[0].ArraySliceIndex = uVar18;
  EVar19 = (param_1->PersistentState).CachedRenderTargets.Elements[0].StoreAction;
  uVar20 = *(undefined6 *)&(param_1->PersistentState).CachedRenderTargets.Elements[0].field_0x12;
  pFVar10 = (param_1->PersistentState).CachedRenderTargets.Elements[1].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[0].LoadAction =
       (param_1->PersistentState).CachedRenderTargets.Elements[0].LoadAction;
  (this->PersistentState).CachedRenderTargets.Elements[0].StoreAction = EVar19;
  *(undefined6 *)&(this->PersistentState).CachedRenderTargets.Elements[0].field_0x12 = uVar20;
  (this->PersistentState).CachedRenderTargets.Elements[1].Texture = pFVar10;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[1].ArraySliceIndex;
  pFVar14 = &param_1->PersistentState;
  EVar21 = (pFVar14->CachedRenderTargets).Elements[1].LoadAction;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[1].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[1].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[1].MipIndex =
       (param_1->PersistentState).CachedRenderTargets.Elements[1].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[1].ArraySliceIndex = uVar17;
  pFVar14 = &this->PersistentState;
  (pFVar14->CachedRenderTargets).Elements[1].LoadAction = EVar21;
  (pFVar14->CachedRenderTargets).Elements[1].StoreAction = EVar19;
  *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[1].field_0x12 = uVar20;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[2].MipIndex;
  uVar18 = (param_1->PersistentState).CachedRenderTargets.Elements[2].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[2].Texture =
       (param_1->PersistentState).CachedRenderTargets.Elements[2].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[2].MipIndex = uVar17;
  (this->PersistentState).CachedRenderTargets.Elements[2].ArraySliceIndex = uVar18;
  pFVar14 = &param_1->PersistentState;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[2].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[2].field_0x12;
  pFVar10 = (param_1->PersistentState).CachedRenderTargets.Elements[3].Texture;
  pFVar15 = &this->PersistentState;
  (pFVar15->CachedRenderTargets).Elements[2].LoadAction =
       (pFVar14->CachedRenderTargets).Elements[2].LoadAction;
  (pFVar15->CachedRenderTargets).Elements[2].StoreAction = EVar19;
  *(undefined6 *)&(pFVar15->CachedRenderTargets).Elements[2].field_0x12 = uVar20;
  (this->PersistentState).CachedRenderTargets.Elements[3].Texture = pFVar10;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[3].ArraySliceIndex;
  pFVar14 = &param_1->PersistentState;
  EVar21 = (pFVar14->CachedRenderTargets).Elements[3].LoadAction;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[3].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[3].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[3].MipIndex =
       (param_1->PersistentState).CachedRenderTargets.Elements[3].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[3].ArraySliceIndex = uVar17;
  pFVar14 = &this->PersistentState;
  (pFVar14->CachedRenderTargets).Elements[3].LoadAction = EVar21;
  (pFVar14->CachedRenderTargets).Elements[3].StoreAction = EVar19;
  *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[3].field_0x12 = uVar20;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[4].MipIndex;
  uVar18 = (param_1->PersistentState).CachedRenderTargets.Elements[4].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[4].Texture =
       (param_1->PersistentState).CachedRenderTargets.Elements[4].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[4].MipIndex = uVar17;
  (this->PersistentState).CachedRenderTargets.Elements[4].ArraySliceIndex = uVar18;
  pFVar14 = &param_1->PersistentState;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[4].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[4].field_0x12;
  pFVar10 = (param_1->PersistentState).CachedRenderTargets.Elements[5].Texture;
  pFVar15 = &this->PersistentState;
  (pFVar15->CachedRenderTargets).Elements[4].LoadAction =
       (pFVar14->CachedRenderTargets).Elements[4].LoadAction;
  (pFVar15->CachedRenderTargets).Elements[4].StoreAction = EVar19;
  *(undefined6 *)&(pFVar15->CachedRenderTargets).Elements[4].field_0x12 = uVar20;
  (this->PersistentState).CachedRenderTargets.Elements[5].Texture = pFVar10;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[5].ArraySliceIndex;
  pFVar14 = &param_1->PersistentState;
  EVar21 = (pFVar14->CachedRenderTargets).Elements[5].LoadAction;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[5].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[5].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[5].MipIndex =
       (param_1->PersistentState).CachedRenderTargets.Elements[5].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[5].ArraySliceIndex = uVar17;
  pFVar14 = &this->PersistentState;
  (pFVar14->CachedRenderTargets).Elements[5].LoadAction = EVar21;
  (pFVar14->CachedRenderTargets).Elements[5].StoreAction = EVar19;
  *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[5].field_0x12 = uVar20;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[6].MipIndex;
  uVar18 = (param_1->PersistentState).CachedRenderTargets.Elements[6].ArraySliceIndex;
  (this->PersistentState).CachedRenderTargets.Elements[6].Texture =
       (param_1->PersistentState).CachedRenderTargets.Elements[6].Texture;
  (this->PersistentState).CachedRenderTargets.Elements[6].MipIndex = uVar17;
  (this->PersistentState).CachedRenderTargets.Elements[6].ArraySliceIndex = uVar18;
  pFVar14 = &param_1->PersistentState;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[6].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[6].field_0x12;
  pFVar10 = (param_1->PersistentState).CachedRenderTargets.Elements[7].Texture;
  pFVar15 = &this->PersistentState;
  (pFVar15->CachedRenderTargets).Elements[6].LoadAction =
       (pFVar14->CachedRenderTargets).Elements[6].LoadAction;
  (pFVar15->CachedRenderTargets).Elements[6].StoreAction = EVar19;
  *(undefined6 *)&(pFVar15->CachedRenderTargets).Elements[6].field_0x12 = uVar20;
  (this->PersistentState).CachedRenderTargets.Elements[7].Texture = pFVar10;
  uVar17 = (param_1->PersistentState).CachedRenderTargets.Elements[7].ArraySliceIndex;
  pFVar14 = &param_1->PersistentState;
  EVar21 = (pFVar14->CachedRenderTargets).Elements[7].LoadAction;
  EVar19 = (pFVar14->CachedRenderTargets).Elements[7].StoreAction;
  uVar20 = *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[7].field_0x12;
  (this->PersistentState).CachedRenderTargets.Elements[7].MipIndex =
       (param_1->PersistentState).CachedRenderTargets.Elements[7].MipIndex;
  (this->PersistentState).CachedRenderTargets.Elements[7].ArraySliceIndex = uVar17;
  pFVar14 = &this->PersistentState;
  (pFVar14->CachedRenderTargets).Elements[7].LoadAction = EVar21;
  (pFVar14->CachedRenderTargets).Elements[7].StoreAction = EVar19;
  *(undefined6 *)&(pFVar14->CachedRenderTargets).Elements[7].field_0x12 = uVar20;
  EVar21 = (param_1->PersistentState).CachedDepthStencilTarget.DepthLoadAction;
  EVar19 = (param_1->PersistentState).CachedDepthStencilTarget.DepthStoreAction;
  EVar22 = (param_1->PersistentState).CachedDepthStencilTarget.StencilLoadAction;
  EVar23 = (param_1->PersistentState).CachedDepthStencilTarget.StencilStoreAction;
  FVar24.Value = (param_1->PersistentState).CachedDepthStencilTarget.DepthStencilAccess.Value;
  (this->PersistentState).CachedDepthStencilTarget.Texture =
       (param_1->PersistentState).CachedDepthStencilTarget.Texture;
  (this->PersistentState).CachedDepthStencilTarget.DepthLoadAction = EVar21;
  (this->PersistentState).CachedDepthStencilTarget.DepthStoreAction = EVar19;
  (this->PersistentState).CachedDepthStencilTarget.StencilLoadAction = EVar22;
  (this->PersistentState).CachedDepthStencilTarget.StencilStoreAction = EVar23;
  (this->PersistentState).CachedDepthStencilTarget.DepthStencilAccess =
       (FExclusiveDepthStencil)FVar24.Value;
  (this->PersistentState).SubpassHint = (param_1->PersistentState).SubpassHint;
  (this->PersistentState).SubpassIndex = (param_1->PersistentState).SubpassIndex;
  (this->PersistentState).MultiViewCount = (param_1->PersistentState).MultiViewCount;
  uVar3 = (this->PersistentState).field_0xdb;
  bVar25 = ((this->PersistentState).bHasFragmentDensityAttachment ^
           (param_1->PersistentState).bHasFragmentDensityAttachment) & 1 ^ uVar3;
  (this->PersistentState).field_0xdb = bVar25;
  bVar25 = (bVar25 ^ (param_1->PersistentState).field_0xdb) & 2 ^ bVar25;
  (this->PersistentState).field_0xdb = bVar25;
  bVar25 = (bVar25 ^ (param_1->PersistentState).field_0xdb) & 4 ^ bVar25;
  (this->PersistentState).field_0xdb = bVar25;
  bVar25 = (bVar25 ^ (param_1->PersistentState).field_0xdb) & 8 ^ bVar25;
  (this->PersistentState).field_0xdb = bVar25;
  bVar25 = (bVar25 ^ (param_1->PersistentState).field_0xdb) & 0x10 ^ bVar25;
  (this->PersistentState).field_0xdb = bVar25;
  bVar25 = (bVar25 ^ (param_1->PersistentState).field_0xdb) & 0x20 ^ bVar25;
  (this->PersistentState).field_0xdb = bVar25;
  (this->PersistentState).field_0xdb =
       (bVar25 ^ (param_1->PersistentState).field_0xdb) & 0x40 ^ bVar25;
  (this->PersistentState).CurrentGPUMask.GPUMask = (param_1->PersistentState).CurrentGPUMask.GPUMask
  ;
  (this->PersistentState).InitialGPUMask.GPUMask = (param_1->PersistentState).InitialGPUMask.GPUMask
  ;
  pFVar11 = (param_1->PersistentState).BoundShaderInput.VertexShaderRHI;
  (this->PersistentState).BoundShaderInput.VertexDeclarationRHI =
       (param_1->PersistentState).BoundShaderInput.VertexDeclarationRHI;
  (this->PersistentState).BoundShaderInput.VertexShaderRHI = pFVar11;
  pFVar12 = (param_1->PersistentState).BoundShaderInput.MeshShaderRHI;
  (this->PersistentState).BoundShaderInput.PixelShaderRHI =
       (param_1->PersistentState).BoundShaderInput.PixelShaderRHI;
  (this->PersistentState).BoundShaderInput.MeshShaderRHI = pFVar12;
  pFVar13 = (param_1->PersistentState).BoundShaderInput.GeometryShaderRHI;
  (this->PersistentState).BoundShaderInput.AmplificationShaderRHI =
       (param_1->PersistentState).BoundShaderInput.AmplificationShaderRHI;
  (this->PersistentState).BoundShaderInput.GeometryShaderRHI = pFVar13;
  (this->PersistentState).BoundShaderInput.WorkGraphMeshShaderRHI =
       (param_1->PersistentState).BoundShaderInput.WorkGraphMeshShaderRHI;
  (this->PersistentState).BoundComputeShaderRHI = (param_1->PersistentState).BoundComputeShaderRHI;
  (this->PersistentState).BoundWorkGraphShaderRHI =
       (param_1->PersistentState).BoundWorkGraphShaderRHI;
  (this->PersistentState).CurrentFenceScope = (param_1->PersistentState).CurrentFenceScope;
  pFVar8 = (param_1->PersistentState).LocalBreadcrumb;
  (this->PersistentState).CurrentDrawStatsCategory.bIsSet = false;
  (this->PersistentState).LocalBreadcrumb = pFVar8;
  bVar2 = (param_1->PersistentState).CurrentDrawStatsCategory.bIsSet;
  (this->PersistentState).CurrentDrawStatsCategory.bIsSet = bVar2;
  if (bVar2 != false) {
    (this->PersistentState).CurrentDrawStatsCategory.TypedValue =
         (param_1->PersistentState).CurrentDrawStatsCategory.TypedValue;
  }
  pvVar7 = (param_1->PersistentState).QueryBatchData_Timestamp.Elements[1];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[0] =
       (param_1->PersistentState).QueryBatchData_Timestamp.Elements[0];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[1] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Timestamp.Elements[3];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[2] =
       (param_1->PersistentState).QueryBatchData_Timestamp.Elements[2];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[3] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Timestamp.Elements[5];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[4] =
       (param_1->PersistentState).QueryBatchData_Timestamp.Elements[4];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[5] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Timestamp.Elements[7];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[6] =
       (param_1->PersistentState).QueryBatchData_Timestamp.Elements[6];
  (this->PersistentState).QueryBatchData_Timestamp.Elements[7] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Occlusion.Elements[1];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[0] =
       (param_1->PersistentState).QueryBatchData_Occlusion.Elements[0];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[1] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Occlusion.Elements[3];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[2] =
       (param_1->PersistentState).QueryBatchData_Occlusion.Elements[2];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[3] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Occlusion.Elements[5];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[4] =
       (param_1->PersistentState).QueryBatchData_Occlusion.Elements[4];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[5] = pvVar7;
  pvVar7 = (param_1->PersistentState).QueryBatchData_Occlusion.Elements[7];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[6] =
       (param_1->PersistentState).QueryBatchData_Occlusion.Elements[6];
  (this->PersistentState).QueryBatchData_Occlusion.Elements[7] = pvVar7;
  memcpy(&this->DrawStats,&param_1->DrawStats,0x1800);
  (this->PendingBufferUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBufferUploads).AllocatorInstance.Data =
       (param_1->PendingBufferUploads).AllocatorInstance.Data;
  (param_1->PendingBufferUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingBufferUploads).ArrayNum = (param_1->PendingBufferUploads).ArrayNum;
  (this->PendingBufferUploads).ArrayMax = (param_1->PendingBufferUploads).ArrayMax;
  (param_1->PendingBufferUploads).ArrayNum = 0;
  (param_1->PendingBufferUploads).ArrayMax = 0;
  (this->PendingTextureUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTextureUploads).AllocatorInstance.Data =
       (param_1->PendingTextureUploads).AllocatorInstance.Data;
  (param_1->PendingTextureUploads).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTextureUploads).ArrayNum = (param_1->PendingTextureUploads).ArrayNum;
  (this->PendingTextureUploads).ArrayMax = (param_1->PendingTextureUploads).ArrayMax;
  (param_1->PendingTextureUploads).ArrayNum = 0;
  (param_1->PendingTextureUploads).ArrayMax = 0;
  return this;
}

// ~FRHICommandListBase @ 145c8ac70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandListBase::~FRHICommandListBase(FRHICommandListBase *this)

{
  undefined1 *puVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  void *pvVar4;
  FRHIBatchedShaderParametersAllocator *this_00;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar8;
  TStaticArray<void_*,8,4294967295> *pTVar9;
  
  if ((((this->MemManager).TopChunk != (FTaggedMemory *)0x0) && (this->bExecuting == false)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasCommands() || IsExecuting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0xa0,
                         L"FRHICommandListBase has been deleted while it still contained commands. The command list was not submitted."
                        ), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  for (pTVar9 = &(this->PersistentState).QueryBatchData_Occlusion;
      (FRHIDrawStats *)pTVar9 != &this->DrawStats;
      pTVar9 = (TStaticArray<void_*,8,4294967295> *)(pTVar9->Elements + 1)) {
    if ((pTVar9->Elements[0] != (void *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Data == nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0xa4,L""), bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar3 = (this->PendingTextureUploads).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingBufferUploads).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BreadcrumbAllocator).SharedReferenceCount.ReferenceController);
  pTVar8 = *(TSharedRef<FRHIBreadcrumbAllocator,1> **)&(this->BreadcrumbAllocatorRefs).field_0x20;
  if (pTVar8 == (TSharedRef<FRHIBreadcrumbAllocator,1> *)0x0) {
    pTVar8 = (TSharedRef<FRHIBreadcrumbAllocator,1> *)&this->BreadcrumbAllocatorRefs;
  }
  DestructItems<TSharedRef<FRHIBreadcrumbAllocator,1>,int>
            (pTVar8,*(int *)&(this->BreadcrumbAllocatorRefs).field_0x28);
  pvVar4 = *(void **)&(this->BreadcrumbAllocatorRefs).field_0x20;
  if (pvVar4 != (void *)0x0) {
    FMemory::Free(pvVar4);
  }
  pFVar3 = (this->ScratchShaderUnbinds).Unbinds.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if ((this->ShaderParameterState).ScratchShaderParameters != (FRHIBatchedShaderParameters *)0x0) {
    (this->ShaderParameterState).ScratchShaderParameters = (FRHIBatchedShaderParameters *)0x0;
  }
  for (this_00 = (this->ShaderParameterState).AllocatorsRoot;
      this_00 != (FRHIBatchedShaderParametersAllocator *)0x0; this_00 = this_00->Next) {
    FRHIBatchedShaderParametersAllocator::~FRHIBatchedShaderParametersAllocator(this_00);
  }
  (this->ShaderParameterState).AllocatorsRoot = (FRHIBatchedShaderParametersAllocator *)0x0;
  pFVar5 = (this->DispatchEvent).Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)pFVar5)();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SubRenderPassInfo).SharedReferenceCount.ReferenceController);
  pFVar3 = (this->AttachedCmdLists).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  if (((GIsCriticalError == false) && ((this->MemManager).NumMarks != 0)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(GIsCriticalError || !NumMarks)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                         ,0x74,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  FMemStackBase::FreeChunks(&this->MemManager,(FTaggedMemory *)0x0);
  return;
}

// operator() @ 145c8beb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FRHICommandListBase::ActivatePipelines'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  atomic<unsigned_char> aVar4;
  FRHIParallelRenderPassInfo *pFVar5;
  FRHIBreadcrumbNode *pFVar6;
  FRHIBreadcrumbNode *pFVar7;
  code *pcVar8;
  bool bVar9;
  atomic<unsigned_char> aVar10;
  longlong lVar11;
  IRHICommandContext *pIVar12;
  FRHICommandBase *pFVar13;
  uint uVar14;
  FRHIBreadcrumbNode *pFVar15;
  longlong lVar16;
  ERHIPipeline EVar17;
  FRHIBreadcrumbNode *pFVar18;
  FRHIContextArray *pFVar19;
  ulonglong uVar20;
  uint uVar21;
  ERHIPipeline EVar22;
  undefined8 local_78;
  FRHIBreadcrumbNode *local_70;
  ERHIPipeline EStack_68;
  undefined7 uStack_67;
  <lambda_1> local_60;
  
  param_1->ActivePipelines = *(ERHIPipeline *)this;
  if (*(char *)((longlong)this + 1) == '\0') {
    param_1->GraphicsContext = (IRHICommandContext *)0x0;
    param_1->ComputeContext = (IRHIComputeContext *)0x0;
  }
  EVar17 = *(ERHIPipeline *)this;
  do {
    if (EVar17 == None) {
      return;
    }
    EVar22 = ~EVar17 + Graphics & EVar17;
    if ((EVar22 == Graphics) || (EVar22 != AsyncCompute)) {
      pFVar19 = &param_1->Contexts;
      if (EVar22 == Graphics) {
        pIVar12 = *(IRHICommandContext **)pFVar19;
        if (pIVar12 == (IRHICommandContext *)0x0) {
          pFVar5 = (param_1->SubRenderPassInfo).Object;
          if (pFVar5 == (FRHIParallelRenderPassInfo *)0x0) {
            if ((((param_1->bAllowParallelTranslate == false) ||
                 ((param_1->PersistentState).bImmediate != '\0')) ||
                (param_1->bUsesLockFence != false)) ||
               ((param_1->bUsesShaderBundles != false &&
                (GRHIGlobals.ShaderBundles.SupportsParallel == false)))) {
              pIVar12 = (IRHICommandContext *)(**(code **)(GDynamicRHI->_padding_ + 0x3b8))();
            }
            else {
              pIVar12 = (IRHICommandContext *)
                        (**(code **)(GDynamicRHI->_padding_ + 0x3c0))
                                  (GDynamicRHI,1,
                                   (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
            }
          }
          else {
            pIVar12 = (IRHICommandContext *)
                      (**(code **)(GDynamicRHI->_padding_ + 0x3c8))
                                (GDynamicRHI,pFVar5,
                                 (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
          }
          *(IRHICommandContext **)pFVar19 = pIVar12;
        }
        if (*(char *)((longlong)this + 1) != '\0') {
          param_1->GraphicsContext = pIVar12;
          goto LAB_145c8c0bd;
        }
      }
      else {
        if (EVar22 == AsyncCompute) goto LAB_145c8bf37;
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x19b,L"");
        if (bVar9) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
    }
    else {
      pFVar19 = (FRHIContextArray *)&(param_1->Contexts).field_0x8;
LAB_145c8bf37:
      if (((param_1->SubRenderPassInfo).Object != (FRHIParallelRenderPassInfo *)0x0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!ExecutingCmdList.IsSubCommandList()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                             ,0x1b9,L"Sub command lists are only allowed to use the graphics pipe.")
         , bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)pFVar19 == 0) {
        lVar11 = (**(code **)(GDynamicRHI->_padding_ + 0x3c0))
                           (GDynamicRHI,EVar22,
                            (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1);
        *(longlong *)pFVar19 = lVar11;
        if ((lVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Context",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                               ,0x1be,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
      }
      if (*(char *)((longlong)this + 1) != '\0') {
        param_1->GraphicsContext = (IRHICommandContext *)0x0;
LAB_145c8c0bd:
        param_1->ComputeContext = *(IRHIComputeContext **)pFVar19;
      }
    }
    (**(code **)(**(longlong **)pFVar19 + 0xe8))
              (*(longlong **)pFVar19,(param_1->PersistentState).CurrentGPUMask.GPUMask);
    (**(code **)(**(longlong **)pFVar19 + 0x168))(*(longlong **)pFVar19,param_1);
    pFVar6 = *(FRHIBreadcrumbNode **)(*(longlong *)((longlong)this + 8) + 8);
    if (((*(ERHIPipeline *)(*(longlong *)((longlong)this + 8) + 0x10) & EVar22) != EVar22) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("EnumHasAllFlags(Command->Pipelines, Pipeline)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x1d0,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pFVar6 == FRHIBreadcrumbNode::Sentinel) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Target != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x1d1,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((EVar22 == Graphics) || (lVar11 = 0x130, EVar22 != AsyncCompute)) {
      lVar11 = 0x100;
    }
    plVar1 = (longlong *)((longlong)&(param_1->MemManager).Top + lVar11);
    if (((FRHIBreadcrumbNode *)*plVar1 == FRHIBreadcrumbNode::Sentinel) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Current != FRHIBreadcrumbNode::Sentinel",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                           ,0x1d4,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar7 = (FRHIBreadcrumbNode *)*plVar1;
    if (pFVar7 != pFVar6) {
      uVar21 = 0;
      for (pFVar15 = pFVar7; pFVar15 != (FRHIBreadcrumbNode *)0x0; pFVar15 = pFVar15->Parent) {
        uVar21 = uVar21 + 1;
      }
      uVar14 = 0;
      for (pFVar15 = pFVar6; pFVar15 != (FRHIBreadcrumbNode *)0x0; pFVar15 = pFVar15->Parent) {
        uVar14 = uVar14 + 1;
      }
      bVar9 = false;
      pFVar15 = pFVar6;
      if (uVar21 < uVar14) {
        uVar20 = (ulonglong)(uVar14 - uVar21);
        do {
          pFVar15 = pFVar15->Parent;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
        bVar9 = uVar21 < uVar14;
      }
      pFVar18 = pFVar7;
      if (!bVar9 && uVar21 != uVar14) {
        uVar20 = (ulonglong)(uVar21 - uVar14);
        do {
          pFVar18 = pFVar18->Parent;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      if (pFVar18 != pFVar15) {
        do {
          pFVar18 = pFVar18->Parent;
          pFVar15 = pFVar15->Parent;
        } while (pFVar18 != pFVar15);
      }
      while (pFVar7 != pFVar18) {
        pFVar7 = (FRHIBreadcrumbNode *)*plVar1;
        if (((pFVar7 == (FRHIBreadcrumbNode *)0x0) || (pFVar7 == FRHIBreadcrumbNode::Sentinel)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Breadcrumb && Breadcrumb != FRHIBreadcrumbNode::Sentinel",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0xd15,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((EVar22 == None) || ((EVar22 & EVar22 - Graphics) != None)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSingleRHIPipeline(Pipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0xd16,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (((param_1->ActivePipelines & EVar22) != EVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("EnumHasAllFlags(ActivePipelines, Pipeline)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0xd17,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        aVar10 = pFVar7->EndPipes;
        do {
          LOCK();
          aVar4 = pFVar7->EndPipes;
          bVar9 = aVar10 == aVar4;
          if (bVar9) {
            pFVar7->EndPipes = (atomic<unsigned_char>)((byte)aVar10 | EVar22);
            aVar4 = aVar10;
          }
          aVar10 = aVar4;
          UNLOCK();
        } while (!bVar9);
        if (((EVar22 & (byte)aVar10) != None) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("!EnumHasAnyFlags(ERHIPipeline(Breadcrumb->EndPipes.fetch_or(std::underlying_type_t<ERHIPipeline>(Pipeline))), Pipeline)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                               ,0xd19,L""), bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        FRHIBreadcrumbAllocatorArray::AddUnique(&param_1->BreadcrumbAllocatorRefs,pFVar7->Allocator)
        ;
        if ((EVar22 == Graphics) || (EVar22 != AsyncCompute)) {
          lVar11 = 0x100;
          lVar16 = 0x108;
        }
        else {
          lVar11 = 0x130;
          lVar16 = 0x138;
        }
        *(FRHIBreadcrumbNode **)((longlong)&(param_1->MemManager).Top + lVar11) = pFVar7->Parent;
        puVar2 = (undefined8 *)((longlong)&(param_1->MemManager).Top + lVar16);
        if (&local_78 != puVar2) {
          *puVar2 = pFVar7->Parent;
          *(undefined1 *)(puVar2 + 1) = 1;
        }
        local_70 = pFVar7;
        EStack_68 = EVar22;
        if (((GRHICommandList.bLatchedBypass == false) ||
            ((param_1->PersistentState).bImmediate == '\0')) && (param_1->bExecuting == false)) {
          pFVar13 = FMemStackBase::Alloc(&param_1->MemManager,0x28,8);
          param_1->NumCommands = param_1->NumCommands + 1;
          *param_1->CommandLink = pFVar13;
          param_1->CommandLink = &pFVar13->Next;
          pFVar13->Next = (FRHICommandBase *)0x0;
          pFVar13[2]._padding_ = (longlong)L"EndBreadcrumbGPU";
          pFVar13->_padding_ =
               (longlong)
               &
               ___7__TRHILambdaCommand_VFRHIComputeCommandList__V<lambda_1>__1__EndBreadcrumbGPU_1_QEAAXPEAUFRHIBreadcrumbNode__W4ERHIPipeline___Z___6B_
          ;
          pFVar13[1]._padding_ = (longlong)local_70;
          pFVar13[1].Next = (FRHICommandBase *)CONCAT71(uStack_67,EStack_68);
        }
        else {
          `FRHIComputeCommandList::EndBreadcrumbGPU'::__l2::<lambda_1>::operator()
                    (&local_70,param_1);
        }
        pFVar7 = (FRHIBreadcrumbNode *)*plVar1;
      }
      local_60.CommonAncestor = pFVar18;
      local_60.ExecutingCmdList = param_1;
      local_60.Pipeline = EVar22;
      if (pFVar6 != pFVar18) {
        ``FRHICommandListBase::ActivatePipelines'::__l2::<lambda_1>::operator()'::__l77::<lambda_1>
        ::
        operator()<__FRHICommandListBase::ActivatePipelines_::__l2::<lambda_1>::operator()_::__l77::<lambda_1>_>
                  (&local_60,pFVar6->Parent,&local_60);
        FRHIComputeCommandList::BeginBreadcrumbGPU
                  ((FRHIComputeCommandList *)local_60.ExecutingCmdList,pFVar6,local_60.Pipeline);
      }
      if ((pFVar6 != (FRHIBreadcrumbNode *)*plVar1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("Target == Current",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                             ,0x1f0,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    if ((EVar22 == Graphics) || (lVar11 = 0x138, EVar22 != AsyncCompute)) {
      lVar11 = 0x108;
    }
    plVar3 = (longlong *)((longlong)&(param_1->MemManager).Top + lVar11);
    if (plVar1 != plVar3) {
      *plVar3 = *plVar1;
      *(undefined1 *)(plVar3 + 1) = 1;
    }
    EVar17 = EVar17 & ~(~EVar17 + Graphics);
  } while( true );
}

// operator() @ 145c8cbc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandListBase::InsertParallelRenderPass_Base'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  IRHICommandContext *pIVar4;
  longlong local_18;
  longlong local_10;
  
  pIVar4 = FRHICommandListBase::GetContext(param_1);
  pcVar1 = *(code **)(pIVar4->_padding_ + 0x238);
  if (*(longlong *)this == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18 = *(longlong *)this;
  uVar2 = *(undefined8 *)(local_18 + 0x118);
  local_10 = *(longlong *)((longlong)this + 8);
  if (local_10 != 0) {
    LOCK();
    *(int *)(local_10 + 8) = *(int *)(local_10 + 8) + 1;
    UNLOCK();
  }
  (*pcVar1)(pIVar4,&local_18,uVar2);
  return;
}

// operator() @ 145c8d790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandListBase::UpdateAllocationTags'::__l2::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  undefined1 auStack_58 [32];
  FInheritedContextScope local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_58;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)((longlong)this + 8),&local_38);
  (**(code **)(GDynamicRHI->_padding_ + 0x170))(GDynamicRHI,param_1,*(undefined8 *)this);
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_38.MetaScope);
  FMemScope::~FMemScope(&local_38.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_38,local_38.LLMScopes.LLMScopes.ArrayNum);
  return;
}

// operator() @ 145c8e220

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
`FRHICommandListBase::SetDrawStatsCategory'::__l12::<lambda_1>::operator()
          (void *this,FRHICommandListBase *param_1)

{
  TOptional<FRHIDrawStatsCategory_const_*> *pTVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((*(char *)((longlong)this + 8) == '\0') &&
     (this = &param_1->InitialDrawStatsCategory, (param_1->InitialDrawStatsCategory).bIsSet == false
     )) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pTVar1 = &(param_1->PersistentState).CurrentDrawStatsCategory;
  if (this != pTVar1) {
    pTVar1->TypedValue = ((TOptional<FRHIDrawStatsCategory_const_*> *)this)->TypedValue;
    (param_1->PersistentState).CurrentDrawStatsCategory.bIsSet = true;
  }
  return;
}

// ActivatePipelines @ 145c90c60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::ActivatePipelines(FRHICommandListBase *this,ERHIPipeline param_1)

{
  FActivatePipelineCommand *pFVar1;
  code *pcVar2;
  ERHIPipeline EVar3;
  bool bVar4;
  longlong lVar5;
  FRHICommandBase *pFVar6;
  ERHIPipeline EVar7;
  ERHIPipeline local_38;
  undefined1 uStack_37;
  undefined6 uStack_36;
  FActivatePipelineCommand *pFStack_30;
  FActivatePipelineCommand local_28;
  
  if ((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
      (this->bExecuting != false)) &&
     ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x156,L"Cannot be called from the bottom of pipe.");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((param_1 != None) && ((this->AllowedPipelines & param_1) != param_1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipelines == ERHIPipeline::None || EnumHasAllFlags(AllowedPipelines, Pipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x157,
                       L"At least one of the specified pipelinea are not allowed on this RHI command list."
                      );
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->ActivePipelines != param_1) {
    pFStack_30 = (FActivatePipelineCommand *)0x0;
    this->ActivePipelines = param_1;
    local_28.Next = (FActivatePipelineCommand *)0x0;
    local_28.Target = (FRHIBreadcrumbNode *)0x0;
    if (param_1 != None) {
      local_28.Target = (this->CPUBreadcrumbState).Current;
      EVar7 = param_1;
      do {
        EVar3 = ~EVar7 + Graphics & EVar7;
        if ((EVar3 == Graphics) || (lVar5 = 0x140, EVar3 != AsyncCompute)) {
          lVar5 = 0x110;
        }
        if (*(char *)((longlong)&(this->MemManager).Top + lVar5) != '\0') {
          *(undefined1 *)((longlong)&(this->MemManager).Top + lVar5) = 0;
        }
        EVar7 = EVar7 & ~(~EVar7 + Graphics);
      } while (EVar7 != None);
      local_28.Pipelines = param_1;
      if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')
          ) && (this->bExecuting == false)) {
        pFStack_30 = FMemStackBase::Alloc(&this->MemManager,0x18,8);
        pFStack_30->Next = local_28.Next;
        pFStack_30->Target = local_28.Target;
        *(ulonglong *)&pFStack_30->Pipelines = CONCAT71(local_28._17_7_,local_28.Pipelines);
        if ((this->ActivatePipelineCommands).First == (FActivatePipelineCommand *)0x0) {
          (this->ActivatePipelineCommands).First = pFStack_30;
        }
        pFVar1 = (this->ActivatePipelineCommands).Prev;
        if (pFVar1 != (FActivatePipelineCommand *)0x0) {
          pFVar1->Next = pFStack_30;
        }
        (this->ActivatePipelineCommands).Prev = pFStack_30;
      }
      else {
        pFStack_30 = &local_28;
      }
    }
    local_38 = this->ActivePipelines;
    if ((local_38 == None) || ((local_38 & local_38 - Graphics) != None)) {
      uStack_37 = 0;
    }
    else {
      uStack_37 = 1;
    }
    if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0'))
       && (this->bExecuting == false)) {
      pFVar6 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
      this->NumCommands = this->NumCommands + 1;
      *this->CommandLink = pFVar6;
      this->CommandLink = &pFVar6->Next;
      pFVar6->Next = (FRHICommandBase *)0x0;
      pFVar6->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::ActivatePipelines'::`2'::<lambda_1>_>
            ::_vftable_;
      pFVar6[2]._padding_ = (longlong)L"TRHILambdaCommand";
      pFVar6[1]._padding_ = CONCAT62(uStack_36,CONCAT11(uStack_37,local_38));
      pFVar6[1].Next = (FRHICommandBase *)pFStack_30;
      return;
    }
    `FRHICommandListBase::ActivatePipelines'::__l2::<lambda_1>::operator()(&local_38,this);
  }
  return;
}

// AddDispatchPrerequisite @ 145c90e80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::AddDispatchPrerequisite
          (FRHICommandListBase *this,TRefCountPtr<FBaseGraphTask> *param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  FTaskBase *this_00;
  FRHICommandBase *pFVar3;
  
  this_00 = (FTaskBase *)param_1->Reference;
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar3 = FMemStackBase::Alloc(&this->MemManager,0x20,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar3;
    this->CommandLink = &pFVar3->Next;
    pFVar3->Next = (FRHICommandBase *)0x0;
    pFVar3->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::AddDispatchPrerequisite'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar3[1].Next = (FRHICommandBase *)L"AddDispatchPrerequisite";
    pFVar3[1]._padding_ = (longlong)this_00;
  }
  else {
    if ((this_00->Subsequents).bIsClosed == (atomic<bool>)0x0) {
      UE::Tasks::Private::FTaskBase::WaitWithNamedThreadsSupport(this_00);
    }
    if (this_00 != (FTaskBase *)0x0) {
      LOCK();
      paVar1 = &this_00->RefCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<unsigned_int>)0x1) {
                    /* WARNING: Could not recover jumptable at 0x000145c90eee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)this_00->_padding_)(this_00,1);
        return;
      }
    }
  }
  return;
}

// AttachBreadcrumbSubTree @ 145c919a0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::AttachBreadcrumbSubTree
          (FRHICommandListBase *this,FRHIBreadcrumbAllocator *param_1,FRHIBreadcrumbList *param_2)

{
  TSharedPtr<FRHIBreadcrumbAllocator,1> *pTVar1;
  FRHIBreadcrumbNode *pFVar2;
  FRHIBreadcrumbAllocator *pFVar3;
  code *pcVar4;
  bool bVar5;
  TSharedRef<FRHIBreadcrumbAllocator,1> *pTVar6;
  FRHIBreadcrumbNode *pFVar7;
  FRHIBreadcrumbNode *pFVar8;
  FRHIBreadcrumbAllocator *local_28;
  FSharedReferencer<1> local_20;
  TSharedRef<FRHIBreadcrumbAllocator,1> local_18;
  
  pFVar7 = param_2->First;
  param_2->First = (FRHIBreadcrumbNode *)0x0;
  param_2->Last = (FRHIBreadcrumbNode *)0x0;
  if (pFVar7 != (FRHIBreadcrumbNode *)0x0) {
    pFVar8 = pFVar7->ListLink;
    pFVar7->ListLink = (FRHIBreadcrumbNode *)0x0;
    while( true ) {
      if ((pFVar7->Allocator != param_1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Node->Allocator == &Allocator",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                             ,0x140,
                             L"All the nodes in a subtree must come from the same breadcrumb allocator."
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pFVar7->Parent == FRHIBreadcrumbNode::Sentinel) {
        pFVar2 = (this->PersistentState).LocalBreadcrumb;
        pFVar7->Parent = pFVar2;
        if ((pFVar2 != (FRHIBreadcrumbNode *)0x0) && (pFVar2 != FRHIBreadcrumbNode::Sentinel)) {
          if (pFVar2->Allocator != pFVar7->Allocator) {
            FRHIBreadcrumbAllocatorArray::AddUnique(&pFVar7->Allocator->Parents,pFVar2->Allocator);
          }
        }
      }
      if (pFVar8 == (FRHIBreadcrumbNode *)0x0) break;
      pFVar2 = pFVar8->ListLink;
      pFVar8->ListLink = (FRHIBreadcrumbNode *)0x0;
      pFVar7 = pFVar8;
      pFVar8 = pFVar2;
    }
  }
  pTVar1 = &this->BreadcrumbAllocator;
  pFVar3 = pTVar1->Object;
  if (pFVar3 != param_1) {
    if (pFVar3 != (FRHIBreadcrumbAllocator *)0x0) {
      FRHIBreadcrumbAllocatorArray::AddUnique(&this->BreadcrumbAllocatorRefs,pFVar3);
    }
    pTVar6 = TSharedFromThis<FRHIBreadcrumbAllocator,1>::AsShared
                       ((TSharedFromThis<FRHIBreadcrumbAllocator,1> *)param_1,&local_18);
    local_20.ReferenceController = (pTVar6->SharedReferenceCount).ReferenceController;
    local_28 = pTVar6->Object;
    if (local_20.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_20.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_20.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FRHIBreadcrumbAllocator,1> *)&local_28) {
      pTVar1->Object = local_28;
      local_28 = (FRHIBreadcrumbAllocator *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BreadcrumbAllocator).SharedReferenceCount,&local_20);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_20.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Execute @ 145c9f960

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandListBase::Execute(FRHICommandListBase *this)

{
  uint uVar1;
  FRHICommandBase *pFVar2;
  code *pcVar3;
  FRHICommandBase *pFVar4;
  bool bVar5;
  undefined ***pppuVar6;
  uint uVar7;
  undefined1 auStack_b8 [32];
  int local_98;
  longlong local_88;
  undefined **local_78;
  FRHICommandListBase *pFStack_70;
  wchar_t *local_68;
  undefined ***local_60;
  code *local_58 [2];
  undefined **local_48;
  FRHICommandListBase *pFStack_40;
  wchar_t *local_38;
  undefined ***local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  if ((this->bExecuting != false) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!IsExecuting()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x203,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PersistentState).CurrentGPUMask.GPUMask = (this->PersistentState).InitialGPUMask.GPUMask;
  this->bExecuting = true;
  bVar5 = IsInRHIThread();
  if (bVar5) {
    local_68 = L"RHIThread";
  }
  else {
    bVar5 = IsInActualRenderingThread();
    if (bVar5) {
      local_68 = L"RenderingThread";
    }
    else {
      bVar5 = IsInGameThread();
      local_68 = L"Parallel";
      if (bVar5) {
        local_68 = L"GameThread";
      }
    }
  }
  local_78 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRHICommandListBase::Execute'::`2'::<lambda_1>,1,0>::_vftable_;
  uVar7 = 0;
  local_58[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`FRHICommandListBase::Execute'::__l2::<lambda_1>,void,FCrashContextExtendedWriter_&>
                ::Call;
  local_48 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`FRHICommandListBase::Execute'::`2'::<lambda_1>,1,0>::_vftable_;
  local_30 = (undefined ***)0x0;
  local_60 = (undefined ***)0x0;
  local_88 = 0;
  pFStack_70 = this;
  pFStack_40 = this;
  local_38 = local_68;
  FAdditionalCrashContextStack::PushProvider((FScopedAdditionalCrashContextProvider *)local_58);
  if (local_88 != 0) {
    pppuVar6 = &local_78;
    if (local_60 != (undefined ***)0x0) {
      pppuVar6 = local_60;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  uVar1 = this->NumCommands;
  pFVar4 = this->Root;
  while (pFVar4 != (FRHICommandBase *)0x0) {
    pFVar2 = pFVar4->Next;
    uVar7 = uVar7 + 1;
    (**(code **)pFVar4->_padding_)(pFVar4,this);
    pFVar4 = pFVar2;
  }
  if (uVar1 != uVar7) {
    local_98 = uVar1 - uVar7;
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("CmdListNumCommands == NumCommands",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.inl"
                       ,0x56,L"Missed %d Commands!");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FAdditionalCrashContextStack::PopProvider();
  if (local_58[0] != (code *)0x0) {
    pppuVar6 = &local_48;
    if (local_30 != (undefined ***)0x0) {
      pppuVar6 = local_30;
    }
    (*(code *)(*pppuVar6)[2])();
  }
  return;
}

// FinishRecording @ 145ca5290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall FRHICommandListBase::FinishRecording(FRHICommandListBase *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  FRHICommandListScopedFence *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  FTaskBase *this_00;
  code *pcVar8;
  bool bVar9;
  void *pvVar10;
  FString *pFVar11;
  ulong64 uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined8 *local_res18;
  FName local_res20;
  FName local_b8;
  FString local_b0;
  FString local_a0;
  TStringBuilderBase<wchar_t> local_90;
  TStringBuilderBase<wchar_t> local_70;
  
  if (((this->PersistentState).bImmediate == '\0') &&
     ((this->PersistentState).CurrentFenceScope != (FRHICommandListScopedFence *)0x0)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsImmediate() || PersistentState.CurrentFenceScope == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0xf7,L"Finished recording with an open RHI fence scope.");
    if (bVar9) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar5 = (this->PersistentState).CurrentFenceScope;
  if ((pFVar5 != (FRHICommandListScopedFence *)0x0) && (pFVar5->bFenceRequested != false)) {
    pFVar5->bFenceRequested = false;
    RHIThreadFence(this,SUB81(&local_res18,0));
    if (local_res18 != (undefined8 *)0x0) {
      LOCK();
      piVar1 = (int *)(local_res18 + 6);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)*local_res18)();
      }
    }
  }
  iVar3 = (this->PendingBufferUploads).ArrayNum;
  if (0 < iVar3) {
    pFVar13 = (this->PendingBufferUploads).AllocatorInstance.Data;
    local_90.Base = (wchar_t *)0x0;
    local_90.CurPos = (wchar_t *)0x0;
    local_90.End = (wchar_t *)0x0;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    local_90.bIsDynamic = false;
    local_90.bIsExternal = false;
    while( true ) {
      if ((this->PendingBufferUploads).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRHIBuffer_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar13 == pFVar2) break;
      lVar6 = *(longlong *)pFVar13;
      if (0 < (int)((longlong)local_90.CurPos - (longlong)local_90.Base >> 1)) {
        if (local_90.End < local_90.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_90,2);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_90.CurPos,L", ",4);
        local_90.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
      }
      local_res20 = *(FName *)(lVar6 + 0x18);
      pFVar11 = ::FName::ToString(&local_res20,&local_b0);
      iVar4 = (pFVar11->Data).ArrayNum;
      pFVar7 = (pFVar11->Data).AllocatorInstance.Data;
      iVar14 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar14 = 0;
      }
      uVar12 = (ulong64)iVar14;
      if (local_90.End < local_90.CurPos + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_90,uVar12);
      }
      if (iVar14 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(local_90.CurPos,pFVar7,uVar12 * 2);
        local_90.CurPos = (wchar_t *)((longlong)pvVar10 + uVar12 * 2);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 8;
    }
    if (local_90.End < local_90.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_90,1);
    }
    *local_90.CurPos = L'\0';
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_90);
  }
  iVar3 = (this->PendingTextureUploads).ArrayNum;
  if (0 < iVar3) {
    pFVar13 = (this->PendingTextureUploads).AllocatorInstance.Data;
    local_70.Base = (wchar_t *)0x0;
    local_70.CurPos = (wchar_t *)0x0;
    local_70.End = (wchar_t *)0x0;
    pFVar2 = pFVar13 + (longlong)iVar3 * 8;
    local_70.bIsDynamic = false;
    local_70.bIsExternal = false;
    while( true ) {
      if ((this->PendingTextureUploads).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FRHITexture_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar13 == pFVar2) break;
      lVar6 = *(longlong *)pFVar13;
      if (0 < (int)((longlong)local_70.CurPos - (longlong)local_70.Base >> 1)) {
        if (local_70.End < local_70.CurPos + 2) {
          TStringBuilderBase<wchar_t>::Extend(&local_70,2);
        }
        pvVar10 = FGenericPlatformString::Memcpy(local_70.CurPos,L", ",4);
        local_70.CurPos = (wchar_t *)((longlong)pvVar10 + 4);
      }
      local_b8 = *(FName *)(lVar6 + 0x18);
      pFVar11 = ::FName::ToString(&local_b8,&local_a0);
      iVar4 = (pFVar11->Data).ArrayNum;
      pFVar7 = (pFVar11->Data).AllocatorInstance.Data;
      iVar14 = iVar4 + -1;
      if (iVar4 == 0) {
        iVar14 = 0;
      }
      uVar12 = (ulong64)iVar14;
      if (local_70.End < local_70.CurPos + uVar12) {
        TStringBuilderBase<wchar_t>::Extend(&local_70,uVar12);
      }
      if (iVar14 != 0) {
        pvVar10 = FGenericPlatformString::Memcpy(local_70.CurPos,pFVar7,uVar12 * 2);
        local_70.CurPos = (wchar_t *)((longlong)pvVar10 + uVar12 * 2);
      }
      if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.Data.AllocatorInstance.Data);
      }
      pFVar13 = pFVar13 + 8;
    }
    if (local_70.End < local_70.CurPos + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_70,1);
    }
    *local_70.CurPos = L'\0';
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
    TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_70);
  }
  this_00 = (FTaskBase *)(this->DispatchEvent).Reference;
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  return;
}

// GetUsedMemory @ 145caecf0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

int __thiscall FRHICommandListBase::GetUsedMemory(FRHICommandListBase *this)

{
  FTaggedMemory *pFVar1;
  FTaggedMemory *pFVar2;
  int iVar3;
  
  iVar3 = 0;
  pFVar1 = (this->MemManager).TopChunk;
  for (pFVar2 = pFVar1; pFVar2 != (FTaggedMemory *)0x0; pFVar2 = pFVar2->Next) {
    if (pFVar2 == pFVar1) {
      iVar3 = iVar3 + -0x10 + (*(int *)&(this->MemManager).Top - (int)pFVar2);
    }
    else {
      iVar3 = iVar3 + pFVar2->DataSize;
    }
  }
  return iVar3;
}

// InsertParallelRenderPass_Base @ 145cb0cb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRHICommandListBase::InsertParallelRenderPass_Base
          (FRHICommandListBase *this,TSharedPtr<FRHIParallelRenderPassInfo,1> *param_1,
          TArray<FRHISubCommandList_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<FRHICommandListBase_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  ERHIPipeline EVar3;
  FRHIParallelRenderPassInfo *pFVar4;
  FScriptContainerElement *pFVar5;
  longlong lVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FRHICommandBase *pFVar13;
  FRHICommandListBase *this_00;
  IRHICommandContext *pIVar14;
  TReferenceControllerBase<1> *pTVar15;
  FScriptContainerElement *pFVar16;
  undefined1 local_res20 [8];
  FRHICommandListBase *local_90;
  longlong local_88;
  FRHIParallelRenderPassInfo *local_80;
  TReferenceControllerBase<1> *local_78;
  FRHIParallelRenderPassInfo *local_70;
  TReferenceControllerBase<1> *pTStack_68;
  FRHIParallelRenderPassInfo *local_60;
  TReferenceControllerBase<1> *pTStack_58;
  
  EVar3 = this->ActivePipelines;
  if ((GRHIGlobals.ParallelRHIExecuteChildWait) || (GRHIGlobals.ParallelRHIExecuteParentWait)) {
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    bVar9 = true;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_70 = (this->ParallelRenderPassBegin).Object;
    pTStack_68 = (this->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController;
    (this->ParallelRenderPassBegin).Object = pFVar4;
    (this->ParallelRenderPassBegin).SharedReferenceCount.ReferenceController = pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_68);
  }
  else {
    bVar9 = false;
  }
  pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
  pFVar4 = param_1->Object;
  if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_80 = pFVar4;
  local_78 = pTVar15;
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar13 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar13;
    this->CommandLink = &pFVar13->Next;
    pFVar13->Next = (FRHICommandBase *)0x0;
    pFVar13->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::InsertParallelRenderPass_Base'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar13[1]._padding_ = (longlong)pFVar4;
    pFVar13[1].Next = (FRHICommandBase *)pTVar15;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar13[2]._padding_ = (longlong)L"TRHILambdaCommand";
  }
  else {
    `FRHICommandListBase::InsertParallelRenderPass_Base'::__l2::<lambda_1>::operator()
              (&local_80,this);
    pTVar15 = local_78;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  FinishRecording(this);
  this_00 = ::operator_new(0x1bb0);
  local_90 = (FRHICommandListBase *)0x0;
  if (this_00 != (FRHICommandListBase *)0x0) {
    local_90 = FRHICommandListBase(this_00,this);
  }
  ~FRHICommandListBase(this);
  FRHICommandListBase(this,&local_90->PersistentState);
  pFVar5 = (this->AttachedCmdLists).AllocatorInstance.Data;
  if ((pFVar5 <= (FScriptContainerElement *)&local_90) &&
     ((FScriptContainerElement *)&local_90 <
      pFVar5 + (longlong)(this->AttachedCmdLists).ArrayMax * 8)) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x7a5,
                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                       );
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  iVar11 = (this->AttachedCmdLists).ArrayNum;
  piVar2 = &(this->AttachedCmdLists).ArrayMax;
  if (iVar11 == *piVar2) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,&(this->AttachedCmdLists).AllocatorInstance,piVar2);
  }
  (this->AttachedCmdLists).ArrayNum = iVar11 + 1;
  pTVar1 = &this->AttachedCmdLists;
  *(FRHICommandListBase **)((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_90;
  pFVar16 = (param_2->AllocatorInstance).Data;
  iVar11 = param_2->ArrayNum;
  pFVar5 = pFVar16 + (longlong)iVar11 * 8;
  while( true ) {
    if (param_2->ArrayNum != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FRHISubCommandList_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
    }
    if (pFVar16 == pFVar5) break;
    lVar6 = *(longlong *)pFVar16;
    if (*(FRHIParallelRenderPassInfo **)(lVar6 + 0x88) != param_1->Object) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SubCmdList->SubRenderPassInfo == InInfo",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                          ,0xcb,L"");
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    pFVar7 = (pTVar1->AllocatorInstance).Data;
    local_88 = lVar6;
    if ((pFVar7 <= (FScriptContainerElement *)&local_88) &&
       ((FScriptContainerElement *)&local_88 <
        pFVar7 + (longlong)(this->AttachedCmdLists).ArrayMax * 8)) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         );
      if (bVar10) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    iVar12 = (this->AttachedCmdLists).ArrayNum;
    if (iVar12 == (this->AttachedCmdLists).ArrayMax) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&pTVar1->AllocatorInstance,piVar2);
      (this->AttachedCmdLists).ArrayNum = iVar12;
    }
    pFVar16 = pFVar16 + 8;
    (this->AttachedCmdLists).ArrayNum = iVar12 + 1;
    *(longlong *)((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 8) = local_88;
  }
  ActivatePipelines(this,EVar3);
  if (bVar9) {
    pTVar15 = (param_1->SharedReferenceCount).ReferenceController;
    pFVar4 = param_1->Object;
    if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_60 = (this->ParallelRenderPassEnd).Object;
    pTStack_58 = (this->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController;
    (this->ParallelRenderPassEnd).Object = pFVar4;
    (this->ParallelRenderPassEnd).SharedReferenceCount.ReferenceController = pTVar15;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_58);
  }
  if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) &&
     (this->bExecuting == false)) {
    pFVar13 = FMemStackBase::Alloc(&this->MemManager,0x20,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar13;
    this->CommandLink = &pFVar13->Next;
    pFVar13->Next = (FRHICommandBase *)0x0;
    pFVar13->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::InsertParallelRenderPass_Base'::`2'::<lambda_2>_>
          ::_vftable_;
    pFVar13[1].Next = (FRHICommandBase *)L"TRHILambdaCommand";
  }
  else {
    pIVar14 = GetContext(this);
    (**(code **)(pIVar14->_padding_ + 0x240))(pIVar14);
  }
  return;
}

// InvalidBufferFatalError @ 145cb1660

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::InvalidBufferFatalError
          (FRHICommandListBase *this,FRHIBufferCreateDesc *param_1)

{
  FString local_18;
  
  ::FName::ToString(&param_1->OwnerName,&local_18);
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogRHI);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// RHIThreadFence @ 145cbac90

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRefCountPtr<FBaseGraphTask> __thiscall
FRHICommandListBase::RHIThreadFence(FRHICommandListBase *this,bool param_1)

{
  int *piVar1;
  int iVar2;
  FRHICommandListScopedFence *pFVar3;
  code *pcVar4;
  bool bVar5;
  TRefCountPtr<FBaseGraphTask> TVar6;
  TRefCountPtr<FBaseGraphTask> *pTVar7;
  FRHICommandRHIThreadFence *pFVar8;
  undefined7 in_register_00000011;
  FBaseGraphTask *pFVar9;
  FBaseGraphTask *pFVar10;
  byte in_R8B;
  undefined8 *local_res8;
  undefined1 local_28 [16];
  
  pFVar9 = (FBaseGraphTask *)CONCAT71(in_register_00000011,param_1);
  if ((((!GRHICommandList.bLatchedBypass) || ((this->PersistentState).bImmediate == '\0')) &&
      (this->bExecuting != false)) &&
     ((!GRHICommandList.bLatchedBypass || ((this->PersistentState).bImmediate == '\0')))) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x647,
                       L"RHI thread fences only work when recording RHI commands (or in bypass mode)."
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.Reference = (FBaseGraphTask *)(*pcVar4)();
      return (TRefCountPtr<FBaseGraphTask>)TVar6.Reference;
    }
  }
  pFVar3 = (this->PersistentState).CurrentFenceScope;
  if ((pFVar3 == (FRHICommandListScopedFence *)0x0) || (in_R8B == 0)) {
    this->bUsesLockFence = (bool)(this->bUsesLockFence | in_R8B);
    if (GIsRunningRHIInSeparateThread_InternalUseOnly != false) {
      pFVar10 = (FBaseGraphTask *)0x0;
      if ((in_R8B == 0) || (this->LastLockFenceCommand == (FRHICommandRHIThreadFence *)0x0)) {
        TVar6 = FBaseGraphTask::CreateGraphEvent();
        if ((FBaseGraphTask *)local_28 != TVar6.Reference) {
                    /* WARNING: Load size is inaccurate */
          pFVar10 = *TVar6.Reference;
          *(undefined8 *)TVar6.Reference = 0;
        }
        if (local_res8 != (undefined8 *)0x0) {
          LOCK();
          piVar1 = (int *)(local_res8 + 6);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if ((iVar2 == 1) && (local_res8 != (undefined8 *)0x0)) {
            (**(code **)*local_res8)(local_res8,1);
          }
        }
      }
      else {
        pTVar7 = &this->LastLockFenceCommand->Fence;
        if ((TRefCountPtr<FBaseGraphTask> *)local_28 != pTVar7) {
          pFVar10 = pTVar7->Reference;
          pTVar7->Reference = (FBaseGraphTask *)0x0;
        }
      }
      pFVar8 = FMemStackBase::Alloc(&this->MemManager,0x18,8);
      this->NumCommands = this->NumCommands + 1;
      *this->CommandLink = (FRHICommandBase *)pFVar8;
      this->CommandLink = (FRHICommandBase **)&pFVar8->_padding_;
      pFVar8->_padding_ = 0;
      pFVar8->_padding_ = (longlong)&___7FRHICommandRHIThreadFence__6B_;
      (pFVar8->Fence).Reference = pFVar10;
      if (pFVar10 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar10->field_0x30 = *(int *)&pFVar10->field_0x30 + 1;
        UNLOCK();
      }
      if (in_R8B != 0) {
        this->LastLockFenceCommand = pFVar8;
      }
      *(FBaseGraphTask **)pFVar9 = pFVar10;
      return (TRefCountPtr<FBaseGraphTask>)pFVar9;
    }
  }
  else {
    pFVar3->bFenceRequested = true;
  }
  *(undefined8 *)pFVar9 = 0;
  return (TRefCountPtr<FBaseGraphTask>)pFVar9;
}

// RemovePendingBufferUpload @ 145cbd800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::RemovePendingBufferUpload(FRHICommandListBase *this,FRHIBuffer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHIBuffer *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FRHIBuffer *local_res10;
  
  pFVar9 = (this->PendingBufferUploads).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->PendingBufferUploads).ArrayNum * 8;
  for (; local_res10 = param_1, pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
    if (*(FRHIBuffer **)pFVar9 == param_1) goto LAB_145cbd861;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PendingBufferUploads.Contains(InBuffer)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                     ,0x529,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145cbd861:
  pFVar2 = (this->PendingBufferUploads).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->PendingBufferUploads).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->PendingBufferUploads).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->PendingBufferUploads).AllocatorInstance.Data;
    bVar4 = *(FRHIBuffer **)pFVar2 != local_res10;
    lVar6 = 0;
    pFVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FRHIBuffer **)(pFVar2 + lVar6 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar5 = local_res10;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->PendingBufferUploads).ArrayNum = iVar10;
  }
  return;
}

// SetDrawStatsCategory @ 145cbedb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TOptional<FRHIDrawStatsCategory_const_*> * __thiscall
FRHICommandListBase::SetDrawStatsCategory
          (FRHICommandListBase *this,
          TOptional<FRHIDrawStatsCategory_const_*> *__return_storage_ptr__,
          TOptional<FRHIDrawStatsCategory_const_*> *param_1)

{
  code *pcVar1;
  FRHIDrawStatsCategory *pFVar2;
  bool bVar3;
  TOptional<FRHIDrawStatsCategory_const_*> *pTVar4;
  FRHICommandBase *pFVar5;
  TOptional<FRHIDrawStatsCategory_const_*> *pTVar6;
  TOptional<FRHIDrawStatsCategory_const_*> local_18;
  
  if ((((param_1->bIsSet != false) && (param_1->TypedValue != (FRHIDrawStatsCategory *)0x0)) &&
      (param_1->TypedValue->Index == 0xffffffff)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Category.IsSet() || ((*Category) == nullptr || (*Category)->ShouldCountDraws())"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                         ,0x125,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TOptional<FRHIDrawStatsCategory_const_*> *)(*pcVar1)();
    return pTVar4;
  }
  __return_storage_ptr__->bIsSet = false;
  bVar3 = (this->PersistentState).CurrentDrawStatsCategory.bIsSet;
  __return_storage_ptr__->bIsSet = bVar3;
  if (bVar3 != false) {
    __return_storage_ptr__->TypedValue = (this->PersistentState).CurrentDrawStatsCategory.TypedValue
    ;
  }
  if (bVar3 == param_1->bIsSet) {
    if (bVar3 == false) {
      bVar3 = false;
    }
    else {
      bVar3 = __return_storage_ptr__->TypedValue != param_1->TypedValue;
    }
  }
  else {
    bVar3 = true;
  }
  pTVar4 = &(this->PersistentState).CurrentDrawStatsCategory;
  if (bVar3) {
    if (param_1 != pTVar4) {
      if (param_1->bIsSet == false) {
        if ((this->PersistentState).CurrentDrawStatsCategory.bIsSet != false) {
          (this->PersistentState).CurrentDrawStatsCategory.bIsSet = false;
        }
      }
      else {
        pTVar4->TypedValue = param_1->TypedValue;
        (this->PersistentState).CurrentDrawStatsCategory.bIsSet = true;
      }
    }
    bVar3 = param_1->bIsSet;
    local_18.bIsSet = bVar3;
    if (bVar3 != false) {
      local_18.TypedValue = param_1->TypedValue;
    }
    pFVar2 = local_18.TypedValue;
    if (((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0'))
       && (this->bExecuting == false)) {
      pFVar5 = FMemStackBase::Alloc(&this->MemManager,0x28,8);
      this->NumCommands = this->NumCommands + 1;
      *this->CommandLink = pFVar5;
      this->CommandLink = &pFVar5->Next;
      pFVar5->Next = (FRHICommandBase *)0x0;
      pFVar5->_padding_ =
           (longlong)
           &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::SetDrawStatsCategory'::`12'::<lambda_1>_>
            ::_vftable_;
      *(bool *)&pFVar5[1].Next = bVar3;
      if (bVar3 != false) {
        pFVar5[1]._padding_ = (longlong)pFVar2;
      }
      pFVar5[2]._padding_ = (longlong)L"TRHILambdaCommand";
    }
    else {
      if (bVar3 == false) {
        pTVar4 = &this->InitialDrawStatsCategory;
        if (((this->InitialDrawStatsCategory).bIsSet == false) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsSet()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                               ,0x1bd,
                               L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TOptional<FRHIDrawStatsCategory_const_*> *)(*pcVar1)();
          return pTVar4;
        }
      }
      else {
        pTVar4 = &local_18;
      }
      pTVar6 = &(this->PersistentState).CurrentDrawStatsCategory;
      if (pTVar4 != pTVar6) {
        pTVar6->TypedValue = pTVar4->TypedValue;
        (this->PersistentState).CurrentDrawStatsCategory.bIsSet = true;
      }
    }
  }
  return __return_storage_ptr__;
}

// SwitchPipeline @ 145cc4790

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

ERHIPipeline __thiscall
FRHICommandListBase::SwitchPipeline(FRHICommandListBase *this,ERHIPipeline param_1)

{
  code *pcVar1;
  bool bVar2;
  ERHIPipeline EVar3;
  
  if ((param_1 != None) && ((param_1 & param_1 - Graphics) != None)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Pipeline == ERHIPipeline::None || FMath::IsPowerOfTwo(std::underlying_type_t<ERHIPipeline>(Pipeline))"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Private\\RHICommandList.cpp"
                       ,0x1fb,L"Only one pipeline may be active at a time.");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      EVar3 = (*pcVar1)();
      return EVar3;
    }
  }
  EVar3 = this->ActivePipelines;
  ActivatePipelines(this,param_1);
  return EVar3;
}

// TransitionInternal @ 145cc4f10

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall
FRHICommandListBase::TransitionInternal
          (FRHICommandListBase *this,TArrayView<FRHITransitionInfo_const_,int> *param_1,
          ERHITransitionCreateFlags param_2)

{
  undefined8 *puVar1;
  ERHIPipeline EVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  ulong64 uVar7;
  IRHIComputeContext *pIVar8;
  FRHITransition *pFVar9;
  FRHICommandBase *pFVar10;
  ERHITransitionCreateFlags EVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong64 uVar16;
  undefined8 *local_res8;
  undefined1 local_res18 [16];
  undefined8 **local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  FMemMark local_e8;
  code *local_c0;
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  ERHIPipeline local_90;
  ERHIPipeline local_8f;
  ERHITransitionCreateFlags local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  FRHITransitionCreateInfo local_68;
  undefined8 **local_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  EVar2 = this->ActivePipelines;
  if ((EVar2 != None) && ((EVar2 & EVar2 - Graphics) != None)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  EVar2 = this->ActivePipelines;
  EVar11 = param_2 | NoSplit;
  if ((GRHICommandList.bLatchedBypass == false) || ((this->PersistentState).bImmediate == '\0')) {
    local_68.TransitionInfos.DataPtr = param_1->DataPtr;
    local_68.TransitionInfos.ArrayNum = param_1->ArrayNum;
    local_68.TransitionInfos._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_a0 = 0;
    uStack_98 = 0;
    local_68.AliasingInfos._8_8_ = (ulonglong)uStack_94 << 0x20;
    local_68.AliasingInfos.DataPtr = (FRHITransientAliasingInfo *)0x0;
    local_68.SrcPipelines = EVar2;
    local_68.DstPipelines = EVar2;
    local_68.Flags = EVar11;
    pFVar9 = RHICreateTransition(&local_68);
    pFVar10 = FMemStackBase::Alloc(&this->MemManager,0x18,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar10;
    this->CommandLink = &pFVar10->Next;
    pFVar10->Next = (FRHICommandBase *)0x0;
    pFVar10->_padding_ = (longlong)&___7FRHICommandResourceTransition__6B_;
    pFVar10[1]._padding_ = (longlong)pFVar9;
  }
  else {
    puVar5 = TThreadSingleton<FMemStack>::GetTlsSlot();
    local_b8 = local_res18;
    local_c0 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar6 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar5);
    local_e8.Mem = (FMemStackBase *)(pFVar6 + 2);
    local_e8.Top = (local_e8.Mem)->Top;
    local_e8.SavedChunk = *(FTaggedMemory **)(pFVar6 + 4);
    local_e8.bPopped = false;
    local_e8.NextTopmostMark = *(FMemMark **)(pFVar6 + 5);
    pFVar6[5] = (FTlsAutoCleanup)&local_e8;
    *(int *)(pFVar6 + 6) = *(int *)(pFVar6 + 6) + 1;
    uVar7 = 1;
    if (1 < GRHITransitionPrivateData_AlignInBytes) {
      uVar7 = GRHITransitionPrivateData_AlignInBytes;
    }
    uVar16 = GRHITransitionPrivateData_AlignInBytes;
    if (GRHITransitionPrivateData_AlignInBytes < 8) {
      uVar16 = 8;
    }
    local_res8 = FMemStackBase::Alloc
                           (local_e8.Mem,
                            (~(uVar7 - 1) & uVar7 + 0x8f) + GRHITransitionPrivateData_SizeInBytes,
                            uVar16);
    local_88 = *(undefined4 *)&param_1->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    iStack_80 = param_1->ArrayNum;
    uStack_7c = *(undefined4 *)&param_1->field_0xc;
    local_b0 = 0;
    *local_res8 = 0;
    local_res8[1] = 0;
    local_res8[2] = 0;
    local_res8[3] = 0;
    local_res8[4] = 0;
    local_res8[5] = 0;
    local_res8[6] = 0;
    local_res8[7] = 0;
    local_res8[8] = 0;
    local_res8[9] = 0;
    local_res8[10] = 0;
    local_res8[0xb] = 0;
    local_res8[0xc] = 0;
    local_res8[0xd] = 0;
    local_res8[0xe] = 0;
    local_res8[0xf] = 0;
    *(ERHITransitionCreateFlags *)((longlong)local_res8 + 0x84) = EVar11;
    *(ERHIPipeline *)(local_res8 + 0x11) = EVar2;
    *(ERHIPipeline *)((longlong)local_res8 + 0x89) = EVar2;
    uStack_a8 = 0;
    *(ERHIPipeline *)(local_res8 + 0x10) = EVar2 << 2 | EVar2;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    uStack_6c = uStack_a4;
    local_90 = EVar2;
    local_8f = EVar2;
    local_8c = EVar11;
    (**(code **)(GDynamicRHI->_padding_ + 200))(GDynamicRHI,local_res8,&local_90);
    pIVar8 = GetComputeContext(this);
    local_f8 = &local_res8;
    uStack_f0 = 1;
    uStack_30 = 1;
    uStack_2c = uStack_ec;
    local_38 = local_f8;
    (**(code **)(pIVar8->_padding_ + 0x48))(pIVar8,&local_38);
    pIVar8 = GetComputeContext(this);
    local_f8 = &local_res8;
    uStack_f0 = 1;
    (**(code **)(pIVar8->_padding_ + 0x50))(pIVar8,&local_f8);
    (**(code **)(GDynamicRHI->_padding_ + 0xd0))(GDynamicRHI,local_res8);
    puVar15 = local_res8;
    if ((void *)local_res8[0xe] != (void *)0x0) {
      FMemory::Free((void *)local_res8[0xe]);
    }
    if ((void *)puVar15[0xc] != (void *)0x0) {
      FMemory::Free((void *)puVar15[0xc]);
    }
    if ((void *)puVar15[10] != (void *)0x0) {
      FMemory::Free((void *)puVar15[10]);
    }
    puVar14 = puVar15 + 8;
    if ((void *)puVar15[8] != (void *)0x0) {
      FMemory::Free((void *)puVar15[8]);
    }
    lVar12 = 2;
    lVar13 = 2;
    do {
      puVar1 = puVar14 + -2;
      puVar14 = puVar14 + -2;
      lVar13 = lVar13 + -1;
      if ((void *)*puVar1 != (void *)0x0) {
        FMemory::Free((void *)*puVar1);
      }
    } while (lVar13 != 0);
    puVar15 = puVar15 + 4;
    do {
      puVar14 = puVar15 + -2;
      puVar15 = puVar15 + -2;
      lVar12 = lVar12 + -1;
      if ((void *)*puVar14 != (void *)0x0) {
        FMemory::Free((void *)*puVar14);
      }
    } while (lVar12 != 0);
    if (local_e8.bPopped == false) {
      if ((local_e8.Mem)->TopMark != &local_e8) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mem.TopMark == this",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                           ,0x215,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      local_e8.bPopped = true;
      (local_e8.Mem)->NumMarks = (local_e8.Mem)->NumMarks + -1;
      if (local_e8.SavedChunk != (local_e8.Mem)->TopChunk) {
        FMemStackBase::FreeChunks(local_e8.Mem,local_e8.SavedChunk);
      }
      (local_e8.Mem)->Top = local_e8.Top;
      (local_e8.Mem)->TopMark = local_e8.NextTopmostMark;
    }
  }
  return;
}

// UpdateAllocationTags @ 145cc8720

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateAllocationTags(FRHICommandListBase *this,FRHIBuffer *param_1)

{
  FRHICommandBase *pFVar1;
  undefined1 local_68 [40];
  FRHIBuffer *local_40;
  FTagData *pFStack_38;
  FTagData *pFStack_30;
  FTagData *pFStack_28;
  FTagData *pFStack_20;
  FRHICommandBase *local_18;
  
  if ((-1 < MemAllocChannel->Enabled) || (FLowLevelMemTracker::EnabledState != Disabled)) {
    UE::FInheritedContextBase::CaptureInheritedContext((FInheritedContextBase *)local_68);
    pFStack_38 = (FTagData *)local_68._0_8_;
    pFStack_30 = (FTagData *)local_68._8_8_;
    local_18 = (FRHICommandBase *)local_68._32_8_;
    pFStack_28 = (FTagData *)local_68._16_8_;
    pFStack_20 = (FTagData *)local_68._24_8_;
    local_40 = param_1;
    if (((GRHICommandList.bLatchedBypass != false) && ((this->PersistentState).bImmediate != '\0'))
       || (this->bExecuting != false)) {
      `FRHICommandListBase::UpdateAllocationTags'::__l2::<lambda_1>::operator()(&local_40,this);
      return;
    }
    pFVar1 = FMemStackBase::Alloc(&this->MemManager,0x48,8);
    this->NumCommands = this->NumCommands + 1;
    *this->CommandLink = pFVar1;
    this->CommandLink = &pFVar1->Next;
    pFVar1->Next = (FRHICommandBase *)0x0;
    pFVar1->_padding_ =
         (longlong)
         &TRHILambdaCommand<FRHICommandListBase,`FRHICommandListBase::UpdateAllocationTags'::`2'::<lambda_1>_>
          ::_vftable_;
    pFVar1[1]._padding_ = (longlong)local_40;
    pFVar1[1].Next = (FRHICommandBase *)pFStack_38;
    pFVar1[2]._padding_ = (longlong)pFStack_30;
    pFVar1[2].Next = (FRHICommandBase *)pFStack_28;
    pFVar1[4]._padding_ = (longlong)L"UpdateAllocationTags";
    pFVar1[3]._padding_ = (longlong)pFStack_20;
    pFVar1[3].Next = local_18;
  }
  return;
}

// UpdateTextureReference @ 145cc9800

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::UpdateTextureReference
          (FRHICommandListBase *this,FRHITextureReference *param_1,FRHITexture *param_2)

{
  if (param_1 != (FRHITextureReference *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145cc981b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(GDynamicRHI->_padding_ + 0x168))(GDynamicRHI,this,param_1,param_2);
    return;
  }
  return;
}

// RemovePendingTextureUpload @ 145cef650

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FRHICommandListBase::RemovePendingTextureUpload(FRHICommandListBase *this,FRHITexture *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  FRHITexture *pFVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  int iVar10;
  FRHITexture *local_res10;
  
  pFVar9 = (this->PendingTextureUploads).AllocatorInstance.Data;
  pFVar2 = pFVar9 + (longlong)(this->PendingTextureUploads).ArrayNum * 8;
  for (; local_res10 = param_1, pFVar9 != pFVar2; pFVar9 = pFVar9 + 8) {
    if (*(FRHITexture **)pFVar9 == param_1) goto LAB_145cef6b1;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("PendingTextureUploads.Contains(InTexture)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                     ,0x534,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_145cef6b1:
  pFVar2 = (this->PendingTextureUploads).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)&local_res10) &&
      ((FScriptContainerElement *)&local_res10 <
       pFVar2 + (longlong)(this->PendingTextureUploads).ArrayMax * 8)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar1 = (this->PendingTextureUploads).ArrayNum;
  if (iVar1 != 0) {
    iVar10 = 0;
    pFVar2 = (this->PendingTextureUploads).AllocatorInstance.Data;
    bVar4 = *(FRHITexture **)pFVar2 != local_res10;
    lVar6 = 0;
    pFVar5 = local_res10;
    iVar7 = 0;
    do {
      iVar8 = iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar8 = iVar8 + 1;
        if (iVar1 <= lVar6) break;
      } while (bVar4 == (*(FRHITexture **)(pFVar2 + lVar6 * 8) != pFVar5));
      if (bVar4 != false) {
        if (iVar10 != iVar7) {
          memmove(pFVar2 + (longlong)iVar10 * 8,pFVar2 + (longlong)iVar7 * 8,
                  (longlong)(iVar8 - iVar7) << 3);
          pFVar5 = local_res10;
        }
        iVar10 = iVar10 + (iVar8 - iVar7);
      }
      bVar4 = (bool)(bVar4 ^ 1);
      iVar7 = iVar8;
    } while (lVar6 < iVar1);
    (this->PendingTextureUploads).ArrayNum = iVar10;
  }
  return;
}

