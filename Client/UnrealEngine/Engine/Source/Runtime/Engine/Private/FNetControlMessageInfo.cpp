// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// GetName @ 147fd39d0

wchar_t * __cdecl FNetControlMessageInfo::GetName(uchar param_1)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    bInitialized = true;
  }
  return Names[param_1];
}

// IsRegistered @ 147fe3220

bool __cdecl FNetControlMessageInfo::IsRegistered(uchar param_1)

{
  wchar_t **ppwVar1;
  longlong lVar2;
  
  if (!bInitialized) {
    lVar2 = 0x20;
    ppwVar1 = Names;
    do {
      *ppwVar1 = L"";
      ppwVar1[1] = L"";
      ppwVar1[2] = L"";
      ppwVar1[3] = L"";
      ppwVar1[4] = L"";
      ppwVar1[5] = L"";
      ppwVar1[6] = L"";
      ppwVar1[7] = L"";
      lVar2 = lVar2 + -1;
      ppwVar1 = ppwVar1 + 8;
    } while (lVar2 != 0);
    bInitialized = true;
  }
  return *Names[param_1] != L'\0';
}

