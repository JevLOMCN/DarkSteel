// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Projects
// Functions: 3

// FromString @ 141e21830

Type __cdecl ELocalizationConfigGenerationPolicy::FromString(wchar_t *param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  Type TVar3;
  Type local_res10 [2];
  Type *local_res18 [2];
  
  TVar3 = Never;
  do {
    local_res10[0] = TVar3;
    if (TVar3 == Never) {
      pwVar2 = L"Never";
    }
    else if (TVar3 == User) {
      pwVar2 = L"User";
    }
    else if (TVar3 == Auto) {
      pwVar2 = L"Auto";
    }
    else {
      local_res18[0] = local_res10;
      `ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(local_res18);
      pwVar2 = (wchar_t *)0x0;
    }
    iVar1 = FGenericPlatformStricmp::Stricmp(param_1,pwVar2);
  } while ((iVar1 != 0) && (TVar3 = TVar3 + User, (int)TVar3 < 3));
  return TVar3;
}

// ToString @ 141e3c050

wchar_t * __cdecl ELocalizationConfigGenerationPolicy::ToString(Type param_1)

{
  Type local_res8 [2];
  Type *local_res10 [3];
  
  if (param_1 == Never) {
    return L"Never";
  }
  if (param_1 != User) {
    if (param_1 != Auto) {
      local_res10[0] = local_res8;
      local_res8[0] = param_1;
      `ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(local_res10);
      return (wchar_t *)0x0;
    }
    return L"Auto";
  }
  return L"User";
}

// operator() @ 150481230

bool __thiscall
`ELocalizationConfigGenerationPolicy::ToString'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_5437594661646499738>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_5437594661646499738>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

