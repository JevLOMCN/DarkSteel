// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 4

// StaticStruct @ 14a69c7e0

UScriptStruct * __cdecl FWN_CS_CharacterDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterDesc,(UObject *)pUVar1,
                         L"WN_CS_CharacterDesc");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterDesc.OuterSingleton;
}

// FWN_CS_CharacterDesc @ 14a6a1890

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

FWN_CS_CharacterDesc * __thiscall
FWN_CS_CharacterDesc::FWN_CS_CharacterDesc(FWN_CS_CharacterDesc *this)

{
  undefined1 *this_00;
  
  this->bIsSoulVisible = false;
  this->bUseISKM = true;
  this->ID = 0;
  (this->Name).ComparisonIndex = 0;
  (this->Name).Number = 0;
  this->bIsHidden = true;
  this_00 = &(this->Skeleton).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Skeleton).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->Skeleton).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Skeleton).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Skeleton).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  this->AnimationType = AnimAsset;
  (this->AnimationPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->AnimationPath).AssetPath.PackageName.Number = 0;
  (this->AnimationPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->AnimationPath).AssetPath.AssetName.Number = 0;
  (this->AnimationPath).SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationPath).SubPathString.Data.ArrayNum = 0;
  (this->AnimationPath).SubPathString.Data.ArrayMax = 0;
  (this->CharacterPartDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterPartDescs).ArrayNum = 0;
  (this->CharacterPartDescs).ArrayMax = 0;
  (this->CharacterPresetDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterPresetDescs).ArrayNum = 0;
  (this->CharacterPresetDescs).ArrayMax = 0;
  return this;
}

// ~FWN_CS_CharacterDesc @ 14a6a29d0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_ResourceType": Some values do not have unique names */

void __thiscall FWN_CS_CharacterDesc::~FWN_CS_CharacterDesc(FWN_CS_CharacterDesc *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  DestructItems<FWN_CS_CharacterPresetDesc,int>
            ((FWN_CS_CharacterPresetDesc *)(this->CharacterPresetDescs).AllocatorInstance.Data,
             (this->CharacterPresetDescs).ArrayNum);
  pFVar1 = (this->CharacterPresetDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_CS_CharacterPartDesc,int>
            ((FWN_CS_CharacterPartDesc *)(this->CharacterPartDescs).AllocatorInstance.Data,
             (this->CharacterPartDescs).ArrayNum);
  pFVar1 = (this->CharacterPartDescs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->AnimationPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->Skeleton).SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
    return;
  }
  return;
}

// FindCharacterPresetDesc @ 14a6a85f0

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */

FWN_CS_CharacterPresetDesc * __thiscall
FWN_CS_CharacterDesc::FindCharacterPresetDesc(FWN_CS_CharacterDesc *this,int param_1)

{
  FWN_CS_CharacterPresetDesc *pFVar1;
  FWN_CS_CharacterPresetDesc *pFVar2;
  
  pFVar1 = (FWN_CS_CharacterPresetDesc *)(this->CharacterPresetDescs).AllocatorInstance.Data;
  pFVar2 = pFVar1 + (this->CharacterPresetDescs).ArrayNum;
  while( true ) {
    if (pFVar1 == pFVar2) {
      return (FWN_CS_CharacterPresetDesc *)0x0;
    }
    if (pFVar1->ID == param_1) break;
    pFVar1 = pFVar1 + 1;
  }
  return pFVar1;
}

