// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LFNRS
// Functions: 1

// CountBytes @ 146ca7df0

void __thiscall FLocalFileEventInfo::CountBytes(FLocalFileEventInfo *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Id).Data.ArrayNum * 2,(longlong)(this->Id).Data.ArrayMax * 2);
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Group).Data.ArrayNum * 2,
             (longlong)(this->Group).Data.ArrayMax * 2);
                    /* WARNING: Could not recover jumptable at 0x000146ca7e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x10))
            (param_1,(longlong)(this->Metadata).Data.ArrayNum * 2,
             (longlong)(this->Metadata).Data.ArrayMax * 2);
  return;
}

