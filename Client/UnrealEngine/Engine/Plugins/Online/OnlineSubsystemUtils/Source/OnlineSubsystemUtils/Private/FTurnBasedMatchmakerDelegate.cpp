// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineSubsystemUtils
// Functions: 4

// ~FTurnBasedMatchmakerDelegate @ 14ec56a00

void __thiscall
FTurnBasedMatchmakerDelegate::~FTurnBasedMatchmakerDelegate(FTurnBasedMatchmakerDelegate *this)

{
  *this = (FTurnBasedMatchmakerDelegate)&___7FTurnBasedMatchmakerDelegate__6B_;
  return;
}

// OnMatchFound @ 14ec890d0

void __thiscall
FTurnBasedMatchmakerDelegate::OnMatchFound
          (FTurnBasedMatchmakerDelegate *this,TSharedRef<FTurnBasedMatch,1> *param_1)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnMatchmakerCancelled @ 14ec89130

void __thiscall
FTurnBasedMatchmakerDelegate::OnMatchmakerCancelled(FTurnBasedMatchmakerDelegate *this)

{
  return;
}

// OnMatchmakerFailed @ 14ec89190

void __thiscall FTurnBasedMatchmakerDelegate::OnMatchmakerFailed(FTurnBasedMatchmakerDelegate *this)

{
  return;
}

