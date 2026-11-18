// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// CreateMutation @ 14612aa90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FRemoveMultipleMutation::CreateMutation
          (FRemoveMultipleMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  <lambda_1> local_res8 [32];
  
  Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseAND<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&(this->MaskToRemove).Bits,&param_2->Bits,OneFillMissingBits|MaintainSize,local_res8);
  return;
}

// RemoveComponent @ 14614f020

void __thiscall
UE::MovieScene::FRemoveMultipleMutation::RemoveComponent
          (FRemoveMultipleMutation *this,FComponentTypeID param_1)

{
  TTypeCompatibleBytes<unsigned_int> *pTVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = ((uint)param_1.Value - (this->MaskToRemove).Bits.NumBits) + 1;
  if (0 < iVar3) {
    TBitArray<TFixedAllocator<12>_>::Add(&(this->MaskToRemove).Bits,true,iVar3);
  }
  uVar2 = (this->MaskToRemove).Bits.NumBits;
  if (uVar2 != param_1.Value && (int)(uint)param_1.Value <= (int)uVar2) {
    pTVar1 = (this->MaskToRemove).Bits.AllocatorInstance.InlineData + (param_1.Value >> 5);
    *(uint *)pTVar1->Pad = *(uint *)pTVar1->Pad & ~(1 << ((byte)param_1.Value & 0x1f));
  }
  return;
}

