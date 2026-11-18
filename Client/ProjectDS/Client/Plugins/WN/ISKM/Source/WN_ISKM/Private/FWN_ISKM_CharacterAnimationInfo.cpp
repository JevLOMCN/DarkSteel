// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 2

// StaticStruct @ 14a838380

UScriptStruct * __cdecl FWN_ISKM_CharacterAnimationInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterAnimationInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_ISKM();
    Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterAnimationInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_ISKM_CharacterAnimationInfo,(UObject *)pUVar1
                         ,L"WN_ISKM_CharacterAnimationInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_ISKM_CharacterAnimationInfo.OuterSingleton;
}

// FWN_ISKM_CharacterAnimationInfo @ 14a83e780

FWN_ISKM_CharacterAnimationInfo * __thiscall
FWN_ISKM_CharacterAnimationInfo::FWN_ISKM_CharacterAnimationInfo
          (FWN_ISKM_CharacterAnimationInfo *this)

{
  undefined1 *puVar1;
  
  puVar1 = &(this->SoulSkeltalMesh).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->SoulSkeltalMesh).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->SoulSkeltalMesh).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SoulSkeltalMesh).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SoulSkeltalMesh).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->Profile).SoftObjectPtr.field_0x18;
  *(undefined8 *)&(this->Profile).SoftObjectPtr = 0;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->Profile).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  puVar1 = &(this->AnimAsset).SoftObjectPtr.field_0x18;
  this->PlayMode = Custom;
  *(undefined8 *)puVar1 = 0;
  *(undefined8 *)&(this->AnimAsset).SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->AnimAsset).SoftObjectPtr = 0;
  *(undefined8 *)&(this->AnimAsset).SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->AnimAsset).SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)puVar1,0);
  (this->AnimClass).Class.field0_0x0.DebugPtr = (UClass *)0x0;
  (this->AnimComp).field0_0x0.DebugPtr = (UWN_ISKM_AnimComponent *)0x0;
  return this;
}

