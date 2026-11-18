// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ShouldCastDynamicShadows @ 1455d7230

/* WARNING: Enum "EBlendMode": Some values do not have unique names */

bool __thiscall FMaterial::ShouldCastDynamicShadows(FMaterial *this)

{
  bool bVar1;
  char cVar2;
  EBlendMode EVar3;
  short *psVar4;
  undefined1 local_res8 [8];
  
  EVar3 = (**(code **)(this->_padding_ + 0x268))();
  psVar4 = (short *)(**(code **)(this->_padding_ + 0x280))(this,local_res8);
  if (*psVar4 == 0x400) {
    return false;
  }
  bVar1 = IsOpaqueBlendMode(EVar3);
  if ((!bVar1) && (bVar1 = IsMaskedBlendMode(EVar3), !bVar1)) {
    bVar1 = IsTranslucentOnlyBlendMode(EVar3);
    if ((bVar1) && (cVar2 = (**(code **)(this->_padding_ + 0x2a0))(this), cVar2 != '\0')) {
      return true;
    }
    return false;
  }
  return true;
}

