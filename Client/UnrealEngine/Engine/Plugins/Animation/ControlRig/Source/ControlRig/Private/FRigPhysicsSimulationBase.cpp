// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a381b60

UScriptStruct * __cdecl FRigPhysicsSimulationBase::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigPhysicsSimulationBase.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigPhysicsSimulationBase.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigPhysicsSimulationBase,(UObject *)pUVar1,
                         L"RigPhysicsSimulationBase");
  }
  return Z_Registration_Info_UScriptStruct_FRigPhysicsSimulationBase.OuterSingleton;
}

// ~FRigPhysicsSimulationBase @ 14a3bcd50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
FRigPhysicsSimulationBase::~FRigPhysicsSimulationBase(FRigPhysicsSimulationBase *this)

{
  this->_padding_ = (longlong)&___7FRigPhysicsSimulationBase__6B_;
  return;
}

