// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// ConditionallyNotifyUser @ 147204d70

void __cdecl UE::Mass::Debug::FNoDebuggerNotification::ConditionallyNotifyUser(void)

{
  bool bVar1;
  FText *pFVar2;
  FText local_18;
  
  bVar1 = FWindowsPlatformMisc::IsDebuggerPresent();
  if (bDebuggerPresent != bVar1) {
    bDebuggerPresent = bVar1;
    if (bVar1) {
      bUserNotified = false;
    }
    else if (bUserNotified == false) {
      pFVar2 = FText::AsLocalizable_Advanced_LocText
                         (&local_18,L"MassDebugger",L"NoDebuggerAttached",
                          L"Breakpoint set but no debugger is attached.");
      FMessageDialog::Open(Ok,pFVar2);
      if (local_18.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
      }
      bUserNotified = true;
      return;
    }
  }
  return;
}

