// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AutomationWorker
// Functions: 1

// FAutomationExecutionEntry @ 148bfe1b0

FAutomationExecutionEntry * __thiscall
FAutomationExecutionEntry::FAutomationExecutionEntry
          (FAutomationExecutionEntry *this,FAutomationEvent *param_1)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  (this->Event).Type = param_1->Type;
  ::FString::FString(&(this->Event).Message,&param_1->Message);
  ::FString::FString(&(this->Event).Context,&param_1->Context);
  uVar2 = (param_1->Artifact).B;
  uVar3 = (param_1->Artifact).C;
  uVar4 = (param_1->Artifact).D;
  (this->Event).Artifact.A = (param_1->Artifact).A;
  (this->Event).Artifact.B = uVar2;
  (this->Event).Artifact.C = uVar3;
  (this->Event).Artifact.D = uVar4;
  (this->Filename).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Filename).Data.ArrayNum = 0;
  (this->Filename).Data.ArrayMax = 0;
  this->LineNumber = -1;
  FDateTime::UtcNow();
  pFVar1 = (param_1->Context).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_1->Message).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return this;
}

