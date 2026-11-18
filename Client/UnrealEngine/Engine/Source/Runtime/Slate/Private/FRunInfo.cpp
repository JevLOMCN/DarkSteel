// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FRunInfo @ 142844b60

FRunInfo * __thiscall FRunInfo::FRunInfo(FRunInfo *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  *(undefined8 *)&(this->MetaData).field_0x10 = 0;
  *(undefined8 *)&(this->MetaData).field_0x18 = 0;
  *(undefined8 *)&(this->MetaData).field_0x38 = 0;
  *(undefined8 *)&(this->MetaData).field_0x48 = 0;
  *(undefined8 *)&this->MetaData = 0;
  *(undefined8 *)&(this->MetaData).field_0x8 = 0;
  *(undefined8 *)&(this->MetaData).field_0x20 = 0;
  *(undefined4 *)&(this->MetaData).field_0x28 = 0;
  *(undefined4 *)&(this->MetaData).field_0x2c = 0x80;
  *(undefined4 *)&(this->MetaData).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MetaData).field_0x34 = 0;
  *(undefined8 *)&(this->MetaData).field_0x40 = 0;
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

