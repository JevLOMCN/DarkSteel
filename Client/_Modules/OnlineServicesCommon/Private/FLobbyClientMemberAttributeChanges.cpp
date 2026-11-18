// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// FLobbyClientMemberAttributeChanges @ 14efe36f0

FLobbyClientMemberAttributeChanges * __thiscall
UE::Online::FLobbyClientMemberAttributeChanges::FLobbyClientMemberAttributeChanges
          (FLobbyClientMemberAttributeChanges *this)

{
  *(undefined8 *)&this->UpdatedAttributes = 0;
  *(undefined8 *)&(this->UpdatedAttributes).field_0x8 = 0;
  *(undefined8 *)&(this->UpdatedAttributes).field_0x20 = 0;
  *(undefined4 *)&(this->UpdatedAttributes).field_0x28 = 0;
  *(undefined4 *)&(this->UpdatedAttributes).field_0x2c = 0x80;
  *(undefined4 *)&(this->UpdatedAttributes).field_0x34 = 0;
  *(undefined4 *)&(this->UpdatedAttributes).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->UpdatedAttributes).field_0x40 = 0;
  *(undefined4 *)&(this->UpdatedAttributes).field_0x48 = 0;
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

// ~FLobbyClientMemberAttributeChanges @ 14efe65f0

void __thiscall
UE::Online::FLobbyClientMemberAttributeChanges::~FLobbyClientMemberAttributeChanges
          (FLobbyClientMemberAttributeChanges *this)

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
  *(undefined4 *)&(this->UpdatedAttributes).field_0x48 = 0;
  pvVar2 = *(void **)&(this->UpdatedAttributes).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

