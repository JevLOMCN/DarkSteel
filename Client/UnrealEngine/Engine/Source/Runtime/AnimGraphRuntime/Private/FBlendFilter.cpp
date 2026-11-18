// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 1

// operator= @ 14640c9a0

FBlendFilter * __thiscall FBlendFilter::operator=(FBlendFilter *this,FBlendFilter *param_1)

{
  int *piVar1;
  int iVar2;
  FFIRFilterTimeBased *pFVar3;
  
  if (this != param_1) {
    DestructItems<FFIRFilterTimeBased,int>
              ((FFIRFilterTimeBased *)(this->FilterPerAxis).AllocatorInstance.Data,
               (this->FilterPerAxis).ArrayNum);
    iVar2 = (param_1->FilterPerAxis).ArrayNum;
    piVar1 = &(this->FilterPerAxis).ArrayMax;
    pFVar3 = (FFIRFilterTimeBased *)(param_1->FilterPerAxis).AllocatorInstance.Data;
    (this->FilterPerAxis).ArrayNum = iVar2;
    if ((iVar2 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,iVar2,*piVar1,(ForAnyElementType *)this,iVar2,piVar1);
    ConstructItems<FFIRFilterTimeBased,FFIRFilterTimeBased,int>
              ((this->FilterPerAxis).AllocatorInstance.Data,pFVar3,iVar2);
  }
  return this;
}

