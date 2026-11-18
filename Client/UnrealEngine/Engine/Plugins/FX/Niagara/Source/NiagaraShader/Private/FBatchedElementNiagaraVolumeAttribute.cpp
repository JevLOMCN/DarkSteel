// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// BindShaders @ 148df4770

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
FBatchedElementNiagaraVolumeAttribute::BindShaders
          (FBatchedElementNiagaraVolumeAttribute *this,FRHICommandList *param_1,
          FGraphicsPipelineStateInitializer *param_2,Type param_3,TMatrix<double> *param_4,
          float param_5,TMatrix<double> *param_6,FTexture *param_7)

{
  code *pcVar1;
  longlong *plVar2;
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
  TVector<float> *pTVar12;
  ForElementType<UE::Math::TVector<float>_> FVar13;
  ForElementType<int> FVar14;
  TVector<float> *pTVar15;
  undefined4 uVar16;
  undefined1 auStackY_1c8 [32];
  undefined8 local_198;
  FRHITexture *local_188;
  FRHISamplerState *local_180;
  TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable> local_178;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_168;
  TShaderRefBase<FNiagaraSimpleElementVolumeAttribute,FShaderMapPointerTable> local_158;
  FString local_148;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_138;
  int local_128 [4];
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  float local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  float local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  float local_e0;
  undefined4 local_dc;
  TVector2<float>_u_0 local_d8;
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
  FRHITexture *local_80;
  FRHISamplerState *local_78;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  uVar16 = 0;
  local_188 = (FRHITexture *)0x0;
  local_180 = (FRHISamplerState *)0x0;
  if (*(void **)&this->GetTextureAndSampler == (void *)0x0) {
    if (param_7 != (FTexture *)0x0) {
      local_188 = (param_7->TextureRHI).Reference;
      local_180 = (param_7->SamplerStateRHI).Reference;
    }
  }
  else {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->GetTextureAndSampler);
    pcVar1 = *(code **)&this->GetTextureAndSampler;
    plVar2 = *(longlong **)&(this->GetTextureAndSampler).field_0x28;
    plVar11 = (longlong *)&(this->GetTextureAndSampler).field_0x10;
    if (plVar2 != (longlong *)0x0) {
      plVar11 = plVar2;
    }
    uVar4 = (**(code **)(*plVar11 + 8))();
    (*pcVar1)(uVar4,&local_188,&local_180);
  }
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  TShaderMapRef<FSimpleElementVS>::TShaderMapRef<FSimpleElementVS>
            ((TShaderMapRef<FSimpleElementVS> *)&local_178,pFVar5);
  pFVar5 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_3]);
  pFVar6 = (FShaderType *)FNiagaraSimpleElementVolumeAttribute::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar5,&local_168,pFVar6,0);
  if (local_168.ShaderContent == (FShader *)0x0) {
    this_00 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)&local_198);
    ::FName::ToString((FName *)this_00,&local_148);
    FNiagaraSimpleElementVolumeAttribute::GetStaticType();
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Shader.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                       ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FNiagaraSimpleElementVolumeAttribute::GetStaticType();
  (param_2->BoundShaderState).VertexDeclarationRHI =
       (FRHIVertexDeclaration *)GSimpleElementVertexDeclaration._32_8_;
  local_158.ShaderContent = (FNiagaraSimpleElementVolumeAttribute *)local_168.ShaderContent;
  local_158.ShaderMap = local_168.ShaderMap;
  pFVar7 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_178,true)
  ;
  (param_2->BoundShaderState).VertexShaderRHI = pFVar7;
  pFVar8 = TShaderRefBase<FNiagaraSimpleElementVolumeAttribute,FShaderMapPointerTable>::
           GetPixelShader(&local_158,true);
  (param_2->BoundShaderState).PixelShaderRHI = pFVar8;
  param_2->PrimitiveType = PT_TriangleList;
  param_2->BlendState =
       TStaticStateRHI<TStaticBlendState<15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,15,0,1,0,0,1,0,0>,TRefCountPtr<FRHIBlendState>,FRHIBlendState_*>
       ::StaticResource.StateRHI.Reference;
  FRHICommandList::ApplyCachedRenderTargets(param_1,param_2);
  SetGraphicsPipelineState(param_1,param_2,0,CheckApply,true);
  pFVar7 = TShaderRefBase<FSimpleElementVS,FShaderMapPointerTable>::GetVertexShader(&local_178,true)
  ;
  pFVar9 = FRHICommandListBase::GetScratchShaderParameters((FRHICommandListBase *)param_1);
  FSimpleElementVS::SetParameters(local_178.ShaderContent,pFVar9,param_4);
  FRHICommandList::SetBatchedShaderParameters(param_1,(FRHIGraphicsShader *)pFVar7,pFVar9);
  local_128[0] = (this->AttributeUVs).ArrayNum;
  pTVar15 = &UE::Math::TVector<float>::ZeroVector;
  if (local_128[0] < 1) {
    FVar13 = (ForElementType<UE::Math::TVector<float>_>)&UE::Math::TVector<float>::ZeroVector;
  }
  else {
    FVar13 = (this->AttributeUVs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar13 = (ForElementType<UE::Math::TVector<float>_>)&this->AttributeUVs;
    }
  }
  local_110 = *(undefined4 *)((longlong)FVar13 + 8);
  local_10c = uVar16;
  if (0 < (this->AttributeChannels).ArrayNum) {
    FVar14 = (this->AttributeChannels).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->AttributeChannels;
    }
    local_10c = *(undefined4 *)FVar14;
  }
  local_198._0_4_ = (undefined4)*(undefined8 *)FVar13;
  local_198._4_4_ = (undefined4)((ulonglong)*(undefined8 *)FVar13 >> 0x20);
  local_118 = (undefined4)local_198;
  local_114 = local_198._4_4_;
  if ((this->AttributeUVs).ArrayNum < 2) {
    pTVar12 = &UE::Math::TVector<float>::ZeroVector;
  }
  else {
    FVar13 = (this->AttributeUVs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar13 = (ForElementType<UE::Math::TVector<float>_>)&this->AttributeUVs;
    }
    pTVar12 = (TVector<float> *)((longlong)FVar13 + 0xc);
  }
  local_100 = (pTVar12->field0_0x0)._s_0.Z;
  local_fc = uVar16;
  if (1 < (this->AttributeChannels).ArrayNum) {
    FVar14 = (this->AttributeChannels).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->AttributeChannels;
    }
    local_fc = *(undefined4 *)((longlong)FVar14 + 4);
  }
  local_198._0_4_ = (undefined4)*(undefined8 *)&pTVar12->field0_0x0;
  local_198._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field0_0x0 >> 0x20);
  local_108 = (undefined4)local_198;
  local_104 = local_198._4_4_;
  if ((this->AttributeUVs).ArrayNum < 3) {
    pTVar12 = &UE::Math::TVector<float>::ZeroVector;
  }
  else {
    FVar13 = (this->AttributeUVs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar13 = (ForElementType<UE::Math::TVector<float>_>)&this->AttributeUVs;
    }
    pTVar12 = (TVector<float> *)((longlong)FVar13 + 0x18);
  }
  local_f0 = (pTVar12->field0_0x0)._s_0.Z;
  local_ec = uVar16;
  if (2 < (this->AttributeChannels).ArrayNum) {
    FVar14 = (this->AttributeChannels).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->AttributeChannels;
    }
    local_ec = *(undefined4 *)((longlong)FVar14 + 8);
  }
  local_198._0_4_ = (undefined4)*(undefined8 *)&pTVar12->field0_0x0;
  local_198._4_4_ = (undefined4)((ulonglong)*(undefined8 *)&pTVar12->field0_0x0 >> 0x20);
  local_f8 = (undefined4)local_198;
  local_f4 = local_198._4_4_;
  if (3 < (this->AttributeUVs).ArrayNum) {
    FVar13 = (this->AttributeUVs).AllocatorInstance.SecondaryData;
    if (FVar13 == (ForElementType<UE::Math::TVector<float>_>)0x0) {
      FVar13 = (ForElementType<UE::Math::TVector<float>_>)&this->AttributeUVs;
    }
    pTVar15 = (TVector<float> *)((longlong)FVar13 + 0x24);
  }
  uVar4 = *(undefined8 *)&pTVar15->field0_0x0;
  local_e0 = (pTVar15->field0_0x0)._s_0.Z;
  if (3 < (this->AttributeChannels).ArrayNum) {
    FVar14 = (this->AttributeChannels).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<int>)0x0) {
      FVar14 = (ForElementType<int>)&this->AttributeChannels;
    }
    uVar16 = *(undefined4 *)((longlong)FVar14 + 0xc);
  }
  local_d8 = (this->TileUVs).field0_0x0;
  local_198._4_4_ = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_198._0_4_ = (undefined4)uVar4;
  local_e8 = (undefined4)local_198;
  local_e4 = local_198._4_4_;
  fStack_c0 = (float)param_6->M[0][2];
  fStack_bc = (float)param_6->M[0][3];
  local_c8 = (float)param_6->M[0][0];
  fStack_c4 = (float)param_6->M[0][1];
  local_b8 = (float)param_6->M[1][0];
  fStack_b4 = (float)param_6->M[1][1];
  fStack_b0 = (float)param_6->M[1][2];
  fStack_ac = (float)param_6->M[1][3];
  fStack_a0 = (float)param_6->M[2][2];
  fStack_9c = (float)param_6->M[2][3];
  local_a8 = (float)param_6->M[2][0];
  fStack_a4 = (float)param_6->M[2][1];
  local_98 = (float)param_6->M[3][0];
  fStack_94 = (float)param_6->M[3][1];
  local_88 = param_5;
  fStack_90 = (float)param_6->M[3][2];
  fStack_8c = (float)param_6->M[3][3];
  if (local_188 == (FRHITexture *)0x0) {
    local_80 = (GWhiteTexture->TextureRHI).Reference;
  }
  else {
    local_80 = local_188;
  }
  local_78 = TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
             ::StaticResource.StateRHI.Reference;
  if (local_180 != (FRHISamplerState *)0x0) {
    local_78 = local_180;
  }
  local_198 = uVar4;
  local_dc = uVar16;
  pFVar8 = TShaderRefBase<FNiagaraSimpleElementVolumeAttribute,FShaderMapPointerTable>::
           GetPixelShader(&local_158,true);
  pFVar10 = FNiagaraSimpleElementVolumeAttribute::FParameters::FTypeInfo::GetStructMetadata();
  local_138.ShaderContent = local_168.ShaderContent;
  local_138.ShaderMap = local_168.ShaderMap;
  ValidateShaderParameters(&local_138,pFVar10,local_128);
  ::SetShaderParameters
            (param_1,(FRHIGraphicsShader *)pFVar8,&(local_168.ShaderContent)->Bindings,pFVar10,
             local_128);
  return;
}

