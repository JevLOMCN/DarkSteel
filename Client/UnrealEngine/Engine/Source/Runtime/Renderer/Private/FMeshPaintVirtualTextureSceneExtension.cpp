// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 2

// CreateRenderer @ 1458aca40

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
FMeshPaintVirtualTextureSceneExtension::CreateRenderer
          (FMeshPaintVirtualTextureSceneExtension *this,FSceneRendererBase *param_1,
          FEngineShowFlags *param_2)

{
  ISceneExtensionRenderer *pIVar1;
  
  pIVar1 = ::operator_new(0x10);
  if (pIVar1 != (ISceneExtensionRenderer *)0x0) {
    pIVar1->SceneRendererInternal = param_1;
    pIVar1->_padding_ = (longlong)&___7FRenderer_FMeshPaintVirtualTextureSceneExtension__6B_;
    return pIVar1;
  }
  return (ISceneExtensionRenderer *)0x0;
}

// ShouldCreateExtension @ 14591d460

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

bool __cdecl FMeshPaintVirtualTextureSceneExtension::ShouldCreateExtension(FScene *param_1)

{
  bool bVar1;
  EShaderPlatform EVar2;
  
  EVar2 = FSceneInterface::GetShaderPlatform((FSceneInterface *)param_1);
  bVar1 = MeshPaintVirtualTexture::IsSupported(EVar2);
  return bVar1;
}

