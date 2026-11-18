// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// DoTask @ 1481709d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FGameThreadDispatchBatchedAsyncTasks::DoTask
          (FGameThreadDispatchBatchedAsyncTasks *this,Type param_1,
          TRefCountPtr<FBaseGraphTask> *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = IsInGameThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Particles\\ParticleSystemComponent.cpp"
                       ,0x83f,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FFXAsyncBatcher::Flush(&FXAsyncBatcher);
  return;
}

