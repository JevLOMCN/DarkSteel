// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2be420

UScriptStruct * __cdecl FRigNullElement::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigNullElement,(UObject *)pUVar1,
                         L"RigNullElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton;
}

// ~FRigNullElement @ 14a2ded00

void __thiscall FRigNullElement::~FRigNullElement(FRigNullElement *this)

{
  *(undefined ***)this = &___7FRigNullElement__6B_;
  FRigMultiParentElement::~FRigMultiParentElement((FRigMultiParentElement *)this);
  return;
}

// GetElementTypeIndex @ 14a30ed60

int __thiscall FRigNullElement::GetElementTypeIndex(FRigNullElement *this)

{
  return 5;
}

// GetScriptStruct @ 14a317ec0

UScriptStruct * __thiscall FRigNullElement::GetScriptStruct(FRigNullElement *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigNullElement,(UObject *)pUVar1,
                         L"RigNullElement");
  }
  return Z_Registration_Info_UScriptStruct_FRigNullElement.OuterSingleton;
}

