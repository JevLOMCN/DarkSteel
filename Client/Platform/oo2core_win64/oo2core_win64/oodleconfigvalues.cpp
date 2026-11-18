// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 3

// Oodle_GetConfigValues @ 14f327070

void __cdecl Oodle_GetConfigValues(OodleConfigValues *param_1)

{
  param_1->m_OodleLZ_LW_LRM_step = oo2::g_OodleLZ_LW_LRM_step;
  param_1->m_OodleLZ_LW_LRM_hashLength = oo2::g_OodleLZ_LW_LRM_hashLength;
  param_1->m_OodleLZ_LW_LRM_jumpbits = oo2::g_OodleLZ_LW_LRM_jumpbits;
  param_1->m_OodleLZ_Decoder_Max_Stack_Size = oo2::g_OodleLZ_Decoder_Max_Stack_Size;
  param_1->m_OodleLZ_BackwardsCompatible_MajorVersion =
       oo2::g_OodleLZ_BackwardsCompatible_MajorVersion;
  param_1->m_oodle_header_version = 0x2e090e30;
  return;
}

// Oodle_SetConfigValues @ 14f3270b0

void __cdecl Oodle_SetConfigValues(OodleConfigValues *param_1)

{
  if (param_1->m_oodle_header_version == 0x2e090e30) {
    oo2::g_OodleLZ_LW_LRM_step = param_1->m_OodleLZ_LW_LRM_step;
    oo2::g_OodleLZ_LW_LRM_hashLength = param_1->m_OodleLZ_LW_LRM_hashLength;
    oo2::g_OodleLZ_LW_LRM_jumpbits = param_1->m_OodleLZ_LW_LRM_jumpbits;
    oo2::g_OodleLZ_Decoder_Max_Stack_Size = param_1->m_OodleLZ_Decoder_Max_Stack_Size;
    oo2::g_OodleLZ_BackwardsCompatible_MajorVersion =
         param_1->m_OodleLZ_BackwardsCompatible_MajorVersion;
  }
  return;
}

// Oodle_SetUsageWarnings @ 14f3270f0

void __cdecl Oodle_SetUsageWarnings(Oodle_UsageWarnings param_1)

{
  oo2::g_Oodle_UsageWarningsDisabled = param_1 == Oodle_UsageWarnings_Disabled;
  return;
}

