// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// BindShaders @ 148df4330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVRSShadingRate": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EApplyRendertargetOption": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FBatchedElementNiagaraInvertColorChannel::BindShaders
          (FBatchedElementNiagaraInvertColorChannel *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  FGlobalShaderMap *pFVar1;
  FRHIVertexShader *pFVar2;
  FRHIPixelShader *pFVar3;
  FRHIBatchedShaderParameters *pFVar4;
  FShaderParametersMetadata *pFVar5;
  undefined1 auStackY_f8 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_c8;
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_b8;
  float local_a8 [2];
  float afStack_a0 [2];
  float local_98 [2];
  float afStack_90 [2];
  float local_88 [2];
  float afStack_80 [2];
  float local_78 [2];
  float afStack_70 [2];
  float local_68;
  FRHITexture *local_60;
  FRHISamplerState *local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar1 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FSimpleElementVS>::TShaderMapRef<FSimpleElementVS>
            ((TShaderMapRef<FSimpleElementVS> *)&local_b8,pFVar1);
  pFVar1 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FNiagaraSimpleElementPS>::TShaderMapRef<FNiagaraSimpleElementPS>
            ((TShaderMapRef<FNiagaraSimpleElementPS> *)&local_c8,pFVar1);
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  pFVar2 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_b8,true);
  (param_2->BoundShaderState).VertexShaderRHI = pFVar2;
  pFVar3 = TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable> *)&local_c8,
                      true);
  (param_2->BoundShaderState).PixelShaderRHI = pFVar3;
  param_2->PrimitiveType = PT_TriangleList;
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<8,1,1,8,1,1,6,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_2);
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar2 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_b8,true);
  pFVar4 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_b8.ShaderContent,pFVar4,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar2,pFVar4);
  local_a8[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
  local_a8[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
  afStack_a0[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
  afStack_a0[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
  local_88[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
  local_88[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
  afStack_80[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
  afStack_80[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
  local_98[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
  local_98[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
  afStack_90[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
  afStack_90[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
  local_68 = param_5;
  local_78[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
  local_78[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
  afStack_70[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
  afStack_70[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
  local_60 = (GWhiteTexture->TextureRHI).Reference;
  local_58 = TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
  pFVar3 = TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable> *)&local_c8,
                      true);
  pFVar5 = FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata();
  ValidateShaderParameters(&local_c8,pFVar5,local_a8);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar3,&(local_c8.ShaderContent)->Bindings,pFVar5,
             local_a8);
  return;
}

