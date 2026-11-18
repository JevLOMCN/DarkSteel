// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// ~Params @ 14efe6aa0

void __thiscall UE::Online::FLobbyClientDataPrepareClientChanges::Params::~Params(Params *this)

{
  TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::
  ~TOptional<UE::Online::FLobbyClientMemberAttributeChanges>
            (&(this->ClientChanges).MemberAttributes);
  TOptional<UE::Online::FLobbyClientAttributeChanges>::
  ~TOptional<UE::Online::FLobbyClientAttributeChanges>(&(this->ClientChanges).Attributes);
  return;
}

// ~Result @ 14efe6bc0

void __thiscall UE::Online::FLobbyClientDataPrepareClientChanges::Result::~Result(Result *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->ServiceChanges).RemovedMemberAttributes.HashSize = 0;
  FVar1 = (this->ServiceChanges).RemovedMemberAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ServiceChanges).RemovedMemberAttributes.Elements);
  *(undefined4 *)&(this->ServiceChanges).UpdatedMemberAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ServiceChanges).UpdatedMemberAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ServiceChanges).UpdatedMemberAttributes);
  (this->ServiceChanges).RemovedAttributes.HashSize = 0;
  FVar1 = (this->ServiceChanges).RemovedAttributes.Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->ServiceChanges).RemovedAttributes.Elements);
  *(undefined4 *)&(this->ServiceChanges).UpdatedAttributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->ServiceChanges).UpdatedAttributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->ServiceChanges).UpdatedAttributes);
  return;
}

