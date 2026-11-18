// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// OodleLZLegacyVTable_InstallToCore @ 14f38c100

/* WARNING: Enum "OodleLZ_CompressionLevel": Some values do not have unique names */

void __cdecl OodleLZLegacyVTable_InstallToCore(OodleLZLegacyVTable *param_1)

{
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_CompressContext_Alloc =
       param_1->fp_legacy_OodleLZ_CompressContext_Alloc;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_CompressContext_Free =
       param_1->fp_legacy_OodleLZ_CompressContext_Free;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_CompressContext_Reset =
       param_1->fp_legacy_OodleLZ_CompressContext_Reset;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_CompressWithContext =
       param_1->fp_legacy_OodleLZ_CompressWithContext;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute =
       param_1->fp_legacy_OodleLZDecoder_MemorySizeNeeded_NoPad_Compute;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Reset =
       param_1->fp_legacy_OodleLZDecoder_Reset;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Start =
       param_1->fp_legacy_OodleLZDecoder_Block_Start;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_Block_Reset =
       param_1->fp_legacy_OodleLZDecoder_Block_Reset;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_CheckSlidingWindow =
       param_1->fp_legacy_OodleLZDecoder_CheckSlidingWindow;
  oo2::g_OodleLZLegacyVTable.fp_legacy_GotHuffFlag = param_1->fp_legacy_GotHuffFlag;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_GetDegenerateMemsetVal =
       param_1->fp_legacy_OodleLZDecoder_GetDegenerateMemsetVal;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_DecodeOneQ = param_1->fp_legacy_OodleLZ_DecodeOneQ;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZ_Compress_Sub =
       param_1->fp_legacy_OodleLZ_Compress_Sub;
  oo2::g_OodleLZLegacyVTable.fp_legacy_OodleLZDecoder_MakeValidCircularWindowSize =
       param_1->fp_legacy_OodleLZDecoder_MakeValidCircularWindowSize;
  return;
}

