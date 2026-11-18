// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAutomationEvent @ 141814d40

FAutomationEvent * __thiscall
FAutomationEvent::FAutomationEvent(FAutomationEvent *this,FAutomationEvent *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  this->Type = param_1->Type;
  ::FString::FString(&this->Message,&param_1->Message);
  ::FString::FString(&this->Context,&param_1->Context);
  uVar1 = (param_1->Artifact).B;
  uVar2 = (param_1->Artifact).C;
  uVar3 = (param_1->Artifact).D;
  (this->Artifact).A = (param_1->Artifact).A;
  (this->Artifact).B = uVar1;
  (this->Artifact).C = uVar2;
  (this->Artifact).D = uVar3;
  return this;
}

