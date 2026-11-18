// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 3

// ~IAudioAnalyzerRackUnit @ 14d8bf850

void __thiscall
AudioWidgets::IAudioAnalyzerRackUnit::~IAudioAnalyzerRackUnit(IAudioAnalyzerRackUnit *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7IAudioAnalyzerRackUnit_AudioWidgets__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x00014d8bf87a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// StartProcessing @ 14d971b00

void __thiscall AudioWidgets::IAudioAnalyzerRackUnit::StartProcessing(IAudioAnalyzerRackUnit *this)

{
  return;
}

// StopProcessing @ 14d9723c0

void __thiscall AudioWidgets::IAudioAnalyzerRackUnit::StopProcessing(IAudioAnalyzerRackUnit *this)

{
  return;
}

