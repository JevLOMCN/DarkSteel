// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// IsValid @ 1473a7920

bool __cdecl FNavigationRelevantData::FCollisionDataHeader::IsValid(uchar *param_1,int param_2)

{
  if ((param_2 != 0) && ((param_2 < 4 || (*(int *)param_1 != param_2)))) {
    return false;
  }
  return true;
}

