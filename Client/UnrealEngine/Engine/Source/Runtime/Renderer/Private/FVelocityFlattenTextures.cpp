// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// AllowExternal @ 145237980

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

bool __cdecl FVelocityFlattenTextures::AllowExternal(FViewInfo *param_1)

{
  code *pcVar1;
  TConsoleVariableData<int> *pTVar2;
  bool bVar3;
  undefined1 uVar4;
  
  pTVar2 = CVarMotionBlurAllowExternalVelocityFlatten.Ref;
  if (((*(char *)((longlong)&param_1->_padding_ + 1) == '\0') || ((char)param_1->_padding_ != '\0'))
     && ((char)param_1->_padding_ == '\0')) {
    bVar3 = IsInParallelRenderingThread();
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<6409875433831007955>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                         ,0x6d3,"IsInParallelRenderingThread()");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        uVar4 = (*pcVar1)();
        return (bool)uVar4;
      }
    }
    return pTVar2->ShadowedValue[1] != 0;
  }
  return false;
}

// operator= @ 145296a90

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */

FVelocityFlattenTextures * __thiscall
FVelocityFlattenTextures::operator=
          (FVelocityFlattenTextures *this,FVelocityFlattenTextures *param_1)

{
  (this->VelocityFlatten).Texture = (param_1->VelocityFlatten).Texture;
  (this->VelocityFlatten).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityFlatten).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityFlatten).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityFlatten).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  (this->VelocityTileArray).Texture = (param_1->VelocityTileArray).Texture;
  (this->VelocityTileArray).ViewRect.field0_0x0._s_0.Min.field0_0x0 =
       (param_1->VelocityTileArray).ViewRect.field0_0x0._s_0.Min.field0_0x0;
  (this->VelocityTileArray).ViewRect.field0_0x0._s_0.Max.field0_0x0 =
       (param_1->VelocityTileArray).ViewRect.field0_0x0._s_0.Max.field0_0x0;
  return this;
}

