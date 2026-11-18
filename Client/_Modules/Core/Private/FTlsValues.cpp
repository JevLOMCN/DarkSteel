// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// operator_new @ 141482030

void * __cdecl LowLevelTasks::FSchedulerTls::FTlsValues::operator_new(ulong64 param_1)

{
  void *pvVar1;
  
  pvVar1 = AnsiMalloc(param_1,0x40);
  return pvVar1;
}

// operator_delete @ 141482040

void __cdecl LowLevelTasks::FSchedulerTls::FTlsValues::operator_delete(void *param_1)

{
  MemoryTrace_Free((ulong64)param_1,0,0);
                    /* WARNING: Could not recover jumptable at 0x000141681feb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  _aligned_free(param_1);
  return;
}

