// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// FPBDIslandConstraint @ 143b572a0

FPBDIslandConstraint * __thiscall
Chaos::Private::FPBDIslandConstraint::FPBDIslandConstraint
          (FPBDIslandConstraint *this,int param_1,FConstraintHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  FPBDIslandConstraint *pFVar4;
  
  this->VisitEpoch = -1;
  this->ArrayIndex = -1;
  (this->Flags).Bits = 0;
  this->Constraint = param_2;
  this->Island = (FPBDIsland *)0x0;
  this->Nodes[0] = (FPBDIslandParticle *)0x0;
  this->Nodes[1] = (FPBDIslandParticle *)0x0;
  this->NodeArrayIndices[0] = -1;
  this->NodeArrayIndices[1] = -1;
  this->IslandArrayIndex = -1;
  this->Level = 0;
  this->LevelSortKey = 0;
  this->ContainerIndex = param_1;
  if (param_2 != (FConstraintHandle *)0x0) {
    if (param_2->GraphEdge != (FPBDIslandConstraint *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InEdge == nullptr) || (GraphEdge == nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar4 = (FPBDIslandConstraint *)(*pcVar1)();
        return pFVar4;
      }
    }
    param_2->GraphEdge = this;
    bVar3 = (**(code **)(this->Constraint->_padding_ + 0x40))();
    (this->Flags).Bits = (this->Flags).Bits ^ ((this->Flags).Bits ^ (uint)bVar3) & 1;
  }
  return this;
}

// FPBDIslandConstraint @ 143b57350

FPBDIslandConstraint * __thiscall
Chaos::Private::FPBDIslandConstraint::FPBDIslandConstraint(FPBDIslandConstraint *this)

{
  this->VisitEpoch = -1;
  this->ArrayIndex = -1;
  this->Constraint = (FConstraintHandle *)0x0;
  this->Island = (FPBDIsland *)0x0;
  this->Nodes[0] = (FPBDIslandParticle *)0x0;
  this->Nodes[1] = (FPBDIslandParticle *)0x0;
  this->Level = 0;
  this->LevelSortKey = 0;
  (this->Flags).Bits = 0;
  this->NodeArrayIndices[0] = -1;
  this->NodeArrayIndices[1] = -1;
  this->ContainerIndex = -1;
  this->IslandArrayIndex = -1;
  return this;
}

// ~FPBDIslandConstraint @ 143b58200

void __thiscall
Chaos::Private::FPBDIslandConstraint::~FPBDIslandConstraint(FPBDIslandConstraint *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Constraint != (FConstraintHandle *)0x0) && (this->Constraint->GraphEdge != this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Constraint == nullptr) || (Constraint->GetConstraintGraphEdge() == this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Nodes[0] != (FPBDIslandParticle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes[0] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Nodes[1] != (FPBDIslandParticle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes[1] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NodeArrayIndices[0] != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeArrayIndices[0] == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NodeArrayIndices[1] != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeArrayIndices[1] == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Island != (FPBDIsland *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IslandArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IslandArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Constraint != (FConstraintHandle *)0x0) {
    this->Constraint->GraphEdge = (FPBDIslandConstraint *)0x0;
    this->Constraint = (FConstraintHandle *)0x0;
  }
  this->VisitEpoch = -1;
  this->ContainerIndex = -1;
  this->Level = -1;
  (this->Flags).Bits = 0;
  return;
}

// GetIslandId @ 143b67980

int __thiscall Chaos::Private::FPBDIslandConstraint::GetIslandId(FPBDIslandConstraint *this)

{
  if (this->Island != (FPBDIsland *)0x0) {
    return this->Island->ArrayIndex;
  }
  return -1;
}

// Reuse @ 143b75570

void __thiscall
Chaos::Private::FPBDIslandConstraint::Reuse
          (FPBDIslandConstraint *this,int param_1,FConstraintHandle *param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  
  this->ContainerIndex = param_1;
  this->Constraint = param_2;
  if (param_2 != (FConstraintHandle *)0x0) {
    if (param_2->GraphEdge != (FPBDIslandConstraint *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InEdge == nullptr) || (GraphEdge == nullptr)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ConstraintHandle.h"
                         ,0x99,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    param_2->GraphEdge = this;
    bVar3 = (**(code **)(this->Constraint->_padding_ + 0x40))();
    (this->Flags).Bits = (this->Flags).Bits ^ ((this->Flags).Bits ^ (uint)bVar3) & 1;
  }
  return;
}

// Trash @ 143b7ca60

void __thiscall Chaos::Private::FPBDIslandConstraint::Trash(FPBDIslandConstraint *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Constraint != (FConstraintHandle *)0x0) && (this->Constraint->GraphEdge != this)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Constraint == nullptr) || (Constraint->GetConstraintGraphEdge() == this)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d6,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Nodes[0] != (FPBDIslandParticle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes[0] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d7,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Nodes[1] != (FPBDIslandParticle *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Nodes[1] == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d8,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NodeArrayIndices[0] != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeArrayIndices[0] == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1d9,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->NodeArrayIndices[1] != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("NodeArrayIndices[1] == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1da,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Island != (FPBDIsland *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Island == nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1db,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->IslandArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IslandArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1dc,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->ArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x1dd,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Constraint != (FConstraintHandle *)0x0) {
    this->Constraint->GraphEdge = (FPBDIslandConstraint *)0x0;
    this->Constraint = (FConstraintHandle *)0x0;
  }
  this->VisitEpoch = -1;
  this->ContainerIndex = -1;
  this->Level = -1;
  (this->Flags).Bits = 0;
  return;
}

