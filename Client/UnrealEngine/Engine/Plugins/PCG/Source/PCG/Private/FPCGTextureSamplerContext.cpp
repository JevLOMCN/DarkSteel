// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// AddExtraStructReferencedObjects @ 149c5c6b0

void __thiscall
FPCGTextureSamplerContext::AddExtraStructReferencedObjects
          (FPCGTextureSamplerContext *this,FReferenceCollector *param_1)

{
  if ((this->TextureData).field0_0x0.DebugPtr != (UPCGTextureData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000149c5c6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->TextureData,0,0);
    return;
  }
  return;
}

