// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraShader
// Functions: 1

// DestroyObject @ 148dfa9f0

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FShaderParametersMetadata,SharedPointerInternals::DefaultDeleter<FShaderParametersMetadata>,1>
::DestroyObject(TReferenceControllerWithDeleter<FShaderParametersMetadata,SharedPointerInternals::DefaultDeleter<FShaderParametersMetadata>,1>
                *this)

{
  FShaderParametersMetadata *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FShaderParametersMetadata *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000148dfaa01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)pFVar1->_padding_)(pFVar1,1);
    return;
  }
  return;
}

