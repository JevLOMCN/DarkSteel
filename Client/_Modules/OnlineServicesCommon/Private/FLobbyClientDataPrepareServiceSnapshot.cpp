// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 1

// ~Params @ 14efe6ad0

void __thiscall UE::Online::FLobbyClientDataPrepareServiceSnapshot::Params::~Params(Params *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->LeaveReasons).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LeaveReasons).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,enum_UE::Online::ELobbyMemberLeaveReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,enum_UE::Online::ELobbyMemberLeaveReason>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->LeaveReasons);
  *(undefined4 *)&(this->LobbyMemberSnapshots).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LobbyMemberSnapshots).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->LobbyMemberSnapshots);
  (this->LobbySnapshot).Members.HashSize = 0;
  FVar2 = (this->LobbySnapshot).Members.Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->LobbySnapshot).Members.Elements);
  *(undefined4 *)&(this->LobbySnapshot).SchemaServiceSnapshot.Attributes.field_0x48 = 0;
  pvVar1 = *(void **)&(this->LobbySnapshot).SchemaServiceSnapshot.Attributes.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->LobbySnapshot).SchemaServiceSnapshot);
  return;
}

