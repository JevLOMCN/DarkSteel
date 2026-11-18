// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// BindShaders @ 148df4520

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
FBatchedElementNiagaraSimple::BindShaders
          (FBatchedElementNiagaraSimple *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  FTexture *pFVar1;
  FGlobalShaderMap *pFVar2;
  FRHIVertexShader *pFVar3;
  FRHIPixelShader *pFVar4;
  TRefCountPtr<FRHIBlendState> TVar5;
  FRHIBatchedShaderParameters *pFVar6;
  FShaderParametersMetadata *pFVar7;
  undefined1 auStackY_108 [32];
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_c8;
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
  float local_78;
  FRHITexture *local_70;
  FRHISamplerState *local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pFVar2 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FSimpleElementVS>::TShaderMapRef<FSimpleElementVS>
            ((TShaderMapRef<FSimpleElementVS> *)&local_c8,pFVar2);
  pFVar2 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FNiagaraSimpleElementPS>::TShaderMapRef<FNiagaraSimpleElementPS>
            ((TShaderMapRef<FNiagaraSimpleElementPS> *)&local_d8,pFVar2);
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  pFVar3 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_c8,true);
  (param_2->BoundShaderState).VertexShaderRHI = pFVar3;
  pFVar4 = TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable> *)&local_d8,
                      true);
  (param_2->BoundShaderState).PixelShaderRHI = pFVar4;
  param_2->PrimitiveType = PT_TriangleList;
  TVar5 = TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
          ::StaticResource.StateRHI;
  if (this->bAlphaBlend != false) {
    TVar5 = TStaticStateRHI<TStaticBlendState<15,0,1,5,0,1,5,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
            ::StaticResource.StateRHI;
  }
  param_2->BlendState = TVar5.Reference;
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_2);
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar3 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_c8,true);
  pFVar6 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_c8.ShaderContent,pFVar6,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar3,pFVar6);
  fStack_b0 = (float)(this->ColorTransform).M[0][2];
  fStack_ac = (float)(this->ColorTransform).M[0][3];
  local_b8 = (float)(this->ColorTransform).M[0][0];
  fStack_b4 = (float)(this->ColorTransform).M[0][1];
  local_a8 = (float)(this->ColorTransform).M[1][0];
  fStack_a4 = (float)(this->ColorTransform).M[1][1];
  fStack_a0 = (float)(this->ColorTransform).M[1][2];
  fStack_9c = (float)(this->ColorTransform).M[1][3];
  fStack_90 = (float)(this->ColorTransform).M[2][2];
  fStack_8c = (float)(this->ColorTransform).M[2][3];
  local_98 = (float)(this->ColorTransform).M[2][0];
  fStack_94 = (float)(this->ColorTransform).M[2][1];
  local_88 = (float)(this->ColorTransform).M[3][0];
  fStack_84 = (float)(this->ColorTransform).M[3][1];
  fStack_80 = (float)(this->ColorTransform).M[3][2];
  fStack_7c = (float)(this->ColorTransform).M[3][3];
  local_78 = param_5;
  pFVar1 = GWhiteTexture;
  if (param_7 != (FTexture *)0x0) {
    pFVar1 = param_7;
  }
  local_70 = (pFVar1->TextureRHI).Reference;
  local_68 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
  pFVar4 = TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable>::GetPixelShader
                     ((TShaderRefBase<FNiagaraSimpleElementPS,FShaderMapPointerTable> *)&local_d8,
                      true);
  pFVar7 = FNiagaraSimpleElementPS::FParameters::FTypeInfo::GetStructMetadata();
  ValidateShaderParameters(&local_d8,pFVar7,&local_b8);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar4,&(local_d8.ShaderContent)->Bindings,pFVar7,
             &local_b8);
  return;
}

