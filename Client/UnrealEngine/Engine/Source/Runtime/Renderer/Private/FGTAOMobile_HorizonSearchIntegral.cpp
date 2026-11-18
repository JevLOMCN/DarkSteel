// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// SetupShaderParameters @ 1451601c0

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
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __cdecl
FGTAOMobile_HorizonSearchIntegral::SetupShaderParameters
          (FParameters *param_1,FRDGBuilder *param_2,FViewInfo *param_3,TIntRect<int> *param_4,
          TIntPoint<int> *param_5,TIntPoint<int> *param_6,TVector4<float> *param_7,
          TVector4<float> *param_8,FRDGTexture *param_9)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FShaderParametersMetadata *pFVar6;
  EUniformBufferBindingFlags EVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined7 uStack_3f;
  
  fVar1 = __real_3f800000;
  fVar11 = *(float *)((longlong)&param_3->_padding_ + 4);
  if (fVar11 <= __real_3f800000) {
    fVar11 = __real_3f800000;
  }
  fVar10 = __real_3f800000 / fVar11;
  pFVar6 = FViewUniformShaderParameters::GetStructMetadata();
  EVar7 = Static;
  if (pFVar6->BindingFlags != StaticAndShader) {
    EVar7 = pFVar6->BindingFlags;
  }
  *(longlong *)&param_1->View = param_3->_padding_;
  *(ulonglong *)&(param_1->View).field_0x8 = CONCAT71(uStack_3f,EVar7);
  iVar2 = *(int *)((longlong)&param_4->field0_0x0 + 4);
  (param_1->ViewRectMin).field0_0x0._s_0.X = (float)*(int *)&param_4->field0_0x0;
  (param_1->ViewRectMin).field0_0x0._s_0.Y = (float)iVar2;
  *(undefined8 *)((longlong)&(param_1->ViewRectMin).field0_0x0 + 8) = 0;
  fVar8 = (float)(param_5->field0_0x0)._s_0.X;
  fVar9 = (float)(param_5->field0_0x0)._s_0.Y;
  (param_1->DepthBufferSizeAndInvSize).field0_0x0._s_0.X = fVar8;
  (param_1->DepthBufferSizeAndInvSize).field0_0x0._s_0.Y = fVar9;
  (param_1->DepthBufferSizeAndInvSize).field0_0x0._s_0.Z = fVar1 / fVar8;
  (param_1->DepthBufferSizeAndInvSize).field0_0x0._s_0.W = fVar1 / fVar9;
  fVar8 = (float)(param_6->field0_0x0)._s_0.X;
  fVar9 = (float)(param_6->field0_0x0)._s_0.Y;
  (param_1->BufferSizeAndInvSize).field0_0x0._s_0.X = fVar8;
  (param_1->BufferSizeAndInvSize).field0_0x0._s_0.Y = fVar9;
  (param_1->BufferSizeAndInvSize).field0_0x0._s_0.Z = fVar1 / fVar8;
  (param_1->BufferSizeAndInvSize).field0_0x0._s_0.W = fVar1 / fVar9;
  iVar2 = *(int *)((longlong)&param_4->field0_0x0 + 0xc);
  iVar3 = *(int *)((longlong)&param_4->field0_0x0 + 4);
  fVar9 = (float)(*(int *)((longlong)&param_4->field0_0x0 + 8) - *(int *)&param_4->field0_0x0);
  (param_1->ViewSizeAndInvSize).field0_0x0._s_0.X = fVar9;
  fVar8 = (float)(iVar2 - iVar3);
  (param_1->ViewSizeAndInvSize).field0_0x0._s_0.Y = fVar8;
  (param_1->ViewSizeAndInvSize).field0_0x0._s_0.Z = fVar1 / fVar9;
  (param_1->ViewSizeAndInvSize).field0_0x0._s_0.W = fVar1 / fVar8;
  fVar1 = *(float *)&param_3->_padding_;
  fVar8 = (param_7->field0_0x0)._s_0.Y;
  (param_1->FadeRadiusMulAdd_FadeDistance_AttenFactor).field0_0x0._s_0.X = fVar10;
  (param_1->FadeRadiusMulAdd_FadeDistance_AttenFactor).field0_0x0._s_0.Y =
       (float)((uint)((fVar1 - fVar11) * fVar10) ^ __xmm_80000000800000008000000080000000);
  (param_1->FadeRadiusMulAdd_FadeDistance_AttenFactor).field0_0x0._s_0.Z = fVar1;
  (param_1->FadeRadiusMulAdd_FadeDistance_AttenFactor).field0_0x0._s_0.W =
       __real_40000000 / (fVar8 * fVar8);
  uVar4 = *(undefined8 *)&param_8->field0_0x0;
  uVar5 = *(undefined8 *)((longlong)&param_8->field0_0x0 + 8);
  param_1->SceneDepthTexture = param_9;
  *(undefined8 *)&(param_1->WorldRadiusAdj_SinDeltaAngle_CosDeltaAngle_Thickness).field0_0x0 = uVar4
  ;
  *(undefined8 *)
   ((longlong)&(param_1->WorldRadiusAdj_SinDeltaAngle_CosDeltaAngle_Thickness).field0_0x0 + 8) =
       uVar5;
  param_1->SceneDepthSampler =
       TStaticStateRHI<TStaticSamplerState<0,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
       ::StaticResource.StateRHI.Reference;
  if (GSystemTextures._96_8_ != 0) {
    param_1->GTAOPreIntegrated2D = *(FRHITexture **)(GSystemTextures._96_8_ + 8);
    param_1->GTAOPreIntegrated3D = *(FRHITexture **)(GSystemTextures._96_8_ + 8);
    param_1->GTAOPreIntegratedSampler =
         TStaticStateRHI<TStaticSamplerState<1,1,1,1,0,1,0,0>,TRefCountPtr<FRHISamplerState>,FRHISamplerState_*>
         ::StaticResource.StateRHI.Reference;
  }
  return;
}

