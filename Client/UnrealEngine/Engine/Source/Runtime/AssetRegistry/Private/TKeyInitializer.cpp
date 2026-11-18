// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AssetRegistry
// Functions: 11

// operator<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_> @ 142ab1430

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FDependsNode_*_const_&>::
operator<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>_TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FDependsNode_*_const_&> *this,
          TTuple<FDependsNode_*,TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>_>
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
  *(FDependsNode **)__return_storage_ptr__ = *this->Key;
  TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>::
  TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator>
            ((TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FDependsNode_*,DefaultKeyFuncs<FDependsNode_*,0>,FDefaultSetAllocator> *)local_68
            );
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_> @ 142ab1550

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>
* __thiscall
TKeyInitializer<FTopLevelAssetPath_const_&>::
operator<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FTopLevelAssetPath_const_&> *this,
          TTuple<FTopLevelAssetPath,TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FTopLevelAssetPath *pFVar1;
  int iVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
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
  uVar3 = (pFVar1->PackageName).Number;
  FVar4.Value = (pFVar1->AssetName).ComparisonIndex.Value;
  uVar5 = (pFVar1->AssetName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->PackageName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>::
  TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator>
            ((TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x10,
             (TSet<FAssetData_*,DefaultKeyFuncs<FAssetData_*,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_> @ 142ab1670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_> *
__thiscall
TKeyInitializer<FName_&&>::
operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_&&> *this,
          TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
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
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
  Move<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
            ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
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

// operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_> @ 142ab17c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_> *
__thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
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
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x48 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x50 = 0;
  TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>::
  Move<TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator>_>
            ((TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FTopLevelAssetPath,DefaultKeyFuncs<FTopLevelAssetPath,0>,FDefaultSetAllocator> *)
             local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
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

// operator<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir> @ 142ab1910

TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir> * __thiscall
TKeyInitializer<FString_&&>::
operator<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>
          (TKeyInitializer<FString_&&> *this,
          TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir> *__return_storage_ptr__)

{
  FString *pFVar1;
  ForAnyElementType FVar2;
  FCachedDirScanDir local_48;
  
  local_48.JournalHandle.Bytes._16_4_ = FileJournalFileHandleInvalid.Bytes._16_4_;
  pFVar1 = this->Key;
  local_48.bCacheValid = false;
  local_48.bIsReparsePoint.TypedValue = false;
  local_48.bIsReparsePoint.bIsSet = false;
  local_48.bIsInsideReparsePoint.TypedValue = false;
  local_48._57_4_ = 0;
  local_48._61_2_ = 0;
  local_48._63_1_ = 0;
  local_48.SubDirRelPaths.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.SubDirRelPaths.ArrayNum = 0;
  local_48.SubDirRelPaths.ArrayMax = 0;
  local_48.Files.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Files.ArrayNum = 0;
  local_48.Files.ArrayMax = 0;
  local_48.JournalHandle.Bytes._0_8_ = FileJournalFileHandleInvalid.Bytes._0_8_;
  local_48.JournalHandle.Bytes._8_8_ = FileJournalFileHandleInvalid.Bytes._8_8_;
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(FScriptContainerElement **)__return_storage_ptr__ = (pFVar1->Data).AllocatorInstance.Data;
  (pFVar1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *(int *)&__return_storage_ptr__->field_0x8 = (pFVar1->Data).ArrayNum;
  *(int *)&__return_storage_ptr__->field_0xc = (pFVar1->Data).ArrayMax;
  (pFVar1->Data).ArrayNum = 0;
  (pFVar1->Data).ArrayMax = 0;
  local_48.bIsInsideReparsePoint.bIsSet = false;
  UE::AssetDataGather::Private::FCachedDirScanDir::FCachedDirScanDir
            ((FCachedDirScanDir *)&__return_storage_ptr__->field_0x10,&local_48);
  FVar2.Data = local_48.Files.AllocatorInstance.Data;
  DestructItems<UE::AssetDataGather::Private::FCachedDirScanFile,int>
            ((FCachedDirScanFile *)local_48.Files.AllocatorInstance.Data,local_48.Files.ArrayNum);
  if ((FCachedDirScanFile *)FVar2.Data != (FCachedDirScanFile *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  FVar2.Data = local_48.SubDirRelPaths.AllocatorInstance.Data;
  DestructItems<FString,int>
            ((FString *)local_48.SubDirRelPaths.AllocatorInstance.Data,
             local_48.SubDirRelPaths.ArrayNum);
  if (FVar2.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar2.Data);
  }
  return __return_storage_ptr__;
}

// operator<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>_TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> @ 142ab19e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> * __thiscall
TKeyInitializer<FString_const_&>::
operator<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>_TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo>
          (TKeyInitializer<FString_const_&> *this,
          TTuple<FString,UE::AssetDataGather::Private::FCachedVolumeInfo> *__return_storage_ptr__)

{
  int iVar1;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [24];
  undefined8 uStack_b0;
  void *local_a8;
  undefined4 local_a0;
  uint local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined8 local_90;
  void *local_88;
  ulonglong local_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulong64 local_68;
  ulong64 local_60;
  ForAnyElementType local_58;
  undefined8 local_50;
  ForAnyElementType local_48;
  undefined8 local_40;
  ulong64 local_38;
  ulong64 local_30;
  ulong64 local_28;
  bool local_20;
  undefined4 local_1f;
  undefined2 local_1b;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  local_9c = 0x80;
  local_c8._0_8_ = (FScriptContainerElement *)0x0;
  local_90 = 0;
  local_c8._16_8_ = 0;
  uStack_b0 = 0;
  local_80 = 0;
  local_1f = 0;
  local_1b = 0;
  local_19 = 0;
  local_c8._8_8_ = 0;
  local_a8 = (void *)0x0;
  local_a0 = 0;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (void *)0x0;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70._0_4_ = 0;
  local_70._4_4_ = 0;
  local_68 = 0xffffffffffffffff;
  local_60 = 0xffffffffffffffff;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50._0_4_ = 0;
  local_50._4_4_ = 0;
  local_48.Data = (FScriptContainerElement *)0x0;
  local_40._0_4_ = 0;
  local_40._4_4_ = 0;
  local_38 = 0xffffffffffffffff;
  local_30 = 0xffffffffffffffff;
  local_28 = 0;
  local_20 = false;
  ::FString::FString((FString *)__return_storage_ptr__,this->Key);
  UE::AssetDataGather::Private::FCachedVolumeInfo::FCachedVolumeInfo
            ((FCachedVolumeInfo *)&__return_storage_ptr__->field_0x10,(FCachedVolumeInfo *)local_c8)
  ;
  if (local_48.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data);
  }
  DestructItems<FString,int>((FString *)local_58.Data,(int)local_50);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  local_80 = local_80 & 0xffffffff00000000;
  if (local_88 != (void *)0x0) {
    FMemory::Free(local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,UE::AssetDataGather::Private::FCachedDirScanDir>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_c8,0,local_c8._8_4_);
  iVar1 = SUB84(local_c8._8_8_,4);
  local_c8._8_8_ = local_c8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,0,(ForAnyElementType *)local_c8,0,(int *)(local_c8 + 0xc));
  }
  local_98 = 0xffffffff;
  local_94 = 0;
  local_a0 = 0;
  if (0x80 < local_9c) {
    local_9c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_c8 + 0x10),0);
  }
  if (local_a8 != (void *)0x0) {
    FMemory::Free(local_a8);
  }
  if ((FScriptContainerElement *)local_c8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_c8._0_8_);
  }
  return __return_storage_ptr__;
}

// operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 142b3a240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
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
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x8,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 142b6eea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FTopLevelAssetPath_&&>::
operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FTopLevelAssetPath_&&> *this,
          TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FTopLevelAssetPath *pFVar1;
  int iVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
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
  local_20 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = (pFVar1->PackageName).Number;
  FVar4.Value = (pFVar1->AssetName).ComparisonIndex.Value;
  uVar5 = (pFVar1->AssetName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->PackageName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x10,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> @ 142b6eff0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_> * __thiscall
TKeyInitializer<FTopLevelAssetPath_const_&>::
operator<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>_TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          (TKeyInitializer<FTopLevelAssetPath_const_&> *this,
          TTuple<FTopLevelAssetPath,TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
          *__return_storage_ptr__)

{
  FTopLevelAssetPath *pFVar1;
  int iVar2;
  uint uVar3;
  FNameEntryId FVar4;
  uint uVar5;
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
  local_20 = 0;
  local_68._16_8_ = 0;
  uStack_50 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_30.SecondaryData = (ForElementType<FSetElementId>)0x0;
  uVar3 = (pFVar1->PackageName).Number;
  FVar4.Value = (pFVar1->AssetName).ComparisonIndex.Value;
  uVar5 = (pFVar1->AssetName).Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (pFVar1->PackageName).ComparisonIndex.Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar3;
  *(uint *)&__return_storage_ptr__->field_0x8 = FVar4.Value;
  *(uint *)&__return_storage_ptr__->field_0xc = uVar5;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x18 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x30 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x38 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x3c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x40 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x44 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x50 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x58 = 0;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
  Move<TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>_>
            ((TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)
             &__return_storage_ptr__->field_0x10,
             (TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *)local_68);
  local_20 = local_20 & 0xffffffff00000000;
  if (local_30.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_30.SecondaryData);
  }
  iVar2 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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

// operator<FName,FAssetData>_TTuple<FName,FAssetData> @ 142b6f140

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TTuple<FName,FAssetData> * __thiscall
TKeyInitializer<FName_const_&>::operator<FName,FAssetData>_TTuple<FName,FAssetData>
          (TKeyInitializer<FName_const_&> *this,TTuple<FName,FAssetData> *__return_storage_ptr__)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  FAssetData local_78;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.PackageName.ComparisonIndex.Value = 0;
  local_78.PackageName.Number = 0;
  local_78.PackagePath.ComparisonIndex.Value = 0;
  local_78.PackagePath.Number = 0;
  local_78.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetName.Number = 0;
  local_78.AssetClass.ComparisonIndex.Value = 0;
  local_78.AssetClass.Number = 0;
  local_78.AssetClassPath.PackageName.ComparisonIndex.Value = 0;
  local_78.AssetClassPath.PackageName.Number = 0;
  local_78.AssetClassPath.AssetName.ComparisonIndex.Value = 0;
  local_78.AssetClassPath.AssetName.Number = 0;
  local_78.PackageFlags = 0;
  local_78.ChunkArrayRegistryHandle.Index = -1;
  local_78.TagsAndValues.field0_0x0.Loose = (FAssetDataTagMapSharedView_u_0)0x0;
  local_78.TaggedAssetBundles.Object = (FAssetBundleData *)0x0;
  local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  local_78.ChunkIDs.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
  local_78.ChunkIDs.ArrayNum = 0;
  local_78.ChunkIDs.ArrayMax = 2;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  FAssetData::FAssetData((FAssetData *)&__return_storage_ptr__->field_0x8,&local_78);
  if (local_78.ChunkIDs.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
    FMemory::Free((void *)local_78.ChunkIDs.AllocatorInstance.SecondaryData);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_78.TaggedAssetBundles.SharedReferenceCount.ReferenceController);
  FAssetDataTagMapSharedView::~FAssetDataTagMapSharedView(&local_78.TagsAndValues);
  return __return_storage_ptr__;
}

// operator<FName,UE::AssetRegistry::DependsNode::FConstructData>_TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData> @ 142b6f200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData> * __thiscall
TKeyInitializer<FName_const_&>::
operator<FName,UE::AssetRegistry::DependsNode::FConstructData>_TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData>
          (TKeyInitializer<FName_const_&> *this,
          TTuple<FName,UE::AssetRegistry::DependsNode::FConstructData> *__return_storage_ptr__)

{
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  undefined1 auStackY_b8 [32];
  undefined1 local_88 [8];
  ForAnyElementType local_80;
  undefined8 local_78;
  TBitArray<FDefaultBitArrayAllocator> local_70;
  undefined8 uStack_50;
  undefined8 local_48;
  void *local_40;
  ulonglong local_38;
  ForAnyElementType local_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  local_88 = (undefined1  [8])0x0;
  local_48 = 0;
  local_38 = 0;
  local_70.AllocatorInstance.InlineData[0] = '\0';
  local_70.AllocatorInstance.InlineData[1] = '\0';
  local_70.AllocatorInstance.InlineData[2] = '\0';
  local_70.AllocatorInstance.InlineData[3] = '\0';
  local_70.AllocatorInstance.InlineData[4] = '\0';
  local_70.AllocatorInstance.InlineData[5] = '\0';
  local_70.AllocatorInstance.InlineData[6] = '\0';
  local_70.AllocatorInstance.InlineData[7] = '\0';
  local_70.AllocatorInstance.InlineData[8] = '\0';
  local_70.AllocatorInstance.InlineData[9] = '\0';
  local_70.AllocatorInstance.InlineData[10] = '\0';
  local_70.AllocatorInstance.InlineData[0xb] = '\0';
  local_70.AllocatorInstance.InlineData[0xc] = '\0';
  local_70.AllocatorInstance.InlineData[0xd] = '\0';
  local_70.AllocatorInstance.InlineData[0xe] = '\0';
  local_70.AllocatorInstance.InlineData[0xf] = '\0';
  local_80.Data = (FScriptContainerElement *)0x0;
  local_78 = 0;
  local_70.AllocatorInstance.SecondaryData = (ForElementType<unsigned_int>)0x0;
  local_70._24_8_ = ___xmm_00000000ffffffff0000008000000000;
  uStack_50 = _UNK_150631d98;
  local_40 = (void *)0x0;
  local_30.Data = (FScriptContainerElement *)0x0;
  local_28._0_4_ = 0;
  local_28._4_4_ = 0;
  uVar1 = this->Key->Number;
  *(uint *)&__return_storage_ptr__->field_0x0 = (this->Key->ComparisonIndex).Value;
  *(uint *)&__return_storage_ptr__->field_0x4 = uVar1;
  UE::AssetRegistry::DependsNode::FConstructData::FConstructData
            ((FConstructData *)&__return_storage_ptr__->field_0x8,(FConstructData *)local_88);
  if (local_30.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.Data);
  }
  local_38 = local_38 & 0xffffffff00000000;
  if (local_40 != (void *)0x0) {
    FMemory::Free(local_40);
  }
  uVar2 = local_78 >> 0x20;
  local_78 = local_78 & 0xffffffff00000000;
  if ((int)uVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&local_80,0,(int *)((longlong)&local_78 + 4));
  }
  iVar3 = local_70.MaxBits;
  uStack_50 = 0xffffffff;
  local_70._24_8_ = (ulonglong)(uint)local_70.MaxBits << 0x20;
  if (0x80 < (uint)iVar3) {
    local_70.NumBits = 0;
    local_70.MaxBits = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc(&local_70,0);
  }
  if (local_70.AllocatorInstance.SecondaryData != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)local_70.AllocatorInstance.SecondaryData);
  }
  if (local_80.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_80.Data);
  }
  return __return_storage_ptr__;
}

