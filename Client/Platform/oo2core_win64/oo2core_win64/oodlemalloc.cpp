// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: oo2core_win64
// Functions: 1

// Oodle_Core_Malloc_Failed @ 14f3313c0

void __cdecl oo2::Oodle_Core_Malloc_Failed(long64 param_1)

{
  code *pcVar1;
  int iVar2;
  
  ooLogErrorPre();
  if (g_fp_OodleCore_Plugin_Printf != (_func___cdecl_void_int_char_ptr_int_char_ptr *)0x0) {
    (*g_fp_OodleCore_Plugin_Printf)
              (0,"v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0x12,
               "OODLE ERROR : Oodle_Core_Malloc_Failed ; %lld bytes\n");
  }
  ooLogErrorPost();
  iVar2 = rrDisplayAssertion("v:\\devel\\projects\\oodle2\\core\\oodlemalloc.cpp",0x15,
                             "oo2::Oodle_Core_Malloc_Failed","false");
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

