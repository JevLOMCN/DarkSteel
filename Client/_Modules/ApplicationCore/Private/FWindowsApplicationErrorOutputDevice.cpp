// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ApplicationCore
// Functions: 1

// HandleErrorRestoreUI @ 1423e6a30

void __thiscall
FWindowsApplicationErrorOutputDevice::HandleErrorRestoreUI
          (FWindowsApplicationErrorOutputDevice *this)

{
  int iVar1;
  
  do {
    iVar1 = ShowCursor(1);
  } while (iVar1 < 0);
  ReleaseCapture();
  ClipCursor((RECT *)0x0);
  FWindowsPlatformApplicationMisc::ClipboardCopy(GErrorHist);
  return;
}

