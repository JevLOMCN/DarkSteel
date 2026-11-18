// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// BindShaders @ 147a34640

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
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
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FMipLevelBatchedElementParameters::BindShaders
          (FMipLevelBatchedElementParameters *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  bool bVar1;
  ushort uVar2;
  code *pcVar3;
  FGraphicsPipelineStateInitializer *pFVar4;
  bool bVar5;
  FGlobalShaderMap *pFVar6;
  FShaderType *pFVar7;
  FName FVar8;
  FRHIVertexShader *pFVar9;
  FRHIPixelShader *pFVar10;
  FRHIBatchedShaderParameters *pFVar11;
  uint uVar12;
  undefined1 auStackY_1e8 [32];
  TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable> local_188;
  FGraphicsPipelineStateInitializer *local_178;
  TMatrix<double> *local_170;
  FTexture *local_168;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_158;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_148;
  TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable> local_138;
  undefined1 local_128 [8];
  undefined1 local_120 [8];
  FString local_118;
  FString local_108;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_170 = param_6;
  local_168 = param_7;
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  local_178 = param_2;
  pFVar6 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar7 = (FShaderType *)FCubemapTexturePropertiesVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar6,&local_158,pFVar7,0);
  if ((FCubemapTexturePropertiesVS *)local_158.ShaderContent == (FCubemapTexturePropertiesVS *)0x0)
  {
    FVar8 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_128);
    ::FName::ToString((FName *)FVar8,&local_118);
    FCubemapTexturePropertiesVS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_118.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FCubemapTexturePropertiesVS::GetStaticType();
  bVar5 = this->bHDROutput;
  bVar1 = this->bIsTextureCubeArray;
  local_188.ShaderContent = (FCubemapTexturePropertiesVS *)local_158.ShaderContent;
  local_188.ShaderMap = local_158.ShaderMap;
  pFVar6 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar7 = (FShaderType *)FCubemapTexturePropertiesPS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar6,&local_148,pFVar7,(-(uint)(bVar1 != false) & 2) + (uint)(bVar5 != false));
  if ((FCubemapTexturePropertiesPS *)local_148.ShaderContent == (FCubemapTexturePropertiesPS *)0x0)
  {
    FVar8 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_120);
    ::FName::ToString((FName *)FVar8,&local_108);
    FCubemapTexturePropertiesPS::GetStaticType();
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FCubemapTexturePropertiesPS::GetStaticType();
  pFVar4 = local_178;
  local_138.ShaderContent = (FCubemapTexturePropertiesPS *)local_148.ShaderContent;
  local_138.ShaderMap = local_148.ShaderMap;
  (local_178->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  pFVar9 = TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_188,true);
  (pFVar4->BoundShaderState).VertexShaderRHI = pFVar9;
  pFVar10 = TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable>::GetPixelShader
                      (&local_138,true);
  (pFVar4->BoundShaderState).PixelShaderRHI = pFVar10;
  pFVar4->PrimitiveType = PT_TriangleList;
  FRHICommandList::ApplyCachedRenderTargets(param_1,pFVar4);
  SetGraphicsPipelineState(param_1,pFVar4,0,CheckApply,true);
  pFVar9 = TShaderRefBase<FCubemapTexturePropertiesVS,FShaderMapPointerTable>::GetVertexShader
                     (&local_188,true);
  pFVar11 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  uVar2 = ((local_188.ShaderContent)->Transform).NumBytes;
  uVar12 = (uint)uVar2;
  fStack_f0 = (float)param_4->M[0][2];
  fStack_ec = (float)param_4->M[0][3];
  local_f8 = (float)param_4->M[0][0];
  fStack_f4 = (float)param_4->M[0][1];
  local_e8 = (float)param_4->M[1][0];
  fStack_e4 = (float)param_4->M[1][1];
  fStack_e0 = (float)param_4->M[1][2];
  fStack_dc = (float)param_4->M[1][3];
  local_d8 = (float)param_4->M[2][0];
  fStack_d4 = (float)param_4->M[2][1];
  fStack_d0 = (float)param_4->M[2][2];
  fStack_cc = (float)param_4->M[2][3];
  local_c8 = (float)param_4->M[3][0];
  fStack_c4 = (float)param_4->M[3][1];
  if (0x80 < uVar2) {
    uVar12 = 0x80;
  }
  fStack_c0 = (float)param_4->M[3][2];
  fStack_bc = (float)param_4->M[3][3];
  local_b8 = local_f8;
  fStack_b4 = fStack_f4;
  fStack_b0 = fStack_f0;
  fStack_ac = fStack_ec;
  local_a8 = local_e8;
  fStack_a4 = fStack_e4;
  fStack_a0 = fStack_e0;
  fStack_9c = fStack_dc;
  local_98 = local_d8;
  fStack_94 = fStack_d4;
  fStack_90 = fStack_d0;
  fStack_8c = fStack_cc;
  local_88 = local_c8;
  fStack_84 = fStack_c4;
  fStack_80 = fStack_c0;
  fStack_7c = fStack_bc;
  if (uVar12 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (pFVar11,(uint)((local_188.ShaderContent)->Transform).BufferIndex,
               (uint)((local_188.ShaderContent)->Transform).BaseIndex,uVar12,&local_f8);
  }
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar9,pFVar11);
  pFVar10 = TShaderRefBase<FCubemapTexturePropertiesPS,FShaderMapPointerTable>::GetPixelShader
                      (&local_138,true);
  pFVar11 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FCubemapTexturePropertiesPS::SetParameters
            ((FCubemapTexturePropertiesPS *)local_148.ShaderContent,pFVar11,local_168,local_170,
             this->MipLevel,this->SliceIndex,this->bIsTextureCubeArray,&this->ViewMatrix,
             this->bShowLongLatUnwrap,param_5,this->bUsePointSampling);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar10,pFVar11);
  return;
}

