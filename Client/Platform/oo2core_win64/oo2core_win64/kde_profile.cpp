// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 18

// speedfit_kde_memcpy @ 14f3aef50

float __cdecl oo2::speedfit_kde_memcpy(long64 param_1)

{
  return (float)param_1 * __real_3d800000 + 0.0;
}

// speedfit_kde_allzero @ 14f3aef70

float __cdecl oo2::speedfit_kde_allzero(long64 param_1)

{
  return 0.0;
}

// speedfit_kde_allzero_twoargs @ 14f3aef80

float __cdecl oo2::speedfit_kde_allzero_twoargs(long64 param_1,long64 param_2)

{
  return 0.0;
}

// speedfit_kde_get_excesses @ 14f3aef90

float __cdecl oo2::speedfit_kde_get_excesses(long64 param_1,long64 param_2)

{
  return (float)param_2 * __real_3f000000;
}

// speedfit_kde_huff3 @ 14f3aefc0

float __cdecl oo2::speedfit_kde_huff3(long64 param_1,long64 param_2,long64 param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  fVar2 = param_4 - __real_40c00000;
  fVar1 = __real_3e800000;
  if ((0.0 <= fVar2) && (fVar1 = __real_3ec00000, fVar2 <= __real_3f800000)) {
    fVar1 = (__real_3f800000 - fVar2) * __real_3e800000 + fVar2 * __real_3ec00000;
  }
  return (float)param_1 * fVar1 + __real_41a00000 + (float)param_2 +
         (float)param_3 * __real_40800000;
}

// speedfit_kde_huff6 @ 14f3af050

float __cdecl oo2::speedfit_kde_huff6(long64 param_1,long64 param_2,long64 param_3,float param_4)

{
  return 0.0;
}

// speedfit_kde_tans @ 14f3af060

float __cdecl oo2::speedfit_kde_tans(long64 param_1,long64 param_2,long64 param_3)

{
  return 0.0;
}

// speedfit_kde_parse_Selkie @ 14f3af070

float __cdecl
oo2::speedfit_kde_parse_Selkie(long64 param_1,long64 param_2,long64 param_3,long64 param_4)

{
  return 0.0;
}

// speedfit_kde_parse_Mermaid @ 14f3af080

float __cdecl oo2::speedfit_kde_parse_Mermaid(long64 param_1,long64 param_2,long64 param_3)

{
  return 0.0;
}

// speedfit_kde_parse_Kraken @ 14f3af090

float __cdecl oo2::speedfit_kde_parse_Kraken(long64 param_1,long64 param_2,long64 param_3)

{
  float fVar1;
  
  fVar1 = (float)param_2 * __real_3f000000;
  if ((float)param_2 * __real_3f000000 <= (float)param_1 * __real_3e000000) {
    fVar1 = (float)param_1 * __real_3e000000;
  }
  return fVar1;
}

// speedfit_kde_parse_Kraken_subliterals @ 14f3af0c0

float __cdecl oo2::speedfit_kde_parse_Kraken_subliterals(long64 param_1)

{
  return (float)param_1 * __real_3c800000;
}

// speedfit_kde_parse_Leviathan @ 14f3af0e0

float __cdecl oo2::speedfit_kde_parse_Leviathan(long64 param_1,long64 param_2,long64 param_3)

{
  return 0.0;
}

// speedfit_kde_parse_Leviathan_literals @ 14f3af0f0

float __cdecl oo2::speedfit_kde_parse_Leviathan_literals(long64 param_1,int param_2)

{
  return 0.0;
}

// speedfit_kde_deadlines_Kraken @ 14f3af100

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl oo2::speedfit_kde_deadlines_Kraken(OodleKrakenChunkDeadlines *param_1,long64 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar5 = (float)param_2 * ___real_3f11eb85;
  param_1->whole_chunk = fVar5;
  fVar1 = fVar5 - ___xmm_4234000041f000004170000042480000;
  fVar2 = fVar5 - _UNK_1531df594;
  fVar3 = fVar5 - _UNK_1531df598;
  fVar4 = fVar5 - _UNK_1531df59c;
  param_1->parse = fVar5;
  param_1->literals_only = fVar1;
  param_1->literal = fVar2;
  param_1->packet = fVar3;
  param_1->offsets = fVar4;
  param_1->excesses_u8 = fVar5 - __real_42700000;
  return;
}

// speedfit_kde_recompute_Kraken_J @ 14f3af150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl
oo2::speedfit_kde_recompute_Kraken_J
          (long64 param_1,float param_2,long64 param_3,float param_4,long64 param_5,float param_6,
          long64 param_7,float param_8,long64 param_9,float param_10,long64 param_11,float param_12)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = param_2 * __real_41700000;
  fVar5 = (param_6 - (float)param_5) + fVar2 + fVar2;
  fVar4 = (param_8 - (float)param_7) + fVar2 * __real_40400000;
  fVar1 = (param_12 + ___real_42d20000) * param_2;
  fVar3 = (param_10 - (float)param_9) + fVar2 * __real_40800000;
  fVar2 = (param_4 - (float)param_3) + fVar2;
  if (fVar2 <= fVar5) {
    fVar2 = fVar5;
  }
  if (fVar2 <= fVar4) {
    fVar2 = fVar4;
  }
  if (fVar2 <= fVar3) {
    fVar2 = fVar3;
  }
  if (fVar2 <= fVar1) {
    fVar2 = fVar1;
  }
  return (float)param_1 + fVar2;
}

// clamped_lerp @ 14f3af260

float __cdecl oo2::clamped_lerp(float param_1,float param_2,float param_3)

{
  if (param_1 < 0.0) {
    return param_2;
  }
  if (__real_3f800000 < param_1) {
    return param_3;
  }
  return (__real_3f800000 - param_1) * param_2 + param_1 * param_3;
}

// kraken_custom_reduced_profile @ 14f3af2a0

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl oo2::kraken_custom_reduced_profile(newlz_vtable *param_1)

{
  float fVar1;
  
  fVar1 = param_1->lambda * __real_40800000;
  param_1->bitstream_flags = param_1->bitstream_flags & 0xfffffffb;
  param_1->entropy_flags = param_1->entropy_flags & 0xffffff00;
  param_1->bitstream_flags = param_1->bitstream_flags | 1;
  param_1->lambda = fVar1;
  param_1->speedfit = &g_speedfit_kde;
  return;
}

// speedfit_get_kde @ 14f3af2e0

OodleSpeedFit * __cdecl oo2::speedfit_get_kde(void)

{
  return &g_speedfit_kde;
}

