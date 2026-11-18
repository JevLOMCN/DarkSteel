// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// StaticStruct @ 143d838c0

UScriptStruct * __cdecl FClosestPhysicsObjectResult::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FClosestPhysicsObjectResult.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Chaos();
    Z_Registration_Info_UScriptStruct_FClosestPhysicsObjectResult.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FClosestPhysicsObjectResult,(UObject *)pUVar1,
                         L"ClosestPhysicsObjectResult");
  }
  return Z_Registration_Info_UScriptStruct_FClosestPhysicsObjectResult.OuterSingleton;
}

// HitName @ 143dae020

FName __thiscall FClosestPhysicsObjectResult::HitName(FClosestPhysicsObjectResult *this)

{
  FName in_RDX;
  
  if (this->PhysicsObject == (FPhysicsObject *)0x0) {
    *(undefined8 *)in_RDX = 0;
    return in_RDX;
  }
  *(FName *)in_RDX = this->PhysicsObject->BodyName;
  return in_RDX;
}

