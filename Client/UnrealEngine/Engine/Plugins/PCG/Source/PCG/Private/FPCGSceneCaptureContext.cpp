// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 1

// AddExtraStructReferencedObjects @ 149bfeff0

/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */

void __thiscall
FPCGSceneCaptureContext::AddExtraStructReferencedObjects
          (FPCGSceneCaptureContext *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->SceneCaptureComponent,0,0);
                    /* WARNING: Could not recover jumptable at 0x000149bff036. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->RenderTarget,0,0);
  return;
}

