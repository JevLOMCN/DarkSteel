// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangeNodes
// Functions: 1

// operator= @ 14e48bbe0

TAttributeHandle<int,void> * __thiscall
UE::Interchange::FAttributeStorage::TAttributeHandle<int,void>::operator=
          (TAttributeHandle<int,void> *this,TAttributeHandle<int,void> *param_1)

{
  FAttributeKey *pFVar1;
  FAttributeKey *pFVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar1 = &param_1->Key;
  pFVar2 = &this->Key;
  this->AttributeStorage = param_1->AttributeStorage;
  if (pFVar2 != pFVar1) {
    pFVar3 = (pFVar2->Key).Data.AllocatorInstance.Data;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar3);
    }
    (pFVar2->Key).Data.AllocatorInstance.Data = (pFVar1->Key).Data.AllocatorInstance.Data;
    (pFVar1->Key).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->Key).Key.Data.ArrayNum = (param_1->Key).Key.Data.ArrayNum;
    (this->Key).Key.Data.ArrayMax = (param_1->Key).Key.Data.ArrayMax;
    (param_1->Key).Key.Data.ArrayNum = 0;
    (param_1->Key).Key.Data.ArrayMax = 0;
  }
  return this;
}

