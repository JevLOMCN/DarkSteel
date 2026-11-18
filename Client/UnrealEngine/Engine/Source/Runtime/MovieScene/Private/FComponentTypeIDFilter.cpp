// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// Passes @ 146149140

bool __thiscall
UE::MovieScene::FComponentTypeIDFilter::Passes(FComponentTypeIDFilter *this,FComponentMask *param_1)

{
  ushort uVar1;
  
  uVar1 = this->Value;
  if (uVar1 != 0x7fff) {
    if (((int)(uint)uVar1 < (param_1->Bits).NumBits) &&
       ((*(uint *)(param_1->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1
        ) != 0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    if (uVar1 != this->PassFlag) {
      return false;
    }
  }
  return true;
}

