// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: XmlParser
// Functions: 1

// operator() @ 14455e240

void __thiscall
TDefaultDelete<FFastXmlImpl>::operator()(TDefaultDelete<FFastXmlImpl> *this,FFastXmlImpl *param_1)

{
  ITextData *pIVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (param_1 != (FFastXmlImpl *)0x0) {
    param_1->StackIndex = 0;
    uVar3 = 0;
    do {
      if (param_1->IsStackAllocated[uVar3] != false) {
        FMemory::Free(param_1->Stack[uVar3]);
        param_1->IsStackAllocated[uVar3] = false;
      }
      uVar2 = (int)uVar3 + 1;
      param_1->Stack[uVar3] = (wchar_t *)0x0;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < param_1->StackIndex + 1);
    pIVar1 = (param_1->ErrorMessage).TextData.Reference;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 0x10))();
    }
    ::operator_delete(param_1,0x4948);
  }
  return;
}

