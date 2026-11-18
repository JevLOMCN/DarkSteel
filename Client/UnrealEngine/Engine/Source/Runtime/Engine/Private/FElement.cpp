// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FElement @ 148805940

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FElement * __thiscall FRenderAssetInstanceView::FElement::FElement(FElement *this)

{
  this->BoundsIndex = -1;
  this->Component = (UPrimitiveComponent *)0x0;
  this->RenderAsset = (UStreamableRenderAsset *)0x0;
  this->TexelFactor = 0.0;
  this->PrevRenderAssetLink = -1;
  this->NextRenderAssetLink = -1;
  this->NextComponentLink = -1;
  return this;
}

