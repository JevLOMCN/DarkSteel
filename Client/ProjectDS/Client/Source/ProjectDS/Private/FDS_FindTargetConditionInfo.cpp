// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 1

// ResetData @ 14ba18490

void __thiscall FDS_FindTargetConditionInfo::ResetData(FDS_FindTargetConditionInfo *this)

{
  int *piVar1;
  
  this->SearchDistance = 0.0;
  this->SearchHeight = 0.0;
  piVar1 = &(this->SearchQuerys).ArrayMax;
  this->TargetDistanceMax = 0.0;
  this->bIsBlockingCheck = false;
  this->bIsTargetTrace = false;
  this->bIsAutoUseSkill = false;
  this->bIsInputTargeting = false;
  (this->SearchQuerys).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->SearchQuerys).AllocatorInstance,0,piVar1);
  }
  return;
}

