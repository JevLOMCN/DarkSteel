// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 3

// FLobbyClientChanges @ 14efe3560

FLobbyClientChanges * __thiscall
UE::Online::FLobbyClientChanges::FLobbyClientChanges
          (FLobbyClientChanges *this,FLobbyClientChanges *param_1)

{
  bool bVar1;
  
  (this->LocalName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->LocalName).field0_0x0.TypedValue.Number = 0;
  if ((param_1->LocalName).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->LocalName).field0_0x0 = (param_1->LocalName).field0_0x0;
  }
  (this->JoinPolicy).bIsSet = false;
  bVar1 = (param_1->JoinPolicy).bIsSet;
  (this->JoinPolicy).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->JoinPolicy).TypedValue = (param_1->JoinPolicy).TypedValue;
  }
  (this->OwnerAccountId).bIsSet = false;
  bVar1 = (param_1->OwnerAccountId).bIsSet;
  (this->OwnerAccountId).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->OwnerAccountId).TypedValue.Value = (param_1->OwnerAccountId).TypedValue.Value;
  }
  (this->LobbySchema).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->LobbySchema).field0_0x0.TypedValue.Number = 0;
  if ((param_1->LobbySchema).field0_0x0.TypedValue.ComparisonIndex.Value != 0xffffffff) {
    (this->LobbySchema).field0_0x0 = (param_1->LobbySchema).field0_0x0;
  }
  (this->Attributes).bIsSet = false;
  bVar1 = (param_1->Attributes).bIsSet;
  (this->Attributes).bIsSet = bVar1;
  if (bVar1 != false) {
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)&this->Attributes,
               (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)&param_1->Attributes);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->Attributes).TypedValue.RemovedAttributes,
               &(param_1->Attributes).TypedValue.RemovedAttributes);
  }
  (this->MemberAttributes).bIsSet = false;
  bVar1 = (param_1->MemberAttributes).bIsSet;
  (this->MemberAttributes).bIsSet = bVar1;
  if (bVar1 != false) {
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)&this->MemberAttributes,
               (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)&param_1->MemberAttributes);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->MemberAttributes).TypedValue.RemovedAttributes,
               &(param_1->MemberAttributes).TypedValue.RemovedAttributes);
  }
  (this->LocalUserLeaveReason).bIsSet = false;
  bVar1 = (param_1->LocalUserLeaveReason).bIsSet;
  (this->LocalUserLeaveReason).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->LocalUserLeaveReason).TypedValue = (param_1->LocalUserLeaveReason).TypedValue;
  }
  (this->KickedTargetMember).bIsSet = false;
  bVar1 = (param_1->KickedTargetMember).bIsSet;
  (this->KickedTargetMember).bIsSet = bVar1;
  if (bVar1 != false) {
    (this->KickedTargetMember).TypedValue.Value = (param_1->KickedTargetMember).TypedValue.Value;
  }
  return this;
}

// FLobbyClientChanges @ 14efe36b0

FLobbyClientChanges * __thiscall
UE::Online::FLobbyClientChanges::FLobbyClientChanges(FLobbyClientChanges *this)

{
  (this->LocalName).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  (this->LocalName).field0_0x0.TypedValue.Number = 0;
  (this->JoinPolicy).bIsSet = false;
  (this->OwnerAccountId).bIsSet = false;
  (this->LobbySchema).field0_0x0.TypedValue.Number = 0;
  (this->Attributes).bIsSet = false;
  (this->MemberAttributes).bIsSet = false;
  (this->LocalUserLeaveReason).bIsSet = false;
  (this->KickedTargetMember).bIsSet = false;
  (this->LobbySchema).field0_0x0.TypedValue.ComparisonIndex.Value = 0xffffffff;
  return this;
}

// ~FLobbyClientChanges @ 14efe6510

void __thiscall UE::Online::FLobbyClientChanges::~FLobbyClientChanges(FLobbyClientChanges *this)

{
  TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::
  ~TOptional<UE::Online::FLobbyClientMemberAttributeChanges>(&this->MemberAttributes);
  TOptional<UE::Online::FLobbyClientAttributeChanges>::
  ~TOptional<UE::Online::FLobbyClientAttributeChanges>(&this->Attributes);
  return;
}

