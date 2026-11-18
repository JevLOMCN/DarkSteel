// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// TestEqual<FCameraVariableID> @ 14d654a90

bool __thiscall
FAutomationTestBase::TestEqual<FCameraVariableID>
          (FAutomationTestBase *this,wchar_t *param_1,FCameraVariableID *param_2,
          FCameraVariableID *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (param_2->Value != param_3->Value) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

// TestEqual<FGuid> @ 14d654b00

bool __thiscall
FAutomationTestBase::TestEqual<FGuid>
          (FAutomationTestBase *this,wchar_t *param_1,FGuid *param_2,FGuid *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (((param_2->D != param_3->D || param_2->C != param_3->C) || param_2->B != param_3->B) ||
      param_2->A != param_3->A) {
    pcVar1 = *(code **)(this->_padding_ + 0x28);
    ::FString::PrintfImpl(&local_18,L"%s: The two values are not equal.");
    (*pcVar1)(this,&local_18,0);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    return false;
  }
  return true;
}

