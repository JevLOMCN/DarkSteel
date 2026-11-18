// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// GetGPUSizeBytes @ 1454f3d70

/* WARNING: Enum "Type": Some values do not have unique names */

ulong64 __thiscall
FGlintShadingLUTsStateData::GetGPUSizeBytes(FGlintShadingLUTsStateData *this,bool param_1)

{
  FRHITexture *this_00;
  FRHITextureDesc *this_01;
  ulong64 uVar1;
  FName local_res8;
  FString local_18;
  
  this_00 = this->RHIGlintShadingLUTs;
  if (this_00 == (FRHITexture *)0x0) {
    uVar1 = 0;
  }
  else {
    FRHIResource::AddRef((FRHIResource *)this_00);
    this_01 = (FRHITextureDesc *)(**(code **)(this_00->_padding_ + 0x20))(this_00);
    uVar1 = FRHITextureDesc::CalcMemorySizeEstimate(this_01,0,this_01->NumMips - 1);
  }
  if (((param_1) && (uVar1 != 0)) && (4 < (byte)LogRenderer._0_1_)) {
    local_res8 = (FName)this_00->_padding_;
    ::FName::ToString(&local_res8,&local_18);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)&PTR_u_LogSizes_Textur_150fb85a0,
               (FLogCategoryBase *)&LogRenderer);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (this_00 != (FRHITexture *)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  return uVar1;
}

// Init @ 1457106c0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
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

void __cdecl FGlintShadingLUTsStateData::Init(FRDGBuilder *param_1,FViewInfo *param_2)

{
  ETextureDimension EVar1;
  FSceneViewState *pFVar2;
  IPooledRenderTarget *pIVar3;
  uint uVar4;
  FTextureResource *pFVar5;
  FRHITexture *pFVar6;
  FRHITexture *pFVar7;
  
  pFVar2 = param_2->ViewState;
  if (pFVar2 != (FSceneViewState *)0x0) {
    pIVar3 = (pFVar2->GlintShadingLUTsData).GlintShadingLUTs.Reference;
    if (pIVar3 != (IPooledRenderTarget *)0x0) {
      (pFVar2->GlintShadingLUTsData).GlintShadingLUTs.Reference = (IPooledRenderTarget *)0x0;
      (**(code **)(pIVar3->_padding_ + 0x38))();
    }
    (pFVar2->GlintShadingLUTsData).RHIGlintShadingLUTs = (FRHITexture *)0x0;
    if ((GEngine->GlintTexture).field0_0x0.DebugPtr != (UTexture2DArray *)0x0) {
      uVar4 = Substrate::GlintLUTIndex();
      if (uVar4 == 0) {
        pFVar5 = UTexture::GetResource((UTexture *)(GEngine->GlintTexture).field0_0x0.DebugPtr);
        pFVar6 = (FRHITexture *)pFVar5->_padding_;
        EVar1 = (pFVar6->TextureDesc).Dimension;
        (pFVar2->GlintShadingLUTsData).Dictionary_NLevels = 0x10;
        (pFVar2->GlintShadingLUTsData).Dictionary_NDistributionsPerChannel = 0x40;
        (pFVar2->GlintShadingLUTsData).Dictionary_N = 0xc0;
        (pFVar2->GlintShadingLUTsData).Dictionary_Pyramid0Size = 0x8000;
      }
      else {
        pFVar5 = UTexture::GetResource((UTexture *)(GEngine->GlintTexture2).field0_0x0.DebugPtr);
        pFVar6 = (FRHITexture *)pFVar5->_padding_;
        EVar1 = (pFVar6->TextureDesc).Dimension;
        (pFVar2->GlintShadingLUTsData).Dictionary_NLevels = 8;
        (pFVar2->GlintShadingLUTsData).Dictionary_NDistributionsPerChannel = 0x100;
        (pFVar2->GlintShadingLUTsData).Dictionary_N = 0x300;
        (pFVar2->GlintShadingLUTsData).Dictionary_Pyramid0Size = 0x80;
      }
      pFVar7 = (FRHITexture *)0x0;
      if (EVar1 == Texture2DArray) {
        pFVar7 = pFVar6;
      }
      (pFVar2->GlintShadingLUTsData).Dictionary_Alpha = 0.5;
      (pFVar2->GlintShadingLUTsData).RHIGlintShadingLUTs = pFVar7;
    }
  }
  return;
}

// SetDictionaryParameter @ 145721890

void __thiscall
FGlintShadingLUTsStateData::SetDictionaryParameter
          (FGlintShadingLUTsStateData *this,int param_1,int param_2,float param_3)

{
  this->Dictionary_Alpha = param_3;
  this->Dictionary_N = param_2 * 3;
  this->Dictionary_NLevels = param_1;
  this->Dictionary_NDistributionsPerChannel = param_2;
  this->Dictionary_Pyramid0Size = 1 << ((char)param_1 - 1U & 0x1f);
  return;
}

