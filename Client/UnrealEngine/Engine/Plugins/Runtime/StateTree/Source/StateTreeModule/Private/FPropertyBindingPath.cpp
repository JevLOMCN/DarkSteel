// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 1

// FPropertyBindingPath @ 14d52c3c0

FPropertyBindingPath * __thiscall
FPropertyBindingPath::FPropertyBindingPath(FPropertyBindingPath *this,FPropertyBindingPath *param_1)

{
  int *piVar1;
  int iVar2;
  FPropertyBindingPathSegment *pFVar3;
  
  (this->Segments).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Segments).ArrayMax;
  iVar2 = (param_1->Segments).ArrayNum;
  pFVar3 = (FPropertyBindingPathSegment *)(param_1->Segments).AllocatorInstance.Data;
  (this->Segments).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x20,8,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  ConstructItems<FPropertyBindingPathSegment,FPropertyBindingPathSegment,int>
            ((this->Segments).AllocatorInstance.Data,pFVar3,iVar2);
  return this;
}

