// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Serialization
// Functions: 1

// ReadUntilMatching @ 148bac070

bool __thiscall
TJsonReader<wchar_t>::ReadUntilMatching(TJsonReader<wchar_t> *this,EJsonNotation param_1)

{
  bool bVar1;
  int iVar2;
  EJsonNotation local_res18 [4];
  
  iVar2 = 0;
  bVar1 = ReadNext(this,local_res18);
  if (bVar1) {
    do {
      if ((iVar2 == 0) && (local_res18[0] == param_1)) {
        return true;
      }
      if (local_res18[0] == ObjectStart) {
LAB_148bac0ce:
        iVar2 = iVar2 + 1;
      }
      else if (local_res18[0] == ObjectEnd) {
LAB_148bac0ca:
        iVar2 = iVar2 + -1;
      }
      else {
        if (local_res18[0] == ArrayStart) goto LAB_148bac0ce;
        if (local_res18[0] == ArrayEnd) goto LAB_148bac0ca;
        if (local_res18[0] == Error) {
          return false;
        }
      }
      bVar1 = ReadNext(this,local_res18);
    } while (bVar1);
  }
  return (bool)((byte)~this->Stream->field_0x29 >> 1 & 1);
}

