// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// FromString @ 141e21730

Type __cdecl ELoadingPhase::FromString(wchar_t *param_1)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141e21761. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_141e217fc))
                    (switchD_1501dbc7b::caseD_1.e_magic + DAT_141e217fc);
  return TVar1;
}

// ToString @ 141e3bf60

wchar_t * __cdecl ELoadingPhase::ToString(Type param_1)

{
  Type local_res8 [2];
  Type *local_res10 [3];
  
  switch(param_1) {
  case EarliestPossible:
    return L"EarliestPossible";
  case PostConfigInit:
    return L"PostConfigInit";
  case PostSplashScreen:
    return L"PostSplashScreen";
  case PreEarlyLoadingScreen:
    return L"PreEarlyLoadingScreen";
  case PreLoadingScreen:
    return L"PreLoadingScreen";
  case PreDefault:
    return L"PreDefault";
  case Default:
    return L"Default";
  case PostDefault:
    return L"PostDefault";
  case PostEngineInit:
    return L"PostEngineInit";
  case None:
    return L"None";
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `ELoadingPhase::ToString'::__l4::<lambda_1>::operator()(local_res10);
    return (wchar_t *)0x0;
  }
}

// operator() @ 1504811e0

bool __thiscall `ELoadingPhase::ToString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8756171043493642158>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8756171043493642158>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

