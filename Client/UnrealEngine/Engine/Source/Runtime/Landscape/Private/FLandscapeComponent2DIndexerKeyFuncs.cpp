// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 1

// GetKey @ 145fc2040

TIntPoint<int> __cdecl
UE::Landscape::Private::FLandscapeComponent2DIndexerKeyFuncs::GetKey(ULandscapeComponent *param_1)

{
  longlong in_RDX;
  undefined8 local_res8;
  
  local_res8 = CONCAT44(*(int *)(in_RDX + 0x54c) / *(int *)(in_RDX + 0x550),
                        *(int *)(in_RDX + 0x548) / *(int *)(in_RDX + 0x550));
  param_1->_padding_ = local_res8;
  return (TIntPoint<int>)(TIntPoint<int>_u_0)param_1;
}

