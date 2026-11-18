// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c41c0

UScriptStruct * __cdecl FRigConnectionRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRule,(UObject *)pUVar1,
                         L"RigConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton;
}

// ~FRigConnectionRule @ 14a2de910

void __thiscall FRigConnectionRule::~FRigConnectionRule(FRigConnectionRule *this)

{
  *this = (FRigConnectionRule)&___7FRigConnectionRule__6B_;
  return;
}

// GetScriptStruct @ 14a317da0

UScriptStruct * __thiscall FRigConnectionRule::GetScriptStruct(FRigConnectionRule *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigConnectionRule,(UObject *)pUVar1,
                         L"RigConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigConnectionRule.OuterSingleton;
}

// Resolve @ 14a342430

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FRigConnectionRule::Resolve
          (FRigConnectionRule *this,FRigElementResolveResult *__return_storage_ptr__,
          FRigBaseElement *param_1,FRigConnectionRuleInput *param_2)

{
  ITextData *pIVar1;
  undefined3 uVar2;
  FNameEntryId FVar3;
  FText *pFVar4;
  undefined1 local_res10 [8];
  FText local_18;
  
  pFVar4 = FText::FText(&local_18);
  uVar2 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar3.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (__return_storage_ptr__->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(__return_storage_ptr__->Key).field_0x1 = uVar2;
  (__return_storage_ptr__->Key).Name.ComparisonIndex = (FNameEntryId)FVar3.Value;
  (__return_storage_ptr__->Key).Name.Number = (param_1->Key).Name.Number;
  __return_storage_ptr__->State = PossibleTarget;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar1 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res10);
  }
  (__return_storage_ptr__->Message).Flags = pFVar4->Flags;
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  pFVar4 = FText::FText(&local_18);
  FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar4);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

