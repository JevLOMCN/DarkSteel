// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_CS
// Functions: 2

// StaticStruct @ 14a69d860

UScriptStruct * __cdecl FWN_CS_CharacterSoulInfo::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_WN_CS();
    Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FWN_CS_CharacterSoulInfo,(UObject *)pUVar1,
                         L"WN_CS_CharacterSoulInfo");
  }
  return Z_Registration_Info_UScriptStruct_FWN_CS_CharacterSoulInfo.OuterSingleton;
}

// operator= @ 14a6a3120

/* WARNING: Enum "EWN_CS_AnimationType": Some values do not have unique names */
/* WARNING: Enum "EWN_CS_CharacterWorkspaceVersion": Some values do not have unique names */

FWN_CS_CharacterSoulInfo * __thiscall
FWN_CS_CharacterSoulInfo::operator=
          (FWN_CS_CharacterSoulInfo *this,FWN_CS_CharacterSoulInfo *param_1)

{
  undefined8 uVar1;
  FName FVar2;
  
  this->bOwnedByCore = param_1->bOwnedByCore;
  this->bIsSoulVisible = param_1->bIsSoulVisible;
  this->bIsHidden = param_1->bIsHidden;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr =
       *(undefined8 *)&(param_1->SkeletalMesh).SoftObjectPtr;
  uVar1 = *(undefined8 *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x10;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr.field_0x8 =
       *(undefined8 *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x8;
  *(undefined8 *)&(this->SkeletalMesh).SoftObjectPtr.field_0x10 = uVar1;
  FUtf8String::operator=
            ((FUtf8String *)&(this->SkeletalMesh).SoftObjectPtr.field_0x18,
             (FUtf8String *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x18);
  FVar2 = (param_1->AnimPath).AssetPath.AssetName;
  (this->AnimPath).AssetPath.PackageName = (param_1->AnimPath).AssetPath.PackageName;
  (this->AnimPath).AssetPath.AssetName = FVar2;
  FUtf8String::operator=(&(this->AnimPath).SubPathString,&(param_1->AnimPath).SubPathString);
  this->AnimType = param_1->AnimType;
  this->WorkspaceVersion = param_1->WorkspaceVersion;
  return this;
}

