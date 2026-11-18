// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimationCore
// Functions: 1

// DescSortByWeightPredicate @ 142381760

bool __cdecl
UE::AnimationCore::FBoneWeight::DescSortByWeightPredicate(FBoneWeight *param_1,FBoneWeight *param_2)

{
  return param_2->RawWeight < param_1->RawWeight;
}

