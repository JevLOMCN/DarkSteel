// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 5

// ~FMassBatchedCommand @ 1470f8410

void __thiscall FMassBatchedCommand::~FMassBatchedCommand(FMassBatchedCommand *this)

{
  this->bHasWork = false;
  this->_padding_ = (longlong)&___7FMassBatchedCommand__6B_;
  return;
}

// Execute @ 14711cd60

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassBatchedCommand::Execute(FMassBatchedCommand *this,FMassEntityManager *param_1)

{
  undefined1 local_res18 [16];
  
  `FMassBatchedCommand::Execute'::__l2::<lambda_1>::operator()(local_res18);
  return;
}

// Reset @ 14719bcd0

void __thiscall FMassBatchedCommand::Reset(FMassBatchedCommand *this)

{
  this->bHasWork = false;
  return;
}

// Run @ 14719cf20

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall FMassBatchedCommand::Run(FMassBatchedCommand *this,FMassEntityManager *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014719cf23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 8))();
  return;
}

// operator() @ 150500290

bool __thiscall `FMassBatchedCommand::Execute'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8943721583726297199>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8943721583726297199>,
                       &`public:___cdecl_`public:_virtual_void___cdecl_FMassBatchedCommand::Execute(FMassEntityManager&___ptr64)const___ptr64'::`2'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

