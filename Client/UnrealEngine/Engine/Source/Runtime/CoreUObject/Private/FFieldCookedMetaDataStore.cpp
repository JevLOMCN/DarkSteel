// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 6

// StaticStruct @ 141fb3da0

UScriptStruct * __cdecl FFieldCookedMetaDataStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FFieldCookedMetaDataStore,(UObject *)pUVar1,
                         L"FieldCookedMetaDataStore");
  }
  return Z_Registration_Info_UScriptStruct_FFieldCookedMetaDataStore.OuterSingleton;
}

// ApplyFieldMetaDataInternal @ 141fc5e30

void __thiscall
FFieldCookedMetaDataStore::ApplyFieldMetaDataInternal
          (FFieldCookedMetaDataStore *this,FField *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2,FFieldCookedMetaDataKey *param_3)

{
  return;
}

// ApplyMetaData @ 141fc5e40

void __thiscall
FFieldCookedMetaDataStore::ApplyMetaData(FFieldCookedMetaDataStore *this,FField *param_1)

{
  return;
}

// CacheFieldMetaDataInternal @ 141fc62d0

void __thiscall
FFieldCookedMetaDataStore::CacheFieldMetaDataInternal
          (FFieldCookedMetaDataStore *this,FField *param_1,
          TMap<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
          *param_2,FFieldCookedMetaDataKey *param_3)

{
  return;
}

// CacheMetaData @ 141fc62e0

void __thiscall
FFieldCookedMetaDataStore::CacheMetaData(FFieldCookedMetaDataStore *this,FField *param_1)

{
  TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
  Reset((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
         *)this);
  TSet<TTuple<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue>,TDefaultMapHashableKeyFuncs<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue,0>,FDefaultSetAllocator>
  ::Reset((TSet<TTuple<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue>,TDefaultMapHashableKeyFuncs<FFieldCookedMetaDataKey,FFieldCookedMetaDataValue,0>,FDefaultSetAllocator>
           *)&this->SubFieldMetaData);
  return;
}

// HasMetaData @ 141fd3e30

bool __thiscall FFieldCookedMetaDataStore::HasMetaData(FFieldCookedMetaDataStore *this)

{
  if ((*(int *)&(this->FieldMetaData).field_0x8 - *(int *)&(this->FieldMetaData).field_0x34 < 1) &&
     (*(int *)&(this->SubFieldMetaData).field_0x8 - *(int *)&(this->SubFieldMetaData).field_0x34 < 1
     )) {
    return false;
  }
  return true;
}

