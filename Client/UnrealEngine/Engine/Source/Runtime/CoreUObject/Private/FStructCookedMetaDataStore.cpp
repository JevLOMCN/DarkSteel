// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 141fb43f0

UScriptStruct * __cdecl FStructCookedMetaDataStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStructCookedMetaDataStore,(UObject *)pUVar1,
                         L"StructCookedMetaDataStore");
  }
  return Z_Registration_Info_UScriptStruct_FStructCookedMetaDataStore.OuterSingleton;
}

// ApplyMetaData @ 141fc5e60

void __thiscall
FStructCookedMetaDataStore::ApplyMetaData(FStructCookedMetaDataStore *this,UStruct *param_1)

{
  FField *pFVar1;
  bool bVar2;
  FName FVar3;
  FName FVar4;
  TFieldIterator<FProperty> local_28;
  
  FVar4.ComparisonIndex.Value = 0;
  FVar4.Number = 0;
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field = param_1->ChildProperties;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = false;
  local_28.bIncludeDeprecated = false;
  local_28.bIncludeInterface = false;
  local_28.Struct = param_1;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar1 = local_28.Field;
  while (pFVar1 != (FField *)0x0) {
    local_28.Field = pFVar1;
    bVar2 = IsThisNotNull(pFVar1,"FField::GetFName");
    FVar3 = FVar4;
    if (bVar2) {
      FVar3 = pFVar1->NamePrivate;
    }
    TMapBase<FName,FFieldCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FFieldCookedMetaDataStore,0>_>
    ::Find((TMapBase<FName,FFieldCookedMetaDataStore,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FFieldCookedMetaDataStore,0>_>
            *)&this->PropertiesMetaData,FVar3);
    local_28.Field = pFVar1->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar1 = local_28.Field;
  }
  return;
}

// CacheMetaData @ 141fc6320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FStructCookedMetaDataStore::CacheMetaData(FStructCookedMetaDataStore *this,UStruct *param_1)

{
  int iVar1;
  FField *pFVar2;
  undefined1 auStackY_108 [32];
  TFieldIterator<FProperty_const_> local_d8;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  void *local_78;
  undefined4 local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Reset((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)this);
  if (param_1 == (UStruct *)0x0) {
    local_d8.Field = (FField *)0x0;
  }
  else {
    local_d8.Field = param_1->ChildProperties;
  }
  local_d8.InterfaceIndex = -1;
  local_d8.bIncludeSuper = false;
  local_d8.bIncludeDeprecated = false;
  local_d8.bIncludeInterface = false;
  local_d8.Struct = param_1;
  TFieldIterator<FProperty_const_>::IterateToNext(&local_d8);
  pFVar2 = local_d8.Field;
  while (pFVar2 != (FField *)0x0) {
    local_b8._0_8_ = (FScriptContainerElement *)0x0;
    local_b8._8_8_ = 0;
    local_98 = (void *)0x0;
    local_90 = 0;
    local_8c = 0x80;
    local_88 = 0xffffffff;
    local_84 = 0;
    local_78 = (void *)0x0;
    local_70 = 0;
    local_68._0_8_ = (FScriptContainerElement *)0x0;
    local_68._8_8_ = 0;
    local_48 = (void *)0x0;
    local_40 = 0;
    local_3c = 0x80;
    local_38 = 0xffffffff;
    local_34 = 0;
    local_28 = 0;
    local_20 = 0;
    local_d8.Field = pFVar2;
    TSparseArray<TSparseSetElement<TTuple<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_68,0,0);
    iVar1 = SUB84(local_68._8_8_,4);
    local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x68,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
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
    local_70 = 0;
    if (local_78 != (void *)0x0) {
      FMemory::Free(local_78);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)local_b8,0,local_b8._8_4_);
    iVar1 = SUB84(local_b8._8_8_,4);
    local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
    if (iVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
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
    local_d8.Field = pFVar2->Next;
    TFieldIterator<FProperty_const_>::IterateToNext(&local_d8);
    pFVar2 = local_d8.Field;
  }
  return;
}

// HasMetaData @ 141fd3e80

bool __thiscall FStructCookedMetaDataStore::HasMetaData(FStructCookedMetaDataStore *this)

{
  if ((*(int *)&(this->ObjectMetaData).ObjectMetaData.field_0x8 -
       *(int *)&(this->ObjectMetaData).ObjectMetaData.field_0x34 < 1) &&
     (*(int *)&(this->PropertiesMetaData).field_0x8 - *(int *)&(this->PropertiesMetaData).field_0x34
      < 1)) {
    return false;
  }
  return true;
}

