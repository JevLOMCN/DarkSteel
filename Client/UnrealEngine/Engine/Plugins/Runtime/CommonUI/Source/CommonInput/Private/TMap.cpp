// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CommonInput
// Functions: 2

// TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> @ 14a771770

TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> * __thiscall
TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::
TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
          (TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this)

{
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x28 = 0;
  *(undefined4 *)&this->field_0x2c = 0x80;
  *(undefined4 *)&this->field_0x34 = 0;
  *(undefined4 *)&this->field_0x30 = 0xffffffff;
  *(undefined8 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x48 = 0;
  return this;
}

// ~TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> @ 14a772220

void __thiscall
TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>::
~TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_>
          (TMap<FName,bool,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,bool,0>_> *this)

{
  *(undefined4 *)&this->field_0x48 = 0;
  if (*(void **)&this->field_0x40 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x40);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,bool>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

