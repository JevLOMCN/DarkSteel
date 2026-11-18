// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesCommon
// Functions: 2

// operator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_> @ 14ed39850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>
* __thiscall
TKeyInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>::
operator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>_TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>
          (TKeyInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
           *this,TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,TMap<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>_>_>
                 *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_98 [32];
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_30;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_98;
  local_30.InlineData[0] = '\0';
  local_30.InlineData[1] = '\0';
  local_30.InlineData[2] = '\0';
  local_30.InlineData[3] = '\0';
  local_30._padding_ = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_20 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  *(uint *)__return_storage_ptr__ = this->Key->Value;
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>,TDefaultMapHashableKeyFuncs<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FSessionInvite>,TSharedRef<UE::Online::FSessionInviteCommon,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot> @ 14efd3190

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>
* __thiscall
TKeyInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>::
operator<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>_TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>
          (TKeyInitializer<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_const_&>
           *this,TTuple<UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,UE::Online::FLobbyMemberServiceSnapshot>
                 *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_a8 [32];
  undefined1 auStack_70 [24];
  undefined8 local_58;
  void *pvStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  ForElementType<FSetElementId> local_38;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_48 = 0x8000000000;
  local_38.InlineData[0] = '\0';
  local_38.InlineData[1] = '\0';
  local_38.InlineData[2] = '\0';
  local_38.InlineData[3] = '\0';
  local_38._padding_ = 0;
  auStack_70._0_8_ = (FScriptContainerElement *)0x0;
  uStack_40 = 0xffffffff;
  auStack_70._8_8_ = 0;
  auStack_70._16_8_ = 0;
  local_38.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_28 = 0;
  *(uint *)__return_storage_ptr__ = this->Key->Value;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = 0;
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<TTuple<FName,UE::Online::FSchemaVariant>,TDefaultMapHashableKeyFuncs<FName,UE::Online::FSchemaVariant,0>,FDefaultSetAllocator>
              *)auStack_70);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_38.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_38.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaVariant>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)auStack_70,0,auStack_70._8_4_);
  iVar1 = SUB84(auStack_70._8_8_,4);
  auStack_70._8_8_ = auStack_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)auStack_70,0,(int *)(auStack_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(auStack_70 + 0x10),0);
  }
  if (pvStack_50 != (void *)0x0) {
    FMemory::Free(pvStack_50);
  }
  if ((FScriptContainerElement *)auStack_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)auStack_70._0_8_);
  }
  return __return_storage_ptr__;
}

