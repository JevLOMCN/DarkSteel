// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 3

// StaticStruct @ 1482cc6d0

UScriptStruct * __cdecl FChaosPhysicsSettings::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FChaosPhysicsSettings,(UObject *)pUVar1,
                         L"ChaosPhysicsSettings");
  }
  return Z_Registration_Info_UScriptStruct_FChaosPhysicsSettings.OuterSingleton;
}

// FChaosPhysicsSettings @ 1482d86c0

FChaosPhysicsSettings * __thiscall
FChaosPhysicsSettings::FChaosPhysicsSettings(FChaosPhysicsSettings *this)

{
  this->DefaultThreadingModel = TaskGraph;
  this->DedicatedThreadTickMode = VariableCappedWithTarget;
  this->DedicatedThreadBufferMode = Double;
  return this;
}

// OnSettingsUpdated @ 148315660

void __thiscall FChaosPhysicsSettings::OnSettingsUpdated(FChaosPhysicsSettings *this)

{
  return;
}

