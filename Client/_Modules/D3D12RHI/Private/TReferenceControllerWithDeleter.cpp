// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// DestroyObject @ 145aa0e70

void __thiscall
SharedPointerInternals::
TReferenceControllerWithDeleter<FWindowsD3D12Adapter,SharedPointerInternals::DefaultDeleter<FWindowsD3D12Adapter>,1>
::DestroyObject(TReferenceControllerWithDeleter<FWindowsD3D12Adapter,SharedPointerInternals::DefaultDeleter<FWindowsD3D12Adapter>,1>
                *this)

{
  FWindowsD3D12Adapter *pFVar1;
  
  pFVar1 = this->Object;
  if (pFVar1 != (FWindowsD3D12Adapter *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000145aa0e81. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)**(undefined8 **)pFVar1)(pFVar1,1);
    return;
  }
  return;
}

