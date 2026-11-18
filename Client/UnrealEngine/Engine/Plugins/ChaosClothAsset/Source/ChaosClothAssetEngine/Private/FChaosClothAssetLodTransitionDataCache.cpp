// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosClothAssetEngine
// Functions: 2

// StaticStruct @ 14dc29150

UScriptStruct * __cdecl FChaosClothAssetLodTransitionDataCache::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
    Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache,
                         (UObject *)pUVar1,L"ChaosClothAssetLodTransitionDataCache");
  }
  return Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton;
}

// Serialize @ 14dc56180

bool __thiscall
FChaosClothAssetLodTransitionDataCache::Serialize
          (FChaosClothAssetLodTransitionDataCache *this,FArchive *param_1)

{
  UPackage *pUVar1;
  
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_ChaosClothAssetEngine();
      Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FChaosClothAssetLodTransitionDataCache,
                           (UObject *)pUVar1,L"ChaosClothAssetLodTransitionDataCache");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.
               OuterSingleton,param_1,(uchar *)this,
               (UStruct *)
               Z_Registration_Info_UScriptStruct_FChaosClothAssetLodTransitionDataCache.
               OuterSingleton,(uchar *)0x0,(UObject *)0x0);
  }
  ::operator<<(param_1,(bool *)this);
  if ((this->ModelHash).bIsValid != false) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,(this->ModelHash).Bytes,0x10);
  }
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,&this->LODTransitionUpData);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (param_1,&this->LODTransitionDownData);
  return true;
}

