// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NullDrv
// Functions: 2

// ~FTextureResource @ 1446c4770

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall RHIValidation::FTextureResource::~FTextureResource(FTextureResource *this)

{
  this->_padding_ = (longlong)&___7FTextureResource_RHIValidation__6B_;
  FResource::~FResource(&this->PRIVATE_TrackerResource);
  return;
}

// GetTrackerResource @ 1446c6050

/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FResource * __thiscall RHIValidation::FTextureResource::GetTrackerResource(FTextureResource *this)

{
  return &this->PRIVATE_TrackerResource;
}

