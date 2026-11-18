// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 2

// FromString @ 141e21980

TOptional<EVerseScope::Type> __cdecl EVerseScope::FromString(wchar_t *param_1)

{
  TOptional<EVerseScope::Type> TVar1;
  int iVar2;
  wchar_t *in_RDX;
  
  iVar2 = FGenericPlatformStricmp::Stricmp(in_RDX,L"PublicAPI");
  TVar1 = SUB82(param_1,0);
  if (iVar2 == 0) {
    *param_1 = L'Ā';
    return TVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(in_RDX,L"InternalAPI");
  if (iVar2 == 0) {
    *param_1 = L'ā';
    return TVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(in_RDX,L"PublicUser");
  if (iVar2 == 0) {
    *param_1 = L'Ă';
    return TVar1;
  }
  iVar2 = FGenericPlatformStricmp::Stricmp(in_RDX,L"InternalUser");
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  if (iVar2 == 0) {
    *param_1 = L'ă';
  }
  return TVar1;
}

// ToString @ 141e3c160

wchar_t * __cdecl EVerseScope::ToString(Type param_1)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  
  if (param_1 == PublicAPI) {
    return L"PublicAPI";
  }
  if (param_1 == InternalAPI) {
    return L"InternalAPI";
  }
  if (param_1 == PublicUser) {
    return L"PublicUser";
  }
  if (param_1 != InternalUser) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5564663884733743066>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Projects\\Private\\VerseScope.cpp"
                       ,0x26,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pwVar3 = (wchar_t *)(*pcVar1)();
      return pwVar3;
    }
    return L"<unknown>";
  }
  return L"InternalUser";
}

