// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 3

// FLobbyServiceSnapshot @ 14efe3980

FLobbyServiceSnapshot * __thiscall
UE::Online::FLobbyServiceSnapshot::FLobbyServiceSnapshot
          (FLobbyServiceSnapshot *this,FLobbyServiceSnapshot *param_1)

{
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *pTVar1;
  undefined1 *_Dst;
  undefined1 *_Src;
  void *pvVar2;
  ForElementType<FSetElementId> FVar3;
  TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  *pTVar4;
  
  (this->OwnerAccountId).Value = (param_1->OwnerAccountId).Value;
  this->MaxMembers = param_1->MaxMembers;
  this->JoinPolicy = param_1->JoinPolicy;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&this->SchemaServiceSnapshot,
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&param_1->SchemaServiceSnapshot);
  pTVar1 = &this->Members;
  *(undefined8 *)&pTVar1->Elements = 0;
  pTVar4 = &param_1->Members;
  *(undefined8 *)&(this->Members).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Members).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Members).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Members).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Members).Elements.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Members).Elements.field_0x34 = 0;
  (this->Members).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Members).HashSize = 0;
  if (pTVar1 != pTVar4) {
    *(undefined8 *)&pTVar1->Elements = *(undefined8 *)&pTVar4->Elements;
    *(undefined8 *)&pTVar4->Elements = 0;
    _Dst = &(this->Members).Elements.field_0x10;
    *(undefined4 *)&(this->Members).Elements.field_0x8 =
         *(undefined4 *)&(param_1->Members).Elements.field_0x8;
    _Src = &(param_1->Members).Elements.field_0x10;
    *(undefined4 *)&(this->Members).Elements.field_0xc =
         *(undefined4 *)&(param_1->Members).Elements.field_0xc;
    *(undefined8 *)&(param_1->Members).Elements.field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Members).Elements.field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar2 = *(void **)&(this->Members).Elements.field_0x20;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      *(undefined8 *)&(this->Members).Elements.field_0x20 =
           *(undefined8 *)&(param_1->Members).Elements.field_0x20;
      *(undefined8 *)&(param_1->Members).Elements.field_0x20 = 0;
      *(undefined4 *)&(this->Members).Elements.field_0x28 =
           *(undefined4 *)&(param_1->Members).Elements.field_0x28;
      *(undefined4 *)&(this->Members).Elements.field_0x2c =
           *(undefined4 *)&(param_1->Members).Elements.field_0x2c;
      *(undefined8 *)&(param_1->Members).Elements.field_0x28 = 0;
    }
    *(undefined4 *)&(this->Members).Elements.field_0x30 =
         *(undefined4 *)&(param_1->Members).Elements.field_0x30;
    *(undefined4 *)&(this->Members).Elements.field_0x34 =
         *(undefined4 *)&(param_1->Members).Elements.field_0x34;
    *(undefined4 *)&(param_1->Members).Elements.field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Members).Elements.field_0x34 = 0;
  }
  if ((param_1->Members).Hash.SecondaryData == (ForElementType<FSetElementId>)0x0) {
    *(undefined4 *)(this->Members).Hash.InlineData =
         *(undefined4 *)(param_1->Members).Hash.InlineData;
  }
  FVar3 = (this->Members).Hash.SecondaryData;
  if (FVar3 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  (this->Members).Hash.SecondaryData = (param_1->Members).Hash.SecondaryData;
  (param_1->Members).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Members).HashSize = (param_1->Members).HashSize;
  (param_1->Members).HashSize = 0;
  return this;
}

// FLobbyServiceSnapshot @ 14efe3ad0

FLobbyServiceSnapshot * __thiscall
UE::Online::FLobbyServiceSnapshot::FLobbyServiceSnapshot(FLobbyServiceSnapshot *this)

{
  (this->OwnerAccountId).Value = 0;
  *(undefined8 *)&(this->SchemaServiceSnapshot).Attributes = 0;
  *(undefined8 *)&(this->SchemaServiceSnapshot).Attributes.field_0x8 = 0;
  *(undefined8 *)&(this->SchemaServiceSnapshot).Attributes.field_0x20 = 0;
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x28 = 0;
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x2c = 0x80;
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x34 = 0;
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SchemaServiceSnapshot).Attributes.field_0x40 = 0;
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x48 = 0;
  *(undefined8 *)&(this->Members).Elements = 0;
  *(undefined8 *)&(this->Members).Elements.field_0x8 = 0;
  *(undefined8 *)&(this->Members).Elements.field_0x20 = 0;
  *(undefined4 *)&(this->Members).Elements.field_0x28 = 0;
  *(undefined4 *)&(this->Members).Elements.field_0x2c = 0x80;
  *(undefined4 *)&(this->Members).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->Members).Elements.field_0x30 = 0xffffffff;
  (this->Members).Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  (this->Members).HashSize = 0;
  return this;
}

// ~FLobbyServiceSnapshot @ 14efe6970

void __thiscall
UE::Online::FLobbyServiceSnapshot::~FLobbyServiceSnapshot(FLobbyServiceSnapshot *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  (this->Members).HashSize = 0;
  FVar1 = (this->Members).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->Members).Elements);
  *(undefined4 *)&(this->SchemaServiceSnapshot).Attributes.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SchemaServiceSnapshot).Attributes.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SchemaServiceSnapshot);
  return;
}

