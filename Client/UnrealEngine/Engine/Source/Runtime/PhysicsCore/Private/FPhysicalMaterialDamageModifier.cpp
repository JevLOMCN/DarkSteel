// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 2

// StaticStruct @ 144135030

UScriptStruct * __cdecl FPhysicalMaterialDamageModifier::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialDamageModifier,(UObject *)pUVar1
                         ,L"PhysicalMaterialDamageModifier");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicalMaterialDamageModifier.OuterSingleton;
}

// FPhysicalMaterialDamageModifier @ 1441a0360

FPhysicalMaterialDamageModifier * __thiscall
FPhysicalMaterialDamageModifier::FPhysicalMaterialDamageModifier
          (FPhysicalMaterialDamageModifier *this)

{
  this->DamageThresholdMultiplier = 1.0;
  return this;
}

