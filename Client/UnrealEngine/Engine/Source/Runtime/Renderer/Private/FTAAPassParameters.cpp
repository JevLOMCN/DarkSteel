// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 3

// FTAAPassParameters @ 14485d500

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
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

FTAAPassParameters * __thiscall
FTAAPassParameters::FTAAPassParameters(FTAAPassParameters *this,FViewInfo *param_1)

{
  this->Quality = High;
  this->bOutputRenderTargetable = false;
  this->bDownsample = false;
  this->DownsampleOverrideFormat = PF_Unknown;
  this->Pass = Main;
  (this->InputViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->InputViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->OutputViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->OutputViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->ViewRect).field0_0x0._s_0.Max.field0_0x0;
  this->ResolutionDivisor = 1;
  this->SceneDepthTexture = (FRDGTexture *)0x0;
  this->SceneVelocityTexture = (FRDGTexture *)0x0;
  this->SceneColorInput = (FRDGTexture *)0x0;
  this->SceneMetadataInput = (FRDGTexture *)0x0;
  this->CoCBilateralFilterStrength = 1.0;
  return this;
}

// GetOutputExtent @ 1452c5580

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FTAAPassParameters::GetOutputExtent(FTAAPassParameters *this)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  TIntPoint<int> TVar7;
  TIntPoint<int>_u_0 in_RDX;
  TIntPoint<int>_u_0 local_res8 [2];
  TIntPoint<int>_u_0 local_res18;
  undefined8 local_res20;
  
  bVar6 = Validate(this);
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Validate()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalAA.cpp"
                         ,0x21c,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar5)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  if ((this->SceneColorInput == (FRDGTexture *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SceneColorInput",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalAA.cpp"
                         ,0x21d,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar5)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  uVar3 = *(undefined8 *)&(this->SceneColorInput->Desc).field_0x24;
  if ((this->Pass != MainUpsampling) && ((this->Pass - MainSuperSampling & 0xfffffffb) != 0)) {
    *(undefined8 *)in_RDX = uVar3;
    return (TIntPoint<int>)in_RDX;
  }
  piVar1 = (int *)((longlong)&(this->OutputViewRect).field0_0x0 + 4);
  local_res20 = uVar3;
  if (((*(int *)&(this->OutputViewRect).field0_0x0 !=
        UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
      (*piVar1 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputViewRect.Min == FIntPoint::ZeroValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalAA.cpp"
                         ,0x224,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    TVar7.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar5)();
    return (TIntPoint<int>)TVar7.field0_0x0;
  }
  iVar2 = this->ResolutionDivisor;
  local_res8[0]._0_4_ =
       ((*(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 8) -
        *(int *)&(this->OutputViewRect).field0_0x0) + -1 + iVar2) / iVar2;
  local_res8[0]._4_4_ =
       ((*(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 0xc) - *piVar1) + -1 + iVar2) /
       iVar2;
  QuantizeSceneBufferSize
            ((TIntPoint<int> *)&local_res8[0]._s_0,(TIntPoint<int> *)&local_res18._s_0,0);
  uVar4 = CONCAT44(local_res18._s_0.Y,local_res18._s_0.X);
  if (local_res18._s_0.X < (int)uVar3) {
    uVar4 = uVar3;
  }
  *(int *)in_RDX = (int)uVar4;
  if (local_res18._s_0.Y < local_res20._4_4_) {
    local_res18._s_0.Y = local_res20._4_4_;
  }
  *(undefined4 *)((longlong)in_RDX + 4) = local_res18._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// Validate @ 1452d7cd0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FTAAPassParameters::Validate(FTAAPassParameters *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->Pass == MainUpsampling) || ((this->Pass - MainSuperSampling & 0xfffffffb) == 0)) {
    if ((*(int *)&(this->OutputViewRect).field0_0x0 !=
         UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
       (*(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 4) !=
        UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutputViewRect.Min == FIntPoint::ZeroValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalAA.cpp"
                         ,0x232,L"");
      if (bVar2) goto code_r0x0001452d7d6b;
    }
  }
  else if ((((*(int *)&(this->InputViewRect).field0_0x0 !=
              *(int *)&(this->OutputViewRect).field0_0x0) ||
            (*(int *)((longlong)&(this->InputViewRect).field0_0x0 + 4) !=
             *(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 4))) ||
           (*(int *)((longlong)&(this->InputViewRect).field0_0x0 + 8) !=
            *(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 8))) ||
          (*(int *)((longlong)&(this->InputViewRect).field0_0x0 + 0xc) !=
           *(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 0xc))) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputViewRect == OutputViewRect",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Renderer\\Private\\PostProcess\\TemporalAA.cpp"
                       ,0x236,L"");
    if (!bVar2) {
      return true;
    }
code_r0x0001452d7d6b:
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return true;
}

