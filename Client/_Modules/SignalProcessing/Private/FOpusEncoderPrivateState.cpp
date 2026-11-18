// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 1

// operator() @ 1504bfa40

bool __thiscall
`FOpusEncoderPrivateState::FOpusEncoderPrivateState'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_6309266383267954534>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6309266383267954534>,
                       &`public:___cdecl_`public:___cdecl_FOpusEncoderPrivateState::FOpusEncoderPrivateState(FSoundQualityInfo_const&___ptr64,bool)___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

