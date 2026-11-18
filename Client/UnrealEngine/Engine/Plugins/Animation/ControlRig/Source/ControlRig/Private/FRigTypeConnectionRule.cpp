// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c5e40

UScriptStruct * __cdecl FRigTypeConnectionRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTypeConnectionRule,(UObject *)pUVar1,
                         L"RigTypeConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton;
}

// GetScriptStruct @ 14a2c5ec0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

UScriptStruct * __thiscall FRigTypeConnectionRule::GetScriptStruct(FRigTypeConnectionRule *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigTypeConnectionRule,(UObject *)pUVar1,
                         L"RigTypeConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigTypeConnectionRule.OuterSingleton;
}

// Resolve @ 14a2c5f00

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FRigTypeConnectionRule::Resolve
          (FRigTypeConnectionRule *this,FRigElementResolveResult *__return_storage_ptr__,
          FRigBaseElement *param_1,FRigConnectionRuleInput *param_2)

{
  ERigElementType EVar1;
  ITextData *pIVar2;
  FScriptContainerElement *_Src;
  undefined3 uVar3;
  FNameEntryId FVar4;
  FText *pFVar5;
  UPackage *pUVar6;
  FString *pFVar7;
  longlong lVar8;
  undefined1 local_res8 [8];
  ForAnyElementType local_58;
  int local_50;
  int local_4c;
  FText local_48;
  FText local_38;
  FString local_28;
  
  pFVar5 = FText::FText(&local_48);
  uVar3 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar4.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (__return_storage_ptr__->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(__return_storage_ptr__->Key).field_0x1 = uVar3;
  (__return_storage_ptr__->Key).Name.ComparisonIndex = (FNameEntryId)FVar4.Value;
  (__return_storage_ptr__->Key).Name.Number = (param_1->Key).Name.Number;
  __return_storage_ptr__->State = PossibleTarget;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar2 = (pFVar5->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  (__return_storage_ptr__->Message).Flags = pFVar5->Flags;
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  pFVar5 = FText::FText(&local_48);
  FRigElementResolveResult::SetPossibleTarget(__return_storage_ptr__,pFVar5);
  if (local_48.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
  }
  EVar1 = (param_1->Key).Type;
  if ((this->ElementType & EVar1) != EVar1) {
    if (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton == (UEnum *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_ControlRig();
      Z_Registration_Info_UEnum_ERigElementType.OuterSingleton =
           GetStaticEnum(Z_Construct_UEnum_ControlRig_ERigElementType,(UObject *)pUVar6,
                         L"ERigElementType");
    }
    pFVar5 = UEnum::GetDisplayNameTextByValue
                       (Z_Registration_Info_UEnum_ERigElementType.OuterSingleton,&local_48,
                        (ulonglong)this->ElementType);
    pFVar7 = FText::ToString(pFVar5);
    local_58.Data = (FScriptContainerElement *)0x0;
    local_50 = (pFVar7->Data).ArrayNum;
    lVar8 = (longlong)local_50;
    _Src = (pFVar7->Data).AllocatorInstance.Data;
    if (local_50 == 0) {
      local_4c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_50,0,&local_58,local_50,&local_4c);
      memcpy(local_58.Data,_Src,lVar8 * 2);
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_48.TextData.Reference + 0x10))();
    }
    FRigElementKey::ToString(&param_1->Key,&local_28);
    ::FString::PrintfImpl((FString *)&local_48,L"Element \'%s\' is not of the expected type (%s).");
    pFVar5 = FText::FromString(&local_38,(FString *)&local_48);
    FRigElementResolveResult::SetInvalidTarget(__return_storage_ptr__,pFVar5);
    if (local_38.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_38.TextData.Reference + 0x10))();
    }
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      FMemory::Free(local_48.TextData.Reference);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_58.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data);
    }
  }
  return __return_storage_ptr__;
}

// ~FRigTypeConnectionRule @ 14a2dee30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall FRigTypeConnectionRule::~FRigTypeConnectionRule(FRigTypeConnectionRule *this)

{
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  return;
}

