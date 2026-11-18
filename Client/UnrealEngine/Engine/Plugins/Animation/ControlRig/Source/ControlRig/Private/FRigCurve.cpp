// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a2b9270

UScriptStruct * __cdecl FRigCurve::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigCurve,(UObject *)pUVar1,L"RigCurve");
  }
  return Z_Registration_Info_UScriptStruct_FRigCurve.OuterSingleton;
}

// ~FRigCurve @ 14a2dea50

void __thiscall FRigCurve::~FRigCurve(FRigCurve *this)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  return;
}

// GetElementType @ 14a30ed00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall FRigCurve::GetElementType(FRigCurve *this)

{
  return Curve;
}

