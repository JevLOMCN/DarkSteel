// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FAutomationTestInfo @ 141815900

FAutomationTestInfo * __thiscall
FAutomationTestInfo::FAutomationTestInfo(FAutomationTestInfo *this,FAutomationTestInfo *param_1)

{
  ::FString::FString(&this->DisplayName,&param_1->DisplayName);
  ::FString::FString(&this->FullTestPath,&param_1->FullTestPath);
  ::FString::FString(&this->TestName,&param_1->TestName);
  ::FString::FString(&this->TestTags,&param_1->TestTags);
  ::FString::FString(&this->TestParameter,&param_1->TestParameter);
  ::FString::FString(&this->SourceFile,&param_1->SourceFile);
  this->SourceFileLine = param_1->SourceFileLine;
  ::FString::FString(&this->AssetPath,&param_1->AssetPath);
  ::FString::FString(&this->OpenCommand,&param_1->OpenCommand);
  this->TestFlags = param_1->TestFlags;
  this->NumParticipantsRequired = param_1->NumParticipantsRequired;
  this->NumDevicesCurrentlyRunningTest = param_1->NumDevicesCurrentlyRunningTest;
  return this;
}

