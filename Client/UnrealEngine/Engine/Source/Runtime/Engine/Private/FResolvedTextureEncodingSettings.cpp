// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// Get @ 1488c1ad0

FResolvedTextureEncodingSettings * __cdecl FResolvedTextureEncodingSettings::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FResolvedTextureEncodingSettings *pFVar3;
  
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("!\"Enclosing block should never be called\"",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TextureEncodingSettings.cpp"
                     ,0xe8,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pFVar3 = (FResolvedTextureEncodingSettings *)(*pcVar1)();
    return pFVar3;
  }
  return &DefaultSettings;
}

