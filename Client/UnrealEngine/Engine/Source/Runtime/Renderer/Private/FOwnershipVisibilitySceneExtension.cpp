// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// CreateUpdater @ 14501dba0

ISceneExtensionUpdater * __thiscall
Nanite::FOwnershipVisibilitySceneExtension::CreateUpdater(FOwnershipVisibilitySceneExtension *this)

{
  ISceneExtensionUpdater *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (ISceneExtensionUpdater *)0x0) {
    pIVar1[1] = (ISceneExtensionUpdater)this;
    *pIVar1 = (ISceneExtensionUpdater)&___7FUpdater_FOwnershipVisibilitySceneExtension_Nanite__6B_;
    return pIVar1;
  }
  return (ISceneExtensionUpdater *)0x0;
}

// CreateRenderer @ 14501dbe0

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
Nanite::FOwnershipVisibilitySceneExtension::CreateRenderer
          (FOwnershipVisibilitySceneExtension *this,FSceneRendererBase *param_1,
          FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0x20);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FRenderer_FOwnershipVisibilitySceneExtension_Nanite__6B_;
    pIVar1[1]._padding_ = (longlong)this;
    pIVar1[1].SceneRendererInternal = (FSceneRendererBase *)0x0;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// GetMaxPersistentPrimitiveIndex @ 145063ca0

int __thiscall
Nanite::FOwnershipVisibilitySceneExtension::GetMaxPersistentPrimitiveIndex
          (FOwnershipVisibilitySceneExtension *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  if (*(char *)(lVar1 + 0x4cf0) != '\0') {
    return *(int *)(lVar1 + 0x4c28);
  }
  return *(int *)(lVar1 + 0x4c24);
}

// GetPrimitivesWithOwnership @ 1450640e0

TArray<FPersistentPrimitiveIndex,TSizedDefaultAllocator<32>_> * __thiscall
Nanite::FOwnershipVisibilitySceneExtension::GetPrimitivesWithOwnership
          (FOwnershipVisibilitySceneExtension *this)

{
  return &this->NanitePrimitivesWithOwnership;
}

// ShouldCreateExtension @ 14507a200

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

bool __cdecl Nanite::FOwnershipVisibilitySceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  
  if (*(int *)&param_1->field_0x8 == 5) {
    bVar1 = DoesRuntimeSupportNanite(SP_NumPlatforms,true,true);
    return bVar1;
  }
  bVar1 = DoesRuntimeSupportNanite
                    (GRHIGlobals.ShaderPlatformForFeatureLevel[*(int *)&param_1->field_0x8],true,
                     true);
  return bVar1;
}

