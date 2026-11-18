// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69b320

UScriptStruct * __cdecl FWN_CS_CharacterPresetSlotDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterPresetSlotDesc,(UObject *)pUVar1,
                         L"WN_CS_CharacterPresetSlotDesc");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetSlotDesc.OuterSingleton;
}

// FWN_CS_CharacterPresetSlotDesc @ 14a6a1c40

/* WARNING: Enum "EWN_CS_CharacterSlotName": Some values do not have unique names */

FWN_CS_CharacterPresetSlotDesc * __thiscall
FWN_CS_CharacterPresetSlotDesc::FWN_CS_CharacterPresetSlotDesc
          (FWN_CS_CharacterPresetSlotDesc *this,FWN_CS_CharacterPresetSlotDesc *param_1)

{
  TArray<FWN_CS_CharacterPresetSlotMaterialDesc,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FWN_CS_CharacterPresetSlotMaterialDesc *pFVar4;
  
  pTVar1 = &this->MaterialDescs;
  this->ID = param_1->ID;
  this->SlotName = param_1->SlotName;
  this->ID_Character = param_1->ID_Character;
  this->ID_Preset = param_1->ID_Preset;
  this->ID_Part = param_1->ID_Part;
  this->Scale = param_1->Scale;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  piVar2 = &(this->MaterialDescs).ArrayMax;
  iVar3 = (param_1->MaterialDescs).ArrayNum;
  pFVar4 = (FWN_CS_CharacterPresetSlotMaterialDesc *)(param_1->MaterialDescs).AllocatorInstance.Data
  ;
  (this->MaterialDescs).ArrayNum = iVar3;
  if (iVar3 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xa8,8,iVar3,0,&pTVar1->AllocatorInstance,iVar3,piVar2);
    ConstructItems<FWN_CS_CharacterPresetSlotMaterialDesc,FWN_CS_CharacterPresetSlotMaterialDesc,int>
              ((pTVar1->AllocatorInstance).Data,pFVar4,iVar3);
  }
  return this;
}

