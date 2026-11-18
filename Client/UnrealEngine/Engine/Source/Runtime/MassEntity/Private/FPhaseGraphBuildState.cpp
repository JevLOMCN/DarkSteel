// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 2

// FPhaseGraphBuildState @ 1471dba20

FPhaseGraphBuildState * __thiscall
FMassProcessingPhaseManager::FPhaseGraphBuildState::FPhaseGraphBuildState
          (FPhaseGraphBuildState *this)

{
  this->bNewArchetypes = true;
  this->bProcessorsNeedRebuild = true;
  (this->LastResult).DependencyGraphFileName.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->LastResult).DependencyGraphFileName.Data.ArrayNum = 0;
  (this->LastResult).DependencyGraphFileName.Data.ArrayMax = 0;
  (this->LastResult).PrunedProcessors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastResult).PrunedProcessors.ArrayNum = 0;
  (this->LastResult).PrunedProcessors.ArrayMax = 0;
  (this->LastResult).MaxSequenceLength = 0;
  (this->LastResult).ArchetypeDataVersion = 0;
  (this->LastResult).PrunedProcessorClasses.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastResult).PrunedProcessorClasses.ArrayNum = 0;
  (this->LastResult).PrunedProcessorClasses.ArrayMax = 0;
  this->bInitialized = false;
  return this;
}

// Reset @ 147248db0

void __thiscall
FMassProcessingPhaseManager::FPhaseGraphBuildState::Reset(FPhaseGraphBuildState *this)

{
  int iVar1;
  
  iVar1 = (this->LastResult).PrunedProcessors.ArrayMax;
  (this->LastResult).PrunedProcessors.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->LastResult).PrunedProcessors.AllocatorInstance,0,
               &(this->LastResult).PrunedProcessors.ArrayMax);
  }
  (this->LastResult).MaxSequenceLength = 0;
  (this->LastResult).ArchetypeDataVersion = 0;
  this->bInitialized = false;
  return;
}

