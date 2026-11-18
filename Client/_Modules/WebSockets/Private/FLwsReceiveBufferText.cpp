// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 1

// FLwsReceiveBufferText @ 14b3f8310

FLwsReceiveBufferText * __thiscall
FLwsReceiveBufferText::FLwsReceiveBufferText(FLwsReceiveBufferText *this,FString *param_1)

{
  (this->Text).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.AllocatorInstance.Data = (param_1->Data).AllocatorInstance.Data;
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Text).Data.ArrayNum = (param_1->Data).ArrayNum;
  (this->Text).Data.ArrayMax = (param_1->Data).ArrayMax;
  (param_1->Data).ArrayNum = 0;
  (param_1->Data).ArrayMax = 0;
  return this;
}

