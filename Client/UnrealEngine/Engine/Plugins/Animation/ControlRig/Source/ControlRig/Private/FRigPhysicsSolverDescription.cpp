// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a381d60

UScriptStruct * __cdecl FRigPhysicsSolverDescription::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigPhysicsSolverDescription.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigPhysicsSolverDescription.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigPhysicsSolverDescription,(UObject *)pUVar1,
                         L"RigPhysicsSolverDescription");
  }
  return Z_Registration_Info_UScriptStruct_FRigPhysicsSolverDescription.OuterSingleton;
}

// Serialize @ 14a456900

void __thiscall
FRigPhysicsSolverDescription::Serialize(FRigPhysicsSolverDescription *this,FArchive *param_1)

{
  ::operator<<(param_1,(FGuid *)this);
                    /* WARNING: Could not recover jumptable at 0x00014a45692f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->Name);
  return;
}

