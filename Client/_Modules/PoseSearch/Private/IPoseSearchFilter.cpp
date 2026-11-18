// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 3

// ~IPoseSearchFilter @ 14a8aded0

void __thiscall IPoseSearchFilter::~IPoseSearchFilter(IPoseSearchFilter *this)

{
  *this = (IPoseSearchFilter)&___7IPoseSearchFilter__6B_;
  return;
}

// IsFilterActive @ 14a8c0b90

bool __thiscall IPoseSearchFilter::IsFilterActive(IPoseSearchFilter *this)

{
  return false;
}

// IsFilterValid @ 14a8c0cb0

bool __thiscall
IPoseSearchFilter::IsFilterValid
          (IPoseSearchFilter *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float_const_,int> *param_2,int param_3,FPoseMetadata *param_4)

{
  return true;
}

