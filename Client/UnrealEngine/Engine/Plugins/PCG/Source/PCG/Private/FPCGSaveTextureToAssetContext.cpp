// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// ~FPCGSaveTextureToAssetContext @ 149be9690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FPCGSaveTextureToAssetContext::~FPCGSaveTextureToAssetContext(FPCGSaveTextureToAssetContext *this)

{
  this->_padding_ = (longlong)&___7FPCGSaveTextureToAssetContext__6B_;
  FMemory::Free(this->RawReadbackData);
  FPCGContext::~FPCGContext((FPCGContext *)this);
  return;
}

// AddExtraStructReferencedObjects @ 149bfefc0

void __thiscall
FPCGSaveTextureToAssetContext::AddExtraStructReferencedObjects
          (FPCGSaveTextureToAssetContext *this,FReferenceCollector *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000149bfefd6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->ExportedTexture,0,0);
  return;
}

