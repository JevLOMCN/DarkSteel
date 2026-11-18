// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 2

// StaticStruct @ 142d51b00

UScriptStruct * __cdecl FCustomTextFilterData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCustomTextFilterData.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ToolWidgets();
    Z_Registration_Info_UScriptStruct_FCustomTextFilterData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCustomTextFilterData,(UObject *)pUVar1,
                         L"CustomTextFilterData");
  }
  return Z_Registration_Info_UScriptStruct_FCustomTextFilterData.OuterSingleton;
}

// operator= @ 142d69020

FCustomTextFilterData * __thiscall
FCustomTextFilterData::operator=(FCustomTextFilterData *this,FCustomTextFilterData *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined8 uVar3;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->FilterLabel).TextData.Reference;
  pIVar2 = (this->FilterLabel).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->FilterLabel).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->FilterLabel).Flags = (param_1->FilterLabel).Flags;
  pIVar1 = (param_1->FilterString).TextData.Reference;
  pIVar2 = (this->FilterString).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->FilterString).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->FilterString).Flags = (param_1->FilterString).Flags;
  uVar3 = *(undefined8 *)((longlong)&(param_1->FilterColor).field0_0x0 + 8);
  *(undefined8 *)&(this->FilterColor).field0_0x0 = *(undefined8 *)&(param_1->FilterColor).field0_0x0
  ;
  *(undefined8 *)((longlong)&(this->FilterColor).field0_0x0 + 8) = uVar3;
  return this;
}

