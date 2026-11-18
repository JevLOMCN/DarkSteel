// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab96c70

UScriptStruct * __cdecl FMutableModelImageProperties::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FMutableModelImageProperties.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FMutableModelImageProperties.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FMutableModelImageProperties,(UObject *)pUVar1,
                         L"MutableModelImageProperties");
  }
  return Z_Registration_Info_UScriptStruct_FMutableModelImageProperties.OuterSingleton;
}

// operator!= @ 14abc1830

bool __thiscall
FMutableModelImageProperties::operator!=
          (FMutableModelImageProperties *this,FMutableModelImageProperties *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar4 = (this->TextureParameterName).Data.ArrayNum;
  iVar1 = (param_1->TextureParameterName).Data.ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) goto LAB_14abc186a;
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(this->TextureParameterName).Data.AllocatorInstance.Data,
                       (wchar_t *)(param_1->TextureParameterName).Data.AllocatorInstance.Data);
    bVar5 = iVar4 == 0;
  }
  else {
    bVar5 = iVar4 + iVar1 == 1;
  }
  if (!bVar5) {
    return true;
  }
LAB_14abc186a:
  if ((this->Filter).Value == (param_1->Filter).Value) {
    uVar2 = *(undefined4 *)&this->field_0x14;
    uVar3 = *(undefined4 *)&param_1->field_0x14;
    if (((((((ZPULL(uVar2,0,1) ^ ZPULL(uVar3,0,1)) & 1) == 0) && (((uVar3 ^ uVar2) & 2) == 0)) &&
         (((uVar3 ^ uVar2) & 4) == 0)) &&
        ((this->LODBias == param_1->LODBias &&
         ((this->MipGenSettings).Value == (param_1->MipGenSettings).Value)))) &&
       (((this->LODGroup).Value == (param_1->LODGroup).Value &&
        (((this->AddressX).Value == (param_1->AddressX).Value &&
         ((this->AddressY).Value == (param_1->AddressY).Value)))))) {
      return false;
    }
  }
  return true;
}

