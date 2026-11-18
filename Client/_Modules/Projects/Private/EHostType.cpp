// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// FromString @ 141e215f0

Type __cdecl EHostType::FromString(wchar_t *param_1)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141e21621. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_141e216e8))
                    (switchD_1501dbc7b::caseD_1.e_magic + DAT_141e216e8);
  return TVar1;
}

// ToString @ 141e3be30

wchar_t * __cdecl EHostType::ToString(Type param_1)

{
  Type local_res8 [2];
  Type *local_res10 [3];
  
  switch(param_1) {
  case Runtime:
    return L"Runtime";
  case RuntimeNoCommandlet:
    return L"RuntimeNoCommandlet";
  case RuntimeAndProgram:
    return L"RuntimeAndProgram";
  case CookedOnly:
    return L"CookedOnly";
  case UncookedOnly:
    return L"UncookedOnly";
  case Developer:
    return L"Developer";
  case DeveloperTool:
    return L"DeveloperTool";
  case Editor:
    return L"Editor";
  case EditorNoCommandlet:
    return L"EditorNoCommandlet";
  case EditorAndProgram:
    return L"EditorAndProgram";
  case Program:
    return L"Program";
  case ServerOnly:
    return L"ServerOnly";
  case ClientOnly:
    return L"ClientOnly";
  case ClientOnlyNoCommandlet:
    return L"ClientOnlyNoCommandlet";
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `EHostType::ToString'::__l4::<lambda_1>::operator()(local_res10);
    return (wchar_t *)0x0;
  }
}

// operator() @ 150481190

bool __thiscall `EHostType::ToString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8756171043493642092>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8756171043493642092>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

