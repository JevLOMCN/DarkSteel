// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// ~FCheckpointStepHelper @ 148445800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FReplayHelper::FCheckpointStepHelper::~FCheckpointStepHelper(FCheckpointStepHelper *this)

{
  ECheckpointSaveState EVar1;
  LARGE_INTEGER local_res8;
  
  QueryPerformanceCounter(&local_res8);
  EVar1 = this->CheckpointState;
  if ((((EVar1 != ProcessCheckpointActors) && (EVar1 != SerializeDeletedStartupActors)) &&
      (EVar1 != SerializeDeltaDynamicDestroyed)) &&
     ((EVar1 != SerializeDeltaClosedChannels && (EVar1 != SerializeGuidCache)))) {
    local_res8 = (LARGE_INTEGER)this;
    `FReplayHelper::FCheckpointStepHelper::~FCheckpointStepHelper'::__l4::<lambda_1>::operator()
              (&local_res8);
  }
  if (5 < (byte)LogDemo._0_1_) {
    UE::Logging::Private::BasicLog<6>
              (&`public:___cdecl_FReplayHelper::FCheckpointStepHelper::~FCheckpointStepHelper(void)___ptr64'
                ::__l5::LOG_Static,(FLogCategoryBase *)&LogDemo);
  }
  return;
}

// operator() @ 15052b000

bool __thiscall
`FReplayHelper::FCheckpointStepHelper::~FCheckpointStepHelper'::__l4::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<175694746868515128>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<175694746868515128>,
                       &`public:___cdecl_`public:___cdecl_FReplayHelper::FCheckpointStepHelper::~FCheckpointStepHelper(void)___ptr64'::`4'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

