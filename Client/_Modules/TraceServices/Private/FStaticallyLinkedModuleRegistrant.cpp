// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// InitializeModule @ 14d498c70

IModuleInterface * __cdecl
FStaticallyLinkedModuleRegistrant<FTraceServicesModule>::InitializeModule(void)

{
  IModuleInterface *pIVar1;
  
  pIVar1 = ::operator_new(0x80);
  if (pIVar1 != (IModuleInterface *)0x0) {
    *pIVar1 = (IModuleInterface)&___7FTraceServicesModule__6B_;
    pIVar1[1] = (IModuleInterface)0x0;
    pIVar1[2] = (IModuleInterface)0x0;
    pIVar1[3] = (IModuleInterface)0x0;
    pIVar1[4] = (IModuleInterface)0x0;
    pIVar1[5] = (IModuleInterface)&___7FTimingProfilerModule_TraceServices__6B_;
    pIVar1[6] = (IModuleInterface)&___7FLoadTimeProfilerModule_TraceServices__6B_;
    pIVar1[7] = (IModuleInterface)&___7FStatsModule_TraceServices__6B_;
    pIVar1[8] = (IModuleInterface)&___7FCsvProfilerModule_TraceServices__6B_;
    pIVar1[9] = (IModuleInterface)&___7FCountersModule_TraceServices__6B_;
    pIVar1[10] = (IModuleInterface)&___7FNetProfilerModule_TraceServices__6B_;
    pIVar1[0xb] = (IModuleInterface)&___7FMemoryModule_TraceServices__6B_;
    pIVar1[0xc] = (IModuleInterface)&___7FDiagnosticsModule_TraceServices__6B_;
    pIVar1[0xd] = (IModuleInterface)&___7FPlatformEventsModule_TraceServices__6B_;
    pIVar1[0xe] = (IModuleInterface)&___7FTasksModule_TraceServices__6B_;
    pIVar1[0xf] = (IModuleInterface)&___7FCookProfilerModule_TraceServices__6B_;
    return pIVar1;
  }
  return (IModuleInterface *)0x0;
}

