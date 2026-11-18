// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreOnline
// Functions: 1

// operator<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData> @ 144611070

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData> *
__thiscall
TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>::
operator<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>_TTuple<enum_UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>
          (void *this,
          TTuple<UE::Online::EOnlineServices,UE::Online::FOnlineForeignAccountIdRegistry::FRepData>
          *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  ForElementType<FSetElementId> local_40;
  ulonglong local_30;
  void *local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_40.InlineData[0] = '\0';
  local_40.InlineData[1] = '\0';
  local_40.InlineData[2] = '\0';
  local_40.InlineData[3] = '\0';
  local_40._padding_ = 0;
  local_30 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_40.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_28 = (void *)0x0;
  local_20 = 0;
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>,TDefaultMapHashableKeyFuncs<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>,0>,FDefaultSetAllocator>
              *)local_78);
  *(void **)&__return_storage_ptr__->field_0x58 = local_28;
  *(undefined4 *)&__return_storage_ptr__->field_0x60 = (undefined4)local_20;
  *(undefined4 *)&__return_storage_ptr__->field_0x64 = local_20._4_4_;
  local_20 = 0;
  local_28 = (void *)0x0;
  DestructItems<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)0x0,0);
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  local_30 = local_30 & 0xffffffff00000000;
  if (local_40.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_40.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TArray<unsigned_char,TSizedDefaultAllocator<32>_>,UE::Online::TOnlineId<UE::Online::OnlineIdHandleTags::FAccount>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar1 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  return __return_storage_ptr__;
}

