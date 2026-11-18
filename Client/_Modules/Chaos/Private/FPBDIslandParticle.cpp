// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 7

// FPBDIslandParticle @ 143b57980

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandParticle::FPBDIslandParticle
          (FPBDIslandParticle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  this->Flags = (FFlags)0x0;
  this->Level = 0;
  this->Particle = param_1;
  this->Island = (FPBDIsland *)0x0;
  this->VisitEpoch = -1;
  this->ArrayIndex = -1;
  this->IslandArrayIndex = -1;
  this->SleepLinearThresholdSq = 0.0;
  this->SleepAngularThresholdSq = 0.0;
  this->SleepCounterThreshold = 0;
  this->WakeLinearThresholdSq = 0.0;
  this->WakeAngularThresholdSq = 0.0;
  this->DisableLinearThresholdSq = 0.0;
  this->DisableAngularThresholdSq = 0.0;
  this->ResimFrame = -1;
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode(param_1,this);
  }
  return this;
}

// FPBDIslandParticle @ 143b579f0

FPBDIslandParticle * __thiscall
Chaos::Private::FPBDIslandParticle::FPBDIslandParticle(FPBDIslandParticle *this)

{
  this->VisitEpoch = -1;
  this->ArrayIndex = -1;
  this->Particle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  this->Island = (FPBDIsland *)0x0;
  (this->Edges).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Edges).ArrayNum = 0;
  (this->Edges).ArrayMax = 0;
  this->Flags = (FFlags)0x0;
  this->Level = 0;
  this->SleepLinearThresholdSq = 0.0;
  this->SleepAngularThresholdSq = 0.0;
  this->SleepCounterThreshold = 0;
  this->WakeLinearThresholdSq = 0.0;
  this->WakeAngularThresholdSq = 0.0;
  this->DisableLinearThresholdSq = 0.0;
  this->DisableAngularThresholdSq = 0.0;
  this->IslandArrayIndex = -1;
  this->ResimFrame = -1;
  return this;
}

// ~FPBDIslandParticle @ 143b58370

void __thiscall Chaos::Private::FPBDIslandParticle::~FPBDIslandParticle(FPBDIslandParticle *this)

{
  FScriptContainerElement *pFVar1;
  
  Trash(this);
  pFVar1 = (this->Edges).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetIslandId @ 143b679a0

int __thiscall Chaos::Private::FPBDIslandParticle::GetIslandId(FPBDIslandParticle *this)

{
  if (this->Island != (FPBDIsland *)0x0) {
    return this->Island->ArrayIndex;
  }
  return -1;
}

// GetIterationSettings @ 143b67d20

TIterationSettings<signed_char> __thiscall
Chaos::Private::FPBDIslandParticle::GetIterationSettings(FPBDIslandParticle *this)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  TIterationSettings<signed_char> TVar5;
  TGeometryParticleHandleImp<double,3,1> *pTVar6;
  undefined2 *in_RDX;
  undefined2 *puVar7;
  uint uVar8;
  
  pTVar6 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  if (1 < *(byte *)((longlong)&this->Particle->_padding_ + 4)) {
    pTVar6 = this->Particle;
  }
  uVar1 = (uint)pTVar6->_padding_;
  lVar2 = pTVar6->_padding_;
  uVar8 = 0;
  if ((int)uVar1 < *(int *)(lVar2 + 0x520)) {
    uVar8 = ~uVar1 >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      TVar5 = (TIterationSettings<signed_char>)(*pcVar3)();
      return TVar5;
    }
  }
  puVar7 = (undefined2 *)((longlong)(int)uVar1 * 3 + *(longlong *)(lVar2 + 0x518));
  *in_RDX = *puVar7;
  *(undefined1 *)(in_RDX + 1) = *(undefined1 *)(puVar7 + 1);
  return SUB83(in_RDX,0);
}

// Reuse @ 143b75600

void __thiscall
Chaos::Private::FPBDIslandParticle::Reuse
          (FPBDIslandParticle *this,TGeometryParticleHandleImp<double,3,1> *param_1)

{
  this->Particle = param_1;
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode(param_1,this);
    return;
  }
  return;
}

// Trash @ 143b7cc90

void __thiscall Chaos::Private::FPBDIslandParticle::Trash(FPBDIslandParticle *this)

{
  code *pcVar1;
  bool bVar2;
  FPBDIslandParticle *pFVar3;
  
  if (this->Particle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    pFVar3 = TGeometryParticleHandleImp<double,3,1>::GetConstraintGraphNode(this->Particle);
    if (pFVar3 != this) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Particle == nullptr) || (Particle->GetConstraintGraphNode() == this)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                         ,0x192,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
  }
  if (this->ArrayIndex != -1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x193,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->Edges).ArrayNum != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Edges.IsEmpty()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\Chaos\\Island\\IslandManager.cpp"
                       ,0x194,L"");
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
                       ,0x195,L"");
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
                       ,0x196,L"");
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
                       ,0x197,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->Particle != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    TGeometryParticleHandleImp<double,3,1>::SetConstraintGraphNode
              (this->Particle,(FPBDIslandParticle *)0x0);
    this->Particle = (TGeometryParticleHandleImp<double,3,1> *)0x0;
  }
  this->Flags = (FFlags)0x0;
  this->Level = 0;
  this->VisitEpoch = -1;
  this->ResimFrame = -1;
  return;
}

