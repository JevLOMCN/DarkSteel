// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// BindShaders @ 147a34320

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
FIESLightProfileBatchedElementParameters::BindShaders
          (FIESLightProfileBatchedElementParameters *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  ushort uVar1;
  code *pcVar2;
  FShader *pFVar3;
  bool bVar4;
  FGlobalShaderMap *pFVar5;
  FShaderType *pFVar6;
  FName FVar7;
  FRHIVertexShader *pFVar8;
  FRHIPixelShader *pFVar9;
  FRHIBatchedShaderParameters *pFVar10;
  FIESLightProfilePS *pFVar11;
  uint uVar12;
  undefined1 local_res8 [24];
  float local_res20 [2];
  undefined1 local_b8 [16];
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_a8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_88;
  TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable> local_78;
  FString local_68;
  FString local_58 [2];
  
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar6 = (FShaderType *)FSimpleElementVS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_88,pFVar6,0);
  if ((FSimpleElementVS *)local_88.ShaderContent == (FSimpleElementVS *)0x0) {
    FVar7 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res8);
    ::FName::ToString((FName *)FVar7,&local_68);
    FSimpleElementVS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FSimpleElementVS::GetStaticType();
  local_a8.ShaderContent = (FSimpleElementVS *)local_88.ShaderContent;
  local_a8.ShaderMap = local_88.ShaderMap;
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar6 = (FShaderType *)FIESLightProfilePS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_98,pFVar6,0);
  if ((FIESLightProfilePS *)local_98.ShaderContent == (FIESLightProfilePS *)0x0) {
    FVar7 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_b8);
    ::FName::ToString((FName *)FVar7,local_58);
    FIESLightProfilePS::GetStaticType();
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_58[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58[0].Data.AllocatorInstance.Data);
    }
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FIESLightProfilePS::GetStaticType();
  pFVar3 = local_98.ShaderContent;
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  local_78.ShaderContent = (FIESLightProfilePS *)local_98.ShaderContent;
  local_78.ShaderMap = local_98.ShaderMap;
  pFVar8 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_a8,true);
  (param_2->BoundShaderState).VertexShaderRHI = pFVar8;
  pFVar9 = TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable>::GetPixelShader(&local_78,true)
  ;
  (param_2->BoundShaderState).PixelShaderRHI = pFVar9;
  param_2->PrimitiveType = PT_TriangleList;
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_2);
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar8 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_a8,true);
  pFVar10 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_a8.ShaderContent,pFVar10,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar8,pFVar10);
  pFVar9 = TShaderRefBase<FIESLightProfilePS,FShaderMapPointerTable>::GetPixelShader(&local_78,true)
  ;
  pFVar10 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  local_res20[0] = this->BrightnessInLumens;
  pFVar11 = (FIESLightProfilePS *)pFVar3;
  if (((FShaderResourceParameter *)((longlong)pFVar3 + 0xe0))->NumResources != '\0') {
    param_7->LastRenderTime = (double)FApp::CurrentTime;
    pFVar11 = (FIESLightProfilePS *)local_98.ShaderContent;
  }
  SetTextureParameter(pFVar10,(FShaderResourceParameter *)((longlong)pFVar3 + 0xe0),
                      (param_7->TextureRHI).Reference);
  SetSamplerParameter(pFVar10,&pFVar11->IESTextureSampler,(param_7->SamplerStateRHI).Reference);
  uVar1 = (pFVar11->BrightnessInLumens).NumBytes;
  uVar12 = (uint)uVar1;
  if (4 < uVar1) {
    uVar12 = 4;
  }
  if (uVar12 != 0) {
    FRHIBatchedShaderParameters::SetShaderParameter
              (pFVar10,(uint)(pFVar11->BrightnessInLumens).BufferIndex,
               (uint)(pFVar11->BrightnessInLumens).BaseIndex,uVar12,local_res20);
  }
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar9,pFVar10);
  return;
}

