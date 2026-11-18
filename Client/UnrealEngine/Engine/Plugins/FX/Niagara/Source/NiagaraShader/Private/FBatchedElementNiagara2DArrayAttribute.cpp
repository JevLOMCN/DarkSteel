// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// BindShaders @ 148df3ff0

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
FBatchedElementNiagara2DArrayAttribute::BindShaders
          (FBatchedElementNiagara2DArrayAttribute *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  FGlobalShaderMap *pFVar5;
  FShaderType *pFVar6;
  FName this_00;
  FRHIVertexShader *pFVar7;
  FRHIPixelShader *pFVar8;
  FRHIBatchedShaderParameters *pFVar9;
  FShaderParametersMetadata *pFVar10;
  longlong *plVar11;
  undefined1 auStackY_168 [32];
  FRHITexture *local_138;
  FRHISamplerState *local_130;
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_128;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_118;
  TShaderRefBase<FNiagaraSimpleElement2DArrayAttribute,FShaderMapPointerTable> local_108;
  undefined1 local_f8 [8];
  FString local_f0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_d8;
  undefined8 local_c8;
  undefined8 uStack_c0;
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
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_138 = (FRHITexture *)0x0;
  local_130 = (FRHISamplerState *)0x0;
  if (*(void **)&this->GetTextureAndSampler == (void *)0x0) {
    if (param_7 != (FTexture *)0x0) {
      local_138 = (param_7->TextureRHI).Reference;
      local_130 = (param_7->SamplerStateRHI).Reference;
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetTextureAndSampler);
    plVar1 = *(longlong **)&(this->GetTextureAndSampler).field_0x28;
    pcVar2 = *(code **)&this->GetTextureAndSampler;
    plVar11 = (longlong *)&(this->GetTextureAndSampler).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar11 = plVar1;
    }
    uVar4 = (**(code **)(*plVar11 + 8))();
    (*pcVar2)(uVar4,&local_138,&local_130);
  }
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FSimpleElementVS>::TShaderMapRef<FSimpleElementVS>
            ((TShaderMapRef<FSimpleElementVS> *)&local_128,pFVar5);
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar6 = (FShaderType *)FNiagaraSimpleElement2DArrayAttribute::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_118,pFVar6,0);
  if (local_118.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_f8);
    ::FName::ToString((FName *)this_00,&local_f0);
    FNiagaraSimpleElement2DArrayAttribute::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FNiagaraSimpleElement2DArrayAttribute::GetStaticType();
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  local_108.ShaderContent = (FNiagaraSimpleElement2DArrayAttribute *)local_118.ShaderContent;
  local_108.ShaderMap = local_118.ShaderMap;
  pFVar7 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_128,true)
  ;
  (param_2->BoundShaderState).VertexShaderRHI = pFVar7;
  pFVar8 = TShaderRefBase<FNiagaraSimpleElement2DArrayAttribute,FShaderMapPointerTable>::
           GetPixelShader(&local_108,true);
  (param_2->BoundShaderState).PixelShaderRHI = pFVar8;
  param_2->PrimitiveType = PT_TriangleList;
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_2);
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar7 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_128,true)
  ;
  pFVar9 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_128.ShaderContent,pFVar9,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar7,pFVar9);
  local_c8 = *(undefined8 *)&(this->AttributeSlices).field0_0x0;
  uStack_c0 = *(undefined8 *)((longlong)&(this->AttributeSlices).field0_0x0 + 8);
  fStack_b0 = (float)param_6->M[0][2];
  fStack_ac = (float)param_6->M[0][3];
  local_b8 = (float)param_6->M[0][0];
  fStack_b4 = (float)param_6->M[0][1];
  local_a8 = (float)param_6->M[1][0];
  fStack_a4 = (float)param_6->M[1][1];
  fStack_a0 = (float)param_6->M[1][2];
  fStack_9c = (float)param_6->M[1][3];
  fStack_90 = (float)param_6->M[2][2];
  fStack_8c = (float)param_6->M[2][3];
  local_98 = (float)param_6->M[2][0];
  fStack_94 = (float)param_6->M[2][1];
  local_88 = (float)param_6->M[3][0];
  fStack_84 = (float)param_6->M[3][1];
  local_78 = param_5;
  fStack_80 = (float)param_6->M[3][2];
  fStack_7c = (float)param_6->M[3][3];
  if (local_138 == (FRHITexture *)0x0) {
    local_70 = (GWhiteTexture->TextureRHI).Reference;
  }
  else {
    local_70 = local_138;
  }
  local_68 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
  if (local_130 != (FRHISamplerState *)0x0) {
    local_68 = local_130;
  }
  pFVar8 = TShaderRefBase<FNiagaraSimpleElement2DArrayAttribute,FShaderMapPointerTable>::
           GetPixelShader(&local_108,true);
  pFVar10 = FNiagaraSimpleElement2DArrayAttribute::FParameters::FTypeInfo::GetStructMetadata();
  local_d8.ShaderContent = local_118.ShaderContent;
  local_d8.ShaderMap = local_118.ShaderMap;
  ValidateShaderParameters(&local_d8,pFVar10,&local_c8);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar8,&(local_118.ShaderContent)->Bindings,pFVar10,
             &local_c8);
  return;
}

