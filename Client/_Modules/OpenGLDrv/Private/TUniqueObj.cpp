// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenGLDrv
// Functions: 1

// TUniqueObj<FOpenGLProgramBinary> @ 145be0080

TUniqueObj<FOpenGLProgramBinary> * __thiscall
TUniqueObj<FOpenGLProgramBinary>::TUniqueObj<FOpenGLProgramBinary>
          (TUniqueObj<FOpenGLProgramBinary> *this,TUniqueObj<FOpenGLProgramBinary> *param_1)

{
  FOpenGLProgramBinary *pFVar1;
  int iVar2;
  undefined4 uVar3;
  FOpenGLProgramBinary *pFVar4;
  
  pFVar1 = (param_1->Obj).Ptr;
  pFVar4 = ::operator_new(0x20);
  if (pFVar4 != (FOpenGLProgramBinary *)0x0) {
    (pFVar4->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->OwnedData).AllocatorInstance.Data = (pFVar1->OwnedData).AllocatorInstance.Data;
    (pFVar1->OwnedData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar4->OwnedData).ArrayNum = (pFVar1->OwnedData).ArrayNum;
    (pFVar4->OwnedData).ArrayMax = (pFVar1->OwnedData).ArrayMax;
    (pFVar1->OwnedData).ArrayNum = 0;
    (pFVar1->OwnedData).ArrayMax = 0;
    iVar2 = (pFVar1->DataView).ArrayNum;
    uVar3 = *(undefined4 *)&(pFVar1->DataView).field_0xc;
    (pFVar4->DataView).DataPtr = (pFVar1->DataView).DataPtr;
    (pFVar4->DataView).ArrayNum = iVar2;
    *(undefined4 *)&(pFVar4->DataView).field_0xc = uVar3;
    (this->Obj).Ptr = pFVar4;
    return this;
  }
  (this->Obj).Ptr = (FOpenGLProgramBinary *)0x0;
  return this;
}

