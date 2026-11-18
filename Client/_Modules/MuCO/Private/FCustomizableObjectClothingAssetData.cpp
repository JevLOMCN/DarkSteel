// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab98a50

UScriptStruct * __cdecl FCustomizableObjectClothingAssetData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectClothingAssetData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectClothingAssetData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectClothingAssetData,
                         (UObject *)pUVar1,L"CustomizableObjectClothingAssetData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectClothingAssetData.OuterSingleton;
}

// ~FCustomizableObjectClothingAssetData @ 14aba22e0

void __thiscall
FCustomizableObjectClothingAssetData::~FCustomizableObjectClothingAssetData
          (FCustomizableObjectClothingAssetData *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FCustomizableObjectClothConfigData,int>
            ((FCustomizableObjectClothConfigData *)(this->ConfigsData).AllocatorInstance.Data,
             (this->ConfigsData).ArrayNum);
  pFVar1 = (this->ConfigsData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBoneIndices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UsedBoneNames).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LodMap).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FClothLODDataCommon,int>
            ((FClothLODDataCommon *)(this->LodData).AllocatorInstance.Data,(this->LodData).ArrayNum)
  ;
  pFVar1 = (this->LodData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

