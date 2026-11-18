// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OnlineServicesInterface
// Functions: 3

// operator<FName,UE::Online::FSchemaCategoryDefinition>_TTuple<FName,UE::Online::FSchemaCategoryDefinition> @ 14ec1cc30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,UE::Online::FSchemaCategoryDefinition> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,UE::Online::FSchemaCategoryDefinition>_TTuple<FName,UE::Online::FSchemaCategoryDefinition>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,UE::Online::FSchemaCategoryDefinition> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [24];
  ForAnyElementType local_c0;
  undefined8 local_b8;
  TBitArray<FDefaultBitArrayAllocator> local_b0;
  undefined8 uStack_90;
  undefined8 local_88;
  void *local_80;
  ulonglong local_78;
  undefined1 local_70 [24];
  undefined8 uStack_58;
  void *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  void *local_30;
  ulonglong local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  local_88 = 0;
  local_78 = 0;
  local_38 = 0;
  local_28 = 0;
  local_b0.AllocatorInstance.InlineData[0] = '\0';
  local_b0.AllocatorInstance.InlineData[1] = '\0';
  local_b0.AllocatorInstance.InlineData[2] = '\0';
  local_b0.AllocatorInstance.InlineData[3] = '\0';
  local_b0.AllocatorInstance.InlineData[4] = '\0';
  local_b0.AllocatorInstance.InlineData[5] = '\0';
  local_b0.AllocatorInstance.InlineData[6] = '\0';
  local_b0.AllocatorInstance.InlineData[7] = '\0';
  local_b0.AllocatorInstance.InlineData[8] = '\0';
  local_b0.AllocatorInstance.InlineData[9] = '\0';
  local_b0.AllocatorInstance.InlineData[10] = '\0';
  local_b0.AllocatorInstance.InlineData[0xb] = '\0';
  local_b0.AllocatorInstance.InlineData[0xc] = '\0';
  local_b0.AllocatorInstance.InlineData[0xd] = '\0';
  local_b0.AllocatorInstance.InlineData[0xe] = '\0';
  local_b0.AllocatorInstance.InlineData[0xf] = '\0';
  local_d8._0_4_ = 0;
  local_d8._4_4_ = 0;
  local_70._16_8_ = 0;
  uStack_58 = 0;
  local_d8._8_4_ = 0;
  local_d8._12_4_ = 0;
  local_d8._16_4_ = 0;
  local_d8._20_4_ = 0;
  local_c0.Data = (FScriptContainerElement *)0x0;
  local_b8 = 0;
  local_b0.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_b0._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_90 = _UNK_150631d98;
  local_80 = (void *)0x0;
  local_70._0_8_ = (FScriptContainerElement *)0x0;
  local_70._8_8_ = 0;
  local_50 = (void *)0x0;
  local_48 = ___xmm_00000000ffffffff0000008000000000;
  uStack_40 = _UNK_150631d98;
  local_30 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  UE::Online::FSchemaCategoryDefinition::FSchemaCategoryDefinition
            ((FSchemaCategoryDefinition *)&__return_storage_ptr__->field_0x8,
             (FSchemaCategoryDefinition *)local_d8);
  local_28 = local_28 & 0xffffffff00000000;
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,UE::Online::FSchemaServiceAttributeDefinition>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_70,0,local_70._8_4_);
  iVar1 = SUB84(local_70._8_8_,4);
  local_70._8_8_ = local_70._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,0,(ForAnyElementType *)local_70,0,(int *)(local_70 + 0xc));
  }
  uVar2 = local_48._4_4_;
  uStack_40 = 0xffffffff;
  local_48 = (ulonglong)local_48._4_4_ << 0x20;
  if (0x80 < uVar2) {
    local_48 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_70 + 0x10),0);
  }
  if (local_50 != (void *)0x0) {
    FMemory::Free(local_50);
  }
  if ((FScriptContainerElement *)local_70._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_70._0_8_);
  }
  local_78 = local_78 & 0xffffffff00000000;
  if (local_80 != (void *)0x0) {
    FMemory::Free(local_80);
  }
  uVar3 = local_b8 >> 0x20;
  local_b8 = local_b8 & 0xffffffff00000000;
  if ((int)uVar3 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,4,0,&local_c0,0,(int *)((longlong)&local_b8 + 4));
  }
  iVar1 = local_b0.MaxBits;
  uStack_90 = 0xffffffff;
  local_b0._24_8_ = (ulonglong)(uint)local_b0.MaxBits << 0x20;
  if (0x80 < (uint)iVar1) {
    local_b0.NumBits = 0;
    local_b0.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_b0,0);
  }
  if (local_b0.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_b0.AllocatorInstance.SecondaryData);
  }
  if (local_c0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.Data);
  }
  return __return_storage_ptr__;
}

// operator<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_> @ 14ec1ce90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_>
* __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_>_TTuple<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TMap<FName,TArray<FName,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>_>_>
          *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
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
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FName,TArray<FName,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FName,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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

// operator<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_> @ 14ec1cfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>
* __thiscall
TKeyInitializer<enum_UE::Online::EOnlineServices_const_&>::
operator<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>_TTuple<enum_UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>
          (void *this,
          TTuple<UE::Online::EOnlineServices,TMap<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>_>_>
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
  *(undefined1 *)__return_storage_ptr__ = **(undefined1 **)this;
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
  ::
  TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
            ((TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x8,
             (TSet<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>,TDefaultMapHashableKeyFuncs<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<TTuple<FName,FName>,TSharedRef<UE::Online::IOnlineServices,1>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_68,0,local_68._8_4_);
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

