// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WindowsPlatformFeatures
// Functions: 1

// GetCurrentlyActiveHandle @ 148d274b0

bool __thiscall
FWindowsVideoRecordingSystem::FWindowsScreenRecording::GetCurrentlyActiveHandle
          (FWindowsScreenRecording *this)

{
  HRESULT HVar1;
  BOOL BVar2;
  FWindowHandle *pFVar3;
  HWND hWnd;
  FWindowHandle *pFVar4;
  bool bVar5;
  FWindowsScreenRecording local_18 [2];
  
  pFVar3 = ::operator_new(0x18);
  pFVar4 = (FWindowHandle *)0x0;
  if (pFVar3 != (FWindowHandle *)0x0) {
    pFVar3->WindowsHandle = (HWND__ *)0x0;
    pFVar3->Affinity = 0;
    pFVar3->bIsSupported = 0;
    pFVar3->DisableCount = 0;
    pFVar4 = pFVar3;
  }
  HVar1 = DwmIsCompositionEnabled(&pFVar4->bIsSupported);
  if ((HVar1 == 0) && (pFVar4->bIsSupported != 0)) {
    hWnd = GetActiveWindow();
    pFVar4->WindowsHandle = (HWND__ *)hWnd;
    if (hWnd == (HWND)0x0) goto LAB_148d27578;
    BVar2 = GetWindowDisplayAffinity(hWnd,&pFVar4->Affinity);
    pFVar4->bIsSupported = BVar2;
    if (BVar2 == 0) goto LAB_148d27578;
    ::operator_delete((void *)0x0,0x18);
    pFVar3 = (this->CurrentHandle).Ptr;
    if (pFVar4 != (FWindowHandle *)0x0) {
      if ((pFVar3 != (FWindowHandle *)0x0) && (pFVar3->WindowsHandle != pFVar4->WindowsHandle)) {
        (this->CurrentHandle).Ptr = (FWindowHandle *)0x0;
        ::operator_delete(pFVar3,0x18);
      }
      if (((this->CurrentHandle).Ptr == (FWindowHandle *)0x0) && (this != local_18)) {
        (this->CurrentHandle).Ptr = pFVar4;
        pFVar4 = (FWindowHandle *)0x0;
        ::operator_delete((void *)0x0,0x18);
      }
      bVar5 = true;
      goto LAB_148d275a0;
    }
  }
  else {
LAB_148d27578:
    ::operator_delete(pFVar4,0x18);
    pFVar3 = (this->CurrentHandle).Ptr;
    pFVar4 = (FWindowHandle *)0x0;
  }
  if (pFVar3 != (FWindowHandle *)0x0) {
    (this->CurrentHandle).Ptr = (FWindowHandle *)0x0;
    ::operator_delete(pFVar3,0x18);
  }
  bVar5 = false;
LAB_148d275a0:
  ::operator_delete(pFVar4,0x18);
  return bVar5;
}

