// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DesktopPlatform
// Functions: 4

// FRegistryRootedKey @ 142d1bfb0

FRegistryRootedKey * __thiscall
FRegistryRootedKey::FRegistryRootedKey(FRegistryRootedKey *this,HKEY__ *param_1,FString *param_2)

{
  this->hRootKey = param_1;
  (this->Path).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Path).Data.ArrayNum = 0;
  (this->Path).Data.ArrayMax = 0;
  (this->Key).Ptr = (FRegistryKey *)0x0;
  ::FString::operator=(&this->Path,param_2);
  return this;
}

// Exists @ 142d211b0

bool __thiscall FRegistryRootedKey::Exists(FRegistryRootedKey *this)

{
  LSTATUS LVar1;
  wchar_t *lpSubKey;
  HKEY local_res8 [4];
  
  if ((this->Path).Data.ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
  }
  LVar1 = RegOpenKeyExW((HKEY)this->hRootKey,lpSubKey,0,0x20019,local_res8);
  if (LVar1 == 0) {
    RegCloseKey(local_res8[0]);
    return true;
  }
  return false;
}

// IsUpToDate @ 142d2a010

bool __thiscall FRegistryRootedKey::IsUpToDate(FRegistryRootedKey *this,bool param_1)

{
  FRegistryKey *this_00;
  bool bVar1;
  LSTATUS LVar2;
  wchar_t *lpSubKey;
  HKEY local_res8 [4];
  
  this_00 = (this->Key).Ptr;
  if (this_00 != (FRegistryKey *)0x0) {
    bVar1 = FRegistryKey::IsUpToDate(this_00,this->hRootKey,&this->Path,param_1);
    return bVar1;
  }
  if ((this->Path).Data.ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
  }
  LVar2 = RegOpenKeyExW((HKEY)this->hRootKey,lpSubKey,0,0x20019,local_res8);
  if (LVar2 == 0) {
    RegCloseKey(local_res8[0]);
  }
  return LVar2 != 0;
}

// Write @ 142d36ca0

bool __thiscall FRegistryRootedKey::Write(FRegistryRootedKey *this,bool param_1)

{
  FRegistryKey *this_00;
  bool bVar1;
  LSTATUS LVar2;
  wchar_t *lpSubKey;
  wchar_t *lpSubKey_00;
  HKEY local_res8;
  
  this_00 = (this->Key).Ptr;
  if (this_00 != (FRegistryKey *)0x0) {
    bVar1 = FRegistryKey::Write(this_00,this->hRootKey,&this->Path,param_1);
    return bVar1;
  }
  lpSubKey_00 = L"";
  if ((this->Path).Data.ArrayNum == 0) {
    lpSubKey = L"";
  }
  else {
    lpSubKey = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
  }
  LVar2 = RegOpenKeyExW((HKEY)this->hRootKey,lpSubKey,0,0x20019,&local_res8);
  if (LVar2 == 0) {
    RegCloseKey(local_res8);
    if ((this->Path).Data.ArrayNum != 0) {
      lpSubKey_00 = (wchar_t *)(this->Path).Data.AllocatorInstance.Data;
    }
    LVar2 = RegDeleteKeyExW((HKEY)this->hRootKey,lpSubKey_00,0,0);
    if (LVar2 != 0) {
      return false;
    }
  }
  return true;
}

