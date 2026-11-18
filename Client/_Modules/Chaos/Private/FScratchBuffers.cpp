// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 1

// Reset @ 143db4820

void __thiscall
Chaos::Softs::FPBDTriangleMeshCollisions::FScratchBuffers::Reset(FScratchBuffers *this)

{
  int *piVar1;
  int iVar2;
  FIntersectionContourPair *pFVar3;
  
  (this->EdgeFaceIntersections).ArrayNum = 0;
  if ((this->EdgeFaceIntersections).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,4,0,(ForAnyElementType *)this,0,&(this->EdgeFaceIntersections).ArrayMax);
  }
  piVar1 = &(this->IntersectionContours).ArrayMax;
  pFVar3 = (FIntersectionContourPair *)(this->IntersectionContours).AllocatorInstance.Data;
  iVar2 = (this->IntersectionContours).ArrayNum;
  if (-1 < *piVar1) {
    DestructItems<Chaos::Softs::GIA::FIntersectionContourPair,int>(pFVar3,iVar2);
    (this->IntersectionContours).ArrayNum = 0;
    return;
  }
  DestructItems<Chaos::Softs::GIA::FIntersectionContourPair,int>(pFVar3,iVar2);
  (this->IntersectionContours).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x68,8,0,&(this->IntersectionContours).AllocatorInstance,0,piVar1);
  }
  return;
}

