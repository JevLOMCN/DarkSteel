// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// FDefaultConstructedPropertyElement @ 1421fde00

FDefaultConstructedPropertyElement * __thiscall
FDefaultConstructedPropertyElement::FDefaultConstructedPropertyElement
          (FDefaultConstructedPropertyElement *this,FProperty *param_1)

{
  uint uVar1;
  void *pvVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  uVar1 = (**(code **)(param_1->_padding_ + 0x168))(param_1);
  pvVar2 = FMemory::Malloc((longlong)(param_1->ArrayDim * param_1->ElementSize),uVar1);
  (this->Obj).Object = pvVar2;
  pTVar3 = ::operator_new(0x20);
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    pTVar3[1]._padding_ = (longlong)param_1;
    pTVar3->_padding_ =
         (longlong)
         &
         ___7__TReferenceControllerWithDeleter_XV<lambda_4_>__0___0FDefaultConstructedPropertyElement__QEAA_PEBVFProperty___Z__00_SharedPointerInternals__6B_
    ;
    pTVar3->SharedReferenceCount = (atomic<int>)0x1;
    pTVar3->WeakReferenceCount = (atomic<int>)0x1;
    *(void **)&pTVar3[1].SharedReferenceCount = pvVar2;
  }
  (this->Obj).SharedReferenceCount.ReferenceController = pTVar3;
  pvVar2 = (this->Obj).Object;
  if (((uint)(int)param_1->PropertyFlags >> 9 & 1) != 0) {
    memset(pvVar2,0,(longlong)param_1->ElementSize * (longlong)param_1->ArrayDim);
    return this;
  }
  (**(code **)(param_1->_padding_ + 0x150))(param_1,pvVar2);
  return this;
}

