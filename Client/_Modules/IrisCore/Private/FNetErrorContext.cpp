// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IrisCore
// Functions: 2

// SetError @ 14433e9a0

void __thiscall UE::Net::FNetErrorContext::SetError(FNetErrorContext *this,FName param_1)

{
  FNetErrorContext *local_res8;
  
  if (param_1 == (FName)0x0) {
    local_res8 = this;
    `UE::Net::FNetErrorContext::SetError'::__l2::<lambda_1>::operator()(&local_res8);
  }
  if (this->Error == (FName)0x0) {
    this->Error = param_1;
  }
  return;
}

// operator() @ 1504bc7b0

bool __thiscall `UE::Net::FNetErrorContext::SetError'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_7794805432475713517>);
  if (bVar2) {
    ::FName::ToString((FName *)(*(longlong *)this + 8),&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_7794805432475713517>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_1504bc81b;
    }
  }
  bVar2 = false;
LAB_1504bc81b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

