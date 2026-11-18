// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// FromString @ 141e218b0

Type __cdecl ELocalizationTargetDescriptorLoadingPolicy::FromString(wchar_t *param_1)

{
  Type TVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000141e218e1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  TVar1 = (*(code *)(switchD_1501dbc7b::caseD_1.e_magic + DAT_141e21954))
                    (switchD_1501dbc7b::caseD_1.e_magic + DAT_141e21954);
  return TVar1;
}

// ToString @ 141e3c0b0

wchar_t * __cdecl ELocalizationTargetDescriptorLoadingPolicy::ToString(Type param_1)

{
  Type local_res8 [2];
  Type *local_res10 [3];
  
  switch(param_1) {
  case Never:
    return L"Never";
  case Always:
    return L"Always";
  case Editor:
    return L"Editor";
  case Game:
    return L"Game";
  case PropertyNames:
    return L"PropertyNames";
  case ToolTips:
    return L"ToolTips";
  default:
    local_res10[0] = local_res8;
    local_res8[0] = param_1;
    `ELocalizationTargetDescriptorLoadingPolicy::ToString'::__l4::<lambda_1>::operator()
              (local_res10);
    return (wchar_t *)0x0;
  }
}

// operator() @ 150481280

bool __thiscall
`ELocalizationTargetDescriptorLoadingPolicy::ToString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5437594661646499771>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5437594661646499771>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

