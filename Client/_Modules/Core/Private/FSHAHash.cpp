// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// LoadFromCompactBinary @ 141954190

bool __thiscall FSHAHash::LoadFromCompactBinary(FSHAHash *this,FCbFieldView *param_1)

{
  undefined8 uVar1;
  TMemoryView<void_const_> local_28;
  TMemoryView<void_const_> local_18;
  
  local_28.Data = (void *)0x0;
  local_28.Size = 0;
  FCbFieldView::AsBinaryView(param_1,&local_18,&local_28);
  if (local_18.Size != 0x14) {
    this->Hash[0] = '\0';
    this->Hash[1] = '\0';
    this->Hash[2] = '\0';
    this->Hash[3] = '\0';
    this->Hash[4] = '\0';
    this->Hash[5] = '\0';
    this->Hash[6] = '\0';
    this->Hash[7] = '\0';
    this->Hash[8] = '\0';
    this->Hash[9] = '\0';
    this->Hash[10] = '\0';
    this->Hash[0xb] = '\0';
    this->Hash[0xc] = '\0';
    this->Hash[0xd] = '\0';
    this->Hash[0xe] = '\0';
    this->Hash[0xf] = '\0';
    this->Hash[0x10] = '\0';
    this->Hash[0x11] = '\0';
    this->Hash[0x12] = '\0';
    this->Hash[0x13] = '\0';
    return false;
  }
  uVar1 = *(undefined8 *)((longlong)local_18.Data + 8);
  *(undefined8 *)this->Hash = *(undefined8 *)local_18.Data;
  *(undefined8 *)(this->Hash + 8) = uVar1;
  *(undefined4 *)(this->Hash + 0x10) = *(undefined4 *)((longlong)local_18.Data + 0x10);
  return true;
}

// WriteCompactBinary @ 14197c9d0

FCbWriter * __thiscall FSHAHash::WriteCompactBinary(FSHAHash *this,FCbWriter *param_1)

{
  FCbWriter::AddBinary(param_1,this,0x14);
  return param_1;
}

