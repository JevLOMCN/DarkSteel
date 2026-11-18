// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NavigationSystem
// Functions: 5

// FNavGraphGenerator @ 146d73a70

FNavGraphGenerator * __thiscall
FNavGraphGenerator::FNavGraphGenerator(FNavGraphGenerator *this,ANavigationGraph *param_1)

{
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->InclusionVolumes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InclusionVolumes).ArrayNum = 0;
  (this->InclusionVolumes).ArrayMax = 0;
  this->_padding_ = (longlong)&___7FNavGraphGenerator__6B_;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->GraphChangingLock,4000);
  return this;
}

// ~FNavGraphGenerator @ 146d78240

void __thiscall FNavGraphGenerator::~FNavGraphGenerator(FNavGraphGenerator *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  
  this->_padding_ = (longlong)&___7FNavGraphGenerator__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->GraphChangingLock);
  pFVar3 = (this->InclusionVolumes).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7FNavDataGenerator__6B_;
  plVar4 = (longlong *)this->_padding_;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x000146d7829a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 8))(plVar4,1);
      return;
    }
  }
  return;
}

// CleanUpIntermediateData @ 146d87200

void __thiscall FNavGraphGenerator::CleanUpIntermediateData(FNavGraphGenerator *this)

{
  return;
}

// Init @ 146da3d20

void __thiscall FNavGraphGenerator::Init(FNavGraphGenerator *this)

{
  return;
}

// UpdateBuilding @ 146dc0ef0

void __thiscall FNavGraphGenerator::UpdateBuilding(FNavGraphGenerator *this)

{
  return;
}

