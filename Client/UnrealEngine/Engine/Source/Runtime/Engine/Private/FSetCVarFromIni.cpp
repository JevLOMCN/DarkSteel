// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// OnEntry @ 14884baf0

void __thiscall FSetCVarFromIni::OnEntry(FSetCVarFromIni *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t *pwVar1;
  
  if ((this->IniFilename->Data).ArrayNum == 0) {
    pwVar1 = L"";
  }
  else {
    pwVar1 = (wchar_t *)(this->IniFilename->Data).AllocatorInstance.Data;
  }
  UE::ConfigUtilities::OnSetCVarFromIniEntry
            (pwVar1,param_1,param_2,0x5000000,false,false,(FName)0x0);
  return;
}

