// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 1

// Empty @ 141752ee0

void __thiscall
FIoContainerHeaderSoftPackageReferences::Empty(FIoContainerHeaderSoftPackageReferences *this)

{
  int *piVar1;
  
  piVar1 = &(this->PackageIds).ArrayMax;
  (this->PackageIds).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  piVar1 = &(this->PackageIndices).ArrayMax;
  (this->PackageIndices).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,0,&(this->PackageIndices).AllocatorInstance,0,piVar1);
  }
  this->bContainsSoftPackageReferences = false;
  return;
}

