// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69bc70

UScriptStruct * __cdecl FWN_CS_CharacterPresetDesc::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterPresetDesc,(UObject *)pUVar1,
                         L"WN_CS_CharacterPresetDesc");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterPresetDesc.OuterSingleton;
}

// FWN_CS_CharacterPresetDesc @ 14a6a1bc0

FWN_CS_CharacterPresetDesc * __thiscall
FWN_CS_CharacterPresetDesc::FWN_CS_CharacterPresetDesc(FWN_CS_CharacterPresetDesc *this)

{
  undefined1 *this_00;
  
  this->ID = 0;
  (this->Name).ComparisonIndex = 0;
  *(undefined8 *)&(this->Name).Number = 0;
  this_00 = &(this->SoulSKM).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoulSKM).SoftObjectPtr = 0;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SoulSKM).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoulSKM).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoulSKM).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->Guid).A = 0;
  (this->Guid).B = 0;
  (this->Guid).C = 0;
  (this->Guid).D = 0;
  this->Scale = 1.0;
  (this->FootStepProvider).ComparisonIndex = 0;
  (this->FootStepProvider).Number = 0;
  (this->CharacterLightDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterLightDescs).ArrayNum = 0;
  (this->CharacterLightDescs).ArrayMax = 0;
  (this->CharacterPresetSlotDescs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CharacterPresetSlotDescs).ArrayNum = 0;
  (this->CharacterPresetSlotDescs).ArrayMax = 0;
  (this->CollectBoundVertex).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollectBoundVertex).ArrayNum = 0;
  (this->CollectBoundVertex).ArrayMax = 0;
  this->Version = 0;
  return this;
}

