// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// FPreAnimatedTrackerParams @ 146181b70

/* WARNING: Enum "Type": Some values do not have unique names */

FPreAnimatedTrackerParams * __thiscall
UE::MovieScene::FPreAnimatedTrackerParams::FPreAnimatedTrackerParams
          (FPreAnimatedTrackerParams *this,FEntityAllocationProxy *param_1)

{
  ushort uVar1;
  FEntityAllocation *pFVar2;
  FComponentMask *pFVar3;
  FBuiltInComponentTypes *pFVar4;
  
  pFVar2 = FEntityAllocationProxy::GetAllocation(param_1);
  this->Num = (uint)pFVar2->Size;
  pFVar3 = FEntityAllocationProxy::GetAllocationType(param_1);
  pFVar4 = FBuiltInComponentTypes::Get();
  uVar1 = (pFVar4->Tags).RestoreState.Value;
  if (((uVar1 != 0xffff) && ((int)(uint)uVar1 < (pFVar3->Bits).NumBits)) &&
     ((*(uint *)(pFVar3->Bits).AllocatorInstance.InlineData[uVar1 >> 5].Pad >> (uVar1 & 0x1f) & 1)
      != 0)) {
    this->bWantsRestoreState = true;
    return this;
  }
  this->bWantsRestoreState = false;
  return this;
}

