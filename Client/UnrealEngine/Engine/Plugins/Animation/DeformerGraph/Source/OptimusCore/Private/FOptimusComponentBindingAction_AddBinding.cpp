// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 5

// StaticStruct @ 14e104900

UScriptStruct * __cdecl FOptimusComponentBindingAction_AddBinding::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_AddBinding.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_OptimusCore();
    Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_AddBinding.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FOptimusComponentBindingAction_AddBinding,
                         (UObject *)pUVar1,L"OptimusComponentBindingAction_AddBinding");
  }
  return Z_Registration_Info_UScriptStruct_FOptimusComponentBindingAction_AddBinding.OuterSingleton;
}

// Do @ 14e104940

bool __thiscall
FOptimusComponentBindingAction_AddBinding::Do
          (FOptimusComponentBindingAction_AddBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  UOptimusComponentSource *pUVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UOptimusDeformer *this_00;
  UClass *pUVar7;
  UClass *pUVar8;
  UOptimusComponentSourceBinding *pUVar9;
  FTopLevelAssetPath local_18;
  
  if (param_1 != (IOptimusPathResolver *)0x0) {
    this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
    if (this_00 != (UOptimusDeformer *)0x0) {
      pUVar7 = UOptimusDeformer::StaticClass();
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) goto LAB_14e10498d;
    }
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e10498d:
  local_18.PackageName = (this->ComponentSourceClassPath).PackageName;
  local_18.AssetName = (this->ComponentSourceClassPath).AssetName;
  pUVar7 = Z_Construct_UClass_UClass_NoRegister();
  pUVar7 = (UClass *)StaticFindObject(pUVar7,&local_18,None);
  if (pUVar7 != (UClass *)0x0) {
    pUVar8 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((iVar1 <= *(int *)(pUVar7->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar8->_padding_)) {
      if ((pUVar7->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
        UClass::InternalCreateDefaultObjectWrapper(pUVar7);
      }
      pUVar2 = (UOptimusComponentSource *)(pUVar7->ClassDefaultObject).field0_0x0.DebugPtr;
      pUVar7 = UOptimusComponentSource::StaticClass();
      lVar3 = *(longlong *)&pUVar2->field_0x10;
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(lVar3 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Ret->IsA(T::StaticClass())",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                           ,0x1181,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      pUVar9 = UOptimusDeformer::CreateComponentBindingDirect
                         (this_00,pUVar2,this->ComponentBindingName);
      if (pUVar9 != (UOptimusComponentSourceBinding *)0x0) {
        bVar5 = UOptimusDeformer::AddComponentBindingDirect(this_00,pUVar9,-1);
        if (bVar5) {
          return true;
        }
        Optimus::RemoveObject((UObject *)pUVar9);
      }
    }
  }
  return false;
}

// Undo @ 14e104ab0

bool __thiscall
FOptimusComponentBindingAction_AddBinding::Undo
          (FOptimusComponentBindingAction_AddBinding *this,IOptimusPathResolver *param_1)

{
  int iVar1;
  bool bVar2;
  UOptimusComponentSourceBinding *pUVar3;
  UOptimusDeformer *this_00;
  UClass *pUVar4;
  
  pUVar3 = (UOptimusComponentSourceBinding *)
           (**(code **)((longlong)*param_1 + 0x40))(param_1,this->ComponentBindingName);
  if (pUVar3 == (UOptimusComponentSourceBinding *)0x0) {
    return false;
  }
  this_00 = (UOptimusDeformer *)(**(code **)((longlong)*param_1 + 8))(param_1);
  if (this_00 != (UOptimusDeformer *)0x0) {
    pUVar4 = UOptimusDeformer::StaticClass();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar4->_padding_)) goto LAB_14e104b13;
  }
  this_00 = (UOptimusDeformer *)0x0;
LAB_14e104b13:
  bVar2 = UOptimusDeformer::RemoveComponentBindingDirect(this_00,pUVar3);
  return bVar2;
}

// FOptimusComponentBindingAction_AddBinding @ 14e150a10

FOptimusComponentBindingAction_AddBinding * __thiscall
FOptimusComponentBindingAction_AddBinding::FOptimusComponentBindingAction_AddBinding
          (FOptimusComponentBindingAction_AddBinding *this,UOptimusComponentSource *param_1,
          FName param_2)

{
  code *pcVar1;
  FName FVar2;
  FName FVar3;
  bool bVar4;
  FOptimusComponentBindingAction_AddBinding *pFVar5;
  FTopLevelAssetPath *pFVar6;
  FString *pFVar7;
  wchar_t *pwVar8;
  FString local_28;
  FTopLevelAssetPath local_18;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOptimusComponentBindingAction_AddBinding__6B_;
  (this->ComponentBindingName).ComparisonIndex = 0;
  (this->ComponentBindingName).Number = 0;
  (this->ComponentSourceClassPath).PackageName.ComparisonIndex = 0;
  (this->ComponentSourceClassPath).PackageName.Number = 0;
  (this->ComponentSourceClassPath).AssetName.ComparisonIndex = 0;
  (this->ComponentSourceClassPath).AssetName.Number = 0;
  if (param_1 == (UOptimusComponentSource *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_2192620421386338283>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\DeformerGraph\\Source\\OptimusCore\\Private\\Actions\\OptimusComponentBindingActions.cpp"
                       ,0x15,"InComponentSource");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pFVar5 = (FOptimusComponentBindingAction_AddBinding *)(*pcVar1)();
      return pFVar5;
    }
  }
  else {
    pFVar6 = UStruct::GetStructPathName(*(UStruct **)&param_1->field_0x10,&local_18);
    FVar2 = pFVar6->PackageName;
    FVar3 = pFVar6->AssetName;
    this->ComponentBindingName = param_2;
    (this->ComponentSourceClassPath).PackageName = FVar2;
    (this->ComponentSourceClassPath).AssetName = FVar3;
    pFVar7 = ::FName::ToString(&this->ComponentBindingName,&local_28);
    if ((pFVar7->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
    }
    FOptimusAction::SetTitlef<wchar_t_const_*>
              ((FOptimusAction *)this,
               (TCheckedFormatStringPrivate<wchar_t,wchar_t_const_*>)0x152e04d18,pwVar8);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return this;
}

// GetComponentBinding @ 14e1bd000

UOptimusComponentSourceBinding * __thiscall
FOptimusComponentBindingAction_AddBinding::GetComponentBinding
          (FOptimusComponentBindingAction_AddBinding *this,IOptimusPathResolver *param_1)

{
  UOptimusComponentSourceBinding *pUVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e1bd00d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pUVar1 = (UOptimusComponentSourceBinding *)
           (**(code **)((longlong)*param_1 + 0x40))(param_1,this->ComponentBindingName);
  return pUVar1;
}

