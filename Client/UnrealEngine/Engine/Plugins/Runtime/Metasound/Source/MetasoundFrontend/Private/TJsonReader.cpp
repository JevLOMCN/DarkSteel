// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 1

// ReadUntilMatching @ 14adcc180

bool __thiscall TJsonReader<char>::ReadUntilMatching(TJsonReader<char> *this,EJsonNotation param_1)

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
LAB_14adcc1de:
        iVar2 = iVar2 + 1;
      }
      else if (local_res18[0] == ObjectEnd) {
LAB_14adcc1da:
        iVar2 = iVar2 + -1;
      }
      else {
        if (local_res18[0] == ArrayStart) goto LAB_14adcc1de;
        if (local_res18[0] == ArrayEnd) goto LAB_14adcc1da;
        if (local_res18[0] == Error) {
          return false;
        }
      }
      bVar1 = ReadNext(this,local_res18);
    } while (bVar1);
  }
  return (bool)((byte)~this->Stream->field_0x29 >> 1 & 1);
}

