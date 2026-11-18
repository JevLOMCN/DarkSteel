// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// DumpToLog @ 1421c70c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UE::GC::Private::FStats::DumpToLog(FStats *this)

{
  FString local_28 [2];
  
  if (((4 < (byte)LogGarbage._0_1_) &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
      4 < (byte)LogGarbage._0_1_)) &&
     (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
     4 < (byte)LogGarbage._0_1_)) {
    ::FString::PrintfImpl(local_28,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
    if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
    }
    if ((4 < (byte)LogGarbage._0_1_) &&
       (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
       4 < (byte)LogGarbage._0_1_)) {
      ::FString::PrintfImpl(local_28,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
      Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
      if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
      }
      if (((4 < (byte)LogGarbage._0_1_) &&
          (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
          4 < (byte)LogGarbage._0_1_)) &&
         (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
         4 < (byte)LogGarbage._0_1_)) {
        ::FString::PrintfImpl(local_28,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
        Logging::Private::BasicLog<5>
                  ((FStaticBasicLogRecord *)&PTR_u___GatherUnreach_15086d948,
                   (FLogCategoryBase *)&LogGarbage);
        if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
        }
        if (((4 < (byte)LogGarbage._0_1_) &&
            (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
            4 < (byte)LogGarbage._0_1_)) &&
           (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
           4 < (byte)LogGarbage._0_1_)) {
          ::FString::PrintfImpl(local_28,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
          Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
          if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
          }
          if (4 < (byte)LogGarbage._0_1_) {
            ::FString::PrintfImpl(local_28,L"%7.3fms, Iterations: %4d, Max: %7.3fms (%4d)");
            Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            if (local_28[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28[0].Data.AllocatorInstance.Data);
            }
            if (((4 < (byte)LogGarbage._0_1_) &&
                (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
                4 < (byte)LogGarbage._0_1_)) &&
               ((Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
                4 < (byte)LogGarbage._0_1_ &&
                (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
                4 < (byte)LogGarbage._0_1_)))) {
              Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
            }
          }
        }
      }
    }
  }
  if (((4 < (byte)LogGarbage._0_1_) &&
      (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
      4 < (byte)LogGarbage._0_1_)) &&
     (Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage),
     4 < (byte)LogGarbage._0_1_)) {
    Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogGarbage);
  }
  return;
}

