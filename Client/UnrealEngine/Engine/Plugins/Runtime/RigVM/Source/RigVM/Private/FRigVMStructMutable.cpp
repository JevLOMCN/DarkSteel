// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// ~FRigVMStructMutable @ 14a07bf70

void __thiscall FRigVMStructMutable::~FRigVMStructMutable(FRigVMStructMutable *this)

{
  this->_padding_ = (longlong)&___7FRigVMStruct__6B_;
  return;
}

// StaticStruct @ 14a0ab900

UScriptStruct * __cdecl FRigVMStructMutable::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMStructMutable.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMStructMutable.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMStructMutable,(UObject *)pUVar1,
                         L"RigVMStructMutable");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMStructMutable.OuterSingleton;
}

