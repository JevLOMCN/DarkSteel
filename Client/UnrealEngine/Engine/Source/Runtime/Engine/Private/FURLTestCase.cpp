// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FURLTestCase @ 148909d90

FURLTestCase * __thiscall FURLTestCase::FURLTestCase(FURLTestCase *this,FURLTestCase *param_1)

{
  (this->QueryString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryString).Data.AllocatorInstance.Data =
       (param_1->QueryString).Data.AllocatorInstance.Data;
  (param_1->QueryString).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->QueryString).Data.ArrayNum = (param_1->QueryString).Data.ArrayNum;
  (this->QueryString).Data.ArrayMax = (param_1->QueryString).Data.ArrayMax;
  (param_1->QueryString).Data.ArrayNum = 0;
  (param_1->QueryString).Data.ArrayMax = 0;
  (this->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Protocol).Data.AllocatorInstance.Data = (param_1->Protocol).Data.AllocatorInstance.Data;
  (param_1->Protocol).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Protocol).Data.ArrayNum = (param_1->Protocol).Data.ArrayNum;
  (this->Protocol).Data.ArrayMax = (param_1->Protocol).Data.ArrayMax;
  (param_1->Protocol).Data.ArrayNum = 0;
  (param_1->Protocol).Data.ArrayMax = 0;
  (this->Host).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Host).Data.AllocatorInstance.Data = (param_1->Host).Data.AllocatorInstance.Data;
  (param_1->Host).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Host).Data.ArrayNum = (param_1->Host).Data.ArrayNum;
  (this->Host).Data.ArrayMax = (param_1->Host).Data.ArrayMax;
  (param_1->Host).Data.ArrayNum = 0;
  (param_1->Host).Data.ArrayMax = 0;
  this->Port = param_1->Port;
  return this;
}

