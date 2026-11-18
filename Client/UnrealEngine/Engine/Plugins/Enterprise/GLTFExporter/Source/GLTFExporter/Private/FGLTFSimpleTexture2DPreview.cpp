// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 1

// BindShaders @ 14e5e3560

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
FGLTFSimpleTexture2DPreview::BindShaders
          (FGLTFSimpleTexture2DPreview *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  code *pcVar1;
  bool bVar2;
  FGlobalShaderMap *pFVar3;
  FShaderType *pFVar4;
  FName this_00;
  FRHIVertexShader *pFVar5;
  FRHIPixelShader *pFVar6;
  FRHIBatchedShaderParameters *pFVar7;
  undefined1 local_res18 [16];
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_58;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_48;
  TShaderRefBase<FGLTFSimpleTexture2DPS,FShaderMapPointerTable> local_38;
  FString local_28 [2];
  
  pFVar3 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FSimpleElementVS>::TShaderMapRef<FSimpleElementVS>
            ((TShaderMapRef<FSimpleElementVS> *)&local_58,pFVar3);
  pFVar3 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar4 = (FShaderType *)FGLTFSimpleTexture2DPS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar3,&local_48,pFVar4,0);
  if ((FGLTFSimpleTexture2DPS *)local_48.ShaderContent == (FGLTFSimpleTexture2DPS *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_res18);
    ::FName::ToString((FName *)this_00,local_28);
    FGLTFSimpleTexture2DPS::GetStaticType();
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FGLTFSimpleTexture2DPS::GetStaticType();
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  local_38.ShaderContent = (FGLTFSimpleTexture2DPS *)local_48.ShaderContent;
  local_38.ShaderMap = local_48.ShaderMap;
  pFVar5 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_58,true);
  (param_2->BoundShaderState).VertexShaderRHI = pFVar5;
  pFVar6 = TShaderRefBase<FGLTFSimpleTexture2DPS,FShaderMapPointerTable>::GetPixelShader
                     (&local_38,true);
  (param_2->BoundShaderState).PixelShaderRHI = pFVar6;
  param_2->PrimitiveType = PT_TriangleList;
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar5 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_58,true);
  pFVar7 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_58.ShaderContent,pFVar7,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar5,pFVar7);
  pFVar6 = TShaderRefBase<FGLTFSimpleTexture2DPS,FShaderMapPointerTable>::GetPixelShader
                     (&local_38,true);
  pFVar7 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  SetTextureParameter(pFVar7,(FShaderResourceParameter *)((longlong)local_48.ShaderContent + 0xe0),
                      (FShaderResourceParameter *)((longlong)local_48.ShaderContent + 0xe4),param_7)
  ;
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar6,pFVar7);
  return;
}

