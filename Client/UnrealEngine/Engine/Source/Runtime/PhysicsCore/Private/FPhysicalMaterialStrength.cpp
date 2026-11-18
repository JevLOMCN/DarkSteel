// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsCore
// Functions: 2

// StaticStruct @ 144134ff0

UScriptStruct * __cdecl FPhysicalMaterialStrength::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsCore();
    Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicalMaterialStrength,(UObject *)pUVar1,
                         L"PhysicalMaterialStrength");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicalMaterialStrength.OuterSingleton;
}

// FPhysicalMaterialStrength @ 1441a0370

FPhysicalMaterialStrength * __thiscall
FPhysicalMaterialStrength::FPhysicalMaterialStrength(FPhysicalMaterialStrength *this)

{
  this->TensileStrength = 2.0;
  this->CompressionStrength = 20.0;
  this->ShearStrength = 6.0;
  return this;
}

