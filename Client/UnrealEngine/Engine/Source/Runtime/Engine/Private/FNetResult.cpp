// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator== @ 147fac310

bool __thiscall UE::Net::FNetResult::operator==(FNetResult *this,FNetResult *param_1)

{
  int iVar1;
  TPimplPtr<UE::Net::FNetResult,1> this_00;
  int iVar2;
  bool bVar3;
  
  if (this->Result != param_1->Result) {
    return false;
  }
  iVar2 = (this->ErrorContext).Data.ArrayNum;
  iVar1 = (param_1->ErrorContext).Data.ArrayNum;
  if (iVar2 == iVar1) {
    if (iVar2 < 2) goto LAB_147fac354;
    iVar2 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->ErrorContext).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->ErrorContext).Data.AllocatorInstance.Data);
    bVar3 = iVar2 == 0;
  }
  else {
    bVar3 = iVar2 + iVar1 == 1;
  }
  if (!bVar3) {
    return false;
  }
LAB_147fac354:
  if (this->RawResultEnumObj == param_1->RawResultEnumObj) {
    this_00 = this->NextResult;
    if ((this_00 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) ==
        (param_1->NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0)) {
      if ((this_00 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) &&
         (bVar3 = operator==((FNetResult *)this_00,(FNetResult *)param_1->NextResult), !bVar3)) {
        return false;
      }
      return true;
    }
  }
  return false;
}

