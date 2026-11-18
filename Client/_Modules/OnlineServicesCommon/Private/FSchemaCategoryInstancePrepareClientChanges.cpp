// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// Params @ 14ee0f0b0

Params * __thiscall
UE::Online::FSchemaCategoryInstancePrepareClientChanges::Params::Params(Params *this)

{
  (this->ClientChanges).SchemaId.field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->ClientChanges).SchemaId.field0_0x0.TypedValue.Number = 0;
  *(undefined8 *)&(this->ClientChanges).UpdatedAttributes = 0;
  *(undefined8 *)&(this->ClientChanges).UpdatedAttributes.field_0x8 = 0;
  *(undefined8 *)&(this->ClientChanges).UpdatedAttributes.field_0x20 = 0;
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x28 = 0;
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x34 = 0;
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ClientChanges).UpdatedAttributes.field_0x40 = 0;
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x48 = 0;
  *(undefined8 *)&(this->ClientChanges).RemovedAttributes.Elements = 0;
  *(undefined8 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x8 = 0;
  *(undefined8 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x20 = 0;
  *(undefined4 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x28 = 0;
  *(undefined4 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x34 = 0;
  *(undefined4 *)&(this->ClientChanges).RemovedAttributes.Elements.field_0x30 = 0xffffffff;
  (this->ClientChanges).RemovedAttributes.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->ClientChanges).RemovedAttributes.HashSize = 0;
  return this;
}

// ~Params @ 14ee25560

void __thiscall
UE::Online::FSchemaCategoryInstancePrepareClientChanges::Params::~Params(Params *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->ClientChanges).RemovedAttributes.HashSize = 0;
  FVar1 = (this->ClientChanges).RemovedAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ClientChanges).RemovedAttributes.Elements);
  *(undefined4 *)&(this->ClientChanges).UpdatedAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ClientChanges).UpdatedAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ClientChanges).UpdatedAttributes);
  return;
}

