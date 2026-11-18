// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// Claim @ 1422bb8c0

FExecutionContextImpl * __cdecl verse::FExecutionContextImpl::Claim(void)

{
  FExecutionContextImpl *pFVar1;
  FExecutionContextImpl *pFVar2;
  longlong *plVar3;
  undefined1 local_res8 [8];
  
  plVar3 = (longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd58);
  pFVar2 = (FExecutionContextImpl *)*plVar3;
  if (pFVar2 == (FExecutionContextImpl *)0x0) {
    pFVar2 = ::operator_new(1);
    if (pFVar2 == (FExecutionContextImpl *)0x0) {
      pFVar2 = (FExecutionContextImpl *)0x0;
    }
    else {
      pFVar2->bActive = false;
    }
    pFVar1 = (FExecutionContextImpl *)*plVar3;
    if (pFVar1 != pFVar2) {
      *plVar3 = (longlong)pFVar2;
      ::operator_delete(pFVar1,1);
    }
  }
  if (pFVar2->bActive != false) {
    `verse::FExecutionContextImpl::Claim'::__l2::<lambda_1>::operator()(local_res8);
  }
  pFVar2->bActive = true;
  return pFVar2;
}

// GetCurrent @ 1422bca70

FExecutionContextImpl * __cdecl verse::FExecutionContextImpl::GetCurrent(void)

{
  return *(FExecutionContextImpl **)
          (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd58);
}

// Release @ 1422beb10

void __thiscall verse::FExecutionContextImpl::Release(FExecutionContextImpl *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->bActive == false) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3348549554151620635>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\VerseVM\\VVMExecutionContext.cpp"
                       ,0x1b,"bActive");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(FExecutionContextImpl **)
       (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xd58) !=
      this) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3348549554151620636>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\VerseVM\\VVMExecutionContext.cpp"
                       ,0x1c,"CurrentImpl.Get() == this");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this->bActive = false;
  return;
}

// operator() @ 150489bc0

bool __thiscall `verse::FExecutionContextImpl::Claim'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<3348549554151620627>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<3348549554151620627>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

