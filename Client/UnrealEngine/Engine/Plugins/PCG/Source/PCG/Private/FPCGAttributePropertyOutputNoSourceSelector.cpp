// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PCG
// Functions: 2

// StaticStruct @ 149d76ca0

UScriptStruct * __cdecl FPCGAttributePropertyOutputNoSourceSelector::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector,
                         (UObject *)pUVar1,L"PCGAttributePropertyOutputNoSourceSelector");
  }
  return Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.
         OuterSingleton;
}

// SerializeFromMismatchedTag @ 149e8d9e0

bool __thiscall
FPCGAttributePropertyOutputNoSourceSelector::SerializeFromMismatchedTag
          (FPCGAttributePropertyOutputNoSourceSelector *this,FPropertyTag *param_1,
          FStructuredArchiveSlot param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  bool bVar4;
  FNameEntryId FVar5;
  UPackage *pUVar6;
  FName FVar7;
  undefined4 extraout_var;
  longlong local_res10;
  undefined1 local_res20 [8];
  
  iVar1 = (param_1->TypeName).Index;
  local_res10._0_4_ = iVar1;
  if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_PCG();
    Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertySelector,(UObject *)pUVar6,
                         L"PCGAttributePropertySelector");
  }
  bVar4 = UE::FPropertyTypeName::IsStruct
                    ((FPropertyTypeName *)&local_res10,
                     (FName)(Z_Registration_Info_UScriptStruct_FPCGAttributePropertySelector.
                            OuterSingleton)->_padding_);
  if (bVar4) {
    if (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.OuterSingleton
        == (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_PCG();
      Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector,
                           (UObject *)pUVar6,L"PCGAttributePropertyOutputNoSourceSelector");
    }
    UScriptStruct::SerializeItem
              (Z_Registration_Info_UScriptStruct_FPCGAttributePropertyOutputNoSourceSelector.
               OuterSingleton,param_2,this,(void *)0x0);
    return true;
  }
  local_res10 = CONCAT44(local_res10._4_4_,(param_1->TypeName).Index);
  FVar7 = UE::FPropertyTypeName::GetName((FPropertyTypeName *)&local_res10);
  uVar2 = *(ulonglong *)FVar7;
  FVar5 = FNameEntryId::FromValidEName((EName)local_res20);
  if (uVar2 == *(uint *)CONCAT44(extraout_var,FVar5.Value)) {
    local_res10 = 0;
    (**(code **)(**(longlong **)(*(longlong *)param_2 + 8) + 0x178))
              (*(longlong **)(*(longlong *)param_2 + 8),&local_res10);
    lVar3 = local_res10;
    FPCGAttributePropertySelector::ResetExtraNames((FPCGAttributePropertySelector *)this);
    if ((*(int *)&this->field_0x8 != 0) || (*(longlong *)&this->field_0x14 != lVar3)) {
      *(undefined4 *)&this->field_0x8 = 0;
      *(longlong *)&this->field_0x14 = lVar3;
    }
    return true;
  }
  return false;
}

