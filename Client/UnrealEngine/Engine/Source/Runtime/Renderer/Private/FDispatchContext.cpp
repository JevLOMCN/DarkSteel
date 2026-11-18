// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// ~FDispatchContext @ 144f6cdf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

void __thiscall Nanite::FRenderer::FDispatchContext::~FDispatchContext(FDispatchContext *this)

{
  FRHIShaderBundle *pFVar1;
  FNaniteRasterBinMeta *pFVar2;
  FRasterizerPass *pFVar3;
  int *piVar4;
  
  pFVar1 = (this->SWShaderBundleAsync).Reference;
  if (pFVar1 != (FRHIShaderBundle *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->SWShaderBundle).Reference;
  if (pFVar1 != (FRHIShaderBundle *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar1 = (this->HWShaderBundle).Reference;
  if (pFVar1 != (FRHIShaderBundle *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->MetaBufferData).AllocatorInstance.Data;
  if (pFVar2 != (FNaniteRasterBinMeta *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar2);
  }
  pFVar3 = (this->RasterizerPasses).AllocatorInstance.Data;
  if (pFVar3 != (FRasterizerPass *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(pFVar3);
  }
  piVar4 = (this->Dispatches_SW_Tessellated).Indirections.AllocatorInstance.Data;
  if (piVar4 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar4);
  }
  piVar4 = (this->Dispatches_SW_Triangles).Indirections.AllocatorInstance.Data;
  if (piVar4 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar4);
  }
  piVar4 = (this->Dispatches_HW_Triangles).Indirections.AllocatorInstance.Data;
  if (piVar4 != (int *)0x0) {
    TLinearAllocatorBase<FSceneRenderingBlockAllocationTag,0>::Free(piVar4);
    return;
  }
  return;
}

// operator() @ 144f72fd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l5::<lambda_1>::operator()
          (void *this,FRasterizerPass *param_1)

{
  FHWRasterizeMS *pFVar1;
  longlong lVar2;
  FRHIVertexShader *pFVar3;
  FRHIShader *pFVar4;
  FRHIShader *pFVar5;
  FRHIPixelShader *pFVar6;
  
  if ((*(char *)this == '\x04') || ((byte)(*(char *)this - 2U) < 2)) {
    pFVar1 = (param_1->RasterMeshShader).ShaderContent;
    pFVar5 = (FRHIShader *)0x0;
    lVar2 = *(longlong *)((longlong)this + 8);
    pFVar4 = pFVar5;
    if ((pFVar1 != (FHWRasterizeMS *)0x0) && ((pFVar1->field_0xd0 & 0xf) == 1)) {
      pFVar4 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                         (&param_1->RasterMeshShader,SF_Mesh,true);
    }
    *(FRHIShader **)(lVar2 + 0x18) = pFVar4;
    pFVar1 = (param_1->RasterMeshShader).ShaderContent;
    lVar2 = *(longlong *)((longlong)this + 8);
    if ((pFVar1 != (FHWRasterizeMS *)0x0) && ((pFVar1->field_0xd0 & 0xf) == 0xb)) {
      pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                         (&param_1->RasterMeshShader,SF_WorkGraphComputeNode,true);
    }
    *(FRHIShader **)(lVar2 + 0x30) = pFVar5;
  }
  else {
    pFVar3 = TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader
                       (&param_1->RasterVertexShader,true);
    *(FRHIVertexShader **)(*(longlong *)((longlong)this + 8) + 8) = pFVar3;
  }
  pFVar6 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader
                     (&param_1->RasterPixelShader,true);
  *(FRHIPixelShader **)(*(longlong *)((longlong)this + 8) + 0x10) = pFVar6;
  return;
}

// operator() @ 144f73390

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>::operator()
          (void *this,FRHICommandDispatchComputeShaderBundle *param_1)

{
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  FRDGResource *this_00;
  FRHIBatchedShaderParametersAllocator *pFVar5;
  void *pvVar6;
  undefined8 *puVar7;
  code *pcVar8;
  undefined8 uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  EPSOPrecacheResult EVar13;
  FRHIBatchedShaderParameters *pFVar14;
  FShaderParametersMetadata *pFVar15;
  FRHIShader *pFVar16;
  FComputePipelineState *pFVar17;
  FRHIShader *pFVar18;
  byte bVar19;
  ulonglong uVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  longlong lVar24;
  uint *puVar25;
  longlong lVar26;
  longlong lVar27;
  TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable> *this_01;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18;
  TArray<FRHIShaderBundleComputeDispatch,TSizedDefaultAllocator<32>_> *local_res20;
  undefined4 uStack_bc;
  FRHIBatchedShaderParameters local_98;
  
  param_1->ShaderBundle = (FRHIShaderBundle *)**(undefined8 **)this;
  param_1->bEmulated = (bool)**(undefined1 **)((longlong)this + 8);
  lVar26 = *(longlong *)((longlong)this + 0x10);
  if ((*(longlong *)(lVar26 + 0xe8) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Buffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x183,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  this_00 = *(FRDGResource **)(lVar26 + 0xe8);
  if ((((ulonglong)this_00[4].Name & 0x80) == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this_00);
  pTVar1 = &param_1->Dispatches;
  param_1->RecordArgBuffer = (FRHIBuffer *)this_00->ResourceRHI;
  piVar2 = &(param_1->Dispatches).ArrayNum;
  uVar4 = *(uint *)(**(longlong **)this + 0x18);
  iVar12 = *piVar2;
  local_res20 = pTVar1;
  if (iVar12 < (int)uVar4) {
    iVar11 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x88,8,uVar4 - iVar12,&pTVar1->AllocatorInstance,piVar2,
                        &(param_1->Dispatches).ArrayMax);
    DefaultConstructItems<FRHIShaderBundleComputeDispatch,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar11 * 0x88,uVar4 - iVar12);
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    if ((int)uVar4 < iVar12) {
      uVar22 = iVar12 - uVar4;
      if (((int)(uVar4 | uVar22) < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar22 != 0) {
        pFVar21 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar4 * 0x88;
        iVar12 = (*piVar2 - uVar4) - uVar22;
        if (iVar12 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)(int)uVar22 * 0x88,(longlong)iVar12 * 0x88);
        }
        *piVar2 = *piVar2 - uVar22;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x88,8,&pTVar1->AllocatorInstance,*piVar2,&(param_1->Dispatches).ArrayMax);
      }
    }
  }
  pFVar21 = (pTVar1->AllocatorInstance).Data;
  iVar12 = *piVar2;
  pFVar23 = pFVar21 + (longlong)iVar12 * 0x88;
  while( true ) {
    if (*piVar2 != iVar12) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FRHIShaderBundleComputeDispatch,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar21 == pFVar23) break;
    *(undefined4 *)pFVar21 = 0xffffffff;
    pFVar21 = pFVar21 + 0x88;
  }
  pFVar14 = FRHICommandListBase::GetScratchShaderParameters
                      (*(FRHICommandListBase **)((longlong)this + 0x18));
  pFVar5 = pFVar14->Allocator;
  if (GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters != false) {
    pvVar6 = *(void **)((longlong)this + 0x10);
    local_98.ParametersData.DataPtr = (uchar *)0x0;
    local_98.ParametersData.ArrayNum = 0;
    local_98.Parameters.DataPtr = (FRHIShaderParameter *)0x0;
    local_98.Parameters.ArrayNum = 0;
    local_98.ResourceParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    local_98.ResourceParameters.ArrayNum = 0;
    local_98.BindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
    local_98.BindlessParameters.ArrayNum = 0;
    local_98.Allocator = pFVar5;
    pFVar15 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    SetAllShaderParametersAsBindless(&local_98,pFVar15,pvVar6);
    (local_98.Allocator)->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (param_1->SharedBindlessParameters).DataPtr = local_98.BindlessParameters.DataPtr;
    *(ulonglong *)&(param_1->SharedBindlessParameters).ArrayNum =
         CONCAT44(uStack_bc,local_98.BindlessParameters.ArrayNum);
  }
  puVar7 = *(undefined8 **)((longlong)this + 0x20);
  local_res18 = *(uint *)(puVar7 + 1);
  uVar20 = (ulonglong)(int)local_res18;
  puVar25 = (uint *)*puVar7;
  puVar3 = puVar25 + uVar20;
  while( true ) {
    if (*(int *)(puVar7 + 1) != (int)uVar20) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (puVar25 == puVar3) {
      return;
    }
    uVar4 = *puVar25;
    pFVar18 = (FRHIShader *)0x0;
    lVar26 = *(longlong *)((longlong)this + 0x28);
    uVar22 = 0;
    if ((int)uVar4 < *(int *)(lVar26 + 0x38)) {
      uVar22 = ~uVar4 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) break;
    lVar24 = *(longlong *)((longlong)this + 0x10);
    lVar26 = (longlong)(int)uVar4 * 0xc0 + *(longlong *)(lVar26 + 0x30);
    *(undefined4 *)(lVar24 + 0x50) = *(undefined4 *)(lVar26 + 0xb8);
    *(undefined8 *)(lVar24 + 0x54) = 0;
    *(undefined4 *)(lVar24 + 0x5c) = 0;
    uVar4 = *(uint *)(lVar26 + 0xb8);
    uVar22 = 0;
    if ((int)uVar4 < *piVar2) {
      uVar22 = ~uVar4 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar27 = 0x40;
    lVar24 = (longlong)(int)uVar4 * 0x88;
    pFVar21 = (local_res20->AllocatorInstance).Data;
    *(undefined4 *)(pFVar21 + lVar24) = *(undefined4 *)(lVar26 + 0xb8);
    uVar9 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x58);
    *(undefined8 *)(pFVar21 + lVar24 + 0x78) =
         *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x50);
    *(undefined8 *)(pFVar21 + lVar24 + 0x78 + 8) = uVar9;
    if (**(char **)((longlong)this + 0x30) == '\0') {
      lVar27 = 0x30;
    }
    this_01 = (TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable> *)(lVar27 + lVar26);
    bVar19 = this_01->ShaderContent->field_0xd0 & 0xf;
    if (bVar19 == 5) {
      pFVar16 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                          (this_01,SF_Compute,true);
      *(FRHIShader **)(pFVar21 + lVar24 + 0x10) = pFVar16;
    }
    else {
      *(undefined8 *)(pFVar21 + lVar24 + 0x10) = 0;
      if ((bVar19 == 0xb) && (this_01->ShaderContent != (FMicropolyRasterizeCS *)0x0)) {
        pFVar18 = TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                            (this_01,this_01->ShaderContent->field_0xd0 &
                                     (SF_NumFrequencies|SF_Pixel),true);
      }
    }
    *(FRHIShader **)(pFVar21 + lVar24 + 0x18) = pFVar18;
    *(undefined8 *)(pFVar21 + lVar24 + 0x30) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x38) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x40) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x48) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x50) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x58) = 0;
    *(undefined8 *)(pFVar21 + lVar24 + 0x60) = 0;
    *(undefined4 *)(pFVar21 + lVar24 + 0x68) = 0;
    *(FRHIBatchedShaderParametersAllocator **)(pFVar21 + lVar24 + 0x28) = pFVar5;
    pFVar21[lVar24 + 0x70] = (FScriptContainerElement)0x1;
    SetBatchedShaderParametersMixed<FMicropolyRasterizeCS,FViewInfo_const_&,FMaterialRenderProxy_const_*_const_&,FMaterial_const_&>
              ((FRHIBatchedShaderParameters *)(pFVar21 + lVar24 + 0x28),this_01,
               *(FRasterizePassParameters **)((longlong)this + 0x10),
               *(FViewInfo **)((longlong)this + 0x38),(FMaterialRenderProxy **)(lVar26 + 0x88),
               *(FMaterial **)(lVar26 + 0xa0));
    if ((pFVar21[lVar24 + 0x70] == (FScriptContainerElement)0x0) &&
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
    pFVar17 = (FComputePipelineState *)0x0;
    *(undefined8 *)(*(longlong *)(pFVar21 + lVar24 + 0x28) + 0xb0) = 0;
    if (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10) != (FRHIComputeShader *)0x0) {
      EVar13 = PipelineStateCache::CheckPipelineStateInCache
                         (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10));
      PSOCollectorStats::CheckComputePipelineStateInCache
                (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),EVar13,
                 *(FMaterialRenderProxy **)(lVar26 + 0x88),**(int **)((longlong)this + 0x40));
    }
    if (*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10) != (FRHIComputeShader *)0x0) {
      pFVar17 = FindComputePipelineState(*(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),true);
    }
    *(FComputePipelineState **)(pFVar21 + lVar24 + 8) = pFVar17;
    if ((*(longlong *)(pFVar21 + lVar24 + 0x10) != 0) && (pFVar17 == (FComputePipelineState *)0x0))
    {
      bVar10 = PipelineStateCache::IsPSOPrecachingEnabled();
      pFVar17 = GetComputePipelineState
                          (*(FRHIComputeCommandList **)((longlong)this + 0x18),
                           *(FRHIComputeShader **)(pFVar21 + lVar24 + 0x10),bVar10);
      *(FComputePipelineState **)(pFVar21 + lVar24 + 8) = pFVar17;
      if (!bVar10) {
        *(undefined4 *)(pFVar21 + lVar24) = 0xffffffff;
      }
    }
    puVar25 = puVar25 + 1;
    uVar20 = (ulonglong)local_res18;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// operator() @ 144f754b0

/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>::operator()
          (void *this,FRHICommandDispatchGraphicsShaderBundle *param_1)

{
  TArray<FRHIShaderBundleGraphicsDispatch,TSizedDefaultAllocator<32>_> *pTVar1;
  FRHIBatchedShaderParameters *pFVar2;
  uint *puVar3;
  int *piVar4;
  uint uVar5;
  longlong lVar6;
  FRDGResource *this_00;
  TIntPoint<int>_u_0 *pTVar7;
  FRHIBatchedShaderParametersAllocator *pFVar8;
  void *pvVar9;
  undefined8 *puVar10;
  longlong lVar11;
  char *pcVar12;
  FMaterialRenderProxy *pFVar13;
  FHWRasterizePS *pFVar14;
  FSceneView *pFVar15;
  FRasterizePassParameters *pFVar16;
  FMaterial *pFVar17;
  undefined8 *puVar18;
  code *pcVar19;
  undefined8 uVar20;
  bool bVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  FRHIBatchedShaderParameters *pFVar25;
  FShaderParametersMetadata *pFVar26;
  FRHIVertexShader *pFVar27;
  FRHIShader *pFVar28;
  FRHIShader *pFVar29;
  FRHIPixelShader *pFVar30;
  FGraphicsPipelineState *pFVar31;
  byte bVar32;
  TRefCountPtr<FRHIRasterizerState> TVar33;
  ulonglong uVar34;
  FScriptContainerElement *pFVar35;
  uint *puVar36;
  FMaterialShader *pFVar37;
  TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *this_01;
  uint uVar38;
  FScriptContainerElement *pFVar39;
  EPrimitiveType EVar40;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20;
  undefined4 uStack_b4;
  FRHIBatchedShaderParameters local_98;
  
  param_1->ShaderBundle = *(FRHIShaderBundle **)(*(longlong *)this + 0x58);
  param_1->bEmulated = (bool)**(undefined1 **)((longlong)this + 8);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  if ((*(longlong *)(lVar6 + 0xe8) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Buffer",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x183,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  this_00 = *(FRDGResource **)(lVar6 + 0xe8);
  if ((((ulonglong)this_00[4].Name & 0x80) == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                          ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FRDGResource::ValidateRHIAccess(this_00);
  pTVar1 = &param_1->Dispatches;
  param_1->RecordArgBuffer = (FRHIBuffer *)this_00->ResourceRHI;
  piVar4 = &(param_1->Dispatches).ArrayNum;
  pTVar7 = *(TIntPoint<int>_u_0 **)((longlong)this + 0x18);
  (param_1->BundleState).ViewRect.field0_0x0._s_0.Min.field0_0x0 = *pTVar7;
  EVar40 = PT_TriangleList;
  (param_1->BundleState).ViewRect.field0_0x0._s_0.Max.field0_0x0 = pTVar7[1];
  if (**(char **)((longlong)this + 0x20) == '\x01') {
    EVar40 = PT_PointList;
  }
  (param_1->BundleState).PrimitiveType = EVar40;
  uVar5 = *(uint *)(*(longlong *)(*(longlong *)this + 0x58) + 0x18);
  iVar24 = *piVar4;
  if (iVar24 < (int)uVar5) {
    iVar23 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x1a8,8,uVar5 - iVar24,&pTVar1->AllocatorInstance,piVar4,
                        &(param_1->Dispatches).ArrayMax);
    DefaultConstructItems<FRHIShaderBundleGraphicsDispatch,int>
              ((pTVar1->AllocatorInstance).Data + (longlong)iVar23 * 0x1a8,uVar5 - iVar24);
  }
  else {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    if ((int)uVar5 < iVar24) {
      uVar38 = iVar24 - uVar5;
      if (((int)(uVar38 | uVar5) < 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar21)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      if (uVar38 != 0) {
        pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1a8;
        iVar24 = (*piVar4 - uVar5) - uVar38;
        if (iVar24 != 0) {
          memmove(pFVar35,pFVar35 + (longlong)(int)uVar38 * 0x1a8,(longlong)iVar24 * 0x1a8);
        }
        *piVar4 = *piVar4 - uVar38;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x1a8,8,&pTVar1->AllocatorInstance,*piVar4,&(param_1->Dispatches).ArrayMax);
      }
    }
  }
  pFVar35 = (pTVar1->AllocatorInstance).Data;
  iVar24 = *piVar4;
  pFVar39 = pFVar35 + (longlong)iVar24 * 0x1a8;
  while( true ) {
    if (*piVar4 != iVar24) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FRHIShaderBundleGraphicsDispatch,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar35 == pFVar39) break;
    *(undefined4 *)pFVar35 = 0xffffffff;
    pFVar35 = pFVar35 + 0x1a8;
  }
  pFVar25 = FRHICommandListBase::GetScratchShaderParameters
                      (*(FRHICommandListBase **)((longlong)this + 0x28));
  bVar21 = GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters;
  pFVar8 = pFVar25->Allocator;
  local_98.ParametersData.DataPtr = (uchar *)0x0;
  local_98.ParametersData.ArrayNum = 0;
  local_98.Parameters.DataPtr = (FRHIShaderParameter *)0x0;
  local_98.Parameters.ArrayNum = 0;
  local_98.ResourceParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
  local_98.ResourceParameters.ArrayNum = 0;
  local_98.BindlessParameters.DataPtr = (FRHIShaderParameterResource *)0x0;
  local_98.BindlessParameters.ArrayNum = 0;
  local_98.Allocator = pFVar8;
  if (GRHIGlobals.ShaderBundles.RequiresSharedBindlessParameters != false) {
    pvVar9 = *(void **)((longlong)this + 0x10);
    pFVar26 = FRasterizePassParameters::FTypeInfo::GetStructMetadata();
    SetAllShaderParametersAsBindless(&local_98,pFVar26,pvVar9);
    (local_98.Allocator)->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    (param_1->SharedBindlessParameters).DataPtr = local_98.BindlessParameters.DataPtr;
    *(ulonglong *)&(param_1->SharedBindlessParameters).ArrayNum =
         CONCAT44(uStack_b4,local_98.BindlessParameters.ArrayNum);
  }
  puVar10 = *(undefined8 **)((longlong)this + 0x30);
  local_res20 = *(uint *)(puVar10 + 1);
  uVar34 = (ulonglong)(int)local_res20;
  puVar36 = (uint *)*puVar10;
  puVar3 = puVar36 + uVar34;
  do {
    pFVar29 = (FRHIShader *)0x0;
    if (*(int *)(puVar10 + 1) != (int)uVar34) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (puVar36 == puVar3) {
      return;
    }
    uVar5 = *puVar36;
    lVar6 = *(longlong *)this;
    uVar38 = 0;
    if ((int)uVar5 < *(int *)(lVar6 + 0x38)) {
      uVar38 = ~uVar5 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    lVar11 = *(longlong *)((longlong)this + 0x10);
    this_01 = (TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable> *)
              ((longlong)(int)uVar5 * 0xc0 + *(longlong *)(lVar6 + 0x30));
    *(undefined4 *)(lVar11 + 0x50) = *(undefined4 *)&this_01[0xb].ShaderMap;
    *(undefined8 *)(lVar11 + 0x54) = 0;
    *(undefined4 *)(lVar11 + 0x5c) = 0;
    uVar5 = *(uint *)&this_01[0xb].ShaderMap;
    uVar38 = 0;
    if ((int)uVar5 < *piVar4) {
      uVar38 = ~uVar5 >> 0x1f;
    }
    if ((uVar38 == 0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar35 = (pTVar1->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x1a8;
    *(undefined4 *)pFVar35 = *(undefined4 *)&this_01[0xb].ShaderMap;
    uVar20 = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x58);
    *(undefined8 *)(pFVar35 + 0x198) = *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x50);
    *(undefined8 *)(pFVar35 + 0x1a0) = uVar20;
    bVar32 = ~*(byte *)&this_01[6].ShaderMap & 1;
    TVar33 = TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource.StateRHI;
    if (((bVar32 != 0) &&
        (TVar33 = TStaticStateRHI<TStaticRasterizerState<2,1,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                  ::StaticResource.StateRHI, bVar32 != 1)) && (bVar32 == 2)) {
      TVar33 = TStaticStateRHI<TStaticRasterizerState<2,2,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI;
    }
    *(FRHIRasterizerState **)(*(longlong *)((longlong)this + 0x38) + 0x40) = TVar33.Reference;
    pcVar12 = *(char **)((longlong)this + 0x40);
    if ((*pcVar12 == '\x04') || ((byte)(*pcVar12 - 2U) < 2)) {
      lVar6 = *(longlong *)(pcVar12 + 8);
      pFVar28 = pFVar29;
      if ((this_01[2].ShaderContent != (FHWRasterizePS *)0x0) &&
         (((this_01[2].ShaderContent)->field_0xd0 & 0xf) == 1)) {
        pFVar28 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                            ((TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_01 + 2),
                             SF_Mesh,true);
      }
      *(FRHIShader **)(lVar6 + 0x18) = pFVar28;
      lVar6 = *(longlong *)(pcVar12 + 8);
      if ((this_01[2].ShaderContent != (FHWRasterizePS *)0x0) &&
         (((this_01[2].ShaderContent)->field_0xd0 & 0xf) == 0xb)) {
        pFVar29 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                            ((TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_01 + 2),
                             SF_WorkGraphComputeNode,true);
      }
      *(FRHIShader **)(lVar6 + 0x30) = pFVar29;
    }
    else {
      pFVar27 = TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader
                          ((TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *)(this_01 + 1),
                           true);
      *(FRHIVertexShader **)(*(longlong *)(pcVar12 + 8) + 8) = pFVar27;
    }
    pFVar30 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader(this_01,true);
    *(FRHIPixelShader **)(*(longlong *)(pcVar12 + 8) + 0x10) = pFVar30;
    bVar22 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
    if (bVar22) {
      PSOCollectorStats::CheckFullPipelineStateInCache
                (*(FGraphicsPipelineStateInitializer **)((longlong)this + 0x38),Unknown,
                 (FMaterialRenderProxy *)this_01[5].ShaderContent,&FNaniteVertexFactory::StaticType,
                 (FPrimitiveSceneProxy *)0x0,**(int **)((longlong)this + 0x48));
    }
    if ((**(char **)((longlong)this + 0x20) == '\x04') ||
       ((byte)(**(char **)((longlong)this + 0x20) - 2U) < 2)) {
      bVar22 = true;
    }
    else {
      bVar22 = false;
    }
    pFVar13 = (FMaterialRenderProxy *)this_01[7].ShaderMap;
    pFVar25 = (FRHIBatchedShaderParameters *)(pFVar35 + 0xf8);
    pFVar14 = this_01[9].ShaderContent;
    pFVar15 = *(FSceneView **)((longlong)this + 0x50);
    pFVar16 = *(FRasterizePassParameters **)((longlong)this + 0x10);
    pFVar25->Allocator = pFVar8;
    *(undefined8 *)(pFVar35 + 0x100) = 0;
    *(undefined4 *)(pFVar35 + 0x108) = 0;
    *(undefined8 *)(pFVar35 + 0x110) = 0;
    *(undefined4 *)(pFVar35 + 0x118) = 0;
    *(undefined8 *)(pFVar35 + 0x120) = 0;
    *(undefined4 *)(pFVar35 + 0x128) = 0;
    *(undefined8 *)(pFVar35 + 0x130) = 0;
    *(undefined4 *)(pFVar35 + 0x138) = 0;
    pFVar35[0x140] = (FScriptContainerElement)0x1;
    if (bVar22) {
      if (bVar21 == false) {
        SetShaderParameters<FHWRasterizeMS>
                  (pFVar25,(TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)(this_01 + 2),
                   pFVar16);
      }
      pFVar37 = (FMaterialShader *)this_01[2].ShaderContent;
    }
    else {
      if (bVar21 == false) {
        SetShaderParameters<FHWRasterizeVS>
                  (pFVar25,(TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *)(this_01 + 1),
                   pFVar16);
      }
      pFVar37 = (FMaterialShader *)this_01[1].ShaderContent;
    }
    if ((pFVar35[0x140] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FMaterialShader::SetViewParameters(pFVar37,pFVar25,pFVar15,&pFVar15->ViewUniformBuffer);
    FMaterialShader::SetParameters(pFVar37,pFVar25,pFVar13,(FMaterial *)pFVar14,pFVar15);
    if ((pFVar35[0x140] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar2 = (FRHIBatchedShaderParameters *)(pFVar35 + 0x148);
    pFVar25->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    pFVar17 = (FMaterial *)this_01[9].ShaderMap;
    pFVar14 = this_01[8].ShaderContent;
    pFVar15 = *(FSceneView **)((longlong)this + 0x50);
    pFVar16 = *(FRasterizePassParameters **)((longlong)this + 0x10);
    pFVar2->Allocator = pFVar8;
    *(undefined8 *)(pFVar35 + 0x150) = 0;
    *(undefined4 *)(pFVar35 + 0x158) = 0;
    *(undefined8 *)(pFVar35 + 0x160) = 0;
    *(undefined4 *)(pFVar35 + 0x168) = 0;
    *(undefined8 *)(pFVar35 + 0x170) = 0;
    *(undefined4 *)(pFVar35 + 0x178) = 0;
    *(undefined8 *)(pFVar35 + 0x180) = 0;
    *(undefined4 *)(pFVar35 + 0x188) = 0;
    pFVar35[400] = (FScriptContainerElement)0x1;
    if (bVar21 == false) {
      SetShaderParameters<FHWRasterizePS>(pFVar2,this_01,pFVar16);
    }
    pFVar37 = (FMaterialShader *)this_01->ShaderContent;
    if ((pFVar35[400] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    FMaterialShader::SetViewParameters(pFVar37,pFVar2,pFVar15,&pFVar15->ViewUniformBuffer);
    FMaterialShader::SetParameters(pFVar37,pFVar2,(FMaterialRenderProxy *)pFVar14,pFVar17,pFVar15);
    if ((pFVar35[400] == (FScriptContainerElement)0x0) &&
       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar22)) {
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pFVar2->Allocator->AttachedParameters = (FRHIBatchedShaderParameters *)0x0;
    puVar18 = *(undefined8 **)((longlong)this + 0x38);
    uVar20 = puVar18[1];
    *(undefined8 *)(pFVar35 + 0x18) = *puVar18;
    *(undefined8 *)(pFVar35 + 0x20) = uVar20;
    uVar20 = puVar18[3];
    *(undefined8 *)(pFVar35 + 0x28) = puVar18[2];
    *(undefined8 *)(pFVar35 + 0x30) = uVar20;
    uVar20 = puVar18[5];
    *(undefined8 *)(pFVar35 + 0x38) = puVar18[4];
    *(undefined8 *)(pFVar35 + 0x40) = uVar20;
    uVar20 = puVar18[7];
    *(undefined8 *)(pFVar35 + 0x48) = puVar18[6];
    *(undefined8 *)(pFVar35 + 0x50) = uVar20;
    uVar20 = puVar18[9];
    *(undefined8 *)(pFVar35 + 0x58) = puVar18[8];
    *(undefined8 *)(pFVar35 + 0x60) = uVar20;
    uVar20 = puVar18[0xb];
    *(undefined8 *)(pFVar35 + 0x68) = puVar18[10];
    *(undefined8 *)(pFVar35 + 0x70) = uVar20;
    uVar20 = puVar18[0xd];
    *(undefined8 *)(pFVar35 + 0x78) = puVar18[0xc];
    *(undefined8 *)(pFVar35 + 0x80) = uVar20;
    uVar20 = puVar18[0xf];
    *(undefined8 *)(pFVar35 + 0x88) = puVar18[0xe];
    *(undefined8 *)(pFVar35 + 0x90) = uVar20;
    uVar20 = puVar18[0x11];
    *(undefined8 *)(pFVar35 + 0x98) = puVar18[0x10];
    *(undefined8 *)(pFVar35 + 0xa0) = uVar20;
    uVar20 = puVar18[0x13];
    *(undefined8 *)(pFVar35 + 0xa8) = puVar18[0x12];
    *(undefined8 *)(pFVar35 + 0xb0) = uVar20;
    uVar20 = puVar18[0x15];
    *(undefined8 *)(pFVar35 + 0xb8) = puVar18[0x14];
    *(undefined8 *)(pFVar35 + 0xc0) = uVar20;
    uVar20 = puVar18[0x17];
    *(undefined8 *)(pFVar35 + 200) = puVar18[0x16];
    *(undefined8 *)(pFVar35 + 0xd0) = uVar20;
    uVar20 = puVar18[0x19];
    *(undefined8 *)(pFVar35 + 0xd8) = puVar18[0x18];
    *(undefined8 *)(pFVar35 + 0xe0) = uVar20;
    uVar20 = puVar18[0x1b];
    *(undefined8 *)(pFVar35 + 0xe8) = puVar18[0x1a];
    *(undefined8 *)(pFVar35 + 0xf0) = uVar20;
    if (*(char *)((longlong)&this_01[0xb].ShaderContent + 2) == '\0') {
      pFVar31 = FindGraphicsPipelineState
                          ((FGraphicsPipelineStateInitializer *)(pFVar35 + 0x18),true);
      *(FGraphicsPipelineState **)(pFVar35 + 8) = pFVar31;
      if (pFVar31 == (FGraphicsPipelineState *)0x0) goto LAB_144f75cbd;
    }
    else {
      *(undefined8 *)(pFVar35 + 8) = 0;
LAB_144f75cbd:
      if ((*(char *)((longlong)&this_01[0xb].ShaderContent + 2) == '\0') ||
         (*(longlong *)(*(longlong *)((longlong)this + 0x38) + 0x30) == 0)) {
        bVar22 = PipelineStateCache::IsPSOPrecachingEnabled();
        pFVar31 = GetGraphicsPipelineState
                            (*(FRHICommandList **)((longlong)this + 0x28),
                             (FGraphicsPipelineStateInitializer *)(pFVar35 + 0x18),bVar22);
        *(FGraphicsPipelineState **)(pFVar35 + 8) = pFVar31;
        if (!bVar22) {
          *(undefined4 *)pFVar35 = 0xffffffff;
        }
      }
    }
    puVar36 = puVar36 + 1;
    uVar34 = (ulonglong)local_res20;
  } while( true );
}

// operator() @ 144f78300

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */

void __thiscall
`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l14::<lambda_4>::operator()
          (void *this,FRasterizerPass *param_1)

{
  FRasterizePassParameters *pFVar1;
  FMaterialShader *pFVar2;
  FMaterialRenderProxy *pFVar3;
  FMaterial *pFVar4;
  FRHIShader *pFVar5;
  FRHIBatchedShaderParameters *pFVar6;
  FRHIPixelShader *pFVar7;
  FRHICommandListBase *pFVar8;
  TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *this_00;
  FSceneView *pFVar9;
  FMaterial *local_res8;
  
  if ((*(char *)this == '\x04') || ((byte)(*(char *)this - 2U) < 2)) {
    local_res8 = param_1->VertexMaterial;
    this_00 = (TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable> *)&param_1->RasterMeshShader;
    pFVar9 = *(FSceneView **)((longlong)this + 0x10);
    pFVar1 = *(FRasterizePassParameters **)((longlong)this + 0x18);
    pFVar8 = *(FRHICommandListBase **)((longlong)this + 8);
    pFVar5 = TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable>::GetRHIShaderBase
                       ((TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)this_00,SF_Mesh,
                        true);
    pFVar6 = FRHICommandListBase::GetScratchShaderParameters(pFVar8);
    SetShaderParameters<FHWRasterizeMS>
              (pFVar6,(TShaderRefBase<FHWRasterizeMS,FShaderMapPointerTable> *)this_00,pFVar1);
  }
  else {
    local_res8 = param_1->VertexMaterial;
    this_00 = &param_1->RasterVertexShader;
    pFVar9 = *(FSceneView **)((longlong)this + 0x10);
    pFVar1 = *(FRasterizePassParameters **)((longlong)this + 0x18);
    pFVar8 = *(FRHICommandListBase **)((longlong)this + 8);
    pFVar5 = (FRHIShader *)
             TShaderRefBase<FHWRasterizeVS,FShaderMapPointerTable>::GetVertexShader(this_00,true);
    pFVar6 = FRHICommandListBase::GetScratchShaderParameters(pFVar8);
    SetShaderParameters<FHWRasterizeVS>(pFVar6,this_00,pFVar1);
  }
  pFVar2 = (FMaterialShader *)this_00->ShaderContent;
  pFVar3 = param_1->VertexMaterialProxy;
  FMaterialShader::SetViewParameters(pFVar2,pFVar6,pFVar9,&pFVar9->ViewUniformBuffer);
  FMaterialShader::SetParameters(pFVar2,pFVar6,pFVar3,local_res8,pFVar9);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)pFVar8,(FRHIGraphicsShader *)pFVar5,pFVar6);
  pFVar9 = *(FSceneView **)((longlong)this + 0x10);
  pFVar1 = *(FRasterizePassParameters **)((longlong)this + 0x18);
  pFVar4 = param_1->PixelMaterial;
  pFVar8 = *(FRHICommandListBase **)((longlong)this + 8);
  pFVar7 = TShaderRefBase<FHWRasterizePS,FShaderMapPointerTable>::GetPixelShader
                     (&param_1->RasterPixelShader,true);
  pFVar6 = FRHICommandListBase::GetScratchShaderParameters(pFVar8);
  SetShaderParameters<FHWRasterizePS>(pFVar6,&param_1->RasterPixelShader,pFVar1);
  pFVar2 = (FMaterialShader *)(param_1->RasterPixelShader).ShaderContent;
  pFVar3 = param_1->PixelMaterialProxy;
  FMaterialShader::SetViewParameters(pFVar2,pFVar6,pFVar9,&pFVar9->ViewUniformBuffer);
  FMaterialShader::SetParameters(pFVar2,pFVar6,pFVar3,pFVar4,pFVar9);
  FRHICommandList::SetBatchedShaderParameters
            ((FRHICommandList *)pFVar8,(FRHIGraphicsShader *)pFVar7,pFVar6);
  return;
}

// DispatchHW @ 144f903b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000144f905e5) */
/* WARNING: Removing unreachable block (ram,0x000144f905ea) */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
Nanite::FRenderer::FDispatchContext::DispatchHW
          (FDispatchContext *this,FRHICommandList *param_1,FDispatchList *param_2,FViewInfo *param_3
          ,TIntRect<int> *param_4,ERasterHardwarePath param_5,int param_6,
          FRasterizePassParameters *param_7)

{
  undefined8 uVar1;
  FMaterialRenderProxy *pFVar2;
  longlong lVar3;
  FRDGResource *pFVar4;
  code *pcVar5;
  int iVar6;
  undefined8 uVar7;
  TRefCountPtr<FRHIBlendState> TVar8;
  TRefCountPtr<FRHIDepthStencilState> TVar9;
  TConsoleVariableData<int> *pTVar10;
  FViewInfo *pFVar11;
  FDispatchContext *pFVar12;
  uint *puVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  FRHIBreadcrumbAllocator *pFVar18;
  FRHIBreadcrumbNode *pFVar19;
  IRHICommandContext *pIVar20;
  undefined8 *puVar21;
  byte bVar22;
  code **ppcVar23;
  undefined **ppuVar24;
  ulonglong uVar25;
  wchar_t *_Source;
  FRHIResource *pFVar26;
  FString *pFVar27;
  FRasterizePassParameters *pFVar28;
  uint *puVar29;
  FRasterizerPass *pFVar30;
  EPrimitiveType EVar31;
  undefined1 auStackY_368 [32];
  undefined1 local_328;
  undefined1 local_327;
  char local_326;
  uint local_324;
  FRasterizePassParameters *local_320;
  FDispatchList *local_318;
  FViewInfo *local_308;
  FDispatchContext *local_300;
  FRHIBreadcrumbScope local_2f8;
  char local_2e8;
  uint *local_2e0;
  undefined1 local_2d8 [8];
  FGraphicsPipelineStateInitializer *local_2d0;
  ERasterHardwarePath local_2c8 [8];
  FRHICommandList *local_2c0;
  FViewInfo *local_2b8;
  FRasterizePassParameters *local_2b0;
  FMetadataSerializer local_2a0;
  uint uStack_274;
  undefined4 local_270;
  undefined4 uStack_26c;
  FGraphicsPipelineStateInitializer local_258;
  code *local_178 [2];
  code *local_168 [3];
  code **local_150;
  FRHIRenderPassInfo local_148;
  ulonglong local_48;
  
  pFVar28 = param_7;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_326 = GShowMaterialDrawEvents != 0;
  local_320 = param_7;
  local_324 = 0;
  local_318 = param_2;
  local_308 = param_3;
  local_300 = this;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pTVar10 = CVarNaniteBundleEmulation.Ref;
  bVar14 = IsInParallelRenderingThread();
  if ((!bVar14) &&
     (bVar14 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar14)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_328 = (code)(pTVar10->ShadowedValue[1] != 0);
  if (0 < (param_2->Indirections).ArrayNum) {
    if ((*(longlong *)&pFVar28->IndirectArgs == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Buffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                            ,0x183,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)&pFVar28->IndirectArgs);
    FRHIRenderPassInfo::FRHIRenderPassInfo(&local_148);
    uVar1 = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    local_148.ResolveRect.X2 = (int)uVar1;
    local_148.ResolveRect.X1 = (int)*(undefined8 *)&param_4->field0_0x0;
    local_148.ResolveRect.Y2 = (int)((ulonglong)uVar1 >> 0x20);
    local_148.ResolveRect.Y1 = (int)((ulonglong)*(undefined8 *)&param_4->field0_0x0 >> 0x20);
    FRHICommandList::BeginRenderPass(param_1,&local_148,L"HW Rasterize");
    iVar15 = 0x7fff;
    if (*(int *)((longlong)&param_4->field0_0x0 + 0xc) < 0x7fff) {
      iVar15 = *(int *)((longlong)&param_4->field0_0x0 + 0xc);
    }
    iVar6 = 0x7fff;
    if (*(int *)((longlong)&param_4->field0_0x0 + 8) < 0x7fff) {
      iVar6 = *(int *)((longlong)&param_4->field0_0x0 + 8);
    }
    FRHICommandList::SetViewport
              (param_1,(float)*(int *)&param_4->field0_0x0,
               (float)*(int *)((longlong)&param_4->field0_0x0 + 4),0.0,(float)iVar6,(float)iVar15,
               __real_3f800000);
    FRHICommandList::SetStreamSource(param_1,0,(FRHIBuffer *)0x0,0);
    uVar1 = GEmptyVertexDeclaration._32_8_;
    TVar9 = TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
            ::StaticResource.StateRHI;
    TVar8 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
    EVar31 = PT_TriangleList;
    if (param_5 == PrimitiveShader) {
      EVar31 = PT_PointList;
    }
    local_258.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
    if (((2 < (byte)(param_5 - MeshShaderWrapped)) &&
        (local_258.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)uVar1,
        GEmptyVertexDeclaration._32_8_ != 0)) &&
       (FRHIResource::AddRef((FRHIResource *)GEmptyVertexDeclaration._32_8_), uVar1 != 0)) {
      FRHIResource::Release((FRHIResource *)uVar1);
    }
    pFVar12 = local_300;
    pFVar11 = local_308;
    local_2d8[0] = (code)param_5;
    local_2d0 = &local_258;
    local_258.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
    local_258.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
    local_258.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
    local_258.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
    local_258.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
    local_258.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
    local_258.RasterizerState = (FRHIRasterizerState *)0x0;
    local_258.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
    local_258.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
    local_258.RenderTargetsEnabled = 0;
    local_258.RenderTargetFormats.Elements[0] = '\0';
    local_258.RenderTargetFormats.Elements[1] = '\0';
    local_258.RenderTargetFormats.Elements[2] = '\0';
    local_258.RenderTargetFormats.Elements[3] = '\0';
    local_258.RenderTargetFormats.Elements[4] = '\0';
    local_258.RenderTargetFormats.Elements[5] = '\0';
    local_258.RenderTargetFormats.Elements[6] = '\0';
    local_258.RenderTargetFormats.Elements[7] = '\0';
    local_258.RenderTargetFlags.Elements[0] = None;
    local_258.RenderTargetFlags.Elements[1] = None;
    local_258.RenderTargetFlags.Elements[2] = None;
    local_258.RenderTargetFlags.Elements[3] = None;
    local_258.RenderTargetFlags.Elements[4] = None;
    local_258.RenderTargetFlags.Elements[5] = None;
    local_258.RenderTargetFlags.Elements[6] = None;
    local_258.RenderTargetFlags.Elements[7] = None;
    local_258.DepthStencilTargetFormat = PF_Unknown;
    local_258.DepthStencilTargetFlag = None;
    local_258.DepthTargetLoadAction = ENoAction;
    local_258.DepthTargetStoreAction = ENoAction;
    local_258.StencilTargetLoadAction = ENoAction;
    local_258.StencilTargetStoreAction = ENoAction;
    local_258.DepthStencilAccess.Value = DepthNop;
    local_258.NumSamples = 0;
    local_258.SubpassHint = None;
    local_258.SubpassIndex = '\0';
    local_258.ConservativeRasterization = Disabled;
    local_258.bDepthBounds = false;
    local_258.MultiViewCount = '\0';
    local_258.bHasFragmentDensityAttachment = false;
    local_258.bAllowVariableRateShading = true;
    local_258.ShadingRate = VRSSR_1x1;
    local_258.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
    local_258.StatePrecachePSOHash = 0;
    local_258.BlendState = TVar8.Reference;
    local_258.DepthStencilState = TVar9.Reference;
    local_258.PrimitiveType = EVar31;
    if ((local_300->HWShaderBundle).Reference == (FRHIShaderBundle *)0x0) {
      local_324 = (local_318->Indirections).ArrayNum;
      uVar25 = (ulonglong)(int)local_324;
      puVar29 = (uint *)(local_318->Indirections).AllocatorInstance.Data;
      local_2e0 = puVar29 + uVar25;
      pFVar28 = local_320;
      while( true ) {
        puVar13 = local_2e0;
        pFVar12 = local_300;
        if ((local_318->Indirections).ArrayNum != (int)uVar25) {
          local_327 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_327);
        }
        if (puVar29 == puVar13) break;
        uVar17 = *puVar29;
        uVar16 = 0;
        if ((int)uVar17 < (pFVar12->RasterizerPasses).ArrayNum) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_2e8 = '\0';
        pFVar30 = (pFVar12->RasterizerPasses).AllocatorInstance.Data + (int)uVar17;
        if (local_326 != '\0') {
          pFVar2 = (pFVar30->RasterPipeline).RasterMaterial;
          if ((pFVar2 == (FMaterialRenderProxy *)0x0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("RasterMaterial",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                  ,0x96d,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar17 = FGlobalResources::GetFixedFunctionBinMask();
          if (uVar17 < pFVar30->RasterBin) {
            pFVar27 = &pFVar2->MaterialName;
          }
          else {
            lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS0) &&
               (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FString::FString(&Bin0,L"Fixed Function");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin0__)
              ;
              _Init_thread_footer(&::_TSS0);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS1) &&
               (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              ::FString::FString(&Bin1,L"Fixed Function (TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin1__)
              ;
              _Init_thread_footer(&::_TSS1);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS2) &&
               (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
              ::FString::FString(&Bin2,L"Fixed Function (Spline)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin2__)
              ;
              _Init_thread_footer(&::_TSS2);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS3) &&
               (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              ::FString::FString(&Bin4,L"Fixed Function (Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin4__)
              ;
              _Init_thread_footer(&::_TSS3);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS4) &&
               (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
              ::FString::FString(&Bin8,L"Fixed Function (CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin8__)
              ;
              _Init_thread_footer(&::_TSS4);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS5) &&
               (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
              ::FString::FString(&Bin16,L"Fixed Function (Voxel)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin16__
                    );
              _Init_thread_footer(&::_TSS5);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS6) &&
               (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
              ::FString::FString(&Bin9,L"Fixed Function (TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin9__)
              ;
              _Init_thread_footer(&::_TSS6);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS7) &&
               (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
              ::FString::FString(&Bin3,L"Fixed Function (Spline | TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin3__)
              ;
              _Init_thread_footer(&::_TSS7);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS8) &&
               (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
              ::FString::FString(&Bin10,L"Fixed Function (Spline | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin10__
                    );
              _Init_thread_footer(&::_TSS8);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS9) &&
               (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
              ::FString::FString(&Bin11,L"Fixed Function (Spline | TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin11__
                    );
              _Init_thread_footer(&::_TSS9);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS10) &&
               (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
              ::FString::FString(&Bin5,L"Fixed Function (Skinned | TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin5__)
              ;
              _Init_thread_footer(&::_TSS10);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS11) &&
               (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
              ::FString::FString(&Bin12,L"Fixed Function (Skinned | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin12__
                    );
              _Init_thread_footer(&::_TSS11);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS12) &&
               (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
              ::FString::FString(&Bin13,L"Fixed Function (Skinned | TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin13__
                    );
              _Init_thread_footer(&::_TSS12);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS13) &&
               (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
              ::FString::FString(&Bin20,L"Fixed Function (Voxel | Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin20__
                    );
              _Init_thread_footer(&::_TSS13);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS14) &&
               (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
              ::FString::FString(&Bin24,L"Fixed Function (Voxel | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin24__
                    );
              _Init_thread_footer(&::_TSS14);
            }
            if ((*(int *)(lVar3 + 0x9d4c) < ::_TSS15) &&
               (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
              ::FString::FString(&Bin28,L"Fixed Function (Voxel | CastShadow | Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin28__
                    );
              _Init_thread_footer(&::_TSS15);
            }
            switch(pFVar30->RasterBin) {
            case 1:
              pFVar27 = &Bin1;
              break;
            case 2:
              pFVar27 = &Bin2;
              break;
            case 3:
              pFVar27 = &Bin3;
              break;
            case 4:
              pFVar27 = &Bin4;
              break;
            case 5:
              pFVar27 = &Bin5;
              break;
            default:
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                  ,0x991,L"");
              if (bVar14) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            case 0:
              pFVar27 = &Bin0;
              break;
            case 8:
              pFVar27 = &Bin8;
              break;
            case 9:
              pFVar27 = &Bin9;
              break;
            case 10:
              pFVar27 = &Bin10;
              break;
            case 0xb:
              pFVar27 = &Bin11;
              break;
            case 0xc:
              pFVar27 = &Bin12;
              break;
            case 0xd:
              pFVar27 = &Bin13;
              break;
            case 0x10:
              pFVar27 = &Bin16;
              break;
            case 0x14:
              pFVar27 = &Bin20;
              break;
            case 0x18:
              pFVar27 = &Bin24;
              break;
            case 0x1c:
              pFVar27 = &Bin28;
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_._0_4_ = 0xd26;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            local_270 = 0;
            uStack_26c = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._12_8_ = ZEXT48(uStack_274);
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_._4_4_ = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)u_HWRaster;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)u__s;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)
                       &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                        ::__l2::Desc.Cs,4000);
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.TraceGpuSpecId = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(``Nanite::FRenderer::FDispatchContext::DispatchHW'::__l19::<lambda_3>::
                   operator()<FString_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (local_2e8 != '\0') {
            FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2f8);
          }
          pFVar18 = FRHIComputeCommandList::GetBreadcrumbAllocator
                              ((FRHIComputeCommandList *)param_1);
          pFVar19 = FMemStackBase::Alloc(&pFVar18->Inner,0x150,8);
          pFVar19->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
          pFVar19->Parent = FRHIBreadcrumbNode::Sentinel;
          pFVar19->ListLink = (FRHIBreadcrumbNode *)0x0;
          (pFVar19->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
          (pFVar19->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
          pFVar19->TraceCpuSpecId = 0;
          pFVar19->TraceCpuMetadataId = 0;
          pFVar19->Data =
               (FRHIBreadcrumbData *)
               &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                ::__l2::Desc;
          pFVar19->Allocator = pFVar18;
          LOCK();
          UNLOCK();
          uVar17 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
          FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
          pFVar19->BeginPipes = (atomic<unsigned_char>)0x0;
          pFVar19->EndPipes = (atomic<unsigned_char>)0x0;
          pFVar19->ID = uVar17;
          if ((pFVar27->Data).ArrayNum == 0) {
            _Source = L"";
          }
          else {
            _Source = (wchar_t *)(pFVar27->Data).AllocatorInstance.Data;
          }
          wcsncpy((wchar_t *)(pFVar19 + 1),_Source,0x7f);
          *(undefined2 *)((longlong)pFVar19[4].NextPtrs.Elements + 0xe) = 0;
          pFVar19->_padding_ =
               (longlong)
               &
               ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
          ;
          pFVar19[4].Allocator =
               (FRHIBreadcrumbAllocator *)
               &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                ::__l2::Desc;
          uVar17 = UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>::GetTraceCpuSpec
                             (&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchHW(FRHICommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,UE::Math::TIntRect<int>_const&___ptr64,ERasterHardwarePath,int,FRasterizePassParameters)const___ptr64'::`19'::<lambda_3>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                               ::__l2::Desc);
          pFVar19->TraceCpuSpecId = uVar17;
          if (uVar17 != 0) {
            UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_2a0);
            UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
                      (&local_2a0,(wchar_t *)(pFVar19 + 1));
            uVar17 = FCpuProfilerTrace::OutputMetadata(pFVar19->TraceCpuSpecId,&local_2a0.CborData);
            pFVar19->TraceCpuMetadataId = uVar17;
            UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_2a0);
          }
          FRHIBreadcrumbScope::FRHIBreadcrumbScope
                    (&local_2f8,(FRHIComputeCommandList *)param_1,pFVar19);
          local_2e8 = '\x01';
          pFVar28 = local_320;
        }
        (pFVar28->PassData).field0_0x0._s_0.X = pFVar30->RasterBin;
        *(undefined8 *)((longlong)&(pFVar28->PassData).field0_0x0 + 4) = 0;
        (pFVar28->PassData).field0_0x0._s_0.W = 0;
        bVar22 = ~(pFVar30->RasterPipeline).bIsTwoSided & 1;
        local_258.RasterizerState =
             TStaticStateRHI<TStaticRasterizerState<2,0,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
             ::StaticResource.StateRHI.Reference;
        if (((bVar22 != 0) &&
            (local_258.RasterizerState =
                  TStaticStateRHI<TStaticRasterizerState<2,1,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
                  ::StaticResource.StateRHI.Reference, bVar22 != 1)) && (bVar22 == 2)) {
          local_258.RasterizerState =
               TStaticStateRHI<TStaticRasterizerState<2,2,0,0>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
               ::StaticResource.StateRHI.Reference;
        }
        local_2c8[0] = param_5;
        local_2b8 = pFVar11;
        local_2c0 = param_1;
        local_2b0 = pFVar28;
        `Nanite::FRenderer::FDispatchContext::DispatchHW'::__l5::<lambda_1>::operator()
                  (local_2d8,pFVar30);
        bVar14 = PSOCollectorStats::IsFullPrecachingValidationEnabled();
        if (bVar14) {
          PSOCollectorStats::CheckFullPipelineStateInCache
                    (&local_258,Unknown,(pFVar30->RasterPipeline).RasterMaterial,
                     &FNaniteVertexFactory::StaticType,(FPrimitiveSceneProxy *)0x0,param_6);
        }
        SetGraphicsPipelineState(param_1,&local_258,0,CheckApply,true);
        `Nanite::FRenderer::FDispatchContext::DispatchHW'::__l14::<lambda_4>::operator()
                  (local_2c8,pFVar30);
        if (GRHIGlobals.SupportsShaderRootConstants != false) {
          if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
            puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
            *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
            **(undefined8 **)&param_1->field_0x30 = puVar21;
            uVar1 = *(undefined8 *)&(pFVar28->PassData).field0_0x0;
            uVar7 = *(undefined8 *)((longlong)&(pFVar28->PassData).field0_0x0 + 8);
            *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
            puVar21[1] = 0;
            *puVar21 = &___7FRHICommandSetShaderRootConstants__6B_;
            puVar21[2] = uVar1;
            puVar21[3] = uVar7;
          }
          else {
            pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar20->_padding_ + 0x68))(pIVar20,&pFVar28->PassData);
          }
        }
        uVar17 = pFVar30->IndirectOffset;
        if ((byte)(param_5 - MeshShaderWrapped) < 3) {
          if ((*(longlong *)&pFVar28->IndirectArgs == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Buffer",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x183,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = *(FRDGResource **)&pFVar28->IndirectArgs;
          if ((((ulonglong)pFVar4[4].Name & 0x80) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                                  ,0x53c,L"Buffer %s was not flagged for indirect draw usage."),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FRDGResource::ValidateRHIAccess(pFVar4);
          pFVar26 = pFVar4->ResourceRHI;
          if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
            puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
            *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
            **(undefined8 **)&param_1->field_0x30 = puVar21;
            *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
            puVar21[1] = 0;
            ppuVar24 = &___7FRHICommandDispatchIndirectMeshShader__6B_;
            goto LAB_144f90f06;
          }
          pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
          (**(code **)(pIVar20->_padding_ + 0x218))(pIVar20,pFVar26);
        }
        else {
          if ((*(longlong *)&pFVar28->IndirectArgs == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Buffer",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                                  ,0x183,L""), bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar4 = *(FRDGResource **)&pFVar28->IndirectArgs;
          if ((((ulonglong)pFVar4[4].Name & 0x80) == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                                  ,0x53c,L"Buffer %s was not flagged for indirect draw usage."),
             bVar14)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          FRDGResource::ValidateRHIAccess(pFVar4);
          pFVar26 = pFVar4->ResourceRHI;
          if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
            puVar21 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
            *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
            **(undefined8 **)&param_1->field_0x30 = puVar21;
            *(undefined8 **)&param_1->field_0x30 = puVar21 + 1;
            puVar21[1] = 0;
            ppuVar24 = &___7FRHICommandDrawPrimitiveIndirect__6B_;
LAB_144f90f06:
            *(uint *)(puVar21 + 3) = uVar17 + 0x10;
            puVar21[2] = pFVar26;
            *puVar21 = ppuVar24;
          }
          else {
            pIVar20 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar20->_padding_ + 0x1e8))(pIVar20,pFVar26);
          }
        }
        if (local_2e8 != '\0') {
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_2f8);
        }
        puVar29 = puVar29 + 1;
        uVar25 = (ulonglong)local_324;
      }
    }
    else {
      local_178[0] = (code *)0x0;
      local_150 = FMemory::Malloc(0x60,8);
      *local_150 = (code *)&
                           ___7__TFunction_OwnedObject_V<lambda_2>__7__DispatchHW_FDispatchContext_FRenderer_Nanite__QEBAXAEAVFRHICommandList__AEBUFDispatchList_345_AEBVFViewInfo__AEBU__TIntRect_H_Math_UE__W4ERasterHardwarePath__HVFRasterizePassParameters___Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_150[1] = (code *)pFVar12;
      local_150[2] = (code *)&local_328;
      local_150[3] = (code *)local_320;
      local_150[4] = (code *)param_4;
      local_150[5] = (code *)&param_5;
      local_150[6] = (code *)param_1;
      local_150[7] = (code *)local_318;
      local_150[8] = (code *)&local_258;
      local_150[9] = (code *)local_2d8;
      local_150[10] = (code *)&param_6;
      local_150[0xb] = (code *)local_308;
      if (local_150 + 1 != (code **)0x0) {
        local_178[0] = UE::Core::Private::Function::
                       TFunctionRefCaller<`Nanite::FRenderer::FDispatchContext::DispatchHW'::__l8::<lambda_2>,void,FRHICommandDispatchGraphicsShaderBundle_&>
                       ::Call;
      }
      FRHIComputeCommandList::DispatchGraphicsShaderBundle
                ((FRHIComputeCommandList *)param_1,
                 (TFunction<void___cdecl(FRHICommandDispatchGraphicsShaderBundle_&)> *)local_178);
      if (local_178[0] != (code *)0x0) {
        ppcVar23 = local_178 + 2;
        if (local_150 != (code **)0x0) {
          ppcVar23 = local_150;
        }
        (**(code **)(*ppcVar23 + 0x10))();
      }
    }
    FRHICommandList::EndRenderPass(param_1);
    if (local_148.ShadingRateTexture.Reference != (FRHITexture *)0x0) {
      FRHIResource::Release((FRHIResource *)local_148.ShadingRateTexture.Reference);
    }
  }
  return;
}

// DispatchSW @ 144f914f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ECborEndianness": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
Nanite::FRenderer::FDispatchContext::DispatchSW
          (FDispatchContext *this,FRHIComputeCommandList *param_1,FDispatchList *param_2,
          FViewInfo *param_3,int param_4,FRasterizePassParameters *param_5,bool param_6)

{
  FMaterialRenderProxy *pFVar1;
  FRDGResource *this_00;
  FRHIResource *pFVar2;
  FMaterial *pFVar3;
  FMicropolyRasterizeCS *pFVar4;
  code *pcVar5;
  longlong lVar6;
  TConsoleVariableData<int> *pTVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  EPSOPrecacheResult EVar11;
  FRHIBreadcrumbAllocator *pFVar12;
  FRHIBreadcrumbNode *pFVar13;
  FRHIComputeShader *pFVar14;
  IRHIComputeContext *pIVar15;
  FRHICommandBase *pFVar16;
  FRHIComputeShader *pFVar17;
  FRHIBatchedShaderParameters *pFVar18;
  FRHICommandBase *pFVar19;
  FRHIBatchedShaderUnbinds *pFVar20;
  TRefCountPtr<FRHIShaderBundle> *pTVar21;
  code **ppcVar22;
  ulonglong uVar23;
  wchar_t *_Source;
  uint *puVar24;
  int *piVar25;
  FString *pFVar26;
  FRasterizePassParameters *pFVar27;
  TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable> *this_01;
  FRasterizerPass *pFVar28;
  char cVar29;
  undefined1 auStackY_158 [32];
  undefined1 local_128;
  undefined1 local_127;
  char local_126;
  FRHIShaderBundle *local_120;
  FRHICommandListBase *local_118;
  uint local_110;
  FRasterizePassParameters *local_108;
  FRasterizerPass *local_100;
  uint *local_f8;
  uint *local_f0;
  FRHIBreadcrumbScope local_e8;
  char local_d8;
  FViewInfo *local_d0;
  FDispatchContext *local_c8;
  FDispatchList *local_c0;
  FMetadataSerializer local_b8;
  uint uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  code *local_78 [2];
  code *local_68 [3];
  code **local_50;
  ulonglong local_48;
  
  pFVar27 = param_5;
  pTVar7 = CVarNaniteBundleEmulation.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_158;
  cVar29 = GShowMaterialDrawEvents != 0;
  local_108 = param_5;
  local_126 = cVar29;
  local_118 = (FRHICommandListBase *)param_1;
  local_d0 = param_3;
  local_c8 = this;
  local_c0 = param_2;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_128 = (code)(pTVar7->ShadowedValue[1] != 0);
  pTVar21 = &this->SWShaderBundleAsync;
  if (param_1->field_0x6a != '\x02') {
    pTVar21 = &this->SWShaderBundle;
  }
  local_120 = pTVar21->Reference;
  if (local_120 != (FRHIShaderBundle *)0x0) {
    FRHIResource::AddRef((FRHIResource *)local_120);
  }
  if (0 < (param_2->Indirections).ArrayNum) {
    if ((*(longlong *)&pFVar27->IndirectArgs == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Buffer",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                           ,0x183,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FRDGResource::MarkResourceAsUsed(*(FRDGResource **)&pFVar27->IndirectArgs);
    if (local_120 == (FRHIShaderBundle *)0x0) {
      local_110 = (param_2->Indirections).ArrayNum;
      uVar23 = (ulonglong)(int)local_110;
      puVar24 = (uint *)(param_2->Indirections).AllocatorInstance.Data;
      local_f0 = puVar24 + uVar23;
      while( true ) {
        local_f8 = puVar24;
        if ((param_2->Indirections).ArrayNum != (int)uVar23) {
          local_127 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_127);
        }
        if (puVar24 == local_f0) break;
        uVar10 = *puVar24;
        uVar9 = 0;
        if ((int)uVar10 < (this->RasterizerPasses).ArrayNum) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        local_d8 = '\0';
        pFVar28 = (this->RasterizerPasses).AllocatorInstance.Data + (int)uVar10;
        local_100 = pFVar28;
        if (cVar29 != '\0') {
          pFVar1 = (pFVar28->RasterPipeline).RasterMaterial;
          if ((pFVar1 == (FMaterialRenderProxy *)0x0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("RasterMaterial",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                 ,0x96d,L""), bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar10 = FGlobalResources::GetFixedFunctionBinMask();
          if (uVar10 < pFVar28->RasterBin) {
            pFVar26 = &pFVar1->MaterialName;
          }
          else {
            piVar25 = (int *)(*(longlong *)
                               ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                             0x9d4c);
            if ((*piVar25 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
              ::FString::FString(&Bin0,L"Fixed Function");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin0__)
              ;
              _Init_thread_footer(&::_TSS0);
            }
            if ((*piVar25 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
              ::FString::FString(&Bin1,L"Fixed Function (TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin1__)
              ;
              _Init_thread_footer(&::_TSS1);
            }
            if ((*piVar25 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
              ::FString::FString(&Bin2,L"Fixed Function (Spline)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin2__)
              ;
              _Init_thread_footer(&::_TSS2);
            }
            if ((*piVar25 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
              ::FString::FString(&Bin4,L"Fixed Function (Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin4__)
              ;
              _Init_thread_footer(&::_TSS3);
            }
            if ((*piVar25 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
              ::FString::FString(&Bin8,L"Fixed Function (CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin8__)
              ;
              _Init_thread_footer(&::_TSS4);
            }
            if ((*piVar25 < ::_TSS5) && (_Init_thread_header(&::_TSS5), ::_TSS5 == -1)) {
              ::FString::FString(&Bin16,L"Fixed Function (Voxel)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin16__
                    );
              _Init_thread_footer(&::_TSS5);
            }
            if ((*piVar25 < ::_TSS6) && (_Init_thread_header(&::_TSS6), ::_TSS6 == -1)) {
              ::FString::FString(&Bin9,L"Fixed Function (TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin9__)
              ;
              _Init_thread_footer(&::_TSS6);
            }
            if ((*piVar25 < ::_TSS7) && (_Init_thread_header(&::_TSS7), ::_TSS7 == -1)) {
              ::FString::FString(&Bin3,L"Fixed Function (Spline | TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin3__)
              ;
              _Init_thread_footer(&::_TSS7);
            }
            if ((*piVar25 < ::_TSS8) && (_Init_thread_header(&::_TSS8), ::_TSS8 == -1)) {
              ::FString::FString(&Bin10,L"Fixed Function (Spline | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin10__
                    );
              _Init_thread_footer(&::_TSS8);
            }
            if ((*piVar25 < ::_TSS9) && (_Init_thread_header(&::_TSS9), ::_TSS9 == -1)) {
              ::FString::FString(&Bin11,L"Fixed Function (Spline | TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin11__
                    );
              _Init_thread_footer(&::_TSS9);
            }
            if ((*piVar25 < ::_TSS10) && (_Init_thread_header(&::_TSS10), ::_TSS10 == -1)) {
              ::FString::FString(&Bin5,L"Fixed Function (Skinned | TwoSided)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin5__)
              ;
              _Init_thread_footer(&::_TSS10);
            }
            if ((*piVar25 < ::_TSS11) && (_Init_thread_header(&::_TSS11), ::_TSS11 == -1)) {
              ::FString::FString(&Bin12,L"Fixed Function (Skinned | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin12__
                    );
              _Init_thread_footer(&::_TSS11);
            }
            if ((*piVar25 < ::_TSS12) && (_Init_thread_header(&::_TSS12), ::_TSS12 == -1)) {
              ::FString::FString(&Bin13,L"Fixed Function (Skinned | TwoSided | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin13__
                    );
              _Init_thread_footer(&::_TSS12);
            }
            if ((*piVar25 < ::_TSS13) && (_Init_thread_header(&::_TSS13), ::_TSS13 == -1)) {
              ::FString::FString(&Bin20,L"Fixed Function (Voxel | Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin20__
                    );
              _Init_thread_footer(&::_TSS13);
            }
            if ((*piVar25 < ::_TSS14) && (_Init_thread_header(&::_TSS14), ::_TSS14 == -1)) {
              ::FString::FString(&Bin24,L"Fixed Function (Voxel | CastShadow)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin24__
                    );
              _Init_thread_footer(&::_TSS14);
            }
            if ((*piVar25 < ::_TSS15) && (_Init_thread_header(&::_TSS15), ::_TSS15 == -1)) {
              ::FString::FString(&Bin28,L"Fixed Function (Voxel | CastShadow | Skinned)");
              atexit(`Nanite::GetRasterMaterialName'::__l12::_dynamic_atexit_destructor_for__Bin28__
                    );
              _Init_thread_footer(&::_TSS15);
            }
            switch(pFVar28->RasterBin) {
            case 1:
              pFVar26 = &Bin1;
              break;
            case 2:
              pFVar26 = &Bin2;
              break;
            case 3:
              pFVar26 = &Bin3;
              break;
            case 4:
              pFVar26 = &Bin4;
              break;
            case 5:
              pFVar26 = &Bin5;
              break;
            default:
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("false",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\Nanite\\NaniteCullRaster.cpp"
                                 ,0x991,L"");
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            case 0:
              pFVar26 = &Bin0;
              break;
            case 8:
              pFVar26 = &Bin8;
              break;
            case 9:
              pFVar26 = &Bin9;
              break;
            case 10:
              pFVar26 = &Bin10;
              break;
            case 0xb:
              pFVar26 = &Bin11;
              break;
            case 0xc:
              pFVar26 = &Bin12;
              break;
            case 0xd:
              pFVar26 = &Bin13;
              break;
            case 0x10:
              pFVar26 = &Bin16;
              break;
            case 0x14:
              pFVar26 = &Bin20;
              break;
            case 0x18:
              pFVar26 = &Bin24;
              break;
            case 0x1c:
              pFVar26 = &Bin28;
            }
          }
          if ((*(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x9d4c)
               < `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                 ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            local_88 = 0;
            uStack_84 = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._12_8_ = ZEXT48(uStack_8c);
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_._4_4_ = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)u_SWRaster;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)u__s;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc._padding_._0_4_ = 0xdf7;
            InitializeCriticalSectionAndSpinCount
                      ((LPCRITICAL_SECTION)
                       &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                        ::__l2::Desc.Cs,4000);
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.TraceGpuSpecId = 0;
            `public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
            ::__l2::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
            atexit(``Nanite::FRenderer::FDispatchContext::DispatchSW'::__l19::<lambda_2>::
                   operator()<FString_const_&>'::__l2::_dynamic_atexit_destructor_for__Desc__);
            _Init_thread_footer(&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          if (local_d8 != '\0') {
            FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_e8);
          }
          pFVar12 = FRHIComputeCommandList::GetBreadcrumbAllocator
                              ((FRHIComputeCommandList *)local_118);
          pFVar13 = FMemStackBase::Alloc(&pFVar12->Inner,0x150,8);
          pFVar13->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
          pFVar13->Parent = FRHIBreadcrumbNode::Sentinel;
          pFVar13->ListLink = (FRHIBreadcrumbNode *)0x0;
          (pFVar13->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
          (pFVar13->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
          pFVar13->Allocator = pFVar12;
          pFVar13->Data =
               (FRHIBreadcrumbData *)
               &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                ::__l2::Desc;
          pFVar13->TraceCpuSpecId = 0;
          pFVar13->TraceCpuMetadataId = 0;
          LOCK();
          UNLOCK();
          uVar10 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
          FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
          pFVar13->BeginPipes = (atomic<unsigned_char>)0x0;
          pFVar13->EndPipes = (atomic<unsigned_char>)0x0;
          pFVar13->ID = uVar10;
          if ((pFVar26->Data).ArrayNum == 0) {
            _Source = L"";
          }
          else {
            _Source = (wchar_t *)(pFVar26->Data).AllocatorInstance.Data;
          }
          wcsncpy((wchar_t *)(pFVar13 + 1),_Source,0x7f);
          *(undefined2 *)((longlong)pFVar13[4].NextPtrs.Elements + 0xe) = 0;
          pFVar13->_padding_ =
               (longlong)
               &
               ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__02VFString___Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
          ;
          pFVar13[4].Allocator =
               (FRHIBreadcrumbAllocator *)
               &`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                ::__l2::Desc;
          uVar10 = UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<3,FString>::GetTraceCpuSpec
                             (&`public:_UNKNOWN___cdecl_`public:_void___cdecl_Nanite::FRenderer::FDispatchContext::DispatchSW(FRHIComputeCommandList&___ptr64,Nanite::FRenderer::FDispatchContext::FDispatchList_const&___ptr64,FViewInfo_const&___ptr64,int,FRasterizePassParameters,bool)const___ptr64'::`19'::<lambda_2>::operator()<FString_const&___ptr64>(FString_const&___ptr64)const___ptr64'
                               ::__l2::Desc);
          pFVar13->TraceCpuSpecId = uVar10;
          if (uVar10 != 0) {
            UE::RHI::GPUProfiler::FMetadataSerializer::FMetadataSerializer(&local_b8);
            UE::RHI::GPUProfiler::FMetadataSerializer::AppendValue
                      (&local_b8,(wchar_t *)(pFVar13 + 1));
            uVar10 = FCpuProfilerTrace::OutputMetadata(pFVar13->TraceCpuSpecId,&local_b8.CborData);
            pFVar13->TraceCpuMetadataId = uVar10;
            UE::RHI::GPUProfiler::FMetadataSerializer::~FMetadataSerializer(&local_b8);
          }
          param_1 = (FRHIComputeCommandList *)local_118;
          FRHIBreadcrumbScope::FRHIBreadcrumbScope
                    (&local_e8,(FRHIComputeCommandList *)local_118,pFVar13);
          local_d8 = '\x01';
        }
        this_01 = &pFVar28->PatchComputeShader;
        (pFVar27->PassData).field0_0x0._s_0.X = pFVar28->RasterBin;
        *(undefined8 *)((longlong)&(pFVar27->PassData).field0_0x0 + 4) = 0;
        (pFVar27->PassData).field0_0x0._s_0.W = 0;
        if (param_6 == false) {
          this_01 = &pFVar28->ClusterComputeShader;
        }
        if ((*(longlong *)&pFVar27->IndirectArgs == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Buffer",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                               ,0x183,L""), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        this_00 = *(FRDGResource **)&pFVar27->IndirectArgs;
        if ((((ulonglong)this_00[4].Name & 0x80) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Desc.Usage & EBufferUsageFlags::DrawIndirect",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphResources.h"
                               ,0x53c,L"Buffer %s was not flagged for indirect draw usage."), bVar8)
           ) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FRDGResource::ValidateRHIAccess(this_00);
        pFVar2 = this_00->ResourceRHI;
        pFVar14 = (FRHIComputeShader *)
                  TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                            (this_01,SF_Compute,true);
        uVar10 = pFVar28->IndirectOffset;
        lVar6 = pFVar2[9]._padding_;
        if (((uVar10 & 3) != 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(IndirectArgOffset % 4) == 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                               ,0x1b9,
                               L"IndirectArgOffset for compute shader indirect dispatch needs to be a multiple of 4."
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if (((uint)lVar6 < uVar10 + 0xc) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(IndirectArgOffset + IndirectArgsSize) <= IndirectArgsBufferSize",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                               ,0x1bd,
                               L"Indirect parameters buffer for compute shader indirect dispatch at byte offset %d doesn\'t have enough room for one element."
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        SetComputePipelineState(param_1,pFVar14);
        EVar11 = PipelineStateCache::CheckPipelineStateInCache(pFVar14);
        PSOCollectorStats::CheckComputePipelineStateInCache
                  (pFVar14,EVar11,pFVar28->ComputeMaterialProxy,param_4);
        pFVar27 = local_108;
        if (GRHIGlobals.SupportsShaderRootConstants != false) {
          if ((GRHICommandList.bLatchedBypass == false) ||
             ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
            pFVar16 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
            ((FRHICommandListBase *)param_1)->NumCommands =
                 ((FRHICommandListBase *)param_1)->NumCommands + 1;
            *((FRHICommandListBase *)param_1)->CommandLink = pFVar16;
            lVar6 = *(longlong *)&(pFVar27->PassData).field0_0x0;
            pFVar19 = *(FRHICommandBase **)((longlong)&(pFVar27->PassData).field0_0x0 + 8);
            ((FRHICommandListBase *)param_1)->CommandLink = &pFVar16->Next;
            pFVar16->Next = (FRHICommandBase *)0x0;
            pFVar16->_padding_ = (longlong)&___7FRHICommandSetShaderRootConstants__6B_;
            pFVar16[1]._padding_ = lVar6;
            pFVar16[1].Next = pFVar19;
          }
          else {
            pIVar15 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
            (**(code **)(pIVar15->_padding_ + 0x68))(pIVar15,&pFVar27->PassData);
          }
        }
        pFVar3 = local_100->ComputeMaterial;
        pFVar17 = (FRHIComputeShader *)
                  TShaderRefBase<FMicropolyRasterizeCS,FShaderMapPointerTable>::GetRHIShaderBase
                            (this_01,SF_Compute,true);
        pFVar18 = FRHICommandListBase::GetScratchShaderParameters(local_118);
        SetBatchedShaderParametersMixed<FMicropolyRasterizeCS,FViewInfo_const_&,FMaterialRenderProxy_const_*_const_&,FMaterial_const_&>
                  (pFVar18,this_01,local_108,local_d0,&pFVar28->ComputeMaterialProxy,pFVar3);
        param_1 = (FRHIComputeCommandList *)local_118;
        FRHIComputeCommandList::SetBatchedShaderParameters
                  ((FRHIComputeCommandList *)local_118,pFVar17,pFVar18);
        uVar10 = local_100->IndirectOffset;
        if ((GRHICommandList.bLatchedBypass == false) ||
           ((((FRHICommandListBase *)param_1)->PersistentState).bImmediate == '\0')) {
          pFVar19 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x20,8);
          ((FRHICommandListBase *)param_1)->NumCommands =
               ((FRHICommandListBase *)param_1)->NumCommands + 1;
          *((FRHICommandListBase *)param_1)->CommandLink = pFVar19;
          ((FRHICommandListBase *)param_1)->CommandLink = &pFVar19->Next;
          pFVar19->Next = (FRHICommandBase *)0x0;
          pFVar19->_padding_ = (longlong)&___7FRHICommandDispatchIndirectComputeShader__6B_;
          pFVar19[1]._padding_ = (longlong)pFVar2;
          *(uint *)&pFVar19[1].Next = uVar10;
        }
        else {
          pIVar15 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
          (**(code **)(pIVar15->_padding_ + 0x30))(pIVar15,pFVar2,uVar10);
        }
        if (GRHIGlobals.NeedsShaderUnbinds != false) {
          pFVar20 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
          pFVar4 = this_01->ShaderContent;
          if ((*(ushort *)&pFVar4->field_0x54 != 0xffff) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                 ,
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                 ,0xb3,
                                 L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
             bVar8)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          UnsetShaderUAVs(pFVar20,(FShaderParameterBindings *)pFVar4);
          FRHIComputeCommandList::SetBatchedShaderUnbinds(param_1,pFVar14,pFVar20);
        }
        if (local_d8 != '\0') {
          FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_e8);
        }
        puVar24 = local_f8 + 1;
        uVar23 = (ulonglong)local_110;
        this = local_c8;
        pFVar27 = local_108;
        param_2 = local_c0;
        cVar29 = local_126;
      }
    }
    else {
      local_78[0] = (code *)0x0;
      local_50 = FMemory::Malloc(0x50,8);
      *local_50 = (code *)&
                          ___7__TFunction_OwnedObject_V<lambda_1>__7__DispatchSW_FDispatchContext_FRenderer_Nanite__QEBAXAEAVFRHIComputeCommandList__AEBUFDispatchList_345_AEBVFViewInfo__HVFRasterizePassParameters___N_Z__0A__00_Function_Private_Core_UE__6B_
      ;
      local_50[1] = (code *)&local_120;
      local_50[2] = (code *)&local_128;
      local_50[3] = (code *)pFVar27;
      local_50[4] = (code *)param_1;
      local_50[5] = (code *)param_2;
      local_50[6] = (code *)this;
      local_50[7] = (code *)&param_6;
      local_50[8] = (code *)param_3;
      local_50[9] = (code *)&param_4;
      if (local_50 + 1 != (code **)0x0) {
        local_78[0] = UE::Core::Private::Function::
                      TFunctionRefCaller<`Nanite::FRenderer::FDispatchContext::DispatchSW'::__l8::<lambda_1>,void,FRHICommandDispatchComputeShaderBundle_&>
                      ::Call;
      }
      FRHIComputeCommandList::DispatchComputeShaderBundle
                (param_1,(TFunction<void___cdecl(FRHICommandDispatchComputeShaderBundle_&)> *)
                         local_78);
      if (local_78[0] != (code *)0x0) {
        ppcVar22 = local_78 + 2;
        if (local_50 != (code **)0x0) {
          ppcVar22 = local_50;
        }
        (**(code **)(*ppcVar22 + 0x10))();
      }
    }
  }
  if (local_120 != (FRHIShaderBundle *)0x0) {
    FRHIResource::Release((FRHIResource *)local_120);
  }
  return;
}

