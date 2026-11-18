// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsDeformer
// Functions: 1

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRDGExternalBuffer> @ 14e26b200

void __thiscall
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRDGExternalBuffer>
::~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRDGExternalBuffer>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FString,FRDGExternalBuffer> *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if (*(FRHIResource **)&this->field_0x20 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x20);
  }
  if (*(FRHIResource **)&this->field_0x18 != (FRHIResource *)0x0) {
    FRHIResource::Release(*(FRHIResource **)&this->field_0x18);
  }
  puVar3 = *(undefined8 **)&this->field_0x10;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
    return;
  }
  return;
}

