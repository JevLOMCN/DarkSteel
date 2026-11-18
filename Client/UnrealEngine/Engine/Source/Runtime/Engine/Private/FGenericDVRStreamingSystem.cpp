// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// EnableStreaming @ 148378210

void __thiscall
FGenericDVRStreamingSystem::EnableStreaming(FGenericDVRStreamingSystem *this,bool param_1)

{
  this->bIsStreamingEnabled = param_1;
  return;
}

// GetStreamingStatus @ 148389eb0

void __thiscall
FGenericDVRStreamingSystem::GetStreamingStatus
          (FGenericDVRStreamingSystem *this,FDVRStreamingStatus *param_1)

{
  param_1->bIsStreaming = false;
  param_1->bIsStreamingEnabled = this->bIsStreamingEnabled;
  param_1->ViewerCount = 0;
  ::FString::operator=(&param_1->ProgramName,L"");
  ::FString::operator=(&param_1->HLSUrl,L"");
  ::FString::operator=(&param_1->ProviderUrl,L"");
  return;
}

