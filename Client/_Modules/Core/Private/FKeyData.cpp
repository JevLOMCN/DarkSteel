// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// AsGuid @ 141746aa0

FGuid * __thiscall FTextKeyState::FKeyData::AsGuid(FKeyData *this)

{
  code *pcVar1;
  bool bVar2;
  FGuid *pFVar3;
  
  if (this->StrLen == -1) {
    return this->DataPtr;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsGuid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Internationalization\\TextKey.cpp"
                     ,0x157,L"AsGuid called on a FKeyData that doesn\'t reference a GUID!");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FGuid *)(*pcVar1)();
    return pFVar3;
  }
  return this->DataPtr;
}

