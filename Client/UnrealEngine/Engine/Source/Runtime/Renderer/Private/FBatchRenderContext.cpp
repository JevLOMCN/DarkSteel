// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// FBatchRenderContext @ 1458cb5c0

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FBatchRenderContext * __thiscall
RuntimeVirtualTexture::FBatchRenderContext::FBatchRenderContext(FBatchRenderContext *this)

{
  (this->GraphSetup).bRenderPass = false;
  (this->GraphSetup).bCompressPass = false;
  (this->GraphSetup).bCopyPass = false;
  (this->GraphSetup).bCopyThumbnailPass = false;
  (this->GraphSetup).RenderTexture0 = (FRDGTexture *)0x0;
  (this->GraphSetup).RenderTexture1 = (FRDGTexture *)0x0;
  (this->GraphSetup).RenderTexture2 = (FRDGTexture *)0x0;
  (this->GraphSetup).CompressTexture0 = (FRDGTexture *)0x0;
  (this->GraphSetup).CompressTexture1 = (FRDGTexture *)0x0;
  (this->GraphSetup).CompressTexture2 = (FRDGTexture *)0x0;
  (this->GraphSetup).CompressTextureUAV0_64bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CompressTextureUAV1_64bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CompressTextureUAV2_64bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CompressTextureUAV0_128bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CompressTextureUAV1_128bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CompressTextureUAV2_128bit = (FRDGTextureUAV *)0x0;
  (this->GraphSetup).CopyTexture0 = (FRDGTexture *)0x0;
  (this->GraphSetup).CopyTexture1 = (FRDGTexture *)0x0;
  (this->GraphSetup).CopyTexture2 = (FRDGTexture *)0x0;
  (this->GraphSetup).OutputAlias0 = (FRDGTexture *)0x0;
  (this->GraphSetup).OutputAlias1 = (FRDGTexture *)0x0;
  (this->GraphSetup).OutputAlias2 = (FRDGTexture *)0x0;
  (this->GraphSetup).TargetTexture0 = (FRDGTexture *)0x0;
  (this->GraphSetup).TargetTexture1 = (FRDGTexture *)0x0;
  (this->GraphSetup).TargetTexture2 = (FRDGTexture *)0x0;
  (this->GraphSetup).bDirectAliasing = false;
  FRenderPageBatchDesc::FRenderPageBatchDesc(&this->BatchDesc);
  this->bAllowCachedMeshDrawCommands = true;
  this->bAllowMipDebug = true;
  return this;
}

