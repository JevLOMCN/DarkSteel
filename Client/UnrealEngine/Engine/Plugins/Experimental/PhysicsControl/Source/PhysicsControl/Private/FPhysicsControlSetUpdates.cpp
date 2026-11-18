// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PhysicsControl
// Functions: 2

// StaticStruct @ 14d9afe50

UScriptStruct * __cdecl FPhysicsControlSetUpdates::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PhysicsControl();
    Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPhysicsControlSetUpdates,(UObject *)pUVar1,
                         L"PhysicsControlSetUpdates");
  }
  return Z_Registration_Info_UScriptStruct_FPhysicsControlSetUpdates.OuterSingleton;
}

// operator+= @ 14d9c4ff0

FPhysicsControlSetUpdates * __thiscall
FPhysicsControlSetUpdates::operator+=
          (FPhysicsControlSetUpdates *this,FPhysicsControlSetUpdates *param_1)

{
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::
  Append<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>
            (&this->ControlSetUpdates,&param_1->ControlSetUpdates);
  TArray<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>::
  Append<FPhysicsControlSetUpdate,TSizedDefaultAllocator<32>_>
            (&this->ModifierSetUpdates,&param_1->ModifierSetUpdates);
  return this;
}

