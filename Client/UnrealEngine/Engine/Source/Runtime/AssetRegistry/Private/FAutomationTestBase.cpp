// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 1

// TestEqual<bool> @ 142b49730

bool __thiscall
FAutomationTestBase::TestEqual<bool>
          (FAutomationTestBase *this,wchar_t *param_1,bool *param_2,bool *param_3)

{
  code *pcVar1;
  FString local_18;
  
  if (*param_2 != *param_3) {
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

