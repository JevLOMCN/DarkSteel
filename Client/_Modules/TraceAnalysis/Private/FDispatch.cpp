// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceAnalysis
// Functions: 1

// GetFieldIndex @ 14d39c940

int __thiscall UE::Trace::FDispatch::GetFieldIndex(FDispatch *this,char *param_1)

{
  uchar *puVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar3 = 0x811c9dc5;
  bVar2 = *param_1;
  while (bVar2 != 0) {
    param_1 = param_1 + 1;
    uVar3 = (bVar2 ^ uVar3) * 0x1000193;
    bVar2 = *param_1;
  }
  puVar1 = &this->FieldCount;
  iVar5 = 0;
  if ((ulonglong)*puVar1 != 0) {
    lVar4 = 0;
    do {
      this = this + 1;
      if (this->Hash == uVar3) {
        return iVar5;
      }
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + 1;
    } while (lVar4 < (longlong)(ulonglong)*puVar1);
  }
  return -1;
}

