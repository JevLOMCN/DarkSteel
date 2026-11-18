// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: libPNG
// Functions: 1

// png_init_filter_functions_sse2 @ 140dd9d30

void __cdecl png_init_filter_functions_sse2(png_struct_def_conflict *param_1,uint param_2)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  
  if (param_2 == 3) {
    pcVar1 = png_read_filter_row_paeth3_sse2;
    pcVar2 = png_read_filter_row_avg3_sse2;
    pcVar3 = png_read_filter_row_sub3_sse2;
  }
  else {
    if (param_2 != 4) {
      return;
    }
    pcVar1 = png_read_filter_row_paeth4_sse2;
    pcVar2 = png_read_filter_row_avg4_sse2;
    pcVar3 = png_read_filter_row_sub4_sse2;
  }
  param_1->read_filter[0] = pcVar3;
  param_1->read_filter[2] = pcVar2;
  param_1->read_filter[3] = pcVar1;
  return;
}

