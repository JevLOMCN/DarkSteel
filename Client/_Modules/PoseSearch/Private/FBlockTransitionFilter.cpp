// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 2

// IsFilterActive @ 14a8c0b60

bool __thiscall
UE::PoseSearch::FSearchFilters::FBlockTransitionFilter::IsFilterActive(FBlockTransitionFilter *this)

{
  return true;
}

// IsFilterValid @ 14a8c0ba0

bool __thiscall
UE::PoseSearch::FSearchFilters::FBlockTransitionFilter::IsFilterValid
          (FBlockTransitionFilter *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  return (bool)(~param_4->bBlockTransition & 1);
}

