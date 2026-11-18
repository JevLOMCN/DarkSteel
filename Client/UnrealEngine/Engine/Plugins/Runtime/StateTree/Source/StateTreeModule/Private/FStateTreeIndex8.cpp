// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 2

// StaticStruct @ 14d5263d0

UScriptStruct * __cdecl FStateTreeIndex8::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex8,(UObject *)pUVar1,
                         L"StateTreeIndex8");
  }
  return Z_Registration_Info_UScriptStruct_FStateTreeIndex8.OuterSingleton;
}

// SerializeFromMismatchedTag @ 14d533930

bool __thiscall
FStateTreeIndex8::SerializeFromMismatchedTag
          (FStateTreeIndex8 *this,FPropertyTag *param_1,FStructuredArchiveSlot param_2)

{
  bool bVar1;
  uchar uVar2;
  uint uVar3;
  UPackage *pUVar4;
  FPropertyTypeName local_res10 [2];
  
  local_res10[0].Index = (param_1->TypeName).Index;
  if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
    Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16,(UObject *)pUVar4,
                         L"StateTreeIndex16");
  }
  bVar1 = UE::FPropertyTypeName::IsStruct
                    (local_res10,
                     (FName)(Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton)->
                            _padding_);
  if (bVar1) {
    local_res10[0].Index._0_2_ = 0xffff;
    if (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton == (UScriptStruct *)0x0)
    {
      pUVar4 = Z_Construct_UPackage__Script_StateTreeModule();
      Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FStateTreeIndex16,(UObject *)pUVar4,
                           L"StateTreeIndex16");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FStateTreeIndex16.OuterSingleton,param_2,
               local_res10,(void *)0x0);
    if (((short)local_res10[0].Index == -1) || (uVar3 = local_res10[0].Index & 0xffff, 0xfe < uVar3)
       ) {
      uVar3 = 0xffffffff;
    }
    uVar2 = (uchar)uVar3;
    if (uVar3 == 0xffffffff) {
      uVar2 = 0xff;
    }
    this->Value = uVar2;
    return true;
  }
  return false;
}

