// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ClothingSystemRuntimeCommon
// Functions: 2

// StaticStruct @ 148c0aef0

UScriptStruct * __cdecl FClothLODDataCommon::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
    Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon,(UObject *)pUVar1,
                         L"ClothLODDataCommon");
  }
  return Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton;
}

// Serialize @ 148c31d40

bool __thiscall FClothLODDataCommon::Serialize(FClothLODDataCommon *this,FArchive *param_1)

{
  UPackage *pUVar1;
  FArchive *pFVar2;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FClothingAssetCustomVersion::GUID);
  if ((param_1->field_0x28 & 5) != 0) {
    if (Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton == (UScriptStruct *)0x0
       ) {
      pUVar1 = Z_Construct_UPackage__Script_ClothingSystemRuntimeCommon();
      Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FClothLODDataCommon,(UObject *)pUVar1,
                           L"ClothLODDataCommon");
    }
    UStruct::SerializeTaggedProperties
              ((UStruct *)Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton,
               param_1,(uchar *)this,
               (UStruct *)Z_Registration_Info_UScriptStruct_FClothLODDataCommon.OuterSingleton,
               (uchar *)0x0,(UObject *)0x0);
  }
  pFVar2 = TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
                     (param_1,&this->TransitionUpSkinData);
  TArrayPrivateFriend::Serialize<FMeshToMeshVertData,TSizedDefaultAllocator<32>_>
            (pFVar2,&this->TransitionDownSkinData);
  return true;
}

