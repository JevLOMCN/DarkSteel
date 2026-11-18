// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c6260

UScriptStruct * __cdecl FRigTagConnectionRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTagConnectionRule,(UObject *)pUVar1,
                         L"RigTagConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton;
}

// GetScriptStruct @ 14a2c62b0

UScriptStruct * __thiscall FRigTagConnectionRule::GetScriptStruct(FRigTagConnectionRule *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTagConnectionRule,(UObject *)pUVar1,
                         L"RigTagConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigTagConnectionRule.OuterSingleton;
}

// Resolve @ 14a2c62f0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FRigTagConnectionRule::Resolve
          (FRigTagConnectionRule *this,FRigElementResolveResult *__return_storage_ptr__,
          FRigBaseElement *param_1,FRigConnectionRuleInput *param_2)

{
  uint uVar1;
  ITextData *pIVar2;
  URigHierarchy *this_00;
  FName FVar3;
  bool bVar4;
  undefined3 uVar5;
  FNameEntryId FVar6;
  FText *pFVar7;
  ForAnyElementType FVar8;
  ITextData *local_res8;
  FName local_res10;
  FText local_68;
  TArray<FName,TSizedDefaultAllocator<32>_> local_58;
  FString local_48;
  FString local_38;
  
  pFVar7 = FText::FText((FText *)&local_58);
  uVar5 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar6.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (__return_storage_ptr__->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(__return_storage_ptr__->Key).field_0x1 = uVar5;
  (__return_storage_ptr__->Key).Name.ComparisonIndex = (FNameEntryId)FVar6.Value;
  (__return_storage_ptr__->Key).Name.Number = (param_1->Key).Name.Number;
  __return_storage_ptr__->State = PossibleTarget;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar7->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,&local_res8);
  }
  (__return_storage_ptr__->Message).Flags = pFVar7->Flags;
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    (**(code **)((longlong)*(FName *)local_58.AllocatorInstance.Data + 0x10))();
  }
  pFVar7 = FText::FText((FText *)&local_58);
  FRigElementResolveResult::SetPossibleTarget(__return_storage_ptr__,pFVar7);
  if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
    (**(code **)((longlong)*(FName *)local_58.AllocatorInstance.Data + 0x10))();
  }
  this_00 = param_2->Hierarchy;
  local_res8 = *(ITextData **)&param_1->Key;
  FVar3 = this->Tag;
  uVar1 = (param_1->Key).Name.Number;
  FLazyName::Resolve(&URigHierarchy::TagMetadataName);
  local_68.TextData.Reference = local_res8;
  local_68.Flags = uVar1;
  URigHierarchy::GetNameArrayMetadata(this_00,&local_58,(FRigElementKey *)&local_68,local_res10);
  FVar8.Data = local_58.AllocatorInstance.Data;
  do {
    if ((FName *)FVar8.Data ==
        (FName *)(local_58.AllocatorInstance.Data + (longlong)local_58.ArrayNum * 8)) {
      bVar4 = false;
LAB_14a2c6411:
      if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
        FMemory::Free(local_58.AllocatorInstance.Data);
      }
      if (!bVar4) {
        ::FName::ToString(&this->Tag,&local_38);
        FRigElementKey::ToString(&param_1->Key,&local_48);
        ::FString::PrintfImpl((FString *)&local_58,L"Element \'%s\' does not contain tag \'%s\'.");
        pFVar7 = FText::FromString(&local_68,(FString *)&local_58);
        FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar7);
        if (local_68.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
        }
        if ((FName *)local_58.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_58.AllocatorInstance.Data);
        }
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_38.Data.AllocatorInstance.Data);
        }
      }
      return __return_storage_ptr__;
    }
    if (*(FName *)FVar8.Data == FVar3) {
      bVar4 = true;
      goto LAB_14a2c6411;
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// ~FRigTagConnectionRule @ 14a2dee10

void __thiscall FRigTagConnectionRule::~FRigTagConnectionRule(FRigTagConnectionRule *this)

{
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  return;
}

