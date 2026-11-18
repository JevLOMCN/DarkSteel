// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// DecDisable @ 148bc75d0

void __cdecl InstallBundleUtil::FInstallBundleManagerScreenSaverControl::DecDisable(void)

{
  DisableCount = DisableCount + -1;
  if ((DisableCount == 0) && (bDidDisableScreensaver)) {
    bDidDisableScreensaver = false;
  }
  return;
}

// IncDisable @ 148bce590

void __cdecl InstallBundleUtil::FInstallBundleManagerScreenSaverControl::IncDisable(void)

{
  DisableCount = DisableCount + 1;
  return;
}

