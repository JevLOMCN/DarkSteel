// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 2

// SerializeStructured @ 1420d9a30

void __cdecl
UE::Core::Private::Tuple::
TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
::SerializeStructured
          (FStructuredArchiveSlot param_1,
          TTupleBase<TIntegerSequence<unsigned_int,0,1>,FPackageIndex,TArray<FName,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  FArchive *this;
  undefined4 *puVar1;
  
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar1 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if ((undefined4 *)(*(undefined8 **)&this->field_0x8)[1] < puVar1 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))(this,param_2,4);
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,(uint *)param_2);
    }
  }
  else {
    *(undefined4 *)param_2 = *puVar1;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  operator<<<FName>(param_1,(TArray<FName,TSizedDefaultAllocator<32>_> *)&param_2->field_0x8);
  return;
}

// SerializeStructured @ 14222a840

void __cdecl
UE::Core::Private::Tuple::TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,unsigned_int>::
SerializeStructured(FStructuredArchiveSlot param_1,
                   TTupleBase<TIntegerSequence<unsigned_int,0,1>,FName,unsigned_int> *param_2)

{
  undefined1 *puVar1;
  FArchive *this;
  undefined4 *puVar2;
  
  (**(code **)(**(longlong **)(*(longlong *)param_1 + 8) + 0x178))();
  puVar1 = &param_2->field_0x8;
  this = *(FArchive **)(*(longlong *)param_1 + 8);
  puVar2 = (undefined4 *)**(undefined8 **)&this->field_0x8;
  if (puVar2 + 1 <= (undefined4 *)(*(undefined8 **)&this->field_0x8)[1]) {
    *(undefined4 *)puVar1 = *puVar2;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
    return;
  }
  if ((this->field_0x2a & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014222a8b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)this + 0x188))(this,puVar1,4);
    return;
  }
  FArchive::SerializeByteOrderSwapped(this,(uint *)puVar1);
  return;
}

