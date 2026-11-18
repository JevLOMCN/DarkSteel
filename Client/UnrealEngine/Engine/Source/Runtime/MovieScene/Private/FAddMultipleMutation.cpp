// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 1

// CreateMutation @ 14612a9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAddMultipleMutation::CreateMutation
          (FAddMultipleMutation *this,FEntityManager *param_1,FComponentMask *param_2)

{
  <lambda_1> local_res8 [32];
  
  Core::Private::
  BitwiseOperatorImpl<TFixedAllocator<12>,TFixedAllocator<12>,_TBitArray<TFixedAllocator<12>_>::CombineWithBitwiseOR<TFixedAllocator<12>_>_::__l2::<lambda_1>_>
            (&(this->MaskToAdd).Bits,&param_2->Bits,MaintainSize,local_res8);
  return;
}

