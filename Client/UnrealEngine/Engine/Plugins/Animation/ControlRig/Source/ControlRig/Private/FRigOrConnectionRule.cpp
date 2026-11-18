// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 4

// StaticStruct @ 14a2c5a70

UScriptStruct * __cdecl FRigOrConnectionRule::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigOrConnectionRule,(UObject *)pUVar1,
                         L"RigOrConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton;
}

// GetScriptStruct @ 14a2c5af0

UScriptStruct * __thiscall FRigOrConnectionRule::GetScriptStruct(FRigOrConnectionRule *this)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_ControlRig();
    Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FRigOrConnectionRule,(UObject *)pUVar1,
                         L"RigOrConnectionRule");
  }
  return Z_Registration_Info_UScriptStruct_FRigOrConnectionRule.OuterSingleton;
}

// Resolve @ 14a2c5b30

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

FRigElementResolveResult * __thiscall
FRigOrConnectionRule::Resolve
          (FRigOrConnectionRule *this,FRigElementResolveResult *__return_storage_ptr__,
          FRigBaseElement *param_1,FRigConnectionRuleInput *param_2)

{
  undefined8 uVar1;
  int iVar2;
  ITextData *pIVar3;
  undefined3 uVar4;
  FNameEntryId FVar5;
  FText *pFVar6;
  FRigConnectionRule *pFVar7;
  undefined8 *puVar8;
  FRigConnectionRuleStash *this_00;
  FRigConnectionRuleStash *pFVar9;
  undefined1 local_res8 [8];
  TSharedPtr<FStructOnScope,1> local_58;
  undefined1 local_48 [16];
  longlong *local_38;
  
  pFVar6 = FText::FText((FText *)&local_58);
  uVar4 = *(undefined3 *)&(param_1->Key).field_0x1;
  FVar5.Value = (param_1->Key).Name.ComparisonIndex.Value;
  (__return_storage_ptr__->Key).Type = (param_1->Key).Type;
  *(undefined3 *)&(__return_storage_ptr__->Key).field_0x1 = uVar4;
  (__return_storage_ptr__->Key).Name.ComparisonIndex = (FNameEntryId)FVar5.Value;
  (__return_storage_ptr__->Key).Name.Number = (param_1->Key).Name.Number;
  __return_storage_ptr__->State = PossibleTarget;
  (__return_storage_ptr__->Message).TextData.Reference = (ITextData *)0x0;
  pIVar3 = (pFVar6->TextData).Reference;
  (__return_storage_ptr__->Message).TextData.Reference = pIVar3;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 8))(pIVar3,local_res8);
  }
  (__return_storage_ptr__->Message).Flags = pFVar6->Flags;
  if (local_58.Object != (FStructOnScope *)0x0) {
    (**(code **)((local_58.Object)->_padding_ + 0x10))();
  }
  pFVar6 = FText::FText((FText *)&local_58);
  FRigElementResolveResult::SetPossibleTarget(__return_storage_ptr__,pFVar6);
  if (local_58.Object != (FStructOnScope *)0x0) {
    (**(code **)((local_58.Object)->_padding_ + 0x10))();
  }
  iVar2 = (this->ChildRules).ArrayNum;
  this_00 = (FRigConnectionRuleStash *)(this->ChildRules).AllocatorInstance.Data;
  pFVar9 = this_00 + iVar2;
  local_58.Object = (FStructOnScope *)0x0;
  local_58.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  while( true ) {
    if ((this->ChildRules).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRigConnectionRuleStash_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (this_00 == pFVar9) break;
    if ((1 < (this_00->ScriptStructPath).Data.ArrayNum) &&
       (1 < (this_00->ExportedText).Data.ArrayNum)) {
      pFVar7 = FRigConnectionRuleStash::Get(this_00,&local_58);
      if (pFVar7 != (FRigConnectionRule *)0x0) {
        puVar8 = (undefined8 *)
                 (**(code **)((longlong)*pFVar7 + 0x10))(pFVar7,local_48,param_1,param_2);
        uVar1 = *puVar8;
        (__return_storage_ptr__->Key).Type = (char)uVar1;
        *(int3 *)&(__return_storage_ptr__->Key).field_0x1 = (int3)((ulonglong)uVar1 >> 8);
        (__return_storage_ptr__->Key).Name.ComparisonIndex =
             (FNameEntryId)(int)((ulonglong)uVar1 >> 0x20);
        (__return_storage_ptr__->Key).Name.Number = *(uint *)(puVar8 + 1);
        __return_storage_ptr__->State = *(ERigElementResolveState *)((longlong)puVar8 + 0xc);
        FText::operator=(&__return_storage_ptr__->Message,(FText *)(puVar8 + 2));
        if (local_38 != (longlong *)0x0) {
          (**(code **)(*local_38 + 0x10))();
        }
        if ((__return_storage_ptr__->State == PossibleTarget) ||
           (__return_storage_ptr__->State == DefaultTarget)) break;
      }
    }
    this_00 = this_00 + 1;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_58.SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// ~FRigOrConnectionRule @ 14a2ded20

void __thiscall FRigOrConnectionRule::~FRigOrConnectionRule(FRigOrConnectionRule *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FRigOrConnectionRule__6B_;
  DestructItems<FRigConnectionRuleStash,int>
            ((FRigConnectionRuleStash *)(this->ChildRules).AllocatorInstance.Data,
             (this->ChildRules).ArrayNum);
  pFVar1 = (this->ChildRules).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7FRigConnectionRule__6B_;
  return;
}

