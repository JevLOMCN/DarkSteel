// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// ~FParticlePerfStatsListener @ 1480f71c0

void __thiscall
FParticlePerfStatsListener::~FParticlePerfStatsListener(FParticlePerfStatsListener *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  
  *(undefined ***)this = &___7FParticlePerfStatsListener__6B_;
  plVar3 = *(longlong **)&this->field_0x10;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001480f71ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 8))(plVar3,1);
      return;
    }
  }
  return;
}

// AllowOrphaned @ 1480fde20

bool __thiscall FParticlePerfStatsListener::AllowOrphaned(FParticlePerfStatsListener *this)

{
  return false;
}

// Begin @ 1480fe950

void __thiscall FParticlePerfStatsListener::Begin(FParticlePerfStatsListener *this)

{
  return;
}

// End @ 148107bd0

void __thiscall FParticlePerfStatsListener::End(FParticlePerfStatsListener *this)

{
  return;
}

// OnAddComponent @ 1481244a0

void __thiscall
FParticlePerfStatsListener::OnAddComponent
          (FParticlePerfStatsListener *this,
          TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// OnAddSystem @ 1481244b0

void __thiscall
FParticlePerfStatsListener::OnAddSystem
          (FParticlePerfStatsListener *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// OnAddWorld @ 1481244c0

void __thiscall
FParticlePerfStatsListener::OnAddWorld
          (FParticlePerfStatsListener *this,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// OnRemoveComponent @ 1481249a0

void __thiscall
FParticlePerfStatsListener::OnRemoveComponent
          (FParticlePerfStatsListener *this,
          TWeakObjectPtr<UFXSystemComponent_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// OnRemoveSystem @ 1481249b0

void __thiscall
FParticlePerfStatsListener::OnRemoveSystem
          (FParticlePerfStatsListener *this,
          TWeakObjectPtr<UFXSystemAsset_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// OnRemoveWorld @ 1481249c0

void __thiscall
FParticlePerfStatsListener::OnRemoveWorld
          (FParticlePerfStatsListener *this,TWeakObjectPtr<UWorld_const_,FWeakObjectPtr> *param_1)

{
  return;
}

// Tick @ 14813a660

bool __thiscall FParticlePerfStatsListener::Tick(FParticlePerfStatsListener *this)

{
  return true;
}

// TickRT @ 14813ab80

void __thiscall FParticlePerfStatsListener::TickRT(FParticlePerfStatsListener *this)

{
  return;
}

