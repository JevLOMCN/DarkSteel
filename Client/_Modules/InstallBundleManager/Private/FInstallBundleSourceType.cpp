// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InstallBundleManager
// Functions: 2

// FInstallBundleSourceType @ 148bc2880

FInstallBundleSourceType * __thiscall
FInstallBundleSourceType::FInstallBundleSourceType
          (FInstallBundleSourceType *this,TStringView<wchar_t> *param_1)

{
  FInstallBundleSourceTypeNameTable *this_00;
  TStringView<wchar_t> local_18;
  
  this_00 = GetInstallBundleSourceTypeNameTable();
  local_18.DataPtr = param_1->DataPtr;
  local_18.Size = param_1->Size;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  FInstallBundleSourceTypeNameTable::FindBundleSourceTypeByName(this_00,&this->NameStr,&local_18);
  return this;
}

// FInstallBundleSourceType @ 148bc28d0

FInstallBundleSourceType * __thiscall
FInstallBundleSourceType::FInstallBundleSourceType
          (FInstallBundleSourceType *this,EInstallBundleSourceType param_1)

{
  FInstallBundleSourceTypeNameTable *this_00;
  size_t sVar1;
  TStringView<wchar_t> local_18;
  
  this_00 = GetInstallBundleSourceTypeNameTable();
  if (param_1 < Count) {
    local_18.Size = 0;
    local_18.DataPtr = Strings[(int)param_1];
    if (local_18.DataPtr == (wchar_t *)0x0) goto LAB_148bc291c;
  }
  else {
    local_18.DataPtr = L"";
  }
  sVar1 = wcslen(local_18.DataPtr);
  local_18.Size = (int)sVar1;
LAB_148bc291c:
  FInstallBundleSourceTypeNameTable::FindBundleSourceTypeByName(this_00,&this->NameStr,&local_18);
  return this;
}

