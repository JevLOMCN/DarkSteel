// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 3

// histo_estimate_J @ 14f3d69a0

float __cdecl
oo2::histo_estimate_J(Histo256 *param_1,long64 param_2,float param_3,OodleSpeedFit *param_4)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1->counts,0x100,(uint)param_2);
  fVar2 = (*param_4->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar2 * param_3 + (float)uVar1 * __real_3e000000;
}

// histo_estimate_complen_bits @ 14f3d6a20

uint __cdecl oo2::histo_estimate_complen_bits(Histo256 *param_1,long64 param_2)

{
  uint uVar1;
  
  uVar1 = newlz_array_estimate_complen_bits(param_1->counts,0x100,(uint)param_2);
  return uVar1;
}

// speedfit_estimate_entropy_array_time @ 14f3d6a40

float __cdecl oo2::speedfit_estimate_entropy_array_time(OodleSpeedFit *param_1,long64 param_2)

{
  float fVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014f3d6a5b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar1 = (*param_1->huff3)(param_2,0x80,0x14,__real_40c00000);
  return fVar1;
}

