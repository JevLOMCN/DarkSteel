// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DLSS
// Functions: 3

// FDLSSPassParameters @ 14de20d20

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FDLSSPassParameters * __thiscall
FDLSSPassParameters::FDLSSPassParameters(FDLSSPassParameters *this,FDLSSPassParameters *param_1)

{
  (this->InputViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->InputViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->InputViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->InputViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->OutputViewRect).field0_0x0._s_0.Min.field0_0x0 =
       (param_1->OutputViewRect).field0_0x0._s_0.Min.field0_0x0;
  (this->OutputViewRect).field0_0x0._s_0.Max.field0_0x0 =
       (param_1->OutputViewRect).field0_0x0._s_0.Max.field0_0x0;
  (this->TemporalJitterPixels).field0_0x0 = (param_1->TemporalJitterPixels).field0_0x0;
  this->PreExposure = param_1->PreExposure;
  this->bHighResolutionMotionVectors = param_1->bHighResolutionMotionVectors;
  this->DenoiserMode = param_1->DenoiserMode;
  this->SceneColorInput = param_1->SceneColorInput;
  this->SceneVelocityInput = param_1->SceneVelocityInput;
  this->SceneDepthInput = param_1->SceneDepthInput;
  this->BiasCurrentColorInput = param_1->BiasCurrentColorInput;
  this->DiffuseAlbedo = param_1->DiffuseAlbedo;
  this->SpecularAlbedo = param_1->SpecularAlbedo;
  this->Normal = param_1->Normal;
  this->Roughness = param_1->Roughness;
  this->ReflectionHitDistance = param_1->ReflectionHitDistance;
  this->SSSGuide = param_1->SSSGuide;
  this->DOFGuide = param_1->DOFGuide;
  this->EyeAdaptation = param_1->EyeAdaptation;
  return this;
}

// GetOutputExtent @ 14de27490

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

TIntPoint<int> __thiscall FDLSSPassParameters::GetOutputExtent(FDLSSPassParameters *this)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  TIntPoint<int> TVar6;
  TIntPoint<int>_u_0 in_RDX;
  int iVar7;
  TIntPoint<int>_u_0 local_res8;
  TIntPoint<int>_u_0 local_res10;
  
  piVar1 = (int *)((longlong)&(this->OutputViewRect).field0_0x0 + 4);
  if ((*(int *)&(this->OutputViewRect).field0_0x0 !=
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
     (*piVar1 != UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputViewRect.Min == FIntPoint::ZeroValue",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0xf2,L"The DLSS OutputViewRect %dx%d must be non-zero");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar4)();
      return (TIntPoint<int>)TVar6.field0_0x0;
    }
  }
  if (this->SceneColorInput == (FRDGTexture *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("SceneColorInput",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0xe4,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      TVar6.field0_0x0 = (TIntPoint<int>_u_0)(*pcVar4)();
      return (TIntPoint<int>)TVar6.field0_0x0;
    }
  }
  uVar2 = *(undefined8 *)&(this->SceneColorInput->Desc).field_0x24;
  local_res8._s_0.X =
       *(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 8) -
       *(int *)&(this->OutputViewRect).field0_0x0;
  local_res8._s_0.Y = *(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 0xc) - *piVar1;
  QuantizeSceneBufferSize((TIntPoint<int> *)&local_res8._s_0,(TIntPoint<int> *)&local_res10._s_0,0);
  uVar3 = CONCAT44(local_res10._s_0.Y,local_res10._s_0.X);
  if (local_res10._s_0.X < (int)uVar2) {
    uVar3 = uVar2;
  }
  *(int *)in_RDX = (int)uVar3;
  iVar7 = (int)((ulonglong)uVar2 >> 0x20);
  if (local_res10._s_0.Y < iVar7) {
    local_res10._s_0.Y = iVar7;
  }
  *(undefined4 *)((longlong)in_RDX + 4) = local_res10._s_0.Y;
  return (TIntPoint<int>)in_RDX;
}

// Validate @ 14de2a620

/* WARNING: Enum "ENGXDLSSDenoiserMode": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

bool __thiscall FDLSSPassParameters::Validate(FDLSSPassParameters *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((*(int *)&(this->OutputViewRect).field0_0x0 !=
       UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.X) ||
     (*(int *)((longlong)&(this->OutputViewRect).field0_0x0 + 4) !=
      UE::Math::TIntPoint<int>::ZeroValue.field0_0x0._s_0.Y)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("OutputViewRect.Min == FIntPoint::ZeroValue",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\DLSS\\Source\\DLSS\\Private\\DLSSUpscaler.cpp"
                       ,0xf2,L"The DLSS OutputViewRect %dx%d must be non-zero");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return true;
}

