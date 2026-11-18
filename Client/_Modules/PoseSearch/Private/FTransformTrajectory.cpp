// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PoseSearch
// Functions: 1

// operator= @ 14a8e3bc0

FTransformTrajectory * __thiscall
FTransformTrajectory::operator=(FTransformTrajectory *this,FTransformTrajectory *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *_Src;
  
  if (this != param_1) {
    iVar2 = (this->Samples).ArrayMax;
    piVar1 = &(this->Samples).ArrayMax;
    _Src = (param_1->Samples).AllocatorInstance.Data;
    iVar3 = (param_1->Samples).ArrayNum;
    (this->Samples).ArrayNum = iVar3;
    if ((iVar3 == 0) && (iVar2 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x40,0x10,iVar3,iVar2,(ForAnyElementType *)this,iVar3,piVar1);
    if (iVar3 != 0) {
      memcpy((this->Samples).AllocatorInstance.Data,_Src,(longlong)iVar3 << 6);
    }
  }
  return this;
}

