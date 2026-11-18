// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 4

// StaticStruct @ 141fb3ca0

UScriptStruct * __cdecl FObjectCookedMetaDataStore::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FObjectCookedMetaDataStore,(UObject *)pUVar1,
                         L"ObjectCookedMetaDataStore");
  }
  return Z_Registration_Info_UScriptStruct_FObjectCookedMetaDataStore.OuterSingleton;
}

// ApplyMetaData @ 141fc5e50

void __thiscall
FObjectCookedMetaDataStore::ApplyMetaData(FObjectCookedMetaDataStore *this,UObject *param_1)

{
  return;
}

// CacheMetaData @ 141fc6310

void __thiscall
FObjectCookedMetaDataStore::CacheMetaData(FObjectCookedMetaDataStore *this,UObject *param_1)

{
  if (*(int *)&(this->ObjectMetaData).field_0x8 != *(int *)&(this->ObjectMetaData).field_0x34) {
    TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>::
    UnhashElements((TSet<TTuple<FName,FString>,TDefaultMapHashableKeyFuncs<FName,FString,0>,FDefaultSetAllocator>
                    *)this);
    TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       *)this,0,*(int *)&(this->ObjectMetaData).field_0x8);
    *(undefined4 *)&(this->ObjectMetaData).field_0x8 = 0;
    if (*(int *)&(this->ObjectMetaData).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x20,8,0,(ForAnyElementType *)this,0,(int *)&(this->ObjectMetaData).field_0xc);
    }
    *(undefined4 *)&(this->ObjectMetaData).field_0x34 = 0;
    *(undefined4 *)&(this->ObjectMetaData).field_0x28 = 0;
    *(undefined4 *)&(this->ObjectMetaData).field_0x30 = 0xffffffff;
  }
  return;
}

// HasMetaData @ 141fd3e60

bool __thiscall FObjectCookedMetaDataStore::HasMetaData(FObjectCookedMetaDataStore *this)

{
  return 0 < *(int *)&(this->ObjectMetaData).field_0x8 - *(int *)&(this->ObjectMetaData).field_0x34;
}

