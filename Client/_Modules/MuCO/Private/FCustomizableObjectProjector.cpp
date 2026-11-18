// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuCO
// Functions: 2

// StaticStruct @ 14ab9b0e0

UScriptStruct * __cdecl FCustomizableObjectProjector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomizableObjectProjector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CustomizableObject();
    Z_Registration_Info_UScriptStruct_FCustomizableObjectProjector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomizableObjectProjector,(UObject *)pUVar1,
                         L"CustomizableObjectProjector");
  }
  return Z_Registration_Info_UScriptStruct_FCustomizableObjectProjector.OuterSingleton;
}

// operator== @ 14abc1680

bool __thiscall
FCustomizableObjectProjector::operator==
          (FCustomizableObjectProjector *this,FCustomizableObjectProjector *param_1)

{
  if ((((((param_1->Position).field0_0x0._s_0.X == (this->Position).field0_0x0._s_0.X) &&
        ((param_1->Position).field0_0x0._s_0.Y == (this->Position).field0_0x0._s_0.Y)) &&
       ((param_1->Position).field0_0x0._s_0.Z == (this->Position).field0_0x0._s_0.Z)) &&
      (((((param_1->Direction).field0_0x0._s_0.X == (this->Direction).field0_0x0._s_0.X &&
         ((param_1->Direction).field0_0x0._s_0.Y == (this->Direction).field0_0x0._s_0.Y)) &&
        (((param_1->Direction).field0_0x0._s_0.Z == (this->Direction).field0_0x0._s_0.Z &&
         (((param_1->Up).field0_0x0._s_0.X == (this->Up).field0_0x0._s_0.X &&
          ((param_1->Up).field0_0x0._s_0.Y == (this->Up).field0_0x0._s_0.Y)))))) &&
       ((param_1->Up).field0_0x0._s_0.Z == (this->Up).field0_0x0._s_0.Z)))) &&
     (((((param_1->Scale).field0_0x0._s_0.X == (this->Scale).field0_0x0._s_0.X &&
        ((param_1->Scale).field0_0x0._s_0.Y == (this->Scale).field0_0x0._s_0.Y)) &&
       ((param_1->Scale).field0_0x0._s_0.Z == (this->Scale).field0_0x0._s_0.Z)) &&
      ((this->ProjectionType == param_1->ProjectionType && (param_1->Angle == this->Angle)))))) {
    return true;
  }
  return false;
}

