// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraCompileHash @ 148e542c0

FNiagaraCompileHash * __thiscall
FNiagaraCompileHash::FNiagaraCompileHash(FNiagaraCompileHash *this,FNiagaraCompileHash *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *_Src;
  
  (this->DataHash).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->DataHash).ArrayMax;
  iVar2 = (param_1->DataHash).ArrayNum;
  _Src = (param_1->DataHash).AllocatorInstance.Data;
  (this->DataHash).ArrayNum = iVar2;
  if (iVar2 == 0) {
    *piVar1 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (1,1,iVar2,0,(ForAnyElementType *)this,iVar2,piVar1);
  memcpy((this->DataHash).AllocatorInstance.Data,_Src,(longlong)iVar2);
  return this;
}

