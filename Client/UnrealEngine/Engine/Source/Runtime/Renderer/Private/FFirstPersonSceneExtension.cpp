// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// CreateUpdater @ 144841410

ISceneExtensionUpdater * __thiscall
FFirstPersonSceneExtension::CreateUpdater(FFirstPersonSceneExtension *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FFirstPersonSceneExtension__6B_;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// CreateRenderer @ 144841450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

ISceneExtensionRenderer * __thiscall
FFirstPersonSceneExtension::CreateRenderer
          (FFirstPersonSceneExtension *this,FSceneRendererBase *param_1,FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0x28);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FFirstPersonSceneExtensionRenderer__6B_;
    pIVar1[1].SceneRendererInternal = (FSceneRendererBase *)0x0;
    pIVar1[2]._padding_ = 0;
    pIVar1[1]._padding_ = (longlong)this;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// GetFirstPersonPrimitives @ 14487c5a0

TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> * __thiscall
FFirstPersonSceneExtension::GetFirstPersonPrimitives(FFirstPersonSceneExtension *this)

{
  return &this->FirstPersonPrimitives;
}

// GetWorldSpaceRepresentationPrimitives @ 144887180

TArray<FPrimitiveSceneInfo_*,TSizedDefaultAllocator<32>_> * __thiscall
FFirstPersonSceneExtension::GetWorldSpaceRepresentationPrimitives(FFirstPersonSceneExtension *this)

{
  return &this->WorldSpaceRepresentationPrimitives;
}

// ShouldCreateExtension @ 1448a2180

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
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

bool __cdecl FFirstPersonSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = HasFirstPersonGBufferBit(SP_NumPlatforms);
    return bVar1;
  }
  bVar1 = HasFirstPersonGBufferBit
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8]);
  return bVar1;
}

