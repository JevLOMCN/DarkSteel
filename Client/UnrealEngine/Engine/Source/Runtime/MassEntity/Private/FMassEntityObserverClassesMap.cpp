// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntity
// Functions: 3

// StaticStruct @ 1471b8450

UScriptStruct * __cdecl FMassEntityObserverClassesMap::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMassEntityObserverClassesMap.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_MassEntity();
    Z_Registration_Info_UScriptStruct_FMassEntityObserverClassesMap.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMassEntityObserverClassesMap,(UObject *)pUVar1,
                         L"MassEntityObserverClassesMap");
  }
  return Z_Registration_Info_UScriptStruct_FMassEntityObserverClassesMap.OuterSingleton;
}

// FMassEntityObserverClassesMap @ 1471d7be0

FMassEntityObserverClassesMap * __thiscall
FMassEntityObserverClassesMap::FMassEntityObserverClassesMap(FMassEntityObserverClassesMap *this)

{
  *(undefined8 *)&this->Container = 0;
  *(undefined8 *)&(this->Container).field_0x8 = 0;
  *(undefined8 *)&(this->Container).field_0x20 = 0;
  *(undefined4 *)&(this->Container).field_0x28 = 0;
  *(undefined4 *)&(this->Container).field_0x2c = 0x80;
  *(undefined4 *)&(this->Container).field_0x34 = 0;
  *(undefined4 *)&(this->Container).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Container).field_0x40 = 0;
  *(undefined4 *)&(this->Container).field_0x48 = 0;
  return this;
}

// ~FMassEntityObserverClassesMap @ 1471e0070

void __thiscall
FMassEntityObserverClassesMap::~FMassEntityObserverClassesMap(FMassEntityObserverClassesMap *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Container).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Container).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UScriptStruct_const_>,FMassProcessorClassCollection>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

