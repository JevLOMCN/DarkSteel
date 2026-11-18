// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 3

// StaticStruct @ 14a2bd2a0

UScriptStruct * __cdecl FRigElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigElement,(UObject *)pUVar1,L"RigElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigElement.OuterSingleton;
}

// ~FRigElement @ 14a2deb90

void __thiscall FRigElement::~FRigElement(FRigElement *this)

{
  this->_padding_ = (longlong)&___7FRigElement__6B_;
  return;
}

// GetElementType @ 14a30ed10

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

ERigElementType __thiscall FRigElement::GetElementType(FRigElement *this)

{
  return None;
}

