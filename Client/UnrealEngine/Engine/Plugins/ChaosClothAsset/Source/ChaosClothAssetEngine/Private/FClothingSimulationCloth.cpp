// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 1

// GetLODIndex @ 14dc4ca10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall
Chaos::FClothingSimulationCloth::GetLODIndex
          (FClothingSimulationCloth *this,FClothingSimulationSolver *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  TTuple<Chaos::FClothingSimulationSolver_*,int> *pTVar4;
  
  pTVar4 = TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<Chaos::FClothingSimulationSolver_*,int>,TDefaultMapHashableKeyFuncs<Chaos::FClothingSimulationSolver_*,int,0>,FDefaultSetAllocator>
                   *)&this->LODIndices,param_1);
  if (pTVar4 != (TTuple<Chaos::FClothingSimulationSolver_*,int> *)0x0) {
    return *(uint *)&pTVar4->field_0x8;
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x27b,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  return _DAT_00000008;
}

