// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ~FChildEntityInitializer @ 1460976a0

void __thiscall
UE::MovieScene::FChildEntityInitializer::~FChildEntityInitializer(FChildEntityInitializer *this)

{
  this->_padding_ = (longlong)&___7FChildEntityInitializer_MovieScene_UE__6B_;
  return;
}

// IsRelevant @ 1460d91f0

bool __thiscall
UE::MovieScene::FChildEntityInitializer::IsRelevant
          (FChildEntityInitializer *this,FComponentMask *param_1,FComponentMask *param_2)

{
  ushort uVar1;
  bool bVar2;
  bool bVar3;
  
  uVar1 = (this->ParentComponent).Value;
  if ((uVar1 == 0xffff) ||
     (((int)(uint)uVar1 < (param_1->Bits).NumBits &&
      ((*(uint *)(param_1->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
       != 0)))) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  uVar1 = (this->ChildComponent).Value;
  if (((uVar1 == 0xffff) || ((param_2->Bits).NumBits <= (int)(uint)uVar1)) ||
     ((*(uint *)(param_2->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      == 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if ((bVar2) && (bVar3)) {
    return true;
  }
  return false;
}

