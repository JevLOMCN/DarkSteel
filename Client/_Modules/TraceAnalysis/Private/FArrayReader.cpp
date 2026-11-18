// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 2

// GetImpl @ 14d39cae0

void * __thiscall
UE::Trace::IAnalyzer::FArrayReader::GetImpl(FArrayReader *this,uint param_1,schar *param_2)

{
  FArrayReader FVar1;
  FArrayReader FVar2;
  uint uVar3;
  
  FVar1 = this[0xe];
  *param_2 = (schar)FVar1;
  uVar3 = -(int)(char)this[0xe];
  if ((int)uVar3 < 0) {
    uVar3 = (int)(char)this[0xe];
  }
  if ((uVar3 != 0) && (param_1 < *(uint *)(this + 8) / uVar3)) {
    FVar2 = (FArrayReader)-(char)FVar1;
    if (-1 < (char)FVar1) {
      FVar2 = FVar1;
    }
    *param_2 = (schar)FVar2;
    return (void *)((ulonglong)((int)(char)FVar2 * param_1) + *(longlong *)this);
  }
  return (void *)0x0;
}

// Num @ 14d3a08e0

uint __thiscall UE::Trace::IAnalyzer::FArrayReader::Num(FArrayReader *this)

{
  uint uVar1;
  
  uVar1 = -(int)(char)this[0xe];
  if ((int)uVar1 < 0) {
    uVar1 = (int)(char)this[0xe];
  }
  if (uVar1 == 0) {
    return 0;
  }
  return *(uint *)(this + 8) / uVar1;
}

