// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// FSuggestedDriverEntry @ 141be94b0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FSuggestedDriverEntry * __thiscall
FSuggestedDriverEntry::FSuggestedDriverEntry(FSuggestedDriverEntry *this,wchar_t *param_1)

{
  bool bVar1;
  int iVar2;
  FString *this_00;
  bool bVar3;
  FString local_28;
  
  bVar3 = false;
  FDriverConfigEntryConstraints::FDriverConfigEntryConstraints
            ((FDriverConfigEntryConstraints *)this,param_1);
  (this->SuggestedDriverVersion).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SuggestedDriverVersion).Data.ArrayNum = 0;
  (this->SuggestedDriverVersion).Data.ArrayMax = 0;
  FParse::Value(param_1,L"DriverVersion=",&this->SuggestedDriverVersion,true,(wchar_t **)0x0);
  if ((((this->SuggestedDriverVersion).Data.ArrayNum < 2) &&
      (*(int *)((longlong)&this->_padding_ + 4) == -1)) && ((char)this->_padding_ == '\0')) {
    this_00 = ::FString::FString(&local_28,param_1);
    iVar2 = ::FString::Find(this_00,L"=",1,IgnoreCase,FromStart,-1);
    bVar3 = true;
    if (iVar2 == -1) {
      bVar1 = true;
      goto LAB_141be954c;
    }
  }
  bVar1 = false;
LAB_141be954c:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    ::FString::operator=(&this->SuggestedDriverVersion,param_1);
  }
  return this;
}

