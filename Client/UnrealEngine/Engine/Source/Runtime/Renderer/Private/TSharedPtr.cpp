// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 6

// operator= @ 1447f8ee0

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

TSharedPtr<FMegaLightsFrameTemporaries,1> * __thiscall
TSharedPtr<FMegaLightsFrameTemporaries,1>::operator=
          (TSharedPtr<FMegaLightsFrameTemporaries,1> *this,
          TSharedPtr<FMegaLightsFrameTemporaries,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FMegaLightsFrameTemporaries *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 1447fa000

FWN_SceneTexturesCaptureInfo * __thiscall
TSharedPtr<FWN_SceneTexturesCaptureInfo,1>::operator->
          (TSharedPtr<FWN_SceneTexturesCaptureInfo,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FWN_SceneTexturesCaptureInfo *pFVar3;
  
  if (this->Object != (FWN_SceneTexturesCaptureInfo *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FWN_SceneTexturesCaptureInfo *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator= @ 145479b80

TSharedPtr<FInstanceSceneDataImmutable,1> * __thiscall
TSharedPtr<FInstanceSceneDataImmutable,1>::operator=
          (TSharedPtr<FInstanceSceneDataImmutable,1> *this,
          TSharedPtr<FInstanceSceneDataImmutable,1> *param_1)

{
  if (this != param_1) {
    this->Object = param_1->Object;
    param_1->Object = (FInstanceSceneDataImmutable *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&this->SharedReferenceCount,&param_1->SharedReferenceCount);
  }
  return this;
}

// operator-> @ 14547cba0

FInstanceSceneDataImmutable * __thiscall
TSharedPtr<FInstanceSceneDataImmutable,1>::operator->
          (TSharedPtr<FInstanceSceneDataImmutable,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FInstanceSceneDataImmutable *pFVar3;
  
  if (this->Object != (FInstanceSceneDataImmutable *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FInstanceSceneDataImmutable *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14560bc40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

FVirtualShadowMapClipmap * __thiscall
TSharedPtr<FVirtualShadowMapClipmap,1>::operator->(TSharedPtr<FVirtualShadowMapClipmap,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FVirtualShadowMapClipmap *pFVar3;
  
  if (this->Object != (FVirtualShadowMapClipmap *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVirtualShadowMapClipmap *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

// operator-> @ 14560bc90

FVirtualShadowMapPerLightCacheEntry * __thiscall
TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1>::operator->
          (TSharedPtr<FVirtualShadowMapPerLightCacheEntry,1> *this)

{
  code *pcVar1;
  bool bVar2;
  FVirtualShadowMapPerLightCacheEntry *pFVar3;
  
  if (this->Object != (FVirtualShadowMapPerLightCacheEntry *)0x0) {
    return this->Object;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FVirtualShadowMapPerLightCacheEntry *)(*pcVar1)();
    return pFVar3;
  }
  return this->Object;
}

