// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// FBodyData @ 14388a130

FBodyData * __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FBodyData::FBodyData(FBodyData *this)

{
  (this->CharacterBody).State.InvMScale = 1.0;
  (this->CharacterBody).Body = (FSolverBody *)0x0;
  (this->GroundBody).Body = (FSolverBody *)0x0;
  (this->CharacterBody).State.InvIScale = 1.0;
  (this->CharacterBody).State.ShockPropagationScale = 1.0;
  (this->GroundBody).State.InvMScale = 1.0;
  (this->GroundBody).State.InvIScale = 1.0;
  (this->GroundBody).State.ShockPropagationScale = 1.0;
  return this;
}

// Init @ 1438c2480

void __thiscall
Chaos::Private::FCharacterGroundConstraintSolver::FBodyData::Init
          (FBodyData *this,FSolverBody *param_1,FSolverBody *param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (param_1 == (FSolverBody *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCharacterBody != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Character\\CharacterGroundConstraintSolver.cpp"
                       ,0x1d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->CharacterBody).Body = param_1;
  if (param_2 != (FSolverBody *)0x0) {
    (this->GroundBody).Body = param_2;
  }
  return;
}

// Reset @ 1438d00d0

void __thiscall Chaos::Private::FCharacterGroundConstraintSolver::FBodyData::Reset(FBodyData *this)

{
  (this->CharacterBody).Body = (FSolverBody *)0x0;
  (this->GroundBody).Body = (FSolverBody *)0x0;
  return;
}

