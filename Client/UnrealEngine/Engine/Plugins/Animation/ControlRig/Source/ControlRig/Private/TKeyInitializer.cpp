// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// operator<FName,FModularRigModuleSettingsForClipboard>_TTuple<FName,FModularRigModuleSettingsForClipboard> @ 14a207180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FModularRigModuleSettingsForClipboard> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,FModularRigModuleSettingsForClipboard>_TTuple<FName,FModularRigModuleSettingsForClipboard>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,FModularRigModuleSettingsForClipboard> *__return_storage_ptr__)

{
  int iVar1;
  uint uVar2;
  undefined1 auStackY_158 [32];
  undefined1 local_128 [32];
  undefined1 local_108 [24];
  undefined8 uStack_f0;
  void *local_e8;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined8 local_d0;
  void *local_c8;
  ulonglong local_c0;
  undefined1 local_b8 [24];
  undefined8 uStack_a0;
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  void *local_78;
  ulonglong local_70;
  undefined1 local_68 [24];
  undefined8 uStack_50;
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  void *local_28;
  ulonglong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_dc = 0x80;
  local_128._0_4_ = 0;
  local_128._4_4_ = 0;
  local_d0 = 0;
  local_c0 = 0;
  local_80 = 0;
  local_70 = 0;
  local_30 = 0;
  local_20 = 0;
  local_108._16_8_ = 0;
  uStack_f0 = 0;
  local_b8._16_8_ = 0;
  uStack_a0 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_128._8_4_ = 0;
  local_128._12_4_ = 0;
  local_128._16_8_ = (FScriptContainerElement *)0x0;
  local_128._24_4_ = 0;
  local_128._28_4_ = 0;
  local_108._0_8_ = (FScriptContainerElement *)0x0;
  local_108._8_8_ = 0;
  local_e8 = (void *)0x0;
  local_e0 = 0;
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_c8 = (void *)0x0;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_8c = 0x80;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (void *)0x0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (void *)0x0;
  uVar2 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar2;
  FModularRigModuleSettingsForClipboard::FModularRigModuleSettingsForClipboard
            ((FModularRigModuleSettingsForClipboard *)&__return_storage_ptr__->field_0x8,
             (FModularRigModuleSettingsForClipboard *)local_128);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_28 != (void *)0x0) {
    FMemory::Free(local_28);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
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
  local_70 = local_70 & 0xffffffff00000000;
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_b8,0,local_b8._8_4_);
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  local_c0 = local_c0 & 0xffffffff00000000;
  if (local_c8 != (void *)0x0) {
    FMemory::Free(local_c8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_108,0,local_108._8_4_);
  iVar1 = SUB84(local_108._8_8_,4);
  local_108._8_8_ = local_108._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_108,0,(int *)(local_108 + 0xc));
  }
  local_d8 = 0xffffffff;
  local_d4 = 0;
  local_e0 = 0;
  if (0x80 < local_dc) {
    local_dc = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_108 + 0x10),0);
  }
  if (local_e8 != (void *)0x0) {
    FMemory::Free(local_e8);
  }
  if ((FScriptContainerElement *)local_108._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_108._0_8_);
  }
  if ((FScriptContainerElement *)local_128._16_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_128._16_8_);
  }
  return __return_storage_ptr__;
}

// operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> @ 14a2cba80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> * __thiscall
TKeyInitializer<FRigElementKey_const_&>::
operator<FRigElementKey,URigHierarchy::FMetadataStorage>_TTuple<FRigElementKey,URigHierarchy::FMetadataStorage>
          (TKeyInitializer<FRigElementKey_const_&> *this,
          TTuple<FRigElementKey,URigHierarchy::FMetadataStorage> *__return_storage_ptr__)

{
  FRigElementKey *pFVar1;
  int iVar2;
  undefined3 uVar3;
  FNameEntryId FVar4;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  FName local_28;
  FRigBaseMetadata *local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_4c = 0x80;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_40 = 0;
  local_30 = 0;
  pFVar1 = this->Key;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  local_28.ComparisonIndex.Value = 0;
  local_28.Number = 0;
  local_20 = (FRigBaseMetadata *)0x0;
  uVar3 = *(undefined3 *)&pFVar1->field_0x1;
  FVar4.Value = (pFVar1->Name).ComparisonIndex.Value;
  __return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(undefined3 *)&__return_storage_ptr__->field_0x1 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x4 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0x8 = (pFVar1->Name).Number;
  URigHierarchy::FMetadataStorage::FMetadataStorage
            ((FMetadataStorage *)&__return_storage_ptr__->field_0x10,(FMetadataStorage *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
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

// operator<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_> @ 14a2cbda0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FRigHierarchyRecord_const_&>::
operator<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>_TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FRigHierarchyRecord_const_&> *this,
          TTuple<FRigHierarchyRecord,TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FRigHierarchyRecord *pFVar1;
  int iVar2;
  FNameEntryId FVar3;
  uint uVar4;
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
  pFVar1 = this->Key;
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
  iVar2 = pFVar1->Index;
  FVar3.Value = (pFVar1->Name).ComparisonIndex.Value;
  uVar4 = (pFVar1->Name).Number;
  *(EType *)&__return_storage_ptr__->field_0x0 = pFVar1->Type;
  *(int *)&__return_storage_ptr__->field_0x4 = iVar2;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar3.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar4;
  TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>::
  TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>
            ((TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>
              *)&__return_storage_ptr__->field_0x10,
             (TSet<FRigHierarchyRecord,DefaultKeyFuncs<FRigHierarchyRecord,0>,FDefaultSetAllocator>
              *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

