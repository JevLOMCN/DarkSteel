// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowSimulation
// Functions: 4

// StaticStruct @ 1462ed4d0

UScriptStruct * __cdecl FDataflowCollisionObjectProxy::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy,(UObject *)pUVar1,
                         L"DataflowCollisionObjectProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton;
}

// FDataflowCollisionObjectProxy @ 1462f2180

FDataflowCollisionObjectProxy * __thiscall
FDataflowCollisionObjectProxy::FDataflowCollisionObjectProxy(FDataflowCollisionObjectProxy *this)

{
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined4 *)&this->field_0x20 = 0;
  *(undefined4 *)&this->field_0x24 = 0x80;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x30 = 0;
  *(undefined8 *)&this->field_0x48 = 0;
  *(undefined4 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0x54 = 0x80;
  *(undefined4 *)&this->field_0x5c = 0;
  *(undefined4 *)&this->field_0x58 = 0xffffffff;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined4 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FDataflowCollisionObjectProxy__6B_;
  return this;
}

// ~FDataflowCollisionObjectProxy @ 1462f2c50

void __thiscall
FDataflowCollisionObjectProxy::~FDataflowCollisionObjectProxy(FDataflowCollisionObjectProxy *this)

{
  *(undefined4 *)&this->field_0x70 = 0;
  if (*(void **)&this->field_0x68 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x68);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x28);
  if (*(void **)&this->field_0x18 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x18);
  }
  return;
}

// GetScriptStruct @ 1462f6e10

UScriptStruct * __thiscall
FDataflowCollisionObjectProxy::GetScriptStruct(FDataflowCollisionObjectProxy *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowSimulation();
    Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowCollisionObjectProxy,(UObject *)pUVar1,
                         L"DataflowCollisionObjectProxy");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowCollisionObjectProxy.OuterSingleton;
}

