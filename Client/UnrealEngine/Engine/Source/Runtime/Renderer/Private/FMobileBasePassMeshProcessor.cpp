// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 7

// FMobileBasePassMeshProcessor @ 144eef100

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FMobileBasePassMeshProcessor * __thiscall
FMobileBasePassMeshProcessor::FMobileBasePassMeshProcessor
          (FMobileBasePassMeshProcessor *this,Type param_1,FScene *param_2,FSceneView *param_3,
          FMeshPassProcessorRenderState *param_4,FMeshPassDrawListContext *param_5,EFlags param_6,
          Type param_7)

{
  FRHIDepthStencilState *pFVar1;
  FRHIUniformBuffer *pFVar2;
  undefined4 uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  
  if (param_1 == Num) {
    iVar6 = -1;
  }
  else {
    iVar6 = FPassProcessorManager::PSOCollectorIndex[0][param_1];
  }
  *(int *)&this->_padding_ = iVar6;
  this->_padding_ = (longlong)param_5;
  this->_padding_ = (longlong)&___7FMobileBasePassMeshProcessor__6B_;
  *(Type *)&this->_padding_ = param_1;
  this->_padding_ = (longlong)param_2;
  *(undefined4 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)param_3;
  pFVar1 = param_4->DepthStencilState;
  (this->PassDrawRenderState).BlendState = param_4->BlendState;
  (this->PassDrawRenderState).DepthStencilState = pFVar1;
  uVar3 = *(undefined4 *)&param_4->field_0x14;
  pFVar2 = param_4->ViewUniformBuffer;
  (this->PassDrawRenderState).DepthStencilAccess = param_4->DepthStencilAccess;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x14 = uVar3;
  (this->PassDrawRenderState).ViewUniformBuffer = pFVar2;
  pFVar2 = param_4->PassUniformBuffer;
  (this->PassDrawRenderState).InstancedViewUniformBuffer = param_4->InstancedViewUniformBuffer;
  (this->PassDrawRenderState).PassUniformBuffer = pFVar2;
  pFVar2 = param_4->NaniteUniformBuffer;
  uVar4 = param_4->StencilRef;
  uVar3 = *(undefined4 *)&param_4->field_0x3c;
  this->Flags = param_6;
  this->bTranslucentBasePass = param_7 != TPT_MAX;
  (this->PassDrawRenderState).NaniteUniformBuffer = pFVar2;
  (this->PassDrawRenderState).StencilRef = uVar4;
  *(undefined4 *)&(this->PassDrawRenderState).field_0x3c = uVar3;
  this->TranslucencyPassType = param_7;
  if ((FReadOnlyCVARCache::bMobileDeferredShadingValue == false) ||
     (FReadOnlyCVARCache::bMobileHDR == false)) {
    this->bDeferredShading = false;
  }
  else {
    this->bDeferredShading = true;
    if (param_7 == TPT_MAX) {
      bVar5 = true;
      goto LAB_144eef1ab;
    }
  }
  bVar5 = false;
LAB_144eef1ab:
  this->bPassUsesDeferredShading = bVar5;
  if (param_2 != (FScene *)0x0) {
    this->EarlyZPassMode = param_2->EarlyZPassMode;
    return this;
  }
  this->EarlyZPassMode = DDM_None;
  return this;
}

// AddMeshBatch @ 144ef7150

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

void __thiscall
FMobileBasePassMeshProcessor::AddMeshBatch
          (FMobileBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4)

{
  ushort uVar1;
  FPrimitiveSceneProxy *pFVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  EBlendMode EVar6;
  ELightMapPolicyType EVar7;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar8;
  FMaterialRenderProxy *pFVar9;
  byte bVar10;
  FMaterialShadingModelField local_res10 [4];
  ulong64 local_res18;
  FPrimitiveSceneProxy *local_res20;
  
  if (((param_1->bUseForMaterial != 0) && ((this->Flags & DoNotCache) == None)) &&
     ((param_3 == (FPrimitiveSceneProxy *)0x0 || (param_3->bRenderInMainPass != '\0')))) {
    local_res18 = param_2;
    local_res20 = param_3;
    for (pFVar9 = param_1->MaterialRenderProxy; pFVar9 != (FMaterialRenderProxy *)0x0;
        pFVar9 = (FMaterialRenderProxy *)
                 (**(code **)(pFVar9->_padding_ + 0x38))(pFVar9,(int)this->_padding_)) {
      this_00 = (FMaterial *)(**(code **)(pFVar9->_padding_ + 0x30))(pFVar9,(int)this->_padding_);
      if ((this_00 != (FMaterial *)0x0) &&
         (pFVar8 = FMaterial::GetRenderingThreadShaderMap(this_00),
         pFVar8 != (FMaterialShaderMap *)0x0)) {
        bVar3 = ShouldDraw(this,this_00);
        if (!bVar3) {
          return;
        }
        (**(code **)(this_00->_padding_ + 0x280))(this_00,local_res10);
        uVar1 = local_res10[0].ShadingModelField >> 10;
        EVar6 = (**(code **)(this_00->_padding_ + 0x268))(this_00);
        bVar10 = ~(byte)local_res10[0].ShadingModelField;
        bVar3 = IsTranslucentBlendMode(EVar6);
        if ((bVar3) || (((byte)uVar1 & 1) != 0)) {
          bVar3 = true;
        }
        else {
          bVar3 = false;
        }
        bVar4 = IsMaskedBlendMode(this_00);
        if (((this->Flags & CanReceiveCSM) == None) ||
           (bVar5 = MaterialCanReceiveCSM(this_00), !bVar5)) {
          bVar5 = false;
        }
        else {
          bVar5 = true;
        }
        pFVar2 = local_res20;
        EVar7 = MobileBasePass::SelectMeshLightmapPolicy
                          ((FScene *)this->_padding_,param_1,local_res20,bVar5,
                           this->bPassUsesDeferredShading,(bool)(bVar10 & 1),bVar3);
        bVar3 = Process(this,param_1,local_res18,param_4,pFVar2,pFVar9,this_00,bVar4,bVar3,
                        local_res10[0],EVar7,bVar5,&param_1->LCI);
        if (bVar3) {
          return;
        }
      }
    }
  }
  return;
}

// CollectPSOInitializers @ 144efb640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FMobileBasePassMeshProcessor::CollectPSOInitializers
          (FMobileBasePassMeshProcessor *this,FSceneTexturesConfig *param_1,FMaterial *param_2,
          FPSOPrecacheVertexFactoryData *param_3,FPSOPrecacheParams *param_4,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_5)

{
  ELightMapPolicyType EVar1;
  ETextureCreateFlags EVar2;
  uint3 uVar3;
  FSceneTexturesConfig *pFVar4;
  ForElementType<ELightMapPolicyType> FVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  IConsoleManager *pIVar12;
  FExclusiveDepthStencil FVar13;
  int *piVar14;
  ForElementType<ELightMapPolicyType> FVar15;
  ulonglong uVar16;
  ERasterizerCullMode EVar17;
  FStaticShaderPlatform FVar18;
  EMobileLocalLightSetting EVar19;
  EMobileLocalLightSetting EVar20;
  undefined1 auStackY_1b8 [32];
  bool local_158;
  bool local_157 [3];
  FMaterialShadingModelField local_154 [2];
  ERasterizerFillMode local_150;
  FSceneTexturesConfig *local_148;
  TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *local_140;
  FPSOPrecacheVertexFactoryData *local_138;
  ForElementType<ELightMapPolicyType> local_130;
  FMeshPassProcessorRenderState local_128;
  FGraphicsPipelineRenderTargetsInfo local_e8;
  TArray<ELightMapPolicyType,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> local_78;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  local_140 = param_5;
  local_148 = param_1;
  local_138 = param_3;
  uVar10 = (**(code **)(param_2->_padding_ + 0x40))(param_2);
  if (1 < uVar10) {
    return;
  }
  if (this->bTranslucentBasePass != false) {
    piVar14 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    if ((*piVar14 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      pIVar12 = IConsoleManager::Get();
      PSOPrecacheTranslucencyAllPass =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.PSOPrecache.TranslucencyAllPass");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar14 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      pIVar12 = IConsoleManager::Get();
      CVarSeparateTranslucency =
           (IConsoleVariable *)
           (**(code **)((longlong)*pIVar12 + 0xc0))(pIVar12,L"r.SeparateTranslucency");
      _Init_thread_footer(&::_TSS1);
    }
    iVar11 = (**(code **)(*(longlong *)CVarSeparateTranslucency + 200))();
    cVar7 = (char)this->_padding_;
    if (iVar11 == 0) {
      if (cVar7 != '\x14') {
        return;
      }
    }
    else if ((cVar7 == '\x14') &&
            (iVar11 = (**(code **)(*(longlong *)PSOPrecacheTranslucencyAllPass + 200))(),
            iVar11 == 0)) {
      return;
    }
  }
  if (((*(uint *)&param_4->field0_0x0 >> 10 & 1) != 0) && (bVar6 = ShouldDraw(this,param_2), bVar6))
  {
    iVar11 = (int)this->_padding_;
    if (iVar11 == 5) {
      FVar18.Platform = SP_NumPlatforms;
    }
    else {
      FVar18.Platform = GRHIGlobals.ShaderPlatformForFeatureLevel[iVar11];
    }
    uVar16 = (param_4->field0_0x0).Data;
    (**(code **)(param_2->_padding_ + 0x48))(param_2);
    cVar7 = (**(code **)(param_2->_padding_ + 0xf8))(param_2);
    local_150 = ERasterizerFillMode_NumBits - (cVar7 != '\0');
    cVar7 = (**(code **)(param_2->_padding_ + 0x48))(param_2);
    if ((cVar7 == '\0') && ((uVar16 >> 0x12 & 1) == 0)) {
      EVar17 = ((uVar16 >> 0xe & 8) != 0) + CM_CW;
    }
    else {
      EVar17 = CM_None;
    }
    (**(code **)(param_2->_padding_ + 0x268))(param_2);
    (**(code **)(param_2->_padding_ + 0x280))(param_2,local_154);
    local_157[0] = (bool)(~(byte)local_154[0].ShadingModelField & 1);
    if ((((ulonglong)((uint)(param_4->field0_0x0).Data & 0x1e00000) - 0x200000 & 0xffffffffffdfffff)
         == 0) || (local_158 = false, ((param_4->field0_0x0).Data >> 0xf & 1) != 0)) {
      local_158 = true;
    }
    local_128.BlendState = (this->PassDrawRenderState).BlendState;
    local_128.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
    local_128.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
    local_128._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
    local_128.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
    local_128.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
    local_128.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
    local_128.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
    local_128.StencilRef = (this->PassDrawRenderState).StencilRef;
    local_128._60_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x3c;
    bVar6 = MaskedInEarlyPass(FVar18);
    if ((this->bTranslucentBasePass != false) || (FVar13.Value = DepthWrite_StencilWrite, bVar6)) {
      FVar13.Value = DepthRead_StencilRead;
    }
    local_e8.RenderTargetsEnabled = 0;
    local_e8.RenderTargetFormats.Elements[0] = '\0';
    local_e8.RenderTargetFormats.Elements[1] = '\0';
    local_e8.RenderTargetFormats.Elements[2] = '\0';
    local_e8.RenderTargetFormats.Elements[3] = '\0';
    local_e8.RenderTargetFlags.Elements[0] = None;
    local_e8.RenderTargetFlags.Elements[1] = None;
    local_e8.RenderTargetFlags.Elements[2] = None;
    local_e8.RenderTargetFlags.Elements[3] = None;
    local_e8.RenderTargetFlags.Elements[4] = None;
    local_e8.RenderTargetFlags.Elements[5] = None;
    local_e8.RenderTargetFlags.Elements[6] = None;
    local_e8.RenderTargetFlags.Elements[7] = None;
    local_e8.RenderTargetFormats.Elements[4] = '\0';
    local_e8.RenderTargetFormats.Elements[5] = '\0';
    local_e8.RenderTargetFormats.Elements[6] = '\0';
    local_e8.RenderTargetFormats.Elements[7] = '\0';
    local_e8.DepthStencilTargetFormat = PF_Unknown;
    local_e8.DepthStencilTargetFlag = None;
    local_e8.DepthTargetLoadAction = ENoAction;
    local_e8.DepthTargetStoreAction = ENoAction;
    local_e8.StencilTargetLoadAction = ENoAction;
    local_e8.StencilTargetStoreAction = ENoAction;
    local_e8.DepthStencilAccess.Value = DepthNop;
    local_e8.NumSamples = 1;
    local_e8.MultiViewCount = '\0';
    local_e8.bHasFragmentDensityAttachment = false;
    bVar6 = MobileAllowFramebufferFetch(FVar18);
    pFVar4 = local_148;
    if ((bVar6) || (this->bTranslucentBasePass == false)) {
      FSceneTexturesConfig::GetGBufferRenderTargetsInfo(local_148,&local_e8,GBL_Default);
    }
    else {
      FVar13.Value = DepthRead_StencilWrite;
      EVar2 = local_148->ColorCreateFlags;
      local_e8.RenderTargetFormats.Elements[local_e8._0_8_ & 0xffffffff] = local_148->ColorFormat;
      local_e8.RenderTargetFlags.Elements[local_e8._0_8_ & 0xffffffff] = EVar2;
      local_e8.RenderTargetsEnabled = local_e8.RenderTargetsEnabled + 1;
    }
    local_e8.DepthStencilTargetFlag = pFVar4->DepthCreateFlags;
    bVar8 = ~(byte)(local_e8.DepthStencilTargetFlag >> 0xc);
    local_e8.DepthStencilTargetFormat = PF_DepthStencil;
    local_e8._96_3_ = (uint3)(bVar8 & 1) << 8;
    uVar3 = (uint3)(CONCAT13(bVar8,local_e8._96_3_) >> 8) & 0x1ffff;
    local_e8.DepthStencilAccess.Value = DepthNop;
    local_e8.DepthTargetStoreAction = (char)uVar3;
    local_e8.StencilTargetLoadAction = (char)(uVar3 >> 8);
    local_e8.StencilTargetStoreAction = (char)(uVar3 >> 0x10);
    local_e8.DepthTargetLoadAction = ELoad;
    local_e8.StencilTargetLoadAction = ELoad;
    local_e8.StencilTargetStoreAction = (char)(uVar3 >> 0x10);
    local_e8.DepthStencilAccess.Value = FVar13.Value;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      UE::StereoRenderUtils::FStereoShaderAspects::FStereoShaderAspects
                (&Aspects,GMaxRHIShaderPlatform);
      _Init_thread_footer(&::_TSS0);
    }
    if (Aspects.bMobileMultiViewEnabled) {
      local_e8.MultiViewCount = (GRHIGlobals.SupportsMobileMultiView != false) + '\x01';
    }
    else {
      local_e8.MultiViewCount = '\0';
    }
    local_e8.NumSamples = (short)local_e8._104_3_;
    local_e8.MultiViewCount = (char)((uint3)local_e8._104_3_ >> 0x10);
    bVar6 = FVariableRateShadingImageManager::IsAttachmentVRSEnabled
                      ((FVariableRateShadingImageManager *)&GVRSImageManager);
    local_e8.bHasFragmentDensityAttachment = bVar6;
    if (this->bTranslucentBasePass == false) {
      bVar8 = 0;
      local_128.DepthStencilState =
           TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
           ::StaticResource.StateRHI.Reference;
      if (this->bPassUsesDeferredShading != false) {
        if (local_154[0].ShadingModelField == 2) {
          bVar8 = 4;
        }
        else if (local_154[0].ShadingModelField != 1) {
          bVar6 = MobileUsesGBufferCustomData((FStaticShaderPlatform)GMaxRHIShaderPlatform);
          bVar8 = (!bVar6 + '\x01') * '\x02';
        }
      }
      local_128.StencilRef = (uint)bVar8;
      bVar6 = IsMaskedBlendMode(param_2);
      if ((bVar6) && (cVar7 = (**(code **)(param_2->_padding_ + 0x218))(param_2), cVar7 != '\0')) {
        local_128.BlendState =
             TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,1>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
             ::StaticResource.StateRHI.Reference;
      }
    }
    else {
      MobileBasePass::SetTranslucentRenderState(&local_128,param_2,local_154[0]);
    }
    bVar6 = local_157[0];
    EVar19 = LOCAL_LIGHTS_DISABLED;
    EVar20 = LOCAL_LIGHTS_DISABLED;
    if ((((local_157[0] != false) && (EVar20 = EVar19, this->bPassUsesDeferredShading == false)) &&
        (0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue)) &&
       ((EVar20 = FReadOnlyCVARCache::MobileForwardLocalLightsValue,
        FReadOnlyCVARCache::MobileForwardLocalLightsValue != 1 &&
        (EVar20 = EVar19, FReadOnlyCVARCache::MobileForwardLocalLightsValue == 2)))) {
      EVar20 = FReadOnlyCVARCache::MobileForwardLocalLightsValue;
    }
    if (((this->Flags & CanReceiveCSM) == None) || (bVar9 = MaterialCanReceiveCSM(param_2), !bVar9))
    {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    MobileBasePass::GetUniformLightMapPolicyTypeForPSOCollection
              (&local_78,bVar6,this->bTranslucentBasePass,this->bPassUsesDeferredShading,bVar9,
               local_158);
    uVar16 = (ulonglong)local_78.ArrayNum;
    local_148 = (FSceneTexturesConfig *)CONCAT44(local_148._4_4_,local_78.ArrayNum);
    FVar15 = (ForElementType<ELightMapPolicyType>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
      FVar15 = local_78.AllocatorInstance.SecondaryData;
    }
    local_130 = (ForElementType<ELightMapPolicyType>)((longlong)FVar15 + uVar16 * 4);
    while( true ) {
      FVar5 = local_130;
      if (local_78.ArrayNum != (int)uVar16) {
        `TCheckedPointerIterator<enum_ELightMapPolicyType,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_157);
      }
      if (FVar15 == FVar5) break;
      EVar1 = *(ELightMapPolicyType *)FVar15;
      CollectPSOInitializersForLMPolicy
                (this,local_138,&local_128,&local_e8,param_2,LOCAL_LIGHTS_DISABLED,EVar1,local_150,
                 EVar17,*(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,local_140);
      if (EVar20 != LOCAL_LIGHTS_DISABLED) {
        CollectPSOInitializersForLMPolicy
                  (this,local_138,&local_128,&local_e8,param_2,EVar20,EVar1,local_150,EVar17,
                   *(EPrimitiveType *)&param_4->field0_0x0 & 0x3f,local_140);
      }
      FVar15 = (ForElementType<ELightMapPolicyType>)((longlong)FVar15 + 4);
      uVar16 = (ulonglong)local_148 & 0xffffffff;
    }
    if (local_78.AllocatorInstance.SecondaryData != (ForElementType<ELightMapPolicyType>)0x0) {
      FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
    }
  }
  return;
}

// CollectPSOInitializersForLMPolicy @ 144efbcb0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

void __thiscall
FMobileBasePassMeshProcessor::CollectPSOInitializersForLMPolicy
          (FMobileBasePassMeshProcessor *this,FPSOPrecacheVertexFactoryData *param_1,
          FMeshPassProcessorRenderState *param_2,FGraphicsPipelineRenderTargetsInfo *param_3,
          FMaterial *param_4,EMobileLocalLightSetting param_5,ELightMapPolicyType param_6,
          ERasterizerFillMode param_7,ERasterizerCullMode param_8,EPrimitiveType param_9,
          TArray<FPSOPrecacheData,TSizedDefaultAllocator<32>_> *param_10)

{
  byte bVar1;
  ushort uVar2;
  code *pcVar3;
  EShaderPlatform EVar4;
  bool bVar5;
  bool bVar6;
  ESubpassHint EVar7;
  ulonglong uVar8;
  uchar uVar9;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_88;
  
  local_88.VertexShader.ShaderContent =
       (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_88.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.PixelShader.ShaderContent =
       (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_88.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_88.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_88.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  bVar5 = MobileBasePass::GetShaders
                    (param_6,param_5,param_4,param_1->VertexFactoryType,&local_88.VertexShader,
                     &local_88.PixelShader);
  EVar4 = GMaxRHIShaderPlatform;
  if (bVar5) {
    uVar9 = '\0';
    bVar1 = param_3->MultiViewCount;
    uVar2 = param_3->NumSamples;
    EVar7 = None;
    uVar8 = (ulonglong)GMaxRHIShaderPlatform;
    bVar5 = this->bDeferredShading;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].bContainsValidPlatformInfo == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0xe2,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar8].MaxFeatureLevel == ES3_1) &&
       (bVar6 = MobileAllowFramebufferFetch((FStaticShaderPlatform)EVar4), bVar6)) {
      if (bVar5 == false) {
        bVar5 = IsMobileTonemapSubpassEnabledInline(EVar4,1 < bVar1,(uint)uVar2);
        EVar7 = bVar5 * '\x02' + DepthReadSubpass;
      }
      else {
        EVar7 = DeferredShadingSubpass;
      }
    }
    if ((this->bTranslucentBasePass != false) &&
       (bVar5 = MobileAllowFramebufferFetch((FStaticShaderPlatform)GMaxRHIShaderPlatform), bVar5)) {
      if ((char)this->_padding_ == '\x10') {
        EVar7 = None;
      }
      else {
        uVar9 = (this->bDeferredShading != false) + '\x01';
      }
    }
    FMeshPassProcessor::
    AddGraphicsPipelineStateInitializer<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>_>
              (param_1,param_4,param_2,param_3,&local_88,param_7,param_8,param_9,Default,EVar7,uVar9
               ,true,(int)this->_padding_,param_10);
  }
  return;
}

// Process @ 144f1ea70

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */

bool __thiscall
FMobileBasePassMeshProcessor::Process
          (FMobileBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,int param_3,
          FPrimitiveSceneProxy *param_4,FMaterialRenderProxy *param_5,FMaterial *param_6,
          bool param_7,bool param_8,FMaterialShadingModelField param_9,ELightMapPolicyType param_10,
          bool param_11,FLightCacheInterface **param_12)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  char cVar8;
  byte bVar9;
  FStaticShaderPlatform FVar10;
  uint uVar11;
  FVertexFactoryType *pFVar12;
  FMeshDrawCommandSortKey FVar13;
  ushort uVar14;
  uint uVar15;
  ulonglong uVar16;
  FMeshDrawCommandSortKey_u_0 FVar17;
  byte bVar18;
  EMobileLocalLightSetting EVar19;
  EMobileLocalLightSetting EVar20;
  ERasterizerCullMode EVar21;
  ERasterizerFillMode local_res8;
  FMeshPassProcessorRenderState local_f8;
  TMobileBasePassShaderElementData<FUniformLightMapPolicy> local_b8;
  TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>
  local_98;
  
  local_98.VertexShader.ShaderContent =
       (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_98.VertexShader.ShaderMap = (FShaderMapBase *)0x0;
  EVar19 = LOCAL_LIGHTS_DISABLED;
  local_98.PixelShader.ShaderContent =
       (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0;
  local_98.PixelShader.ShaderMap = (FShaderMapBase *)0x0;
  local_98.GeometryShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_98.GeometryShader.ShaderMap = (FShaderMapBase *)0x0;
  local_98.ComputeShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_98.ComputeShader.ShaderMap = (FShaderMapBase *)0x0;
  local_98.RayTracingShader.ShaderContent = (FMeshMaterialShader *)0x0;
  local_98.RayTracingShader.ShaderMap = (FShaderMapBase *)0x0;
  local_res8 = ERasterizerFillMode_NumBits;
  EVar20 = LOCAL_LIGHTS_DISABLED;
  if ((((((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0) &&
        (EVar20 = EVar19, param_4 != (FPrimitiveSceneProxy *)0x0)) &&
       ((param_9.ShadingModelField & 1) == 0)) && (this->bPassUsesDeferredShading == false)) &&
     ((((FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_),
        GMobileForwardLocalLightsSinglePermutation != 0 ||
        ((0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue &&
         (FReadOnlyCVARCache::bMobileForwardParticleLights != false)))) ||
       (0 < param_4->PrimitiveSceneInfo->NumMobileDynamicLocalLights)) &&
      (FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_),
      0 < FReadOnlyCVARCache::MobileForwardLocalLightsValue)))) {
    if (FReadOnlyCVARCache::MobileForwardLocalLightsValue == 1) {
      EVar20 = LOCAL_LIGHTS_ENABLED;
    }
    else if (FReadOnlyCVARCache::MobileForwardLocalLightsValue == 2) {
      EVar20 = LOCAL_LIGHTS_BUFFER;
    }
  }
  pFVar12 = (FVertexFactoryType *)(**(code **)(param_1->VertexFactory->_padding_ + 0x30))();
  bVar7 = MobileBasePass::GetShaders
                    (param_10,EVar20,param_6,pFVar12,&local_98.VertexShader,&local_98.PixelShader);
  if (!bVar7) {
    return bVar7;
  }
  cVar8 = (**(code **)(param_6->_padding_ + 0x250))(param_6);
  if (((cVar8 != '\0') || (param_1->bDitheredLODTransition != 0)) &&
     ((FSceneInterface *)this->_padding_ != (FSceneInterface *)0x0)) {
    FVar10.Platform = FSceneInterface::GetShaderPlatform((FSceneInterface *)this->_padding_);
    bVar7 = MaskedInEarlyPass(FVar10);
    if (bVar7) {
      bVar7 = true;
      goto LAB_144f1ebce;
    }
  }
  bVar7 = false;
LAB_144f1ebce:
  uVar11 = this->Flags >> 2;
  if ((this->_padding_ == 0) ||
     ((iVar2 = *(int *)(this->_padding_ + 0x2b18), iVar2 != 3 && (iVar2 != 5)))) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  local_f8.BlendState = (this->PassDrawRenderState).BlendState;
  local_f8.DepthStencilState = (this->PassDrawRenderState).DepthStencilState;
  local_f8.DepthStencilAccess = (this->PassDrawRenderState).DepthStencilAccess;
  local_f8._20_4_ = *(undefined4 *)&(this->PassDrawRenderState).field_0x14;
  local_f8.ViewUniformBuffer = (this->PassDrawRenderState).ViewUniformBuffer;
  local_f8.InstancedViewUniformBuffer = (this->PassDrawRenderState).InstancedViewUniformBuffer;
  local_f8.PassUniformBuffer = (this->PassDrawRenderState).PassUniformBuffer;
  local_f8.NaniteUniformBuffer = (this->PassDrawRenderState).NaniteUniformBuffer;
  local_f8._56_8_ = *(undefined8 *)&(this->PassDrawRenderState).StencilRef;
  if ((uVar11 & 1) == 0) {
    if (this->bTranslucentBasePass == (bool)((byte)uVar11 & 1)) {
      if (((param_1->bUseForDepthPass != 0) && (bVar4)) || (bVar7)) {
        local_f8.DepthStencilState =
             TStaticStateRHI<TStaticDepthStencilState<0,4,0,7,0,0,0,0,7,0,0,0,255,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
             ::StaticResource.StateRHI.Reference;
        local_f8._56_8_ = local_f8._56_8_ & 0xffffffff00000000;
      }
      else {
        if ((this->Flags & CanUseDepthStencil) != None) {
          local_f8.DepthStencilState =
               TStaticStateRHI<TStaticDepthStencilState<1,3,1,7,0,0,2,0,7,0,0,0,0,255>,TRefCountPtr<FRHIDepthStencilState>,FRHIDepthStencilState_*>
               ::StaticResource.StateRHI.Reference;
          if ((param_4 == (FPrimitiveSceneProxy *)0x0) || (param_4->bReceivesDecals == '\0')) {
            bVar18 = 0;
          }
          else {
            bVar18 = 0x80;
          }
          if (this->bPassUsesDeferredShading == false) {
            if ((param_4 == (FPrimitiveSceneProxy *)0x0) || (param_4->bCastContactShadow == '\0')) {
              bVar9 = 0;
            }
            else {
              bVar9 = 0x10;
            }
            bVar18 = bVar18 | bVar9;
          }
          else {
            if (param_9.ShadingModelField == 2) {
              bVar9 = 4;
            }
            else if (param_9.ShadingModelField == 1) {
              bVar9 = 0;
            }
            else {
              bVar7 = MobileUsesGBufferCustomData((FStaticShaderPlatform)GMaxRHIShaderPlatform);
              bVar9 = (!bVar7 + '\x01') * '\x02';
            }
            bVar18 = bVar18 | bVar9;
            if (param_4 != (FPrimitiveSceneProxy *)0x0) {
              bVar18 = bVar18 | (~param_4->LightingChannelMask & 1 |
                                param_4->LightingChannelMask & 6) << 4;
            }
          }
          local_f8.StencilRef = (uint)bVar18;
        }
        bVar7 = IsMaskedBlendMode(param_6);
        if ((bVar7) && (cVar8 = (**(code **)(param_6->_padding_ + 0x218))(param_6), cVar8 != '\0'))
        {
          local_f8.BlendState =
               TStaticStateRHI<TStaticBlendState<7,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,1>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
               ::StaticResource.StateRHI.Reference;
        }
      }
    }
    else {
      MobileBasePass::SetTranslucentRenderState(&local_f8,param_6,param_9);
    }
  }
  if (this->bTranslucentBasePass == false) {
    if (param_4 == (FPrimitiveSceneProxy *)0x0) {
      bVar18 = 0;
    }
    else {
      bVar18 = param_4->bTreatAsBackgroundForOcclusion;
    }
    uVar16 = 0;
    if (local_98.VertexShader.ShaderContent !=
        (TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
      uVar16 = (ulonglong)*(uint *)&(local_98.VertexShader.ShaderContent)->field_0xd8;
    }
    if (local_98.PixelShader.ShaderContent ==
        (TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy> *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = *(uint *)&(local_98.PixelShader.ShaderContent)->field_0xd8;
    }
    uVar16 = (ulonglong)uVar11 << 0x10 | uVar16 & 0xffff00000000ffff | (ulonglong)bVar18 << 0x30;
    FVar17.PackedData = uVar16 | (ulonglong)param_7 << 0x31;
    if (this->EarlyZPassMode != DDM_None) {
      FVar17.PackedData = (ulonglong)param_7 << 0x31 ^ 0x2000000000000 | uVar16;
    }
  }
  else {
    FVar13 = CalculateTranslucentMeshStaticSortKey(param_4,param_1->MeshIdInPrimitive);
    if ((param_9.ShadingModelField >> 10 & 1) == 0) {
      uVar15 = FVar13.field0_0x0._6_2_ + 1;
      uVar11 = 0xffff;
      if (uVar15 < 0xffff) {
        uVar11 = uVar15;
      }
      uVar14 = 0;
      if (uVar11 != 0) {
        uVar14 = (ushort)uVar11;
      }
    }
    else {
      uVar14 = 0;
    }
    FVar17.PackedData = (ulonglong)uVar14 << 0x30 | (ulonglong)FVar13.field0_0x0 & 0xffffffffffff;
  }
  (**(code **)(param_6->_padding_ + 0x48))(param_6);
  cVar8 = (**(code **)(param_6->_padding_ + 0xf8))(param_6);
  if ((cVar8 != '\0') || (param_1->bWireframe != 0)) {
    local_res8 = FM_Wireframe;
  }
  cVar8 = (**(code **)(param_6->_padding_ + 0x48))(param_6);
  if ((cVar8 == '\0') && (param_1->bDisableBackfaceCulling == 0)) {
    EVar21 = (param_1->ReverseCulling != 0) + CM_CW;
  }
  else {
    EVar21 = CM_None;
  }
  local_b8.LightMapPolicyElementData = *param_12;
  local_b8.bCanReceiveCSM = param_11;
  local_b8._padding_ = 0;
  local_b8._padding_ = 0;
  FMeshMaterialShaderElementData::InitializeMeshMaterialData
            ((FMeshMaterialShaderElementData *)&local_b8,(FSceneView *)this->_padding_,param_4,
             param_1,param_3,false);
  FMeshPassProcessor::
  BuildMeshDrawCommands<TMeshProcessorShaders<TMobileBasePassVSPolicyParamType<FUniformLightMapPolicy>,TMobileBasePassPSPolicyParamType<FUniformLightMapPolicy>,FMeshMaterialShader,FMeshMaterialShader,FMeshMaterialShader>,TMobileBasePassShaderElementData<FUniformLightMapPolicy>_>
            ((FMeshPassProcessor *)this,param_1,param_2,param_4,param_5,param_6,&local_f8,&local_98,
             local_res8,EVar21,(FMeshDrawCommandSortKey)FVar17,Default,&local_b8);
  return true;
}

// ShouldDraw @ 144f2b7b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall
FMobileBasePassMeshProcessor::ShouldDraw(FMobileBasePassMeshProcessor *this,FMaterial *param_1)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  EBlendMode EVar5;
  ushort local_res8 [4];
  
  iVar4 = (**(code **)(param_1->_padding_ + 0x40))(param_1);
  (**(code **)(param_1->_padding_ + 0x280))(param_1,local_res8);
  if ((local_res8[0] >> 10 & 1) == 0) {
LAB_144f2b809:
    bVar1 = false;
  }
  else {
    bVar1 = MobileSupportsSM5MaterialNodes
                      ((FStaticShaderPlatform)GRHIGlobals.ShaderPlatformForFeatureLevel[1]);
    if (bVar1) goto LAB_144f2b809;
    bVar1 = true;
  }
  EVar5 = (**(code **)(param_1->_padding_ + 0x268))(param_1);
  bVar2 = IsTranslucentBlendMode(EVar5);
  if ((bVar2) || (bVar2 = false, bVar1)) {
    bVar2 = true;
  }
  if (this->bTranslucentBasePass == false) {
    if ((!bVar2) && (bVar1 = true, ((byte)(local_res8[0] >> 10) & 1) == 0)) goto LAB_144f2b88f;
  }
  else if (bVar2) {
    cVar3 = (**(code **)(param_1->_padding_ + 0xe0))(param_1);
    if (cVar3 == '\0') {
      if (this->TranslucencyPassType == TPT_AllTranslucency) {
LAB_144f2b878:
        bVar1 = true;
        goto LAB_144f2b88f;
      }
      if (this->TranslucencyPassType == TPT_TranslucencyStandard) {
        cVar3 = (**(code **)(param_1->_padding_ + 0x328))(param_1);
        if (cVar3 == '\0') goto LAB_144f2b878;
      }
      if (this->TranslucencyPassType == TPT_TranslucencyAfterDOF) {
        cVar3 = (**(code **)(param_1->_padding_ + 0x328))(param_1);
        if (cVar3 != '\0') goto LAB_144f2b878;
      }
    }
  }
  bVar1 = false;
LAB_144f2b88f:
  bVar2 = false;
  if (iVar4 != 3) {
    bVar2 = bVar1;
  }
  return bVar2;
}

// TryAddMeshBatch @ 144f30510

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall
FMobileBasePassMeshProcessor::TryAddMeshBatch
          (FMobileBasePassMeshProcessor *this,FMeshBatch *param_1,ulong64 param_2,
          FPrimitiveSceneProxy *param_3,int param_4,FMaterialRenderProxy *param_5,FMaterial *param_6
          )

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  EBlendMode EVar5;
  ELightMapPolicyType EVar6;
  byte bVar7;
  FMaterialShadingModelField local_38 [8];
  
  bVar2 = ShouldDraw(this,param_6);
  if (!bVar2) {
    return true;
  }
  (**(code **)(param_6->_padding_ + 0x280))(param_6,local_38);
  uVar1 = local_38[0].ShadingModelField >> 10;
  EVar5 = (**(code **)(param_6->_padding_ + 0x268))(param_6);
  bVar7 = ~(byte)local_38[0].ShadingModelField;
  bVar2 = IsTranslucentBlendMode(EVar5);
  if ((bVar2) || (((byte)uVar1 & 1) != 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  bVar3 = IsMaskedBlendMode(param_6);
  if ((this->Flags & CanReceiveCSM) != None) {
    bVar4 = MaterialCanReceiveCSM(param_6);
    if (bVar4) {
      bVar4 = true;
      goto LAB_144f305d8;
    }
  }
  bVar4 = false;
LAB_144f305d8:
  EVar6 = MobileBasePass::SelectMeshLightmapPolicy
                    ((FScene *)this->_padding_,param_1,param_3,bVar4,this->bPassUsesDeferredShading,
                     (bool)(bVar7 & 1),bVar2);
  bVar2 = Process(this,param_1,param_2,param_4,param_3,param_5,param_6,bVar3,bVar2,local_38[0],EVar6
                  ,bVar4,&param_1->LCI);
  return bVar2;
}

