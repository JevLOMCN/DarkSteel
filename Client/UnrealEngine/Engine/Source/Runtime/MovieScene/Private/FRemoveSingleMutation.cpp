// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CreateMutation @ 14612aab0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FRemoveSingleMutation::CreateMutation
          (FRemoveSingleMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  ushort uVar2;
  
  uVar2 = (this->ComponentToRemove).Value;
  if ((int)(uint)uVar2 < (param_2->Bits).NumBits) {
    pTVar1 = (param_2->Bits).AllocatorInstance.InlineData + (uVar2 >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << ((byte)uVar2 & 0x1f));
  }
  return;
}

