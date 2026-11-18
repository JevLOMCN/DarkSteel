// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 10

// operator= @ 14ee256f0

TOptional<FName> * __thiscall TOptional<FName>::operator=(TOptional<FName> *this,FName *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  TOptional<FName> *pTVar4;
  
  if ((param_1 != (FName *)this) &&
     (FVar1 = *param_1, (this->field0_0x0).TypedValue = FVar1,
     FVar1.ComparisonIndex.Value.Value == 0xffffffff)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x171,
                       L"TOptional::Emplace(...) - optionals should not be unset by an emplacement")
    ;
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TOptional<FName> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return this;
}

// operator-> @ 14ee25df0

FLobbyClientMemberAttributeChanges * __thiscall
TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::operator->
          (TOptional<UE::Online::FLobbyClientMemberAttributeChanges> *this)

{
  code *pcVar1;
  bool bVar2;
  FLobbyClientMemberAttributeChanges *pFVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FLobbyClientMemberAttributeChanges *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 14ee25e40

TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> * __thiscall
TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::operator*
          (TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> *this)

{
  code *pcVar1;
  bool bVar2;
  TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *pTVar3;
  
  if (this->bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar3 = (TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *)(*pcVar1)();
      return pTVar3;
    }
  }
  return &this->TypedValue;
}

// operator* @ 14ee25e90

ELobbyMemberLeaveReason * __thiscall
TOptional<enum_UE::Online::ELobbyMemberLeaveReason>::operator*(void *this)

{
  code *pcVar1;
  bool bVar2;
  ELobbyMemberLeaveReason *pEVar3;
  
  if (*(char *)((longlong)this + 4) == '\0') {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pEVar3 = (ELobbyMemberLeaveReason *)(*pcVar1)();
      return pEVar3;
    }
  }
  return this;
}

// ~TOptional<UE::Online::FLobbyClientAttributeChanges> @ 14efe5d20

void __thiscall
TOptional<UE::Online::FLobbyClientAttributeChanges>::
~TOptional<UE::Online::FLobbyClientAttributeChanges>
          (TOptional<UE::Online::FLobbyClientAttributeChanges> *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    (this->TypedValue).RemovedAttributes.HashSize = 0;
    FVar1 = (this->TypedValue).RemovedAttributes.Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->TypedValue).RemovedAttributes.Elements);
    *(undefined4 *)&(this->TypedValue).UpdatedAttributes.field_0x48 = 0;
    pvVar2 = *(void **)&(this->TypedValue).UpdatedAttributes.field_0x40;
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
  return;
}

// ~TOptional<UE::Online::FLobbyClientMemberAttributeChanges> @ 14efe5d90

void __thiscall
TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::
~TOptional<UE::Online::FLobbyClientMemberAttributeChanges>
          (TOptional<UE::Online::FLobbyClientMemberAttributeChanges> *this)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if (this->bIsSet != false) {
    (this->TypedValue).RemovedAttributes.HashSize = 0;
    FVar1 = (this->TypedValue).RemovedAttributes.Hash.SecondaryData;
    if (FVar1 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)FVar1);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&(this->TypedValue).RemovedAttributes.Elements);
    *(undefined4 *)&(this->TypedValue).UpdatedAttributes.field_0x48 = 0;
    pvVar2 = *(void **)&(this->TypedValue).UpdatedAttributes.field_0x40;
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
  return;
}

// operator= @ 14efe6c70

TOptional<UE::Online::FLobbyClientAttributeChanges> * __thiscall
TOptional<UE::Online::FLobbyClientAttributeChanges>::operator=
          (TOptional<UE::Online::FLobbyClientAttributeChanges> *this,
          FLobbyClientAttributeChanges *param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if ((TOptional<UE::Online::FLobbyClientAttributeChanges> *)param_1 != this) {
    if (this->bIsSet != false) {
      (this->TypedValue).RemovedAttributes.HashSize = 0;
      FVar1 = (this->TypedValue).RemovedAttributes.Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(this->TypedValue).RemovedAttributes.Elements);
      *(undefined4 *)&(this->TypedValue).UpdatedAttributes.field_0x48 = 0;
      pvVar2 = *(void **)&(this->TypedValue).UpdatedAttributes.field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
    }
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)this,(TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                        *)param_1);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->TypedValue).RemovedAttributes,&param_1->RemovedAttributes);
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 14efe6d10

TOptional<UE::Online::FLobbyClientMemberAttributeChanges> * __thiscall
TOptional<UE::Online::FLobbyClientMemberAttributeChanges>::operator=
          (TOptional<UE::Online::FLobbyClientMemberAttributeChanges> *this,
          FLobbyClientMemberAttributeChanges *param_1)

{
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  
  if ((TOptional<UE::Online::FLobbyClientMemberAttributeChanges> *)param_1 != this) {
    if (this->bIsSet != false) {
      (this->TypedValue).RemovedAttributes.HashSize = 0;
      FVar1 = (this->TypedValue).RemovedAttributes.Hash.SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&(this->TypedValue).RemovedAttributes.Elements);
      *(undefined4 *)&(this->TypedValue).UpdatedAttributes.field_0x48 = 0;
      pvVar2 = *(void **)&(this->TypedValue).UpdatedAttributes.field_0x40;
      if (pvVar2 != (void *)0x0) {
        FMemory::Free(pvVar2);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)this);
    }
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
    ::
    TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                *)this,(TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
                        *)param_1);
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
              (&(this->TypedValue).RemovedAttributes,&param_1->RemovedAttributes);
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 14efe6db0

TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> * __thiscall
TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>::operator=
          (TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> *this,
          TOnlineId<UE::Online::OnlineIdHandleTags::FAccount> *param_1)

{
  if ((TOptional<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_> *)param_1 != this
     ) {
    (this->TypedValue).Value = param_1->Value;
    this->bIsSet = true;
  }
  return this;
}

// operator= @ 14efe6dd0

TOptional<UE::Online::ELobbyMemberLeaveReason> * __thiscall
TOptional<enum_UE::Online::ELobbyMemberLeaveReason>::operator=
          (void *this,ELobbyMemberLeaveReason *param_1)

{
  if (param_1 != this) {
    *(ELobbyMemberLeaveReason *)this = *param_1;
    *(undefined1 *)((longlong)this + 4) = 1;
  }
  return this;
}

