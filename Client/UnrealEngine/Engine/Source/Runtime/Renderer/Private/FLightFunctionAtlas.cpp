// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 19

// FLightFunctionAtlas @ 144b97eb0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FLightFunctionAtlas * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::FLightFunctionAtlas(FLightFunctionAtlas *this)

{
  int *piVar1;
  
  this->bLightFunctionAtlasEnabled = false;
  this->_padding_ = (longlong)&___7FLightFunctionAtlas_LightFunctionAtlas__6B_;
  (this->RegisteredLights).ArrayMax = 0;
  piVar1 = &(this->RegisteredLights).ArrayMax;
  (this->RegisteredLights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredLights).ArrayNum = 0;
  *(undefined8 *)&(this->LightFunctionsSet).Elements = 0;
  *(undefined8 *)&(this->LightFunctionsSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->LightFunctionsSet).Elements.field_0x20 = 0;
  this->RDGAtlasTexture2D = (FRDGTexture *)0x0;
  this->RDGLightInfoDataBuffer = (FRDGBuffer *)0x0;
  *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x34 = 0;
  (this->LightFunctionsSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->LightFunctionsSet).HashSize = 0;
  (this->EffectiveLightFunctionSlotArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveLightFunctionSlotArray).ArrayNum = 0;
  (this->EffectiveLightFunctionSlotArray).ArrayMax = 0;
  (this->EffectiveLocalLightSlotArray).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EffectiveLocalLightSlotArray).ArrayNum = 0;
  (this->EffectiveLocalLightSlotArray).ArrayMax = 0;
  this->DefaultLightFunctionAtlasGlobalParameters = (FLightFunctionAtlasGlobalParameters *)0x0;
  (this->ViewLightFunctionAtlasGlobalParametersArray).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum = 0;
  (this->ViewLightFunctionAtlasGlobalParametersArray).ArrayMax = 0;
  (this->ViewLightFunctionAtlasGlobalParametersUBArray).AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum = 0;
  (this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax = 0;
  this->LightCountSkippedDueToMissingAtlasSlot = 0;
  *(undefined8 *)&(this->SkippedLightFunctionsSet).Elements = 0;
  *(undefined8 *)&(this->SkippedLightFunctionsSet).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->SkippedLightFunctionsSet).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x34 = 0;
  (this->SkippedLightFunctionsSet).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->SkippedLightFunctionsSet).HashSize = 0;
  (this->AtlasSetup).EdgeSize = 2;
  (this->AtlasSetup).SlotResolution = 0x20;
  if (*piVar1 < 0x40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x40,&(this->RegisteredLights).AllocatorInstance,
               (this->RegisteredLights).ArrayNum,piVar1);
  }
  return this;
}

// ~FLightFunctionAtlas @ 144b99470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::~FLightFunctionAtlas(FLightFunctionAtlas *this)

{
  ForElementType<FSetElementId> FVar1;
  FScriptContainerElement *pFVar2;
  
  (this->SkippedLightFunctionsSet).HashSize = 0;
  this->_padding_ = (longlong)&___7FLightFunctionAtlas_LightFunctionAtlas__6B_;
  FVar1 = (this->SkippedLightFunctionsSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<LightFunctionAtlas::FLightFunctionSlotKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<LightFunctionAtlas::FLightFunctionSlotKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SkippedLightFunctionsSet).Elements);
  pFVar2 = (this->ViewLightFunctionAtlasGlobalParametersUBArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ViewLightFunctionAtlasGlobalParametersArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EffectiveLocalLightSlotArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->EffectiveLightFunctionSlotArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  (this->LightFunctionsSet).HashSize = 0;
  FVar1 = (this->LightFunctionsSet).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<LightFunctionAtlas::FLightFunctionSlotKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<LightFunctionAtlas::FLightFunctionSlotKey>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LightFunctionsSet).Elements);
  pFVar2 = (this->RegisteredLights).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// operator() @ 144b9bae0

uint __thiscall
`LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots'::__l2::<lambda_1>::operator()
          (void *this,FLightFunctionSlotKey param_1,FMaterialRenderProxy *param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  FLightFunctionSlotKey local_res8;
  FLightFunctionSlotKey local_res10;
  undefined8 local_res18;
  
  local_res10 = param_1;
  if (**(uint **)((longlong)this + 8) <=
      (uint)(*(int *)(*(longlong *)this + 0x38) - *(int *)(*(longlong *)this + 100))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("uint32(LightFunctionsSet.Num()) < AtlasMaxLightFunctionCount",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                       ,0x1a9,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return uVar4;
    }
  }
  uVar4 = *(uint *)(*(longlong *)this + 0x88);
  local_res10.EffectiveLightFunctionSlotIndex = uVar4;
  TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
  ::Emplace<LightFunctionAtlas::FLightFunctionSlotKey_const_&>
            ((TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
              *)(*(longlong *)this + 0x30),&local_res8,(bool *)&local_res10);
  lVar7 = *(longlong *)this;
  iVar5 = *(int *)(lVar7 + 0x88);
  if (iVar5 == *(int *)(lVar7 + 0x8c)) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x820,(ForAnyElementType *)(lVar7 + 0x80),(int *)(lVar7 + 0x8c));
  }
  lVar1 = *(longlong *)(lVar7 + 0x80);
  *(int *)(lVar7 + 0x88) = iVar5 + 1;
  lVar7 = (longlong)iVar5 * 0x20;
  *(undefined8 *)(lVar7 + 8 + lVar1) = 0;
  *(undefined8 *)(lVar7 + 0x10 + lVar1) = 0;
  *(undefined8 *)(lVar7 + 0x18 + lVar1) = 0;
  *(undefined8 *)(lVar7 + lVar1) = 0;
  iVar6 = **(int **)((longlong)this + 0x18) * **(int **)((longlong)this + 0x10);
  iVar5 = **(int **)((longlong)this + 0x18) * **(int **)((longlong)this + 0x20);
  *(ulonglong *)(lVar7 + 8 + lVar1) = CONCAT44(iVar5,iVar6);
  fVar8 = (float)iVar6 + __real_3f000000;
  local_res18 = CONCAT44(iVar5 + **(int **)((longlong)this + 0x18),
                         **(int **)((longlong)this + 0x18) + iVar6);
  *(undefined8 *)(lVar7 + 0x10 + lVar1) = local_res18;
  *(float *)(lVar7 + 0x18 + lVar1) = fVar8 / **(float **)((longlong)this + 0x28);
  fVar9 = (float)iVar5 + __real_3f000000;
  fVar8 = **(float **)((longlong)this + 0x28);
  *(FMaterialRenderProxy **)(lVar7 + lVar1) = param_2;
  *(float *)(lVar7 + 0x1c + lVar1) = fVar9 / fVar8;
  **(int **)((longlong)this + 0x10) = **(int **)((longlong)this + 0x10) + 1;
  if ((float)**(uint **)((longlong)this + 0x10) == **(float **)((longlong)this + 0x30)) {
    **(uint **)((longlong)this + 0x10) = 0;
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
  }
  return uVar4;
}

// operator() @ 144b9ee10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */

void __thiscall
`LightFunctionAtlas::FLightFunctionAtlas::RenderAtlasSlots'::__l2::<lambda_2>::operator()
          (void *this,FRDGAsyncTask param_1,FRHICommandList *param_2)

{
  longlong *plVar1;
  FGlobalShaderMap *this_00;
  FShaderMapResource *pFVar2;
  code *pcVar3;
  TIntPoint<int> TVar4;
  TIntPoint<int> TVar5;
  float fVar6;
  float fVar7;
  FLightFunctionAtlasSlotPS *pFVar8;
  FShaderMapBase *pFVar9;
  FShader *this_01;
  FShaderMapBase *pFVar10;
  undefined8 uVar11;
  bool bVar12;
  ulonglong uVar13;
  FMaterial *pFVar14;
  IRHICommandContext *pIVar15;
  undefined8 *puVar16;
  longlong lVar17;
  ETextureCreateFlags *pEVar18;
  atomic<FRHIShader_*> aVar19;
  FShaderType *pFVar20;
  FName this_02;
  FMaterialShaderType *pFVar21;
  atomic<FRHIShader_*> this_03;
  atomic<FRHIShader_*> aVar22;
  FShaderParametersMetadata *pFVar23;
  FRHIPixelShader *pFVar24;
  FRHIBatchedShaderParameters *pFVar25;
  ulonglong uVar26;
  uint uVar27;
  undefined8 *puVar28;
  FSceneView *pFVar29;
  ulonglong uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined1 auStackY_318 [32];
  undefined1 local_2a8 [4];
  uint local_2a4;
  TShaderRefBase<LightFunctionAtlas::FLightFunctionAtlasSlotPS,FShaderMapPointerTable> local_298;
  FSceneView *local_288;
  uint local_280;
  undefined8 *local_278;
  float local_270;
  float fStack_26c;
  FMaterialRenderProxy *local_268;
  FMaterialRenderProxy *local_260;
  uint local_258;
  uint uStack_254;
  undefined4 local_250;
  undefined4 uStack_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  undefined8 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  ulonglong local_218;
  undefined8 *local_210;
  longlong local_208;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_200 [2];
  EUniformBufferBindingFlags EStack_1e0;
  undefined7 uStack_1df;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1d8;
  undefined1 local_1c8 [16];
  FString local_1b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1a8;
  initializer_list<FRDGResource_*> local_198;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_188;
  FGraphicsPipelineStateInitializer local_178;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_318;
  plVar1 = *(longlong **)((longlong)this + 8);
  local_2a4 = *(uint *)(*(longlong *)((longlong)this + 0x10) + 300);
  uVar13 = (ulonglong)local_2a4;
  uVar30 = (ulonglong)
           ((float)*(uint *)(*(longlong *)((longlong)this + 0x10) + 0x128) * (float)uVar13);
  local_218 = uVar30;
  if (((int)plVar1[1] < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  fVar7 = __real_3f000000;
  fVar6 = __real_3f800000;
  pFVar29 = (FSceneView *)*plVar1;
  local_208 = *(longlong *)((longlong)this + 0x10);
  local_280 = *(uint *)(local_208 + 0x88);
  uVar26 = (ulonglong)(int)local_280;
  puVar16 = *(undefined8 **)(local_208 + 0x80);
  puVar28 = puVar16 + uVar26 * 4;
  local_288 = pFVar29;
  local_210 = puVar28;
  do {
    local_278 = puVar16;
    if (*(int *)(local_208 + 0x88) != (int)uVar26) {
      local_2a8[0] = 0;
      `TCheckedPointerIterator<LightFunctionAtlas::FLightFunctionAtlas::EffectiveLightFunctionSlot,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_2a8);
    }
    if (puVar16 == puVar28) {
      return;
    }
    local_268 = (FMaterialRenderProxy *)*puVar16;
    if (local_268 != (FMaterialRenderProxy *)0x0) {
      pFVar14 = FMaterialRenderProxy::GetMaterialWithFallback
                          (local_268,pFVar29->FeatureLevel,&local_268);
      if ((GRHICommandList.bLatchedBypass == false) || ((param_2->field_0x29b & 0x20) == 0)) {
        puVar16 = FMemStackBase::Alloc((FMemStackBase *)param_2,0x28,8);
        *(int *)&param_2->field_0x60 = *(int *)&param_2->field_0x60 + 1;
        **(undefined8 **)&param_2->field_0x30 = puVar16;
        *(undefined8 **)&param_2->field_0x30 = puVar16 + 1;
        puVar16[1] = 0;
        *puVar16 = &___7FRHICommandSetViewport__6B_;
        *(float *)((longlong)puVar16 + 0x1c) = (float)(uVar30 & 0xffffffff);
        *(float *)(puVar16 + 4) = (float)(uVar30 & 0xffffffff);
        puVar16[2] = 0;
        *(undefined4 *)(puVar16 + 3) = 0;
        *(undefined4 *)((longlong)puVar16 + 0x24) = 0x3f800000;
      }
      else {
        pIVar15 = FRHICommandListBase::GetContext((FRHICommandListBase *)param_2);
        (**(code **)(pIVar15->_padding_ + 0x1a0))(pIVar15);
      }
      uVar30 = 0;
      local_178.RenderTargetsEnabled = *(uint *)&param_2->field_0x1c0;
      local_178.BoundShaderState.VertexDeclarationRHI = (FRHIVertexDeclaration *)0x0;
      local_178.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)0x0;
      local_178.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)0x0;
      local_178.BoundShaderState.MeshShaderRHI = (FRHIMeshShader *)0x0;
      local_178.BoundShaderState.AmplificationShaderRHI = (FRHIAmplificationShader *)0x0;
      local_178.BoundShaderState.GeometryShaderRHI = (FRHIGeometryShader *)0x0;
      local_178.BoundShaderState.WorkGraphMeshShaderRHI = (FRHIWorkGraphShader *)0x0;
      local_178.BlendState = (FRHIBlendState *)0x0;
      local_178.RasterizerState = (FRHIRasterizerState *)0x0;
      local_178.DepthStencilState = (FRHIDepthStencilState *)0x0;
      local_178.ImmutableSamplerState.ImmutableSamplers.Elements[0] = (FRHISamplerState *)0x0;
      local_178.ImmutableSamplerState.ImmutableSamplers.Elements[1] = (FRHISamplerState *)0x0;
      local_178.RenderTargetFlags.Elements[0] = None;
      local_178.RenderTargetFlags.Elements[1] = None;
      local_178.RenderTargetFlags.Elements[2] = None;
      local_178.RenderTargetFlags.Elements[3] = None;
      local_178.RenderTargetFlags.Elements[4] = None;
      local_178.RenderTargetFlags.Elements[5] = None;
      local_178.RenderTargetFlags.Elements[6] = None;
      local_178.RenderTargetFlags.Elements[7] = None;
      local_178.RenderTargetFormats.Elements[0] = '\0';
      local_178.RenderTargetFormats.Elements[1] = '\0';
      local_178.RenderTargetFormats.Elements[2] = '\0';
      local_178.RenderTargetFormats.Elements[3] = '\0';
      local_178.RenderTargetFormats.Elements[4] = '\0';
      local_178.RenderTargetFormats.Elements[5] = '\0';
      local_178.RenderTargetFormats.Elements[6] = '\0';
      local_178.RenderTargetFormats.Elements[7] = '\0';
      local_178.DepthStencilTargetFormat = PF_Unknown;
      local_178.DepthStencilTargetFlag = None;
      local_178.DepthTargetLoadAction = ENoAction;
      local_178.DepthTargetStoreAction = ENoAction;
      local_178.StencilTargetLoadAction = ENoAction;
      local_178.StencilTargetStoreAction = ENoAction;
      local_178.DepthStencilAccess.Value = DepthNop;
      local_178.NumSamples = 0;
      local_178.SubpassHint = None;
      local_178.SubpassIndex = '\0';
      local_178.ConservativeRasterization = Disabled;
      local_178.bDepthBounds = false;
      local_178.MultiViewCount = '\0';
      local_178.bHasFragmentDensityAttachment = false;
      local_178.bAllowVariableRateShading = true;
      local_178.ShadingRate = VRSSR_1x1;
      local_178.field25_0xd2 = (FGraphicsPipelineStateInitializer_u_210)0x0;
      local_178.StatePrecachePSOHash = 0;
      if (local_178.RenderTargetsEnabled != 0) {
        do {
          if (*(longlong **)(&param_2->field_0x1c8 + uVar30 * 0x18) == (longlong *)0x0) {
            local_178.RenderTargetFormats.Elements[uVar30] = '\0';
          }
          else {
            lVar17 = (**(code **)(**(longlong **)(&param_2->field_0x1c8 + uVar30 * 0x18) + 0x20))();
            local_178.RenderTargetFormats.Elements[uVar30] = *(uchar *)(lVar17 + 0x33);
            pEVar18 = (ETextureCreateFlags *)
                      (**(code **)(**(longlong **)(&param_2->field_0x1c8 + uVar30 * 0x18) + 0x20))()
            ;
            local_178.RenderTargetFlags.Elements[uVar30] = *pEVar18;
          }
          if (local_178.RenderTargetFormats.Elements[uVar30] != '\0') {
            lVar17 = (**(code **)(**(longlong **)(&param_2->field_0x1c8 + uVar30 * 0x18) + 0x20))();
            local_178.NumSamples = (ushort)*(byte *)(lVar17 + 0x31);
          }
          uVar27 = (int)uVar30 + 1;
          uVar30 = (ulonglong)uVar27;
        } while (uVar27 < local_178.RenderTargetsEnabled);
      }
      if (*(longlong **)&param_2->field_0x288 == (longlong *)0x0) {
        local_178.DepthStencilTargetFormat = PF_Unknown;
      }
      else {
        lVar17 = (**(code **)(**(longlong **)&param_2->field_0x288 + 0x20))();
        local_178.DepthStencilTargetFormat = *(EPixelFormat *)(lVar17 + 0x33);
        pEVar18 = (ETextureCreateFlags *)
                  (**(code **)(**(longlong **)&param_2->field_0x288 + 0x20))();
        local_178.DepthStencilTargetFlag = *pEVar18;
      }
      local_178.DepthTargetLoadAction = param_2->field_0x290;
      local_178.DepthTargetStoreAction = param_2->field_0x291;
      local_178.StencilTargetLoadAction = param_2->field_0x292;
      local_178.StencilTargetStoreAction = param_2->field_0x293;
      local_178.DepthStencilAccess.Value = *(Type *)&param_2->field_0x294;
      if (local_178.DepthStencilTargetFormat != PF_Unknown) {
        lVar17 = (**(code **)(**(longlong **)&param_2->field_0x288 + 0x20))();
        local_178.NumSamples = (ushort)*(byte *)(lVar17 + 0x31);
      }
      uVar11 = local_178._200_8_;
      local_178.SubpassHint = param_2->field_0x298;
      local_178._204_4_ = SUB84(uVar11,4);
      local_178.SubpassIndex = param_2->field_0x299;
      local_178._200_7_ = CONCAT16(param_2->field_0x29a,local_178._200_6_);
      local_178.PrimitiveType = PT_TriangleList;
      local_178._200_8_ = CONCAT17(param_2->field_0x29b,local_178._200_7_) & 0x1ffffffffffffff;
      local_178.RasterizerState =
           TStaticStateRHI<TStaticRasterizerState<2,0,0,1>,TRefCountPtr<FRHIRasterizerState>,FRHIRasterizerState_*>
           ::StaticResource.StateRHI.Reference;
      local_178.BlendState =
           TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
           ::StaticResource.StateRHI.Reference;
      local_178.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<0,7,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      aVar19 = (atomic<FRHIShader_*>)FMaterial::GetRenderingThreadShaderMap(pFVar14);
      this_00 = (FGlobalShaderMap *)
                pFVar29[1].ViewMatrices.InvTranslatedViewProjectionMatrix.M[3][0];
      pFVar20 = (FShaderType *)FScreenPassVS::GetStaticType();
      FGlobalShaderMap::GetShader(this_00,local_200,pFVar20,0);
      if (local_200[0].ShaderContent == (FShader *)0x0) {
        this_02 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_1c8);
        ::FName::ToString((FName *)this_02,&local_1b8);
        FScreenPassVS::GetStaticType();
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
        }
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FScreenPassVS::GetStaticType();
      pFVar10 = local_200[0].ShaderMap;
      this_01 = local_200[0].ShaderContent;
      pFVar21 = LightFunctionAtlas::FLightFunctionAtlasSlotPS::GetStaticType();
      this_03 = (atomic<FRHIShader_*>)
                FShaderMapContent::GetShader
                          (*(FShaderMapContent **)((longlong)aVar19 + 0x28),
                           (FHashedName *)&pFVar21->field_0x28,0);
      aVar22 = (atomic<FRHIShader_*>)0x0;
      local_298.ShaderMap = (FShaderMapBase *)aVar19;
      if (this_03 == (atomic<FRHIShader_*>)0x0) {
        this_03 = aVar22;
        local_298.ShaderMap = (FShaderMapBase *)aVar22;
      }
      local_178.BoundShaderState.VertexDeclarationRHI =
           (FRHIVertexDeclaration *)GFilterVertexDeclaration._32_8_;
      aVar19 = aVar22;
      local_298.ShaderContent = (FLightFunctionAtlasSlotPS *)this_03;
      if (this_01 != (FShader *)0x0) {
        pFVar2 = (pFVar10->Resource).Reference;
        if ((pFVar2 == (FShaderMapResource *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar19 = (pFVar2->RHIShaders).Ptr[this_01->ResourceIndex];
        if ((aVar19 == (atomic<FRHIShader_*>)0x0) &&
           (aVar19 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash(pFVar2,this_01->ResourceIndex,true),
           aVar19 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            if ((pFVar10->PointerTable == (FShaderMapPointerTable *)0x0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FShader::GetType(this_01,pFVar10->PointerTable);
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<FScreenPassVS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar19 = (atomic<FRHIShader_*>)0x0;
        }
      }
      local_178.BoundShaderState.VertexShaderRHI = (FRHIVertexShader *)aVar19;
      if (this_03 != (atomic<FRHIShader_*>)0x0) {
        pFVar2 = *(FShaderMapResource **)((longlong)local_298.ShaderMap + 8);
        if ((pFVar2 == (FShaderMapResource *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("Resource",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                ,0x426,L""), bVar12)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        aVar22 = (pFVar2->RHIShaders).Ptr[*(int *)((longlong)this_03 + 0xd4)];
        if ((aVar22 == (atomic<FRHIShader_*>)0x0) &&
           (aVar22 = (atomic<FRHIShader_*>)
                     FShaderMapResource::CreateShaderOrCrash
                               (pFVar2,*(int *)((longlong)this_03 + 0xd4),true),
           pFVar9 = local_298.ShaderMap, aVar22 == (atomic<FRHIShader_*>)0x0)) {
          if (4 < (byte)LogShaders._0_1_) {
            if ((*(longlong *)((longlong)local_298.ShaderMap + 0x18) == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("PointerTable",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\Shader.h"
                                    ,0x9b4,L""), bVar12)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            FShader::GetType((FShader *)this_03,
                             *(FShaderMapPointerTable **)((longlong)pFVar9 + 0x18));
            UE::Logging::Private::BasicLog<5>
                      ((FStaticBasicLogRecord *)
                       &`public:_class_FRHIShader*___ptr64___cdecl_TShaderRefBase<LightFunctionAtlas::FLightFunctionAtlasSlotPS,FShaderMapPointerTable>::GetRHIShaderBase(EShaderFrequency,bool)const___ptr64'
                        ::__l10::LOG_Static,(FLogCategoryBase *)&LogShaders);
          }
          aVar22 = (atomic<FRHIShader_*>)0x0;
        }
      }
      local_178.BoundShaderState.PixelShaderRHI = (FRHIPixelShader *)aVar22;
      SetGraphicsPipelineState(param_2,&local_178,0,CheckApply,true);
      local_270 = fVar6 / (float)uVar13;
      local_228 = 0;
      uStack_220 = CONCAT71(uStack_220._1_7_,1);
      local_248 = fVar6 / (float)(local_2a4 - 1);
      local_238 = CONCAT44(local_270,local_270);
      local_23c = (float)*(int *)((longlong)local_278 + 0xc) + fVar7;
      local_240 = (float)*(int *)(local_278 + 1) + fVar7;
      fStack_26c = local_270;
      local_244 = local_248;
      if ((GIdentityPrimitiveUniformBuffer._40_8_ == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("UniformBufferRHI.GetReference()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\UniformBuffer.h"
                              ,0x6c,L""), bVar12)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar23 = FPrimitiveUniformShaderParameters::GetStructMetadata();
      local_200[1].ShaderMap = (FShaderMapBase *)GIdentityPrimitiveUniformBuffer._40_8_;
      EStack_1e0 = Static;
      if (pFVar23->BindingFlags != StaticAndShader) {
        EStack_1e0 = pFVar23->BindingFlags;
      }
      uStack_220 = CONCAT71(uStack_1df,EStack_1e0);
      local_228 = GIdentityPrimitiveUniformBuffer._40_8_;
      pFVar23 = LightFunctionAtlas::FLightFunctionAtlasSlotPS::FParameters::FTypeInfo::
                GetStructMetadata();
      pFVar9 = local_298.ShaderMap;
      pFVar8 = local_298.ShaderContent;
      local_1a8.ShaderContent = (FShader *)local_298.ShaderContent;
      local_1a8.ShaderMap = local_298.ShaderMap;
      ValidateShaderParameters(&local_1a8,pFVar23,&local_248);
      local_198._First = (FRDGResource **)0x0;
      local_198._Last = (FRDGResource **)0x0;
      ClearUnusedGraphResourcesImpl
                ((FShaderParameterBindings *)this_03,pFVar23,&local_248,&local_198);
      pFVar24 = TShaderRefBase<LightFunctionAtlas::FLightFunctionAtlasSlotPS,FShaderMapPointerTable>
                ::GetPixelShader(&local_298,true);
      pFVar25 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_2);
      pFVar23 = LightFunctionAtlas::FLightFunctionAtlasSlotPS::FParameters::FTypeInfo::
                GetStructMetadata();
      local_188.ShaderContent = (FShader *)pFVar8;
      local_188.ShaderMap = pFVar9;
      ValidateShaderParameters(&local_188,pFVar23,&local_248);
      switch(*(byte *)((longlong)this_03 + 0xd0) & 0xf) {
      default:
        ::SetShaderParameters(pFVar25,(FShaderParameterBindings *)this_03,pFVar23,&local_248);
        break;
      case 6:
      case 7:
      case 8:
      case 9:
        SetRayTracingShaderParameters
                  (pFVar25,(FShaderParameterBindings *)this_03,pFVar23,&local_248);
      }
      local_260 = local_268;
      pFVar14 = FMaterialRenderProxy::GetMaterialWithFallback
                          (local_268,local_288->FeatureLevel,&local_260);
      FMaterialShader::SetViewParameters
                ((FMaterialShader *)this_03,pFVar25,local_288,&local_288->ViewUniformBuffer);
      FMaterialShader::SetParameters((FMaterialShader *)this_03,pFVar25,local_260,pFVar14,local_288)
      ;
      FRHICommandList::SetBatchedShaderParameters(param_2,(FRHIGraphicsShader *)pFVar24,pFVar25);
      uVar30 = local_218;
      puVar16 = local_278;
      local_258 = local_2a4;
      uStack_254 = local_2a4;
      fVar31 = (float)(*(int *)((longlong)local_278 + 0x14) - *(int *)((longlong)local_278 + 0xc));
      local_250 = (undefined4)local_218;
      local_1d8.ShaderContent = this_01;
      local_1d8.ShaderMap = pFVar10;
      TVar4.field0_0x0._s_0.Y = local_2a4;
      TVar4.field0_0x0._s_0.X = local_2a4;
      TVar5.field0_0x0._s_0.Y = local_250;
      TVar5.field0_0x0._s_0.X = local_250;
      fVar34 = (float)(*(int *)(local_278 + 2) - *(int *)(local_278 + 1));
      fVar33 = (float)*(int *)((longlong)local_278 + 0xc);
      fVar32 = (float)*(int *)(local_278 + 1);
      uStack_24c = local_250;
      DrawRectangle(param_2,fVar32,fVar33,fVar34,fVar31,fVar32,fVar33,fVar34,fVar31,TVar5,TVar4,
                    &local_1d8,EDRF_Default,1);
      puVar28 = local_210;
      pFVar29 = local_288;
    }
    puVar16 = puVar16 + 4;
    uVar26 = (ulonglong)local_280;
  } while( true );
}

// AddDebugVisualizationPasses @ 144ba8b80

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FScreenPassTexture * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::AddDebugVisualizationPasses
          (FLightFunctionAtlas *this,FScreenPassTexture *__return_storage_ptr__,FRDGBuilder *param_1
          ,FViewInfo *param_2,FScreenPassTexture *param_3)

{
  __return_storage_ptr__->Texture = param_3->Texture;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_3->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (__return_storage_ptr__->ViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_3->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  return __return_storage_ptr__;
}

// AllocateAtlasSlots @ 144ba9a30

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots
          (FLightFunctionAtlas *this,TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<LightFunctionAtlas::FLightFunctionAtlas::EffectiveLocalLightSlot,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double dVar3;
  FScriptContainerElement FVar4;
  FMaterialRenderProxy *this_00;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TConsoleVariableData<int> *pTVar10;
  FSortedRegisteredLights *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FMaterial *this_01;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  int *piVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  FIdentityFunctor local_res10 [8];
  undefined1 local_res18 [8];
  uint local_res20 [2];
  ForAnyElementType local_158;
  undefined8 local_150;
  int local_148;
  float local_144;
  uint local_140;
  FSortedRegisteredLights local_13c;
  FSortedRegisteredLights local_134;
  FLightFunctionSlotKey local_128;
  undefined4 local_120;
  uint local_11c [2];
  float local_114;
  Type local_110;
  uint local_10c;
  undefined4 local_108;
  undefined1 local_104 [12];
  FSortedRegisteredLights *local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  FLightFunctionAtlas *local_d8;
  uint *local_d0;
  undefined4 *local_c8;
  uint *local_c0;
  uint *local_b8;
  float *local_b0;
  float *local_a8;
  double local_98;
  double dStack_90;
  double local_88;
  undefined8 uStack_80;
  
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar26 = (this->RegisteredLights).ArrayNum;
    uVar15 = param_1->ArrayNum;
    local_110 = *(Type *)((param_1->AllocatorInstance).Data + 0x1bf8);
    local_158.Data = (FScriptContainerElement *)0x0;
    local_150 = 0;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if (0 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar26,&local_158,0,(int *)((longlong)&local_150 + 4));
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar17 = (param_1->AllocatorInstance).Data;
    uVar26 = 0;
    local_148 = 1;
    dVar8 = *(double *)(pFVar17 + 0xbc8);
    dVar9 = *(double *)(pFVar17 + 0xbd0);
    dVar3 = *(double *)(pFVar17 + 0xbd8);
    local_140 = (this->RegisteredLights).ArrayNum;
    local_f0 = dVar8;
    dStack_e8 = dVar9;
    local_e0 = dVar3;
    if (local_140 != 0) {
      do {
        uVar25 = 0;
        if ((int)uVar26 < (this->RegisteredLights).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar22 = *(longlong *)
                  (*(longlong *)
                    ((this->RegisteredLights).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) +
                  0x28);
        if (*(char *)(lVar22 + 0x1f0) == '\0') {
          local_13c.MinDistanceToViews = 0.0;
          local_13c.RegisteredLightIndex = uVar26;
          if (((local_158.Data <= &local_13c) &&
              (&local_13c <
               (FSortedRegisteredLights *)(local_158.Data + (longlong)local_150._4_4_ * 8))) &&
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
          if ((uint)local_150 == local_150._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_158,(int *)((longlong)&local_150 + 4));
            local_150 = CONCAT44(local_150._4_4_,iVar13);
          }
          uVar19 = CONCAT44(local_13c.RegisteredLightIndex,local_13c.MinDistanceToViews);
        }
        else {
          local_98 = *(double *)(lVar22 + 0x20);
          dStack_90 = *(double *)(lVar22 + 0x28);
          local_88 = *(double *)(lVar22 + 0x30);
          uStack_80 = *(undefined8 *)(lVar22 + 0x38);
          fVar31 = (float)((dVar9 - dStack_90) * (dVar9 - dStack_90) +
                           (dVar8 - local_98) * (dVar8 - local_98) +
                          (dVar3 - local_88) * (dVar3 - local_88));
          uVar25 = 1;
          if (1 < uVar15) {
            do {
              uVar14 = 0;
              if ((int)uVar25 < param_1->ArrayNum) {
                uVar14 = ~uVar25 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar18 = (longlong)(int)uVar25;
              uVar25 = uVar25 + 1;
              pFVar17 = (param_1->AllocatorInstance).Data;
              dVar29 = *(double *)(pFVar17 + lVar18 * 0x2970 + 0xbd8) - *(double *)(lVar22 + 0x30);
              pFVar17 = pFVar17 + lVar18 * 0x2970 + 0xbc8;
              dVar28 = *(double *)pFVar17 - *(double *)(lVar22 + 0x20);
              dVar30 = *(double *)(pFVar17 + 8) - *(double *)(lVar22 + 0x28);
              dVar28 = dVar30 * dVar30 + dVar28 * dVar28 + dVar29 * dVar29;
              if ((double)fVar31 <= dVar28) {
                dVar28 = (double)fVar31;
              }
              fVar31 = (float)dVar28;
            } while (uVar25 < uVar15);
          }
          local_134.MinDistanceToViews = fVar31;
          local_134.RegisteredLightIndex = uVar26;
          if (((local_158.Data <= &local_134) &&
              (&local_134 <
               (FSortedRegisteredLights *)(local_158.Data + (longlong)local_150._4_4_ * 8))) &&
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
          if ((uint)local_150 == local_150._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&local_158,(int *)((longlong)&local_150 + 4));
            local_150 = CONCAT44(local_150._4_4_,iVar13);
          }
          uVar19 = CONCAT44(local_134.RegisteredLightIndex,local_134.MinDistanceToViews);
        }
        lVar22 = (longlong)(int)(uint)local_150;
        local_150 = CONCAT44(local_150._4_4_,(uint)local_150 + 1);
        uVar26 = uVar26 + 1;
        *(undefined8 *)(local_158.Data + lVar22 * 8) = uVar19;
      } while (uVar26 < local_140);
    }
    AlgoImpl::
    IntroSortInternal<_LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots_::__l2::FSortedRegisteredLights,int,FIdentityFunctor,TDereferenceWrapper<_LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots_::__l2::FSortedRegisteredLights,TLess<void>_>_>
              ((FSortedRegisteredLights *)local_158.Data,(uint)local_150,local_res10[0],
               (TLess<void> *)local_res18);
    local_11c[0] = (this->AtlasSetup).SlotResolution;
    local_144 = (float)(this->AtlasSetup).EdgeSize;
    local_114 = (float)local_11c[0] * local_144;
    if ((__real_43800000 < local_144 * local_144) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AtlasEdgeSize * AtlasEdgeSize <= 256",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                            ,0x199,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->EffectiveLightFunctionSlotArray).ArrayMax;
    local_res20[0] = (uint)(longlong)(local_144 * local_144);
    (this->EffectiveLightFunctionSlotArray).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->EffectiveLightFunctionSlotArray).AllocatorInstance,0,piVar1);
    }
    if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)local_res20[0]);
    }
    if (*piVar1 < (int)local_res20[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,local_res20[0],&(this->EffectiveLightFunctionSlotArray).AllocatorInstance,
                 (this->EffectiveLightFunctionSlotArray).ArrayNum,piVar1);
    }
    pTVar2 = &this->EffectiveLocalLightSlotArray;
    piVar1 = &(this->EffectiveLocalLightSlotArray).ArrayMax;
    (this->EffectiveLocalLightSlotArray).ArrayNum = 0;
    if ((this->EffectiveLocalLightSlotArray).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if ((int)(uint)local_150 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(local_150 & 0xffffffff);
    }
    if (*piVar1 < (int)(uint)local_150) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(uint)local_150,&pTVar2->AllocatorInstance,
                 (this->EffectiveLocalLightSlotArray).ArrayNum,piVar1);
    }
    iVar13 = *(int *)&(this->LightFunctionsSet).Elements.field_0x8;
    iVar16 = *(int *)&(this->LightFunctionsSet).Elements.field_0x34;
    if (iVar13 != iVar16) {
      TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->LightFunctionsSet);
      iVar16 = *(int *)&(this->LightFunctionsSet).Elements.field_0xc;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x8 = 0;
      iVar13 = 0;
      if (iVar16 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)&this->LightFunctionsSet,0,
                   (int *)&(this->LightFunctionsSet).Elements.field_0xc);
        iVar13 = *(int *)&(this->LightFunctionsSet).Elements.field_0x8;
      }
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x28 = 0;
      iVar16 = 0;
    }
    uVar26 = local_res20[0];
    if ((uint)(iVar13 - iVar16) < local_res20[0]) {
      if ((int)local_res20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)local_res20[0]);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->LightFunctionsSet,local_res20[0]);
      if (uVar26 < 4) {
        iVar13 = 1;
      }
      else {
        uVar24 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        local_108 = (undefined4)lVar22;
        iVar13 = 1 << ((byte)lVar22 & 0x1f);
      }
      iVar16 = (this->LightFunctionsSet).HashSize;
      if ((iVar16 == 0) || (iVar16 < iVar13)) {
        (this->LightFunctionsSet).HashSize = iVar13;
        TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
        ::Rehash(&this->LightFunctionsSet);
      }
    }
    local_d0 = local_res20;
    local_120 = 0;
    local_c8 = &local_120;
    local_c0 = local_11c;
    local_b8 = local_11c + 1;
    local_b0 = &local_114;
    local_a8 = &local_144;
    iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
    local_11c[1] = 0;
    local_d8 = this;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
    pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(undefined8 *)(pFVar17 + 8) = 0;
    pTVar10 = CVarLightFunctionAtlasMaxLightCount.Ref;
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = (ulonglong)(int)(uint)local_150;
    local_140 = pTVar10->ShadowedValue[1];
    local_10c = (uint)local_150;
    local_f8 = (FSortedRegisteredLights *)(local_158.Data + uVar20 * 8);
    uVar24 = uVar20;
    FVar27.Data = local_158.Data;
    while( true ) {
      pFVar11 = local_f8;
      if ((int)uVar20 != (int)uVar24) {
        local_res10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<`LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots'::__l2::FSortedRegisteredLights,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if ((FSortedRegisteredLights *)FVar27.Data == pFVar11) break;
      uVar26 = ((FSortedRegisteredLights *)FVar27.Data)->RegisteredLightIndex;
      uVar15 = 0;
      if ((int)uVar26 < (this->RegisteredLights).ArrayNum) {
        uVar15 = ~uVar26 >> 0x1f;
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
      lVar22 = *(longlong *)
                ((this->RegisteredLights).AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
      local_104._4_8_ = *(longlong *)(lVar22 + 0x28);
      this_00 = *(FMaterialRenderProxy **)(local_104._4_8_ + 0x1c8);
      if ((((int)local_140 < 0) || (local_148 < (int)local_140)) &&
         (this_00 != (FMaterialRenderProxy *)0x0)) {
        this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,local_110);
        bVar12 = FMaterial::MaterialIsLightFunctionAtlasCompatible_RenderThread(this_01);
        if (!bVar12) goto LAB_144baa3bd;
        uVar24 = 0;
        local_128.LFMaterialUniqueID = 0;
        local_128.EffectiveLightFunctionSlotIndex = 0;
        plVar5 = *(longlong **)(*(longlong *)(lVar22 + 0x28) + 0x1c8);
        if (plVar5 != (longlong *)0x0) {
          lVar18 = (**(code **)(*plVar5 + 0x40))();
          uVar24 = (ulonglong)*(uint *)(lVar18 + 0xc);
          local_128.LFMaterialUniqueID = *(uint *)(lVar18 + 0xc);
        }
        if (*(int *)&(this->LightFunctionsSet).Elements.field_0x8 !=
            *(int *)&(this->LightFunctionsSet).Elements.field_0x34) {
          FVar6 = (this->LightFunctionsSet).Hash.SecondaryData;
          FVar23 = (ForElementType<FSetElementId>)&(this->LightFunctionsSet).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar6;
          }
          iVar13 = *(int *)((longlong)FVar23 + ((this->LightFunctionsSet).HashSize - 1 & uVar24) * 4
                           );
          if (iVar13 != -1) {
            do {
              piVar21 = (int *)((longlong)iVar13 * 0x10 +
                               *(longlong *)&(this->LightFunctionsSet).Elements);
              if ((int)uVar24 == *piVar21) {
                if (piVar21 != (int *)0x0) {
                  iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
                  FVar4 = *(FScriptContainerElement *)(piVar21 + 1);
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar2->AllocatorInstance,piVar1);
                  }
                  (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
                  lVar18 = (longlong)iVar13;
                  pFVar17 = (pTVar2->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar17 + lVar18 * 0x10) = 0;
                  *(undefined8 *)(pFVar17 + lVar18 * 0x10 + 8) = 0;
                  pFVar17[lVar18 * 0x10 + 8] = FVar4;
                  *(longlong *)(pFVar17 + lVar18 * 0x10) = lVar22;
                  iVar13 = local_148 + 1;
                  iVar16 = local_148;
                  goto LAB_144baa3bf;
                }
                break;
              }
              iVar13 = piVar21[2];
            } while (iVar13 != -1);
          }
        }
        if (local_res20[0] <=
            (uint)(*(int *)&(this->LightFunctionsSet).Elements.field_0x8 -
                  *(int *)&(this->LightFunctionsSet).Elements.field_0x34)) {
          this->LightCountSkippedDueToMissingAtlasSlot =
               this->LightCountSkippedDueToMissingAtlasSlot + 1;
          TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
          ::Emplace<LightFunctionAtlas::FLightFunctionSlotKey_const_&>
                    (&this->SkippedLightFunctionsSet,(FLightFunctionSlotKey *)local_104,
                     (bool *)&local_128);
        }
        if (local_res20[0] <=
            (uint)(*(int *)&(this->LightFunctionsSet).Elements.field_0x8 -
                  *(int *)&(this->LightFunctionsSet).Elements.field_0x34)) goto LAB_144baa3bd;
        uVar26 = `LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots'::__l2::<lambda_1>::
                 operator()(&local_d8,local_128,this_00);
        iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
        lVar18 = (longlong)iVar13;
        pFVar17 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar17 + lVar18 * 0x10) = 0;
        *(undefined8 *)(pFVar17 + lVar18 * 0x10 + 8) = 0;
        *(longlong *)(pFVar17 + lVar18 * 0x10) = lVar22;
        pFVar17[lVar18 * 0x10 + 8] = SUB41(uVar26,0);
        iVar13 = local_148 + 1;
        iVar16 = local_148;
      }
      else {
LAB_144baa3bd:
        iVar13 = local_148;
        iVar16 = 0;
      }
LAB_144baa3bf:
      local_148 = iVar13;
      FVar27.Data = FVar27.Data + 8;
      uVar24 = (ulonglong)local_10c;
      *(char *)(local_104._4_8_ + 0x1de) = (char)iVar16;
      uVar20 = local_150 & 0xffffffff;
    }
    if ((FSortedRegisteredLights *)local_158.Data != (FSortedRegisteredLights *)0x0) {
      FMemory::Free(local_158.Data);
    }
  }
  return;
}

// AllocateTexture2DAtlas @ 144baa710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::AllocateTexture2DAtlas
          (FLightFunctionAtlas *this,FRDGBuilder *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  FRDGTexture *pFVar4;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_68 [24];
  float local_50;
  int local_4c;
  undefined4 local_48;
  undefined8 local_44;
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined1 local_35;
  undefined2 local_34;
  void *local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  uVar1 = (this->AtlasSetup).EdgeSize;
  uVar2 = (this->AtlasSetup).SlotResolution;
  iVar3 = GetLightFunctionAtlasFormat();
  local_50 = FClearValueBinding::Black.Value.Color[3];
  local_4c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_78 = (undefined4)(longlong)((float)uVar1 * (float)uVar2);
  local_48 = 0;
  local_36 = 0;
  local_28 = (void *)0x0;
  local_20 = 0;
  local_44._4_4_ = local_78;
  local_44._0_4_ = local_78;
  local_35 = 0x25;
  if (iVar3 == 0) {
    local_35 = 0x47;
  }
  local_68._0_8_ = 0x20009;
  local_68._8_8_ = FClearValueBinding::Black._0_8_;
  local_68._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_3c = 0x10001;
  local_38 = 0x101;
  local_34 = 0xff00;
  local_1c = 1;
  uStack_74 = local_78;
  pFVar4 = FRDGBuilder::CreateTexture
                     (param_1,(FRDGTextureDesc *)local_68,L"LightFunction.Atlas",MultiFrame);
  this->RDGAtlasTexture2D = pFVar4;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  return;
}

// BeginSceneFrame @ 144baa9f0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::BeginSceneFrame
          (FLightFunctionAtlas *this,FViewFamilyInfo *param_1,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_2,
          FLightFunctionAtlasSceneData *param_3,bool param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  uint *puVar3;
  TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
  *this_00;
  FScriptContainerElement *pFVar4;
  int iVar5;
  bool bVar6;
  code *pcVar7;
  undefined8 uVar8;
  bool bVar9;
  TConsoleVariableData<int> *pTVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  longlong lVar17;
  FLightFunctionAtlasSetup FVar18;
  uint uVar19;
  undefined4 uStack_2c;
  
  FRDGBuilder::WaitForAsyncExecuteTask();
  bVar13 = false;
  (this->RegisteredLights).ArrayNum = 0;
  if ((this->RegisteredLights).ArrayMax != 0x40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x40,&(this->RegisteredLights).AllocatorInstance,0,
               &(this->RegisteredLights).ArrayMax);
  }
  this->DefaultLightFunctionAtlasGlobalParameters = (FLightFunctionAtlasGlobalParameters *)0x0;
  this->DefaultLightFunctionAtlasGlobalParametersUB =
       (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)0x0;
  piVar1 = &(this->ViewLightFunctionAtlasGlobalParametersArray).ArrayMax;
  (this->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum = 0;
  if (*piVar1 != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&(this->ViewLightFunctionAtlasGlobalParametersArray).AllocatorInstance,0,piVar1
              );
  }
  (this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum = 0;
  if ((this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&(this->ViewLightFunctionAtlasGlobalParametersUBArray).AllocatorInstance,0,
               &(this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax);
  }
  this->bLightFunctionAtlasEnabled = false;
  if (param_3 != (FLightFunctionAtlasSceneData *)0x0) {
    param_3->LightFunctionAtlas = this;
    param_3->bLightFunctionAtlasEnabled = false;
    param_3->SystemFlags = 0;
  }
  pTVar10 = CVarLightFunctionAtlasSize.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar11 = CVarLightFunctionAtlasSlotResolution.Ref;
  uVar15 = 0x10;
  if (pTVar10->ShadowedValue[1] < 0x10) {
    uVar15 = pTVar10->ShadowedValue[1];
  }
  uVar19 = 2;
  if (2 < (int)uVar15) {
    uVar19 = uVar15;
  }
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar15 = 0x20;
  if (0x20 < pTVar11->ShadowedValue[1]) {
    uVar15 = pTVar11->ShadowedValue[1];
  }
  if ((uint)GRHIGlobals.MaxTextureDimensions.Value < uVar15 * uVar19) {
    uVar15 = (uint)GRHIGlobals.MaxTextureDimensions.Value / uVar19;
  }
  if ((0x8000 < uVar15 * uVar19) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(RequestedSlotResolution * RequestedEdgeSize) <= MaxAtlasResolution",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                          ,0x8f,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  FVar18.SlotResolution = uVar15;
  FVar18.EdgeSize = uVar19;
  this->AtlasSetup = FVar18;
  pTVar10 = CVarLightFunctionAtlas.Ref;
  bVar12 = IsInParallelRenderingThread();
  if ((!bVar12) &&
     (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((pTVar10->ShadowedValue[1] < 1) || ((param_1->_padding_ & 0x10000) == 0)) {
    bVar12 = false;
  }
  else {
    bVar12 = true;
  }
  this_00 = &this->SkippedLightFunctionsSet;
  this->bLightFunctionAtlasEnabled = bVar12;
  this->LightCountSkippedDueToMissingAtlasSlot = 0;
  bVar12 = 1 < (this->SkippedLightFunctionsSet).HashSize;
  if (!bVar12) {
    TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
    ::UnhashElements(this_00);
  }
  puVar2 = &(this->SkippedLightFunctionsSet).Elements.field_0xc;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x8 = 0;
  if (*(int *)puVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)this_00,0,(int *)puVar2);
  }
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x34 = 0;
  iVar5 = *(int *)&(this->SkippedLightFunctionsSet).Elements.field_0x2c;
  *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x28 = 0;
  if ((iVar5 < 0) || (0x80 < iVar5)) {
    *(undefined4 *)&(this->SkippedLightFunctionsSet).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->SkippedLightFunctionsSet).Elements.field_0x10,0);
  }
  if (bVar12) {
    (this->SkippedLightFunctionsSet).HashSize = 1;
    TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
    ::Rehash(this_00);
  }
  bVar9 = false;
  bVar12 = false;
  bVar6 = false;
  bVar14 = false;
  if (this->bLightFunctionAtlasEnabled != false) {
    if ((param_4) && (0 < GVolumetricFogUsesLightFunctionAtlas)) {
      bVar9 = true;
    }
    bVar12 = 0 < GDeferredUsesLightFunctionAtlas;
    bVar13 = MegaLights::IsUsingLightFunctions((FSceneViewFamily *)param_1);
    bVar6 = 0 < GLumenUsesLightFunctionAtlas;
    if ((this->bLightFunctionAtlasEnabled == false) ||
       (((((!bVar9 && (!bVar12)) && (!bVar13)) &&
         ((!bVar6 && (bVar14 = GetSingleLayerWaterUsesLightFunctionAtlas(), !bVar14)))) &&
        (bVar14 = GetTranslucentUsesLightFunctionAtlas(), !bVar14)))) {
      bVar14 = false;
    }
    else {
      bVar14 = true;
    }
    this->bLightFunctionAtlasEnabled = bVar14;
  }
  param_3->LightFunctionAtlas = this;
  param_3->bLightFunctionAtlasEnabled = bVar14;
  if (this->bLightFunctionAtlasEnabled != false) {
    puVar3 = &param_3->SystemFlags;
    if (bVar9) {
      *puVar3 = *puVar3 | 1;
    }
    if (bVar12) {
      *puVar3 = *puVar3 | 2;
    }
    if (bVar13 != false) {
      *puVar3 = *puVar3 | 4;
    }
    if (bVar6) {
      param_3->SystemFlags = *puVar3 | 8;
    }
  }
  uVar15 = param_2->ArrayNum;
  uVar19 = 0;
  if (uVar15 != 0) {
    do {
      uVar16 = 0;
      if ((int)uVar19 < param_2->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar8 = CONCAT44(uStack_2c,uVar19);
      lVar17 = (longlong)(int)uVar19;
      uVar19 = uVar19 + 1;
      pFVar4 = (param_2->AllocatorInstance).Data + lVar17 * 0x2970 + 0x2348;
      *(FLightFunctionAtlasSceneData **)pFVar4 = param_3;
      *(undefined8 *)(pFVar4 + 8) = uVar8;
    } while (uVar19 < uVar15);
  }
  return;
}

// ClearEmptySceneFrame @ 144badc40

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::ClearEmptySceneFrame
          (FLightFunctionAtlas *this,FViewInfo *param_1,uint param_2,
          FLightFunctionAtlasSceneData *param_3)

{
  int *piVar1;
  undefined4 uStack_c;
  
  piVar1 = &(this->RegisteredLights).ArrayMax;
  (this->RegisteredLights).ArrayNum = 0;
  if (*piVar1 != 0x40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0x40,&(this->RegisteredLights).AllocatorInstance,0,piVar1);
  }
  this->DefaultLightFunctionAtlasGlobalParameters = (FLightFunctionAtlasGlobalParameters *)0x0;
  this->DefaultLightFunctionAtlasGlobalParametersUB =
       (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)0x0;
  piVar1 = &(this->ViewLightFunctionAtlasGlobalParametersArray).ArrayMax;
  (this->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum = 0;
  if (*piVar1 != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&(this->ViewLightFunctionAtlasGlobalParametersArray).AllocatorInstance,0,piVar1
              );
  }
  (this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum = 0;
  if ((this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax != 4) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,4,&(this->ViewLightFunctionAtlasGlobalParametersUBArray).AllocatorInstance,0,
               &(this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax);
  }
  this->bLightFunctionAtlasEnabled = false;
  if (param_3 != (FLightFunctionAtlasSceneData *)0x0) {
    param_3->LightFunctionAtlas = this;
    param_3->bLightFunctionAtlasEnabled = false;
    param_3->SystemFlags = 0;
  }
  if ((param_1 != (FViewInfo *)0x0) && (param_3 != (FLightFunctionAtlasSceneData *)0x0)) {
    (param_1->LightFunctionAtlasViewData).SceneData = param_3;
    *(ulonglong *)&(param_1->LightFunctionAtlasViewData).ViewIndex = CONCAT44(uStack_c,param_2);
  }
  return;
}

// GetDefaultLightFunctionAtlasGlobalParameters @ 144bc4b90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::GetDefaultLightFunctionAtlasGlobalParameters
          (FLightFunctionAtlas *this,FRDGBuilder *param_1)

{
  FLightFunctionAtlasGlobalParameters *pFVar1;
  TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *pTVar2;
  
  pTVar2 = this->DefaultLightFunctionAtlasGlobalParametersUB;
  if (pTVar2 == (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)0x0) {
    pFVar1 = GetDefaultLightFunctionAtlasGlobalParametersStruct(param_1);
    pTVar2 = FRDGBuilder::
             CreateUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
                       (param_1,pFVar1);
    this->DefaultLightFunctionAtlasGlobalParametersUB = pTVar2;
  }
  return pTVar2;
}

// GetDefaultLightFunctionAtlasGlobalParametersStruct @ 144bc4be0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLightFunctionAtlasGlobalParameters * __cdecl
LightFunctionAtlas::FLightFunctionAtlas::GetDefaultLightFunctionAtlasGlobalParametersStruct
          (FRDGBuilder *param_1)

{
  FLightFunctionAtlasGlobalParameters *pFVar1;
  FRDGTexture *pFVar2;
  FRDGBufferSRV *pFVar3;
  FRDGBufferSRVDesc local_28;
  
  pFVar1 = FRDGBuilder::AllocParameters<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
                     (param_1);
  pFVar2 = FSystemTextures::GetWhiteDummy((FSystemTextures *)&GSystemTextures,param_1);
  pFVar1->LightFunctionAtlasTexture = pFVar2;
  pFVar1->LightFunctionAtlasSampler =
       TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  local_28._padding_._0_1_ = 1;
  local_28._padding_._4_4_ = 0;
  local_28._padding_._0_4_ = 0xffffffff;
  local_28._padding_ = 0;
  local_28.Buffer =
       FSystemTextures::GetDefaultStructuredBuffer
                 ((FSystemTextures *)&GSystemTextures,param_1,0x10,0.0);
  pFVar3 = FRDGBuilder::CreateSRV(param_1,&local_28);
  pFVar1->LightInfoDataBuffer = pFVar3;
  pFVar1->Slot_UVSize = 1.0;
  return pFVar1;
}

// GetLightFunctionAtlasGlobalParameters @ 144bc6380

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::GetLightFunctionAtlasGlobalParameters
          (FLightFunctionAtlas *this,FRDGBuilder *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *pTVar4;
  FLightFunctionAtlasGlobalParameters *pFVar5;
  
  if (this->bLightFunctionAtlasEnabled != false) {
    if (param_2 < (uint)(this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum) {
      uVar3 = 0;
      if ((int)param_2 < (this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum) {
        uVar3 = ~param_2 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pTVar4 = (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)
                   (*pcVar1)();
          return pTVar4;
        }
      }
      return *(TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> **)
              ((this->ViewLightFunctionAtlasGlobalParametersUBArray).AllocatorInstance.Data +
              (longlong)(int)param_2 * 8);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bViewIndexIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                       ,0x226,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)
               (*pcVar1)();
      return pTVar4;
    }
  }
  pTVar4 = this->DefaultLightFunctionAtlasGlobalParametersUB;
  if (pTVar4 == (TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *)0x0) {
    pFVar5 = GetDefaultLightFunctionAtlasGlobalParametersStruct(param_1);
    pTVar4 = FRDGBuilder::
             CreateUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
                       (param_1,pFVar5);
    this->DefaultLightFunctionAtlasGlobalParametersUB = pTVar4;
  }
  return pTVar4;
}

// GetLightFunctionAtlasGlobalParametersStruct @ 144bc6470

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

FLightFunctionAtlasGlobalParameters * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::GetLightFunctionAtlasGlobalParametersStruct
          (FLightFunctionAtlas *this,FRDGBuilder *param_1,uint param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FLightFunctionAtlasGlobalParameters *pFVar4;
  
  if (this->bLightFunctionAtlasEnabled != false) {
    if (param_2 < (uint)(this->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum) {
      uVar3 = 0;
      if ((int)param_2 < (this->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum) {
        uVar3 = ~param_2 >> 0x1f;
      }
      if (uVar3 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar4 = (FLightFunctionAtlasGlobalParameters *)(*pcVar1)();
          return pFVar4;
        }
      }
      return *(FLightFunctionAtlasGlobalParameters **)
              ((this->ViewLightFunctionAtlasGlobalParametersArray).AllocatorInstance.Data +
              (longlong)(int)param_2 * 8);
    }
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("bViewIndexIsValid",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                       ,0x217,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FLightFunctionAtlasGlobalParameters *)(*pcVar1)();
      return pFVar4;
    }
  }
  pFVar4 = GetDefaultLightFunctionAtlasGlobalParametersStruct(param_1);
  return pFVar4;
}

// GetOutOfSlotWarningMessage @ 144bc6dc0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FString * __thiscall
LightFunctionAtlas::FLightFunctionAtlas::GetOutOfSlotWarningMessage
          (FLightFunctionAtlas *this,FString *__return_storage_ptr__)

{
  int iVar1;
  FString local_28;
  FString local_18;
  
  if (((this->bLightFunctionAtlasEnabled != false) && (GAreScreenMessagesEnabled)) &&
     (this->LightCountSkippedDueToMissingAtlasSlot != 0)) {
    ::FString::PrintfImpl(&local_28,L"Light Functions Atlas:\n");
    ::FString::PrintfImpl
              (&local_18,
               L"  - %d light(s) will skip light functions due to out of atlas slot (see r.LightFunctionAtlas.Size).\n"
              );
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_18,L"  - %d light function material(s) have been skipped.\n");
    iVar1 = local_18.Data.ArrayNum + -1;
    if (local_18.Data.ArrayNum == 0) {
      iVar1 = 0;
    }
    ::FString::AppendChars(&local_28,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    (__return_storage_ptr__->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    (__return_storage_ptr__->Data).ArrayNum = local_28.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayMax = local_28.Data.ArrayMax;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Data).ArrayNum = 0;
  (__return_storage_ptr__->Data).ArrayMax = 0;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  return __return_storage_ptr__;
}

// IsOutOfSlots @ 144bd2680

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall LightFunctionAtlas::FLightFunctionAtlas::IsOutOfSlots(FLightFunctionAtlas *this)

{
  return this->LightCountSkippedDueToMissingAtlasSlot != 0;
}

// RenderAtlasSlots @ 144bd81f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::RenderAtlasSlots
          (FLightFunctionAtlas *this,FRDGBuilder *param_1,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  FLightFunctionAtlas *pFVar9;
  bool bVar10;
  int iVar11;
  FRDGTexture *pFVar12;
  FRDGScope *pFVar13;
  undefined8 *puVar14;
  FViewShaderParameters *pFVar15;
  FRDGEventName *pFVar16;
  undefined8 *puVar17;
  FLightFunctionAtlasRenderParameters *pFVar18;
  ulonglong uVar19;
  bool bVar20;
  undefined1 auStackY_1b8 [32];
  undefined8 *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  FRenderTargetBinding local_158;
  FLightFunctionAtlas *local_140;
  TRDGEventScopeGuard<FRDGScope_RHI> local_138;
  char local_128;
  <lambda_2> local_120;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_> local_108;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  FRDGEventName local_d8;
  FViewShaderParameters local_b8;
  undefined1 local_98 [24];
  float local_80;
  int local_7c;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined2 local_64;
  void *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  uVar3 = (this->AtlasSetup).SlotResolution;
  uVar4 = (this->AtlasSetup).EdgeSize;
  local_140 = this;
  iVar11 = GetLightFunctionAtlasFormat();
  local_80 = FClearValueBinding::Black.Value.Color[3];
  local_7c = (1 << ((byte)GNumExplicitGPUsForRendering & 0x1f)) + -1;
  local_160 = (undefined4)(longlong)((float)uVar3 * (float)uVar4);
  local_74._4_4_ = local_160;
  local_74._0_4_ = local_160;
  local_65 = 0x25;
  if (iVar11 == 0) {
    local_65 = 0x47;
  }
  local_98._0_8_ = 0x20009;
  local_98._8_8_ = FClearValueBinding::Black._0_8_;
  local_98._16_8_ = FClearValueBinding::Black.Value._4_8_;
  local_78 = 0;
  local_6c = 0x10001;
  local_68 = 0x101;
  local_66 = 0;
  local_64 = 0xff00;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_4c = 1;
  uStack_15c = local_160;
  pFVar12 = FRDGBuilder::CreateTexture
                      (param_1,(FRDGTextureDesc *)local_98,L"LightFunction.Atlas",MultiFrame);
  this->RDGAtlasTexture2D = pFVar12;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  FGenericPlatformMisc::BeginNamedEvent(&FColor::Emerald,"LightFunctionAtlasGeneration");
  bVar20 = -1 < CpuChannel->Enabled;
  if (bVar20) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId721,"LightFunctionAtlasGeneration",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
               ,0x2d1);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId721);
  }
  cVar2 = *(char *)((longlong)&param_1->_padding_ + 6);
  local_128 = '\0';
  if ((cVar2 != '\0') && ((cVar2 != '\x01' || ((param_1->_padding_ & 4) == 0)))) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
      local_e8 = 0x54bcc8c0;
      uStack_e4 = 1;
      ::Desc._padding_._0_4_ = 0x54bcc8c0;
      ::Desc._padding_._4_4_ = uStack_ec;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_ = (longlong)u_LightFunctionAt;
      ::Desc._padding_ = (longlong)u_LightFunctionAt;
      ::Desc._padding_._0_4_ = 0x2d2;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(```LightFunctionAtlas::FLightFunctionAtlas::RenderAtlasSlots'::__l7::Desc::
             operator()<>'::__l3::<lambda_1>::operator()<>'::__l2::
             _dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    local_108._Myfirst._Val = &::Desc;
    local_138.State = (FRDGScopeState *)param_1;
    pFVar13 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                        ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
    param_1->_padding_ = (longlong)pFVar13;
    local_138.Scope = pFVar13;
    TVariant<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::
    Emplace<FRDGScope_RHI,FRDGScopeState_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<29>_const_*,std::tuple<>_>_>
              (&(pFVar13->Impl).Impl,(FRDGScopeState *)param_1,&local_108);
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::BeginCPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_,false);
      FRDGScope::BeginGPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_);
    }
    local_128 = '\x01';
  }
  pFVar13 = FRDGAllocator::Alloc<FRDGScope,FRDGScope_*_&>
                      ((FRDGAllocator *)&param_1->_padding_,(FRDGScope **)param_1);
  param_1->_padding_ = (longlong)pFVar13;
  uVar19 = (ulonglong)(pFVar13->Impl).Impl.TypeIndex;
  if ((3 < uVar19) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                          ,0xd4,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  (*`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<FEmptyVariantState,FRDGScope_Budget,FRDGScope_RHI,FRDGScope_CSVExclusive>::Destruct(unsigned___int64,void*___ptr64)'
    ::__l2::Destructors[uVar19])(&pFVar13->Impl);
  (pFVar13->Impl).Impl._padding_ = (longlong)"LightFunctionAtlasGeneration";
  FCsvProfiler::BeginExclusiveStat("LightFunctionAtlasGeneration",(char *)0x0);
  (pFVar13->Impl).Impl.TypeIndex = '\x03';
  if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
    FRDGScope::BeginCPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_,false);
    FRDGScope::BeginGPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_);
  }
  puVar14 = FMemStackBase::Alloc((FMemStackBase *)&param_1->_padding_,0x130,0x10);
  puVar17 = (undefined8 *)0x0;
  if (puVar14 == (undefined8 *)0x0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("Object",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphAllocator.h"
                        ,0x61,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  else {
    puVar14[2] = 0;
    *puVar14 = &
               ___7__TObject_VFLightFunctionAtlasRenderParameters_LightFunctionAtlas___FRDGAllocator__6B_
    ;
    *(undefined1 *)(puVar14 + 3) = 1;
    puVar14[4] = 0;
    *(undefined1 *)(puVar14 + 5) = 1;
    FRenderTargetBindingSlots::FRenderTargetBindingSlots((FRenderTargetBindingSlots *)(puVar14 + 6))
    ;
    puVar17 = puVar14;
  }
  local_168 = puVar17;
  if ((((undefined8 **)param_1->_padding_ <= &local_168) &&
      (&local_168 < (undefined8 **)param_1->_padding_ + *(int *)((longlong)&param_1->_padding_ + 4))
      ) && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar11 = (int)param_1->_padding_;
  piVar1 = (int *)((longlong)&param_1->_padding_ + 4);
  if (iVar11 == *piVar1) {
    iVar11 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x808,(ForAnyElementType *)&param_1->_padding_,piVar1);
  }
  pFVar18 = (FLightFunctionAtlasRenderParameters *)(puVar17 + 2);
  *(int *)&param_1->_padding_ = iVar11 + 1;
  *(undefined8 **)(param_1->_padding_ + (longlong)iVar11 * 8) = local_168;
  if ((param_2->ArrayNum < 1) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar15 = FViewInfo::GetShaderParameters((FViewInfo *)(param_2->AllocatorInstance).Data,&local_b8)
  ;
  pFVar9 = local_140;
  local_158.ResolveTexture = (FRDGTexture *)0x0;
  local_158.LoadAction = ENoAction;
  local_158.MipIndex = '\0';
  local_158.ArraySlice = -1;
  uVar6 = *(undefined8 *)&(pFVar15->View).field_0x8;
  uVar7 = *(undefined8 *)&pFVar15->InstancedView;
  uVar8 = *(undefined8 *)&(pFVar15->InstancedView).field_0x8;
  *(undefined8 *)&(pFVar18->View).View = *(undefined8 *)&pFVar15->View;
  puVar17[3] = uVar6;
  puVar17[4] = uVar7;
  puVar17[5] = uVar8;
  local_158.Texture = local_140->RDGAtlasTexture2D;
  bVar10 = FRenderTargetBinding::Validate(&local_158);
  if ((!bVar10) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Validate()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x216,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  puVar17[6] = local_158.Texture;
  puVar17[7] = local_158.ResolveTexture;
  puVar17[8] = CONCAT44(local_158._20_4_,local_158._16_4_);
  local_120.__this = pFVar9;
  local_120.PassParameters = pFVar18;
  local_120.Views = param_2;
  pFVar16 = FRDGEventName::FRDGEventName(&local_d8,1,L"LightFunctionAtlas Generation");
  FRDGBuilder::
  AddPass<LightFunctionAtlas::FLightFunctionAtlasRenderParameters,_LightFunctionAtlas::FLightFunctionAtlas::RenderAtlasSlots_::__l2::<lambda_2>_>
            (param_1,pFVar16,pFVar18,Raster,&local_120);
  if (local_d8.FormattedEventName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.FormattedEventName.Data.AllocatorInstance.Data);
  }
  if (pFVar13 != (FRDGScope *)0x0) {
    if (*(char *)((longlong)&param_1->_padding_ + 4) != '\0') {
      FRDGScope::EndGPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_);
      FRDGScope::EndCPU(pFVar13,(FRHIComputeCommandList *)param_1->_padding_,false);
    }
    FRDGScope::ImmediateEnd(pFVar13,(FRDGScopeState *)param_1);
    *(uint *)&param_1->_padding_ = (uint)param_1->_padding_ & 0xfffffff7;
    param_1->_padding_ = *(longlong *)param_1->_padding_;
  }
  if (local_128 != '\0') {
    TRDGEventScopeGuard<FRDGScope_RHI>::~TRDGEventScopeGuard<FRDGScope_RHI>(&local_138);
  }
  if (bVar20) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// RenderLightFunctionAtlas @ 144bdbce0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas
          (FLightFunctionAtlas *this,FRDGBuilder *param_1,
          TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_2)

{
  TArray<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters_*,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  TArray<TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>_*,TSizedDefaultAllocator<32>_>
  *pTVar3;
  byte bVar4;
  byte bVar5;
  FRDGTexture *pFVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  uint uVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint uVar22;
  FLightFunctionAtlas *pFVar23;
  FLightFunctionAtlas *pFVar24;
  bool bVar25;
  bool bVar26;
  uint uVar27;
  int iVar28;
  FName *pFVar29;
  FThreadSafeStaticStat<_public:_void___cdecl_LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas(FRDGBuilder_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_RenderLightFunctionAtlas>
  FVar30;
  void *pvVar31;
  ulonglong uVar32;
  FRDGBufferSRV *pFVar33;
  ulonglong uVar34;
  FNameEntryId FVar35;
  FName FVar36;
  TArray<FViewInfo,TSizedDefaultAllocator<32>_> *pTVar37;
  undefined4 *puVar38;
  FLightFunctionAtlas *pFVar39;
  FScriptContainerElement *pFVar40;
  longlong lVar41;
  uint uVar42;
  float fVar43;
  double dVar44;
  double dVar45;
  float fVar46;
  undefined1 auStackY_428 [32];
  undefined1 local_3c7 [3];
  ushort local_3c4 [2];
  FLightFunctionAtlasGlobalParameters *local_3c0;
  uint local_3b8;
  uint local_3b4;
  uint local_3b0;
  uint uStack_3ac;
  TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> *local_3a8;
  FLightFunctionAtlas *local_3a0;
  FColor_u_0 local_398;
  uint local_394;
  uint local_390;
  uint local_38c;
  FName local_388;
  void *local_380;
  TArray<FViewInfo,TSizedDefaultAllocator<32>_> *local_378;
  FName local_370;
  FName local_368;
  longlong local_358;
  FScriptContainerElement *local_350;
  FLightFunctionAtlas *local_348;
  ulonglong local_340;
  FRDGBuilder *local_338;
  FRDGBufferSRVDesc local_330;
  FName local_310;
  FName local_308 [3];
  double local_2f0;
  TMatrix<double> local_2e8;
  TMatrix<double> local_268;
  TMatrix<double> local_1e8;
  TMatrix<double> local_168;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_428;
  if (this->bLightFunctionAtlasEnabled == false) {
    return;
  }
  local_3a0 = this;
  local_378 = param_2;
  local_338 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_RenderLightFunctionAtlas ==
        (FThreadSafeStaticStat<_public:_void___cdecl_LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas(FRDGBuilder_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_RenderLightFunctionAtlas>
         )0x0) {
      pFVar29 = ::FName::FName(&local_310,"RenderLightFunctionAtlas");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_RenderLightFunctionAtlas,*pFVar29,
                 L"RenderLightFunctionAtlas","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true
                 ,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar30 = StatPtr_RenderLightFunctionAtlas;
  if (StatPtr_RenderLightFunctionAtlas ==
      (FThreadSafeStaticStat<_public:_void___cdecl_LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas(FRDGBuilder_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_RenderLightFunctionAtlas>
       )0x0) {
    pFVar29 = ::FName::FName(local_308,"RenderLightFunctionAtlas");
    FVar30 = (FThreadSafeStaticStat<_public:_void___cdecl_LightFunctionAtlas::FLightFunctionAtlas::RenderLightFunctionAtlas(FRDGBuilder_&,TArray<FViewInfo,TSizedDefaultAllocator<32>_>_&)_::_2_::FStat_RenderLightFunctionAtlas>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_RenderLightFunctionAtlas,*pFVar29,
                          L"RenderLightFunctionAtlas","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                          true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar36 = *(FName *)FVar30;
  bVar8 = false;
  bVar9 = false;
  local_368.ComparisonIndex.Value = 0;
  local_368.Number = 0;
  bVar25 = false;
  bVar26 = false;
  FVar35 = FVar36.ComparisonIndex.Value;
  uVar42 = FVar36.Number;
  if ((FVar35.Value != 0) || (uVar42 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_398.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_398._s_0,(char *)*(FName *)((longlong)FVar30 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar25 = false;
      bVar26 = true;
      if (-1 < CpuChannel->Enabled) {
        local_388.ComparisonIndex.Value = FVar35.Value;
        local_388.Number = uVar42;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_388,(wchar_t *)*(FName *)((longlong)FVar30 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                   ,0x24b);
        bVar8 = true;
        bVar9 = true;
        bVar25 = true;
        bVar26 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_3b0 = FVar35.Value;
      uStack_3ac = uVar42;
      local_370 = FVar36;
      FThreadStats::AddMessage(FVar36,CycleScopeStart);
      bVar25 = true;
      goto LAB_144bdbe94;
    }
  }
  bVar9 = bVar26;
  bVar8 = bVar25;
  bVar25 = false;
  local_370 = local_368;
  FVar36 = local_368;
LAB_144bdbe94:
  pTVar37 = local_378;
  RenderAtlasSlots(this,param_1,local_378);
  pFVar23 = local_3a0;
  fVar21 = __real_37000000;
  fVar20 = __real_37800000;
  fVar19 = __real_47800000;
  dVar18 = _UNK_150689518;
  dVar17 = ___xmm_00000000000000003ff0000000000000;
  uVar16 = _UNK_15066df7c;
  uVar15 = _UNK_15066df78;
  uVar14 = __xmm_80000000000000008000000000000000._4_4_;
  uVar13 = (uint)__xmm_80000000000000008000000000000000;
  fVar12 = __real_bf800000;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  dVar10 = __real_3ff0000000000000;
  uVar42 = pTVar37->ArrayNum;
  local_3b4 = 0;
  if (uVar42 != 0) {
    do {
      uVar22 = local_3b4;
      uVar27 = 0;
      if ((int)local_3b4 < (int)uVar42) {
        uVar27 = ~local_3b4 >> 0x1f;
      }
      if ((uVar27 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar40 = (pTVar37->AllocatorInstance).Data + (longlong)(int)uVar22 * 0x2970;
      local_350 = pFVar40;
      local_3c0 = FRDGBuilder::
                  AllocParameters<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>(param_1);
      if ((pFVar23->RDGAtlasTexture2D == (FRDGTexture *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("RDGAtlasTexture2D != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                              ,0x25b,L""), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_3c0->LightFunctionAtlasTexture = pFVar23->RDGAtlasTexture2D;
      local_3c0->LightFunctionAtlasSampler =
           TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
           ::StaticResource.StateRHI.Reference;
      fVar46 = (float)(pFVar23->AtlasSetup).SlotResolution;
      local_3c0->Slot_UVSize =
           (fVar46 - __real_3f800000) / ((float)(pFVar23->AtlasSetup).EdgeSize * fVar46);
      local_3b0 = (pFVar23->EffectiveLocalLightSlotArray).ArrayNum + 0x1fU & 0xffffffe0;
      local_340 = (ulonglong)(local_3b0 * 0x50);
      pvVar31 = FMemStackBase::Alloc
                          ((FMemStackBase *)&param_1->_padding_,(ulonglong)(local_3b0 * 0x50),0x10);
      local_38c = (pFVar23->EffectiveLocalLightSlotArray).ArrayNum;
      uVar34 = (ulonglong)(int)local_38c;
      pFVar39 = (FLightFunctionAtlas *)
                (pFVar23->EffectiveLocalLightSlotArray).AllocatorInstance.Data;
      uVar32 = 0;
      local_348 = (FLightFunctionAtlas *)
                  &(&(pFVar39->LightFunctionsSet).Hash)[uVar34 - 7].SecondaryData;
      local_380 = pvVar31;
      while( true ) {
        pFVar24 = local_348;
        local_3b8 = (uint)uVar32;
        local_3a0 = pFVar39;
        if ((pFVar23->EffectiveLocalLightSlotArray).ArrayNum != (int)uVar34) {
          local_3c7[0] = 0;
          `TCheckedPointerIterator<LightFunctionAtlas::FLightFunctionAtlas::EffectiveLocalLightSlot,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_3c7);
          uVar32 = (ulonglong)local_3b8;
          pvVar31 = local_380;
        }
        param_1 = local_338;
        if (pFVar39 == pFVar24) break;
        pFVar6 = (FRDGTexture *)pFVar39->_padding_;
        puVar38 = (undefined4 *)(uVar32 * 0x50 + (longlong)pvVar31);
        if (pFVar6 == (FRDGTexture *)0x0) {
          *puVar38 = 0x3f800000;
          fVar46 = 0.0;
          puVar38[1] = 0x3f800000;
          puVar38[2] = 0x3f800000;
          local_3a0 = pFVar39;
        }
        else {
          lVar41 = pFVar6->_padding_;
          bVar4 = pFVar39->bLightFunctionAtlasEnabled;
          local_2e8.M[0][1] = 0.0;
          local_2e8.M[1][0] = 0.0;
          local_2f0 = *(double *)(lVar41 + 0x1b8);
          local_2e8.M[0][0] = dVar10 / local_2f0;
          local_2e8.M[0][2] = 0.0;
          local_2e8.M[0][3] = 0.0;
          local_2e8.M[1][1] = dVar10 / *(double *)(lVar41 + 0x1b0);
          local_2e8.M[2][3] = 0.0;
          local_2e8.M[1][2] = 0.0;
          local_2e8.M[1][3] = 0.0;
          local_2e8.M[2][2] = dVar10 / *(double *)(lVar41 + 0x1a8);
          local_2e8.M[2][0] = 0.0;
          local_2e8.M[2][1] = 0.0;
          local_2e8.M[3][0] = 0.0;
          local_2e8.M[3][1] = 0.0;
          local_2e8.M[3][2] = ___xmm_3ff00000000000000000000000000000;
          local_2e8.M[3][3] = _UNK_15061cbc8;
          local_358 = lVar41;
          VectorMatrixMultiply(&local_168,(TMatrix<double> *)(lVar41 + 0x50),&local_2e8);
          local_268.M[3][3] = dVar10;
          local_268.M[0][2] = 0.0;
          local_268.M[0][3] = 0.0;
          local_268.M[1][0] = ___xmm_3ff00000000000000000000000000000;
          local_268.M[1][1] = _UNK_15061cbc8;
          local_268.M[0][0] = dVar17;
          local_268.M[0][1] = dVar18;
          local_268.M[1][2] = 0.0;
          local_268.M[1][3] = 0.0;
          local_268.M[2][0] = 0.0;
          local_268.M[2][1] = 0.0;
          local_268.M[3][0]._0_4_ = *(uint *)(pFVar40 + 0xbb0) ^ uVar13;
          local_268.M[3][0]._4_4_ = *(uint *)(pFVar40 + 0xbb4) ^ uVar14;
          local_268.M[3][1]._0_4_ = *(uint *)(pFVar40 + 3000) ^ uVar15;
          local_268.M[3][1]._4_4_ = *(uint *)(pFVar40 + 0xbbc) ^ uVar16;
          local_268.M[2][2] = dVar17;
          local_268.M[2][3] = dVar18;
          local_268.M[3][2] =
               (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar40 + 0xbc0) >> 0x20) ^ uVar14
                                ,(uint)*(undefined8 *)(pFVar40 + 0xbc0) ^ uVar13);
          VectorMatrixMultiply(&local_1e8,&local_268,&local_168);
          *(ulonglong *)(puVar38 + 4) = CONCAT44((float)local_1e8.M[0][1],(float)local_1e8.M[0][0]);
          *(ulonglong *)(puVar38 + 6) = CONCAT44((float)local_1e8.M[0][3],(float)local_1e8.M[0][2]);
          puVar38[8] = (float)local_1e8.M[1][0];
          puVar38[9] = (float)local_1e8.M[1][1];
          puVar38[10] = (float)local_1e8.M[1][2];
          puVar38[0xb] = (float)local_1e8.M[1][3];
          puVar38[0xc] = (float)local_1e8.M[2][0];
          puVar38[0xd] = (float)local_1e8.M[2][1];
          puVar38[0xe] = (float)local_1e8.M[2][2];
          puVar38[0xf] = (float)local_1e8.M[2][3];
          puVar38[0x10] = (float)local_1e8.M[3][0];
          puVar38[0x11] = (float)local_1e8.M[3][1];
          puVar38[0x12] = (float)local_1e8.M[3][2];
          puVar38[0x13] = (float)local_1e8.M[3][3];
          bVar5 = *(byte *)(lVar41 + 0x1f0);
          local_394 = (uint)bVar5;
          local_3c4[0] = 0;
          FGenericPlatformMath::StoreHalf(local_3c4,*(float *)(lVar41 + 0x1c4));
          local_390 = (uint)CONCAT21(local_3c4[0],bVar5);
          if (((pFVar23->EffectiveLightFunctionSlotArray).ArrayNum <= (int)(uint)bVar4) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar40 = (pFVar23->EffectiveLightFunctionSlotArray).AllocatorInstance.Data;
          lVar41 = (ulonglong)bVar4 * 0x20;
          dVar44 = (double)round((double)(*(float *)(pFVar40 + lVar41 + 0x18) * fVar19));
          dVar45 = (double)round((double)(*(float *)(pFVar40 + lVar41 + 0x1c) * fVar19));
          uVar42 = (int)(longlong)dVar45 << 0x10 | (uint)(longlong)dVar44;
          if ((fVar21 < (float)((uint)((float)((uint)(longlong)dVar44 & 0xffff) * fVar20 -
                                      *(float *)(pFVar40 + lVar41 + 0x18)) & uVar11)) &&
             (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5680214572468798101>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                                  ,0x295,
                                  "FMath::IsNearlyEqual((PackedAtlasSlotMinUV & 0xFFFF) / 65536.0f, AtlasSlot.MinU, IntegerUVTolerance)"
                                 ), bVar26)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((fVar21 < (float)((uint)((float)(uVar42 >> 0x10) * fVar20 -
                                      *(float *)(pFVar40 + lVar41 + 0x1c)) & uVar11)) &&
             (bVar26 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<5680214572468798102>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                                  ,0x296,
                                  "FMath::IsNearlyEqual(((PackedAtlasSlotMinUV >> 16) & 0xFFFF) / 65536.0f, AtlasSlot.MinV, IntegerUVTolerance)"
                                 ), bVar26)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((char)local_394 == '\x02') {
            fVar46 = (float)(**(code **)(*(longlong *)pFVar6->_padding_ + 0x20))();
            fVar43 = tanf(fVar46);
LAB_144bdc42e:
            fVar46 = fVar43;
          }
          else {
            fVar46 = fVar12;
            if (((char)local_394 == '\x03') &&
               (fVar43 = *(float *)(pFVar6->_padding_ + 0x284), 0.0 < fVar43)) goto LAB_144bdc42e;
          }
          *puVar38 = *(undefined4 *)(local_358 + 0x1c0);
          puVar38[1] = local_390;
          puVar38[2] = uVar42;
          pvVar31 = local_380;
          pFVar40 = local_350;
        }
        uVar34 = (ulonglong)local_38c;
        pFVar39 = (FLightFunctionAtlas *)&local_3a0->RDGAtlasTexture2D;
        puVar38[3] = fVar46;
        uVar32 = (ulonglong)(local_3b8 + 1);
      }
      local_330.Buffer =
           CreateStructuredBuffer
                     (local_338,L"LightFunctionAtlasLightInfoData",0x10,local_3b0 * 5,pvVar31,
                      local_340,NoCopy);
      pFVar23->RDGLightInfoDataBuffer = local_330.Buffer;
      local_330._padding_._4_4_ = 0;
      local_330._padding_ = 0;
      local_330._padding_._0_1_ = 1;
      local_330._padding_._0_4_ = 0xffffffff;
      pFVar33 = FRDGBuilder::CreateSRV(param_1,&local_330);
      pTVar1 = &pFVar23->ViewLightFunctionAtlasGlobalParametersArray;
      piVar2 = &(pFVar23->ViewLightFunctionAtlasGlobalParametersArray).ArrayMax;
      local_3c0->LightInfoDataBuffer = pFVar33;
      pFVar40 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar40 <= (FScriptContainerElement *)&local_3c0) &&
          ((FScriptContainerElement *)&local_3c0 < pFVar40 + (longlong)*piVar2 * 8)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar28 = (pFVar23->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum;
      if (iVar28 == *piVar2) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (pFVar23->ViewLightFunctionAtlasGlobalParametersArray).ArrayNum = iVar28 + 1;
      *(FLightFunctionAtlasGlobalParameters **)
       ((pTVar1->AllocatorInstance).Data + (longlong)iVar28 * 8) = local_3c0;
      local_3a8 = FRDGBuilder::
                  CreateUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters>
                            (param_1,local_3c0);
      pTVar3 = &pFVar23->ViewLightFunctionAtlasGlobalParametersUBArray;
      pFVar40 = (pTVar3->AllocatorInstance).Data;
      piVar2 = &(pFVar23->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayMax;
      if (((pFVar40 <= (FScriptContainerElement *)&local_3a8) &&
          ((FScriptContainerElement *)&local_3a8 < pFVar40 + (longlong)*piVar2 * 8)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      iVar28 = (pFVar23->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum;
      if (iVar28 == *piVar2) {
        iVar28 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&pTVar3->AllocatorInstance,piVar2);
      }
      (pFVar23->ViewLightFunctionAtlasGlobalParametersUBArray).ArrayNum = iVar28 + 1;
      local_3b4 = local_3b4 + 1;
      *(TRDGUniformBuffer<LightFunctionAtlas::FLightFunctionAtlasGlobalParameters> **)
       ((pTVar3->AllocatorInstance).Data + (longlong)iVar28 * 8) = local_3a8;
      uVar42 = local_378->ArrayNum;
      FVar36 = local_370;
      pTVar37 = local_378;
    } while (local_3b4 < uVar42);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar25) {
    FThreadStats::AddMessage(FVar36,CycleScopeEnd);
  }
  return;
}

// UpdateLightFunctionAtlas @ 144beaf50

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::UpdateLightFunctionAtlas
          (FLightFunctionAtlas *this,TArray<FViewInfo,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  TArray<LightFunctionAtlas::FLightFunctionAtlas::EffectiveLocalLightSlot,TSizedDefaultAllocator<32>_>
  *pTVar2;
  double dVar3;
  FScriptContainerElement FVar4;
  FMaterialRenderProxy *this_00;
  longlong *plVar5;
  ForElementType<FSetElementId> FVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  TConsoleVariableData<int> *pTVar10;
  FSortedRegisteredLights *pFVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  FMaterial *this_01;
  longlong lVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  int *piVar21;
  longlong lVar22;
  ForElementType<FSetElementId> FVar23;
  ulonglong uVar24;
  uint uVar25;
  uint uVar26;
  ForAnyElementType FVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  FIdentityFunctor aFStackX_10 [8];
  undefined1 auStackX_18 [8];
  uint auStackX_20 [2];
  ForAnyElementType FStack_158;
  undefined8 uStack_150;
  int iStack_148;
  float fStack_144;
  uint uStack_140;
  FSortedRegisteredLights FStack_13c;
  FSortedRegisteredLights FStack_134;
  FLightFunctionSlotKey FStack_128;
  undefined4 uStack_120;
  uint auStack_11c [2];
  float fStack_114;
  Type TStack_110;
  uint uStack_10c;
  undefined4 uStack_108;
  undefined1 auStack_104 [12];
  FSortedRegisteredLights *pFStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  FLightFunctionAtlas *pFStack_d8;
  uint *puStack_d0;
  undefined4 *puStack_c8;
  uint *puStack_c0;
  uint *puStack_b8;
  float *pfStack_b0;
  float *pfStack_a8;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 uStack_80;
  
  if (this->bLightFunctionAtlasEnabled == false) {
    return;
  }
  if (param_1->ArrayNum != 0) {
    if ((param_1->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar26 = (this->RegisteredLights).ArrayNum;
    uVar15 = param_1->ArrayNum;
    TStack_110 = *(Type *)((param_1->AllocatorInstance).Data + 0x1bf8);
    FStack_158.Data = (FScriptContainerElement *)0x0;
    uStack_150 = 0;
    if ((int)uVar26 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    if (0 < (int)uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,uVar26,&FStack_158,0,(int *)((longlong)&uStack_150 + 4));
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar17 = (param_1->AllocatorInstance).Data;
    uVar26 = 0;
    iStack_148 = 1;
    dVar8 = *(double *)(pFVar17 + 0xbc8);
    dVar9 = *(double *)(pFVar17 + 0xbd0);
    dVar3 = *(double *)(pFVar17 + 0xbd8);
    uStack_140 = (this->RegisteredLights).ArrayNum;
    dStack_f0 = dVar8;
    dStack_e8 = dVar9;
    dStack_e0 = dVar3;
    if (uStack_140 != 0) {
      do {
        uVar25 = 0;
        if ((int)uVar26 < (this->RegisteredLights).ArrayNum) {
          uVar25 = ~uVar26 >> 0x1f;
        }
        if ((uVar25 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        lVar22 = *(longlong *)
                  (*(longlong *)
                    ((this->RegisteredLights).AllocatorInstance.Data + (longlong)(int)uVar26 * 8) +
                  0x28);
        if (*(char *)(lVar22 + 0x1f0) == '\0') {
          FStack_13c.MinDistanceToViews = 0.0;
          FStack_13c.RegisteredLightIndex = uVar26;
          if (((FStack_158.Data <= &FStack_13c) &&
              (&FStack_13c <
               (FSortedRegisteredLights *)(FStack_158.Data + (longlong)uStack_150._4_4_ * 8))) &&
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
          if ((uint)uStack_150 == uStack_150._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&FStack_158,(int *)((longlong)&uStack_150 + 4));
            uStack_150 = CONCAT44(uStack_150._4_4_,iVar13);
          }
          uVar19 = CONCAT44(FStack_13c.RegisteredLightIndex,FStack_13c.MinDistanceToViews);
        }
        else {
          dStack_98 = *(double *)(lVar22 + 0x20);
          dStack_90 = *(double *)(lVar22 + 0x28);
          dStack_88 = *(double *)(lVar22 + 0x30);
          uStack_80 = *(undefined8 *)(lVar22 + 0x38);
          fVar31 = (float)((dVar9 - dStack_90) * (dVar9 - dStack_90) +
                           (dVar8 - dStack_98) * (dVar8 - dStack_98) +
                          (dVar3 - dStack_88) * (dVar3 - dStack_88));
          uVar25 = 1;
          if (1 < uVar15) {
            do {
              uVar14 = 0;
              if ((int)uVar25 < param_1->ArrayNum) {
                uVar14 = ~uVar25 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              lVar18 = (longlong)(int)uVar25;
              uVar25 = uVar25 + 1;
              pFVar17 = (param_1->AllocatorInstance).Data;
              dVar29 = *(double *)(pFVar17 + lVar18 * 0x2970 + 0xbd8) - *(double *)(lVar22 + 0x30);
              pFVar17 = pFVar17 + lVar18 * 0x2970 + 0xbc8;
              dVar28 = *(double *)pFVar17 - *(double *)(lVar22 + 0x20);
              dVar30 = *(double *)(pFVar17 + 8) - *(double *)(lVar22 + 0x28);
              dVar28 = dVar30 * dVar30 + dVar28 * dVar28 + dVar29 * dVar29;
              if ((double)fVar31 <= dVar28) {
                dVar28 = (double)fVar31;
              }
              fVar31 = (float)dVar28;
            } while (uVar25 < uVar15);
          }
          FStack_134.MinDistanceToViews = fVar31;
          FStack_134.RegisteredLightIndex = uVar26;
          if (((FStack_158.Data <= &FStack_134) &&
              (&FStack_134 <
               (FSortedRegisteredLights *)(FStack_158.Data + (longlong)uStack_150._4_4_ * 8))) &&
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
          if ((uint)uStack_150 == uStack_150._4_4_) {
            iVar13 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&FStack_158,(int *)((longlong)&uStack_150 + 4));
            uStack_150 = CONCAT44(uStack_150._4_4_,iVar13);
          }
          uVar19 = CONCAT44(FStack_134.RegisteredLightIndex,FStack_134.MinDistanceToViews);
        }
        lVar22 = (longlong)(int)(uint)uStack_150;
        uStack_150 = CONCAT44(uStack_150._4_4_,(uint)uStack_150 + 1);
        uVar26 = uVar26 + 1;
        *(undefined8 *)(FStack_158.Data + lVar22 * 8) = uVar19;
      } while (uVar26 < uStack_140);
    }
    AlgoImpl::
    IntroSortInternal<_LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots_::__l2::FSortedRegisteredLights,int,FIdentityFunctor,TDereferenceWrapper<_LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots_::__l2::FSortedRegisteredLights,TLess<void>_>_>
              ((FSortedRegisteredLights *)FStack_158.Data,(uint)uStack_150,aFStackX_10[0],
               (TLess<void> *)auStackX_18);
    auStack_11c[0] = (this->AtlasSetup).SlotResolution;
    fStack_144 = (float)(this->AtlasSetup).EdgeSize;
    fStack_114 = (float)auStack_11c[0] * fStack_144;
    if ((__real_43800000 < fStack_144 * fStack_144) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AtlasEdgeSize * AtlasEdgeSize <= 256",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                            ,0x199,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    piVar1 = &(this->EffectiveLightFunctionSlotArray).ArrayMax;
    auStackX_20[0] = (uint)(longlong)(fStack_144 * fStack_144);
    (this->EffectiveLightFunctionSlotArray).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,&(this->EffectiveLightFunctionSlotArray).AllocatorInstance,0,piVar1);
    }
    if ((int)auStackX_20[0] < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)auStackX_20[0]);
    }
    if (*piVar1 < (int)auStackX_20[0]) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,auStackX_20[0],&(this->EffectiveLightFunctionSlotArray).AllocatorInstance,
                 (this->EffectiveLightFunctionSlotArray).ArrayNum,piVar1);
    }
    pTVar2 = &this->EffectiveLocalLightSlotArray;
    piVar1 = &(this->EffectiveLocalLightSlotArray).ArrayMax;
    (this->EffectiveLocalLightSlotArray).ArrayNum = 0;
    if ((this->EffectiveLocalLightSlotArray).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    if ((int)(uint)uStack_150 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uStack_150 & 0xffffffff);
    }
    if (*piVar1 < (int)(uint)uStack_150) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,(uint)uStack_150,&pTVar2->AllocatorInstance,
                 (this->EffectiveLocalLightSlotArray).ArrayNum,piVar1);
    }
    iVar13 = *(int *)&(this->LightFunctionsSet).Elements.field_0x8;
    iVar16 = *(int *)&(this->LightFunctionsSet).Elements.field_0x34;
    if (iVar13 != iVar16) {
      TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
      ::UnhashElements(&this->LightFunctionsSet);
      iVar16 = *(int *)&(this->LightFunctionsSet).Elements.field_0xc;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x8 = 0;
      iVar13 = 0;
      if (iVar16 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,(ForAnyElementType *)&this->LightFunctionsSet,0,
                   (int *)&(this->LightFunctionsSet).Elements.field_0xc);
        iVar13 = *(int *)&(this->LightFunctionsSet).Elements.field_0x8;
      }
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x30 = 0xffffffff;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x34 = 0;
      *(undefined4 *)&(this->LightFunctionsSet).Elements.field_0x28 = 0;
      iVar16 = 0;
    }
    uVar26 = auStackX_20[0];
    if ((uint)(iVar13 - iVar16) < auStackX_20[0]) {
      if ((int)auStackX_20[0] < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidSetNum((longlong)(int)auStackX_20[0]);
      }
      TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&this->LightFunctionsSet,auStackX_20[0]);
      if (uVar26 < 4) {
        iVar13 = 1;
      }
      else {
        uVar24 = (ulonglong)((uVar26 >> 1) + 7) * 2 + 1;
        lVar22 = 0x3f;
        if (uVar24 != 0) {
          for (; uVar24 >> lVar22 == 0; lVar22 = lVar22 + -1) {
          }
        }
        uStack_108 = (undefined4)lVar22;
        iVar13 = 1 << ((byte)lVar22 & 0x1f);
      }
      iVar16 = (this->LightFunctionsSet).HashSize;
      if ((iVar16 == 0) || (iVar16 < iVar13)) {
        (this->LightFunctionsSet).HashSize = iVar13;
        TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
        ::Rehash(&this->LightFunctionsSet);
      }
    }
    puStack_d0 = auStackX_20;
    uStack_120 = 0;
    puStack_c8 = &uStack_120;
    puStack_c0 = auStack_11c;
    puStack_b8 = auStack_11c + 1;
    pfStack_b0 = &fStack_114;
    pfStack_a8 = &fStack_144;
    iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
    auStack_11c[1] = 0;
    pFStack_d8 = this;
    if (iVar13 == *piVar1) {
      iVar13 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
    pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)iVar13 * 0x10;
    *(undefined8 *)pFVar17 = 0;
    *(undefined8 *)(pFVar17 + 8) = 0;
    pTVar10 = CVarLightFunctionAtlasMaxLightCount.Ref;
    bVar12 = IsInParallelRenderingThread();
    if ((!bVar12) &&
       (bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<6409875433831007955>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                            ,0x6d3,"IsInParallelRenderingThread()"), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    uVar20 = (ulonglong)(int)(uint)uStack_150;
    uStack_140 = pTVar10->ShadowedValue[1];
    uStack_10c = (uint)uStack_150;
    pFStack_f8 = (FSortedRegisteredLights *)(FStack_158.Data + uVar20 * 8);
    uVar24 = uVar20;
    FVar27.Data = FStack_158.Data;
    while( true ) {
      pFVar11 = pFStack_f8;
      if ((int)uVar20 != (int)uVar24) {
        aFStackX_10[0] = (FIdentityFunctor)0x0;
        `TCheckedPointerIterator<`LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots'::__l2::FSortedRegisteredLights,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(aFStackX_10);
      }
      if ((FSortedRegisteredLights *)FVar27.Data == pFVar11) break;
      uVar26 = ((FSortedRegisteredLights *)FVar27.Data)->RegisteredLightIndex;
      uVar15 = 0;
      if ((int)uVar26 < (this->RegisteredLights).ArrayNum) {
        uVar15 = ~uVar26 >> 0x1f;
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
      lVar22 = *(longlong *)
                ((this->RegisteredLights).AllocatorInstance.Data + (longlong)(int)uVar26 * 8);
      auStack_104._4_8_ = *(longlong *)(lVar22 + 0x28);
      this_00 = *(FMaterialRenderProxy **)(auStack_104._4_8_ + 0x1c8);
      if ((((int)uStack_140 < 0) || (iStack_148 < (int)uStack_140)) &&
         (this_00 != (FMaterialRenderProxy *)0x0)) {
        this_01 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this_00,TStack_110);
        bVar12 = FMaterial::MaterialIsLightFunctionAtlasCompatible_RenderThread(this_01);
        if (!bVar12) goto LAB_144baa3bd;
        uVar24 = 0;
        FStack_128.LFMaterialUniqueID = 0;
        FStack_128.EffectiveLightFunctionSlotIndex = 0;
        plVar5 = *(longlong **)(*(longlong *)(lVar22 + 0x28) + 0x1c8);
        if (plVar5 != (longlong *)0x0) {
          lVar18 = (**(code **)(*plVar5 + 0x40))();
          uVar24 = (ulonglong)*(uint *)(lVar18 + 0xc);
          FStack_128.LFMaterialUniqueID = *(uint *)(lVar18 + 0xc);
        }
        if (*(int *)&(this->LightFunctionsSet).Elements.field_0x8 !=
            *(int *)&(this->LightFunctionsSet).Elements.field_0x34) {
          FVar6 = (this->LightFunctionsSet).Hash.SecondaryData;
          FVar23 = (ForElementType<FSetElementId>)&(this->LightFunctionsSet).Hash;
          if (FVar6 != (ForElementType<FSetElementId>)0x0) {
            FVar23 = FVar6;
          }
          iVar13 = *(int *)((longlong)FVar23 + ((this->LightFunctionsSet).HashSize - 1 & uVar24) * 4
                           );
          if (iVar13 != -1) {
            do {
              piVar21 = (int *)((longlong)iVar13 * 0x10 +
                               *(longlong *)&(this->LightFunctionsSet).Elements);
              if ((int)uVar24 == *piVar21) {
                if (piVar21 != (int *)0x0) {
                  iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
                  FVar4 = *(FScriptContainerElement *)(piVar21 + 1);
                  if (iVar13 == *piVar1) {
                    iVar13 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,&pTVar2->AllocatorInstance,piVar1);
                  }
                  (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
                  lVar18 = (longlong)iVar13;
                  pFVar17 = (pTVar2->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar17 + lVar18 * 0x10) = 0;
                  *(undefined8 *)(pFVar17 + lVar18 * 0x10 + 8) = 0;
                  pFVar17[lVar18 * 0x10 + 8] = FVar4;
                  *(longlong *)(pFVar17 + lVar18 * 0x10) = lVar22;
                  iVar13 = iStack_148 + 1;
                  iVar16 = iStack_148;
                  goto LAB_144baa3bf;
                }
                break;
              }
              iVar13 = piVar21[2];
            } while (iVar13 != -1);
          }
        }
        if (auStackX_20[0] <=
            (uint)(*(int *)&(this->LightFunctionsSet).Elements.field_0x8 -
                  *(int *)&(this->LightFunctionsSet).Elements.field_0x34)) {
          this->LightCountSkippedDueToMissingAtlasSlot =
               this->LightCountSkippedDueToMissingAtlasSlot + 1;
          TSet<LightFunctionAtlas::FLightFunctionSlotKey,DefaultKeyFuncs<LightFunctionAtlas::FLightFunctionSlotKey,0>,FDefaultSetAllocator>
          ::Emplace<LightFunctionAtlas::FLightFunctionSlotKey_const_&>
                    (&this->SkippedLightFunctionsSet,(FLightFunctionSlotKey *)auStack_104,
                     (bool *)&FStack_128);
        }
        if (auStackX_20[0] <=
            (uint)(*(int *)&(this->LightFunctionsSet).Elements.field_0x8 -
                  *(int *)&(this->LightFunctionsSet).Elements.field_0x34)) goto LAB_144baa3bd;
        uVar26 = `LightFunctionAtlas::FLightFunctionAtlas::AllocateAtlasSlots'::__l2::<lambda_1>::
                 operator()(&pFStack_d8,FStack_128,this_00);
        iVar13 = (this->EffectiveLocalLightSlotArray).ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->EffectiveLocalLightSlotArray).ArrayNum = iVar13 + 1;
        lVar18 = (longlong)iVar13;
        pFVar17 = (pTVar2->AllocatorInstance).Data;
        *(undefined8 *)(pFVar17 + lVar18 * 0x10) = 0;
        *(undefined8 *)(pFVar17 + lVar18 * 0x10 + 8) = 0;
        *(longlong *)(pFVar17 + lVar18 * 0x10) = lVar22;
        pFVar17[lVar18 * 0x10 + 8] = SUB41(uVar26,0);
        iVar13 = iStack_148 + 1;
        iVar16 = iStack_148;
      }
      else {
LAB_144baa3bd:
        iVar13 = iStack_148;
        iVar16 = 0;
      }
LAB_144baa3bf:
      iStack_148 = iVar13;
      FVar27.Data = FVar27.Data + 8;
      uVar24 = (ulonglong)uStack_10c;
      *(char *)(auStack_104._4_8_ + 0x1de) = (char)iVar16;
      uVar20 = uStack_150 & 0xffffffff;
    }
    if ((FSortedRegisteredLights *)FStack_158.Data != (FSortedRegisteredLights *)0x0) {
      FMemory::Free(FStack_158.Data);
    }
  }
  return;
}

// UpdateRegisterLightSceneInfo @ 144beb210

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */

void __thiscall
LightFunctionAtlas::FLightFunctionAtlas::UpdateRegisterLightSceneInfo
          (FLightFunctionAtlas *this,FLightSceneInfo *param_1)

{
  TArray<FLightSceneInfo_*,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FLightSceneInfo *local_res10 [3];
  
  if ((param_1->Proxy->LightFunctionMaterial == (FMaterialRenderProxy *)0x0) ||
     (this->bLightFunctionAtlasEnabled == false)) {
    param_1->Proxy->LightFunctionAtlasLightIndex = '\0';
    return;
  }
  pTVar1 = &this->RegisteredLights;
  pFVar7 = (this->RegisteredLights).AllocatorInstance.Data;
  pFVar3 = pFVar7 + (longlong)(this->RegisteredLights).ArrayNum * 8;
  do {
    local_res10[0] = param_1;
    if (pFVar7 == pFVar3) {
LAB_144beb28b:
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(this->RegisteredLights).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->RegisteredLights).ArrayNum;
      piVar2 = &(this->RegisteredLights).ArrayMax;
      if (iVar6 == *piVar2) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->RegisteredLights).ArrayNum = iVar6 + 1;
      *(FLightSceneInfo **)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_res10[0]
      ;
      return;
    }
    if (*(FLightSceneInfo **)pFVar7 == param_1) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!RegisteredLights.Contains(LightSceneInfo)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\LightFunctionAtlas.cpp"
                         ,0xf5,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_144beb28b;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

