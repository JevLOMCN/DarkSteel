// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 2

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_> @ 14e160ef0

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FOptimusInstancedPin,TArray<FOptimusInstancedPin,TSizedDefaultAllocator<32>_>_>
           *this)

{
  DestructItems<FOptimusInstancedPin,int>
            (*(FOptimusInstancedPin **)&this->field_0x48,*(int *)&this->field_0x50);
  if (*(void **)&this->field_0x48 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x48);
  }
  if (*(void **)&this->field_0x28 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x28);
    return;
  }
  return;
}

// ~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo> @ 14e160f40

void __thiscall
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>::
~TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>
          (TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,FOptimusDataTypeRegistry::FTypeInfo>
           *this)

{
  longlong *plVar1;
  
  if (*(void **)&this->field_0x80 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x80);
  }
  if (*(longlong *)&this->field_0x50 != 0) {
    plVar1 = (longlong *)&this->field_0x60;
    if (*(longlong **)&this->field_0x78 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x78;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  if (*(longlong *)&this->field_0x20 != 0) {
    plVar1 = (longlong *)&this->field_0x30;
    if (*(longlong **)&this->field_0x48 != (longlong *)0x0) {
      plVar1 = *(longlong **)&this->field_0x48;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)&this->field_0x18);
  return;
}

