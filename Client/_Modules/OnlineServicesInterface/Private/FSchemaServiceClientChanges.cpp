// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 3

// FSchemaServiceClientChanges @ 14ec22bc0

FSchemaServiceClientChanges * __thiscall
UE::Online::FSchemaServiceClientChanges::FSchemaServiceClientChanges
          (FSchemaServiceClientChanges *this,FSchemaServiceClientChanges *param_1)

{
  (this->SchemaId).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SchemaId).field0_0x0.TypedValue.Number = 0;
  if ((param_1->SchemaId).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->SchemaId).field0_0x0 = (param_1->SchemaId).field0_0x0;
  }
  *(undefined8 *)&(this->AddedAttributes).field_0x0 = 0;
  *(undefined8 *)&(this->AddedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->AddedAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddedAttributes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->AddedAttributes).field_0x34 = 0;
  *(undefined8 *)&(this->AddedAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x48 = 0;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&this->AddedAttributes,
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&param_1->AddedAttributes);
  *(undefined8 *)&(this->ChangedAttributes).field_0x0 = 0;
  *(undefined8 *)&(this->ChangedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedAttributes).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ChangedAttributes).field_0x34 = 0;
  *(undefined8 *)&(this->ChangedAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x48 = 0;
  TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
  ::
  Move<TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>_>
            ((TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
              *)&this->ChangedAttributes,
             (TSet<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>,TDefaultMapHashableKeyFuncs<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>,0>,FDefaultSetAllocator>
              *)&param_1->ChangedAttributes);
  *(undefined8 *)&(this->RemovedAttributes).Elements = 0;
  *(undefined8 *)&(this->RemovedAttributes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemovedAttributes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x34 = 0;
  (this->RemovedAttributes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemovedAttributes).HashSize = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            (&this->RemovedAttributes,&param_1->RemovedAttributes);
  return this;
}

// FSchemaServiceClientChanges @ 14ec22cb0

FSchemaServiceClientChanges * __thiscall
UE::Online::FSchemaServiceClientChanges::FSchemaServiceClientChanges
          (FSchemaServiceClientChanges *this)

{
  (this->SchemaId).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->SchemaId).field0_0x0.TypedValue.Number = 0;
  *(undefined8 *)&this->AddedAttributes = 0;
  *(undefined8 *)&(this->AddedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->AddedAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->AddedAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->AddedAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->AddedAttributes).field_0x48 = 0;
  *(undefined8 *)&this->ChangedAttributes = 0;
  *(undefined8 *)&(this->ChangedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->ChangedAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->ChangedAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->ChangedAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->ChangedAttributes).field_0x48 = 0;
  *(undefined8 *)&(this->RemovedAttributes).Elements = 0;
  *(undefined8 *)&(this->RemovedAttributes).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->RemovedAttributes).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->RemovedAttributes).Elements.field_0x30 = 0xffffffff;
  (this->RemovedAttributes).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->RemovedAttributes).HashSize = 0;
  return this;
}

// ~FSchemaServiceClientChanges @ 14ec24260

void __thiscall
UE::Online::FSchemaServiceClientChanges::~FSchemaServiceClientChanges
          (FSchemaServiceClientChanges *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->RemovedAttributes).HashSize = 0;
  FVar1 = (this->RemovedAttributes).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->RemovedAttributes).Elements);
  *(undefined4 *)&(this->ChangedAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ChangedAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TTuple<UE::Online::FSchemaVariant,UE::Online::FSchemaVariant>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ChangedAttributes);
  *(undefined4 *)&(this->AddedAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->AddedAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AddedAttributes);
  return;
}

