// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// ApplyMaterialOverride @ 14938f700

void __thiscall
FNiagaraDynamicDataSprites::ApplyMaterialOverride
          (FNiagaraDynamicDataSprites *this,int param_1,UMaterialInterface *param_2)

{
  FMaterialRenderProxy *pFVar1;
  
  if ((param_1 == 0) && (param_2 != (UMaterialInterface *)0x0)) {
    pFVar1 = (FMaterialRenderProxy *)(**(code **)(param_2->_padding_ + 0x310))(param_2);
    this->Material = pFVar1;
  }
  return;
}

