// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnalyticsLog
// Functions: 1

// ExecuteTask @ 14ea17d60

void __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>,void,void>::ExecuteTask
          (void *this)

{
  `FAnalyticsProviderLog::RecordEvent'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0xd8));
  if (*(void **)((longlong)this + 0xe0) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0xe0));
    return;
  }
  return;
}

