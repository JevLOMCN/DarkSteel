// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// StaticStruct @ 14a129900

UScriptStruct * __cdecl FRigVMTag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigVMTag.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_RigVM();
    Z_Registration_Info_UScriptStruct_FRigVMTag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigVMTag,(UObject *)pUVar1,L"RigVMTag");
  }
  return Z_Registration_Info_UScriptStruct_FRigVMTag.OuterSingleton;
}

// FRigVMTag @ 14a190de0

FRigVMTag * __thiscall FRigVMTag::FRigVMTag(FRigVMTag *this,FRigVMTag *param_1)

{
  ITextData *pIVar1;
  undefined8 uVar2;
  undefined1 local_res8 [8];
  
  this->Name = param_1->Name;
  ::FString::FString(&this->Label,&param_1->Label);
  (this->ToolTip).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_1->ToolTip).TextData.Reference;
  (this->ToolTip).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->ToolTip).Flags = (param_1->ToolTip).Flags;
  uVar2 = *(undefined8 *)((longlong)&(param_1->Color).field0_0x0 + 8);
  *(undefined8 *)&(this->Color).field0_0x0 = *(undefined8 *)&(param_1->Color).field0_0x0;
  *(undefined8 *)((longlong)&(this->Color).field0_0x0 + 8) = uVar2;
  this->bShowInUserInterface = param_1->bShowInUserInterface;
  this->bMarksSubjectAsInvalid = param_1->bMarksSubjectAsInvalid;
  return this;
}

