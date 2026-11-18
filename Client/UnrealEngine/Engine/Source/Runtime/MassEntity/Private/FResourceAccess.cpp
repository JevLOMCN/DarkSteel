// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 1

// FResourceAccess @ 1471dbed0

FResourceAccess * __thiscall
FMassProcessorDependencySolver::FResourceUsage::FResourceAccess::FResourceAccess
          (FResourceAccess *this,FResourceAccess *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  (this->Access).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Access).ArrayMax;
  iVar2 = (param_1->Access).ArrayNum;
  pFVar3 = (param_1->Access).AllocatorInstance.Data;
  (this->Access).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,FMassProcessorDependencySolver::FResourceUsage::FResourceUsers,int>
            ((this->Access).AllocatorInstance.Data,(FResourceUsers *)pFVar3,iVar2);
  return this;
}

