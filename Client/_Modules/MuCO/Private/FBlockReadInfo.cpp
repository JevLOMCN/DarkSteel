// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 1

// FBlockReadInfo @ 14ac504a0

FBlockReadInfo * __thiscall
FMutableStreamRequest::FBlockReadInfo::FBlockReadInfo
          (FBlockReadInfo *this,ulong64 param_1,IAsyncReadFileHandle *param_2,
          TArrayView<unsigned_char,int> *param_3,uint param_4,EStreamableDataType param_5,
          ushort param_6,ushort param_7)

{
  uchar *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  this->Offset = param_1;
  this->FileHandle = param_2;
  puVar1 = param_3->DataPtr;
  iVar2 = param_3->ArrayNum;
  uVar3 = *(undefined4 *)&param_3->field_0xc;
  this->FileId = param_4;
  this->ResourceType = param_6;
  this->ResourceFlags = param_7;
  this->DataType = param_5;
  (this->AllocatedMemoryView).DataPtr = puVar1;
  (this->AllocatedMemoryView).ArrayNum = iVar2;
  *(undefined4 *)&(this->AllocatedMemoryView).field_0xc = uVar3;
  return this;
}

