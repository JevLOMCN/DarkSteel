// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 2

// StaticStruct @ 14a3818e0

UScriptStruct * __cdecl FControlRotationOrder::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FControlRotationOrder.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FControlRotationOrder.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FControlRotationOrder,(UObject *)pUVar1,
                         L"ControlRotationOrder");
  }
  return Z_Registration_Info_UScriptStruct_FControlRotationOrder.OuterSingleton;
}

// FControlRotationOrder @ 14a3b6ac0

FControlRotationOrder * __thiscall
FControlRotationOrder::FControlRotationOrder(FControlRotationOrder *this)

{
  this->RotationOrder = YZX;
  this->bOverrideSetting = false;
  return this;
}

