// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CameraCalibrationCore
// Functions: 1

// SetLowerBoundValue @ 14d6ebbf0

void __thiscall TRange<double>::SetLowerBoundValue(TRange<double> *this,double param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->LowerBound).Type.Value != '\x02') {
    (this->LowerBound).Value = param_1;
    return;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Type != ERangeBoundTypes::Open",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\RangeBound.h"
                     ,0x73,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  (this->LowerBound).Value = param_1;
  return;
}

