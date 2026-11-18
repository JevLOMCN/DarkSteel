// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a11e4e0

UScriptStruct * __cdecl FRigVMFunction_VisualLogObject::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogObject.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogObject.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMFunction_VisualLogObject,(UObject *)pUVar1,
                         L"RigVMFunction_VisualLogObject");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMFunction_VisualLogObject.OuterSingleton;
}

// FRigVMFunction_VisualLogObject @ 14a190cc0

FRigVMFunction_VisualLogObject * __thiscall
FRigVMFunction_VisualLogObject::FRigVMFunction_VisualLogObject(FRigVMFunction_VisualLogObject *this)

{
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = (longlong)&___7FRigVMExecutePin__6B_;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0xbf800000;
  this->_padding_ = (longlong)&___7FRigVMFunction_VisualLogBase__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  ::FName::FName((FName *)&this->_padding_,L"VisLogRigVM");
  this->_padding_ = (longlong)&___7FRigVMFunction_VisualLogObject__6B_;
  (this->ObjectColor).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FLinearColor::Blue.field0_0x0;
  return this;
}

