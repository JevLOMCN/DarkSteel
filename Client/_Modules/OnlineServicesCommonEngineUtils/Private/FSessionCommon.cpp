// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommonEngineUtils
// Functions: 8

// ~FSessionCommon @ 14f004c90

void __thiscall UE::Online::FSessionCommon::~FSessionCommon(FSessionCommon *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  FScriptContainerElement *pFVar3;
  
  (this->SessionMembers).HashSize = 0;
  FVar1 = (this->SessionMembers).Hash.SecondaryData;
  if (FVar1 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->SessionMembers).Elements);
  *(undefined4 *)&(this->SessionSettings).CustomSettings.field_0x48 = 0;
  pvVar2 = *(void **)&(this->SessionSettings).CustomSettings.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FCustomSessionSetting>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->SessionSettings).CustomSettings);
  pFVar3 = (this->SessionInfo).SessionIdOverride.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetNumOpenConnections @ 14f007c10

uint __thiscall UE::Online::FSessionCommon::GetNumOpenConnections(FSessionCommon *this)

{
  return (*(int *)&(this->SessionMembers).Elements.field_0x34 -
         *(int *)&(this->SessionMembers).Elements.field_0x8) +
         (this->SessionSettings).NumMaxConnections;
}

// GetOwnerAccountId @ 14f007d50

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> __thiscall
UE::Online::FSessionCommon::GetOwnerAccountId(FSessionCommon *this)

{
  uint *in_RDX;
  
  *in_RDX = (this->OwnerAccountId).Value;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>)(uint)in_RDX;
}

// GetSessionId @ 14f007ef0

TOnlineId<UE::Online::OnlineIdHandleTags::FSession> __thiscall
UE::Online::FSessionCommon::GetSessionId(FSessionCommon *this)

{
  undefined4 *puVar1;
  undefined4 *in_RDX;
  
  puVar1 = (undefined4 *)(**(code **)(this->_padding_ + 0x18))();
  *in_RDX = *puVar1;
  return (TOnlineId<UE::Online::OnlineIdHandleTags::FSession>)(uint)in_RDX;
}

// GetSessionInfo @ 14f007f20

FSessionInfo * __thiscall UE::Online::FSessionCommon::GetSessionInfo(FSessionCommon *this)

{
  return &this->SessionInfo;
}

// GetSessionMembers @ 14f007f30

TSet<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,DefaultKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
* __thiscall UE::Online::FSessionCommon::GetSessionMembers(FSessionCommon *this)

{
  return &this->SessionMembers;
}

// GetSessionSettings @ 14f007f40

FSessionSettings * __thiscall UE::Online::FSessionCommon::GetSessionSettings(FSessionCommon *this)

{
  return &this->SessionSettings;
}

// IsJoinable @ 14f0085b0

bool __thiscall UE::Online::FSessionCommon::IsJoinable(FSessionCommon *this)

{
  int iVar1;
  
  iVar1 = (**(code **)(this->_padding_ + 0x10))();
  if ((iVar1 != 0) && ((this->SessionSettings).bAllowNewMembers != false)) {
    return true;
  }
  return false;
}

