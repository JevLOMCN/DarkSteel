// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TraceServices
// Functions: 1

// FColumnDeclaration @ 14d420c90

FColumnDeclaration * __thiscall
TraceServices::TTableLayout<TraceServices::FRequestsTableRow>::FColumnDeclaration::
FColumnDeclaration(FColumnDeclaration *this,FColumnDeclaration *param_1)

{
  undefined8 uVar1;
  
  (this->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.AllocatorInstance.Data = (param_1->Name).Data.AllocatorInstance.Data;
  (param_1->Name).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).Data.ArrayNum = (param_1->Name).Data.ArrayNum;
  (this->Name).Data.ArrayMax = (param_1->Name).Data.ArrayMax;
  (param_1->Name).Data.ArrayNum = 0;
  (param_1->Name).Data.ArrayMax = 0;
  this->Type = param_1->Type;
  this->DisplayHintFlags = param_1->DisplayHintFlags;
  *(undefined8 *)&this->Projector = *(undefined8 *)&param_1->Projector;
  *(undefined8 *)&(this->Projector).field_0x28 = *(undefined8 *)&(param_1->Projector).field_0x28;
  *(undefined8 *)&(param_1->Projector).field_0x28 = 0;
  uVar1 = *(undefined8 *)&(param_1->Projector).field_0x18;
  *(undefined8 *)&(this->Projector).field_0x10 = *(undefined8 *)&(param_1->Projector).field_0x10;
  *(undefined8 *)&(this->Projector).field_0x18 = uVar1;
  *(undefined8 *)&(this->Projector).field_0x20 = *(undefined8 *)&(param_1->Projector).field_0x20;
  if (*(longlong *)&this->Projector != 0) {
    *(undefined8 *)&param_1->Projector = 0;
  }
  return this;
}

